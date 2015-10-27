#-- start of make_header -----------------

#====================================
#  Document MuonMomentumCorrectionsGen
#
#   Generated Tue May 15 22:56:39 2012  by tbalestr
#
#====================================

include ${CMTROOT}/src/Makefile.core

ifdef tag
CMTEXTRATAGS = $(tag)
else
tag       = $(CMTCONFIG)
endif

cmt_MuonMomentumCorrectionsGen_has_no_target_tag = 1

#--------------------------------------------------------

ifdef cmt_MuonMomentumCorrectionsGen_has_target_tag

tags      = $(tag),$(CMTEXTRATAGS),target_MuonMomentumCorrectionsGen

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrectionsGen = $(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsGen.make
cmt_local_tagfile_MuonMomentumCorrectionsGen = $(bin)$(MuonMomentumCorrections_tag)_MuonMomentumCorrectionsGen.make

else

tags      = $(tag),$(CMTEXTRATAGS)

MuonMomentumCorrections_tag = $(tag)

#cmt_local_tagfile_MuonMomentumCorrectionsGen = $(MuonMomentumCorrections_tag).make
cmt_local_tagfile_MuonMomentumCorrectionsGen = $(bin)$(MuonMomentumCorrections_tag).make

endif

include $(cmt_local_tagfile_MuonMomentumCorrectionsGen)
#-include $(cmt_local_tagfile_MuonMomentumCorrectionsGen)

ifdef cmt_MuonMomentumCorrectionsGen_has_target_tag

cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)setup_MuonMomentumCorrectionsGen.make
cmt_dependencies_in_MuonMomentumCorrectionsGen = $(bin)dependencies_MuonMomentumCorrectionsGen.in
#cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)MuonMomentumCorrections_MuonMomentumCorrectionsGensetup.make
cmt_local_MuonMomentumCorrectionsGen_makefile = $(bin)MuonMomentumCorrectionsGen.make

else

cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)setup.make
cmt_dependencies_in_MuonMomentumCorrectionsGen = $(bin)dependencies.in
#cmt_final_setup_MuonMomentumCorrectionsGen = $(bin)MuonMomentumCorrectionssetup.make
cmt_local_MuonMomentumCorrectionsGen_makefile = $(bin)MuonMomentumCorrectionsGen.make

endif

#cmt_final_setup = $(bin)setup.make
#cmt_final_setup = $(bin)MuonMomentumCorrectionssetup.make

#MuonMomentumCorrectionsGen :: ;

dirs ::
	@if test ! -r requirements ; then echo "No requirements file" ; fi; \
	  if test ! -d $(bin) ; then $(mkdir) -p $(bin) ; fi

javadirs ::
	@if test ! -d $(javabin) ; then $(mkdir) -p $(javabin) ; fi

srcdirs ::
	@if test ! -d $(src) ; then $(mkdir) -p $(src) ; fi

help ::
	$(echo) 'MuonMomentumCorrectionsGen'

binobj = 
ifdef STRUCTURED_OUTPUT
binobj = MuonMomentumCorrectionsGen/
#MuonMomentumCorrectionsGen::
#	@if test ! -d $(bin)$(binobj) ; then $(mkdir) -p $(bin)$(binobj) ; fi
#	$(echo) "STRUCTURED_OUTPUT="$(bin)$(binobj)
endif

${CMTROOT}/src/Makefile.core : ;
ifdef use_requirements
$(use_requirements) : ;
endif

#-- end of make_header ------------------

MuonMomentumCorrectionsGen :: ${dict_dir}/MuonMomentumCorrectionsGenDictEnd.stamp

#Begin: create dir and first part of required files
${dict_dir}/MuonMomentumCorrectionsGenDictBegin.stamp ::   $(reflex_dictMuonMomentumCorrections_selection_file)  $(cmt_final_setup_MuonMomentumCorrectionsGen)
	@echo "----- BEGIN SEAL Dictionary selection file generation for MuonMomentumCorrections -----"
	@echo "  Cleaning up MuonMomentumCorrectionsDict-related generated files " 
	@$(cleanup_silent) cd $(bin); /bin/rm -rf *MuonMomentumCorrectionsDict*.a
	@if test -d ${dict_dir}/MuonMomentumCorrections ; then echo "Remove ${dict_dir}/MuonMomentumCorrections" ; /bin/rm -rf ${dict_dir}/MuonMomentumCorrections*; fi
	@echo "  Create ${dict_dir}" ; mkdir -p ${dict_dir}/MuonMomentumCorrections; 
	@echo "  Copy $(reflex_dictMuonMomentumCorrections_selection_file) to ${dict_dir}/MuonMomentumCorrections_selection.xml "
	@grep -v "</lcgdict>" $(reflex_dictMuonMomentumCorrections_selection_file) >| ${dict_dir}/MuonMomentumCorrections_selection.xml 
	@if test ! -z "${reflex_dictMuonMomentumCorrections_navigables}" ; then \
	    class_list=`echo '$(reflex_dictMuonMomentumCorrections_navigables)' | sed -e "s/[ ][ ]*/' '/g" -e "s/^/'/"  -e "s/$$/'/" -e "s/''//g"`; \
	    for class_name in $${class_list} ; do  \
	        echo "  Add navigable: $${class_name} to selection file" ; \
	        $(cmtexe) expand model "<Navigable_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	        $(cmtexe) expand model "<ElementLink_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	        $(cmtexe) expand model "<ElementLinkVector_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	        $(cmtexe) expand model "<DataLink_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	    done ; \
	fi 
	@if test ! -z "${reflex_dictMuonMomentumCorrections_data_links}" ; then \
	    class_list=`echo '$(reflex_dictMuonMomentumCorrections_data_links)' | sed -e "s/[ ][ ]*/' '/g" -e "s/^/'/"  -e "s/$$/'/" -e "s/''//g"`; \
	    for class_name in $${class_list} ; do  \
	        echo "  Add data link: $${class_name} to selection file" ; \
	        $(cmtexe) expand model "<DataLink_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	    done ; \
	fi 
	@if test ! -z "${reflex_dictMuonMomentumCorrections_element_links}" ; then \
	    class_list=`echo '$(reflex_dictMuonMomentumCorrections_element_links)' | sed -e "s/[ ][ ]*/' '/g" -e "s/^/'/"  -e "s/$$/'/" -e "s/''//g"`; \
	    for class_name in $${class_list} ; do  \
	        echo "  Add element link: $${class_name} to selection file" ; \
	        $(cmtexe) expand model "<ElementLink_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	        $(cmtexe) expand model "<ElementLinkVector_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	        $(cmtexe) expand model "<DataLink_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	    done ; \
	fi 
	@if test ! -z ${reflex_dictMuonMomentumCorrections_element_link_vectors} ; then \
	    class_list=`echo '$(reflex_dictMuonMomentumCorrections_element_link_vectors)' | sed -e "s/[ ][ ]*/' '/g" -e "s/^/'/"  -e "s/$$/'/" -e "s/''//g"`; \
	    for class_name in $${class_list} ; do  \
	        echo "  This is deprecated. Include the class in navigables if possible, or just use elementLinks" ; \
	        echo "  Add element link vector: $${class_name} to selection file" ; \
	        $(cmtexe) expand model "<ElementLinkVector_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	        $(cmtexe) expand model "<DataLink_selection.xml class=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml ; \
	    done ; \
	fi 
	@echo "</lcgdict>" >> ${dict_dir}/MuonMomentumCorrections_selection.xml 
	@touch ${dict_dir}/MuonMomentumCorrectionsGenDictBegin.stamp

#End: create final part of required files
${dict_dir}/MuonMomentumCorrectionsGenDictEnd.stamp :: ${dict_dir}/MuonMomentumCorrectionsGenDict.stamp
	@echo "----- END SEAL Dictionary selection file generation for MuonMomentumCorrections -----"
	@touch ${dict_dir}/MuonMomentumCorrectionsGenDictEnd.stamp
#-- start of dependencies ------------------
ifneq ($(MAKECMDGOALS),MuonMomentumCorrectionsGenclean)
ifneq ($(MAKECMDGOALS),uninstall)

$(bin)MuonMomentumCorrectionsGen_dependencies.make : $(use_requirements) $(cmt_final_setup_MuonMomentumCorrectionsGen)
	$(echo) "(MuonMomentumCorrectionsGen.make) Rebuilding $@"; \
	  $(cmtexe) -tag=$(tags) build dependencies -out=$@ -start_all ../MuonMomentumCorrections/MuonMomentumCorrectionsDict.h -end_all $(includes) $(app_MuonMomentumCorrectionsGen_cppflags) $(lib_MuonMomentumCorrectionsGen_cppflags) -name=MuonMomentumCorrectionsGen $? -f=$(cmt_dependencies_in_MuonMomentumCorrectionsGen) -without_cmt

-include $(bin)MuonMomentumCorrectionsGen_dependencies.make

endif
endif

MuonMomentumCorrectionsGenclean ::
	$(cleanup_silent) \rm -rf $(bin)MuonMomentumCorrectionsGen_deps $(bin)MuonMomentumCorrectionsGen_dependencies.make
#-- end of dependencies -------------------
#-- start of dependency ------------------
ifneq ($(MAKECMDGOALS),MuonMomentumCorrectionsGenclean)
ifneq ($(MAKECMDGOALS),uninstall)

$(bin)MuonMomentumCorrectionsGen_dependencies.make : $(MuonMomentumCorrectionsDict_h_dependencies)

$(bin)MuonMomentumCorrectionsGen_dependencies.make : ../MuonMomentumCorrections/MuonMomentumCorrectionsDict.h

endif
endif
#-- end of dependency -------------------

${dict_dir}/MuonMomentumCorrectionsGenDict.stamp :: ${dict_dir}/MuonMomentumCorrectionsGenDictBegin.stamp ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict.xml.stamp
	@touch ${dict_dir}/MuonMomentumCorrectionsGenDict.stamp


MuonMomentumCorrectionsGen ::  ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict.xml.stamp

${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict.xml.stamp :: $(MuonMomentumCorrectionsDict_h_dependencies) $(reflex_dictMuonMomentumCorrections_selection_file) ${dict_dir}/MuonMomentumCorrectionsGenDictBegin.stamp
	@$(silent) echo $@ MuonMomentumCorrectionsDict_gen.h
	@cat ../MuonMomentumCorrections/MuonMomentumCorrectionsDict.h >| ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h
	@if test ! -z "${reflex_dictMuonMomentumCorrections_navigables}" ; then \
	    class_list=`echo '$(reflex_dictMuonMomentumCorrections_navigables)' | sed -e "s/[ ][ ]*/' '/g" -e "s/^/'/"  -e "s/$$/'/" -e "s/''//g"`; \
            echo "class_list = $${class_list}";\
	    for class_name in $${class_list} ; do  \
	        echo "  Add navigable: $${class_name} to dict header file" ; \
		TYPE=`echo $${class_name} | sed 's/[[:punct:]]/_/g'` ;	\
	        $(cmtexe) expand model "<NavigableDict.h namespace=$${TYPE} cont=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h ; \
	        $(cmtexe) expand model "<ElementLinkDict.h namespace=$${TYPE} cont=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h ; \
	        $(cmtexe) expand model "<DataLinkDict.h namespace=$${TYPE} cont=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h ; \
	    done ; \
	fi 
	@if test ! -z "${reflex_dictMuonMomentumCorrections_element_links}" ; then \
	    class_list=`echo '$(reflex_dictMuonMomentumCorrections_element_links)' | sed -e "s/[ ][ ]*/' '/g" -e "s/^/'/"  -e "s/$$/'/" -e "s/''//g"`; \
	    for class_name in $${class_list} ; do  \
	        echo "  Add ElementLink & ElementLinkVector: $${class_name} to dict header file" ; \
		TYPE=`echo $${class_name} | sed 's/[[:punct:]]/_/g'` ;	\
	        $(cmtexe) expand model "<ElementLinkDict.h namespace=$${TYPE} cont=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h ; \
	        $(cmtexe) expand model "<DataLinkDict.h namespace=$${TYPE} cont=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h ; \
	    done ; \
	fi 
	@if test ! -z "${reflex_dictMuonMomentumCorrections_data_links}" ; then \
	    class_list=`echo '$(reflex_dictMuonMomentumCorrections_data_links)' | sed -e "s/[ ][ ]*/' '/g" -e "s/^/'/"  -e "s/$$/'/" -e "s/''//g"`; \
	    for class_name in $${class_list} ; do  \
	        echo "  Add DataLink: $${class_name} to dict header file" ; \
		TYPE=`echo $${class_name} | sed 's/[[:punct:]]/_/g'` ;	\
	        $(cmtexe) expand model "<DataLinkDict.h namespace=$${TYPE} cont=$${class_name}/>" >> ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h ; \
	    done ; \
	fi
	@if test ! -z "$(gcc_user_flags)" ; then \
	    export  GCCXML_USER_FLAGS="$(gcc_user_flags)" ; \
	fi
	$(silent) $(athena_genreflex_wrapper_cmd) MuonMomentumCorrections $(genreflex_cmd) ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict_gen.h -o ${dict_dir}/MuonMomentumCorrections $(reflex_dictMuonMomentumCorrections_options) ${munged_reflex_dict_options} $(MuonMomentumCorrections_reflex_dict_options)  $(includes) $(use_pp_cppflags) 
	@touch ${dict_dir}/MuonMomentumCorrections/MuonMomentumCorrectionsDict.xml.stamp


MuonMomentumCorrectionsGenclean ::
	@if test -d ${dict_dir} ; then \
	    file_list=`ls ${dict_dir}` ; \
	    for file_name in $${file_list} ; do  \
	        if test -f ${dict_dir}/$${file_name} ; then \
	            echo "Remove ${dict_dir}/$${file_name}" ; \
		    /bin/rm -f ${dict_dir}/$${file_name} ; \
		fi  \
	    done ; \
	fi 

#-- start of cleanup_header --------------

clean :: MuonMomentumCorrectionsGenclean ;
#	@cd .

ifndef PEDANTIC
.DEFAULT::
	$(echo) "(MuonMomentumCorrectionsGen.make) $@: No rule for such target" >&2
else
.DEFAULT::
	$(error PEDANTIC: $@: No rule for such target)
endif

MuonMomentumCorrectionsGenclean ::
#-- end of cleanup_header ---------------
