prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 19.0.1 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.147739.PowhegPythia8_AU2CT10_Zmumu_np.recon.NTUP_HI.e2310_d750_r4789/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v05.147739 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuPowPy8DataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "147739 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 19.0.1 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.147807.PowhegPythia8_AU2CT10_Zmumu.recon.NTUP_HI.e2310_d750_r4789/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v05.147807 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuPowPy8DataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "147807 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 19.0.1 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.209105.PowhegPythia8_AU2CT10_Zmumu_nn.recon.NTUP_HI.e2310_d750_r4789/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v05.209105 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuPowPy8DataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "209105 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 19.0.1 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.147733.PowhegPythia8_AU2CT10_Zmumu_pn.recon.NTUP_HI.e2310_d750_r4789/ \
    --outDS user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v05.147733 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCZmumuPowPy8DataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "147733 : $? " >>Log.txt
echo
echo



