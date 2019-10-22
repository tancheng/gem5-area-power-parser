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

output_dir = "./output"
input_file = "/mcpat_result"
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
  return ("Peak Dynamic =" in line)

def getValue(line):
  return re.findall("\d+\.\d+", line)[0]

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
  with open(output_dir + input_file, "r") as f:
    for line in f.readlines():
#      f.write( line )
      process( line )
        
  print( "----- area ------" )
  for comp_area in area_list:
    print( comp_area[1] )
  print( "----- power ------" )
  for comp_power in power_list:
    print( comp_power[1] )


main()
