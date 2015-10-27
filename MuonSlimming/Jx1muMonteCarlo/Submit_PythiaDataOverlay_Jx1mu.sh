prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonJx1muPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.05.v01.119120/ \
    --outDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.Slimmed.2013.07.14.v01.119120 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C Submit_PythiaDataOverlay_Jx1mu.sh \
    --extFile SlimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob=MAX \
    --nFilesPerJob 5 \
    --mergeOutput
echo "119120 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonJx1muPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.10.v01.119121/ \
    --outDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.Slimmed.2013.07.14.v01.119121 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C Submit_PythiaDataOverlay_Jx1mu.sh \
    --extFile SlimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob=MAX \
    --nFilesPerJob 5 \
    --mergeOutput
echo "119121 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonJx1muPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.05.v01.119122/ \
    --outDS user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.Slimmed.2013.07.14.v01.119122 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C Submit_PythiaDataOverlay_Jx1mu.sh \
    --extFile SlimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob=MAX \
    --nFilesPerJob 5 \
    --mergeOutput
echo "119122 : $? " >>Log.txt
echo
echo



