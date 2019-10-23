#==============================================================================
# dict for mcpat parser
#
# Author  : Cheng Tan
# Date    : 19/10/09

import re

#------------------------------------------------------------------------------
# input/output files
#------------------------------------------------------------------------------

config_file = "./input/config.ini"
template_file = "./input/template.xml"

#------------------------------------------------------------------------------
# xml lines
#------------------------------------------------------------------------------

xml_head = []
xml_core = []
xml_tail = []

#------------------------------------------------------------------------------
# xml param name -> stats pattern
#------------------------------------------------------------------------------

pattern_head_list = [
#                ("total_cycles"          , re.compile(r'^sim_ticks')),
                ("sim-insts"                 , re.compile(r'^sim_insts')),
                ]

pattern_cpu_list = [
#                ("int_instructions"          , re.compile(r'int_instructions')),
#                ("fp_instructions"           , re.compile(r'fp_instructions')),
                ("total_instructions"        , re.compile(r'iew.\S+::total')),
                ("branch_instructions"       , re.compile(r'branchPred.lookups')),
                ("branch_mispredictions"     , re.compile(r'branchPredindirectMispredicted')),
#                ("load_instructions"         , re.compile(r'load_instructions')),
#                ("store_instructions"        , re.compile(r'store_instructions')),
                ("committed_instructions"    , re.compile(r'num_committed_insts')),
                ("IntAlu"                    , re.compile(r'IntAlu')),
                ("IntMult"                   , re.compile(r'IntMult')),
                ("IntDiv"                    , re.compile(r'IntDiv')),
                ("No_OpClass"                , re.compile(r'No_OpClass')),
                ("FloatAdd"                  , re.compile(r'FloatAdd')),
                ("FloatCmp"                  , re.compile(r'FloatCmp')),
                ("FloatCvt"                  , re.compile(r'FloatCvt')),
                ("FloatMult"                 , re.compile(r'FloatMult')),
                ("FloatMultAcc"              , re.compile(r'FloatMultAcc')),
                ("FloatDiv"                  , re.compile(r'FloatDiv')),
                ("FloatMisc"                 , re.compile(r'FloatMisc')),
                ("FloatSqrt"                 , re.compile(r'FloatSqrt')),
                ("MemRead"                   , re.compile(r'MemRead')),
                ("MemWrite"                  , re.compile(r'MemWrite')),
                ("FloatMemRead"              , re.compile(r'FloatMemRead')),
                ("FloatMemWrite"             , re.compile(r'FloatMemWrite')),
                ("total_cycles"              , re.compile(r'numCycles')),
#                ("idle_cycles"               , re.compile(r'num_idle_cycles')),
#                ("icache_read_accesses"      , re.compile(r'icache.ReadReq_accesses')),
                ("icache_read_accesses"      , re.compile(r'l1i_cntrl\d+.L1cache.demand_accesses')),
                ("icache_read_misses"        , re.compile(r'l1i_cntrl\d+.L1cache.demand_misses')),
#                ("icache_conflicts"          , re.compile(r'icache.replacements')),
                ("dcache_read_accesses"      , re.compile(r'l1d_cntrl\d+.L1cache.demand_accesses')),
                ("dcache_read_misses"        , re.compile(r'l1d_cntrl\d+.L1cache.demand_misses')),
#                ("dcache_write_accesses"     , re.compile(r'l1d_cntrl\d+.L1cache.demand_accesses')),
#                ("dcache_write_misses"       , re.compile(r'l1d_cntrl\d+.L1cache.demand_misses')),
                ("dcache_conflicts"          , re.compile(r'L1_Replacement::total')),

                ("int_regfile_reads"         , re.compile(r'int_regfile_reads')),
                ("int_regfile_writes"        , re.compile(r'int_regfile_writes')),
                ("float_regfile_reads"       , re.compile(r'fp_regfile_reads')),
                ("float_regfile_writes"      , re.compile(r'fp_regfile_writes')),

                ]

pattern_tail_list = [

#                "l1i-private-hits"      : re.compile(r'system.ruby.l1i_cntrl\d*\.L1cache.private_hits'),
#                "l1i-shared-hits"       : re.compile(r'system.ruby.l1i_cntrl\d*\.L1cache.shared_hits'),
#                "l1i-hits-under-miss"   : re.compile(r'system.ruby.l1i_cntrl\d*\.L1cache.demand_hits_under_miss'),
#                "l1i-misses"            : re.compile(r'system.ruby.l1i_cntrl\d*\.L1cache.demand_misses'),

                ]
#------------------------------------------------------------------------------
# Extract value from a stat line
#------------------------------------------------------------------------------
# A typical gem5 statistic line looks like this
#   [stat-name]    [stat-val]    [stat-comment]

def extract_val( line ):
  return int(re.split( r"\s+", line )[ 1 ])

#------------------------------------------------------------------------------
# Extract config from a configuration line
#------------------------------------------------------------------------------
# A typical gem5 configuration line looks like this
#   [config-name]    [config-val]

def extract_config( line ):
  return str(int(re.split( r"=", line )[ 1 ]))


#------------------------------------------------------------------------------
# global variables
#------------------------------------------------------------------------------

core_count = -1
stats_for_core = []

#------------------------------------------------------------------------------
# private variables
#------------------------------------------------------------------------------

m_total_cycles = -1

#------------------------------------------------------------------------------
# specific functions to calculate the values of different special param in head
#------------------------------------------------------------------------------

#    <!--McPAT will skip the components if number is set to 0 -->
#    <param name="number_cache_levels" value="2"/>
#    <param name="number_of_cores" value="1"/>
#    <param name="number_of_L1Directories" value="1"/>
#    <param name="number_of_L2Directories" value="0"/>
#    <param name="number_of_L2s" value="0"/>
#    <!-- This number means how many L2 clusters in each cluster there can be multiple banks/ports -->
#    <param name="Private_L2" value="0"/>
#    <!--1 Private, 0 shared/coherent -->
#    <param name="number_of_L3s" value="0"/>
#    <!-- This number means how many L3 clusters -->
#    <param name="number_of_NoCs" value="0"/>
#    <param name="homogeneous_cores" value="1"/>
#    <!--1 means homo -->
#    <param name="homogeneous_L2s" value="1"/>
#    <param name="homogeneous_L1Directories" value="1"/>
#    <param name="homogeneous_L2Directories" value="1"/>
#    <param name="homogeneous_L3s" value="1"/>
#    <param name="homogeneous_ccs" value="1"/>
#    <!--cache coherence hardware -->
#    <param name="homogeneous_NoCs" value="1"/>
#    <param name="core_tech_node" value="32"/>
#    <!-- nm -->
#    <param name="target_core_clockrate" value="1000"/>
#    <!--MHz -->
#    <param name="temperature" value="380"/>
#    <!-- Kelvin -->
#    <param name="interconnect_projection_type" value="0"/>
#    <!--0: aggressive wire technology; 1: conservative wire technology -->
#    <param name="device_type" value="0"/>
#    <!--0: HP(High Performance Type); 1: LSTP(Low standby power) 2: LOP (Low Operating Power)  -->
#    <param name="longer_channel_device" value="1"/>
#    <!-- 0 no use; 1 use when aggressive -->
#    <param name="power_gating" value="1"/>
#    <!-- 0 not enabled; 1 enabled -->
#    <param name="machine_bits" value="64"/>
#    <param name="virtual_address_width" value="64"/>
#    <param name="physical_address_width" value="52"/>
#    <param name="virtual_memory_page_size" value="4096"/>
#    <!-- address width determines the tag_width in Cache, LSQ and buffers in cache controller
#	 default value is machine_bits, if not set -->
#    <!--This page size(B) is complete different from the page size in Main memo section. this page size is the size of
#	virtual memory from OS/Archi perspective; the page size in Main memo section is the actual physical line in a DRAM bank  -->

# FIXME: move from parser.py to here
def number_of_cores():
  assert( core_count != -1 )
  return str(core_count)

def system_total_cycles():
  total_cycle = 0
  for cpuid in range(core_count):
    if total_cycle < stats_for_core[cpuid]["total_cycles"]:
      total_cycle = stats_for_core[cpuid]["total_cycles"]
  return str(total_cycle)

#  if m_total_cycles != -1:
#    return m_total_cycles
#  with open(stats_file, "r") as f:
#    for line in f.readlines():
#      if re.search( re.compile( r'^sim_ticks' ), line ):
#        value = extract_val(line)
#  return str(value/500)

# FIXME: change this to see the difference
def system_idle_cycles():
  return "0"

# FIXME: change this to see the difference
def system_busy_cycles():
  return str(int(system_total_cycles()) - int(system_idle_cycles()))

#------------------------------------------------------------------------------
# specific functions to calculate the values of different special param in core
#------------------------------------------------------------------------------

#    <!-- *********************** cores ******************* -->
#    <component id="system.cpu0" name="core0">
#      <!-- Core property -->
#      <param name="clock_rate" value="1000"/>
#      <param name="vdd" value="0"/>
#      <!-- 0 means using ITRS default vdd -->
#      <param name="opt_local" value="0"/>
#      <!-- for cores with unknown timing, set to 0 to force off the opt flag -->
#      <param name="instruction_length" value="32"/>
#      <param name="opcode_width" value="7"/>
#      <!-- Effective number of opcode bits -->
#      <param name="micro_opcode_width" value="8"/>
#      <param name="machine_type" value="0"/>
#      <!-- inorder/OoO; 1 inorder; 0 OOO-->
#      <param name="fp_issue_width" value="2"/>
#      <param name="prediction_width" value="1"/>
#      <!-- number of branch instructions can be predicted simultaneously-->
#      <!-- Current version of McPAT does not distinguish int and floating point pipelines
#	   Theses parameters are reserved for future use.-->
#      <param name="pipelines_per_core" value="1,1"/>
#      <!--integer_pipeline and floating_pipelines, if the floating_pipelines is 0, then the pipeline is shared-->
#      <param name="pipeline_depth" value="5,5"/>
#      <!-- pipeline depth of int and fp, if pipeline is shared, the second number is the average cycles of fp ops -->
#      <!-- rename logic -->
#      <param name="rename_scheme" value="0"/>
#      <!-- can be RAM based(0) or CAM based(1) rename scheme
#	   RAM-based scheme will have free list, status table;
#	   CAM-based scheme have the valid bit in the data field of the CAM
#	   both RAM and CAM need RAM-based checkpoint table, checkpoint_depth=# of in_flight instructions;
#	   Detailed RAT Implementation see TR -->
#      <param name="register_windows_size" value="0"/>
#      <!-- how many windows in the windowed register file, sun processors;
#	   no register windowing is used when this number is 0 -->
#      <!-- In OoO cores, loads and stores can be issued whether inorder(Pentium Pro) or (OoO)out-of-order(Alpha),
#	   They will always try to execute out-of-order though. -->
#      <param name="LSU_order" value="inorder"/>
#      <param name="RAS_size" value="64"/>
#      <!-- general stats, defines simulation periods;require total, idle, and busy cycles for sanity check  -->
#      <!-- please note: if target architecture is X86, then all the instructions refer to (fused) micro-ops -->
#      <!-- instruction buffer stats -->
#      <!-- ROB stats, both RS and Phy based OoOs have ROB
#	   performance simulator should capture the difference on accesses,
#	   otherwise, McPAT has to guess based on number of committed instructions. -->
#      <stat name="ROB_reads" value="0"/>
#      <stat name="ROB_writes" value="0"/>
# FIXME: gem5 need to generate these accesses
#      <!-- RAT accesses -->
#      <stat name="rename_reads" value="6911013428"/>
#      <!--lookup in renaming logic -->
#      <stat name="rename_writes" value="3218657049"/>
#      <!--update dest regs. renaming logic -->
#      <stat name="fp_rename_reads" value="0"/>
#      <stat name="fp_rename_writes" value="2469258774"/>
#      <!-- decode and rename stage use this, should be total ic - nop -->
#      <!-- Inst window stats -->
#      <stat name="inst_window_reads" value="0"/>
#      <stat name="inst_window_writes" value="3471394361"/>
#      <stat name="inst_window_wakeup_accesses" value="3376312028"/>
#      <stat name="fp_inst_window_reads" value="7597188438"/>
#      <stat name="fp_inst_window_writes" value="3839068378"/>
#      <stat name="fp_inst_window_wakeup_accesses" value="3752868878"/>
#      <!--  RF accesses -->
#      <stat name="int_regfile_reads" value="6858056479"/>
#      <stat name="float_regfile_reads" value="0"/>
#      <stat name="int_regfile_writes" value="3066677198"/>
#      <stat name="float_regfile_writes" value="0"/>
#      <!-- accesses to the working reg -->
#      <stat name="function_calls" value="0"/>
#      <stat name="context_switches" value="0"/>
#      <!-- Number of Windows switches (number of function calls and returns)-->
# FIXME: predictor
#      <component id="system.cpu0.predictor" name="PBT">
#        <!-- branch predictor; tournament predictor see Alpha implementation -->
#        <param name="load_predictor" value="10,3,1024"/>
#        <param name="global_predictor" value="4096,2"/>
#        <param name="predictor_chooser" value="4096,2"/>
#      </component>
# TODO: ignore tb for now
#      <component id="system.cpu0.itlb" name="itlb">
#        <param name="number_entries" value="64"/>
#        <stat name="total_accesses" value="0"/>
#        <stat name="total_misses" value="0"/>
#        <stat name="conflicts" value="0"/>
#        <!-- there is no write requests to itlb although writes happen to itlb after miss,
#	     which is actually a replacement -->
#      </component>
#      <component id="system.cpu0.dtlb" name="dtlb">
#        <param name="number_entries" value="64"/>
#        <!--dual threads-->
#        <stat name="total_accesses" value="0"/>
#        <stat name="total_misses" value="0"/>
#        <stat name="conflicts" value="0"/>
#      </component>
# TODO: directory is not taken into consideration for now
#      <param name="number_of_BTB" value="2"/>
#      <component id="system.cpu0.BTB" name="BTB">
#        <!-- all the buffer related are optional -->
#        <param name="BTB_config" value="5120,4,2,2,1,1"/>
#        <!--should be 4096 + 1024 -->
#        <!-- the parameters are capacity,block_width,associativity,bank, throughput w.r.t. core clock, latency w.r.t. core clock,-->
#        <stat name="read_accesses" value="0"/>
#        <!--See IFU code for guideline -->
#        <stat name="write_accesses" value="385528180"/>
#      </component>
#    </component>
#    <component id="system.L1Directory0" name="L1Directory0">
#      <param name="Directory_type" value="0"/>
#      <!--0 cam based shadowed tag. 1 directory cache -->
#      <param name="Dir_config" value="4096,2,0,1,100,100, 8"/>
#      <!-- the parameters are capacity,block_width, associativity,bank, throughput w.r.t. core clock, latency w.r.t. core clock,-->
#      <param name="buffer_sizes" value="8, 8, 8, 8"/>
#      <!-- all the buffer related are optional -->
#      <param name="clockrate" value="1000"/>
#      <param name="vdd" value="0"/>
#      <!-- 0 means using ITRS default vdd -->
#      <param name="ports" value="1,1,1"/>
#      <!-- number of r, w, and rw search ports -->
#      <param name="device_type" value="0"/>
#      <!-- although there are multiple access types,
#	   Performance simulator needs to cast them into reads or writes
#	   e.g. the invalidates can be considered as writes -->
#      <stat name="read_accesses" value="0"/>
#      <stat name="write_accesses" value="0"/>
#      <stat name="read_misses" value="0"/>
#      <stat name="write_misses" value="0"/>
#      <stat name="conflicts" value="0"/>
#    </component>
#    <component id="system.L2Directory0" name="L2Directory0">
#      <param name="Directory_type" value="1"/>
#      <!--0 cam based shadowed tag. 1 directory cache -->
#      <param name="Dir_config" value="1048576,16,16,1,2, 100"/>
#      <!-- the parameters are capacity,block_width, associativity,bank, throughput w.r.t. core clock, latency w.r.t. core clock,-->
#      <param name="buffer_sizes" value="8, 8, 8, 8"/>
#      <!-- all the buffer related are optional -->
#      <param name="clockrate" value="1000"/>
#      <param name="vdd" value="0"/>
#      <!-- 0 means using ITRS default vdd -->
#      <param name="ports" value="1,1,1"/>
#      <!-- number of r, w, and rw search ports -->
#      <param name="device_type" value="0"/>
#      <!-- altough there are multiple access types,
#	   Performance simulator needs to cast them into reads or writes
#	   e.g. the invalidates can be considered as writes -->
#      <stat name="read_accesses" value="0"/>
#      <stat name="write_accesses" value="0"/>
#      <stat name="read_misses" value="0"/>
#      <stat name="write_misses" value="0"/>
#      <stat name="conflicts" value="0"/>
#    </component>
#    <component id="system.L20" name="L20">
#      <!-- all the buffer related are optional -->
#      <param name="L2_config" value="1048576,32, 8, 8, 8, 23, 32, 1"/>
#      <!-- the parameters are capacity,block_width, associativity, bank, throughput w.r.t. core clock, latency w.r.t. core clock,output_width, cache policy -->
#      <param name="buffer_sizes" value="16, 16, 16, 16"/>
#      <!-- cache controller buffer sizes: miss_buffer_size(MSHR),fill_buffer_size,prefetch_buffer_size,wb_buffer_size-->
#      <param name="clockrate" value="1000"/>
#      <param name="vdd" value="0"/>
#      <!-- 0 means using ITRS default vdd -->
#      <param name="ports" value="1,1,1"/>
#      <!-- number of r, w, and rw ports -->
#      <param name="device_type" value="0"/>
#      <stat name="read_accesses" value="0"/>
#      <stat name="write_accesses" value="0"/>
#      <stat name="read_misses" value="0"/>
#      <stat name="write_misses" value="0"/>
#      <stat name="conflicts" value="0"/>
#      <stat name="duty_cycle" value="0"/>
#    </component>
#    <!-- TODO: NOC -->
#    <component id="system.NoC0" name="noc0">
#      <param name="clockrate" value="2000"/>
#      <param name="type" value="0"/>
#      <param name="horizontal_nodes" value="1"/>
#      <param name="vertical_nodes" value="1"/>
#      <param name="has_global_link" value="0"/>
#      <param name="link_throughput" value="1"/>
#      <param name="link_latency" value="1"/>
#      <param name="input_ports" value="1"/>
#      <param name="output_ports" value="1"/>
#      <param name="flit_bits" value="64"/>
#      <param name="chip_coverage" value="1"/>
#      <param name="link_routing_over_percentage" value="0.5"/>
#      <stat name="total_accesses" value="100000"/>
#      <stat name="duty_cycle" value="0.2"/>
#    </component>
#    <!--**********************************************************************-->
#    <component id="system.mc" name="mc">
#      <!-- PARAMETERS TAKEN FROM DDR3 GEM5 -->
#      <!-- current version of McPAT uses published values for base parameters of memory controller
#	   improvements on MC will be added in later versions. -->
#      <param name="type" value="0"/>
#      <!-- 1: low power; 0 high performance -->
#      <param name="mc_clock" value="1000"/>
#      <!--DIMM IO bus clock rate MHz-->
#      <param name="vdd" value="1.5"/>
#      <!-- 0 means using ITRS default vdd -->
#      <param name="peak_transfer_rate" value="3200"/>
#      <!--MB/S-->
#      <param name="block_size" value="64"/>
#      <!--B-->
#      <param name="number_mcs" value="1"/>
#      <!-- current McPAT only supports homogeneous memory controllers -->
#      <param name="memory_channels_per_mc" value="1"/>
#      <param name="number_ranks" value="2"/>
#      <param name="withPHY" value="0"/>
#      <!-- # of ranks of each channel-->
#      <param name="req_window_size_per_channel" value="32"/>
#      <param name="IO_buffer_size_per_channel" value="32"/>
#      <param name="databus_width" value="128"/>
#      <param name="addressbus_width" value="51"/>
#      <!-- McPAT will add the control bus width to the address bus width automatically -->
#      <stat name="memory_accesses" value="0"/>
#      <stat name="memory_reads" value="0"/>
#      <stat name="memory_writes" value="0"/>
#      <!-- McPAT does not track individual mc, instead, it takes the total accesses and calculate
#	   the average power per MC or per channel. This is sufficient for most application.
#	   Further track down can be easily added in later versions. -->
#    </component>
#    <!--**********************************************************************-->
#    <component id="system.niu" name="niu">
#      <param name="number_units" value="0"/>
#    </component>
#    <!--**********************************************************************-->
#    <component id="system.pcie" name="pcie">
#      <param name="number_units" value="0"/>
#    </component>
#    <!--**********************************************************************-->
#    <component id="system.flashc" name="flashc">
#      <param name="number_flashcs" value="0"/>
#    </component>
#    <!--**********************************************************************-->
#  </component>
#</component>

def x86( cpuid ):
  return "0"

def number_hardware_threads( cpuid ):
  return "1"

#      <param name="fetch_width" value="4"/>
#      <!-- fetch_width determines the size of cachelines of L1 cache block -->
def fetch_width( cpuid ):
  return "1"

#      <!-- number_instruction_fetch_ports(icache ports) is always 1 in single-thread processor,
#	   it only may be more than one in SMT processors. BTB ports always equals to fetch ports since
#	   branch information in consecutive branch instructions in the same fetch group can be read out from BTB once.-->
#      <param name="number_instruction_fetch_ports" value="1"/>
def number_instruction_fetch_ports( cpuid ):
  return "1"

#      <param name="decode_width" value="4"/>
#      <!-- decode_width determines the number of ports of the
#	   renaming table (both RAM and CAM) scheme -->
def decode_width( cpuid ):
  return "1"

#      <param name="issue_width" value="4"/>
def issue_width( cpuid ):
  return "1"

#      <param name="peak_issue_width" value="6"/>
#      <!-- issue_width determines the number of ports of Issue window and other logic
#	   as in the complexity effective processors paper; issue_width==dispatch_width -->
def peak_issue_width( cpuid ):
  return "1"

#      <param name="commit_width" value="4"/>
#      <!-- commit_width determines the number of ports of register files -->
def commit_width( cpuid ):
  return "1"

#      <param name="ALU_per_core" value="1"/>
#      <!-- contains an adder, a shifter, and a logical unit -->
def ALU_per_core( cpuid ):
  return "1"

#      <param name="MUL_per_core" value="2"/>
#      <!-- For MUL and Div -->
def MUL_per_core( cpuid ):
  return "1"

#      <param name="FPU_per_core" value="1"/>
def FPU_per_core( cpuid ):
  return "1"

#      <!-- buffer between IF and ID stage -->
#      <param name="instruction_buffer_size" value="32"/>
def instruction_buffer_size( cpuid ):
  return "1"

#      <!-- buffer between ID and sche/exe stage -->
#      <param name="decoded_stream_buffer_size" value="16"/>
def decoded_stream_buffer_size( cpuid ):
  return "1"

#      <param name="instruction_window_scheme" value="0"/>
#      <!-- 0 PHYREG based, 1 RSBASED-->
#      <!-- McPAT support 2 types of OoO cores, RS based and physical reg based-->
#      <param name="instruction_window_size" value="64"/>
def instruction_window_size( cpuid ):
  return "16"

#      <param name="fp_instruction_window_size" value="64"/>
#      <!-- the instruction issue Q as in Alpha 21264; The RS as in Intel P6 -->
def fp_instruction_window_size( cpuid ):
  return "16"

#      <param name="ROB_size" value="128"/>
#      <!-- each in-flight instruction has an entry in ROB -->
def ROB_size( cpuid ):
  return "16"

#      <!-- registers -->
#      <param name="archi_Regs_IRF_size" value="32"/>
def archi_Regs_IRF_size( cpuid ):
  return "16"

#      <!-- X86-64 has 16GPR -->
#      <param name="archi_Regs_FRF_size" value="32"/>
def archi_Regs_FRF_size( cpuid ):
  return "16"

#      <!-- MMX + XMM -->
#      <!--  if OoO processor, phy_reg number is needed for renaming logic,
#	   renaming logic is for both integer and floating point insts.  -->
#      <param name="phy_Regs_IRF_size" value="256"/>
def phy_Regs_IRF_size( cpuid ):
  return "16"

#      <param name="phy_Regs_FRF_size" value="256"/>
def phy_Regs_FRF_size( cpuid ):
  return "16"

#      <param name="store_buffer_size" value="96"/>
#      <!-- By default, in-order cores do not have load buffers -->
def load_buffer_size( cpuid ):
  return "4"

#      <param name="load_buffer_size" value="48"/>
def store_buffer_size( cpuid ):
  return "4"

#      <!-- number of ports refer to sustain-able concurrent memory accesses -->
#      <param name="memory_ports" value="2"/>
#      <!-- max_allowed_in_flight_memo_instructions determines the # of ports of load and store buffer
#	   as well as the ports of Dcache which is connected to LSU -->
#      <!-- dual-pumped Dcache can be used to save the extra read/write ports -->
def memory_ports( cpuid ):
  return "1"

#      <stat name="total_instructions" value="7204430173"/>
def total_instructions( cpuid ):
  total_insts = stats_for_core[ cpuid ][ "total_instructions" ]
#  total_insts = stats_for_core[ cpuid ][ "IntAlu" ] +\
#                stats_for_core[ cpuid ][ "IntMult" ] +\
#                stats_for_core[ cpuid ][ "IntDiv" ] +\
#                stats_for_core[ cpuid ][ "FloatAdd" ] +\
#                stats_for_core[ cpuid ][ "FloatCmp" ] +\
#                stats_for_core[ cpuid ][ "FloatCvt" ] +\
#                stats_for_core[ cpuid ][ "FloatMult" ] +\
#                stats_for_core[ cpuid ][ "FloatMultAcc" ] +\
#                stats_for_core[ cpuid ][ "FloatDiv" ] +\
#                stats_for_core[ cpuid ][ "FloatMisc" ] +\
#                stats_for_core[ cpuid ][ "FloatSqrt" ]
  return str(total_insts)

def int_instructions( cpuid ):
  committed_int_insts = stats_for_core[ cpuid ][ "IntAlu" ] +\
                        stats_for_core[ cpuid ][ "IntMult" ] +\
                        stats_for_core[ cpuid ][ "IntDiv" ] +\
                        stats_for_core[ cpuid ][ "No_OpClass" ] -\
                        stats_for_core[ cpuid ][ "branch_instructions" ]
  return str(committed_int_insts)


def fp_instructions( cpuid ):
  committed_fp_insts = stats_for_core[ cpuid ]["FloatCmp"] +\
                       stats_for_core[ cpuid ][ "FloatCvt" ] +\
                       stats_for_core[ cpuid ][ "FloatMult" ] +\
                       stats_for_core[ cpuid ][ "FloatMultAcc" ] +\
                       stats_for_core[ cpuid ][ "FloatDiv" ] +\
                       stats_for_core[ cpuid ][ "FloatMisc" ] +\
                       stats_for_core[ cpuid ][ "FloatSqrt" ]
  return str(committed_fp_insts)


def committed_int_instructions( cpuid ):
  committed_int_insts = stats_for_core[ cpuid ][ "IntAlu" ] +\
                        stats_for_core[ cpuid ][ "IntMult" ] +\
                        stats_for_core[ cpuid ][ "IntDiv" ] +\
                        stats_for_core[ cpuid ][ "No_OpClass" ] -\
                        stats_for_core[ cpuid ][ "branch_instructions" ]
  return str(committed_int_insts)

def committed_fp_instructions( cpuid ):
  committed_fp_insts = stats_for_core[ cpuid ]["FloatCmp"] +\
                       stats_for_core[ cpuid ][ "FloatCvt" ] +\
                       stats_for_core[ cpuid ][ "FloatMult" ] +\
                       stats_for_core[ cpuid ][ "FloatMultAcc" ] +\
                       stats_for_core[ cpuid ][ "FloatDiv" ] +\
                       stats_for_core[ cpuid ][ "FloatMisc" ] +\
                       stats_for_core[ cpuid ][ "FloatSqrt" ]
  return str(committed_fp_insts)

#      <stat name="pipeline_duty_cycle" value="1"/>
#      <!--<=1, runtime_ipc/peak_ipc; averaged for all cores if homogeneous -->
def pipeline_duty_cycle( cpuid ):
  return "1"

#      <!-- the following cycle stats are used for heterogeneous cores only,
#	   please ignore them if homogeneous cores -->
#      <stat name="total_cycles" value="2367485854"/>
#      <stat name="idle_cycles" value="0"/>
#      <stat name="busy_cycles" value="2367485854"/>
def busy_cycles( cpuid ):
  busy_cycle = stats_for_core[ cpuid ]["total_cycles"]
  return str(busy_cycle)

#      <!-- Alu stats by default, the processor has one FPU that includes the divider and
#	   multiplier. The fpu accesses should include accesses to multiplier and divider  -->
#      <stat name="ialu_accesses" value="3377588948"/>
#      <stat name="fpu_accesses" value="3823247310"/>
#      <stat name="mul_accesses" value="0"/>
#      <stat name="cdb_alu_accesses" value="0"/>
#      <stat name="cdb_mul_accesses" value="0"/>
#      <stat name="cdb_fpu_accesses" value="0"/>
#      <!-- multiple cycle accesses should be counted multiple times,
#	   otherwise, McPAT can use internal counter for different floating point instructions
#	   to get final accesses. But that needs detailed info for floating point inst mix -->
#      <!--  currently the performance simulator should
#	   make sure all the numbers are final numbers,
#	   including the explicit read/write accesses,
#	   and the implicit accesses such as replacements and etc.
#	   Future versions of McPAT may be able to reason the implicit access
#	   based on param and stats of last level cache
#	   The same rule applies to all cache access stats too!  -->
#      <!-- following is AF for max power computation.
#	   Do not change them, unless you understand them-->
#      <stat name="IFU_duty_cycle" value="0.25"/>
#      <!--depends on Icache line size and instruction issue rate -->
#      <stat name="LSU_duty_cycle" value="0.25"/>
#      <stat name="MemManU_I_duty_cycle" value="0.25"/>
#      <stat name="MemManU_D_duty_cycle" value="0.25"/>
#      <stat name="ALU_duty_cycle" value="1"/>
#      <stat name="MUL_duty_cycle" value="0.3"/>
#      <stat name="FPU_duty_cycle" value="0.3"/>
#      <stat name="ALU_cdb_duty_cycle" value="1"/>
#      <stat name="MUL_cdb_duty_cycle" value="0.3"/>
#      <stat name="FPU_cdb_duty_cycle" value="0.3"/>
#      <param name="number_of_BPT" value="2"/>

def ialu_accesses( cpuid ):
  ialu_accesses = stats_for_core[ cpuid ]["IntAlu"] +\
                  stats_for_core[ cpuid ]["No_OpClass"]
  return str(ialu_accesses)

def fpu_accesses( cpuid ):
  return str(committed_fp_instructions( cpuid ))

def mul_accesses( cpuid ):
  return str(stats_for_core[ cpuid ]["IntMult"] +\
             stats_for_core[ cpuid ]["IntDiv"])

def getConfigInDomain( domain, item ):
  with open(config_file, "r") as f:
    in_domain = False
    for line in f.readlines():
      if "[system" in line and domain in line:
        in_domain = True
      elif in_domain and "[system" in line and domain not in line:
        # return "NOT FOUND"
        assert( 0 )
      if in_domain and (item+"=") in line:
        config_str = extract_config(line)
        return config_str

#      <component id="system.cpu0.icache" name="icache">
#        <!-- there is no write requests to itlb although writes happen to it after miss,
#	     which is actually a replacement -->
#        <param name="icache_config" value="131072,32,8,1,8,3,32,0"/>
#        <!-- the parameters are capacity,block_width, associativity, bank, throughput w.r.t. core clock, latency w.r.t. core clock,output_width, cache policy,  -->
#        <!-- cache_policy;//0 no write or write-though with non-write allocate;1 write-back with write-allocate -->
#        <param name="buffer_sizes" value="16, 16, 16,0"/>
#        <!-- cache controller buffer sizes: miss_buffer_size(MSHR),fill_buffer_size,prefetch_buffer_size,wb_buffer_size-->
def icache_capacity( cpuid ):
  capacity = getConfigInDomain( "icache", "size" )
  return capacity

def icache_block_width( cpuid ):
  block_size = getConfigInDomain( "icache", "block_size" )
  return block_size

def icache_associativity( cpuid ):
  assoc = getConfigInDomain( "icache", "assoc" )
  return assoc

def icache_bank( cpuid ):
  return "1"

def icache_throughtput( cpuid ):
  return "1"

def icache_latency( cpuid ):
  latency = getConfigInDomain( "icache", "data_latency" )
  return latency

def icache_output_width( cpuid ):
  return icache_block_width( cpuid )

def icache_cache_policy( cpuid ):
  return "1"

def icache_config( cpuid ):
  config = icache_capacity( cpuid ) + ", " +\
           icache_block_width( cpuid ) + ", " +\
           icache_associativity( cpuid ) + ", " +\
           icache_bank( cpuid ) + ", " +\
           icache_throughtput( cpuid ) + ", " +\
           icache_latency( cpuid ) + ", " +\
           icache_output_width( cpuid ) + ", " +\
           icache_cache_policy( cpuid )
  return config

#      <component id="system.cpu0.dcache" name="dcache">
#        <!-- all the buffer related are optional -->
#        <param name="dcache_config" value="16384,16,4,1, 3,3, 16,1 "/>
#        <param name="buffer_sizes" value="16, 16, 16, 16"/>
#        <!-- cache controller buffer sizes: miss_buffer_size(MSHR),fill_buffer_size,prefetch_buffer_size,wb_buffer_size-->
def dcache_capacity( cpuid ):
  capacity = getConfigInDomain( "dcache", "size" )
  return capacity

def dcache_block_width( cpuid ):
  block_size = getConfigInDomain( "dcache", "block_size" )
  return block_size

def dcache_associativity( cpuid ):
  assoc = getConfigInDomain( "dcache", "assoc" )
  return assoc

def dcache_bank( cpuid ):
  return "1"

def dcache_throughtput( cpuid ):
  return "1"

def dcache_latency( cpuid ):
  latency = getConfigInDomain( "dcache", "data_latency" )
  return latency

def dcache_output_width( cpuid ):
  return dcache_block_width( cpuid )

def dcache_cache_policy( cpuid ):
  return "1"

def dcache_config( cpuid ):
  config = dcache_capacity( cpuid ) + ", " +\
           dcache_block_width( cpuid ) + ", " +\
           dcache_associativity( cpuid ) + ", " +\
           dcache_bank( cpuid ) + ", " +\
           dcache_throughtput( cpuid ) + ", " +\
           dcache_latency( cpuid ) + ", " +\
           dcache_output_width( cpuid ) + ", " +\
           dcache_cache_policy( cpuid )
  return config

def dcache_write_accesses( cpuid ):
  return "0"

def dcache_write_misses( cpuid ):
  return "0"

# FIXME: wait for Tuan to generate the stats for decode and window
def rename_reads( cpuid ):
  return committed_int_instructions( cpuid )

def rename_writes( cpuid ):
  return committed_int_instructions( cpuid )

def fp_rename_reads( cpuid ):
  return committed_fp_instructions( cpuid )

def fp_rename_writes( cpuid ):
  return committed_fp_instructions( cpuid )

def inst_window_reads( cpuid ):
  return committed_int_instructions( cpuid )

def inst_window_writes( cpuid ):
  return committed_int_instructions( cpuid )

def inst_window_wakeup_accesses( cpuid ):
  return committed_int_instructions( cpuid )

def fp_inst_window_reads( cpuid ):
  return committed_fp_instructions( cpuid )

def fp_inst_window_writes( cpuid ):
  return committed_fp_instructions( cpuid )

def fp_inst_window_wakeup_accesses( cpuid ):
  return committed_fp_instructions( cpuid )

def load_instructions( cpuid ):
  return str(stats_for_core[ cpuid ][ "MemRead" ] +\
             stats_for_core[ cpuid ][ "FloatMemRead" ])

def store_instructions( cpuid ):
  return str(stats_for_core[ cpuid ][ "MemWrite" ] +\
             stats_for_core[ cpuid ][ "FloatMemWrite" ])

#------------------------------------------------------------------------------
# special xml param name -> calculation function
#------------------------------------------------------------------------------
special_pattern_head_list = [
          ("number_of_cores"                , number_of_cores),
          ("total_cycles"                   , system_total_cycles),
          ("idle_cycles"                    , system_idle_cycles),
          ("busy_cycles"                    , system_busy_cycles),
        ]

special_pattern_cpu_list = [
          ("x86"                            , x86),
          ("number_hardware_threads"        , number_hardware_threads),
          ("fetch_width"                    , fetch_width),
          ("number_instruction_fetch_ports" , number_instruction_fetch_ports),
          ("decode_width"                   , decode_width),
          ("issue_width"                    , issue_width),
          ("peak_issue_width"               , peak_issue_width),
          ("commit_width"                   , commit_width),
          ("ALU_per_core"                   , ALU_per_core),
          ("MUL_per_core"                   , MUL_per_core),
          ("FPU_per_core"                   , FPU_per_core),
          ("instruction_buffer_size"        , instruction_buffer_size),
          ("instruction_window_size"        , instruction_window_size),
          ("fp_instruction_window_size"     , fp_instruction_window_size),
          ("ROB_size"                       , ROB_size),
          ("archi_Regs_IRF_size"            , archi_Regs_IRF_size),
          ("archi_Regs_FRF_size"            , archi_Regs_FRF_size),
          ("phy_Regs_IRF_size"              , phy_Regs_IRF_size),
          ("phy_Regs_FRF_size"              , phy_Regs_FRF_size),
          ("store_buffer_size"              , store_buffer_size),
          ("load_buffer_size"               , load_buffer_size),
          ("memory_ports"                   , memory_ports),
#          ("total_instructions"             , total_instructions),
          ("int_instructions"               , int_instructions),
          ("fp_instructions"                , fp_instructions),
          ("committed_int_instructions"     , committed_int_instructions),
          ("committed_fp_instructions"      , committed_fp_instructions),
          ("pipeline_duty_cycle"            , pipeline_duty_cycle),
          ("busy_cycles"                    , busy_cycles),
          ("ialu_accesses"                  , ialu_accesses),
          ("fpu_accesses"                   , fpu_accesses),
          ("mul_accesses"                   , mul_accesses),
          ("icache_config"                  , icache_config),
          ("dcache_config"                  , dcache_config),
          ("dcache_write_accesses"          , dcache_write_accesses),
          ("dcache_write_misses"            , dcache_write_misses),
          ("load_instructions"              , load_instructions),
          ("store_instructions"             , store_instructions),


          # FIXME: wait for Tuan to generate the stats for decode and window
          ("rename_reads"                   , rename_reads),
          ("rename_writes"                  , rename_writes),
          ("fp_rename_reads"                , fp_rename_reads),
          ("fp_rename_writes"               , fp_rename_writes),
          ("inst_window_reads"              , inst_window_reads),
          ("inst_window_writes"             , inst_window_writes),
          ("inst_window_wakeup_accesses"    , inst_window_wakeup_accesses),
          ("fp_inst_window_reads"           , fp_inst_window_reads),
          ("fp_inst_window_writes"          , fp_inst_window_writes),
          ("fp_inst_window_wakeup_accesses" , fp_inst_window_wakeup_accesses),

        ]

