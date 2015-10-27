#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 1199933242 ]
  then
    File="mc11_2TeV.119993.PythiaZmumu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199923242  ]
  then
    File="mc11_2TeV.119992.PythiaZmumu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199913242 ]
  then
    File="mc11_2TeV.119991.PythiaZmumu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199903242 ]
  then
    File="mc11_2TeV.119990.PythiaZmumu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199933241 ]
  then
    File="mc11_2TeV.119993.PythiaZmumu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199923241 ]
  then
    File="mc11_2TeV.119992.PythiaZmumu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199913241 ]
  then
    File="mc11_2TeV.119991.PythiaZmumu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199903241 ]
  then
    File="mc11_2TeV.119990.PythiaZmumu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199933240 ]
  then
    File="mc11_2TeV.119993.PythiaZmumu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199923240 ]
  then
    File="mc11_2TeV.119992.PythiaZmumu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199913240 ]
  then
    File="mc11_2TeV.119991.PythiaZmumu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199903240 ]
  then
    File="mc11_2TeV.119990.PythiaZmumu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199933239 ]
  then
    File="mc11_2TeV.119993.PythiaZmumu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199923239 ]
  then
    File="mc11_2TeV.119992.PythiaZmumu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199913239 ]
  then
    File="mc11_2TeV.119991.PythiaZmumu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199903239 ]
  then
    File="mc11_2TeV.119990.PythiaZmumu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199933238 ]
  then
    File="mc11_2TeV.119993.PythiaZmumu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  elif [ $RUNNUMBER -eq 1199913238 ]
  then
    File="mc11_2TeV.119991.PythiaZmumu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  elif [ $RUNNUMBER -eq 1199903238 ]
  then
    File="mc11_2TeV.119990.PythiaZmumu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  elif [ $RUNNUMBER -eq 1199923238 ]
  then
    File="mc11_2TeV.119992.PythiaZmumu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitZmumuMonteCarlo.sh 
spreadSheetName=MuonZmumuMonteCarloHIJING.csv

if [ -e $Filename ]
then
  rm $Filename
fi

if [ -e $spreadSheetName ]
then
  rm $spreadSheetName
fi

if [ -e dq_get_all.sh ]
then
  rm dq_get_all.sh
fi

if [ -e check_site.sh  ]
then
  rm check_site.sh
fi


if [ -e check.sh  ]
then
  rm check.sh
fi

aa="my"$1
if test $aa = "myclean"
then
   exit 0
fi



today=`date +%Y.%m.%d.`
prefix="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton."

RUNNO=1
#all
#for RUN in 1199933242 1199923242 1199913242 1199903242 1199933241 1199923241 1199913241 1199903241 1199933240 1199923240 1199913240 1199903240 1199933239 1199923239 1199913239 1199903239 1199933238 1199913238 1199903238 1199923238 
for RUN in 1199923241 
#for RUN in 1199913241
do

  OUTDS=$prefix$today"v01."

  echo $RUNNO "  " $RUN
  RUNNO=`expr $RUNNO + 1`
  
  echo "prun --exec \"echo %IN > input.txt; './SkimMain.exe' \"  \\" >>$Filename
  echo "    --outputs skimmed.root \\" >>$Filename
  echo "    --athenaTag 17.2.10.5 \\">>$Filename
  echo "    --match '*NTUP*' \\">>$Filename
  runname $RUN $Filename
  echo "    --outDS $OUTDS$RUN \\">>$Filename
  echo "    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C $Filename \\">>$Filename
  echo "    --extFile SkimMain.exe,input.txt \\">>$Filename
  echo "    --noBuild \\">>$Filename
  #echo "    --noCompile \\">>$Filename
  echo "    --nGBPerJob 3 \\">>$Filename
  echo "    --nFilesPerJob 3 \\">>$Filename
  #echo "    --maxFileSize 10000000 \\">>$Filename
#  echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh
  echo "$OUTDS$RUN/,">>$spreadSheetName

done

