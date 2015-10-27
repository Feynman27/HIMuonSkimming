prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 17.2.10.5 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119989.PythiaWmunu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119989 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "119989 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 17.2.10.5 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119988.PythiaWmunu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119988 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "119988 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 17.2.10.5 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119987.PythiaWmunu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119987 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "119987 : $? " >>Log.txt
echo
echo



prun --exec "echo %IN > input.txt; './SkimMain.exe' "  \
    --outputs skimmed.root \
    --athenaTag 17.2.10.5 \
    --match '*NTUP*' \
    --inDS mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/ \
    --outDS user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119986 \
    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C SubmitMCWmunuDataOverlay.sh \
    --extFile SkimMain.exe,input.txt \
    --noBuild \
    --nGBPerJob 10 \
    --nFilesPerJob 10 \
echo "119986 : $? " >>Log.txt
echo
echo



