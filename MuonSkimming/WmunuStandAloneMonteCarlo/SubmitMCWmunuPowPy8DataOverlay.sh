prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 19.2.0 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1365_s1310_s1300_r4060/ \
    --outDS user.tbalestr.NTUP_HI.PythiaWmunu.StandAlone.2014.10.01.v01.119986 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuPowPy8DataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "119986 : $? " >>Log.txt
echo
echo



