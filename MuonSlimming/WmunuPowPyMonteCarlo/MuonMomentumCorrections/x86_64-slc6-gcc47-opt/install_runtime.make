#-- start of make_header -----------------

#====================================
#  Document install_runtime
#
#   Generated Sun May 18 22:39:52 2014  by tbalestr
#
#====================================

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

cmt_install_runtime_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_install_runtime_has_target_tag

tags      = $(tag),$(CMTEXTRATAGS),target_install_runtime

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_install_runtime = $(MuonMomentumCorrections_tag)_install_runtime.make
cmt_local_tagfile_install_runtime = $(bin)$(MuonMomentumCorrections_tag)_install_runtime.make

else

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_install_runtime = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_install_runtime = $(bin)$(MuonMomentumCorrections_tag).make

endif

include $(cmt_local_tagfile_install_runtime)
#-include $(cmt_local_tagfile_install_runtime)

ifdef cmt_install_runtime_has_target_tag

cmt_final_setup_install_runtime = $(bin)setup_install_runtime.make
cmt_dependencies_in_install_runtime = $(bin)dependencies_install_runtime.in
#cmt_final_setup_install_runtime = $(bin)MuonMomentumCorrections_install_runtimesetup.make
cmt_local_install_runtime_makefile = $(bin)install_runtime.make

else

cmt_final_setup_install_runtime = $(bin)setup.make
cmt_dependencies_in_install_runtime = $(bin)dependencies.in
#cmt_final_setup_install_runtime = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_install_runtime_makefile = $(bin)install_runtime.make

endif

#cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make

#install_runtime :: ;

dirs ::
	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

help ::
	$(echo) 'install_runtime'

binobj = 
ifdef STRUCTURED_OUTPUT
binobj = install_runtime/
#install_runtime::
#	@if test ! -d $(bin)$(binobj) ; then $(mkdir) -p $(bin)$(binobj) ; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)$(binobj)
endif

${CMTROOT}/src/Makefile.core : ;
ifdef use_requirements
$(use_requirements) : ;
endif

#-- end of make_header ------------------


ifeq ($(INSTALLAREA),)
installarea = $(CMTINSTALLAREA)
else
ifeq ($(findstring `,$(INSTALLAREA)),`)
installarea = $(shell $(subst `,, $(INSTALLAREA)))
else
installarea = $(INSTALLAREA)
endif
endif

install_dir = ${installarea}/share

install_runtime :: install_runtimeinstall ;

install :: install_runtimeinstall ;

install_runtimeclean :: install_runtimeuninstall

uninstall :: install_runtimeuninstall


# This is to avoid error in case there are no files to install
# Ideally, the fragment should not be used without files to install,
# and this line should be dropped then
install_runtimeinstall :: ;

Data11_CorrMatrix_muid_Rel17_dat_dependencies = ../share/Data11_CorrMatrix_muid_Rel17.dat
Data10_CorrMatrix_staco_Rel16.6_dat_dependencies = ../share/Data10_CorrMatrix_staco_Rel16.6.dat
Data11_Scale_KC_values_staco_Rel17_dat_dependencies = ../share/Data11_Scale_KC_values_staco_Rel17.dat
Scale_values_muid_Rel17_dat_dependencies = ../share/Scale_values_muid_Rel17.dat
MC_values_staco_Rel17_dat_dependencies = ../share/MC_values_staco_Rel17.dat
Data11_values_muid_Rel17_dat_dependencies = ../share/Data11_values_muid_Rel17.dat
Scale_values_staco_Rel17_dat_dependencies = ../share/Scale_values_staco_Rel17.dat
Data11_CorrMatrix_staco_Rel16.6_dat_dependencies = ../share/Data11_CorrMatrix_staco_Rel16.6.dat
Data10_values_staco_Rel16.6_dat_dependencies = ../share/Data10_values_staco_Rel16.6.dat
Scale_values_muid_Rel16.6_dat_dependencies = ../share/Scale_values_muid_Rel16.6.dat
Data10_CorrMatrix_muid_Rel16.6_dat_dependencies = ../share/Data10_CorrMatrix_muid_Rel16.6.dat
Data11_CorrMatrix_muid_Rel16.6_dat_dependencies = ../share/Data11_CorrMatrix_muid_Rel16.6.dat
Data10_values_muid_Rel16.6_dat_dependencies = ../share/Data10_values_muid_Rel16.6.dat
Data11_CorrMatrix_staco_Rel17_dat_dependencies = ../share/Data11_CorrMatrix_staco_Rel17.dat
Data11_Scale_kpkm_values_staco_Rel17_dat_dependencies = ../share/Data11_Scale_kpkm_values_staco_Rel17.dat
MC_values_staco_Rel16.6_dat_dependencies = ../share/MC_values_staco_Rel16.6.dat
MC_values_muid_Rel16.6_dat_dependencies = ../share/MC_values_muid_Rel16.6.dat
Data11_values_staco_Rel16.6_dat_dependencies = ../share/Data11_values_staco_Rel16.6.dat
Data11_values_staco_Rel17_dat_dependencies = ../share/Data11_values_staco_Rel17.dat
Scale_values_staco_Rel16.6_dat_dependencies = ../share/Scale_values_staco_Rel16.6.dat
Data11_values_muid_Rel16.6_dat_dependencies = ../share/Data11_values_muid_Rel16.6.dat
MC_values_muid_Rel17_dat_dependencies = ../share/MC_values_muid_Rel17.dat
Data11_Scale_kpkm_values_muid_Rel17_dat_dependencies = ../share/Data11_Scale_kpkm_values_muid_Rel17.dat
Data11_Scale_KC_values_muid_Rel17_dat_dependencies = ../share/Data11_Scale_KC_values_muid_Rel17.dat


install_runtimeinstall :: ${install_dir}/Data11_CorrMatrix_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_CorrMatrix_muid_Rel17.dat :: ../share/Data11_CorrMatrix_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_CorrMatrix_muid_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_CorrMatrix_muid_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_CorrMatrix_muid_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data10_CorrMatrix_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data10_CorrMatrix_staco_Rel16.6.dat :: ../share/Data10_CorrMatrix_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_CorrMatrix_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data10_CorrMatrix_staco_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data10_CorrMatrix_staco_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_CorrMatrix_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data10_CorrMatrix_staco_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_Scale_KC_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_Scale_KC_values_staco_Rel17.dat :: ../share/Data11_Scale_KC_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_KC_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_Scale_KC_values_staco_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_Scale_KC_values_staco_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_KC_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_Scale_KC_values_staco_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Scale_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Scale_values_muid_Rel17.dat :: ../share/Scale_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Scale_values_muid_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Scale_values_muid_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Scale_values_muid_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/MC_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/MC_values_staco_Rel17.dat :: ../share/MC_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "MC_values_staco_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/MC_values_staco_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "MC_values_staco_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_values_muid_Rel17.dat :: ../share/Data11_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_values_muid_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_values_muid_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_values_muid_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Scale_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Scale_values_staco_Rel17.dat :: ../share/Scale_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Scale_values_staco_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Scale_values_staco_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Scale_values_staco_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_CorrMatrix_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_CorrMatrix_staco_Rel16.6.dat :: ../share/Data11_CorrMatrix_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_CorrMatrix_staco_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_CorrMatrix_staco_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_CorrMatrix_staco_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data10_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data10_values_staco_Rel16.6.dat :: ../share/Data10_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data10_values_staco_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data10_values_staco_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data10_values_staco_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Scale_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Scale_values_muid_Rel16.6.dat :: ../share/Scale_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Scale_values_muid_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Scale_values_muid_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Scale_values_muid_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data10_CorrMatrix_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data10_CorrMatrix_muid_Rel16.6.dat :: ../share/Data10_CorrMatrix_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_CorrMatrix_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data10_CorrMatrix_muid_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data10_CorrMatrix_muid_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_CorrMatrix_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data10_CorrMatrix_muid_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_CorrMatrix_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_CorrMatrix_muid_Rel16.6.dat :: ../share/Data11_CorrMatrix_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_CorrMatrix_muid_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_CorrMatrix_muid_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_CorrMatrix_muid_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data10_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data10_values_muid_Rel16.6.dat :: ../share/Data10_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data10_values_muid_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data10_values_muid_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data10_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data10_values_muid_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_CorrMatrix_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_CorrMatrix_staco_Rel17.dat :: ../share/Data11_CorrMatrix_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_CorrMatrix_staco_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_CorrMatrix_staco_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_CorrMatrix_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_CorrMatrix_staco_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_Scale_kpkm_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_Scale_kpkm_values_staco_Rel17.dat :: ../share/Data11_Scale_kpkm_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_kpkm_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_Scale_kpkm_values_staco_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_Scale_kpkm_values_staco_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_kpkm_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_Scale_kpkm_values_staco_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/MC_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/MC_values_staco_Rel16.6.dat :: ../share/MC_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "MC_values_staco_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/MC_values_staco_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "MC_values_staco_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/MC_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/MC_values_muid_Rel16.6.dat :: ../share/MC_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "MC_values_muid_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/MC_values_muid_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "MC_values_muid_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_values_staco_Rel16.6.dat :: ../share/Data11_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_values_staco_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_values_staco_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_values_staco_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_values_staco_Rel17.dat :: ../share/Data11_values_staco_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_values_staco_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_values_staco_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_staco_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_values_staco_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Scale_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Scale_values_staco_Rel16.6.dat :: ../share/Scale_values_staco_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Scale_values_staco_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Scale_values_staco_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Scale_values_staco_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Scale_values_staco_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_values_muid_Rel16.6.dat :: ../share/Data11_values_muid_Rel16.6.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_values_muid_Rel16.6.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_values_muid_Rel16.6.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_values_muid_Rel16.6.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_values_muid_Rel16.6.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/MC_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/MC_values_muid_Rel17.dat :: ../share/MC_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "MC_values_muid_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/MC_values_muid_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/MC_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "MC_values_muid_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_Scale_kpkm_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_Scale_kpkm_values_muid_Rel17.dat :: ../share/Data11_Scale_kpkm_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_kpkm_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_Scale_kpkm_values_muid_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_Scale_kpkm_values_muid_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_kpkm_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_Scale_kpkm_values_muid_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi


install_runtimeinstall :: ${install_dir}/Data11_Scale_KC_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/Data11_Scale_KC_values_muid_Rel17.dat :: ../share/Data11_Scale_KC_values_muid_Rel17.dat
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_KC_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "Data11_Scale_KC_values_muid_Rel17.dat" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/x86_64-slc6-gcc47-opt/17.8.0/AtlasCore/17.8.0/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../share/Data11_Scale_KC_values_muid_Rel17.dat : ;

install_runtimeuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../share/Data11_Scale_KC_values_muid_Rel17.dat`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "Data11_Scale_KC_values_muid_Rel17.dat" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi
#-- start of cleanup_header --------------

clean :: install_runtimeclean ;
#	@cd .

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(install_runtime.make) $@: No rule for such target" >&2
else
.DEFAULT::
	$(error PEDANTIC: $@: No rule for such target)
endif

install_runtimeclean ::
#-- end of cleanup_header ---------------
