prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 17.2.10.5 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119120.J1_pythia_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635/ \
    --outDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.10.v01.119120 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C Submit_pythiaDataOverlay_jetjet_1muon.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 5 \
    --nFilesPerJob 5 \
echo "119120 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 17.2.10.5 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119121.J2_pythia_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635/ \
    --outDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.10.v01.119121 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C Submit_pythiaDataOverlay_jetjet_1muon.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 5 \
    --nFilesPerJob 5 \
echo "119121 : $? " >>Log.txt
echo
echo



