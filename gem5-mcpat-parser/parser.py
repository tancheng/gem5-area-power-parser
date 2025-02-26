#!/usr/bin/env python
#==============================================================================
# parser.py
#==============================================================================
# Parse gem5 stats for mcpat
#
# Author  : Tuan Ta, Cheng Tan
# Date    : 19/10/09

from __future__ import print_function

import os
import re
import json
import argparse
import util
import sys

output_dir = "./output"
stats_file = sys.argv[1]
out_file = sys.argv[2]

def readFiles():
  if not os.path.isfile( stats_file ):
    print("No stats.txt")
    exit(0)
  with open(stats_file, "r") as f:
    lines = f.readlines()
    for line in lines:
      util.stats_lines.append(line)
    preProcessStats()

  if not os.path.isfile( util.config_file ):
    print("No config.ini")
    exit(0)
  with open(util.config_file, "r") as f:
    lines = f.readlines()
    for line in lines:
      util.config_lines.append(line)
    preProcessConfig()

def writeFiles(lines, mode):
#  if not os.path.exists(output_dir):
#    os.mkdir(output_dir)
  with open(out_file, mode) as f:
    for line in lines:
      f.write(line)

def preProcessConfig():
  for i in range(len(util.config_lines)):
    if "sc3_cntrl" in util.config_lines[i]:
      old_num = re.findall( r'[0-9]+', util.config_lines[i] )[1]
      new_num = str(int(old_num) + 4)
      util.config_lines[i] = re.sub(r'sc3_cntrl[0-9]+', "l1_cntrl"+new_num, util.config_lines[i])

def preProcessStats():
  print ("see util.stats_lines len: ", len(util.stats_lines))
  for i in range(len(util.stats_lines)):
    if "system.cooldown_cpu" in util.stats_lines[i]:
      util.stats_lines[i] = ""
    elif "system.cpu" in util.stats_lines[i]:
      util.stats_lines[i] = ""
    if "sc3_cntrl" in util.stats_lines[i]:
      old_num = re.findall( r'[0-9]+', util.stats_lines[i] )[1]
      new_num = str(int(old_num) + 4)
      util.stats_lines[i] = re.sub(r'sc3_cntrl[0-9]+', "l1_cntrl"+new_num, util.stats_lines[i])

def preProcessXML( lines ):
  component_name = ""
  for i in range(len(lines)):
    if "<component id" in lines[i]:
      component_name = re.findall( r'id="\S+"', lines[i] )[0]
    if "icache" in component_name and "read_accesses" in lines[i]:
      lines[i] = re.sub(r'read_accesses', "icache_read_accesses", lines[i])
    elif "icache" in component_name and "read_misses" in lines[i]:
      lines[i] = re.sub(r'read_misses', "icache_read_misses", lines[i])
    elif "icache" in component_name and "conflicts" in lines[i]:
      lines[i] = re.sub(r'conflicts', "icache_conflicts", lines[i])
    elif "dcache" in component_name and "read_accesses" in lines[i]:
      lines[i] = re.sub(r'read_accesses', "dcache_read_accesses", lines[i])
    elif "dcache" in component_name and "read_misses" in lines[i]:
      lines[i] = re.sub(r'read_misses', "dcache_read_misses", lines[i])
    elif "dcache" in component_name and "conflicts" in lines[i]:
      lines[i] = re.sub(r'conflicts', "dcache_conflicts", lines[i])
    elif "dcache" in component_name and "write_accesses" in lines[i]:
      lines[i] = re.sub(r'write_accesses', "dcache_write_accesses", lines[i])
    elif "dcache" in component_name and "write_misses" in lines[i]:
      lines[i] = re.sub(r'write_misses', "dcache_write_misses", lines[i])

  return lines

def postProcessXML( lines ):
  for i in range(len(lines)):
    if re.search( "icache_read_accesses", lines[i] ):
      lines[i] = lines[i].replace("icache_read_accesses", "read_accesses")
    elif re.search( "icache_read_misses", lines[i] ):
      lines[i] = lines[i].replace("icache_read_misses", "read_misses")
    elif re.search( "icache_conflicts", lines[i] ):
      lines[i] = lines[i].replace("icache_conflicts", "conflicts")
    elif re.search( "dcache_read_accesses", lines[i] ):
      lines[i] = lines[i].replace("dcache_read_accesses", "read_accesses")
    elif re.search( "dcache_read_misses", lines[i] ):
      lines[i] = lines[i].replace("dcache_read_misses", "read_misses")
    elif re.search( "dcache_write_accesses", lines[i] ):
      lines[i] = lines[i].replace("dcache_write_accesses", "write_accesses")
    elif re.search( "dcache_write_misses", lines[i] ):
      lines[i] = lines[i].replace("dcache_write_misses", "write_misses")
    elif re.search( "dcache_conflicts", lines[i] ):
      lines[i] = lines[i].replace("dcache_conflicts", "conflicts")
  return lines

def getComponentLines(component):
  component_key = "<component id=\""+component+"\""
  start_key = "<component id="
  end_key = "</component>"
  num_sub_component_start = 0
  num_sub_component_end = 0
  lines = []
  start_flag = False
  with open(util.template_file, "r") as f:
    for line in f.readlines():
      if component_key in line:
        start_flag = True
        lines.append(line)
      elif start_key in line and start_flag:
        lines.append(line)
        num_sub_component_start += 1
      elif end_key in line and start_flag:
        lines.append(line)
        num_sub_component_end += 1
        if num_sub_component_end == num_sub_component_start + 1:
          start_flag = False
          break
      elif start_flag:
        lines.append(line)
  lines = preProcessXML( lines )
  return lines

def getCoreCount():
  if util.core_count != -1:
    return util.core_count
  util.core_count = 1
  cpu_pattern = re.compile(r'main_cpu\d+')
  for line in util.config_lines:
    cpus = re.findall( cpu_pattern, line )
    if len(cpus) != 0:
      count = re.findall(r'[0-9]+', cpus[-1])
      util.core_count = int(count[-1]) + 1
      break
  for _ in range(util.core_count):
    util.stats_for_core.append({})
  return util.core_count

util.xml_head = []
util.xml_tail = []
util.xml_core = []

def constructLines():
  util.core_count = getCoreCount()
  print( "see core count: ", util.core_count )
  with open(util.template_file, "r") as f:
    skip_line_count = 0
    component_lines = getComponentLines("system.cpu0")
    core_line_count = len(component_lines)
    for line in f.readlines():
      if 'id=\"system.cpu0\"' in line:
        skip_line_count += 1
        for cpuid in range(util.core_count):
          new_component_lines = []
          for line_index in range(len(component_lines)):
            new_line = component_lines[line_index]
            new_line = re.sub(r'cpu0', "cpu"+str(cpuid), new_line)
            new_line = re.sub(r'core0', "core"+str(cpuid), new_line)
            new_component_lines.append( new_line )
          util.xml_core.append(new_component_lines)
      elif skip_line_count > 0 and skip_line_count < core_line_count:
        skip_line_count += 1
      elif skip_line_count == 0:
        util.xml_head.append(line)
      else:
        util.xml_tail.append(line)

def replaceValues():
  for pattern in util.pattern_head_list:
    xml_pattern   = pattern[ 0 ]
    stats_pattern = pattern[ 1 ]
    print( "head checking stats: ", xml_pattern )
    cpuid = -1
    for stats_line in util.stats_lines:
      if re.search( stats_pattern, stats_line ):
        value = util.extract_val( stats_line )
        for line_index in range(len(util.xml_head)):
          xml_line = util.xml_head[line_index]
          if re.search( xml_pattern, xml_line ):
            util.xml_head[line_index] = re.sub(r'\d+', value, xml_line)
            print( "replace item in head: ", xml_pattern, util.xml_head[line_index] )
            break
        break

  for pattern in util.pattern_cpu_list:
    xml_pattern   = pattern[ 0 ]
    stats_pattern = pattern[ 1 ]
    print( "cpu checking stats: ", xml_pattern )
    cpuid = 0
    for stats_line in util.stats_lines:
      if re.search( stats_pattern, stats_line ):
        value = str( util.extract_val(stats_line) )
        if "system.ruby" not in stats_line:
          cpuid_pattern = re.findall( r'system.\S+cpu[0-9]+.', stats_line )[0]
        else:
          cpuid_pattern = re.findall( r'[0-9]+', stats_line )[1]
        if len(cpuid_pattern) != 0:
          cpuid = int(re.findall(r'[0-9]+', cpuid_pattern)[0])

        print( "cpu ", cpuid, "checking... value: ", value, stats_line )
        util.stats_for_core[cpuid][xml_pattern] = long(value)
        for line_index in range(len(util.xml_core[cpuid])):
          xml_line = util.xml_core[cpuid][line_index]
          if re.search( xml_pattern, xml_line ):
            util.xml_core[cpuid][line_index] = re.sub(r'\d+', value, xml_line)
            print( "replace item in cpu[", cpuid, "]: ", xml_pattern, util.xml_core[cpuid][line_index], value )
#            print( util.stats_for_core )
            break
#        break

  for pattern in util.pattern_tail_list:
    xml_pattern   = pattern[ 0 ]
    stats_pattern = pattern[ 1 ]
    print( "tail checking stats: ", xml_pattern )
    cpuid = -1
    for stats_line in util.stats_lines:
      if re.search( stats_pattern, stats_line ):
        value = str( util.extract_val(stats_line) )
        for line_index in range(len(util.xml_tail)):
          xml_line = util.xml_tail[line_index]
          if re.search( xml_pattern, xml_line ):
            util.xml_tail[line_index] = re.sub(r'\d+', value, xml_line)
            print( "replace item in tail: ", xml_pattern, util.xml_tail[line_index] )
            break
        break


def handleSpecialParams():
  for pattern in util.special_pattern_head_list:
    xml_pattern = pattern[0]
    func = pattern[1]
    value = func()
    for line_index in range(len(util.xml_head)):
      xml_line = util.xml_head[line_index]
      if re.search( xml_pattern, xml_line ):
        util.xml_head[line_index] = re.sub(r'\d+', value, xml_line)
        print( "replace special item in head: ", xml_pattern, util.xml_head[line_index] )
        break

  for pattern in util.special_pattern_cpu_list:
    xml_pattern = pattern[ 0 ]
    func = pattern[ 1 ]
    cpuid = -1
    for cpuid in range(util.core_count):
      for line_index in range(len(util.xml_core[cpuid])):
       xml_line = util.xml_core[cpuid][line_index]
       if re.search( xml_pattern, xml_line ):
         value = func( cpuid )
         value = "value=\""+value+"\""
         util.xml_core[cpuid][line_index] = re.sub(r'value=\S+"', value, xml_line)
         print( "replace special item in cpu[", cpuid, "]: ", xml_pattern, util.xml_core[cpuid][line_index], value )
#         util.stats_for_core[cpuid][xml_pattern] = int( value )
         break

  for cpuid in range(util.core_count):
    util.xml_core[cpuid] = postProcessXML(util.xml_core[cpuid])

def main():

  readFiles()

  # first, check the core count and create new_config.xml format
  constructLines()

  # second, iterate each xml item and get the corresponding value from stats.txt
  replaceValues()

  # third, paste the value into new_config.xml
  handleSpecialParams()

  writeFiles( util.xml_head, 'w' )
  print( util.core_count )
  for cpuid in range( util.core_count ):
    writeFiles( util.xml_core[cpuid], 'a' )
  writeFiles( util.xml_tail, 'a' )

  # forth, another parser to update the items that need calculation

main()

