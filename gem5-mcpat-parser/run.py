#!/usr/bin/env python
#==============================================================================
# run.py
#==============================================================================
# run parse gem5 stats for mcpat
#
# Author  : Cheng Tan
# Date    : 24/10/09

import os
import sys

stats_file = sys.argv[1]
xml_output = sys.argv[2]
mcpat_result = sys.argv[3]

cmd_run_parser  = "./parser.py " + stats_file + " " + xml_output
cmd_run_mcpat   = "../mcpat/mcpat -infile " + xml_output + " -print_level 4 > " + mcpat_result
cmd_run_display = "./display.py " + mcpat_result

os.system( cmd_run_parser  )
os.system( cmd_run_mcpat   )
os.system( cmd_run_display )

