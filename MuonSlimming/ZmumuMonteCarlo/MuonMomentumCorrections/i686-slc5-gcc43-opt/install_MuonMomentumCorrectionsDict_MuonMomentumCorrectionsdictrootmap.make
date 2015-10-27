#-- start of make_header -----------------

#====================================
#  Document install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
#
#   Generated Wed Mar  6 12:48:15 2013  by tbalestr
#
#====================================

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

cmt_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

tags      = $(tag),$(CMTEXTRATAGS),target_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag)_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag)_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

else

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag).make

endif

include $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)
#-include $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)

ifdef cmt_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_dependencies_in_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)dependencies_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in
#cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrections_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapsetup.make
cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

else

cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup.make
cmt_dependencies_in_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)dependencies.in
#cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

endif

#cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make

#install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap :: ;

dirs ::
	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

help ::
	$(echo) 'install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap'

binobj = 
ifdef STRUCTURED_OUTPUT
binobj = install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap/
#install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap::
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

install_dir = ${installarea}/i686-slc5-gcc43-opt/lib

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall ;

install :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall ;

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall

uninstall :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall


# This is to avoid error in case there are no files to install
# Ideally, the fragment should not be used without files to install,
# and this line should be dropped then
install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall :: ;

MuonMomentumCorrectionsDict_dsomap_dependencies = ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap


install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall :: ${install_dir}/MuonMomentumCorrectionsDict.dsomap
	@if test ! "${installarea}" = ""; then\
	  echo "installation done"; \
	fi

${install_dir}/MuonMomentumCorrectionsDict.dsomap :: ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_install_action) "$${d}" "MuonMomentumCorrectionsDict.dsomap" "$(install_dir)" "/cvmfs/atlas.cern.ch/repo/sw/software/i686-slc5-gcc43-opt/17.2.2/AtlasCore/17.2.2/External/ExternalPolicy/src/symlink.sh" "$($(package)_cmtpath)"; \
	fi

../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap : ;

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall ::
	@if test ! "${installarea}" = ""; then \
	  d=`dirname ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap`; \
	  d=`(cd $${d}; pwd)`; \
	  CMTINSTALLAREA=${CMTINSTALLAREA}; export CMTINSTALLAREA; \
	  $(cmt_uninstall_action) "$${d}" "MuonMomentumCorrectionsDict.dsomap" "$(install_dir)" "$($(package)_cmtpath)"; \
	fi
#-- start of cleanup_header --------------

clean :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean ;
#	@cd .

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make) $@: No rule for such target" >&2
else
.DEFAULT::
	$(error PEDANTIC: $@: No rule for such target)
endif

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean ::
#-- end of cleanup_header ---------------
