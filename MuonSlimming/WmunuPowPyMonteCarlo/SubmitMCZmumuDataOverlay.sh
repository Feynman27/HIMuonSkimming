prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonZmumuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.147733/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.Slimmed.2014.05.18.v05.147733 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob=MAX \
    --nFilesPerJob 7 \
    --mergeOutput
echo "147733 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonZmumuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.209105/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.Slimmed.2014.05.18.v05.209105 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob=MAX \
    --nFilesPerJob 7 \
    --mergeOutput
echo "209105 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonZmumuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.147739/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.Slimmed.2014.05.18.v05.147739 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob=MAX \
    --nFilesPerJob 7 \
    --mergeOutput
echo "147739 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SlimMain.exe' "  \
    --outputs HISingleMuonZmumuPYTHIADataOverlay.root \
    --athenaTag 17.2.10.5 \
    --match '*skimmed*' \
    --inDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.147807/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.Slimmed.2014.05.18.v05.147807 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuDataOverlay.sh \
    --extFile SlimMain.exe ,input.txt \
    --noBuild \
    --nGBPerJob=MAX \
    --nFilesPerJob 7 \
    --mergeOutput
echo "147807 : $? " >>Log.txt
echo
echo



