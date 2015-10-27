#-- start of make_header -----------------

#====================================
#  Library MuonMomentumCorrections
#
#   Generated Wed Mar  6 12:48:05 2013  by tbalestr
#
#====================================

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

cmt_MuonMomentumCorrections_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrections_has_target_tag

tags      = $(tag),$(CMTEXTRATAGS),target_MuonMomentumCorrections

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrections = $(MuonMomentumCorrections_tag)_MuonMomentumCorrections.make
cmt_local_tagfile_MuonMomentumCorrections = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrections.make

else

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrections = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrections = $(bin)$(MuonMomentumCorrections_tag).make

endif

include $(cmt_local_tagfile_MuonMomentumCorrections)
#-include $(cmt_local_tagfile_MuonMomentumCorrections)

ifdef cmt_MuonMomentumCorrections_has_target_tag

cmt_final_setup_MuonMomentumCorrections = $(bin)setup_MuonMomentumCorrections.make
cmt_dependencies_in_MuonMomentumCorrections = $(bin)dependencies_MuonMomentumCorrections.in
#cmt_final_setup_MuonMomentumCorrections = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrections_makefile = $(bin)MuonMomentumCorrections.make

else

cmt_final_setup_MuonMomentumCorrections = $(bin)setup.make
cmt_dependencies_in_MuonMomentumCorrections = $(bin)dependencies.in
#cmt_final_setup_MuonMomentumCorrections = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrections_makefile = $(bin)MuonMomentumCorrections.make

endif

#cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make

#MuonMomentumCorrections :: ;

dirs ::
	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

help ::
	$(echo) 'MuonMomentumCorrections'

binobj = 
ifdef STRUCTURED_OUTPUT
binobj = MuonMomentumCorrections/
#MuonMomentumCorrections::
#	@if test ! -d $(bin)$(binobj) ; then $(mkdir) -p $(bin)$(binobj) ; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)$(binobj)
endif

${CMTROOT}/src/Makefile.core : ;
ifdef use_requirements
$(use_requirements) : ;
endif

#-- end of make_header ------------------
#-- start of libary_header ---------------

MuonMomentumCorrectionslibname   = $(bin)$(library_prefix)MuonMomentumCorrections$(library_suffix)
MuonMomentumCorrectionslib       = $(MuonMomentumCorrectionslibname).a
MuonMomentumCorrectionsstamp     = $(bin)MuonMomentumCorrections.stamp
MuonMomentumCorrectionsshstamp   = $(bin)MuonMomentumCorrections.shstamp

MuonMomentumCorrections :: dirs  MuonMomentumCorrectionsLIB
	$(echo) "MuonMomentumCorrections ok"

#-- end of libary_header ----------------
#-- start of library_no_static ------

#MuonMomentumCorrectionsLIB :: $(MuonMomentumCorrectionslib) $(MuonMomentumCorrectionsshstamp)
MuonMomentumCorrectionsLIB :: $(MuonMomentumCorrectionsshstamp)
	$(echo) "MuonMomentumCorrections : library ok"

$(MuonMomentumCorrectionslib) :: $(bin)SmearingClass.o
	$(lib_echo) "static library $@"
	$(lib_silent) cd $(bin); \
	  $(ar) $(MuonMomentumCorrectionslib) $?
	$(lib_silent) $(ranlib) $(MuonMomentumCorrectionslib)
	$(lib_silent) cat /dev/null >$(MuonMomentumCorrectionsstamp)

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

$(MuonMomentumCorrectionslibname).$(shlibsuffix) :: $(bin)SmearingClass.o $(use_requirements) $(MuonMomentumCorrectionsstamps)
	$(lib_echo) "shared library $@"
	$(lib_silent) $(shlibbuilder) $(shlibflags) -o $@ $(bin)SmearingClass.o $(MuonMomentumCorrections_shlibflags)

$(MuonMomentumCorrectionsshstamp) :: $(MuonMomentumCorrectionslibname).$(shlibsuffix)
	$(lib_silent) if test -f $(MuonMomentumCorrectionslibname).$(shlibsuffix) ; then \
	  cat /dev/null >$(MuonMomentumCorrectionsstamp) && \
	  cat /dev/null >$(MuonMomentumCorrectionsshstamp) ; fi

MuonMomentumCorrectionsclean ::
	$(cleanup_echo) objects MuonMomentumCorrections
	$(cleanup_silent) /bin/rm -f $(bin)SmearingClass.o
	$(cleanup_silent) /bin/rm -f $(patsubst %.o,%.d,$(bin)SmearingClass.o) $(patsubst %.o,%.dep,$(bin)SmearingClass.o) $(patsubst %.o,%.d.stamp,$(bin)SmearingClass.o)
	$(cleanup_silent) cd $(bin); /bin/rm -rf MuonMomentumCorrections_deps MuonMomentumCorrections_dependencies.make

#-----------------------------------------------------------------
#
#  New section for automatic installation
#
#-----------------------------------------------------------------

install_dir = ${CMTINSTALLAREA}/$(tag)/lib
MuonMomentumCorrectionsinstallname = $(library_prefix)MuonMomentumCorrections$(library_suffix).$(shlibsuffix)

MuonMomentumCorrections :: MuonMomentumCorrectionsinstall

install :: MuonMomentumCorrectionsinstall

MuonMomentumCorrectionsinstall :: $(install_dir)/$(MuonMomentumCorrectionsinstallname)
ifdef CMTINSTALLAREA
	$(echo) "installation done"
endif

$(install_dir)/$(MuonMomentumCorrectionsinstallname) :: $(bin)$(MuonMomentumCorrectionsinstallname)
ifdef CMTINSTALLAREA
	$(install_silent) $(cmt_install_action) \
	    -source "`(cd $(bin); pwd)`" \
	    -name "$(MuonMomentumCorrectionsinstallname)" \
	    -out "$(install_dir)" \
	    -cmd "$(cmt_installarea_command)" \
	    -cmtpath "$($(package)_cmtpath)"
endif

##MuonMomentumCorrectionsclean :: MuonMomentumCorrectionsuninstall

uninstall :: MuonMomentumCorrectionsuninstall

MuonMomentumCorrectionsuninstall ::
ifdef CMTINSTALLAREA
	$(cleanup_silent) $(cmt_uninstall_action) \
	    -source "`(cd $(bin); pwd)`" \
	    -name "$(MuonMomentumCorrectionsinstallname)" \
	    -out "$(install_dir)" \
	    -cmtpath "$($(package)_cmtpath)"
endif

#-- end of library_no_static ------
#-- start of cpp_library -----------------

ifneq (-MM,)

ifneq ($(MAKECMDGOALS),MuonMomentumCorrectionsclean)
ifneq ($(MAKECMDGOALS),uninstall)
-include $(bin)$(binobj)SmearingClass.d

$(bin)$(binobj)SmearingClass.d : $(use_requirements) $(cmt_final_setup_MuonMomentumCorrections)

$(bin)$(binobj)SmearingClass.d : ../Root/SmearingClass.cxx
	$(dep_echo) $@
	$(cpp_silent) $(cppcomp) -MM -o $(@D)/SmearingClass.dep $(use_pp_cppflags) $(MuonMomentumCorrections_pp_cppflags) $(lib_MuonMomentumCorrections_pp_cppflags) $(SmearingClass_pp_cppflags) $(use_cppflags) $(MuonMomentumCorrections_cppflags) $(lib_MuonMomentumCorrections_cppflags) $(SmearingClass_cppflags) $(SmearingClass_cxx_cppflags) -I../Root ../Root/SmearingClass.cxx
	$(cpp_silent) $(format_dependencies) $@ $(@D)/SmearingClass.o ../Root/SmearingClass.cxx $(@D)/SmearingClass.dep
endif
endif

$(bin)$(binobj)SmearingClass.o : ../Root/SmearingClass.cxx
else
$(bin)MuonMomentumCorrections_dependencies.make : $(SmearingClass_cxx_dependencies)

$(bin)MuonMomentumCorrections_dependencies.make : ../Root/SmearingClass.cxx

$(bin)$(binobj)SmearingClass.o : $(SmearingClass_cxx_dependencies)
endif
	$(cpp_echo) ../Root/SmearingClass.cxx
	$(cpp_silent) $(cppcomp) -o $@ $(use_pp_cppflags) $(MuonMomentumCorrections_pp_cppflags) $(lib_MuonMomentumCorrections_pp_cppflags) $(SmearingClass_pp_cppflags) $(use_cppflags) $(MuonMomentumCorrections_cppflags) $(lib_MuonMomentumCorrections_cppflags) $(SmearingClass_cppflags) $(SmearingClass_cxx_cppflags) -I../Root ../Root/SmearingClass.cxx

#-- end of cpp_library ------------------
#-- start of cleanup_header --------------

clean :: MuonMomentumCorrectionsclean ;
#	@cd .

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(MuonMomentumCorrections.make) $@: No rule for such target" >&2
else
.DEFAULT::
	$(error PEDANTIC: $@: No rule for such target)
endif

MuonMomentumCorrectionsclean ::
#-- end of cleanup_header ---------------
#-- start of cleanup_library -------------
	$(cleanup_echo) library MuonMomentumCorrections
	-$(cleanup_silent) cd $(bin); /bin/rm -f $(library_prefix)MuonMomentumCorrections$(library_suffix).a $(library_prefix)MuonMomentumCorrections$(library_suffix).s? MuonMomentumCorrections.stamp MuonMomentumCorrections.shstamp
#-- end of cleanup_library ---------------
