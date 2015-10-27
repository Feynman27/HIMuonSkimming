#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 119988 ]
  then
    File="mc11_2TeV.119988.PythiaWmunu_1Lepton_npBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/"
  elif [ $RUNNUMBER -eq 119986  ]
  then
    File="mc11_2TeV.119986.PythiaWmunu_1Lepton_ppBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/"
  elif [ $RUNNUMBER -eq 119987 ]
  then
    File="mc11_2TeV.119987.PythiaWmunu_1Lepton_pnBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/"
  elif [ $RUNNUMBER -eq 119989 ]
  then
    File="mc11_2TeV.119989.PythiaWmunu_1Lepton_nnBeam_276TeV.recon.NTUP_HI.e1365_d724_r3635/"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitMCWmunuDataOverlay.sh 
spreadSheetName=MuonMCWmunuDataOverlay.csv

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
prefix="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay."

RUNNO=1
#all
for RUN in 119989 119988 119987 119986  
#for RUN in 119989
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
  echo "$OUTDS$RUN/,">>$spreadSheetName

done

