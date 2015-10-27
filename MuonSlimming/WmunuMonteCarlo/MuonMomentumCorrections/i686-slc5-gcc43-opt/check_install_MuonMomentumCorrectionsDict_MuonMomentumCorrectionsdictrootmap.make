#-- start of make_header -----------------

#====================================
#  Document check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
#
#   Generated Tue May 15 22:56:44 2012  by tbalestr
#
#====================================

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

cmt_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

tags      = $(tag),$(CMTEXTRATAGS),target_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag)_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag)_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

else

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag).make

endif

include $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)
#-include $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)

ifdef cmt_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_dependencies_in_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)dependencies_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in
#cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrections_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapsetup.make
cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

else

cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup.make
cmt_dependencies_in_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)dependencies.in
#cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

endif

#cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make

#check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap :: ;

dirs ::
	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

help ::
	$(echo) 'check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap'

binobj = 
ifdef STRUCTURED_OUTPUT
binobj = check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap/
#check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap::
#	@if test ! -d $(bin)$(binobj) ; then $(mkdir) -p $(bin)$(binobj) ; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)$(binobj)
endif

${CMTROOT}/src/Makefile.core : ;
ifdef use_requirements
$(use_requirements) : ;
endif

#-- end of make_header ------------------
#-- start of cmt_action_runner_header ---------------

ifdef ONCE
check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_once = 1
endif

ifdef check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_once

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp = $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.actionstamp
#check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp = check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.actionstamp

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp)
	$(echo) "check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap ok"
#	@echo check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap ok

#$(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp) :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies)
$(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp) ::
	$(silent) /cvmfs/atlas.cern.ch/repo/sw/software/i686-slc5-gcc43-opt/17.2.2/AtlasCore/17.2.2/External/ExternalPolicy/cmt/atlas_check_installations.sh -files=' ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap ' -installdir=/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/InstallArea/i686-slc5-gcc43-opt/lib -level=
	$(silent) cat /dev/null > $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp)
#	@echo ok > $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp)

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean ::
	$(cleanup_silent) /bin/rm -f $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapactionstamp)

else

#check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies)
check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap ::
	$(silent) /cvmfs/atlas.cern.ch/repo/sw/software/i686-slc5-gcc43-opt/17.2.2/AtlasCore/17.2.2/External/ExternalPolicy/cmt/atlas_check_installations.sh -files=' ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap ' -installdir=/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/InstallArea/i686-slc5-gcc43-opt/lib -level=

endif

install ::
uninstall ::

#-- end of cmt_action_runner_header -----------------
#-- start of cleanup_header --------------

clean :: check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean ;
#	@cd .

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make) $@: No rule for such target" >&2
else
.DEFAULT::
	$(error PEDANTIC: $@: No rule for such target)
endif

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean ::
#-- end of cleanup_header ---------------
