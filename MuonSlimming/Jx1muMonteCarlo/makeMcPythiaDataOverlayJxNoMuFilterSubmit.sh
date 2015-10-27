#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 119120 ]
  then
    File="user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.05.v01.119120/"
  elif [ $RUNNUMBER -eq 119121  ]
  then
    File="user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.10.v01.119121/"
  elif [ $RUNNUMBER -eq 119122 ]
  then
    File="user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.recon.NTUP_HI.e1365_d724_r3635.2013.07.05.v01.119122/"
  fi 
  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}


Filename=Submit_PythiaDataOverlay_Jx1mu.sh 
spreadSheetName=MuonPythiaDataOverlayJx1mu.csv

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
prefix="user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.Slimmed."

RUNNO=1
for RUN in 119120 119121 119122 
#for RUN in 119120 119121 
#for RUN in 119122
do

  OUTDS=$prefix$today"v01."
  echo $RUNNO "  " $RUN

  RUNNO=`expr $RUNNO + 1`
  echo "prun --exec \"echo %IN > input.txt; './SlimMain.exe' \"  \\" >>$Filename
  echo "    --outputs HISingleMuonJx1muPYTHIADataOverlay.root \\" >>$Filename
  echo "    --athenaTag 17.2.10.5 \\">>$Filename
  echo "    --match '*skimmed*' \\">>$Filename
  runname $RUN $Filename
  echo "    --outDS $OUTDS$RUN \\">>$Filename
  echo "    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C $Filename \\">>$Filename
  echo "    --extFile SlimMain.exe,input.txt \\">>$Filename
#  echo "    --noCompile \\">>$Filename
  echo "    --noBuild \\">>$Filename
  #echo "    --nGBPerJob=MAX \\">>$Filename
#  echo "    --nGBPerJob 10 \\">>$Filename
#  echo "    --nFilesPerJob 10 \\">>$Filename
  echo "    --nGBPerJob=MAX \\">>$Filename
  echo "    --nFilesPerJob 5 \\">>$Filename
#  echo "    --maxFileSize 10000000 \\">>$Filename
  echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh
  echo "$OUTDS$RUN/,">>$spreadSheetName

done

