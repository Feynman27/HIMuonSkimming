#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 1199893242 ]
  then
    File="mc11_2TeV.119989.PythiaWmunu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199883242  ]
  then
    File="mc11_2TeV.119988.PythiaWmunu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199873242 ]
  then
    File="mc11_2TeV.119987.PythiaWmunu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199863242 ]
  then
    File="mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1018_s1410_s1412_d668_r3242/"
  elif [ $RUNNUMBER -eq 1199893241 ]
  then
    File="mc11_2TeV.119989.PythiaWmunu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199883241 ]
  then
    File="mc11_2TeV.119988.PythiaWmunu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199873241 ]
  then
    File="mc11_2TeV.119987.PythiaWmunu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199863241 ]
  then
    File="mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1017_s1409_s1412_d667_r3241/"
  elif [ $RUNNUMBER -eq 1199893240 ]
  then
    File="mc11_2TeV.119989.PythiaWmunu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199883240 ]
  then
    File="mc11_2TeV.119988.PythiaWmunu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199873240 ]
  then
    File="mc11_2TeV.119987.PythiaWmunu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199863240 ]
  then
    File="mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1016_s1408_s1412_d666_r3240/"
  elif [ $RUNNUMBER -eq 1199893239 ]
  then
    File="mc11_2TeV.119989.PythiaWmunu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199883239 ]
  then
    File="mc11_2TeV.119988.PythiaWmunu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199873239 ]
  then
    File="mc11_2TeV.119987.PythiaWmunu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199863239 ]
  then
    File="mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1015_s1407_s1412_d665_r3239/"
  elif [ $RUNNUMBER -eq 1199893238 ]
  then
    File="mc11_2TeV.119989.PythiaWmunu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  elif [ $RUNNUMBER -eq 1199873238 ]
  then
    File="mc11_2TeV.119987.PythiaWmunu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  elif [ $RUNNUMBER -eq 1199863238 ]
  then
    File="mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  elif [ $RUNNUMBER -eq 1199883238 ]
  then
    File="mc11_2TeV.119988.PythiaWmunu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1014_s1406_s1412_d660_r3238/"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitMCPmonteCarloESD.sh 

if [ -e $Filename ]
then
  rm $Filename
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
prefix="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.HIJING."

RUNNO=1
#all
for RUN in 1199893242 1199883242 1199873242 1199863242 1199893241 1199883241 1199873241 1199863241 1199893240 1199883240 1199873240 1199863240 1199893239 1199883239 1199873239 1199863239 1199893238 1199873238 1199863238 1199883238 
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
  echo "    --nGBPerJob 10 \\">>$Filename
  echo "    --nFilesPerJob 10 \\">>$Filename
  #echo "    --maxFileSize 10000000 \\">>$Filename
#  echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh

done

