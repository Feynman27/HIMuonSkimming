
#-- start of constituents_header ------

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile = $(bin)$(MuonMomentumCorrections_tag).make

#-include $(cmt_local_tagfile)
include $(cmt_local_tagfile)

#cmt_local_setup = $(bin)setup$$$$.make
#cmt_local_setup = $(bin)$(package)setup$$$$.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make
cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)$(package)setup.make

cmt_build_library_linksstamp = $(bin)cmt_build_library_links.stamp
#--------------------------------------------------------

#cmt_lock_setup = /tmp/lock$(cmt_lock_pid).make
#cmt_temp_tag = /tmp/tag$(cmt_lock_pid).make

#first :: $(cmt_local_tagfile)
#	@echo $(cmt_local_tagfile) ok
#ifndef QUICK
#first :: $(cmt_final_setup) ;
#else
#first :: ;
#endif

##	@bin=`$(cmtexe) show macro_value bin`

#$(cmt_local_tagfile) : $(cmt_lock_setup)
#	@echo "#CMT> Error: $@: No such file" >&2; exit 1
#$(cmt_local_tagfile) :
#	@echo "#CMT> Warning: $@: No such file" >&2; exit
#	@echo "#CMT> Info: $@: No need to rebuild file" >&2; exit

#$(cmt_final_setup) : $(cmt_local_tagfile) 
#	$(echo) "(constituents.make) Rebuilding $@"
#	@if test ! -d $(@D); then $(mkdir) -p $(@D); fi; \
#	  if test -f $(cmt_local_setup); then /bin/rm -f $(cmt_local_setup); fi; \
#	  trap '/bin/rm -f $(cmt_local_setup)' 0 1 2 15; \
#	  $(cmtexe) -tag=$(tags) show setup >>$(cmt_local_setup); \
#	  if test ! -f $@; then \
#	    mv $(cmt_local_setup) $@; \
#	  else \
#	    if /usr/bin/diff $(cmt_local_setup) $@ >/dev/null ; then \
#	      : ; \
#	    else \
#	      mv $(cmt_local_setup) $@; \
#	    fi; \
#	  fi

#	@/bin/echo $@ ok   

#config :: checkuses
#	@exit 0
#checkuses : ;

env.make ::
	printenv >env.make.tmp; $(cmtexe) check files env.make.tmp env.make

ifndef QUICK
all :: build_library_links ;
else
all :: $(cmt_build_library_linksstamp) ;
endif

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

dirs :: requirements
	@if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi
#	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
#	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

#requirements :
#	@if test ! -r requirements ; then echo "No requirements file" ; fi

build_library_links : dirs
	$(echo) "(constituents.make) Rebuilding library links"; \
	 $(build_library_links)
#	if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi; \
#	$(build_library_links)

$(cmt_build_library_linksstamp) : $(cmt_final_setup) $(cmt_local_tagfile) $(bin)library_links.in
	$(echo) "(constituents.make) Rebuilding library links"; \
	 $(build_library_links) -f=$(bin)library_links.in -without_cmt
	$(silent) \touch $@

#makefiles : ;

ifndef PEDANTIC
.DEFAULT ::
#.DEFAULT :
	$(echo) "(constituents.make) $@: No rule for such target" >&2
endif

${CMTROOT}/src/Makefile.core : ;
ifdef use_requirements
$(use_requirements) : ;
endif

#-- end of constituents_header ------
#-- start of group ------

all_groups :: all

all :: $(all_dependencies)  $(all_pre_constituents) $(all_constituents)  $(all_post_constituents)
	$(echo) "all ok."

#	@/bin/echo " all ok."

clean :: allclean

allclean ::  $(all_constituentsclean)
	$(echo) $(all_constituentsclean)
	$(echo) "allclean ok."

#	@echo $(all_constituentsclean)
#	@/bin/echo " allclean ok."

allclean :: makefilesclean

#-- end of group ------
#-- start of group ------

all_groups :: cmt_actions

cmt_actions :: $(cmt_actions_dependencies)  $(cmt_actions_pre_constituents) $(cmt_actions_constituents)  $(cmt_actions_post_constituents)
	$(echo) "cmt_actions ok."

#	@/bin/echo " cmt_actions ok."

clean :: allclean

cmt_actionsclean ::  $(cmt_actions_constituentsclean)
	$(echo) $(cmt_actions_constituentsclean)
	$(echo) "cmt_actionsclean ok."

#	@echo $(cmt_actions_constituentsclean)
#	@/bin/echo " cmt_actionsclean ok."

cmt_actionsclean :: makefilesclean

#-- end of group ------
#-- start of group ------

all_groups :: rulechecker

rulechecker :: $(rulechecker_dependencies)  $(rulechecker_pre_constituents) $(rulechecker_constituents)  $(rulechecker_post_constituents)
	$(echo) "rulechecker ok."

#	@/bin/echo " rulechecker ok."

clean :: allclean

rulecheckerclean ::  $(rulechecker_constituentsclean)
	$(echo) $(rulechecker_constituentsclean)
	$(echo) "rulecheckerclean ok."

#	@echo $(rulechecker_constituentsclean)
#	@/bin/echo " rulecheckerclean ok."

rulecheckerclean :: makefilesclean

#-- end of group ------
#-- start of constituent ------

cmt_MuonMomentumCorrections_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrections_has_target_tag

#cmt_local_tagfile_MuonMomentumCorrections = $(MuonMomentumCorrections_tag)_MuonMomentumCorrections.make
cmt_local_tagfile_MuonMomentumCorrections = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrections.make
cmt_local_setup_MuonMomentumCorrections = $(bin)setup_MuonMomentumCorrections$$$$.make
cmt_final_setup_MuonMomentumCorrections = $(bin)setup_MuonMomentumCorrections.make
#cmt_final_setup_MuonMomentumCorrections = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrections_makefile = $(bin)MuonMomentumCorrections.make

MuonMomentumCorrections_extratags = -tag_add=target_MuonMomentumCorrections

#$(cmt_local_tagfile_MuonMomentumCorrections) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_MuonMomentumCorrections) ::
else
$(cmt_local_tagfile_MuonMomentumCorrections) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_MuonMomentumCorrections); then /bin/rm -f $(cmt_local_tagfile_MuonMomentumCorrections); fi ; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_extratags) build tag_makefile >>$(cmt_local_tagfile_MuonMomentumCorrections)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_MuonMomentumCorrections)"; \
	  test ! -f $(cmt_local_setup_MuonMomentumCorrections) || \rm -f $(cmt_local_setup_MuonMomentumCorrections); \
	  trap '\rm -f $(cmt_local_setup_MuonMomentumCorrections)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_extratags) show setup >$(cmt_local_setup_MuonMomentumCorrections) && \
	  if [ -f $(cmt_final_setup_MuonMomentumCorrections) ] && \
	    \cmp -s $(cmt_final_setup_MuonMomentumCorrections) $(cmt_local_setup_MuonMomentumCorrections); then \
	    \rm $(cmt_local_setup_MuonMomentumCorrections); else \
	    \mv -f $(cmt_local_setup_MuonMomentumCorrections) $(cmt_final_setup_MuonMomentumCorrections); fi

else

#cmt_local_tagfile_MuonMomentumCorrections = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrections = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_MuonMomentumCorrections = $(bin)setup.make
#cmt_final_setup_MuonMomentumCorrections = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrections_makefile = $(bin)MuonMomentumCorrections.make

endif

not_MuonMomentumCorrections_dependencies = { n=0; for p in $?; do m=0; for d in $(MuonMomentumCorrections_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
MuonMomentumCorrectionsdirs :
	@if test ! -d $(bin)MuonMomentumCorrections; then $(mkdir) -p $(bin)MuonMomentumCorrections; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrections
else
MuonMomentumCorrectionsdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# MuonMomentumCorrectionsdirs ::
#	@if test ! -d $(bin)MuonMomentumCorrections; then $(mkdir) -p $(bin)MuonMomentumCorrections; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrections
#
#$(cmt_local_MuonMomentumCorrections_makefile) :: $(MuonMomentumCorrections_dependencies) $(cmt_local_tagfile_MuonMomentumCorrections) build_library_links dirs MuonMomentumCorrectionsdirs
#else
#$(cmt_local_MuonMomentumCorrections_makefile) :: $(MuonMomentumCorrections_dependencies) $(cmt_local_tagfile_MuonMomentumCorrections) build_library_links dirs
#endif
#else
#$(cmt_local_MuonMomentumCorrections_makefile) :: $(cmt_local_tagfile_MuonMomentumCorrections)
#endif

ifdef cmt_MuonMomentumCorrections_has_target_tag

ifndef QUICK
$(cmt_local_MuonMomentumCorrections_makefile) : $(MuonMomentumCorrections_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrections.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrections
else
$(cmt_local_MuonMomentumCorrections_makefile) : $(MuonMomentumCorrections_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrections) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrections) ] || \
	  $(not_MuonMomentumCorrections_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrections.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrections; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_MuonMomentumCorrections_makefile) : $(MuonMomentumCorrections_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrections.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrections.in -tag=$(tags) $(MuonMomentumCorrections_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrections
else
$(cmt_local_MuonMomentumCorrections_makefile) : $(MuonMomentumCorrections_dependencies) $(cmt_build_library_linksstamp) $(bin)MuonMomentumCorrections.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrections) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrections) ] || \
	  $(not_MuonMomentumCorrections_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrections.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrections.in -tag=$(tags) $(MuonMomentumCorrections_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrections; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_extratags) build constituent_makefile -out=$(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrections

MuonMomentumCorrections :: $(MuonMomentumCorrections_dependencies) $(cmt_local_MuonMomentumCorrections_makefile) dirs MuonMomentumCorrectionsdirs
	$(echo) "(constituents.make) Starting MuonMomentumCorrections"
	@if test -f $(cmt_local_MuonMomentumCorrections_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrections; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrections
	$(echo) "(constituents.make) MuonMomentumCorrections done"

clean :: MuonMomentumCorrectionsclean

MuonMomentumCorrectionsclean :: $(MuonMomentumCorrectionsclean_dependencies) ##$(cmt_local_MuonMomentumCorrections_makefile)
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsclean"
	@-if test -f $(cmt_local_MuonMomentumCorrections_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrectionsclean; \
	fi
	$(echo) "(constituents.make) MuonMomentumCorrectionsclean done"
#	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrections_makefile) MuonMomentumCorrectionsclean

##	  /bin/rm -f $(cmt_local_MuonMomentumCorrections_makefile) $(bin)MuonMomentumCorrections_dependencies.make

install :: MuonMomentumCorrectionsinstall

MuonMomentumCorrectionsinstall :: $(MuonMomentumCorrections_dependencies) $(cmt_local_MuonMomentumCorrections_makefile)
	$(echo) "(constituents.make) Starting install MuonMomentumCorrections"
	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrections_makefile) install
	$(echo) "(constituents.make) install MuonMomentumCorrections done"

uninstall : MuonMomentumCorrectionsuninstall

$(foreach d,$(MuonMomentumCorrections_dependencies),$(eval $(d)uninstall_dependencies += MuonMomentumCorrectionsuninstall))

MuonMomentumCorrectionsuninstall : $(MuonMomentumCorrectionsuninstall_dependencies) ##$(cmt_local_MuonMomentumCorrections_makefile)
	$(echo) "(constituents.make) Starting uninstall MuonMomentumCorrections"
	@if test -f $(cmt_local_MuonMomentumCorrections_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrections_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrections_makefile) uninstall
	$(echo) "(constituents.make) uninstall MuonMomentumCorrections done"

remove_library_links :: MuonMomentumCorrectionsuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ MuonMomentumCorrections"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ MuonMomentumCorrections done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_MuonMomentumCorrections_optdebug_library_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrections_optdebug_library_has_target_tag

#cmt_local_tagfile_MuonMomentumCorrections_optdebug_library = $(MuonMomentumCorrections_tag)_MuonMomentumCorrections_optdebug_library.make
cmt_local_tagfile_MuonMomentumCorrections_optdebug_library = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrections_optdebug_library.make
cmt_local_setup_MuonMomentumCorrections_optdebug_library = $(bin)setup_MuonMomentumCorrections_optdebug_library$$$$.make
cmt_final_setup_MuonMomentumCorrections_optdebug_library = $(bin)setup_MuonMomentumCorrections_optdebug_library.make
#cmt_final_setup_MuonMomentumCorrections_optdebug_library = $(bin)MuonMomentumCorrections_MuonMomentumCorrections_optdebug_librarysetup.make
cmt_local_MuonMomentumCorrections_optdebug_library_makefile = $(bin)MuonMomentumCorrections_optdebug_library.make

MuonMomentumCorrections_optdebug_library_extratags = -tag_add=target_MuonMomentumCorrections_optdebug_library

#$(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library) ::
else
$(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library); then /bin/rm -f $(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library); fi ; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_optdebug_library_extratags) build tag_makefile >>$(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_MuonMomentumCorrections_optdebug_library)"; \
	  test ! -f $(cmt_local_setup_MuonMomentumCorrections_optdebug_library) || \rm -f $(cmt_local_setup_MuonMomentumCorrections_optdebug_library); \
	  trap '\rm -f $(cmt_local_setup_MuonMomentumCorrections_optdebug_library)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_optdebug_library_extratags) show setup >$(cmt_local_setup_MuonMomentumCorrections_optdebug_library) && \
	  if [ -f $(cmt_final_setup_MuonMomentumCorrections_optdebug_library) ] && \
	    \cmp -s $(cmt_final_setup_MuonMomentumCorrections_optdebug_library) $(cmt_local_setup_MuonMomentumCorrections_optdebug_library); then \
	    \rm $(cmt_local_setup_MuonMomentumCorrections_optdebug_library); else \
	    \mv -f $(cmt_local_setup_MuonMomentumCorrections_optdebug_library) $(cmt_final_setup_MuonMomentumCorrections_optdebug_library); fi

else

#cmt_local_tagfile_MuonMomentumCorrections_optdebug_library = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrections_optdebug_library = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_MuonMomentumCorrections_optdebug_library = $(bin)setup.make
#cmt_final_setup_MuonMomentumCorrections_optdebug_library = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrections_optdebug_library_makefile = $(bin)MuonMomentumCorrections_optdebug_library.make

endif

not_MuonMomentumCorrections_optdebug_library_dependencies = { n=0; for p in $?; do m=0; for d in $(MuonMomentumCorrections_optdebug_library_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
MuonMomentumCorrections_optdebug_librarydirs :
	@if test ! -d $(bin)MuonMomentumCorrections_optdebug_library; then $(mkdir) -p $(bin)MuonMomentumCorrections_optdebug_library; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrections_optdebug_library
else
MuonMomentumCorrections_optdebug_librarydirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# MuonMomentumCorrections_optdebug_librarydirs ::
#	@if test ! -d $(bin)MuonMomentumCorrections_optdebug_library; then $(mkdir) -p $(bin)MuonMomentumCorrections_optdebug_library; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrections_optdebug_library
#
#$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) :: $(MuonMomentumCorrections_optdebug_library_dependencies) $(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library) build_library_links dirs MuonMomentumCorrections_optdebug_librarydirs
#else
#$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) :: $(MuonMomentumCorrections_optdebug_library_dependencies) $(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library) build_library_links dirs
#endif
#else
#$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) :: $(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library)
#endif

ifdef cmt_MuonMomentumCorrections_optdebug_library_has_target_tag

ifndef QUICK
$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) : $(MuonMomentumCorrections_optdebug_library_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrections_optdebug_library.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_optdebug_library_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_library
else
$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) : $(MuonMomentumCorrections_optdebug_library_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrections_optdebug_library) ] || \
	  $(not_MuonMomentumCorrections_optdebug_library_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrections_optdebug_library.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_optdebug_library_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_library; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) : $(MuonMomentumCorrections_optdebug_library_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrections_optdebug_library.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrections_optdebug_library.in -tag=$(tags) $(MuonMomentumCorrections_optdebug_library_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_library
else
$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) : $(MuonMomentumCorrections_optdebug_library_dependencies) $(cmt_build_library_linksstamp) $(bin)MuonMomentumCorrections_optdebug_library.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrections_optdebug_library) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrections_optdebug_library) ] || \
	  $(not_MuonMomentumCorrections_optdebug_library_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrections_optdebug_library.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrections_optdebug_library.in -tag=$(tags) $(MuonMomentumCorrections_optdebug_library_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_library; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrections_optdebug_library_extratags) build constituent_makefile -out=$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_library

MuonMomentumCorrections_optdebug_library :: $(MuonMomentumCorrections_optdebug_library_dependencies) $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) dirs MuonMomentumCorrections_optdebug_librarydirs
	$(echo) "(constituents.make) Starting MuonMomentumCorrections_optdebug_library"
	@if test -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_library; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_library
	$(echo) "(constituents.make) MuonMomentumCorrections_optdebug_library done"

clean :: MuonMomentumCorrections_optdebug_libraryclean

MuonMomentumCorrections_optdebug_libraryclean :: $(MuonMomentumCorrections_optdebug_libraryclean_dependencies) ##$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile)
	$(echo) "(constituents.make) Starting MuonMomentumCorrections_optdebug_libraryclean"
	@-if test -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_libraryclean; \
	fi
	$(echo) "(constituents.make) MuonMomentumCorrections_optdebug_libraryclean done"
#	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) MuonMomentumCorrections_optdebug_libraryclean

##	  /bin/rm -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) $(bin)MuonMomentumCorrections_optdebug_library_dependencies.make

install :: MuonMomentumCorrections_optdebug_libraryinstall

MuonMomentumCorrections_optdebug_libraryinstall :: $(MuonMomentumCorrections_optdebug_library_dependencies) $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile)
	$(echo) "(constituents.make) Starting install MuonMomentumCorrections_optdebug_library"
	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) install
	$(echo) "(constituents.make) install MuonMomentumCorrections_optdebug_library done"

uninstall : MuonMomentumCorrections_optdebug_libraryuninstall

$(foreach d,$(MuonMomentumCorrections_optdebug_library_dependencies),$(eval $(d)uninstall_dependencies += MuonMomentumCorrections_optdebug_libraryuninstall))

MuonMomentumCorrections_optdebug_libraryuninstall : $(MuonMomentumCorrections_optdebug_libraryuninstall_dependencies) ##$(cmt_local_MuonMomentumCorrections_optdebug_library_makefile)
	$(echo) "(constituents.make) Starting uninstall MuonMomentumCorrections_optdebug_library"
	@if test -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrections_optdebug_library_makefile) uninstall
	$(echo) "(constituents.make) uninstall MuonMomentumCorrections_optdebug_library done"

remove_library_links :: MuonMomentumCorrections_optdebug_libraryuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ MuonMomentumCorrections_optdebug_library"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ MuonMomentumCorrections_optdebug_library done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_install_runtime_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_install_runtime_has_target_tag

#cmt_local_tagfile_install_runtime = $(MuonMomentumCorrections_tag)_install_runtime.make
cmt_local_tagfile_install_runtime = $(bin)$(MuonMomentumCorrections_tag)_install_runtime.make
cmt_local_setup_install_runtime = $(bin)setup_install_runtime$$$$.make
cmt_final_setup_install_runtime = $(bin)setup_install_runtime.make
#cmt_final_setup_install_runtime = $(bin)MuonMomentumCorrections_install_runtimesetup.make
cmt_local_install_runtime_makefile = $(bin)install_runtime.make

install_runtime_extratags = -tag_add=target_install_runtime

#$(cmt_local_tagfile_install_runtime) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_install_runtime) ::
else
$(cmt_local_tagfile_install_runtime) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_install_runtime); then /bin/rm -f $(cmt_local_tagfile_install_runtime); fi ; \
	  $(cmtexe) -tag=$(tags) $(install_runtime_extratags) build tag_makefile >>$(cmt_local_tagfile_install_runtime)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_install_runtime)"; \
	  test ! -f $(cmt_local_setup_install_runtime) || \rm -f $(cmt_local_setup_install_runtime); \
	  trap '\rm -f $(cmt_local_setup_install_runtime)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(install_runtime_extratags) show setup >$(cmt_local_setup_install_runtime) && \
	  if [ -f $(cmt_final_setup_install_runtime) ] && \
	    \cmp -s $(cmt_final_setup_install_runtime) $(cmt_local_setup_install_runtime); then \
	    \rm $(cmt_local_setup_install_runtime); else \
	    \mv -f $(cmt_local_setup_install_runtime) $(cmt_final_setup_install_runtime); fi

else

#cmt_local_tagfile_install_runtime = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_install_runtime = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_install_runtime = $(bin)setup.make
#cmt_final_setup_install_runtime = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_install_runtime_makefile = $(bin)install_runtime.make

endif

not_install_runtime_dependencies = { n=0; for p in $?; do m=0; for d in $(install_runtime_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
install_runtimedirs :
	@if test ! -d $(bin)install_runtime; then $(mkdir) -p $(bin)install_runtime; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)install_runtime
else
install_runtimedirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# install_runtimedirs ::
#	@if test ! -d $(bin)install_runtime; then $(mkdir) -p $(bin)install_runtime; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)install_runtime
#
#$(cmt_local_install_runtime_makefile) :: $(install_runtime_dependencies) $(cmt_local_tagfile_install_runtime) build_library_links dirs install_runtimedirs
#else
#$(cmt_local_install_runtime_makefile) :: $(install_runtime_dependencies) $(cmt_local_tagfile_install_runtime) build_library_links dirs
#endif
#else
#$(cmt_local_install_runtime_makefile) :: $(cmt_local_tagfile_install_runtime)
#endif

ifdef cmt_install_runtime_has_target_tag

ifndef QUICK
$(cmt_local_install_runtime_makefile) : $(install_runtime_dependencies) build_library_links
	$(echo) "(constituents.make) Building install_runtime.make"; \
	  $(cmtexe) -tag=$(tags) $(install_runtime_extratags) build constituent_config -out=$(cmt_local_install_runtime_makefile) install_runtime
else
$(cmt_local_install_runtime_makefile) : $(install_runtime_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_install_runtime) ] || \
	  [ ! -f $(cmt_final_setup_install_runtime) ] || \
	  $(not_install_runtime_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building install_runtime.make"; \
	  $(cmtexe) -tag=$(tags) $(install_runtime_extratags) build constituent_config -out=$(cmt_local_install_runtime_makefile) install_runtime; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_install_runtime_makefile) : $(install_runtime_dependencies) build_library_links
	$(echo) "(constituents.make) Building install_runtime.make"; \
	  $(cmtexe) -f=$(bin)install_runtime.in -tag=$(tags) $(install_runtime_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_install_runtime_makefile) install_runtime
else
$(cmt_local_install_runtime_makefile) : $(install_runtime_dependencies) $(cmt_build_library_linksstamp) $(bin)install_runtime.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_install_runtime) ] || \
	  [ ! -f $(cmt_final_setup_install_runtime) ] || \
	  $(not_install_runtime_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building install_runtime.make"; \
	  $(cmtexe) -f=$(bin)install_runtime.in -tag=$(tags) $(install_runtime_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_install_runtime_makefile) install_runtime; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(install_runtime_extratags) build constituent_makefile -out=$(cmt_local_install_runtime_makefile) install_runtime

install_runtime :: $(install_runtime_dependencies) $(cmt_local_install_runtime_makefile) dirs install_runtimedirs
	$(echo) "(constituents.make) Starting install_runtime"
	@if test -f $(cmt_local_install_runtime_makefile); then \
	  $(MAKE) -f $(cmt_local_install_runtime_makefile) install_runtime; \
	  fi
#	@$(MAKE) -f $(cmt_local_install_runtime_makefile) install_runtime
	$(echo) "(constituents.make) install_runtime done"

clean :: install_runtimeclean

install_runtimeclean :: $(install_runtimeclean_dependencies) ##$(cmt_local_install_runtime_makefile)
	$(echo) "(constituents.make) Starting install_runtimeclean"
	@-if test -f $(cmt_local_install_runtime_makefile); then \
	  $(MAKE) -f $(cmt_local_install_runtime_makefile) install_runtimeclean; \
	fi
	$(echo) "(constituents.make) install_runtimeclean done"
#	@-$(MAKE) -f $(cmt_local_install_runtime_makefile) install_runtimeclean

##	  /bin/rm -f $(cmt_local_install_runtime_makefile) $(bin)install_runtime_dependencies.make

install :: install_runtimeinstall

install_runtimeinstall :: $(install_runtime_dependencies) $(cmt_local_install_runtime_makefile)
	$(echo) "(constituents.make) Starting install install_runtime"
	@-$(MAKE) -f $(cmt_local_install_runtime_makefile) install
	$(echo) "(constituents.make) install install_runtime done"

uninstall : install_runtimeuninstall

$(foreach d,$(install_runtime_dependencies),$(eval $(d)uninstall_dependencies += install_runtimeuninstall))

install_runtimeuninstall : $(install_runtimeuninstall_dependencies) ##$(cmt_local_install_runtime_makefile)
	$(echo) "(constituents.make) Starting uninstall install_runtime"
	@if test -f $(cmt_local_install_runtime_makefile); then \
	  $(MAKE) -f $(cmt_local_install_runtime_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_install_runtime_makefile) uninstall
	$(echo) "(constituents.make) uninstall install_runtime done"

remove_library_links :: install_runtimeuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ install_runtime"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ install_runtime done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_MuonMomentumCorrectionsGen_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsGen_has_target_tag

#cmt_local_tagfile_MuonMomentumCorrectionsGen = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsGen.make
cmt_local_tagfile_MuonMomentumCorrectionsGen = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsGen.make
cmt_local_setup_MuonMomentumCorrectionsGen = $(bin)setup_MuonMomentumCorrectionsGen$$$$.make
cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)setup_MuonMomentumCorrectionsGen.make
#cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsGensetup.make
cmt_local_MuonMomentumCorrectionsGen_makefile = $(bin)MuonMomentumCorrectionsGen.make

MuonMomentumCorrectionsGen_extratags = -tag_add=target_MuonMomentumCorrectionsGen

#$(cmt_local_tagfile_MuonMomentumCorrectionsGen) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_MuonMomentumCorrectionsGen) ::
else
$(cmt_local_tagfile_MuonMomentumCorrectionsGen) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_MuonMomentumCorrectionsGen); then /bin/rm -f $(cmt_local_tagfile_MuonMomentumCorrectionsGen); fi ; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsGen_extratags) build tag_makefile >>$(cmt_local_tagfile_MuonMomentumCorrectionsGen)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_MuonMomentumCorrectionsGen)"; \
	  test ! -f $(cmt_local_setup_MuonMomentumCorrectionsGen) || \rm -f $(cmt_local_setup_MuonMomentumCorrectionsGen); \
	  trap '\rm -f $(cmt_local_setup_MuonMomentumCorrectionsGen)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsGen_extratags) show setup >$(cmt_local_setup_MuonMomentumCorrectionsGen) && \
	  if [ -f $(cmt_final_setup_MuonMomentumCorrectionsGen) ] && \
	    \cmp -s $(cmt_final_setup_MuonMomentumCorrectionsGen) $(cmt_local_setup_MuonMomentumCorrectionsGen); then \
	    \rm $(cmt_local_setup_MuonMomentumCorrectionsGen); else \
	    \mv -f $(cmt_local_setup_MuonMomentumCorrectionsGen) $(cmt_final_setup_MuonMomentumCorrectionsGen); fi

else

#cmt_local_tagfile_MuonMomentumCorrectionsGen = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsGen = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)setup.make
#cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsGen_makefile = $(bin)MuonMomentumCorrectionsGen.make

endif

not_MuonMomentumCorrectionsGen_dependencies = { n=0; for p in $?; do m=0; for d in $(MuonMomentumCorrectionsGen_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
MuonMomentumCorrectionsGendirs :
	@if test ! -d $(bin)MuonMomentumCorrectionsGen; then $(mkdir) -p $(bin)MuonMomentumCorrectionsGen; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsGen
else
MuonMomentumCorrectionsGendirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# MuonMomentumCorrectionsGendirs ::
#	@if test ! -d $(bin)MuonMomentumCorrectionsGen; then $(mkdir) -p $(bin)MuonMomentumCorrectionsGen; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsGen
#
#$(cmt_local_MuonMomentumCorrectionsGen_makefile) :: $(MuonMomentumCorrectionsGen_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsGen) build_library_links dirs MuonMomentumCorrectionsGendirs
#else
#$(cmt_local_MuonMomentumCorrectionsGen_makefile) :: $(MuonMomentumCorrectionsGen_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsGen) build_library_links dirs
#endif
#else
#$(cmt_local_MuonMomentumCorrectionsGen_makefile) :: $(cmt_local_tagfile_MuonMomentumCorrectionsGen)
#endif

ifdef cmt_MuonMomentumCorrectionsGen_has_target_tag

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsGen_makefile) : $(MuonMomentumCorrectionsGen_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsGen.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsGen_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGen
else
$(cmt_local_MuonMomentumCorrectionsGen_makefile) : $(MuonMomentumCorrectionsGen_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsGen) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsGen) ] || \
	  $(not_MuonMomentumCorrectionsGen_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsGen.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsGen_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGen; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsGen_makefile) : $(MuonMomentumCorrectionsGen_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsGen.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsGen.in -tag=$(tags) $(MuonMomentumCorrectionsGen_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGen
else
$(cmt_local_MuonMomentumCorrectionsGen_makefile) : $(MuonMomentumCorrectionsGen_dependencies) $(cmt_build_library_linksstamp) $(bin)MuonMomentumCorrectionsGen.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsGen) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsGen) ] || \
	  $(not_MuonMomentumCorrectionsGen_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsGen.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsGen.in -tag=$(tags) $(MuonMomentumCorrectionsGen_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGen; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsGen_extratags) build constituent_makefile -out=$(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGen

MuonMomentumCorrectionsGen :: $(MuonMomentumCorrectionsGen_dependencies) $(cmt_local_MuonMomentumCorrectionsGen_makefile) dirs MuonMomentumCorrectionsGendirs
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsGen"
	@if test -f $(cmt_local_MuonMomentumCorrectionsGen_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGen; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGen
	$(echo) "(constituents.make) MuonMomentumCorrectionsGen done"

clean :: MuonMomentumCorrectionsGenclean

MuonMomentumCorrectionsGenclean :: $(MuonMomentumCorrectionsGenclean_dependencies) ##$(cmt_local_MuonMomentumCorrectionsGen_makefile)
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsGenclean"
	@-if test -f $(cmt_local_MuonMomentumCorrectionsGen_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGenclean; \
	fi
	$(echo) "(constituents.make) MuonMomentumCorrectionsGenclean done"
#	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) MuonMomentumCorrectionsGenclean

##	  /bin/rm -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) $(bin)MuonMomentumCorrectionsGen_dependencies.make

install :: MuonMomentumCorrectionsGeninstall

MuonMomentumCorrectionsGeninstall :: $(MuonMomentumCorrectionsGen_dependencies) $(cmt_local_MuonMomentumCorrectionsGen_makefile)
	$(echo) "(constituents.make) Starting install MuonMomentumCorrectionsGen"
	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) install
	$(echo) "(constituents.make) install MuonMomentumCorrectionsGen done"

uninstall : MuonMomentumCorrectionsGenuninstall

$(foreach d,$(MuonMomentumCorrectionsGen_dependencies),$(eval $(d)uninstall_dependencies += MuonMomentumCorrectionsGenuninstall))

MuonMomentumCorrectionsGenuninstall : $(MuonMomentumCorrectionsGenuninstall_dependencies) ##$(cmt_local_MuonMomentumCorrectionsGen_makefile)
	$(echo) "(constituents.make) Starting uninstall MuonMomentumCorrectionsGen"
	@if test -f $(cmt_local_MuonMomentumCorrectionsGen_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsGen_makefile) uninstall
	$(echo) "(constituents.make) uninstall MuonMomentumCorrectionsGen done"

remove_library_links :: MuonMomentumCorrectionsGenuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ MuonMomentumCorrectionsGen"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ MuonMomentumCorrectionsGen done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_MuonMomentumCorrectionsDict_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsDict_has_target_tag

#cmt_local_tagfile_MuonMomentumCorrectionsDict = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDict.make
cmt_local_tagfile_MuonMomentumCorrectionsDict = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDict.make
cmt_local_setup_MuonMomentumCorrectionsDict = $(bin)setup_MuonMomentumCorrectionsDict$$$$.make
cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)setup_MuonMomentumCorrectionsDict.make
#cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsDictsetup.make
cmt_local_MuonMomentumCorrectionsDict_makefile = $(bin)MuonMomentumCorrectionsDict.make

MuonMomentumCorrectionsDict_extratags = -tag_add=target_MuonMomentumCorrectionsDict

#$(cmt_local_tagfile_MuonMomentumCorrectionsDict) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_MuonMomentumCorrectionsDict) ::
else
$(cmt_local_tagfile_MuonMomentumCorrectionsDict) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict); then /bin/rm -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict); fi ; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_extratags) build tag_makefile >>$(cmt_local_tagfile_MuonMomentumCorrectionsDict)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_MuonMomentumCorrectionsDict)"; \
	  test ! -f $(cmt_local_setup_MuonMomentumCorrectionsDict) || \rm -f $(cmt_local_setup_MuonMomentumCorrectionsDict); \
	  trap '\rm -f $(cmt_local_setup_MuonMomentumCorrectionsDict)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_extratags) show setup >$(cmt_local_setup_MuonMomentumCorrectionsDict) && \
	  if [ -f $(cmt_final_setup_MuonMomentumCorrectionsDict) ] && \
	    \cmp -s $(cmt_final_setup_MuonMomentumCorrectionsDict) $(cmt_local_setup_MuonMomentumCorrectionsDict); then \
	    \rm $(cmt_local_setup_MuonMomentumCorrectionsDict); else \
	    \mv -f $(cmt_local_setup_MuonMomentumCorrectionsDict) $(cmt_final_setup_MuonMomentumCorrectionsDict); fi

else

#cmt_local_tagfile_MuonMomentumCorrectionsDict = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsDict = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)setup.make
#cmt_final_setup_MuonMomentumCorrectionsDict = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsDict_makefile = $(bin)MuonMomentumCorrectionsDict.make

endif

not_MuonMomentumCorrectionsDict_dependencies = { n=0; for p in $?; do m=0; for d in $(MuonMomentumCorrectionsDict_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
MuonMomentumCorrectionsDictdirs :
	@if test ! -d $(bin)MuonMomentumCorrectionsDict; then $(mkdir) -p $(bin)MuonMomentumCorrectionsDict; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsDict
else
MuonMomentumCorrectionsDictdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# MuonMomentumCorrectionsDictdirs ::
#	@if test ! -d $(bin)MuonMomentumCorrectionsDict; then $(mkdir) -p $(bin)MuonMomentumCorrectionsDict; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsDict
#
#$(cmt_local_MuonMomentumCorrectionsDict_makefile) :: $(MuonMomentumCorrectionsDict_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsDict) build_library_links dirs MuonMomentumCorrectionsDictdirs
#else
#$(cmt_local_MuonMomentumCorrectionsDict_makefile) :: $(MuonMomentumCorrectionsDict_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsDict) build_library_links dirs
#endif
#else
#$(cmt_local_MuonMomentumCorrectionsDict_makefile) :: $(cmt_local_tagfile_MuonMomentumCorrectionsDict)
#endif

ifdef cmt_MuonMomentumCorrectionsDict_has_target_tag

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsDict_makefile) : $(MuonMomentumCorrectionsDict_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsDict.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDict
else
$(cmt_local_MuonMomentumCorrectionsDict_makefile) : $(MuonMomentumCorrectionsDict_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsDict) ] || \
	  $(not_MuonMomentumCorrectionsDict_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsDict.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDict; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsDict_makefile) : $(MuonMomentumCorrectionsDict_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsDict.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsDict.in -tag=$(tags) $(MuonMomentumCorrectionsDict_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDict
else
$(cmt_local_MuonMomentumCorrectionsDict_makefile) : $(MuonMomentumCorrectionsDict_dependencies) $(cmt_build_library_linksstamp) $(bin)MuonMomentumCorrectionsDict.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsDict) ] || \
	  $(not_MuonMomentumCorrectionsDict_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsDict.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsDict.in -tag=$(tags) $(MuonMomentumCorrectionsDict_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDict; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_extratags) build constituent_makefile -out=$(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDict

MuonMomentumCorrectionsDict :: $(MuonMomentumCorrectionsDict_dependencies) $(cmt_local_MuonMomentumCorrectionsDict_makefile) dirs MuonMomentumCorrectionsDictdirs
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsDict"
	@if test -f $(cmt_local_MuonMomentumCorrectionsDict_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDict; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDict
	$(echo) "(constituents.make) MuonMomentumCorrectionsDict done"

clean :: MuonMomentumCorrectionsDictclean

MuonMomentumCorrectionsDictclean :: $(MuonMomentumCorrectionsDictclean_dependencies) ##$(cmt_local_MuonMomentumCorrectionsDict_makefile)
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsDictclean"
	@-if test -f $(cmt_local_MuonMomentumCorrectionsDict_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDictclean; \
	fi
	$(echo) "(constituents.make) MuonMomentumCorrectionsDictclean done"
#	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) MuonMomentumCorrectionsDictclean

##	  /bin/rm -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) $(bin)MuonMomentumCorrectionsDict_dependencies.make

install :: MuonMomentumCorrectionsDictinstall

MuonMomentumCorrectionsDictinstall :: $(MuonMomentumCorrectionsDict_dependencies) $(cmt_local_MuonMomentumCorrectionsDict_makefile)
	$(echo) "(constituents.make) Starting install MuonMomentumCorrectionsDict"
	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) install
	$(echo) "(constituents.make) install MuonMomentumCorrectionsDict done"

uninstall : MuonMomentumCorrectionsDictuninstall

$(foreach d,$(MuonMomentumCorrectionsDict_dependencies),$(eval $(d)uninstall_dependencies += MuonMomentumCorrectionsDictuninstall))

MuonMomentumCorrectionsDictuninstall : $(MuonMomentumCorrectionsDictuninstall_dependencies) ##$(cmt_local_MuonMomentumCorrectionsDict_makefile)
	$(echo) "(constituents.make) Starting uninstall MuonMomentumCorrectionsDict"
	@if test -f $(cmt_local_MuonMomentumCorrectionsDict_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_makefile) uninstall
	$(echo) "(constituents.make) uninstall MuonMomentumCorrectionsDict done"

remove_library_links :: MuonMomentumCorrectionsDictuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ MuonMomentumCorrectionsDict"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ MuonMomentumCorrectionsDict done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

#cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag)_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag)_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap$$$$.make
cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
#cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrections_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapsetup.make
cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags = -tag_add=target_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap

#$(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ::
else
$(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); then /bin/rm -f $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); fi ; \
	  $(cmtexe) -tag=$(tags) $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build tag_makefile >>$(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)"; \
	  test ! -f $(cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) || \rm -f $(cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); \
	  trap '\rm -f $(cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) show setup >$(cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) && \
	  if [ -f $(cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] && \
	    \cmp -s $(cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) $(cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); then \
	    \rm $(cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); else \
	    \mv -f $(cmt_local_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) $(cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); fi

else

#cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup.make
#cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

endif

not_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies = { n=0; for p in $?; do m=0; for d in $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs :
	@if test ! -d $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; then $(mkdir) -p $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
else
install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs ::
#	@if test ! -d $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; then $(mkdir) -p $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
#
#$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) :: $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) build_library_links dirs install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs
#else
#$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) :: $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) build_library_links dirs
#endif
#else
#$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) :: $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)
#endif

ifdef cmt_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

ifndef QUICK
$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) build_library_links
	$(echo) "(constituents.make) Building install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -tag=$(tags) $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_config -out=$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
else
$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  [ ! -f $(cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  $(not_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -tag=$(tags) $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_config -out=$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) build_library_links
	$(echo) "(constituents.make) Building install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -f=$(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in -tag=$(tags) $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
else
$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_build_library_linksstamp) $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  [ ! -f $(cmt_final_setup_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  $(not_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -f=$(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in -tag=$(tags) $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_makefile -out=$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap :: $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) dirs install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs
	$(echo) "(constituents.make) Starting install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	@if test -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; \
	  fi
#	@$(MAKE) -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
	$(echo) "(constituents.make) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"

clean :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean :: $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean_dependencies) ##$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile)
	$(echo) "(constituents.make) Starting install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean"
	@-if test -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean; \
	fi
	$(echo) "(constituents.make) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean done"
#	@-$(MAKE) -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean

##	  /bin/rm -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) $(bin)install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies.make

install :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall :: $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile)
	$(echo) "(constituents.make) Starting install install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	@-$(MAKE) -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install
	$(echo) "(constituents.make) install install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"

uninstall : install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall

$(foreach d,$(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies),$(eval $(d)uninstall_dependencies += install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall))

install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall : $(install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall_dependencies) ##$(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile)
	$(echo) "(constituents.make) Starting uninstall install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	@if test -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) uninstall
	$(echo) "(constituents.make) uninstall install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"

remove_library_links :: install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_MuonMomentumCorrectionsDict_optdebug_library_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsDict_optdebug_library_has_target_tag

#cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDict_optdebug_library.make
cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDict_optdebug_library.make
cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library = $(bin)setup_MuonMomentumCorrectionsDict_optdebug_library$$$$.make
cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library = $(bin)setup_MuonMomentumCorrectionsDict_optdebug_library.make
#cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsDict_optdebug_librarysetup.make
cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile = $(bin)MuonMomentumCorrectionsDict_optdebug_library.make

MuonMomentumCorrectionsDict_optdebug_library_extratags = -tag_add=target_MuonMomentumCorrectionsDict_optdebug_library

#$(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library) ::
else
$(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library); then /bin/rm -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library); fi ; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_optdebug_library_extratags) build tag_makefile >>$(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library)"; \
	  test ! -f $(cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library) || \rm -f $(cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library); \
	  trap '\rm -f $(cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_optdebug_library_extratags) show setup >$(cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library) && \
	  if [ -f $(cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library) ] && \
	    \cmp -s $(cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library) $(cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library); then \
	    \rm $(cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library); else \
	    \mv -f $(cmt_local_setup_MuonMomentumCorrectionsDict_optdebug_library) $(cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library); fi

else

#cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library = $(bin)setup.make
#cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile = $(bin)MuonMomentumCorrectionsDict_optdebug_library.make

endif

not_MuonMomentumCorrectionsDict_optdebug_library_dependencies = { n=0; for p in $?; do m=0; for d in $(MuonMomentumCorrectionsDict_optdebug_library_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
MuonMomentumCorrectionsDict_optdebug_librarydirs :
	@if test ! -d $(bin)MuonMomentumCorrectionsDict_optdebug_library; then $(mkdir) -p $(bin)MuonMomentumCorrectionsDict_optdebug_library; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsDict_optdebug_library
else
MuonMomentumCorrectionsDict_optdebug_librarydirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# MuonMomentumCorrectionsDict_optdebug_librarydirs ::
#	@if test ! -d $(bin)MuonMomentumCorrectionsDict_optdebug_library; then $(mkdir) -p $(bin)MuonMomentumCorrectionsDict_optdebug_library; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsDict_optdebug_library
#
#$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) :: $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library) build_library_links dirs MuonMomentumCorrectionsDict_optdebug_librarydirs
#else
#$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) :: $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library) build_library_links dirs
#endif
#else
#$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) :: $(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library)
#endif

ifdef cmt_MuonMomentumCorrectionsDict_optdebug_library_has_target_tag

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) : $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsDict_optdebug_library.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_optdebug_library_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_library
else
$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) : $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library) ] || \
	  $(not_MuonMomentumCorrectionsDict_optdebug_library_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsDict_optdebug_library.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_optdebug_library_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_library; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) : $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsDict_optdebug_library.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsDict_optdebug_library.in -tag=$(tags) $(MuonMomentumCorrectionsDict_optdebug_library_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_library
else
$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) : $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) $(cmt_build_library_linksstamp) $(bin)MuonMomentumCorrectionsDict_optdebug_library.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsDict_optdebug_library) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsDict_optdebug_library) ] || \
	  $(not_MuonMomentumCorrectionsDict_optdebug_library_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsDict_optdebug_library.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsDict_optdebug_library.in -tag=$(tags) $(MuonMomentumCorrectionsDict_optdebug_library_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_library; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDict_optdebug_library_extratags) build constituent_makefile -out=$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_library

MuonMomentumCorrectionsDict_optdebug_library :: $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) dirs MuonMomentumCorrectionsDict_optdebug_librarydirs
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsDict_optdebug_library"
	@if test -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_library; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_library
	$(echo) "(constituents.make) MuonMomentumCorrectionsDict_optdebug_library done"

clean :: MuonMomentumCorrectionsDict_optdebug_libraryclean

MuonMomentumCorrectionsDict_optdebug_libraryclean :: $(MuonMomentumCorrectionsDict_optdebug_libraryclean_dependencies) ##$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile)
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsDict_optdebug_libraryclean"
	@-if test -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_libraryclean; \
	fi
	$(echo) "(constituents.make) MuonMomentumCorrectionsDict_optdebug_libraryclean done"
#	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) MuonMomentumCorrectionsDict_optdebug_libraryclean

##	  /bin/rm -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) $(bin)MuonMomentumCorrectionsDict_optdebug_library_dependencies.make

install :: MuonMomentumCorrectionsDict_optdebug_libraryinstall

MuonMomentumCorrectionsDict_optdebug_libraryinstall :: $(MuonMomentumCorrectionsDict_optdebug_library_dependencies) $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile)
	$(echo) "(constituents.make) Starting install MuonMomentumCorrectionsDict_optdebug_library"
	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) install
	$(echo) "(constituents.make) install MuonMomentumCorrectionsDict_optdebug_library done"

uninstall : MuonMomentumCorrectionsDict_optdebug_libraryuninstall

$(foreach d,$(MuonMomentumCorrectionsDict_optdebug_library_dependencies),$(eval $(d)uninstall_dependencies += MuonMomentumCorrectionsDict_optdebug_libraryuninstall))

MuonMomentumCorrectionsDict_optdebug_libraryuninstall : $(MuonMomentumCorrectionsDict_optdebug_libraryuninstall_dependencies) ##$(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile)
	$(echo) "(constituents.make) Starting uninstall MuonMomentumCorrectionsDict_optdebug_library"
	@if test -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDict_optdebug_library_makefile) uninstall
	$(echo) "(constituents.make) uninstall MuonMomentumCorrectionsDict_optdebug_library done"

remove_library_links :: MuonMomentumCorrectionsDict_optdebug_libraryuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ MuonMomentumCorrectionsDict_optdebug_library"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ MuonMomentumCorrectionsDict_optdebug_library done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_MuonMomentumCorrectionsDictMerge_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsDictMerge_has_target_tag

#cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDictMerge.make
cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsDictMerge.make
cmt_local_setup_MuonMomentumCorrectionsDictMerge = $(bin)setup_MuonMomentumCorrectionsDictMerge$$$$.make
cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)setup_MuonMomentumCorrectionsDictMerge.make
#cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsDictMergesetup.make
cmt_local_MuonMomentumCorrectionsDictMerge_makefile = $(bin)MuonMomentumCorrectionsDictMerge.make

MuonMomentumCorrectionsDictMerge_extratags = -tag_add=target_MuonMomentumCorrectionsDictMerge

#$(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge) ::
else
$(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge); then /bin/rm -f $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge); fi ; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDictMerge_extratags) build tag_makefile >>$(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_MuonMomentumCorrectionsDictMerge)"; \
	  test ! -f $(cmt_local_setup_MuonMomentumCorrectionsDictMerge) || \rm -f $(cmt_local_setup_MuonMomentumCorrectionsDictMerge); \
	  trap '\rm -f $(cmt_local_setup_MuonMomentumCorrectionsDictMerge)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDictMerge_extratags) show setup >$(cmt_local_setup_MuonMomentumCorrectionsDictMerge) && \
	  if [ -f $(cmt_final_setup_MuonMomentumCorrectionsDictMerge) ] && \
	    \cmp -s $(cmt_final_setup_MuonMomentumCorrectionsDictMerge) $(cmt_local_setup_MuonMomentumCorrectionsDictMerge); then \
	    \rm $(cmt_local_setup_MuonMomentumCorrectionsDictMerge); else \
	    \mv -f $(cmt_local_setup_MuonMomentumCorrectionsDictMerge) $(cmt_final_setup_MuonMomentumCorrectionsDictMerge); fi

else

#cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsDictMerge = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)setup.make
#cmt_final_setup_MuonMomentumCorrectionsDictMerge = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsDictMerge_makefile = $(bin)MuonMomentumCorrectionsDictMerge.make

endif

not_MuonMomentumCorrectionsDictMerge_dependencies = { n=0; for p in $?; do m=0; for d in $(MuonMomentumCorrectionsDictMerge_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
MuonMomentumCorrectionsDictMergedirs :
	@if test ! -d $(bin)MuonMomentumCorrectionsDictMerge; then $(mkdir) -p $(bin)MuonMomentumCorrectionsDictMerge; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsDictMerge
else
MuonMomentumCorrectionsDictMergedirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# MuonMomentumCorrectionsDictMergedirs ::
#	@if test ! -d $(bin)MuonMomentumCorrectionsDictMerge; then $(mkdir) -p $(bin)MuonMomentumCorrectionsDictMerge; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsDictMerge
#
#$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) :: $(MuonMomentumCorrectionsDictMerge_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge) build_library_links dirs MuonMomentumCorrectionsDictMergedirs
#else
#$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) :: $(MuonMomentumCorrectionsDictMerge_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge) build_library_links dirs
#endif
#else
#$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) :: $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge)
#endif

ifdef cmt_MuonMomentumCorrectionsDictMerge_has_target_tag

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) : $(MuonMomentumCorrectionsDictMerge_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsDictMerge.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDictMerge_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMerge
else
$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) : $(MuonMomentumCorrectionsDictMerge_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsDictMerge) ] || \
	  $(not_MuonMomentumCorrectionsDictMerge_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsDictMerge.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDictMerge_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMerge; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) : $(MuonMomentumCorrectionsDictMerge_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsDictMerge.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsDictMerge.in -tag=$(tags) $(MuonMomentumCorrectionsDictMerge_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMerge
else
$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) : $(MuonMomentumCorrectionsDictMerge_dependencies) $(cmt_build_library_linksstamp) $(bin)MuonMomentumCorrectionsDictMerge.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsDictMerge) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsDictMerge) ] || \
	  $(not_MuonMomentumCorrectionsDictMerge_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsDictMerge.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsDictMerge.in -tag=$(tags) $(MuonMomentumCorrectionsDictMerge_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMerge; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsDictMerge_extratags) build constituent_makefile -out=$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMerge

MuonMomentumCorrectionsDictMerge :: $(MuonMomentumCorrectionsDictMerge_dependencies) $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) dirs MuonMomentumCorrectionsDictMergedirs
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsDictMerge"
	@if test -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMerge; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMerge
	$(echo) "(constituents.make) MuonMomentumCorrectionsDictMerge done"

clean :: MuonMomentumCorrectionsDictMergeclean

MuonMomentumCorrectionsDictMergeclean :: $(MuonMomentumCorrectionsDictMergeclean_dependencies) ##$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile)
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsDictMergeclean"
	@-if test -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMergeclean; \
	fi
	$(echo) "(constituents.make) MuonMomentumCorrectionsDictMergeclean done"
#	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) MuonMomentumCorrectionsDictMergeclean

##	  /bin/rm -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) $(bin)MuonMomentumCorrectionsDictMerge_dependencies.make

install :: MuonMomentumCorrectionsDictMergeinstall

MuonMomentumCorrectionsDictMergeinstall :: $(MuonMomentumCorrectionsDictMerge_dependencies) $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile)
	$(echo) "(constituents.make) Starting install MuonMomentumCorrectionsDictMerge"
	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) install
	$(echo) "(constituents.make) install MuonMomentumCorrectionsDictMerge done"

uninstall : MuonMomentumCorrectionsDictMergeuninstall

$(foreach d,$(MuonMomentumCorrectionsDictMerge_dependencies),$(eval $(d)uninstall_dependencies += MuonMomentumCorrectionsDictMergeuninstall))

MuonMomentumCorrectionsDictMergeuninstall : $(MuonMomentumCorrectionsDictMergeuninstall_dependencies) ##$(cmt_local_MuonMomentumCorrectionsDictMerge_makefile)
	$(echo) "(constituents.make) Starting uninstall MuonMomentumCorrectionsDictMerge"
	@if test -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsDictMerge_makefile) uninstall
	$(echo) "(constituents.make) uninstall MuonMomentumCorrectionsDictMerge done"

remove_library_links :: MuonMomentumCorrectionsDictMergeuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ MuonMomentumCorrectionsDictMerge"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ MuonMomentumCorrectionsDictMerge done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_MuonMomentumCorrectionsrchk_has_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsrchk_has_target_tag

#cmt_local_tagfile_MuonMomentumCorrectionsrchk = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsrchk.make
cmt_local_tagfile_MuonMomentumCorrectionsrchk = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsrchk.make
cmt_local_setup_MuonMomentumCorrectionsrchk = $(bin)setup_MuonMomentumCorrectionsrchk$$$$.make
cmt_final_setup_MuonMomentumCorrectionsrchk = $(bin)setup_MuonMomentumCorrectionsrchk.make
#cmt_final_setup_MuonMomentumCorrectionsrchk = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsrchksetup.make
cmt_local_MuonMomentumCorrectionsrchk_makefile = $(bin)MuonMomentumCorrectionsrchk.make

MuonMomentumCorrectionsrchk_extratags = -tag_add=target_MuonMomentumCorrectionsrchk

#$(cmt_local_tagfile_MuonMomentumCorrectionsrchk) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_MuonMomentumCorrectionsrchk) ::
else
$(cmt_local_tagfile_MuonMomentumCorrectionsrchk) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_MuonMomentumCorrectionsrchk); then /bin/rm -f $(cmt_local_tagfile_MuonMomentumCorrectionsrchk); fi ; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsrchk_extratags) build tag_makefile >>$(cmt_local_tagfile_MuonMomentumCorrectionsrchk)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_MuonMomentumCorrectionsrchk)"; \
	  test ! -f $(cmt_local_setup_MuonMomentumCorrectionsrchk) || \rm -f $(cmt_local_setup_MuonMomentumCorrectionsrchk); \
	  trap '\rm -f $(cmt_local_setup_MuonMomentumCorrectionsrchk)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsrchk_extratags) show setup >$(cmt_local_setup_MuonMomentumCorrectionsrchk) && \
	  if [ -f $(cmt_final_setup_MuonMomentumCorrectionsrchk) ] && \
	    \cmp -s $(cmt_final_setup_MuonMomentumCorrectionsrchk) $(cmt_local_setup_MuonMomentumCorrectionsrchk); then \
	    \rm $(cmt_local_setup_MuonMomentumCorrectionsrchk); else \
	    \mv -f $(cmt_local_setup_MuonMomentumCorrectionsrchk) $(cmt_final_setup_MuonMomentumCorrectionsrchk); fi

else

#cmt_local_tagfile_MuonMomentumCorrectionsrchk = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsrchk = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_MuonMomentumCorrectionsrchk = $(bin)setup.make
#cmt_final_setup_MuonMomentumCorrectionsrchk = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsrchk_makefile = $(bin)MuonMomentumCorrectionsrchk.make

endif

not_MuonMomentumCorrectionsrchk_dependencies = { n=0; for p in $?; do m=0; for d in $(MuonMomentumCorrectionsrchk_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
MuonMomentumCorrectionsrchkdirs :
	@if test ! -d $(bin)MuonMomentumCorrectionsrchk; then $(mkdir) -p $(bin)MuonMomentumCorrectionsrchk; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsrchk
else
MuonMomentumCorrectionsrchkdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# MuonMomentumCorrectionsrchkdirs ::
#	@if test ! -d $(bin)MuonMomentumCorrectionsrchk; then $(mkdir) -p $(bin)MuonMomentumCorrectionsrchk; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)MuonMomentumCorrectionsrchk
#
#$(cmt_local_MuonMomentumCorrectionsrchk_makefile) :: $(MuonMomentumCorrectionsrchk_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsrchk) build_library_links dirs MuonMomentumCorrectionsrchkdirs
#else
#$(cmt_local_MuonMomentumCorrectionsrchk_makefile) :: $(MuonMomentumCorrectionsrchk_dependencies) $(cmt_local_tagfile_MuonMomentumCorrectionsrchk) build_library_links dirs
#endif
#else
#$(cmt_local_MuonMomentumCorrectionsrchk_makefile) :: $(cmt_local_tagfile_MuonMomentumCorrectionsrchk)
#endif

ifdef cmt_MuonMomentumCorrectionsrchk_has_target_tag

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsrchk_makefile) : $(MuonMomentumCorrectionsrchk_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsrchk.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsrchk_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchk
else
$(cmt_local_MuonMomentumCorrectionsrchk_makefile) : $(MuonMomentumCorrectionsrchk_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsrchk) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsrchk) ] || \
	  $(not_MuonMomentumCorrectionsrchk_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsrchk.make"; \
	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsrchk_extratags) build constituent_config -out=$(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchk; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_MuonMomentumCorrectionsrchk_makefile) : $(MuonMomentumCorrectionsrchk_dependencies) build_library_links
	$(echo) "(constituents.make) Building MuonMomentumCorrectionsrchk.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsrchk.in -tag=$(tags) $(MuonMomentumCorrectionsrchk_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchk
else
$(cmt_local_MuonMomentumCorrectionsrchk_makefile) : $(MuonMomentumCorrectionsrchk_dependencies) $(cmt_build_library_linksstamp) $(bin)MuonMomentumCorrectionsrchk.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_MuonMomentumCorrectionsrchk) ] || \
	  [ ! -f $(cmt_final_setup_MuonMomentumCorrectionsrchk) ] || \
	  $(not_MuonMomentumCorrectionsrchk_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building MuonMomentumCorrectionsrchk.make"; \
	  $(cmtexe) -f=$(bin)MuonMomentumCorrectionsrchk.in -tag=$(tags) $(MuonMomentumCorrectionsrchk_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchk; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(MuonMomentumCorrectionsrchk_extratags) build constituent_makefile -out=$(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchk

MuonMomentumCorrectionsrchk :: $(MuonMomentumCorrectionsrchk_dependencies) $(cmt_local_MuonMomentumCorrectionsrchk_makefile) dirs MuonMomentumCorrectionsrchkdirs
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsrchk"
	@if test -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchk; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchk
	$(echo) "(constituents.make) MuonMomentumCorrectionsrchk done"

clean :: MuonMomentumCorrectionsrchkclean

MuonMomentumCorrectionsrchkclean :: $(MuonMomentumCorrectionsrchkclean_dependencies) ##$(cmt_local_MuonMomentumCorrectionsrchk_makefile)
	$(echo) "(constituents.make) Starting MuonMomentumCorrectionsrchkclean"
	@-if test -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchkclean; \
	fi
	$(echo) "(constituents.make) MuonMomentumCorrectionsrchkclean done"
#	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) MuonMomentumCorrectionsrchkclean

##	  /bin/rm -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) $(bin)MuonMomentumCorrectionsrchk_dependencies.make

install :: MuonMomentumCorrectionsrchkinstall

MuonMomentumCorrectionsrchkinstall :: $(MuonMomentumCorrectionsrchk_dependencies) $(cmt_local_MuonMomentumCorrectionsrchk_makefile)
	$(echo) "(constituents.make) Starting install MuonMomentumCorrectionsrchk"
	@-$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) install
	$(echo) "(constituents.make) install MuonMomentumCorrectionsrchk done"

uninstall : MuonMomentumCorrectionsrchkuninstall

$(foreach d,$(MuonMomentumCorrectionsrchk_dependencies),$(eval $(d)uninstall_dependencies += MuonMomentumCorrectionsrchkuninstall))

MuonMomentumCorrectionsrchkuninstall : $(MuonMomentumCorrectionsrchkuninstall_dependencies) ##$(cmt_local_MuonMomentumCorrectionsrchk_makefile)
	$(echo) "(constituents.make) Starting uninstall MuonMomentumCorrectionsrchk"
	@if test -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile); then \
	  $(MAKE) -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_MuonMomentumCorrectionsrchk_makefile) uninstall
	$(echo) "(constituents.make) uninstall MuonMomentumCorrectionsrchk done"

remove_library_links :: MuonMomentumCorrectionsrchkuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ MuonMomentumCorrectionsrchk"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ MuonMomentumCorrectionsrchk done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_install_includes_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_install_includes_has_target_tag

#cmt_local_tagfile_install_includes = $(MuonMomentumCorrections_tag)_install_includes.make
cmt_local_tagfile_install_includes = $(bin)$(MuonMomentumCorrections_tag)_install_includes.make
cmt_local_setup_install_includes = $(bin)setup_install_includes$$$$.make
cmt_final_setup_install_includes = $(bin)setup_install_includes.make
#cmt_final_setup_install_includes = $(bin)MuonMomentumCorrections_install_includessetup.make
cmt_local_install_includes_makefile = $(bin)install_includes.make

install_includes_extratags = -tag_add=target_install_includes

#$(cmt_local_tagfile_install_includes) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_install_includes) ::
else
$(cmt_local_tagfile_install_includes) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_install_includes); then /bin/rm -f $(cmt_local_tagfile_install_includes); fi ; \
	  $(cmtexe) -tag=$(tags) $(install_includes_extratags) build tag_makefile >>$(cmt_local_tagfile_install_includes)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_install_includes)"; \
	  test ! -f $(cmt_local_setup_install_includes) || \rm -f $(cmt_local_setup_install_includes); \
	  trap '\rm -f $(cmt_local_setup_install_includes)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(install_includes_extratags) show setup >$(cmt_local_setup_install_includes) && \
	  if [ -f $(cmt_final_setup_install_includes) ] && \
	    \cmp -s $(cmt_final_setup_install_includes) $(cmt_local_setup_install_includes); then \
	    \rm $(cmt_local_setup_install_includes); else \
	    \mv -f $(cmt_local_setup_install_includes) $(cmt_final_setup_install_includes); fi

else

#cmt_local_tagfile_install_includes = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_install_includes = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_install_includes = $(bin)setup.make
#cmt_final_setup_install_includes = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_install_includes_makefile = $(bin)install_includes.make

endif

not_install_includes_dependencies = { n=0; for p in $?; do m=0; for d in $(install_includes_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
install_includesdirs :
	@if test ! -d $(bin)install_includes; then $(mkdir) -p $(bin)install_includes; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)install_includes
else
install_includesdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# install_includesdirs ::
#	@if test ! -d $(bin)install_includes; then $(mkdir) -p $(bin)install_includes; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)install_includes
#
#$(cmt_local_install_includes_makefile) :: $(install_includes_dependencies) $(cmt_local_tagfile_install_includes) build_library_links dirs install_includesdirs
#else
#$(cmt_local_install_includes_makefile) :: $(install_includes_dependencies) $(cmt_local_tagfile_install_includes) build_library_links dirs
#endif
#else
#$(cmt_local_install_includes_makefile) :: $(cmt_local_tagfile_install_includes)
#endif

ifdef cmt_install_includes_has_target_tag

ifndef QUICK
$(cmt_local_install_includes_makefile) : $(install_includes_dependencies) build_library_links
	$(echo) "(constituents.make) Building install_includes.make"; \
	  $(cmtexe) -tag=$(tags) $(install_includes_extratags) build constituent_config -out=$(cmt_local_install_includes_makefile) install_includes
else
$(cmt_local_install_includes_makefile) : $(install_includes_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_install_includes) ] || \
	  [ ! -f $(cmt_final_setup_install_includes) ] || \
	  $(not_install_includes_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building install_includes.make"; \
	  $(cmtexe) -tag=$(tags) $(install_includes_extratags) build constituent_config -out=$(cmt_local_install_includes_makefile) install_includes; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_install_includes_makefile) : $(install_includes_dependencies) build_library_links
	$(echo) "(constituents.make) Building install_includes.make"; \
	  $(cmtexe) -f=$(bin)install_includes.in -tag=$(tags) $(install_includes_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_install_includes_makefile) install_includes
else
$(cmt_local_install_includes_makefile) : $(install_includes_dependencies) $(cmt_build_library_linksstamp) $(bin)install_includes.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_install_includes) ] || \
	  [ ! -f $(cmt_final_setup_install_includes) ] || \
	  $(not_install_includes_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building install_includes.make"; \
	  $(cmtexe) -f=$(bin)install_includes.in -tag=$(tags) $(install_includes_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_install_includes_makefile) install_includes; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(install_includes_extratags) build constituent_makefile -out=$(cmt_local_install_includes_makefile) install_includes

install_includes :: $(install_includes_dependencies) $(cmt_local_install_includes_makefile) dirs install_includesdirs
	$(echo) "(constituents.make) Starting install_includes"
	@if test -f $(cmt_local_install_includes_makefile); then \
	  $(MAKE) -f $(cmt_local_install_includes_makefile) install_includes; \
	  fi
#	@$(MAKE) -f $(cmt_local_install_includes_makefile) install_includes
	$(echo) "(constituents.make) install_includes done"

clean :: install_includesclean

install_includesclean :: $(install_includesclean_dependencies) ##$(cmt_local_install_includes_makefile)
	$(echo) "(constituents.make) Starting install_includesclean"
	@-if test -f $(cmt_local_install_includes_makefile); then \
	  $(MAKE) -f $(cmt_local_install_includes_makefile) install_includesclean; \
	fi
	$(echo) "(constituents.make) install_includesclean done"
#	@-$(MAKE) -f $(cmt_local_install_includes_makefile) install_includesclean

##	  /bin/rm -f $(cmt_local_install_includes_makefile) $(bin)install_includes_dependencies.make

install :: install_includesinstall

install_includesinstall :: $(install_includes_dependencies) $(cmt_local_install_includes_makefile)
	$(echo) "(constituents.make) Starting install install_includes"
	@-$(MAKE) -f $(cmt_local_install_includes_makefile) install
	$(echo) "(constituents.make) install install_includes done"

uninstall : install_includesuninstall

$(foreach d,$(install_includes_dependencies),$(eval $(d)uninstall_dependencies += install_includesuninstall))

install_includesuninstall : $(install_includesuninstall_dependencies) ##$(cmt_local_install_includes_makefile)
	$(echo) "(constituents.make) Starting uninstall install_includes"
	@if test -f $(cmt_local_install_includes_makefile); then \
	  $(MAKE) -f $(cmt_local_install_includes_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_install_includes_makefile) uninstall
	$(echo) "(constituents.make) uninstall install_includes done"

remove_library_links :: install_includesuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ install_includes"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ install_includes done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_make_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_make_has_target_tag

#cmt_local_tagfile_make = $(MuonMomentumCorrections_tag)_make.make
cmt_local_tagfile_make = $(bin)$(MuonMomentumCorrections_tag)_make.make
cmt_local_setup_make = $(bin)setup_make$$$$.make
cmt_final_setup_make = $(bin)setup_make.make
#cmt_final_setup_make = $(bin)MuonMomentumCorrections_makesetup.make
cmt_local_make_makefile = $(bin)make.make

make_extratags = -tag_add=target_make

#$(cmt_local_tagfile_make) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_make) ::
else
$(cmt_local_tagfile_make) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_make); then /bin/rm -f $(cmt_local_tagfile_make); fi ; \
	  $(cmtexe) -tag=$(tags) $(make_extratags) build tag_makefile >>$(cmt_local_tagfile_make)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_make)"; \
	  test ! -f $(cmt_local_setup_make) || \rm -f $(cmt_local_setup_make); \
	  trap '\rm -f $(cmt_local_setup_make)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(make_extratags) show setup >$(cmt_local_setup_make) && \
	  if [ -f $(cmt_final_setup_make) ] && \
	    \cmp -s $(cmt_final_setup_make) $(cmt_local_setup_make); then \
	    \rm $(cmt_local_setup_make); else \
	    \mv -f $(cmt_local_setup_make) $(cmt_final_setup_make); fi

else

#cmt_local_tagfile_make = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_make = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_make = $(bin)setup.make
#cmt_final_setup_make = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_make_makefile = $(bin)make.make

endif

not_make_dependencies = { n=0; for p in $?; do m=0; for d in $(make_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
makedirs :
	@if test ! -d $(bin)make; then $(mkdir) -p $(bin)make; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)make
else
makedirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# makedirs ::
#	@if test ! -d $(bin)make; then $(mkdir) -p $(bin)make; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)make
#
#$(cmt_local_make_makefile) :: $(make_dependencies) $(cmt_local_tagfile_make) build_library_links dirs makedirs
#else
#$(cmt_local_make_makefile) :: $(make_dependencies) $(cmt_local_tagfile_make) build_library_links dirs
#endif
#else
#$(cmt_local_make_makefile) :: $(cmt_local_tagfile_make)
#endif

ifdef cmt_make_has_target_tag

ifndef QUICK
$(cmt_local_make_makefile) : $(make_dependencies) build_library_links
	$(echo) "(constituents.make) Building make.make"; \
	  $(cmtexe) -tag=$(tags) $(make_extratags) build constituent_config -out=$(cmt_local_make_makefile) make
else
$(cmt_local_make_makefile) : $(make_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_make) ] || \
	  [ ! -f $(cmt_final_setup_make) ] || \
	  $(not_make_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building make.make"; \
	  $(cmtexe) -tag=$(tags) $(make_extratags) build constituent_config -out=$(cmt_local_make_makefile) make; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_make_makefile) : $(make_dependencies) build_library_links
	$(echo) "(constituents.make) Building make.make"; \
	  $(cmtexe) -f=$(bin)make.in -tag=$(tags) $(make_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_make_makefile) make
else
$(cmt_local_make_makefile) : $(make_dependencies) $(cmt_build_library_linksstamp) $(bin)make.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_make) ] || \
	  [ ! -f $(cmt_final_setup_make) ] || \
	  $(not_make_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building make.make"; \
	  $(cmtexe) -f=$(bin)make.in -tag=$(tags) $(make_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_make_makefile) make; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(make_extratags) build constituent_makefile -out=$(cmt_local_make_makefile) make

make :: $(make_dependencies) $(cmt_local_make_makefile) dirs makedirs
	$(echo) "(constituents.make) Starting make"
	@if test -f $(cmt_local_make_makefile); then \
	  $(MAKE) -f $(cmt_local_make_makefile) make; \
	  fi
#	@$(MAKE) -f $(cmt_local_make_makefile) make
	$(echo) "(constituents.make) make done"

clean :: makeclean

makeclean :: $(makeclean_dependencies) ##$(cmt_local_make_makefile)
	$(echo) "(constituents.make) Starting makeclean"
	@-if test -f $(cmt_local_make_makefile); then \
	  $(MAKE) -f $(cmt_local_make_makefile) makeclean; \
	fi
	$(echo) "(constituents.make) makeclean done"
#	@-$(MAKE) -f $(cmt_local_make_makefile) makeclean

##	  /bin/rm -f $(cmt_local_make_makefile) $(bin)make_dependencies.make

install :: makeinstall

makeinstall :: $(make_dependencies) $(cmt_local_make_makefile)
	$(echo) "(constituents.make) Starting install make"
	@-$(MAKE) -f $(cmt_local_make_makefile) install
	$(echo) "(constituents.make) install make done"

uninstall : makeuninstall

$(foreach d,$(make_dependencies),$(eval $(d)uninstall_dependencies += makeuninstall))

makeuninstall : $(makeuninstall_dependencies) ##$(cmt_local_make_makefile)
	$(echo) "(constituents.make) Starting uninstall make"
	@if test -f $(cmt_local_make_makefile); then \
	  $(MAKE) -f $(cmt_local_make_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_make_makefile) uninstall
	$(echo) "(constituents.make) uninstall make done"

remove_library_links :: makeuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ make"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ make done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_CompilePython_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_CompilePython_has_target_tag

#cmt_local_tagfile_CompilePython = $(MuonMomentumCorrections_tag)_CompilePython.make
cmt_local_tagfile_CompilePython = $(bin)$(MuonMomentumCorrections_tag)_CompilePython.make
cmt_local_setup_CompilePython = $(bin)setup_CompilePython$$$$.make
cmt_final_setup_CompilePython = $(bin)setup_CompilePython.make
#cmt_final_setup_CompilePython = $(bin)MuonMomentumCorrections_CompilePythonsetup.make
cmt_local_CompilePython_makefile = $(bin)CompilePython.make

CompilePython_extratags = -tag_add=target_CompilePython

#$(cmt_local_tagfile_CompilePython) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_CompilePython) ::
else
$(cmt_local_tagfile_CompilePython) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_CompilePython); then /bin/rm -f $(cmt_local_tagfile_CompilePython); fi ; \
	  $(cmtexe) -tag=$(tags) $(CompilePython_extratags) build tag_makefile >>$(cmt_local_tagfile_CompilePython)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_CompilePython)"; \
	  test ! -f $(cmt_local_setup_CompilePython) || \rm -f $(cmt_local_setup_CompilePython); \
	  trap '\rm -f $(cmt_local_setup_CompilePython)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(CompilePython_extratags) show setup >$(cmt_local_setup_CompilePython) && \
	  if [ -f $(cmt_final_setup_CompilePython) ] && \
	    \cmp -s $(cmt_final_setup_CompilePython) $(cmt_local_setup_CompilePython); then \
	    \rm $(cmt_local_setup_CompilePython); else \
	    \mv -f $(cmt_local_setup_CompilePython) $(cmt_final_setup_CompilePython); fi

else

#cmt_local_tagfile_CompilePython = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_CompilePython = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_CompilePython = $(bin)setup.make
#cmt_final_setup_CompilePython = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_CompilePython_makefile = $(bin)CompilePython.make

endif

not_CompilePython_dependencies = { n=0; for p in $?; do m=0; for d in $(CompilePython_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
CompilePythondirs :
	@if test ! -d $(bin)CompilePython; then $(mkdir) -p $(bin)CompilePython; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)CompilePython
else
CompilePythondirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# CompilePythondirs ::
#	@if test ! -d $(bin)CompilePython; then $(mkdir) -p $(bin)CompilePython; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)CompilePython
#
#$(cmt_local_CompilePython_makefile) :: $(CompilePython_dependencies) $(cmt_local_tagfile_CompilePython) build_library_links dirs CompilePythondirs
#else
#$(cmt_local_CompilePython_makefile) :: $(CompilePython_dependencies) $(cmt_local_tagfile_CompilePython) build_library_links dirs
#endif
#else
#$(cmt_local_CompilePython_makefile) :: $(cmt_local_tagfile_CompilePython)
#endif

ifdef cmt_CompilePython_has_target_tag

ifndef QUICK
$(cmt_local_CompilePython_makefile) : $(CompilePython_dependencies) build_library_links
	$(echo) "(constituents.make) Building CompilePython.make"; \
	  $(cmtexe) -tag=$(tags) $(CompilePython_extratags) build constituent_config -out=$(cmt_local_CompilePython_makefile) CompilePython
else
$(cmt_local_CompilePython_makefile) : $(CompilePython_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_CompilePython) ] || \
	  [ ! -f $(cmt_final_setup_CompilePython) ] || \
	  $(not_CompilePython_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building CompilePython.make"; \
	  $(cmtexe) -tag=$(tags) $(CompilePython_extratags) build constituent_config -out=$(cmt_local_CompilePython_makefile) CompilePython; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_CompilePython_makefile) : $(CompilePython_dependencies) build_library_links
	$(echo) "(constituents.make) Building CompilePython.make"; \
	  $(cmtexe) -f=$(bin)CompilePython.in -tag=$(tags) $(CompilePython_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_CompilePython_makefile) CompilePython
else
$(cmt_local_CompilePython_makefile) : $(CompilePython_dependencies) $(cmt_build_library_linksstamp) $(bin)CompilePython.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_CompilePython) ] || \
	  [ ! -f $(cmt_final_setup_CompilePython) ] || \
	  $(not_CompilePython_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building CompilePython.make"; \
	  $(cmtexe) -f=$(bin)CompilePython.in -tag=$(tags) $(CompilePython_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_CompilePython_makefile) CompilePython; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(CompilePython_extratags) build constituent_makefile -out=$(cmt_local_CompilePython_makefile) CompilePython

CompilePython :: $(CompilePython_dependencies) $(cmt_local_CompilePython_makefile) dirs CompilePythondirs
	$(echo) "(constituents.make) Starting CompilePython"
	@if test -f $(cmt_local_CompilePython_makefile); then \
	  $(MAKE) -f $(cmt_local_CompilePython_makefile) CompilePython; \
	  fi
#	@$(MAKE) -f $(cmt_local_CompilePython_makefile) CompilePython
	$(echo) "(constituents.make) CompilePython done"

clean :: CompilePythonclean

CompilePythonclean :: $(CompilePythonclean_dependencies) ##$(cmt_local_CompilePython_makefile)
	$(echo) "(constituents.make) Starting CompilePythonclean"
	@-if test -f $(cmt_local_CompilePython_makefile); then \
	  $(MAKE) -f $(cmt_local_CompilePython_makefile) CompilePythonclean; \
	fi
	$(echo) "(constituents.make) CompilePythonclean done"
#	@-$(MAKE) -f $(cmt_local_CompilePython_makefile) CompilePythonclean

##	  /bin/rm -f $(cmt_local_CompilePython_makefile) $(bin)CompilePython_dependencies.make

install :: CompilePythoninstall

CompilePythoninstall :: $(CompilePython_dependencies) $(cmt_local_CompilePython_makefile)
	$(echo) "(constituents.make) Starting install CompilePython"
	@-$(MAKE) -f $(cmt_local_CompilePython_makefile) install
	$(echo) "(constituents.make) install CompilePython done"

uninstall : CompilePythonuninstall

$(foreach d,$(CompilePython_dependencies),$(eval $(d)uninstall_dependencies += CompilePythonuninstall))

CompilePythonuninstall : $(CompilePythonuninstall_dependencies) ##$(cmt_local_CompilePython_makefile)
	$(echo) "(constituents.make) Starting uninstall CompilePython"
	@if test -f $(cmt_local_CompilePython_makefile); then \
	  $(MAKE) -f $(cmt_local_CompilePython_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_CompilePython_makefile) uninstall
	$(echo) "(constituents.make) uninstall CompilePython done"

remove_library_links :: CompilePythonuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ CompilePython"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ CompilePython done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_qmtest_run_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_qmtest_run_has_target_tag

#cmt_local_tagfile_qmtest_run = $(MuonMomentumCorrections_tag)_qmtest_run.make
cmt_local_tagfile_qmtest_run = $(bin)$(MuonMomentumCorrections_tag)_qmtest_run.make
cmt_local_setup_qmtest_run = $(bin)setup_qmtest_run$$$$.make
cmt_final_setup_qmtest_run = $(bin)setup_qmtest_run.make
#cmt_final_setup_qmtest_run = $(bin)MuonMomentumCorrections_qmtest_runsetup.make
cmt_local_qmtest_run_makefile = $(bin)qmtest_run.make

qmtest_run_extratags = -tag_add=target_qmtest_run

#$(cmt_local_tagfile_qmtest_run) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_qmtest_run) ::
else
$(cmt_local_tagfile_qmtest_run) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_qmtest_run); then /bin/rm -f $(cmt_local_tagfile_qmtest_run); fi ; \
	  $(cmtexe) -tag=$(tags) $(qmtest_run_extratags) build tag_makefile >>$(cmt_local_tagfile_qmtest_run)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_qmtest_run)"; \
	  test ! -f $(cmt_local_setup_qmtest_run) || \rm -f $(cmt_local_setup_qmtest_run); \
	  trap '\rm -f $(cmt_local_setup_qmtest_run)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(qmtest_run_extratags) show setup >$(cmt_local_setup_qmtest_run) && \
	  if [ -f $(cmt_final_setup_qmtest_run) ] && \
	    \cmp -s $(cmt_final_setup_qmtest_run) $(cmt_local_setup_qmtest_run); then \
	    \rm $(cmt_local_setup_qmtest_run); else \
	    \mv -f $(cmt_local_setup_qmtest_run) $(cmt_final_setup_qmtest_run); fi

else

#cmt_local_tagfile_qmtest_run = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_qmtest_run = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_qmtest_run = $(bin)setup.make
#cmt_final_setup_qmtest_run = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_qmtest_run_makefile = $(bin)qmtest_run.make

endif

not_qmtest_run_dependencies = { n=0; for p in $?; do m=0; for d in $(qmtest_run_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
qmtest_rundirs :
	@if test ! -d $(bin)qmtest_run; then $(mkdir) -p $(bin)qmtest_run; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)qmtest_run
else
qmtest_rundirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# qmtest_rundirs ::
#	@if test ! -d $(bin)qmtest_run; then $(mkdir) -p $(bin)qmtest_run; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)qmtest_run
#
#$(cmt_local_qmtest_run_makefile) :: $(qmtest_run_dependencies) $(cmt_local_tagfile_qmtest_run) build_library_links dirs qmtest_rundirs
#else
#$(cmt_local_qmtest_run_makefile) :: $(qmtest_run_dependencies) $(cmt_local_tagfile_qmtest_run) build_library_links dirs
#endif
#else
#$(cmt_local_qmtest_run_makefile) :: $(cmt_local_tagfile_qmtest_run)
#endif

ifdef cmt_qmtest_run_has_target_tag

ifndef QUICK
$(cmt_local_qmtest_run_makefile) : $(qmtest_run_dependencies) build_library_links
	$(echo) "(constituents.make) Building qmtest_run.make"; \
	  $(cmtexe) -tag=$(tags) $(qmtest_run_extratags) build constituent_config -out=$(cmt_local_qmtest_run_makefile) qmtest_run
else
$(cmt_local_qmtest_run_makefile) : $(qmtest_run_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_qmtest_run) ] || \
	  [ ! -f $(cmt_final_setup_qmtest_run) ] || \
	  $(not_qmtest_run_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building qmtest_run.make"; \
	  $(cmtexe) -tag=$(tags) $(qmtest_run_extratags) build constituent_config -out=$(cmt_local_qmtest_run_makefile) qmtest_run; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_qmtest_run_makefile) : $(qmtest_run_dependencies) build_library_links
	$(echo) "(constituents.make) Building qmtest_run.make"; \
	  $(cmtexe) -f=$(bin)qmtest_run.in -tag=$(tags) $(qmtest_run_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_qmtest_run_makefile) qmtest_run
else
$(cmt_local_qmtest_run_makefile) : $(qmtest_run_dependencies) $(cmt_build_library_linksstamp) $(bin)qmtest_run.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_qmtest_run) ] || \
	  [ ! -f $(cmt_final_setup_qmtest_run) ] || \
	  $(not_qmtest_run_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building qmtest_run.make"; \
	  $(cmtexe) -f=$(bin)qmtest_run.in -tag=$(tags) $(qmtest_run_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_qmtest_run_makefile) qmtest_run; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(qmtest_run_extratags) build constituent_makefile -out=$(cmt_local_qmtest_run_makefile) qmtest_run

qmtest_run :: $(qmtest_run_dependencies) $(cmt_local_qmtest_run_makefile) dirs qmtest_rundirs
	$(echo) "(constituents.make) Starting qmtest_run"
	@if test -f $(cmt_local_qmtest_run_makefile); then \
	  $(MAKE) -f $(cmt_local_qmtest_run_makefile) qmtest_run; \
	  fi
#	@$(MAKE) -f $(cmt_local_qmtest_run_makefile) qmtest_run
	$(echo) "(constituents.make) qmtest_run done"

clean :: qmtest_runclean

qmtest_runclean :: $(qmtest_runclean_dependencies) ##$(cmt_local_qmtest_run_makefile)
	$(echo) "(constituents.make) Starting qmtest_runclean"
	@-if test -f $(cmt_local_qmtest_run_makefile); then \
	  $(MAKE) -f $(cmt_local_qmtest_run_makefile) qmtest_runclean; \
	fi
	$(echo) "(constituents.make) qmtest_runclean done"
#	@-$(MAKE) -f $(cmt_local_qmtest_run_makefile) qmtest_runclean

##	  /bin/rm -f $(cmt_local_qmtest_run_makefile) $(bin)qmtest_run_dependencies.make

install :: qmtest_runinstall

qmtest_runinstall :: $(qmtest_run_dependencies) $(cmt_local_qmtest_run_makefile)
	$(echo) "(constituents.make) Starting install qmtest_run"
	@-$(MAKE) -f $(cmt_local_qmtest_run_makefile) install
	$(echo) "(constituents.make) install qmtest_run done"

uninstall : qmtest_rununinstall

$(foreach d,$(qmtest_run_dependencies),$(eval $(d)uninstall_dependencies += qmtest_rununinstall))

qmtest_rununinstall : $(qmtest_rununinstall_dependencies) ##$(cmt_local_qmtest_run_makefile)
	$(echo) "(constituents.make) Starting uninstall qmtest_run"
	@if test -f $(cmt_local_qmtest_run_makefile); then \
	  $(MAKE) -f $(cmt_local_qmtest_run_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_qmtest_run_makefile) uninstall
	$(echo) "(constituents.make) uninstall qmtest_run done"

remove_library_links :: qmtest_rununinstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ qmtest_run"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ qmtest_run done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_qmtest_summarize_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_qmtest_summarize_has_target_tag

#cmt_local_tagfile_qmtest_summarize = $(MuonMomentumCorrections_tag)_qmtest_summarize.make
cmt_local_tagfile_qmtest_summarize = $(bin)$(MuonMomentumCorrections_tag)_qmtest_summarize.make
cmt_local_setup_qmtest_summarize = $(bin)setup_qmtest_summarize$$$$.make
cmt_final_setup_qmtest_summarize = $(bin)setup_qmtest_summarize.make
#cmt_final_setup_qmtest_summarize = $(bin)MuonMomentumCorrections_qmtest_summarizesetup.make
cmt_local_qmtest_summarize_makefile = $(bin)qmtest_summarize.make

qmtest_summarize_extratags = -tag_add=target_qmtest_summarize

#$(cmt_local_tagfile_qmtest_summarize) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_qmtest_summarize) ::
else
$(cmt_local_tagfile_qmtest_summarize) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_qmtest_summarize); then /bin/rm -f $(cmt_local_tagfile_qmtest_summarize); fi ; \
	  $(cmtexe) -tag=$(tags) $(qmtest_summarize_extratags) build tag_makefile >>$(cmt_local_tagfile_qmtest_summarize)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_qmtest_summarize)"; \
	  test ! -f $(cmt_local_setup_qmtest_summarize) || \rm -f $(cmt_local_setup_qmtest_summarize); \
	  trap '\rm -f $(cmt_local_setup_qmtest_summarize)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(qmtest_summarize_extratags) show setup >$(cmt_local_setup_qmtest_summarize) && \
	  if [ -f $(cmt_final_setup_qmtest_summarize) ] && \
	    \cmp -s $(cmt_final_setup_qmtest_summarize) $(cmt_local_setup_qmtest_summarize); then \
	    \rm $(cmt_local_setup_qmtest_summarize); else \
	    \mv -f $(cmt_local_setup_qmtest_summarize) $(cmt_final_setup_qmtest_summarize); fi

else

#cmt_local_tagfile_qmtest_summarize = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_qmtest_summarize = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_qmtest_summarize = $(bin)setup.make
#cmt_final_setup_qmtest_summarize = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_qmtest_summarize_makefile = $(bin)qmtest_summarize.make

endif

not_qmtest_summarize_dependencies = { n=0; for p in $?; do m=0; for d in $(qmtest_summarize_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
qmtest_summarizedirs :
	@if test ! -d $(bin)qmtest_summarize; then $(mkdir) -p $(bin)qmtest_summarize; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)qmtest_summarize
else
qmtest_summarizedirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# qmtest_summarizedirs ::
#	@if test ! -d $(bin)qmtest_summarize; then $(mkdir) -p $(bin)qmtest_summarize; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)qmtest_summarize
#
#$(cmt_local_qmtest_summarize_makefile) :: $(qmtest_summarize_dependencies) $(cmt_local_tagfile_qmtest_summarize) build_library_links dirs qmtest_summarizedirs
#else
#$(cmt_local_qmtest_summarize_makefile) :: $(qmtest_summarize_dependencies) $(cmt_local_tagfile_qmtest_summarize) build_library_links dirs
#endif
#else
#$(cmt_local_qmtest_summarize_makefile) :: $(cmt_local_tagfile_qmtest_summarize)
#endif

ifdef cmt_qmtest_summarize_has_target_tag

ifndef QUICK
$(cmt_local_qmtest_summarize_makefile) : $(qmtest_summarize_dependencies) build_library_links
	$(echo) "(constituents.make) Building qmtest_summarize.make"; \
	  $(cmtexe) -tag=$(tags) $(qmtest_summarize_extratags) build constituent_config -out=$(cmt_local_qmtest_summarize_makefile) qmtest_summarize
else
$(cmt_local_qmtest_summarize_makefile) : $(qmtest_summarize_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_qmtest_summarize) ] || \
	  [ ! -f $(cmt_final_setup_qmtest_summarize) ] || \
	  $(not_qmtest_summarize_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building qmtest_summarize.make"; \
	  $(cmtexe) -tag=$(tags) $(qmtest_summarize_extratags) build constituent_config -out=$(cmt_local_qmtest_summarize_makefile) qmtest_summarize; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_qmtest_summarize_makefile) : $(qmtest_summarize_dependencies) build_library_links
	$(echo) "(constituents.make) Building qmtest_summarize.make"; \
	  $(cmtexe) -f=$(bin)qmtest_summarize.in -tag=$(tags) $(qmtest_summarize_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_qmtest_summarize_makefile) qmtest_summarize
else
$(cmt_local_qmtest_summarize_makefile) : $(qmtest_summarize_dependencies) $(cmt_build_library_linksstamp) $(bin)qmtest_summarize.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_qmtest_summarize) ] || \
	  [ ! -f $(cmt_final_setup_qmtest_summarize) ] || \
	  $(not_qmtest_summarize_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building qmtest_summarize.make"; \
	  $(cmtexe) -f=$(bin)qmtest_summarize.in -tag=$(tags) $(qmtest_summarize_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_qmtest_summarize_makefile) qmtest_summarize; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(qmtest_summarize_extratags) build constituent_makefile -out=$(cmt_local_qmtest_summarize_makefile) qmtest_summarize

qmtest_summarize :: $(qmtest_summarize_dependencies) $(cmt_local_qmtest_summarize_makefile) dirs qmtest_summarizedirs
	$(echo) "(constituents.make) Starting qmtest_summarize"
	@if test -f $(cmt_local_qmtest_summarize_makefile); then \
	  $(MAKE) -f $(cmt_local_qmtest_summarize_makefile) qmtest_summarize; \
	  fi
#	@$(MAKE) -f $(cmt_local_qmtest_summarize_makefile) qmtest_summarize
	$(echo) "(constituents.make) qmtest_summarize done"

clean :: qmtest_summarizeclean

qmtest_summarizeclean :: $(qmtest_summarizeclean_dependencies) ##$(cmt_local_qmtest_summarize_makefile)
	$(echo) "(constituents.make) Starting qmtest_summarizeclean"
	@-if test -f $(cmt_local_qmtest_summarize_makefile); then \
	  $(MAKE) -f $(cmt_local_qmtest_summarize_makefile) qmtest_summarizeclean; \
	fi
	$(echo) "(constituents.make) qmtest_summarizeclean done"
#	@-$(MAKE) -f $(cmt_local_qmtest_summarize_makefile) qmtest_summarizeclean

##	  /bin/rm -f $(cmt_local_qmtest_summarize_makefile) $(bin)qmtest_summarize_dependencies.make

install :: qmtest_summarizeinstall

qmtest_summarizeinstall :: $(qmtest_summarize_dependencies) $(cmt_local_qmtest_summarize_makefile)
	$(echo) "(constituents.make) Starting install qmtest_summarize"
	@-$(MAKE) -f $(cmt_local_qmtest_summarize_makefile) install
	$(echo) "(constituents.make) install qmtest_summarize done"

uninstall : qmtest_summarizeuninstall

$(foreach d,$(qmtest_summarize_dependencies),$(eval $(d)uninstall_dependencies += qmtest_summarizeuninstall))

qmtest_summarizeuninstall : $(qmtest_summarizeuninstall_dependencies) ##$(cmt_local_qmtest_summarize_makefile)
	$(echo) "(constituents.make) Starting uninstall qmtest_summarize"
	@if test -f $(cmt_local_qmtest_summarize_makefile); then \
	  $(MAKE) -f $(cmt_local_qmtest_summarize_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_qmtest_summarize_makefile) uninstall
	$(echo) "(constituents.make) uninstall qmtest_summarize done"

remove_library_links :: qmtest_summarizeuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ qmtest_summarize"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ qmtest_summarize done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_TestPackage_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_TestPackage_has_target_tag

#cmt_local_tagfile_TestPackage = $(MuonMomentumCorrections_tag)_TestPackage.make
cmt_local_tagfile_TestPackage = $(bin)$(MuonMomentumCorrections_tag)_TestPackage.make
cmt_local_setup_TestPackage = $(bin)setup_TestPackage$$$$.make
cmt_final_setup_TestPackage = $(bin)setup_TestPackage.make
#cmt_final_setup_TestPackage = $(bin)MuonMomentumCorrections_TestPackagesetup.make
cmt_local_TestPackage_makefile = $(bin)TestPackage.make

TestPackage_extratags = -tag_add=target_TestPackage

#$(cmt_local_tagfile_TestPackage) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_TestPackage) ::
else
$(cmt_local_tagfile_TestPackage) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_TestPackage); then /bin/rm -f $(cmt_local_tagfile_TestPackage); fi ; \
	  $(cmtexe) -tag=$(tags) $(TestPackage_extratags) build tag_makefile >>$(cmt_local_tagfile_TestPackage)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_TestPackage)"; \
	  test ! -f $(cmt_local_setup_TestPackage) || \rm -f $(cmt_local_setup_TestPackage); \
	  trap '\rm -f $(cmt_local_setup_TestPackage)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(TestPackage_extratags) show setup >$(cmt_local_setup_TestPackage) && \
	  if [ -f $(cmt_final_setup_TestPackage) ] && \
	    \cmp -s $(cmt_final_setup_TestPackage) $(cmt_local_setup_TestPackage); then \
	    \rm $(cmt_local_setup_TestPackage); else \
	    \mv -f $(cmt_local_setup_TestPackage) $(cmt_final_setup_TestPackage); fi

else

#cmt_local_tagfile_TestPackage = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_TestPackage = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_TestPackage = $(bin)setup.make
#cmt_final_setup_TestPackage = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_TestPackage_makefile = $(bin)TestPackage.make

endif

not_TestPackage_dependencies = { n=0; for p in $?; do m=0; for d in $(TestPackage_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
TestPackagedirs :
	@if test ! -d $(bin)TestPackage; then $(mkdir) -p $(bin)TestPackage; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)TestPackage
else
TestPackagedirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# TestPackagedirs ::
#	@if test ! -d $(bin)TestPackage; then $(mkdir) -p $(bin)TestPackage; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)TestPackage
#
#$(cmt_local_TestPackage_makefile) :: $(TestPackage_dependencies) $(cmt_local_tagfile_TestPackage) build_library_links dirs TestPackagedirs
#else
#$(cmt_local_TestPackage_makefile) :: $(TestPackage_dependencies) $(cmt_local_tagfile_TestPackage) build_library_links dirs
#endif
#else
#$(cmt_local_TestPackage_makefile) :: $(cmt_local_tagfile_TestPackage)
#endif

ifdef cmt_TestPackage_has_target_tag

ifndef QUICK
$(cmt_local_TestPackage_makefile) : $(TestPackage_dependencies) build_library_links
	$(echo) "(constituents.make) Building TestPackage.make"; \
	  $(cmtexe) -tag=$(tags) $(TestPackage_extratags) build constituent_config -out=$(cmt_local_TestPackage_makefile) TestPackage
else
$(cmt_local_TestPackage_makefile) : $(TestPackage_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_TestPackage) ] || \
	  [ ! -f $(cmt_final_setup_TestPackage) ] || \
	  $(not_TestPackage_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building TestPackage.make"; \
	  $(cmtexe) -tag=$(tags) $(TestPackage_extratags) build constituent_config -out=$(cmt_local_TestPackage_makefile) TestPackage; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_TestPackage_makefile) : $(TestPackage_dependencies) build_library_links
	$(echo) "(constituents.make) Building TestPackage.make"; \
	  $(cmtexe) -f=$(bin)TestPackage.in -tag=$(tags) $(TestPackage_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_TestPackage_makefile) TestPackage
else
$(cmt_local_TestPackage_makefile) : $(TestPackage_dependencies) $(cmt_build_library_linksstamp) $(bin)TestPackage.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_TestPackage) ] || \
	  [ ! -f $(cmt_final_setup_TestPackage) ] || \
	  $(not_TestPackage_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building TestPackage.make"; \
	  $(cmtexe) -f=$(bin)TestPackage.in -tag=$(tags) $(TestPackage_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_TestPackage_makefile) TestPackage; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(TestPackage_extratags) build constituent_makefile -out=$(cmt_local_TestPackage_makefile) TestPackage

TestPackage :: $(TestPackage_dependencies) $(cmt_local_TestPackage_makefile) dirs TestPackagedirs
	$(echo) "(constituents.make) Starting TestPackage"
	@if test -f $(cmt_local_TestPackage_makefile); then \
	  $(MAKE) -f $(cmt_local_TestPackage_makefile) TestPackage; \
	  fi
#	@$(MAKE) -f $(cmt_local_TestPackage_makefile) TestPackage
	$(echo) "(constituents.make) TestPackage done"

clean :: TestPackageclean

TestPackageclean :: $(TestPackageclean_dependencies) ##$(cmt_local_TestPackage_makefile)
	$(echo) "(constituents.make) Starting TestPackageclean"
	@-if test -f $(cmt_local_TestPackage_makefile); then \
	  $(MAKE) -f $(cmt_local_TestPackage_makefile) TestPackageclean; \
	fi
	$(echo) "(constituents.make) TestPackageclean done"
#	@-$(MAKE) -f $(cmt_local_TestPackage_makefile) TestPackageclean

##	  /bin/rm -f $(cmt_local_TestPackage_makefile) $(bin)TestPackage_dependencies.make

install :: TestPackageinstall

TestPackageinstall :: $(TestPackage_dependencies) $(cmt_local_TestPackage_makefile)
	$(echo) "(constituents.make) Starting install TestPackage"
	@-$(MAKE) -f $(cmt_local_TestPackage_makefile) install
	$(echo) "(constituents.make) install TestPackage done"

uninstall : TestPackageuninstall

$(foreach d,$(TestPackage_dependencies),$(eval $(d)uninstall_dependencies += TestPackageuninstall))

TestPackageuninstall : $(TestPackageuninstall_dependencies) ##$(cmt_local_TestPackage_makefile)
	$(echo) "(constituents.make) Starting uninstall TestPackage"
	@if test -f $(cmt_local_TestPackage_makefile); then \
	  $(MAKE) -f $(cmt_local_TestPackage_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_TestPackage_makefile) uninstall
	$(echo) "(constituents.make) uninstall TestPackage done"

remove_library_links :: TestPackageuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ TestPackage"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ TestPackage done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_TestProject_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_TestProject_has_target_tag

#cmt_local_tagfile_TestProject = $(MuonMomentumCorrections_tag)_TestProject.make
cmt_local_tagfile_TestProject = $(bin)$(MuonMomentumCorrections_tag)_TestProject.make
cmt_local_setup_TestProject = $(bin)setup_TestProject$$$$.make
cmt_final_setup_TestProject = $(bin)setup_TestProject.make
#cmt_final_setup_TestProject = $(bin)MuonMomentumCorrections_TestProjectsetup.make
cmt_local_TestProject_makefile = $(bin)TestProject.make

TestProject_extratags = -tag_add=target_TestProject

#$(cmt_local_tagfile_TestProject) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_TestProject) ::
else
$(cmt_local_tagfile_TestProject) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_TestProject); then /bin/rm -f $(cmt_local_tagfile_TestProject); fi ; \
	  $(cmtexe) -tag=$(tags) $(TestProject_extratags) build tag_makefile >>$(cmt_local_tagfile_TestProject)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_TestProject)"; \
	  test ! -f $(cmt_local_setup_TestProject) || \rm -f $(cmt_local_setup_TestProject); \
	  trap '\rm -f $(cmt_local_setup_TestProject)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(TestProject_extratags) show setup >$(cmt_local_setup_TestProject) && \
	  if [ -f $(cmt_final_setup_TestProject) ] && \
	    \cmp -s $(cmt_final_setup_TestProject) $(cmt_local_setup_TestProject); then \
	    \rm $(cmt_local_setup_TestProject); else \
	    \mv -f $(cmt_local_setup_TestProject) $(cmt_final_setup_TestProject); fi

else

#cmt_local_tagfile_TestProject = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_TestProject = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_TestProject = $(bin)setup.make
#cmt_final_setup_TestProject = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_TestProject_makefile = $(bin)TestProject.make

endif

not_TestProject_dependencies = { n=0; for p in $?; do m=0; for d in $(TestProject_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
TestProjectdirs :
	@if test ! -d $(bin)TestProject; then $(mkdir) -p $(bin)TestProject; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)TestProject
else
TestProjectdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# TestProjectdirs ::
#	@if test ! -d $(bin)TestProject; then $(mkdir) -p $(bin)TestProject; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)TestProject
#
#$(cmt_local_TestProject_makefile) :: $(TestProject_dependencies) $(cmt_local_tagfile_TestProject) build_library_links dirs TestProjectdirs
#else
#$(cmt_local_TestProject_makefile) :: $(TestProject_dependencies) $(cmt_local_tagfile_TestProject) build_library_links dirs
#endif
#else
#$(cmt_local_TestProject_makefile) :: $(cmt_local_tagfile_TestProject)
#endif

ifdef cmt_TestProject_has_target_tag

ifndef QUICK
$(cmt_local_TestProject_makefile) : $(TestProject_dependencies) build_library_links
	$(echo) "(constituents.make) Building TestProject.make"; \
	  $(cmtexe) -tag=$(tags) $(TestProject_extratags) build constituent_config -out=$(cmt_local_TestProject_makefile) TestProject
else
$(cmt_local_TestProject_makefile) : $(TestProject_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_TestProject) ] || \
	  [ ! -f $(cmt_final_setup_TestProject) ] || \
	  $(not_TestProject_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building TestProject.make"; \
	  $(cmtexe) -tag=$(tags) $(TestProject_extratags) build constituent_config -out=$(cmt_local_TestProject_makefile) TestProject; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_TestProject_makefile) : $(TestProject_dependencies) build_library_links
	$(echo) "(constituents.make) Building TestProject.make"; \
	  $(cmtexe) -f=$(bin)TestProject.in -tag=$(tags) $(TestProject_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_TestProject_makefile) TestProject
else
$(cmt_local_TestProject_makefile) : $(TestProject_dependencies) $(cmt_build_library_linksstamp) $(bin)TestProject.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_TestProject) ] || \
	  [ ! -f $(cmt_final_setup_TestProject) ] || \
	  $(not_TestProject_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building TestProject.make"; \
	  $(cmtexe) -f=$(bin)TestProject.in -tag=$(tags) $(TestProject_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_TestProject_makefile) TestProject; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(TestProject_extratags) build constituent_makefile -out=$(cmt_local_TestProject_makefile) TestProject

TestProject :: $(TestProject_dependencies) $(cmt_local_TestProject_makefile) dirs TestProjectdirs
	$(echo) "(constituents.make) Starting TestProject"
	@if test -f $(cmt_local_TestProject_makefile); then \
	  $(MAKE) -f $(cmt_local_TestProject_makefile) TestProject; \
	  fi
#	@$(MAKE) -f $(cmt_local_TestProject_makefile) TestProject
	$(echo) "(constituents.make) TestProject done"

clean :: TestProjectclean

TestProjectclean :: $(TestProjectclean_dependencies) ##$(cmt_local_TestProject_makefile)
	$(echo) "(constituents.make) Starting TestProjectclean"
	@-if test -f $(cmt_local_TestProject_makefile); then \
	  $(MAKE) -f $(cmt_local_TestProject_makefile) TestProjectclean; \
	fi
	$(echo) "(constituents.make) TestProjectclean done"
#	@-$(MAKE) -f $(cmt_local_TestProject_makefile) TestProjectclean

##	  /bin/rm -f $(cmt_local_TestProject_makefile) $(bin)TestProject_dependencies.make

install :: TestProjectinstall

TestProjectinstall :: $(TestProject_dependencies) $(cmt_local_TestProject_makefile)
	$(echo) "(constituents.make) Starting install TestProject"
	@-$(MAKE) -f $(cmt_local_TestProject_makefile) install
	$(echo) "(constituents.make) install TestProject done"

uninstall : TestProjectuninstall

$(foreach d,$(TestProject_dependencies),$(eval $(d)uninstall_dependencies += TestProjectuninstall))

TestProjectuninstall : $(TestProjectuninstall_dependencies) ##$(cmt_local_TestProject_makefile)
	$(echo) "(constituents.make) Starting uninstall TestProject"
	@if test -f $(cmt_local_TestProject_makefile); then \
	  $(MAKE) -f $(cmt_local_TestProject_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_TestProject_makefile) uninstall
	$(echo) "(constituents.make) uninstall TestProject done"

remove_library_links :: TestProjectuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ TestProject"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ TestProject done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_post_install_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_post_install_has_target_tag

#cmt_local_tagfile_post_install = $(MuonMomentumCorrections_tag)_post_install.make
cmt_local_tagfile_post_install = $(bin)$(MuonMomentumCorrections_tag)_post_install.make
cmt_local_setup_post_install = $(bin)setup_post_install$$$$.make
cmt_final_setup_post_install = $(bin)setup_post_install.make
#cmt_final_setup_post_install = $(bin)MuonMomentumCorrections_post_installsetup.make
cmt_local_post_install_makefile = $(bin)post_install.make

post_install_extratags = -tag_add=target_post_install

#$(cmt_local_tagfile_post_install) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_post_install) ::
else
$(cmt_local_tagfile_post_install) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_post_install); then /bin/rm -f $(cmt_local_tagfile_post_install); fi ; \
	  $(cmtexe) -tag=$(tags) $(post_install_extratags) build tag_makefile >>$(cmt_local_tagfile_post_install)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_post_install)"; \
	  test ! -f $(cmt_local_setup_post_install) || \rm -f $(cmt_local_setup_post_install); \
	  trap '\rm -f $(cmt_local_setup_post_install)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(post_install_extratags) show setup >$(cmt_local_setup_post_install) && \
	  if [ -f $(cmt_final_setup_post_install) ] && \
	    \cmp -s $(cmt_final_setup_post_install) $(cmt_local_setup_post_install); then \
	    \rm $(cmt_local_setup_post_install); else \
	    \mv -f $(cmt_local_setup_post_install) $(cmt_final_setup_post_install); fi

else

#cmt_local_tagfile_post_install = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_post_install = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_post_install = $(bin)setup.make
#cmt_final_setup_post_install = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_post_install_makefile = $(bin)post_install.make

endif

not_post_install_dependencies = { n=0; for p in $?; do m=0; for d in $(post_install_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
post_installdirs :
	@if test ! -d $(bin)post_install; then $(mkdir) -p $(bin)post_install; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)post_install
else
post_installdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# post_installdirs ::
#	@if test ! -d $(bin)post_install; then $(mkdir) -p $(bin)post_install; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)post_install
#
#$(cmt_local_post_install_makefile) :: $(post_install_dependencies) $(cmt_local_tagfile_post_install) build_library_links dirs post_installdirs
#else
#$(cmt_local_post_install_makefile) :: $(post_install_dependencies) $(cmt_local_tagfile_post_install) build_library_links dirs
#endif
#else
#$(cmt_local_post_install_makefile) :: $(cmt_local_tagfile_post_install)
#endif

ifdef cmt_post_install_has_target_tag

ifndef QUICK
$(cmt_local_post_install_makefile) : $(post_install_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_install.make"; \
	  $(cmtexe) -tag=$(tags) $(post_install_extratags) build constituent_config -out=$(cmt_local_post_install_makefile) post_install
else
$(cmt_local_post_install_makefile) : $(post_install_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_install) ] || \
	  [ ! -f $(cmt_final_setup_post_install) ] || \
	  $(not_post_install_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_install.make"; \
	  $(cmtexe) -tag=$(tags) $(post_install_extratags) build constituent_config -out=$(cmt_local_post_install_makefile) post_install; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_post_install_makefile) : $(post_install_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_install.make"; \
	  $(cmtexe) -f=$(bin)post_install.in -tag=$(tags) $(post_install_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_install_makefile) post_install
else
$(cmt_local_post_install_makefile) : $(post_install_dependencies) $(cmt_build_library_linksstamp) $(bin)post_install.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_install) ] || \
	  [ ! -f $(cmt_final_setup_post_install) ] || \
	  $(not_post_install_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_install.make"; \
	  $(cmtexe) -f=$(bin)post_install.in -tag=$(tags) $(post_install_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_install_makefile) post_install; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(post_install_extratags) build constituent_makefile -out=$(cmt_local_post_install_makefile) post_install

post_install :: $(post_install_dependencies) $(cmt_local_post_install_makefile) dirs post_installdirs
	$(echo) "(constituents.make) Starting post_install"
	@if test -f $(cmt_local_post_install_makefile); then \
	  $(MAKE) -f $(cmt_local_post_install_makefile) post_install; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_install_makefile) post_install
	$(echo) "(constituents.make) post_install done"

clean :: post_installclean

post_installclean :: $(post_installclean_dependencies) ##$(cmt_local_post_install_makefile)
	$(echo) "(constituents.make) Starting post_installclean"
	@-if test -f $(cmt_local_post_install_makefile); then \
	  $(MAKE) -f $(cmt_local_post_install_makefile) post_installclean; \
	fi
	$(echo) "(constituents.make) post_installclean done"
#	@-$(MAKE) -f $(cmt_local_post_install_makefile) post_installclean

##	  /bin/rm -f $(cmt_local_post_install_makefile) $(bin)post_install_dependencies.make

install :: post_installinstall

post_installinstall :: $(post_install_dependencies) $(cmt_local_post_install_makefile)
	$(echo) "(constituents.make) Starting install post_install"
	@-$(MAKE) -f $(cmt_local_post_install_makefile) install
	$(echo) "(constituents.make) install post_install done"

uninstall : post_installuninstall

$(foreach d,$(post_install_dependencies),$(eval $(d)uninstall_dependencies += post_installuninstall))

post_installuninstall : $(post_installuninstall_dependencies) ##$(cmt_local_post_install_makefile)
	$(echo) "(constituents.make) Starting uninstall post_install"
	@if test -f $(cmt_local_post_install_makefile); then \
	  $(MAKE) -f $(cmt_local_post_install_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_install_makefile) uninstall
	$(echo) "(constituents.make) uninstall post_install done"

remove_library_links :: post_installuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ post_install"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ post_install done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_post_merge_rootmap_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_post_merge_rootmap_has_target_tag

#cmt_local_tagfile_post_merge_rootmap = $(MuonMomentumCorrections_tag)_post_merge_rootmap.make
cmt_local_tagfile_post_merge_rootmap = $(bin)$(MuonMomentumCorrections_tag)_post_merge_rootmap.make
cmt_local_setup_post_merge_rootmap = $(bin)setup_post_merge_rootmap$$$$.make
cmt_final_setup_post_merge_rootmap = $(bin)setup_post_merge_rootmap.make
#cmt_final_setup_post_merge_rootmap = $(bin)MuonMomentumCorrections_post_merge_rootmapsetup.make
cmt_local_post_merge_rootmap_makefile = $(bin)post_merge_rootmap.make

post_merge_rootmap_extratags = -tag_add=target_post_merge_rootmap

#$(cmt_local_tagfile_post_merge_rootmap) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_post_merge_rootmap) ::
else
$(cmt_local_tagfile_post_merge_rootmap) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_post_merge_rootmap); then /bin/rm -f $(cmt_local_tagfile_post_merge_rootmap); fi ; \
	  $(cmtexe) -tag=$(tags) $(post_merge_rootmap_extratags) build tag_makefile >>$(cmt_local_tagfile_post_merge_rootmap)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_post_merge_rootmap)"; \
	  test ! -f $(cmt_local_setup_post_merge_rootmap) || \rm -f $(cmt_local_setup_post_merge_rootmap); \
	  trap '\rm -f $(cmt_local_setup_post_merge_rootmap)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(post_merge_rootmap_extratags) show setup >$(cmt_local_setup_post_merge_rootmap) && \
	  if [ -f $(cmt_final_setup_post_merge_rootmap) ] && \
	    \cmp -s $(cmt_final_setup_post_merge_rootmap) $(cmt_local_setup_post_merge_rootmap); then \
	    \rm $(cmt_local_setup_post_merge_rootmap); else \
	    \mv -f $(cmt_local_setup_post_merge_rootmap) $(cmt_final_setup_post_merge_rootmap); fi

else

#cmt_local_tagfile_post_merge_rootmap = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_post_merge_rootmap = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_post_merge_rootmap = $(bin)setup.make
#cmt_final_setup_post_merge_rootmap = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_post_merge_rootmap_makefile = $(bin)post_merge_rootmap.make

endif

not_post_merge_rootmap_dependencies = { n=0; for p in $?; do m=0; for d in $(post_merge_rootmap_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
post_merge_rootmapdirs :
	@if test ! -d $(bin)post_merge_rootmap; then $(mkdir) -p $(bin)post_merge_rootmap; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)post_merge_rootmap
else
post_merge_rootmapdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# post_merge_rootmapdirs ::
#	@if test ! -d $(bin)post_merge_rootmap; then $(mkdir) -p $(bin)post_merge_rootmap; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)post_merge_rootmap
#
#$(cmt_local_post_merge_rootmap_makefile) :: $(post_merge_rootmap_dependencies) $(cmt_local_tagfile_post_merge_rootmap) build_library_links dirs post_merge_rootmapdirs
#else
#$(cmt_local_post_merge_rootmap_makefile) :: $(post_merge_rootmap_dependencies) $(cmt_local_tagfile_post_merge_rootmap) build_library_links dirs
#endif
#else
#$(cmt_local_post_merge_rootmap_makefile) :: $(cmt_local_tagfile_post_merge_rootmap)
#endif

ifdef cmt_post_merge_rootmap_has_target_tag

ifndef QUICK
$(cmt_local_post_merge_rootmap_makefile) : $(post_merge_rootmap_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_merge_rootmap.make"; \
	  $(cmtexe) -tag=$(tags) $(post_merge_rootmap_extratags) build constituent_config -out=$(cmt_local_post_merge_rootmap_makefile) post_merge_rootmap
else
$(cmt_local_post_merge_rootmap_makefile) : $(post_merge_rootmap_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_merge_rootmap) ] || \
	  [ ! -f $(cmt_final_setup_post_merge_rootmap) ] || \
	  $(not_post_merge_rootmap_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_merge_rootmap.make"; \
	  $(cmtexe) -tag=$(tags) $(post_merge_rootmap_extratags) build constituent_config -out=$(cmt_local_post_merge_rootmap_makefile) post_merge_rootmap; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_post_merge_rootmap_makefile) : $(post_merge_rootmap_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_merge_rootmap.make"; \
	  $(cmtexe) -f=$(bin)post_merge_rootmap.in -tag=$(tags) $(post_merge_rootmap_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_merge_rootmap_makefile) post_merge_rootmap
else
$(cmt_local_post_merge_rootmap_makefile) : $(post_merge_rootmap_dependencies) $(cmt_build_library_linksstamp) $(bin)post_merge_rootmap.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_merge_rootmap) ] || \
	  [ ! -f $(cmt_final_setup_post_merge_rootmap) ] || \
	  $(not_post_merge_rootmap_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_merge_rootmap.make"; \
	  $(cmtexe) -f=$(bin)post_merge_rootmap.in -tag=$(tags) $(post_merge_rootmap_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_merge_rootmap_makefile) post_merge_rootmap; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(post_merge_rootmap_extratags) build constituent_makefile -out=$(cmt_local_post_merge_rootmap_makefile) post_merge_rootmap

post_merge_rootmap :: $(post_merge_rootmap_dependencies) $(cmt_local_post_merge_rootmap_makefile) dirs post_merge_rootmapdirs
	$(echo) "(constituents.make) Starting post_merge_rootmap"
	@if test -f $(cmt_local_post_merge_rootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_post_merge_rootmap_makefile) post_merge_rootmap; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_merge_rootmap_makefile) post_merge_rootmap
	$(echo) "(constituents.make) post_merge_rootmap done"

clean :: post_merge_rootmapclean

post_merge_rootmapclean :: $(post_merge_rootmapclean_dependencies) ##$(cmt_local_post_merge_rootmap_makefile)
	$(echo) "(constituents.make) Starting post_merge_rootmapclean"
	@-if test -f $(cmt_local_post_merge_rootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_post_merge_rootmap_makefile) post_merge_rootmapclean; \
	fi
	$(echo) "(constituents.make) post_merge_rootmapclean done"
#	@-$(MAKE) -f $(cmt_local_post_merge_rootmap_makefile) post_merge_rootmapclean

##	  /bin/rm -f $(cmt_local_post_merge_rootmap_makefile) $(bin)post_merge_rootmap_dependencies.make

install :: post_merge_rootmapinstall

post_merge_rootmapinstall :: $(post_merge_rootmap_dependencies) $(cmt_local_post_merge_rootmap_makefile)
	$(echo) "(constituents.make) Starting install post_merge_rootmap"
	@-$(MAKE) -f $(cmt_local_post_merge_rootmap_makefile) install
	$(echo) "(constituents.make) install post_merge_rootmap done"

uninstall : post_merge_rootmapuninstall

$(foreach d,$(post_merge_rootmap_dependencies),$(eval $(d)uninstall_dependencies += post_merge_rootmapuninstall))

post_merge_rootmapuninstall : $(post_merge_rootmapuninstall_dependencies) ##$(cmt_local_post_merge_rootmap_makefile)
	$(echo) "(constituents.make) Starting uninstall post_merge_rootmap"
	@if test -f $(cmt_local_post_merge_rootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_post_merge_rootmap_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_merge_rootmap_makefile) uninstall
	$(echo) "(constituents.make) uninstall post_merge_rootmap done"

remove_library_links :: post_merge_rootmapuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ post_merge_rootmap"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ post_merge_rootmap done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_post_merge_genconfdb_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_post_merge_genconfdb_has_target_tag

#cmt_local_tagfile_post_merge_genconfdb = $(MuonMomentumCorrections_tag)_post_merge_genconfdb.make
cmt_local_tagfile_post_merge_genconfdb = $(bin)$(MuonMomentumCorrections_tag)_post_merge_genconfdb.make
cmt_local_setup_post_merge_genconfdb = $(bin)setup_post_merge_genconfdb$$$$.make
cmt_final_setup_post_merge_genconfdb = $(bin)setup_post_merge_genconfdb.make
#cmt_final_setup_post_merge_genconfdb = $(bin)MuonMomentumCorrections_post_merge_genconfdbsetup.make
cmt_local_post_merge_genconfdb_makefile = $(bin)post_merge_genconfdb.make

post_merge_genconfdb_extratags = -tag_add=target_post_merge_genconfdb

#$(cmt_local_tagfile_post_merge_genconfdb) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_post_merge_genconfdb) ::
else
$(cmt_local_tagfile_post_merge_genconfdb) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_post_merge_genconfdb); then /bin/rm -f $(cmt_local_tagfile_post_merge_genconfdb); fi ; \
	  $(cmtexe) -tag=$(tags) $(post_merge_genconfdb_extratags) build tag_makefile >>$(cmt_local_tagfile_post_merge_genconfdb)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_post_merge_genconfdb)"; \
	  test ! -f $(cmt_local_setup_post_merge_genconfdb) || \rm -f $(cmt_local_setup_post_merge_genconfdb); \
	  trap '\rm -f $(cmt_local_setup_post_merge_genconfdb)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(post_merge_genconfdb_extratags) show setup >$(cmt_local_setup_post_merge_genconfdb) && \
	  if [ -f $(cmt_final_setup_post_merge_genconfdb) ] && \
	    \cmp -s $(cmt_final_setup_post_merge_genconfdb) $(cmt_local_setup_post_merge_genconfdb); then \
	    \rm $(cmt_local_setup_post_merge_genconfdb); else \
	    \mv -f $(cmt_local_setup_post_merge_genconfdb) $(cmt_final_setup_post_merge_genconfdb); fi

else

#cmt_local_tagfile_post_merge_genconfdb = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_post_merge_genconfdb = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_post_merge_genconfdb = $(bin)setup.make
#cmt_final_setup_post_merge_genconfdb = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_post_merge_genconfdb_makefile = $(bin)post_merge_genconfdb.make

endif

not_post_merge_genconfdb_dependencies = { n=0; for p in $?; do m=0; for d in $(post_merge_genconfdb_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
post_merge_genconfdbdirs :
	@if test ! -d $(bin)post_merge_genconfdb; then $(mkdir) -p $(bin)post_merge_genconfdb; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)post_merge_genconfdb
else
post_merge_genconfdbdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# post_merge_genconfdbdirs ::
#	@if test ! -d $(bin)post_merge_genconfdb; then $(mkdir) -p $(bin)post_merge_genconfdb; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)post_merge_genconfdb
#
#$(cmt_local_post_merge_genconfdb_makefile) :: $(post_merge_genconfdb_dependencies) $(cmt_local_tagfile_post_merge_genconfdb) build_library_links dirs post_merge_genconfdbdirs
#else
#$(cmt_local_post_merge_genconfdb_makefile) :: $(post_merge_genconfdb_dependencies) $(cmt_local_tagfile_post_merge_genconfdb) build_library_links dirs
#endif
#else
#$(cmt_local_post_merge_genconfdb_makefile) :: $(cmt_local_tagfile_post_merge_genconfdb)
#endif

ifdef cmt_post_merge_genconfdb_has_target_tag

ifndef QUICK
$(cmt_local_post_merge_genconfdb_makefile) : $(post_merge_genconfdb_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_merge_genconfdb.make"; \
	  $(cmtexe) -tag=$(tags) $(post_merge_genconfdb_extratags) build constituent_config -out=$(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdb
else
$(cmt_local_post_merge_genconfdb_makefile) : $(post_merge_genconfdb_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_merge_genconfdb) ] || \
	  [ ! -f $(cmt_final_setup_post_merge_genconfdb) ] || \
	  $(not_post_merge_genconfdb_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_merge_genconfdb.make"; \
	  $(cmtexe) -tag=$(tags) $(post_merge_genconfdb_extratags) build constituent_config -out=$(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdb; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_post_merge_genconfdb_makefile) : $(post_merge_genconfdb_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_merge_genconfdb.make"; \
	  $(cmtexe) -f=$(bin)post_merge_genconfdb.in -tag=$(tags) $(post_merge_genconfdb_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdb
else
$(cmt_local_post_merge_genconfdb_makefile) : $(post_merge_genconfdb_dependencies) $(cmt_build_library_linksstamp) $(bin)post_merge_genconfdb.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_merge_genconfdb) ] || \
	  [ ! -f $(cmt_final_setup_post_merge_genconfdb) ] || \
	  $(not_post_merge_genconfdb_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_merge_genconfdb.make"; \
	  $(cmtexe) -f=$(bin)post_merge_genconfdb.in -tag=$(tags) $(post_merge_genconfdb_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdb; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(post_merge_genconfdb_extratags) build constituent_makefile -out=$(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdb

post_merge_genconfdb :: $(post_merge_genconfdb_dependencies) $(cmt_local_post_merge_genconfdb_makefile) dirs post_merge_genconfdbdirs
	$(echo) "(constituents.make) Starting post_merge_genconfdb"
	@if test -f $(cmt_local_post_merge_genconfdb_makefile); then \
	  $(MAKE) -f $(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdb; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdb
	$(echo) "(constituents.make) post_merge_genconfdb done"

clean :: post_merge_genconfdbclean

post_merge_genconfdbclean :: $(post_merge_genconfdbclean_dependencies) ##$(cmt_local_post_merge_genconfdb_makefile)
	$(echo) "(constituents.make) Starting post_merge_genconfdbclean"
	@-if test -f $(cmt_local_post_merge_genconfdb_makefile); then \
	  $(MAKE) -f $(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdbclean; \
	fi
	$(echo) "(constituents.make) post_merge_genconfdbclean done"
#	@-$(MAKE) -f $(cmt_local_post_merge_genconfdb_makefile) post_merge_genconfdbclean

##	  /bin/rm -f $(cmt_local_post_merge_genconfdb_makefile) $(bin)post_merge_genconfdb_dependencies.make

install :: post_merge_genconfdbinstall

post_merge_genconfdbinstall :: $(post_merge_genconfdb_dependencies) $(cmt_local_post_merge_genconfdb_makefile)
	$(echo) "(constituents.make) Starting install post_merge_genconfdb"
	@-$(MAKE) -f $(cmt_local_post_merge_genconfdb_makefile) install
	$(echo) "(constituents.make) install post_merge_genconfdb done"

uninstall : post_merge_genconfdbuninstall

$(foreach d,$(post_merge_genconfdb_dependencies),$(eval $(d)uninstall_dependencies += post_merge_genconfdbuninstall))

post_merge_genconfdbuninstall : $(post_merge_genconfdbuninstall_dependencies) ##$(cmt_local_post_merge_genconfdb_makefile)
	$(echo) "(constituents.make) Starting uninstall post_merge_genconfdb"
	@if test -f $(cmt_local_post_merge_genconfdb_makefile); then \
	  $(MAKE) -f $(cmt_local_post_merge_genconfdb_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_merge_genconfdb_makefile) uninstall
	$(echo) "(constituents.make) uninstall post_merge_genconfdb done"

remove_library_links :: post_merge_genconfdbuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ post_merge_genconfdb"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ post_merge_genconfdb done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_post_build_tpcnvdb_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_post_build_tpcnvdb_has_target_tag

#cmt_local_tagfile_post_build_tpcnvdb = $(MuonMomentumCorrections_tag)_post_build_tpcnvdb.make
cmt_local_tagfile_post_build_tpcnvdb = $(bin)$(MuonMomentumCorrections_tag)_post_build_tpcnvdb.make
cmt_local_setup_post_build_tpcnvdb = $(bin)setup_post_build_tpcnvdb$$$$.make
cmt_final_setup_post_build_tpcnvdb = $(bin)setup_post_build_tpcnvdb.make
#cmt_final_setup_post_build_tpcnvdb = $(bin)MuonMomentumCorrections_post_build_tpcnvdbsetup.make
cmt_local_post_build_tpcnvdb_makefile = $(bin)post_build_tpcnvdb.make

post_build_tpcnvdb_extratags = -tag_add=target_post_build_tpcnvdb

#$(cmt_local_tagfile_post_build_tpcnvdb) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_post_build_tpcnvdb) ::
else
$(cmt_local_tagfile_post_build_tpcnvdb) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_post_build_tpcnvdb); then /bin/rm -f $(cmt_local_tagfile_post_build_tpcnvdb); fi ; \
	  $(cmtexe) -tag=$(tags) $(post_build_tpcnvdb_extratags) build tag_makefile >>$(cmt_local_tagfile_post_build_tpcnvdb)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_post_build_tpcnvdb)"; \
	  test ! -f $(cmt_local_setup_post_build_tpcnvdb) || \rm -f $(cmt_local_setup_post_build_tpcnvdb); \
	  trap '\rm -f $(cmt_local_setup_post_build_tpcnvdb)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(post_build_tpcnvdb_extratags) show setup >$(cmt_local_setup_post_build_tpcnvdb) && \
	  if [ -f $(cmt_final_setup_post_build_tpcnvdb) ] && \
	    \cmp -s $(cmt_final_setup_post_build_tpcnvdb) $(cmt_local_setup_post_build_tpcnvdb); then \
	    \rm $(cmt_local_setup_post_build_tpcnvdb); else \
	    \mv -f $(cmt_local_setup_post_build_tpcnvdb) $(cmt_final_setup_post_build_tpcnvdb); fi

else

#cmt_local_tagfile_post_build_tpcnvdb = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_post_build_tpcnvdb = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_post_build_tpcnvdb = $(bin)setup.make
#cmt_final_setup_post_build_tpcnvdb = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_post_build_tpcnvdb_makefile = $(bin)post_build_tpcnvdb.make

endif

not_post_build_tpcnvdb_dependencies = { n=0; for p in $?; do m=0; for d in $(post_build_tpcnvdb_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
post_build_tpcnvdbdirs :
	@if test ! -d $(bin)post_build_tpcnvdb; then $(mkdir) -p $(bin)post_build_tpcnvdb; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)post_build_tpcnvdb
else
post_build_tpcnvdbdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# post_build_tpcnvdbdirs ::
#	@if test ! -d $(bin)post_build_tpcnvdb; then $(mkdir) -p $(bin)post_build_tpcnvdb; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)post_build_tpcnvdb
#
#$(cmt_local_post_build_tpcnvdb_makefile) :: $(post_build_tpcnvdb_dependencies) $(cmt_local_tagfile_post_build_tpcnvdb) build_library_links dirs post_build_tpcnvdbdirs
#else
#$(cmt_local_post_build_tpcnvdb_makefile) :: $(post_build_tpcnvdb_dependencies) $(cmt_local_tagfile_post_build_tpcnvdb) build_library_links dirs
#endif
#else
#$(cmt_local_post_build_tpcnvdb_makefile) :: $(cmt_local_tagfile_post_build_tpcnvdb)
#endif

ifdef cmt_post_build_tpcnvdb_has_target_tag

ifndef QUICK
$(cmt_local_post_build_tpcnvdb_makefile) : $(post_build_tpcnvdb_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_build_tpcnvdb.make"; \
	  $(cmtexe) -tag=$(tags) $(post_build_tpcnvdb_extratags) build constituent_config -out=$(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdb
else
$(cmt_local_post_build_tpcnvdb_makefile) : $(post_build_tpcnvdb_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_build_tpcnvdb) ] || \
	  [ ! -f $(cmt_final_setup_post_build_tpcnvdb) ] || \
	  $(not_post_build_tpcnvdb_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_build_tpcnvdb.make"; \
	  $(cmtexe) -tag=$(tags) $(post_build_tpcnvdb_extratags) build constituent_config -out=$(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdb; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_post_build_tpcnvdb_makefile) : $(post_build_tpcnvdb_dependencies) build_library_links
	$(echo) "(constituents.make) Building post_build_tpcnvdb.make"; \
	  $(cmtexe) -f=$(bin)post_build_tpcnvdb.in -tag=$(tags) $(post_build_tpcnvdb_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdb
else
$(cmt_local_post_build_tpcnvdb_makefile) : $(post_build_tpcnvdb_dependencies) $(cmt_build_library_linksstamp) $(bin)post_build_tpcnvdb.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_post_build_tpcnvdb) ] || \
	  [ ! -f $(cmt_final_setup_post_build_tpcnvdb) ] || \
	  $(not_post_build_tpcnvdb_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building post_build_tpcnvdb.make"; \
	  $(cmtexe) -f=$(bin)post_build_tpcnvdb.in -tag=$(tags) $(post_build_tpcnvdb_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdb; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(post_build_tpcnvdb_extratags) build constituent_makefile -out=$(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdb

post_build_tpcnvdb :: $(post_build_tpcnvdb_dependencies) $(cmt_local_post_build_tpcnvdb_makefile) dirs post_build_tpcnvdbdirs
	$(echo) "(constituents.make) Starting post_build_tpcnvdb"
	@if test -f $(cmt_local_post_build_tpcnvdb_makefile); then \
	  $(MAKE) -f $(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdb; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdb
	$(echo) "(constituents.make) post_build_tpcnvdb done"

clean :: post_build_tpcnvdbclean

post_build_tpcnvdbclean :: $(post_build_tpcnvdbclean_dependencies) ##$(cmt_local_post_build_tpcnvdb_makefile)
	$(echo) "(constituents.make) Starting post_build_tpcnvdbclean"
	@-if test -f $(cmt_local_post_build_tpcnvdb_makefile); then \
	  $(MAKE) -f $(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdbclean; \
	fi
	$(echo) "(constituents.make) post_build_tpcnvdbclean done"
#	@-$(MAKE) -f $(cmt_local_post_build_tpcnvdb_makefile) post_build_tpcnvdbclean

##	  /bin/rm -f $(cmt_local_post_build_tpcnvdb_makefile) $(bin)post_build_tpcnvdb_dependencies.make

install :: post_build_tpcnvdbinstall

post_build_tpcnvdbinstall :: $(post_build_tpcnvdb_dependencies) $(cmt_local_post_build_tpcnvdb_makefile)
	$(echo) "(constituents.make) Starting install post_build_tpcnvdb"
	@-$(MAKE) -f $(cmt_local_post_build_tpcnvdb_makefile) install
	$(echo) "(constituents.make) install post_build_tpcnvdb done"

uninstall : post_build_tpcnvdbuninstall

$(foreach d,$(post_build_tpcnvdb_dependencies),$(eval $(d)uninstall_dependencies += post_build_tpcnvdbuninstall))

post_build_tpcnvdbuninstall : $(post_build_tpcnvdbuninstall_dependencies) ##$(cmt_local_post_build_tpcnvdb_makefile)
	$(echo) "(constituents.make) Starting uninstall post_build_tpcnvdb"
	@if test -f $(cmt_local_post_build_tpcnvdb_makefile); then \
	  $(MAKE) -f $(cmt_local_post_build_tpcnvdb_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_post_build_tpcnvdb_makefile) uninstall
	$(echo) "(constituents.make) uninstall post_build_tpcnvdb done"

remove_library_links :: post_build_tpcnvdbuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ post_build_tpcnvdb"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ post_build_tpcnvdb done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_all_post_constituents_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_all_post_constituents_has_target_tag

#cmt_local_tagfile_all_post_constituents = $(MuonMomentumCorrections_tag)_all_post_constituents.make
cmt_local_tagfile_all_post_constituents = $(bin)$(MuonMomentumCorrections_tag)_all_post_constituents.make
cmt_local_setup_all_post_constituents = $(bin)setup_all_post_constituents$$$$.make
cmt_final_setup_all_post_constituents = $(bin)setup_all_post_constituents.make
#cmt_final_setup_all_post_constituents = $(bin)MuonMomentumCorrections_all_post_constituentssetup.make
cmt_local_all_post_constituents_makefile = $(bin)all_post_constituents.make

all_post_constituents_extratags = -tag_add=target_all_post_constituents

#$(cmt_local_tagfile_all_post_constituents) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_all_post_constituents) ::
else
$(cmt_local_tagfile_all_post_constituents) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_all_post_constituents); then /bin/rm -f $(cmt_local_tagfile_all_post_constituents); fi ; \
	  $(cmtexe) -tag=$(tags) $(all_post_constituents_extratags) build tag_makefile >>$(cmt_local_tagfile_all_post_constituents)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_all_post_constituents)"; \
	  test ! -f $(cmt_local_setup_all_post_constituents) || \rm -f $(cmt_local_setup_all_post_constituents); \
	  trap '\rm -f $(cmt_local_setup_all_post_constituents)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(all_post_constituents_extratags) show setup >$(cmt_local_setup_all_post_constituents) && \
	  if [ -f $(cmt_final_setup_all_post_constituents) ] && \
	    \cmp -s $(cmt_final_setup_all_post_constituents) $(cmt_local_setup_all_post_constituents); then \
	    \rm $(cmt_local_setup_all_post_constituents); else \
	    \mv -f $(cmt_local_setup_all_post_constituents) $(cmt_final_setup_all_post_constituents); fi

else

#cmt_local_tagfile_all_post_constituents = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_all_post_constituents = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_all_post_constituents = $(bin)setup.make
#cmt_final_setup_all_post_constituents = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_all_post_constituents_makefile = $(bin)all_post_constituents.make

endif

not_all_post_constituents_dependencies = { n=0; for p in $?; do m=0; for d in $(all_post_constituents_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
all_post_constituentsdirs :
	@if test ! -d $(bin)all_post_constituents; then $(mkdir) -p $(bin)all_post_constituents; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)all_post_constituents
else
all_post_constituentsdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# all_post_constituentsdirs ::
#	@if test ! -d $(bin)all_post_constituents; then $(mkdir) -p $(bin)all_post_constituents; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)all_post_constituents
#
#$(cmt_local_all_post_constituents_makefile) :: $(all_post_constituents_dependencies) $(cmt_local_tagfile_all_post_constituents) build_library_links dirs all_post_constituentsdirs
#else
#$(cmt_local_all_post_constituents_makefile) :: $(all_post_constituents_dependencies) $(cmt_local_tagfile_all_post_constituents) build_library_links dirs
#endif
#else
#$(cmt_local_all_post_constituents_makefile) :: $(cmt_local_tagfile_all_post_constituents)
#endif

ifdef cmt_all_post_constituents_has_target_tag

ifndef QUICK
$(cmt_local_all_post_constituents_makefile) : $(all_post_constituents_dependencies) build_library_links
	$(echo) "(constituents.make) Building all_post_constituents.make"; \
	  $(cmtexe) -tag=$(tags) $(all_post_constituents_extratags) build constituent_config -out=$(cmt_local_all_post_constituents_makefile) all_post_constituents
else
$(cmt_local_all_post_constituents_makefile) : $(all_post_constituents_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_all_post_constituents) ] || \
	  [ ! -f $(cmt_final_setup_all_post_constituents) ] || \
	  $(not_all_post_constituents_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building all_post_constituents.make"; \
	  $(cmtexe) -tag=$(tags) $(all_post_constituents_extratags) build constituent_config -out=$(cmt_local_all_post_constituents_makefile) all_post_constituents; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_all_post_constituents_makefile) : $(all_post_constituents_dependencies) build_library_links
	$(echo) "(constituents.make) Building all_post_constituents.make"; \
	  $(cmtexe) -f=$(bin)all_post_constituents.in -tag=$(tags) $(all_post_constituents_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_all_post_constituents_makefile) all_post_constituents
else
$(cmt_local_all_post_constituents_makefile) : $(all_post_constituents_dependencies) $(cmt_build_library_linksstamp) $(bin)all_post_constituents.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_all_post_constituents) ] || \
	  [ ! -f $(cmt_final_setup_all_post_constituents) ] || \
	  $(not_all_post_constituents_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building all_post_constituents.make"; \
	  $(cmtexe) -f=$(bin)all_post_constituents.in -tag=$(tags) $(all_post_constituents_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_all_post_constituents_makefile) all_post_constituents; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(all_post_constituents_extratags) build constituent_makefile -out=$(cmt_local_all_post_constituents_makefile) all_post_constituents

all_post_constituents :: $(all_post_constituents_dependencies) $(cmt_local_all_post_constituents_makefile) dirs all_post_constituentsdirs
	$(echo) "(constituents.make) Starting all_post_constituents"
	@if test -f $(cmt_local_all_post_constituents_makefile); then \
	  $(MAKE) -f $(cmt_local_all_post_constituents_makefile) all_post_constituents; \
	  fi
#	@$(MAKE) -f $(cmt_local_all_post_constituents_makefile) all_post_constituents
	$(echo) "(constituents.make) all_post_constituents done"

clean :: all_post_constituentsclean

all_post_constituentsclean :: $(all_post_constituentsclean_dependencies) ##$(cmt_local_all_post_constituents_makefile)
	$(echo) "(constituents.make) Starting all_post_constituentsclean"
	@-if test -f $(cmt_local_all_post_constituents_makefile); then \
	  $(MAKE) -f $(cmt_local_all_post_constituents_makefile) all_post_constituentsclean; \
	fi
	$(echo) "(constituents.make) all_post_constituentsclean done"
#	@-$(MAKE) -f $(cmt_local_all_post_constituents_makefile) all_post_constituentsclean

##	  /bin/rm -f $(cmt_local_all_post_constituents_makefile) $(bin)all_post_constituents_dependencies.make

install :: all_post_constituentsinstall

all_post_constituentsinstall :: $(all_post_constituents_dependencies) $(cmt_local_all_post_constituents_makefile)
	$(echo) "(constituents.make) Starting install all_post_constituents"
	@-$(MAKE) -f $(cmt_local_all_post_constituents_makefile) install
	$(echo) "(constituents.make) install all_post_constituents done"

uninstall : all_post_constituentsuninstall

$(foreach d,$(all_post_constituents_dependencies),$(eval $(d)uninstall_dependencies += all_post_constituentsuninstall))

all_post_constituentsuninstall : $(all_post_constituentsuninstall_dependencies) ##$(cmt_local_all_post_constituents_makefile)
	$(echo) "(constituents.make) Starting uninstall all_post_constituents"
	@if test -f $(cmt_local_all_post_constituents_makefile); then \
	  $(MAKE) -f $(cmt_local_all_post_constituents_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_all_post_constituents_makefile) uninstall
	$(echo) "(constituents.make) uninstall all_post_constituents done"

remove_library_links :: all_post_constituentsuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ all_post_constituents"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ all_post_constituents done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_SLC4_Compat_install_action_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_SLC4_Compat_install_action_has_target_tag

#cmt_local_tagfile_SLC4_Compat_install_action = $(MuonMomentumCorrections_tag)_SLC4_Compat_install_action.make
cmt_local_tagfile_SLC4_Compat_install_action = $(bin)$(MuonMomentumCorrections_tag)_SLC4_Compat_install_action.make
cmt_local_setup_SLC4_Compat_install_action = $(bin)setup_SLC4_Compat_install_action$$$$.make
cmt_final_setup_SLC4_Compat_install_action = $(bin)setup_SLC4_Compat_install_action.make
#cmt_final_setup_SLC4_Compat_install_action = $(bin)MuonMomentumCorrections_SLC4_Compat_install_actionsetup.make
cmt_local_SLC4_Compat_install_action_makefile = $(bin)SLC4_Compat_install_action.make

SLC4_Compat_install_action_extratags = -tag_add=target_SLC4_Compat_install_action

#$(cmt_local_tagfile_SLC4_Compat_install_action) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_SLC4_Compat_install_action) ::
else
$(cmt_local_tagfile_SLC4_Compat_install_action) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_SLC4_Compat_install_action); then /bin/rm -f $(cmt_local_tagfile_SLC4_Compat_install_action); fi ; \
	  $(cmtexe) -tag=$(tags) $(SLC4_Compat_install_action_extratags) build tag_makefile >>$(cmt_local_tagfile_SLC4_Compat_install_action)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_SLC4_Compat_install_action)"; \
	  test ! -f $(cmt_local_setup_SLC4_Compat_install_action) || \rm -f $(cmt_local_setup_SLC4_Compat_install_action); \
	  trap '\rm -f $(cmt_local_setup_SLC4_Compat_install_action)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(SLC4_Compat_install_action_extratags) show setup >$(cmt_local_setup_SLC4_Compat_install_action) && \
	  if [ -f $(cmt_final_setup_SLC4_Compat_install_action) ] && \
	    \cmp -s $(cmt_final_setup_SLC4_Compat_install_action) $(cmt_local_setup_SLC4_Compat_install_action); then \
	    \rm $(cmt_local_setup_SLC4_Compat_install_action); else \
	    \mv -f $(cmt_local_setup_SLC4_Compat_install_action) $(cmt_final_setup_SLC4_Compat_install_action); fi

else

#cmt_local_tagfile_SLC4_Compat_install_action = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_SLC4_Compat_install_action = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_SLC4_Compat_install_action = $(bin)setup.make
#cmt_final_setup_SLC4_Compat_install_action = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_SLC4_Compat_install_action_makefile = $(bin)SLC4_Compat_install_action.make

endif

not_SLC4_Compat_install_action_dependencies = { n=0; for p in $?; do m=0; for d in $(SLC4_Compat_install_action_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
SLC4_Compat_install_actiondirs :
	@if test ! -d $(bin)SLC4_Compat_install_action; then $(mkdir) -p $(bin)SLC4_Compat_install_action; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)SLC4_Compat_install_action
else
SLC4_Compat_install_actiondirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# SLC4_Compat_install_actiondirs ::
#	@if test ! -d $(bin)SLC4_Compat_install_action; then $(mkdir) -p $(bin)SLC4_Compat_install_action; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)SLC4_Compat_install_action
#
#$(cmt_local_SLC4_Compat_install_action_makefile) :: $(SLC4_Compat_install_action_dependencies) $(cmt_local_tagfile_SLC4_Compat_install_action) build_library_links dirs SLC4_Compat_install_actiondirs
#else
#$(cmt_local_SLC4_Compat_install_action_makefile) :: $(SLC4_Compat_install_action_dependencies) $(cmt_local_tagfile_SLC4_Compat_install_action) build_library_links dirs
#endif
#else
#$(cmt_local_SLC4_Compat_install_action_makefile) :: $(cmt_local_tagfile_SLC4_Compat_install_action)
#endif

ifdef cmt_SLC4_Compat_install_action_has_target_tag

ifndef QUICK
$(cmt_local_SLC4_Compat_install_action_makefile) : $(SLC4_Compat_install_action_dependencies) build_library_links
	$(echo) "(constituents.make) Building SLC4_Compat_install_action.make"; \
	  $(cmtexe) -tag=$(tags) $(SLC4_Compat_install_action_extratags) build constituent_config -out=$(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_action
else
$(cmt_local_SLC4_Compat_install_action_makefile) : $(SLC4_Compat_install_action_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_SLC4_Compat_install_action) ] || \
	  [ ! -f $(cmt_final_setup_SLC4_Compat_install_action) ] || \
	  $(not_SLC4_Compat_install_action_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building SLC4_Compat_install_action.make"; \
	  $(cmtexe) -tag=$(tags) $(SLC4_Compat_install_action_extratags) build constituent_config -out=$(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_action; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_SLC4_Compat_install_action_makefile) : $(SLC4_Compat_install_action_dependencies) build_library_links
	$(echo) "(constituents.make) Building SLC4_Compat_install_action.make"; \
	  $(cmtexe) -f=$(bin)SLC4_Compat_install_action.in -tag=$(tags) $(SLC4_Compat_install_action_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_action
else
$(cmt_local_SLC4_Compat_install_action_makefile) : $(SLC4_Compat_install_action_dependencies) $(cmt_build_library_linksstamp) $(bin)SLC4_Compat_install_action.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_SLC4_Compat_install_action) ] || \
	  [ ! -f $(cmt_final_setup_SLC4_Compat_install_action) ] || \
	  $(not_SLC4_Compat_install_action_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building SLC4_Compat_install_action.make"; \
	  $(cmtexe) -f=$(bin)SLC4_Compat_install_action.in -tag=$(tags) $(SLC4_Compat_install_action_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_action; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(SLC4_Compat_install_action_extratags) build constituent_makefile -out=$(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_action

SLC4_Compat_install_action :: $(SLC4_Compat_install_action_dependencies) $(cmt_local_SLC4_Compat_install_action_makefile) dirs SLC4_Compat_install_actiondirs
	$(echo) "(constituents.make) Starting SLC4_Compat_install_action"
	@if test -f $(cmt_local_SLC4_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_action; \
	  fi
#	@$(MAKE) -f $(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_action
	$(echo) "(constituents.make) SLC4_Compat_install_action done"

clean :: SLC4_Compat_install_actionclean

SLC4_Compat_install_actionclean :: $(SLC4_Compat_install_actionclean_dependencies) ##$(cmt_local_SLC4_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting SLC4_Compat_install_actionclean"
	@-if test -f $(cmt_local_SLC4_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_actionclean; \
	fi
	$(echo) "(constituents.make) SLC4_Compat_install_actionclean done"
#	@-$(MAKE) -f $(cmt_local_SLC4_Compat_install_action_makefile) SLC4_Compat_install_actionclean

##	  /bin/rm -f $(cmt_local_SLC4_Compat_install_action_makefile) $(bin)SLC4_Compat_install_action_dependencies.make

install :: SLC4_Compat_install_actioninstall

SLC4_Compat_install_actioninstall :: $(SLC4_Compat_install_action_dependencies) $(cmt_local_SLC4_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting install SLC4_Compat_install_action"
	@-$(MAKE) -f $(cmt_local_SLC4_Compat_install_action_makefile) install
	$(echo) "(constituents.make) install SLC4_Compat_install_action done"

uninstall : SLC4_Compat_install_actionuninstall

$(foreach d,$(SLC4_Compat_install_action_dependencies),$(eval $(d)uninstall_dependencies += SLC4_Compat_install_actionuninstall))

SLC4_Compat_install_actionuninstall : $(SLC4_Compat_install_actionuninstall_dependencies) ##$(cmt_local_SLC4_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting uninstall SLC4_Compat_install_action"
	@if test -f $(cmt_local_SLC4_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_SLC4_Compat_install_action_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_SLC4_Compat_install_action_makefile) uninstall
	$(echo) "(constituents.make) uninstall SLC4_Compat_install_action done"

remove_library_links :: SLC4_Compat_install_actionuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ SLC4_Compat_install_action"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ SLC4_Compat_install_action done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_SLC5_Compat_install_action_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_SLC5_Compat_install_action_has_target_tag

#cmt_local_tagfile_SLC5_Compat_install_action = $(MuonMomentumCorrections_tag)_SLC5_Compat_install_action.make
cmt_local_tagfile_SLC5_Compat_install_action = $(bin)$(MuonMomentumCorrections_tag)_SLC5_Compat_install_action.make
cmt_local_setup_SLC5_Compat_install_action = $(bin)setup_SLC5_Compat_install_action$$$$.make
cmt_final_setup_SLC5_Compat_install_action = $(bin)setup_SLC5_Compat_install_action.make
#cmt_final_setup_SLC5_Compat_install_action = $(bin)MuonMomentumCorrections_SLC5_Compat_install_actionsetup.make
cmt_local_SLC5_Compat_install_action_makefile = $(bin)SLC5_Compat_install_action.make

SLC5_Compat_install_action_extratags = -tag_add=target_SLC5_Compat_install_action

#$(cmt_local_tagfile_SLC5_Compat_install_action) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_SLC5_Compat_install_action) ::
else
$(cmt_local_tagfile_SLC5_Compat_install_action) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_SLC5_Compat_install_action); then /bin/rm -f $(cmt_local_tagfile_SLC5_Compat_install_action); fi ; \
	  $(cmtexe) -tag=$(tags) $(SLC5_Compat_install_action_extratags) build tag_makefile >>$(cmt_local_tagfile_SLC5_Compat_install_action)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_SLC5_Compat_install_action)"; \
	  test ! -f $(cmt_local_setup_SLC5_Compat_install_action) || \rm -f $(cmt_local_setup_SLC5_Compat_install_action); \
	  trap '\rm -f $(cmt_local_setup_SLC5_Compat_install_action)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(SLC5_Compat_install_action_extratags) show setup >$(cmt_local_setup_SLC5_Compat_install_action) && \
	  if [ -f $(cmt_final_setup_SLC5_Compat_install_action) ] && \
	    \cmp -s $(cmt_final_setup_SLC5_Compat_install_action) $(cmt_local_setup_SLC5_Compat_install_action); then \
	    \rm $(cmt_local_setup_SLC5_Compat_install_action); else \
	    \mv -f $(cmt_local_setup_SLC5_Compat_install_action) $(cmt_final_setup_SLC5_Compat_install_action); fi

else

#cmt_local_tagfile_SLC5_Compat_install_action = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_SLC5_Compat_install_action = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_SLC5_Compat_install_action = $(bin)setup.make
#cmt_final_setup_SLC5_Compat_install_action = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_SLC5_Compat_install_action_makefile = $(bin)SLC5_Compat_install_action.make

endif

not_SLC5_Compat_install_action_dependencies = { n=0; for p in $?; do m=0; for d in $(SLC5_Compat_install_action_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
SLC5_Compat_install_actiondirs :
	@if test ! -d $(bin)SLC5_Compat_install_action; then $(mkdir) -p $(bin)SLC5_Compat_install_action; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)SLC5_Compat_install_action
else
SLC5_Compat_install_actiondirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# SLC5_Compat_install_actiondirs ::
#	@if test ! -d $(bin)SLC5_Compat_install_action; then $(mkdir) -p $(bin)SLC5_Compat_install_action; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)SLC5_Compat_install_action
#
#$(cmt_local_SLC5_Compat_install_action_makefile) :: $(SLC5_Compat_install_action_dependencies) $(cmt_local_tagfile_SLC5_Compat_install_action) build_library_links dirs SLC5_Compat_install_actiondirs
#else
#$(cmt_local_SLC5_Compat_install_action_makefile) :: $(SLC5_Compat_install_action_dependencies) $(cmt_local_tagfile_SLC5_Compat_install_action) build_library_links dirs
#endif
#else
#$(cmt_local_SLC5_Compat_install_action_makefile) :: $(cmt_local_tagfile_SLC5_Compat_install_action)
#endif

ifdef cmt_SLC5_Compat_install_action_has_target_tag

ifndef QUICK
$(cmt_local_SLC5_Compat_install_action_makefile) : $(SLC5_Compat_install_action_dependencies) build_library_links
	$(echo) "(constituents.make) Building SLC5_Compat_install_action.make"; \
	  $(cmtexe) -tag=$(tags) $(SLC5_Compat_install_action_extratags) build constituent_config -out=$(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_action
else
$(cmt_local_SLC5_Compat_install_action_makefile) : $(SLC5_Compat_install_action_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_SLC5_Compat_install_action) ] || \
	  [ ! -f $(cmt_final_setup_SLC5_Compat_install_action) ] || \
	  $(not_SLC5_Compat_install_action_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building SLC5_Compat_install_action.make"; \
	  $(cmtexe) -tag=$(tags) $(SLC5_Compat_install_action_extratags) build constituent_config -out=$(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_action; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_SLC5_Compat_install_action_makefile) : $(SLC5_Compat_install_action_dependencies) build_library_links
	$(echo) "(constituents.make) Building SLC5_Compat_install_action.make"; \
	  $(cmtexe) -f=$(bin)SLC5_Compat_install_action.in -tag=$(tags) $(SLC5_Compat_install_action_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_action
else
$(cmt_local_SLC5_Compat_install_action_makefile) : $(SLC5_Compat_install_action_dependencies) $(cmt_build_library_linksstamp) $(bin)SLC5_Compat_install_action.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_SLC5_Compat_install_action) ] || \
	  [ ! -f $(cmt_final_setup_SLC5_Compat_install_action) ] || \
	  $(not_SLC5_Compat_install_action_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building SLC5_Compat_install_action.make"; \
	  $(cmtexe) -f=$(bin)SLC5_Compat_install_action.in -tag=$(tags) $(SLC5_Compat_install_action_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_action; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(SLC5_Compat_install_action_extratags) build constituent_makefile -out=$(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_action

SLC5_Compat_install_action :: $(SLC5_Compat_install_action_dependencies) $(cmt_local_SLC5_Compat_install_action_makefile) dirs SLC5_Compat_install_actiondirs
	$(echo) "(constituents.make) Starting SLC5_Compat_install_action"
	@if test -f $(cmt_local_SLC5_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_action; \
	  fi
#	@$(MAKE) -f $(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_action
	$(echo) "(constituents.make) SLC5_Compat_install_action done"

clean :: SLC5_Compat_install_actionclean

SLC5_Compat_install_actionclean :: $(SLC5_Compat_install_actionclean_dependencies) ##$(cmt_local_SLC5_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting SLC5_Compat_install_actionclean"
	@-if test -f $(cmt_local_SLC5_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_actionclean; \
	fi
	$(echo) "(constituents.make) SLC5_Compat_install_actionclean done"
#	@-$(MAKE) -f $(cmt_local_SLC5_Compat_install_action_makefile) SLC5_Compat_install_actionclean

##	  /bin/rm -f $(cmt_local_SLC5_Compat_install_action_makefile) $(bin)SLC5_Compat_install_action_dependencies.make

install :: SLC5_Compat_install_actioninstall

SLC5_Compat_install_actioninstall :: $(SLC5_Compat_install_action_dependencies) $(cmt_local_SLC5_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting install SLC5_Compat_install_action"
	@-$(MAKE) -f $(cmt_local_SLC5_Compat_install_action_makefile) install
	$(echo) "(constituents.make) install SLC5_Compat_install_action done"

uninstall : SLC5_Compat_install_actionuninstall

$(foreach d,$(SLC5_Compat_install_action_dependencies),$(eval $(d)uninstall_dependencies += SLC5_Compat_install_actionuninstall))

SLC5_Compat_install_actionuninstall : $(SLC5_Compat_install_actionuninstall_dependencies) ##$(cmt_local_SLC5_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting uninstall SLC5_Compat_install_action"
	@if test -f $(cmt_local_SLC5_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_SLC5_Compat_install_action_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_SLC5_Compat_install_action_makefile) uninstall
	$(echo) "(constituents.make) uninstall SLC5_Compat_install_action done"

remove_library_links :: SLC5_Compat_install_actionuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ SLC5_Compat_install_action"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ SLC5_Compat_install_action done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_Mac105_Compat_install_action_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_Mac105_Compat_install_action_has_target_tag

#cmt_local_tagfile_Mac105_Compat_install_action = $(MuonMomentumCorrections_tag)_Mac105_Compat_install_action.make
cmt_local_tagfile_Mac105_Compat_install_action = $(bin)$(MuonMomentumCorrections_tag)_Mac105_Compat_install_action.make
cmt_local_setup_Mac105_Compat_install_action = $(bin)setup_Mac105_Compat_install_action$$$$.make
cmt_final_setup_Mac105_Compat_install_action = $(bin)setup_Mac105_Compat_install_action.make
#cmt_final_setup_Mac105_Compat_install_action = $(bin)MuonMomentumCorrections_Mac105_Compat_install_actionsetup.make
cmt_local_Mac105_Compat_install_action_makefile = $(bin)Mac105_Compat_install_action.make

Mac105_Compat_install_action_extratags = -tag_add=target_Mac105_Compat_install_action

#$(cmt_local_tagfile_Mac105_Compat_install_action) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_Mac105_Compat_install_action) ::
else
$(cmt_local_tagfile_Mac105_Compat_install_action) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_Mac105_Compat_install_action); then /bin/rm -f $(cmt_local_tagfile_Mac105_Compat_install_action); fi ; \
	  $(cmtexe) -tag=$(tags) $(Mac105_Compat_install_action_extratags) build tag_makefile >>$(cmt_local_tagfile_Mac105_Compat_install_action)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_Mac105_Compat_install_action)"; \
	  test ! -f $(cmt_local_setup_Mac105_Compat_install_action) || \rm -f $(cmt_local_setup_Mac105_Compat_install_action); \
	  trap '\rm -f $(cmt_local_setup_Mac105_Compat_install_action)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(Mac105_Compat_install_action_extratags) show setup >$(cmt_local_setup_Mac105_Compat_install_action) && \
	  if [ -f $(cmt_final_setup_Mac105_Compat_install_action) ] && \
	    \cmp -s $(cmt_final_setup_Mac105_Compat_install_action) $(cmt_local_setup_Mac105_Compat_install_action); then \
	    \rm $(cmt_local_setup_Mac105_Compat_install_action); else \
	    \mv -f $(cmt_local_setup_Mac105_Compat_install_action) $(cmt_final_setup_Mac105_Compat_install_action); fi

else

#cmt_local_tagfile_Mac105_Compat_install_action = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_Mac105_Compat_install_action = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_Mac105_Compat_install_action = $(bin)setup.make
#cmt_final_setup_Mac105_Compat_install_action = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_Mac105_Compat_install_action_makefile = $(bin)Mac105_Compat_install_action.make

endif

not_Mac105_Compat_install_action_dependencies = { n=0; for p in $?; do m=0; for d in $(Mac105_Compat_install_action_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
Mac105_Compat_install_actiondirs :
	@if test ! -d $(bin)Mac105_Compat_install_action; then $(mkdir) -p $(bin)Mac105_Compat_install_action; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)Mac105_Compat_install_action
else
Mac105_Compat_install_actiondirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# Mac105_Compat_install_actiondirs ::
#	@if test ! -d $(bin)Mac105_Compat_install_action; then $(mkdir) -p $(bin)Mac105_Compat_install_action; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)Mac105_Compat_install_action
#
#$(cmt_local_Mac105_Compat_install_action_makefile) :: $(Mac105_Compat_install_action_dependencies) $(cmt_local_tagfile_Mac105_Compat_install_action) build_library_links dirs Mac105_Compat_install_actiondirs
#else
#$(cmt_local_Mac105_Compat_install_action_makefile) :: $(Mac105_Compat_install_action_dependencies) $(cmt_local_tagfile_Mac105_Compat_install_action) build_library_links dirs
#endif
#else
#$(cmt_local_Mac105_Compat_install_action_makefile) :: $(cmt_local_tagfile_Mac105_Compat_install_action)
#endif

ifdef cmt_Mac105_Compat_install_action_has_target_tag

ifndef QUICK
$(cmt_local_Mac105_Compat_install_action_makefile) : $(Mac105_Compat_install_action_dependencies) build_library_links
	$(echo) "(constituents.make) Building Mac105_Compat_install_action.make"; \
	  $(cmtexe) -tag=$(tags) $(Mac105_Compat_install_action_extratags) build constituent_config -out=$(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_action
else
$(cmt_local_Mac105_Compat_install_action_makefile) : $(Mac105_Compat_install_action_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_Mac105_Compat_install_action) ] || \
	  [ ! -f $(cmt_final_setup_Mac105_Compat_install_action) ] || \
	  $(not_Mac105_Compat_install_action_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building Mac105_Compat_install_action.make"; \
	  $(cmtexe) -tag=$(tags) $(Mac105_Compat_install_action_extratags) build constituent_config -out=$(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_action; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_Mac105_Compat_install_action_makefile) : $(Mac105_Compat_install_action_dependencies) build_library_links
	$(echo) "(constituents.make) Building Mac105_Compat_install_action.make"; \
	  $(cmtexe) -f=$(bin)Mac105_Compat_install_action.in -tag=$(tags) $(Mac105_Compat_install_action_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_action
else
$(cmt_local_Mac105_Compat_install_action_makefile) : $(Mac105_Compat_install_action_dependencies) $(cmt_build_library_linksstamp) $(bin)Mac105_Compat_install_action.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_Mac105_Compat_install_action) ] || \
	  [ ! -f $(cmt_final_setup_Mac105_Compat_install_action) ] || \
	  $(not_Mac105_Compat_install_action_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building Mac105_Compat_install_action.make"; \
	  $(cmtexe) -f=$(bin)Mac105_Compat_install_action.in -tag=$(tags) $(Mac105_Compat_install_action_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_action; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(Mac105_Compat_install_action_extratags) build constituent_makefile -out=$(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_action

Mac105_Compat_install_action :: $(Mac105_Compat_install_action_dependencies) $(cmt_local_Mac105_Compat_install_action_makefile) dirs Mac105_Compat_install_actiondirs
	$(echo) "(constituents.make) Starting Mac105_Compat_install_action"
	@if test -f $(cmt_local_Mac105_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_action; \
	  fi
#	@$(MAKE) -f $(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_action
	$(echo) "(constituents.make) Mac105_Compat_install_action done"

clean :: Mac105_Compat_install_actionclean

Mac105_Compat_install_actionclean :: $(Mac105_Compat_install_actionclean_dependencies) ##$(cmt_local_Mac105_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting Mac105_Compat_install_actionclean"
	@-if test -f $(cmt_local_Mac105_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_actionclean; \
	fi
	$(echo) "(constituents.make) Mac105_Compat_install_actionclean done"
#	@-$(MAKE) -f $(cmt_local_Mac105_Compat_install_action_makefile) Mac105_Compat_install_actionclean

##	  /bin/rm -f $(cmt_local_Mac105_Compat_install_action_makefile) $(bin)Mac105_Compat_install_action_dependencies.make

install :: Mac105_Compat_install_actioninstall

Mac105_Compat_install_actioninstall :: $(Mac105_Compat_install_action_dependencies) $(cmt_local_Mac105_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting install Mac105_Compat_install_action"
	@-$(MAKE) -f $(cmt_local_Mac105_Compat_install_action_makefile) install
	$(echo) "(constituents.make) install Mac105_Compat_install_action done"

uninstall : Mac105_Compat_install_actionuninstall

$(foreach d,$(Mac105_Compat_install_action_dependencies),$(eval $(d)uninstall_dependencies += Mac105_Compat_install_actionuninstall))

Mac105_Compat_install_actionuninstall : $(Mac105_Compat_install_actionuninstall_dependencies) ##$(cmt_local_Mac105_Compat_install_action_makefile)
	$(echo) "(constituents.make) Starting uninstall Mac105_Compat_install_action"
	@if test -f $(cmt_local_Mac105_Compat_install_action_makefile); then \
	  $(MAKE) -f $(cmt_local_Mac105_Compat_install_action_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_Mac105_Compat_install_action_makefile) uninstall
	$(echo) "(constituents.make) uninstall Mac105_Compat_install_action done"

remove_library_links :: Mac105_Compat_install_actionuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ Mac105_Compat_install_action"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ Mac105_Compat_install_action done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_doxygen_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_doxygen_has_target_tag

#cmt_local_tagfile_doxygen = $(MuonMomentumCorrections_tag)_doxygen.make
cmt_local_tagfile_doxygen = $(bin)$(MuonMomentumCorrections_tag)_doxygen.make
cmt_local_setup_doxygen = $(bin)setup_doxygen$$$$.make
cmt_final_setup_doxygen = $(bin)setup_doxygen.make
#cmt_final_setup_doxygen = $(bin)MuonMomentumCorrections_doxygensetup.make
cmt_local_doxygen_makefile = $(bin)doxygen.make

doxygen_extratags = -tag_add=target_doxygen

#$(cmt_local_tagfile_doxygen) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_doxygen) ::
else
$(cmt_local_tagfile_doxygen) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_doxygen); then /bin/rm -f $(cmt_local_tagfile_doxygen); fi ; \
	  $(cmtexe) -tag=$(tags) $(doxygen_extratags) build tag_makefile >>$(cmt_local_tagfile_doxygen)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_doxygen)"; \
	  test ! -f $(cmt_local_setup_doxygen) || \rm -f $(cmt_local_setup_doxygen); \
	  trap '\rm -f $(cmt_local_setup_doxygen)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(doxygen_extratags) show setup >$(cmt_local_setup_doxygen) && \
	  if [ -f $(cmt_final_setup_doxygen) ] && \
	    \cmp -s $(cmt_final_setup_doxygen) $(cmt_local_setup_doxygen); then \
	    \rm $(cmt_local_setup_doxygen); else \
	    \mv -f $(cmt_local_setup_doxygen) $(cmt_final_setup_doxygen); fi

else

#cmt_local_tagfile_doxygen = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_doxygen = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_doxygen = $(bin)setup.make
#cmt_final_setup_doxygen = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_doxygen_makefile = $(bin)doxygen.make

endif

not_doxygen_dependencies = { n=0; for p in $?; do m=0; for d in $(doxygen_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
doxygendirs :
	@if test ! -d $(bin)doxygen; then $(mkdir) -p $(bin)doxygen; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)doxygen
else
doxygendirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# doxygendirs ::
#	@if test ! -d $(bin)doxygen; then $(mkdir) -p $(bin)doxygen; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)doxygen
#
#$(cmt_local_doxygen_makefile) :: $(doxygen_dependencies) $(cmt_local_tagfile_doxygen) build_library_links dirs doxygendirs
#else
#$(cmt_local_doxygen_makefile) :: $(doxygen_dependencies) $(cmt_local_tagfile_doxygen) build_library_links dirs
#endif
#else
#$(cmt_local_doxygen_makefile) :: $(cmt_local_tagfile_doxygen)
#endif

ifdef cmt_doxygen_has_target_tag

ifndef QUICK
$(cmt_local_doxygen_makefile) : $(doxygen_dependencies) build_library_links
	$(echo) "(constituents.make) Building doxygen.make"; \
	  $(cmtexe) -tag=$(tags) $(doxygen_extratags) build constituent_config -out=$(cmt_local_doxygen_makefile) doxygen
else
$(cmt_local_doxygen_makefile) : $(doxygen_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_doxygen) ] || \
	  [ ! -f $(cmt_final_setup_doxygen) ] || \
	  $(not_doxygen_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building doxygen.make"; \
	  $(cmtexe) -tag=$(tags) $(doxygen_extratags) build constituent_config -out=$(cmt_local_doxygen_makefile) doxygen; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_doxygen_makefile) : $(doxygen_dependencies) build_library_links
	$(echo) "(constituents.make) Building doxygen.make"; \
	  $(cmtexe) -f=$(bin)doxygen.in -tag=$(tags) $(doxygen_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_doxygen_makefile) doxygen
else
$(cmt_local_doxygen_makefile) : $(doxygen_dependencies) $(cmt_build_library_linksstamp) $(bin)doxygen.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_doxygen) ] || \
	  [ ! -f $(cmt_final_setup_doxygen) ] || \
	  $(not_doxygen_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building doxygen.make"; \
	  $(cmtexe) -f=$(bin)doxygen.in -tag=$(tags) $(doxygen_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_doxygen_makefile) doxygen; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(doxygen_extratags) build constituent_makefile -out=$(cmt_local_doxygen_makefile) doxygen

doxygen :: $(doxygen_dependencies) $(cmt_local_doxygen_makefile) dirs doxygendirs
	$(echo) "(constituents.make) Starting doxygen"
	@if test -f $(cmt_local_doxygen_makefile); then \
	  $(MAKE) -f $(cmt_local_doxygen_makefile) doxygen; \
	  fi
#	@$(MAKE) -f $(cmt_local_doxygen_makefile) doxygen
	$(echo) "(constituents.make) doxygen done"

clean :: doxygenclean

doxygenclean :: $(doxygenclean_dependencies) ##$(cmt_local_doxygen_makefile)
	$(echo) "(constituents.make) Starting doxygenclean"
	@-if test -f $(cmt_local_doxygen_makefile); then \
	  $(MAKE) -f $(cmt_local_doxygen_makefile) doxygenclean; \
	fi
	$(echo) "(constituents.make) doxygenclean done"
#	@-$(MAKE) -f $(cmt_local_doxygen_makefile) doxygenclean

##	  /bin/rm -f $(cmt_local_doxygen_makefile) $(bin)doxygen_dependencies.make

install :: doxygeninstall

doxygeninstall :: $(doxygen_dependencies) $(cmt_local_doxygen_makefile)
	$(echo) "(constituents.make) Starting install doxygen"
	@-$(MAKE) -f $(cmt_local_doxygen_makefile) install
	$(echo) "(constituents.make) install doxygen done"

uninstall : doxygenuninstall

$(foreach d,$(doxygen_dependencies),$(eval $(d)uninstall_dependencies += doxygenuninstall))

doxygenuninstall : $(doxygenuninstall_dependencies) ##$(cmt_local_doxygen_makefile)
	$(echo) "(constituents.make) Starting uninstall doxygen"
	@if test -f $(cmt_local_doxygen_makefile); then \
	  $(MAKE) -f $(cmt_local_doxygen_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_doxygen_makefile) uninstall
	$(echo) "(constituents.make) uninstall doxygen done"

remove_library_links :: doxygenuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ doxygen"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ doxygen done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_new_rootsys_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_new_rootsys_has_target_tag

#cmt_local_tagfile_new_rootsys = $(MuonMomentumCorrections_tag)_new_rootsys.make
cmt_local_tagfile_new_rootsys = $(bin)$(MuonMomentumCorrections_tag)_new_rootsys.make
cmt_local_setup_new_rootsys = $(bin)setup_new_rootsys$$$$.make
cmt_final_setup_new_rootsys = $(bin)setup_new_rootsys.make
#cmt_final_setup_new_rootsys = $(bin)MuonMomentumCorrections_new_rootsyssetup.make
cmt_local_new_rootsys_makefile = $(bin)new_rootsys.make

new_rootsys_extratags = -tag_add=target_new_rootsys

#$(cmt_local_tagfile_new_rootsys) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_new_rootsys) ::
else
$(cmt_local_tagfile_new_rootsys) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_new_rootsys); then /bin/rm -f $(cmt_local_tagfile_new_rootsys); fi ; \
	  $(cmtexe) -tag=$(tags) $(new_rootsys_extratags) build tag_makefile >>$(cmt_local_tagfile_new_rootsys)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_new_rootsys)"; \
	  test ! -f $(cmt_local_setup_new_rootsys) || \rm -f $(cmt_local_setup_new_rootsys); \
	  trap '\rm -f $(cmt_local_setup_new_rootsys)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(new_rootsys_extratags) show setup >$(cmt_local_setup_new_rootsys) && \
	  if [ -f $(cmt_final_setup_new_rootsys) ] && \
	    \cmp -s $(cmt_final_setup_new_rootsys) $(cmt_local_setup_new_rootsys); then \
	    \rm $(cmt_local_setup_new_rootsys); else \
	    \mv -f $(cmt_local_setup_new_rootsys) $(cmt_final_setup_new_rootsys); fi

else

#cmt_local_tagfile_new_rootsys = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_new_rootsys = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_new_rootsys = $(bin)setup.make
#cmt_final_setup_new_rootsys = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_new_rootsys_makefile = $(bin)new_rootsys.make

endif

not_new_rootsys_dependencies = { n=0; for p in $?; do m=0; for d in $(new_rootsys_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
new_rootsysdirs :
	@if test ! -d $(bin)new_rootsys; then $(mkdir) -p $(bin)new_rootsys; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)new_rootsys
else
new_rootsysdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# new_rootsysdirs ::
#	@if test ! -d $(bin)new_rootsys; then $(mkdir) -p $(bin)new_rootsys; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)new_rootsys
#
#$(cmt_local_new_rootsys_makefile) :: $(new_rootsys_dependencies) $(cmt_local_tagfile_new_rootsys) build_library_links dirs new_rootsysdirs
#else
#$(cmt_local_new_rootsys_makefile) :: $(new_rootsys_dependencies) $(cmt_local_tagfile_new_rootsys) build_library_links dirs
#endif
#else
#$(cmt_local_new_rootsys_makefile) :: $(cmt_local_tagfile_new_rootsys)
#endif

ifdef cmt_new_rootsys_has_target_tag

ifndef QUICK
$(cmt_local_new_rootsys_makefile) : $(new_rootsys_dependencies) build_library_links
	$(echo) "(constituents.make) Building new_rootsys.make"; \
	  $(cmtexe) -tag=$(tags) $(new_rootsys_extratags) build constituent_config -out=$(cmt_local_new_rootsys_makefile) new_rootsys
else
$(cmt_local_new_rootsys_makefile) : $(new_rootsys_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_new_rootsys) ] || \
	  [ ! -f $(cmt_final_setup_new_rootsys) ] || \
	  $(not_new_rootsys_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building new_rootsys.make"; \
	  $(cmtexe) -tag=$(tags) $(new_rootsys_extratags) build constituent_config -out=$(cmt_local_new_rootsys_makefile) new_rootsys; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_new_rootsys_makefile) : $(new_rootsys_dependencies) build_library_links
	$(echo) "(constituents.make) Building new_rootsys.make"; \
	  $(cmtexe) -f=$(bin)new_rootsys.in -tag=$(tags) $(new_rootsys_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_new_rootsys_makefile) new_rootsys
else
$(cmt_local_new_rootsys_makefile) : $(new_rootsys_dependencies) $(cmt_build_library_linksstamp) $(bin)new_rootsys.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_new_rootsys) ] || \
	  [ ! -f $(cmt_final_setup_new_rootsys) ] || \
	  $(not_new_rootsys_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building new_rootsys.make"; \
	  $(cmtexe) -f=$(bin)new_rootsys.in -tag=$(tags) $(new_rootsys_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_new_rootsys_makefile) new_rootsys; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(new_rootsys_extratags) build constituent_makefile -out=$(cmt_local_new_rootsys_makefile) new_rootsys

new_rootsys :: $(new_rootsys_dependencies) $(cmt_local_new_rootsys_makefile) dirs new_rootsysdirs
	$(echo) "(constituents.make) Starting new_rootsys"
	@if test -f $(cmt_local_new_rootsys_makefile); then \
	  $(MAKE) -f $(cmt_local_new_rootsys_makefile) new_rootsys; \
	  fi
#	@$(MAKE) -f $(cmt_local_new_rootsys_makefile) new_rootsys
	$(echo) "(constituents.make) new_rootsys done"

clean :: new_rootsysclean

new_rootsysclean :: $(new_rootsysclean_dependencies) ##$(cmt_local_new_rootsys_makefile)
	$(echo) "(constituents.make) Starting new_rootsysclean"
	@-if test -f $(cmt_local_new_rootsys_makefile); then \
	  $(MAKE) -f $(cmt_local_new_rootsys_makefile) new_rootsysclean; \
	fi
	$(echo) "(constituents.make) new_rootsysclean done"
#	@-$(MAKE) -f $(cmt_local_new_rootsys_makefile) new_rootsysclean

##	  /bin/rm -f $(cmt_local_new_rootsys_makefile) $(bin)new_rootsys_dependencies.make

install :: new_rootsysinstall

new_rootsysinstall :: $(new_rootsys_dependencies) $(cmt_local_new_rootsys_makefile)
	$(echo) "(constituents.make) Starting install new_rootsys"
	@-$(MAKE) -f $(cmt_local_new_rootsys_makefile) install
	$(echo) "(constituents.make) install new_rootsys done"

uninstall : new_rootsysuninstall

$(foreach d,$(new_rootsys_dependencies),$(eval $(d)uninstall_dependencies += new_rootsysuninstall))

new_rootsysuninstall : $(new_rootsysuninstall_dependencies) ##$(cmt_local_new_rootsys_makefile)
	$(echo) "(constituents.make) Starting uninstall new_rootsys"
	@if test -f $(cmt_local_new_rootsys_makefile); then \
	  $(MAKE) -f $(cmt_local_new_rootsys_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_new_rootsys_makefile) uninstall
	$(echo) "(constituents.make) uninstall new_rootsys done"

remove_library_links :: new_rootsysuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ new_rootsys"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ new_rootsys done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_check_install_runtime_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_check_install_runtime_has_target_tag

#cmt_local_tagfile_check_install_runtime = $(MuonMomentumCorrections_tag)_check_install_runtime.make
cmt_local_tagfile_check_install_runtime = $(bin)$(MuonMomentumCorrections_tag)_check_install_runtime.make
cmt_local_setup_check_install_runtime = $(bin)setup_check_install_runtime$$$$.make
cmt_final_setup_check_install_runtime = $(bin)setup_check_install_runtime.make
#cmt_final_setup_check_install_runtime = $(bin)MuonMomentumCorrections_check_install_runtimesetup.make
cmt_local_check_install_runtime_makefile = $(bin)check_install_runtime.make

check_install_runtime_extratags = -tag_add=target_check_install_runtime

#$(cmt_local_tagfile_check_install_runtime) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_check_install_runtime) ::
else
$(cmt_local_tagfile_check_install_runtime) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_check_install_runtime); then /bin/rm -f $(cmt_local_tagfile_check_install_runtime); fi ; \
	  $(cmtexe) -tag=$(tags) $(check_install_runtime_extratags) build tag_makefile >>$(cmt_local_tagfile_check_install_runtime)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_check_install_runtime)"; \
	  test ! -f $(cmt_local_setup_check_install_runtime) || \rm -f $(cmt_local_setup_check_install_runtime); \
	  trap '\rm -f $(cmt_local_setup_check_install_runtime)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(check_install_runtime_extratags) show setup >$(cmt_local_setup_check_install_runtime) && \
	  if [ -f $(cmt_final_setup_check_install_runtime) ] && \
	    \cmp -s $(cmt_final_setup_check_install_runtime) $(cmt_local_setup_check_install_runtime); then \
	    \rm $(cmt_local_setup_check_install_runtime); else \
	    \mv -f $(cmt_local_setup_check_install_runtime) $(cmt_final_setup_check_install_runtime); fi

else

#cmt_local_tagfile_check_install_runtime = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_check_install_runtime = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_check_install_runtime = $(bin)setup.make
#cmt_final_setup_check_install_runtime = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_check_install_runtime_makefile = $(bin)check_install_runtime.make

endif

not_check_install_runtime_dependencies = { n=0; for p in $?; do m=0; for d in $(check_install_runtime_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
check_install_runtimedirs :
	@if test ! -d $(bin)check_install_runtime; then $(mkdir) -p $(bin)check_install_runtime; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)check_install_runtime
else
check_install_runtimedirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# check_install_runtimedirs ::
#	@if test ! -d $(bin)check_install_runtime; then $(mkdir) -p $(bin)check_install_runtime; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)check_install_runtime
#
#$(cmt_local_check_install_runtime_makefile) :: $(check_install_runtime_dependencies) $(cmt_local_tagfile_check_install_runtime) build_library_links dirs check_install_runtimedirs
#else
#$(cmt_local_check_install_runtime_makefile) :: $(check_install_runtime_dependencies) $(cmt_local_tagfile_check_install_runtime) build_library_links dirs
#endif
#else
#$(cmt_local_check_install_runtime_makefile) :: $(cmt_local_tagfile_check_install_runtime)
#endif

ifdef cmt_check_install_runtime_has_target_tag

ifndef QUICK
$(cmt_local_check_install_runtime_makefile) : $(check_install_runtime_dependencies) build_library_links
	$(echo) "(constituents.make) Building check_install_runtime.make"; \
	  $(cmtexe) -tag=$(tags) $(check_install_runtime_extratags) build constituent_config -out=$(cmt_local_check_install_runtime_makefile) check_install_runtime
else
$(cmt_local_check_install_runtime_makefile) : $(check_install_runtime_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_check_install_runtime) ] || \
	  [ ! -f $(cmt_final_setup_check_install_runtime) ] || \
	  $(not_check_install_runtime_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building check_install_runtime.make"; \
	  $(cmtexe) -tag=$(tags) $(check_install_runtime_extratags) build constituent_config -out=$(cmt_local_check_install_runtime_makefile) check_install_runtime; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_check_install_runtime_makefile) : $(check_install_runtime_dependencies) build_library_links
	$(echo) "(constituents.make) Building check_install_runtime.make"; \
	  $(cmtexe) -f=$(bin)check_install_runtime.in -tag=$(tags) $(check_install_runtime_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_check_install_runtime_makefile) check_install_runtime
else
$(cmt_local_check_install_runtime_makefile) : $(check_install_runtime_dependencies) $(cmt_build_library_linksstamp) $(bin)check_install_runtime.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_check_install_runtime) ] || \
	  [ ! -f $(cmt_final_setup_check_install_runtime) ] || \
	  $(not_check_install_runtime_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building check_install_runtime.make"; \
	  $(cmtexe) -f=$(bin)check_install_runtime.in -tag=$(tags) $(check_install_runtime_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_check_install_runtime_makefile) check_install_runtime; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(check_install_runtime_extratags) build constituent_makefile -out=$(cmt_local_check_install_runtime_makefile) check_install_runtime

check_install_runtime :: $(check_install_runtime_dependencies) $(cmt_local_check_install_runtime_makefile) dirs check_install_runtimedirs
	$(echo) "(constituents.make) Starting check_install_runtime"
	@if test -f $(cmt_local_check_install_runtime_makefile); then \
	  $(MAKE) -f $(cmt_local_check_install_runtime_makefile) check_install_runtime; \
	  fi
#	@$(MAKE) -f $(cmt_local_check_install_runtime_makefile) check_install_runtime
	$(echo) "(constituents.make) check_install_runtime done"

clean :: check_install_runtimeclean

check_install_runtimeclean :: $(check_install_runtimeclean_dependencies) ##$(cmt_local_check_install_runtime_makefile)
	$(echo) "(constituents.make) Starting check_install_runtimeclean"
	@-if test -f $(cmt_local_check_install_runtime_makefile); then \
	  $(MAKE) -f $(cmt_local_check_install_runtime_makefile) check_install_runtimeclean; \
	fi
	$(echo) "(constituents.make) check_install_runtimeclean done"
#	@-$(MAKE) -f $(cmt_local_check_install_runtime_makefile) check_install_runtimeclean

##	  /bin/rm -f $(cmt_local_check_install_runtime_makefile) $(bin)check_install_runtime_dependencies.make

install :: check_install_runtimeinstall

check_install_runtimeinstall :: $(check_install_runtime_dependencies) $(cmt_local_check_install_runtime_makefile)
	$(echo) "(constituents.make) Starting install check_install_runtime"
	@-$(MAKE) -f $(cmt_local_check_install_runtime_makefile) install
	$(echo) "(constituents.make) install check_install_runtime done"

uninstall : check_install_runtimeuninstall

$(foreach d,$(check_install_runtime_dependencies),$(eval $(d)uninstall_dependencies += check_install_runtimeuninstall))

check_install_runtimeuninstall : $(check_install_runtimeuninstall_dependencies) ##$(cmt_local_check_install_runtime_makefile)
	$(echo) "(constituents.make) Starting uninstall check_install_runtime"
	@if test -f $(cmt_local_check_install_runtime_makefile); then \
	  $(MAKE) -f $(cmt_local_check_install_runtime_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_check_install_runtime_makefile) uninstall
	$(echo) "(constituents.make) uninstall check_install_runtime done"

remove_library_links :: check_install_runtimeuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ check_install_runtime"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ check_install_runtime done"
endif

#-- end of constituent ------
#-- start of constituent ------

cmt_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

#cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag)_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag)_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap$$$$.make
cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make
#cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrections_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapsetup.make
cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags = -tag_add=target_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap

#$(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) : $(cmt_lock_setup)
ifndef QUICK
$(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ::
else
$(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) :
endif
	$(echo) "(constituents.make) Rebuilding $@"; \
	  if test -f $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); then /bin/rm -f $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); fi ; \
	  $(cmtexe) -tag=$(tags) $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build tag_makefile >>$(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)
	$(echo) "(constituents.make) Rebuilding $(cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)"; \
	  test ! -f $(cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) || \rm -f $(cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); \
	  trap '\rm -f $(cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)' 0 1 2 15; \
	  $(cmtexe) -tag=$(tags) $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) show setup >$(cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) && \
	  if [ -f $(cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] && \
	    \cmp -s $(cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) $(cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); then \
	    \rm $(cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); else \
	    \mv -f $(cmt_local_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) $(cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap); fi

else

#cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)$(MuonMomentumCorrections_tag).make
cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)setup.make
#cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile = $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make

endif

not_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies = { n=0; for p in $?; do m=0; for d in $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies); do if [ $$p = $$d ]; then m=1; break; fi; done; if [ $$m -eq 0 ]; then n=1; break; fi; done; [ $$n -eq 1 ]; }

ifdef STRUCTURED_OUTPUT
check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs :
	@if test ! -d $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; then $(mkdir) -p $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; fi
	$(echo) "STRUCTURED_OUTPUT="$(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
else
check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs : ;
endif

#ifndef QUICK
#ifdef STRUCTURED_OUTPUT
# check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs ::
#	@if test ! -d $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; then $(mkdir) -p $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
#
#$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) build_library_links dirs check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs
#else
#$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) build_library_links dirs
#endif
#else
#$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) :: $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap)
#endif

ifdef cmt_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_has_target_tag

ifndef QUICK
$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) build_library_links
	$(echo) "(constituents.make) Building check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -tag=$(tags) $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_config -out=$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
else
$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_build_library_linksstamp) $(use_requirements)
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  [ ! -f $(cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  $(not_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -tag=$(tags) $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_config -out=$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; \
	  fi
endif

else

ifndef QUICK
$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) build_library_links
	$(echo) "(constituents.make) Building check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -f=$(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in -tag=$(tags) $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
else
$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) : $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_build_library_linksstamp) $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in
	@if [ ! -f $@ ] || [ ! -f $(cmt_local_tagfile_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  [ ! -f $(cmt_final_setup_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap) ] || \
	  $(not_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) ; then \
	  test -z "$(cmtmsg)" || \
	  echo "$(CMTMSGPREFIX)" "(constituents.make) Building check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.make"; \
	  $(cmtexe) -f=$(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap.in -tag=$(tags) $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_makefile -without_cmt -out=$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; \
	  fi
endif

endif

#	  $(cmtexe) -tag=$(tags) $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_extratags) build constituent_makefile -out=$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) dirs check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapdirs
	$(echo) "(constituents.make) Starting check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	@if test -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap; \
	  fi
#	@$(MAKE) -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap
	$(echo) "(constituents.make) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"

clean :: check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean_dependencies) ##$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile)
	$(echo) "(constituents.make) Starting check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean"
	@-if test -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean; \
	fi
	$(echo) "(constituents.make) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean done"
#	@-$(MAKE) -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapclean

##	  /bin/rm -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) $(bin)check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies.make

install :: check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapinstall :: $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies) $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile)
	$(echo) "(constituents.make) Starting install check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	@-$(MAKE) -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) install
	$(echo) "(constituents.make) install check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"

uninstall : check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall

$(foreach d,$(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_dependencies),$(eval $(d)uninstall_dependencies += check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall))

check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall : $(check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall_dependencies) ##$(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile)
	$(echo) "(constituents.make) Starting uninstall check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	@if test -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile); then \
	  $(MAKE) -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) uninstall; \
	  fi
#	@$(MAKE) -f $(cmt_local_check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap_makefile) uninstall
	$(echo) "(constituents.make) uninstall check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"

remove_library_links :: check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmapuninstall

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(constituents.make) Starting $@ check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap"
	$(echo) Using default action for $@
	$(echo) "(constituents.make) $@ check_install_MuonMomentumCorrectionsDict_MuonMomentumCorrectionsdictrootmap done"
endif

#-- end of constituent ------
#-- start of constituents_trailer ------

uninstall : remove_library_links ;
clean ::
	$(cleanup_echo) $(cmt_build_library_linksstamp)
	-$(cleanup_silent) \rm -f $(cmt_build_library_linksstamp)
#clean :: remove_library_links

remove_library_links ::
ifndef QUICK
	$(echo) "(constituents.make) Removing library links"; \
	  $(remove_library_links)
else
	$(echo) "(constituents.make) Removing library links"; \
	  $(remove_library_links) -f=$(bin)library_links.in -without_cmt
endif

#makefilesclean ::

###	@/bin/rm -f checkuses

###	/bin/rm -f *.make*

#clean :: makefilesclean

#-- end of constituents_trailer ------
