----------> uses
# use AtlasPolicy AtlasPolicy-*  (no_version_directory)
#   use ExternalPolicy ExternalPolicy-* External (no_version_directory)
#     use PlatformPolicy PlatformPolicy-* External (no_version_directory)
#       use GaudiPolicy *  (no_version_directory)
#         use LCG_Settings *  (no_version_directory)
#         use Python * LCG_Interfaces (no_auto_imports) (no_version_directory) (native_version=2.7.3)
#           use LCG_Configuration v*  (no_version_directory)
#           use LCG_Settings v*  (no_version_directory)
#         use tcmalloc * LCG_Interfaces (no_auto_imports) (no_version_directory) (native_version=1.7p3)
#           use LCG_Configuration v*  (no_version_directory)
#           use LCG_Settings v*  (no_version_directory)
#           use libunwind v* LCG_Interfaces (no_version_directory) (native_version=5c2cade)
#             use LCG_Configuration v*  (no_version_directory)
#             use LCG_Settings v*  (no_version_directory)
#       use AtlasCommonPolicy AtlasCommonPolicy-*  (no_version_directory)
#         use LCG_Platforms *  (no_version_directory)
#         use AtlasDoxygen AtlasDoxygen-* Tools (no_version_directory) (native_version=)
#           use LCG_Settings *  (no_version_directory)
#           use LCG_Configuration *  (no_version_directory)
#             use LCG_Platforms *  (no_version_directory)
#     use SLC5_Compat SLC5_Compat-* External (no_version_directory) (native_version=1.0.2)
#       use AtlasExternalArea AtlasExternalArea-* External (no_version_directory)
#         use LCG_Settings v*  (no_version_directory)
#         use PlatformPolicy PlatformPolicy-* External (no_version_directory)
#       use PlatformPolicy PlatformPolicy-* External (no_version_directory)
#     use Mac105_Compat Mac105_Compat-* External (no_version_directory) (native_version=1.0.0)
#       use AtlasExternalArea AtlasExternalArea-* External (no_version_directory)
#       use PlatformPolicy PlatformPolicy-* External (no_version_directory)
#   use AtlasCxxPolicy AtlasCxxPolicy-*  (no_version_directory)
#     use GaudiPolicy v*  (no_auto_imports) (no_version_directory)
#     use ExternalPolicy ExternalPolicy-* External (no_version_directory)
#     use AtlasCompilers AtlasCompilers-* External (no_version_directory)
#       use LCG_Platforms *  (no_version_directory)
#   use AtlasCommonPolicy AtlasCommonPolicy-*  (no_version_directory)
#   use GaudiPolicy v*  (no_auto_imports) (no_version_directory)
#   use CodeCheck CodeCheck-* Tools (no_version_directory)
#   use AtlasDoxygen AtlasDoxygen-* Tools (no_version_directory) (native_version=)
# use AtlasROOT AtlasROOT-* External (no_version_directory)
#   use ExternalPolicy ExternalPolicy-* External (no_version_directory)
#   use ROOT v* LCG_Interfaces (no_version_directory) (native_version=5.34.07a)
#     use LCG_Configuration v*  (no_version_directory)
#     use LCG_Settings v*  (no_version_directory)
#     use GCCXML v* LCG_Interfaces (no_auto_imports) (no_version_directory) (native_version=0.9.0_20120309p2)
#       use LCG_Configuration v*  (no_version_directory)
#       use LCG_Settings v*  (no_version_directory)
#     use Python v* LCG_Interfaces (no_auto_imports) (no_version_directory) (native_version=2.7.3)
#     use xrootd v* LCG_Interfaces (no_version_directory) (native_version=3.2.7)
#       use LCG_Configuration v*  (no_version_directory)
#       use LCG_Settings v*  (no_version_directory)
# use AtlasReflex AtlasReflex-* External (no_auto_imports) (no_version_directory)
#   use ExternalPolicy ExternalPolicy-* External (no_version_directory)
#   use Reflex v* LCG_Interfaces (no_version_directory)
#   use AtlasRELAX AtlasRELAX-00-* External (no_auto_imports) (no_version_directory)
#     use ExternalPolicy ExternalPolicy-* External (no_version_directory)
#     use RELAX v* LCG_Interfaces (no_version_directory) (native_version=RELAX_1_3_0l)
#       use LCG_Configuration v*  (no_version_directory)
#       use LCG_Settings v*  (no_version_directory)
# use Reflex v* LCG_Interfaces (no_version_directory)
#   use LCG_Configuration v*  (no_version_directory)
#   use LCG_Settings v*  (no_version_directory)
#   use ROOT v* LCG_Interfaces (no_auto_imports) (no_version_directory) (native_version=5.34.07a)
#
# Selection :
use CMT v1r25 (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0)
use CodeCheck CodeCheck-01-02-03 Tools (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use LCG_Platforms v1  (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65)
use AtlasCompilers AtlasCompilers-00-00-18 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/DetCommon/17.8.0)
use LCG_Configuration v1  (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65)
use LCG_Settings v1  (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65)
use RELAX v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65) (no_auto_imports)
use xrootd v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65)
use GCCXML v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65) (no_auto_imports)
use AtlasDoxygen AtlasDoxygen-00-03-03 Tools (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/DetCommon/17.8.0)
use AtlasCommonPolicy AtlasCommonPolicy-00-00-24  (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/DetCommon/17.8.0)
use libunwind v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65) (no_auto_imports)
use tcmalloc v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65) (no_auto_imports)
use Python v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65) (no_auto_imports)
use ROOT v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65)
use Reflex v1 LCG_Interfaces (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65)
use GaudiPolicy GaudiPolicy-12-04-06  (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/GAUDI/v23r6p1)
use PlatformPolicy PlatformPolicy-00-00-14 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use AtlasExternalArea AtlasExternalArea-00-00-25 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use Mac105_Compat Mac105_Compat-00-00-01 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use SLC5_Compat SLC5_Compat-00-00-02 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use ExternalPolicy ExternalPolicy-00-01-62 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use AtlasRELAX AtlasRELAX-00-01-00 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0) (no_auto_imports)
use AtlasReflex AtlasReflex-00-02-35 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0) (no_auto_imports)
use AtlasROOT AtlasROOT-02-03-08 External (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use AtlasCxxPolicy AtlasCxxPolicy-00-00-62  (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use AtlasPolicy AtlasPolicy-01-07-28  (/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0)
use CMTUSERCONTEXT v0 (/cvmfs/atlas.cern.ch/repo/tools/slc6/cmt)
----------> tags
CMTv1 (from CMTVERSION)
CMTr25 (from CMTVERSION)
CMTp0 (from CMTVERSION)
Linux (from uname) package [CMT LCG_Platforms AtlasCxxPolicy AtlasPolicy] implies [Unix host-linux cpp_native_dependencies]
x86_64-slc6-gcc47-opt (from CMTCONFIG) package [LCG_Platforms PlatformPolicy] implies [target-x86_64 target-slc6 target-gcc47 target-opt Linux slc6 64 gcc-4.7 opt x86_64-slc6-gcc47]
STANDALONE (from CMTSITE)
CMTUSERCONTEXT_no_config (from PROJECT) excludes [CMTUSERCONTEXT_config]
CMTUSERCONTEXT_no_root (from PROJECT) excludes [CMTUSERCONTEXT_root]
CMTUSERCONTEXT_cleanup (from PROJECT) excludes [CMTUSERCONTEXT_no_cleanup]
CMTUSERCONTEXT_scripts (from PROJECT) excludes [CMTUSERCONTEXT_no_scripts]
CMTUSERCONTEXT_prototypes (from PROJECT) excludes [CMTUSERCONTEXT_no_prototypes]
CMTUSERCONTEXT_with_installarea (from PROJECT) excludes [CMTUSERCONTEXT_without_installarea]
CMTUSERCONTEXT_without_version_directory (from PROJECT) excludes [CMTUSERCONTEXT_with_version_directory]
public_no_config (from PROJECT) excludes [public_config]
public_no_root (from PROJECT) excludes [public_root]
public_cleanup (from PROJECT) excludes [public_no_cleanup]
public_scripts (from PROJECT) excludes [public_no_scripts]
public_prototypes (from PROJECT) excludes [public_no_prototypes]
public_with_installarea (from PROJECT) excludes [public_without_installarea]
public_without_version_directory (from PROJECT) excludes [public_with_version_directory]
public (from PROJECT)
AtlasProduction_no_config (from PROJECT) excludes [AtlasProduction_config]
AtlasProduction_no_root (from PROJECT) excludes [AtlasProduction_root]
AtlasProduction_cleanup (from PROJECT) excludes [AtlasProduction_no_cleanup]
AtlasProduction_scripts (from PROJECT) excludes [AtlasProduction_no_scripts]
AtlasProduction_no_prototypes (from PROJECT) excludes [AtlasProduction_prototypes]
AtlasProduction_with_installarea (from PROJECT) excludes [AtlasProduction_without_installarea]
AtlasProduction_without_version_directory (from PROJECT) excludes [AtlasProduction_with_version_directory]
AtlasOffline_no_config (from PROJECT) excludes [AtlasOffline_config]
AtlasOffline_no_root (from PROJECT) excludes [AtlasOffline_root]
AtlasOffline_cleanup (from PROJECT) excludes [AtlasOffline_no_cleanup]
AtlasOffline_scripts (from PROJECT) excludes [AtlasOffline_no_scripts]
AtlasOffline_no_prototypes (from PROJECT) excludes [AtlasOffline_prototypes]
AtlasOffline_with_installarea (from PROJECT) excludes [AtlasOffline_without_installarea]
AtlasOffline_without_version_directory (from PROJECT) excludes [AtlasOffline_with_version_directory]
AtlasAnalysis_no_config (from PROJECT) excludes [AtlasAnalysis_config]
AtlasAnalysis_no_root (from PROJECT) excludes [AtlasAnalysis_root]
AtlasAnalysis_cleanup (from PROJECT) excludes [AtlasAnalysis_no_cleanup]
AtlasAnalysis_scripts (from PROJECT) excludes [AtlasAnalysis_no_scripts]
AtlasAnalysis_no_prototypes (from PROJECT) excludes [AtlasAnalysis_prototypes]
AtlasAnalysis_with_installarea (from PROJECT) excludes [AtlasAnalysis_without_installarea]
AtlasAnalysis_without_version_directory (from PROJECT) excludes [AtlasAnalysis_with_version_directory]
AtlasTrigger_no_config (from PROJECT) excludes [AtlasTrigger_config]
AtlasTrigger_no_root (from PROJECT) excludes [AtlasTrigger_root]
AtlasTrigger_cleanup (from PROJECT) excludes [AtlasTrigger_no_cleanup]
AtlasTrigger_scripts (from PROJECT) excludes [AtlasTrigger_no_scripts]
AtlasTrigger_no_prototypes (from PROJECT) excludes [AtlasTrigger_prototypes]
AtlasTrigger_with_installarea (from PROJECT) excludes [AtlasTrigger_without_installarea]
AtlasTrigger_without_version_directory (from PROJECT) excludes [AtlasTrigger_with_version_directory]
AtlasReconstruction_no_config (from PROJECT) excludes [AtlasReconstruction_config]
AtlasReconstruction_no_root (from PROJECT) excludes [AtlasReconstruction_root]
AtlasReconstruction_cleanup (from PROJECT) excludes [AtlasReconstruction_no_cleanup]
AtlasReconstruction_scripts (from PROJECT) excludes [AtlasReconstruction_no_scripts]
AtlasReconstruction_no_prototypes (from PROJECT) excludes [AtlasReconstruction_prototypes]
AtlasReconstruction_with_installarea (from PROJECT) excludes [AtlasReconstruction_without_installarea]
AtlasReconstruction_without_version_directory (from PROJECT) excludes [AtlasReconstruction_with_version_directory]
AtlasEvent_no_config (from PROJECT) excludes [AtlasEvent_config]
AtlasEvent_no_root (from PROJECT) excludes [AtlasEvent_root]
AtlasEvent_cleanup (from PROJECT) excludes [AtlasEvent_no_cleanup]
AtlasEvent_scripts (from PROJECT) excludes [AtlasEvent_no_scripts]
AtlasEvent_no_prototypes (from PROJECT) excludes [AtlasEvent_prototypes]
AtlasEvent_with_installarea (from PROJECT) excludes [AtlasEvent_without_installarea]
AtlasEvent_without_version_directory (from PROJECT) excludes [AtlasEvent_with_version_directory]
AtlasConditions_no_config (from PROJECT) excludes [AtlasConditions_config]
AtlasConditions_no_root (from PROJECT) excludes [AtlasConditions_root]
AtlasConditions_cleanup (from PROJECT) excludes [AtlasConditions_no_cleanup]
AtlasConditions_scripts (from PROJECT) excludes [AtlasConditions_no_scripts]
AtlasConditions_no_prototypes (from PROJECT) excludes [AtlasConditions_prototypes]
AtlasConditions_with_installarea (from PROJECT) excludes [AtlasConditions_without_installarea]
AtlasConditions_without_version_directory (from PROJECT) excludes [AtlasConditions_with_version_directory]
AtlasCore_no_config (from PROJECT) excludes [AtlasCore_config]
AtlasCore_no_root (from PROJECT) excludes [AtlasCore_root]
AtlasCore_cleanup (from PROJECT) excludes [AtlasCore_no_cleanup]
AtlasCore_scripts (from PROJECT) excludes [AtlasCore_no_scripts]
AtlasCore_no_prototypes (from PROJECT) excludes [AtlasCore_prototypes]
AtlasCore_with_installarea (from PROJECT) excludes [AtlasCore_without_installarea]
AtlasCore_without_version_directory (from PROJECT) excludes [AtlasCore_with_version_directory]
DetCommon_no_config (from PROJECT) excludes [DetCommon_config]
DetCommon_no_root (from PROJECT) excludes [DetCommon_root]
DetCommon_cleanup (from PROJECT) excludes [DetCommon_no_cleanup]
DetCommon_scripts (from PROJECT) excludes [DetCommon_no_scripts]
DetCommon_prototypes (from PROJECT) excludes [DetCommon_no_prototypes]
DetCommon_with_installarea (from PROJECT) excludes [DetCommon_without_installarea]
DetCommon_without_version_directory (from PROJECT) excludes [DetCommon_with_version_directory]
LCGCMT_no_config (from PROJECT) excludes [LCGCMT_config]
LCGCMT_no_root (from PROJECT) excludes [LCGCMT_root]
LCGCMT_cleanup (from PROJECT) excludes [LCGCMT_no_cleanup]
LCGCMT_scripts (from PROJECT) excludes [LCGCMT_no_scripts]
LCGCMT_prototypes (from PROJECT) excludes [LCGCMT_no_prototypes]
LCGCMT_with_installarea (from PROJECT) excludes [LCGCMT_without_installarea]
LCGCMT_with_version_directory (from PROJECT) excludes [LCGCMT_without_version_directory]
ATLAS package [GaudiPolicy] implies [use-shared-dir no-pyzip] activated arguments
tdaq-common_no_config (from PROJECT) excludes [tdaq-common_config]
tdaq-common_no_root (from PROJECT) excludes [tdaq-common_root]
tdaq-common_cleanup (from PROJECT) excludes [tdaq-common_no_cleanup]
tdaq-common_scripts (from PROJECT) excludes [tdaq-common_no_scripts]
tdaq-common_prototypes (from PROJECT) excludes [tdaq-common_no_prototypes]
tdaq-common_without_installarea (from PROJECT) excludes [tdaq-common_with_installarea]
tdaq-common_with_version_directory (from PROJECT) excludes [tdaq-common_without_version_directory]
GAUDI_no_config (from PROJECT) excludes [GAUDI_config]
GAUDI_root (from PROJECT) excludes [GAUDI_no_root]
GAUDI_cleanup (from PROJECT) excludes [GAUDI_no_cleanup]
GAUDI_scripts (from PROJECT) excludes [GAUDI_no_scripts]
GAUDI_prototypes (from PROJECT) excludes [GAUDI_no_prototypes]
GAUDI_with_installarea (from PROJECT) excludes [GAUDI_without_installarea]
GAUDI_without_version_directory (from PROJECT) excludes [GAUDI_with_version_directory]
dqm-common_no_config (from PROJECT) excludes [dqm-common_config]
dqm-common_no_root (from PROJECT) excludes [dqm-common_root]
dqm-common_cleanup (from PROJECT) excludes [dqm-common_no_cleanup]
dqm-common_scripts (from PROJECT) excludes [dqm-common_no_scripts]
dqm-common_prototypes (from PROJECT) excludes [dqm-common_no_prototypes]
dqm-common_without_installarea (from PROJECT) excludes [dqm-common_with_installarea]
dqm-common_with_version_directory (from PROJECT) excludes [dqm-common_without_version_directory]
AtlasSimulation_no_config (from PROJECT) excludes [AtlasSimulation_config]
AtlasSimulation_no_root (from PROJECT) excludes [AtlasSimulation_root]
AtlasSimulation_cleanup (from PROJECT) excludes [AtlasSimulation_no_cleanup]
AtlasSimulation_scripts (from PROJECT) excludes [AtlasSimulation_no_scripts]
AtlasSimulation_no_prototypes (from PROJECT) excludes [AtlasSimulation_prototypes]
AtlasSimulation_with_installarea (from PROJECT) excludes [AtlasSimulation_without_installarea]
AtlasSimulation_without_version_directory (from PROJECT) excludes [AtlasSimulation_with_version_directory]
x86_64 (from package CMT) package [LCG_Platforms] implies [host-x86_64]
slc65 (from package CMT) package [LCG_Platforms PlatformPolicy] implies [host-slc6]
gcc472 (from package CMT) package [LCG_Platforms] implies [host-gcc47]
Unix (from package CMT) package [LCG_Platforms] implies [host-unix] excludes [WIN32 Win32]
c_native_dependencies (from package CMT) activated GaudiPolicy
cpp_native_dependencies (from package CMT) activated GaudiPolicy
/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0:/cvmfs/atlas.cern.ch/repo/sw/tdaq/tdaqnotProject (from package ExternalPolicy)
target-unix (from package LCG_Settings) activated LCG_Platforms
target-x86_64 (from package LCG_Settings) activated LCG_Platforms
target-gcc47 (from package LCG_Settings) package [LCG_Platforms] implies [target-gcc4 target-lcg-compiler lcg-compiler target-c11] activated LCG_Platforms
host-x86_64 (from package LCG_Settings) activated LCG_Platforms
target-slc (from package LCG_Settings) package [LCG_Platforms] implies [target-linux] activated LCG_Platforms
target-gcc (from package LCG_Settings) activated LCG_Platforms
target-gcc4 (from package LCG_Settings) package [LCG_Platforms] implies [target-gcc] activated LCG_Platforms
target-lcg-compiler (from package LCG_Settings) activated LCG_Platforms
host-gcc4 (from package LCG_Platforms) package [LCG_Platforms] implies [host-gcc]
host-gcc47 (from package LCG_Platforms) package [LCG_Platforms] implies [host-gcc4]
host-gcc (from package LCG_Platforms)
host-linux (from package LCG_Platforms) package [LCG_Platforms] implies [host-unix]
host-unix (from package LCG_Platforms)
host-slc6 (from package LCG_Platforms) package [LCG_Platforms] implies [host-slc]
host-slc (from package LCG_Platforms) package [LCG_Platforms] implies [host-linux]
target-opt (from package LCG_Platforms)
target-slc6 (from package LCG_Platforms) package [LCG_Platforms] implies [target-slc]
target-linux (from package LCG_Platforms) package [LCG_Platforms] implies [target-unix]
lcg-compiler (from package LCG_Platforms)
target-c11 (from package LCG_Platforms)
ROOT_GE_5_15 (from package LCG_Configuration)
ROOT_GE_5_19 (from package LCG_Configuration)
use-shared-dir (from package GaudiPolicy)
do_genconf (from package GaudiPolicy) activated AtlasPolicy
no-pyzip (from package GaudiPolicy)
separate-debug (from package AtlasCommonPolicy)
LCGCMT_INSTALLED (from package PlatformPolicy)
block-tdaqc (from package PlatformPolicy)
opt (from package PlatformPolicy) package [AtlasPolicy] implies [optimized]
gcc (from package PlatformPolicy)
64 (from package PlatformPolicy) package [PlatformPolicy] implies [target-64]
gcc-4.7 (from package PlatformPolicy) package [PlatformPolicy] implies [gcc47x gcc47 gcc]
gcc47x (from package PlatformPolicy)
gcc47 (from package PlatformPolicy)
slc6 (from package PlatformPolicy)
x86_64-slc6-gcc47 (from package PlatformPolicy)
target-64 (from package PlatformPolicy)
asNeeded (from package PlatformPolicy)
NICOS (from package AtlasCxxPolicy) package AtlasCxxPolicy excludes [NICOSrel_nightly]
optimized (from package AtlasPolicy) package [AtlasPolicy] implies [opt]
HasAthenaRunTime (from package AtlasPolicy)
ROOTBasicLibs (from package AtlasROOT)
ROOTMathLibs (from package AtlasROOT) activated MuonMomentumCorrections
ROOTGraphicsLibs (from package AtlasROOT) activated MuonMomentumCorrections
----------> CMTPATH
# Add path /cvmfs/atlas.cern.ch/repo/tools/slc6/cmt from CMTUSERCONTEXT
# Add path /afs/cern.ch/user/t/tbalestr/public/17.2.10.5 from initialization
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasProduction/17.8.0.2 from initialization
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasOffline/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasAnalysis/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasSimulation/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasTrigger/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasReconstruction/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasEvent/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/dqm-common/dqm-common-00-21-05 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasConditions/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/tdaq-common/tdaq-common-01-20-05 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/DetCommon/17.8.0 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/GAUDI/v23r6p1 from ProjectPath
# Add path /cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/LCGCMT/LCGCMT_65 from ProjectPath
