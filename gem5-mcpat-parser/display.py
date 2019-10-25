#!/usr/bin/env python
#==============================================================================
# parser.py
#==============================================================================
# Parse gem5 stats for mcpat
#
# Author  : Cheng Tan
# Date    : 19/10/09

import os
import re
import sys

output_dir = "./output"
input_file = sys.argv[1]
output_file = "/distribution"
target_region = "Core"
is_inside_target_region = False
current_region = "NULL"
area_list = []
power_list = []
last_indent = -1
current_indent = -1

def isInsideTargetRegion(line):
  global is_inside_target_region
  if (target_region + ":") in line:
    is_inside_target_region = True
  if is_inside_target_region == True and ("**********") in line:
    is_inside_target_region = False
  return is_inside_target_region

def getCurrentRegion(line):
  global current_region
  global current_indent
  global last_indent
  if ":" in line:
    current_region = line.strip()
    current_region = current_region.replace(":", "")
    current_indent = 0
    for char in line:
      if char == ' ':
        current_indent = current_indent + 1
      else:
        break 
    if last_indent == -1:
      last_indent = current_indent
  return current_region

def isArea(line):
  return ("Area " in line)

def isPower(line):
  return ("Runtime Dynamic =" in line)

def getValue(line):
  if " 0 " in line:
    return "0"
  return re.findall("\d+\S+ ", line)[0].strip()

def process(line):
  global current_region
  global current_indent
  global last_indent
  if isInsideTargetRegion(line):
    current_region = getCurrentRegion(line)
    if isArea(line):
      if last_indent >= current_indent:
        area_list.append( (current_region, getValue(line)) )
      else:
        area_list[len(area_list)-1] = (current_region, getValue(line))
    elif isPower(line):
      if last_indent >= current_indent:
        power_list.append( (current_region, getValue(line)) )
      else:
        power_list[len(power_list)-1] = (current_region, getValue(line))
      last_indent = current_indent

def main():
  with open(input_file, "r") as f:
    for line in f.readlines():
#      f.write( line )
      process( line )
        
  print( "----- item ------" )
  for comp_area in area_list:
    print( comp_area[0] )

  print( "----- area ------" )
  for comp_area in area_list:
    print( comp_area[1] )

  print( "----- power ------" )
  for comp_power in power_list:
    if comp_power[1] == "0":
      print( "0" )
    else:
      print( "%0.8f" % float(comp_power[1]) )

main()
