prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 17.2.10.5 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119992.PythiaZmumu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.08.v01.1199923241 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitZmumuMonteCarlo.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 3 \
    --nFilesPerJob 3 \
echo "1199923241 : $? " >>Log.txt
echo
echo



