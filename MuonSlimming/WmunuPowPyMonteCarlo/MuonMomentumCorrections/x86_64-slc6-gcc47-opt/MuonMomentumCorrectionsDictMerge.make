#-- start of make_header -----------------

#====================================
#  Document MuonMomentumCorrectionsDictMerge
#
#   Generated Sun May 18 22:40:05 2014  by tbalestr
#
#====================================

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

cmt_MuonMomentumCorrectionsDictMerge_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsDictMerge_has_target_tag

tags      = $(tag),$(CMTEXTRATAGS),target_MuonMomentumCorrectionsDictMerge

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDictMerge.make
cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDictMerge.make

else

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(bin)$(MuonMomentumCorrections_tag).make

endif

include $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge)
#-include $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge)

ifdef cmt_MuonMomentumCorrectionsDictMerge_has_target_tag

cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)setup_MuonMomentumCorrectionsDictMerge.make
cmt_dependencies_in_MuonMomentumCorrectionsDictMerge = $(bin)dependencies_MuonMomentumCorrectionsDictMerge.in
#cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsDictMergesetup.make
cmt_local_MuonMomentumCorrectionsDictMerge_makefile = $(bin)MuonMomentumCorrectionsDictMerge.make

else

cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)setup.make
cmt_dependencies_in_MuonMomentumCorrectionsDictMerge = $(bin)dependencies.in
#cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsDictMerge_makefile = $(bin)MuonMomentumCorrectionsDictMerge.make

endif

#cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make

#MuonMomentumCorrectionsDictMerge :: ;

dirs ::
	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

help ::
	$(echo) 'MuonMomentumCorrectionsDictMerge'

binobj = 
ifdef STRUCTURED_OUTPUT
binobj = MuonMomentumCorrectionsDictMerge/
#MuonMomentumCorrectionsDictMerge::
#	@if test ! -d $(bin)$(binobj) ; then $(mkdir) -p $(bin)$(binobj) ; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)$(binobj)
endif

${CMTROOT}/src/Makefile.core : ;
ifdef use_requirements
$(use_requirements) : ;
endif

#-- end of make_header ------------------
#
#  Makefile fragment to merge a <package>Dict.dsomap file into 
#  a single <project>Dict.rootmap file in the install area
#

dsoMapFile    := ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict.dsomap
dsoMapStamp   := $(dsoMapFile).stamp
mergedDictMap := ${CMTINSTALLAREA}/$(tag)/lib/$(project)Dict.rootmap

# drive the running of this fragment off of a <package>Dict.dsomap.stamp file
MuonMomentumCorrectionsDictMerge ::  $(dsoMapStamp) $(mergedDictMap)

$(mergedDictMap) : ${CMTINSTALLAREA}/$(tag)/lib
	touch $(mergedDictMap)

$(dsoMapFile) :
	touch $(dsoMapFile)

ifeq ($(MAKE_VERSION),3.79.1)          # slc3
$(dsoMapStamp)   : $(dsoMapFile) $(mergedDictMap)
else
$(dsoMapStamp)   : $(mergedDictMap) | $(dsoMapFile)
endif
	@echo "Running merge_dict_rootmap  MuonMomentumCorrectionsDictMerge. Map: ${mergedDictMap}" ; 
	$(merge_dict_rootmap_cmd) $(dsoMapFile) $(mergedDictMap)

MuonMomentumCorrectionsDictMergeclean ::
	$(cleanup_silent) $(uninstall_command) $(dsoMapStamp)
#-- start of dependencies ------------------
ifneq ($(MAKECMDGOALS),MuonMomentumCorrectionsDictMergeclean)
ifneq ($(MAKECMDGOALS),uninstall)

$(bin)MuonMomentumCorrectionsDictMerge_dependencies.make : $(use_requirements) $(cmt_final_setup_MuonMomentumCorrectionsDictMerge)
	$(echo) "(MuonMomentumCorrectionsDictMerge.make) Rebuilding $@"; \
	  $(cmtexe) -tag=$(tags) build dependencies -out=$@ -start_all ../MuonMomentumCorrections/MuonMomentumCorrectionsDict.h -end_all $(includes) $(app_MuonMomentumCorrectionsDictMerge_cppflags) $(lib_MuonMomentumCorrectionsDictMerge_cppflags) -name=MuonMomentumCorrectionsDictMerge $? -f=$(cmt_dependencies_in_MuonMomentumCorrectionsDictMerge) -without_cmt

-include $(bin)MuonMomentumCorrectionsDictMerge_dependencies.make

endif
endif

MuonMomentumCorrectionsDictMergeclean ::
	$(cleanup_silent) \rm -rf $(bin)MuonMomentumCorrectionsDictMerge_deps $(bin)MuonMomentumCorrectionsDictMerge_dependencies.make
#-- end of dependencies -------------------
#-- start of dependency ------------------
ifneq ($(MAKECMDGOALS),MuonMomentumCorrectionsDictMergeclean)
ifneq ($(MAKECMDGOALS),uninstall)

$(bin)MuonMomentumCorrectionsDictMerge_dependencies.make : $(MuonMomentumCorrectionsDict_h_dependencies)

$(bin)MuonMomentumCorrectionsDictMerge_dependencies.make : ../MuonMomentumCorrections/MuonMomentumCorrectionsDict.h

endif
endif
#-- end of dependency -------------------
#-- start of cleanup_header --------------

clean :: MuonMomentumCorrectionsDictMergeclean ;
#	@cd .

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(MuonMomentumCorrectionsDictMerge.make) $@: No rule for such target" >&2
else
.DEFAULT::
	$(error PEDANTIC: $@: No rule for such target)
endif

MuonMomentumCorrectionsDictMergeclean ::
#-- end of cleanup_header ---------------
