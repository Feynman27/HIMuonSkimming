prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonWmunuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119989/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.Slimmed.2013.08.19.v01.119989 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
    --mergeOutput
echo "119989 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonWmunuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119988/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.Slimmed.2013.08.19.v01.119988 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
    --mergeOutput
echo "119988 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonWmunuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119987/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.Slimmed.2013.08.19.v01.119987 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
    --mergeOutput
echo "119987 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonWmunuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119986/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.Slimmed.2013.08.19.v01.119986 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
    --mergeOutput
echo "119986 : $? " >>Log.txt
echo
echo



