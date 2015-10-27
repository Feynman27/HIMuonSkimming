#-- start of make_header -----------------

#====================================
#  Library MuonMomentumCorrectionsDict
#
#   Generated Wed Mar  6 12:48:13 2013  by tbalestr
#
#====================================

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

cmt_MuonMomentumCorrectionsDict_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsDict_has_target_tag

tags      = $(tag),$(CMTEXTRATAGS),target_MuonMomentumCorrectionsDict

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrectionsDict = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDict.make
cmt_local_tagfile_MuonMomentumCorrectionsDict = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDict.make

else

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrectionsDict = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsDict = $(bin)$(MuonMomentumCorrections_tag).make

endif

include $(cmt_local_tagfile_MuonMomentumCorrectionsDict)
#-include $(cmt_local_tagfile_MuonMomentumCorrectionsDict)

ifdef cmt_MuonMomentumCorrectionsDict_has_target_tag

cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)setup_MuonMomentumCorrectionsDict.make
cmt_dependencies_in_MuonMomentumCorrectionsDict = $(bin)dependencies_MuonMomentumCorrectionsDict.in
#cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsDictsetup.make
cmt_local_MuonMomentumCorrectionsDict_makefile = $(bin)MuonMomentumCorrectionsDict.make

else

cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)setup.make
cmt_dependencies_in_MuonMomentumCorrectionsDict = $(bin)dependencies.in
#cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsDict_makefile = $(bin)MuonMomentumCorrectionsDict.make

endif

#cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make

#MuonMomentumCorrectionsDict :: ;

dirs ::
	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

help ::
	$(echo) 'MuonMomentumCorrectionsDict'

binobj = 
ifdef STRUCTURED_OUTPUT
binobj = MuonMomentumCorrectionsDict/
#MuonMomentumCorrectionsDict::
#	@if test ! -d $(bin)$(binobj) ; then $(mkdir) -p $(bin)$(binobj) ; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)$(binobj)
endif

${CMTROOT}/src/Makefile.core : ;
ifdef use_requirements
$(use_requirements) : ;
endif

#-- end of make_header ------------------
#-- start of libary_header ---------------

MuonMomentumCorrectionsDictlibname   = $(bin)$(library_prefix)MuonMomentumCorrectionsDict$(library_suffix)
MuonMomentumCorrectionsDictlib       = $(MuonMomentumCorrectionsDictlibname).a
MuonMomentumCorrectionsDictstamp     = $(bin)MuonMomentumCorrectionsDict.stamp
MuonMomentumCorrectionsDictshstamp   = $(bin)MuonMomentumCorrectionsDict.shstamp

MuonMomentumCorrectionsDict :: dirs  MuonMomentumCorrectionsDictLIB
	$(echo) "MuonMomentumCorrectionsDict ok"

#-- end of libary_header ----------------
#-- start of library_no_static ------

#MuonMomentumCorrectionsDictLIB :: $(MuonMomentumCorrectionsDictlib) $(MuonMomentumCorrectionsDictshstamp)
MuonMomentumCorrectionsDictLIB :: $(MuonMomentumCorrectionsDictshstamp)
	$(echo) "MuonMomentumCorrectionsDict : library ok"

$(MuonMomentumCorrectionsDictlib) :: $(bin)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o
	$(lib_echo) "static library $@"
	$(lib_silent) cd $(bin); \
	  $(ar) $(MuonMomentumCorrectionsDictlib) $?
	$(lib_silent) $(ranlib) $(MuonMomentumCorrectionsDictlib)
	$(lib_silent) cat /dev/null >$(MuonMomentumCorrectionsDictstamp)

#------------------------------------------------------------------
#  Future improvement? to empty the object files after
#  storing in the library
#
##	  for f in $?; do \
##	    rm $${f}; touch $${f}; \
##	  done
#------------------------------------------------------------------

#
# We add one level of dependency upon the true shared library 
# (rather than simply upon the stamp file)
# this is for cases where the shared library has not been built
# while the stamp was created (error??) 
#

$(MuonMomentumCorrectionsDictlibname).$(shlibsuffix) :: $(bin)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o $(use_requirements) $(MuonMomentumCorrectionsDictstamps)
	$(lib_echo) "shared library $@"
	$(lib_silent) $(shlibbuilder) $(shlibflags) -o $@ $(bin)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o $(MuonMomentumCorrectionsDict_shlibflags)

$(MuonMomentumCorrectionsDictshstamp) :: $(MuonMomentumCorrectionsDictlibname).$(shlibsuffix)
	$(lib_silent) if test -f $(MuonMomentumCorrectionsDictlibname).$(shlibsuffix) ; then \
	  cat /dev/null >$(MuonMomentumCorrectionsDictstamp) && \
	  cat /dev/null >$(MuonMomentumCorrectionsDictshstamp) ; fi

MuonMomentumCorrectionsDictclean ::
	$(cleanup_echo) objects MuonMomentumCorrectionsDict
	$(cleanup_silent) /bin/rm -f $(bin)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o
	$(cleanup_silent) /bin/rm -f $(patsubst %.o,%.d,$(bin)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o) $(patsubst %.o,%.dep,$(bin)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o) $(patsubst %.o,%.d.stamp,$(bin)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o)
	$(cleanup_silent) cd $(bin); /bin/rm -rf MuonMomentumCorrectionsDict_deps MuonMomentumCorrectionsDict_dependencies.make

#-----------------------------------------------------------------
#
#  New section for automatic installation
#
#-----------------------------------------------------------------

install_dir = ${CMTINSTALLAREA}/$(tag)/lib
MuonMomentumCorrectionsDictinstallname = $(library_prefix)MuonMomentumCorrectionsDict$(library_suffix).$(shlibsuffix)

MuonMomentumCorrectionsDict :: MuonMomentumCorrectionsDictinstall

install :: MuonMomentumCorrectionsDictinstall

MuonMomentumCorrectionsDictinstall :: $(install_dir)/$(MuonMomentumCorrectionsDictinstallname)
ifdef CMTINSTALLAREA
	$(echo) "installation done"
endif

$(install_dir)/$(MuonMomentumCorrectionsDictinstallname) :: $(bin)$(MuonMomentumCorrectionsDictinstallname)
ifdef CMTINSTALLAREA
	$(install_silent) $(cmt_install_action) \
	    -source "`(cd $(bin); pwd)`" \
	    -name "$(MuonMomentumCorrectionsDictinstallname)" \
	    -out "$(install_dir)" \
	    -cmd "$(cmt_installarea_command)" \
	    -cmtpath "$($(package)_cmtpath)"
endif

##MuonMomentumCorrectionsDictclean :: MuonMomentumCorrectionsDictuninstall

uninstall :: MuonMomentumCorrectionsDictuninstall

MuonMomentumCorrectionsDictuninstall ::
ifdef CMTINSTALLAREA
	$(cleanup_silent) $(cmt_uninstall_action) \
	    -source "`(cd $(bin); pwd)`" \
	    -name "$(MuonMomentumCorrectionsDictinstallname)" \
	    -out "$(install_dir)" \
	    -cmtpath "$($(package)_cmtpath)"
endif

#-- end of library_no_static ------
#-- start of cpp_library -----------------

ifneq (-MM,)

ifneq ($(MAKECMDGOALS),MuonMomentumCorrectionsDictclean)
ifneq ($(MAKECMDGOALS),uninstall)
-include $(bin)$(binobj)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.d

$(bin)$(binobj)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.d : $(use_requirements) $(cmt_final_setup_MuonMomentumCorrectionsDict)

$(bin)$(binobj)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.d : ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen_rflx.cpp
	$(dep_echo) $@
	$(cpp_silent) $(cppcomp) -MM -o $(@D)/MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.dep $(use_pp_cppflags) $(MuonMomentumCorrectionsDict_pp_cppflags) $(lib_MuonMomentumCorrectionsDict_pp_cppflags) $(MuonMomentumCorrectionsDict_gen_rflx_pp_cppflags) $(use_cppflags) $(MuonMomentumCorrectionsDict_cppflags) $(lib_MuonMomentumCorrectionsDict_cppflags) $(MuonMomentumCorrectionsDict_gen_rflx_cppflags) $(MuonMomentumCorrectionsDict_gen_rflx_cpp_cppflags) -I../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen_rflx.cpp
	$(cpp_silent) $(format_dependencies) $@ $(@D)/MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen_rflx.cpp $(@D)/MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.dep
endif
endif

$(bin)$(binobj)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o : ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen_rflx.cpp
else
$(bin)MuonMomentumCorrectionsDict_dependencies.make : $(MuonMomentumCorrectionsDict_gen_rflx_cpp_dependencies)

$(bin)MuonMomentumCorrectionsDict_dependencies.make : ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen_rflx.cpp

$(bin)$(binobj)MuonMomentumCorrectionsDict_gen_rflx_MuonMomentumCorrections.o : $(MuonMomentumCorrectionsDict_gen_rflx_cpp_dependencies)
endif
	$(cpp_echo) ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen_rflx.cpp
	$(cpp_silent) $(cppcomp) -o $@ $(use_pp_cppflags) $(MuonMomentumCorrectionsDict_pp_cppflags) $(lib_MuonMomentumCorrectionsDict_pp_cppflags) $(MuonMomentumCorrectionsDict_gen_rflx_pp_cppflags) $(use_cppflags) $(MuonMomentumCorrectionsDict_cppflags) $(lib_MuonMomentumCorrectionsDict_cppflags) $(MuonMomentumCorrectionsDict_gen_rflx_cppflags) $(MuonMomentumCorrectionsDict_gen_rflx_cpp_cppflags) -I../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections ../i686-slc5-gcc43-opt/dict/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen_rflx.cpp

#-- end of cpp_library ------------------
#-- start of cleanup_header --------------

clean :: MuonMomentumCorrectionsDictclean ;
#	@cd .

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(MuonMomentumCorrectionsDict.make) $@: No rule for such target" >&2
else
.DEFAULT::
	$(error PEDANTIC: $@: No rule for such target)
endif

MuonMomentumCorrectionsDictclean ::
#-- end of cleanup_header ---------------
#-- start of cleanup_library -------------
	$(cleanup_echo) library MuonMomentumCorrectionsDict
	-$(cleanup_silent) cd $(bin); /bin/rm -f $(library_prefix)MuonMomentumCorrectionsDict$(library_suffix).a $(library_prefix)MuonMomentumCorrectionsDict$(library_suffix).s? MuonMomentumCorrectionsDict.stamp MuonMomentumCorrectionsDict.shstamp
#-- end of cleanup_library ---------------
