#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 119986 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119986/"
  elif [ $RUNNUMBER -eq 119987  ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119987/"
  elif [ $RUNNUMBER -eq 119988 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119988/"
  elif [ $RUNNUMBER -eq 119989 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.2013.08.18.v01.119989/"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitMCWmunuDataOverlay.sh 
spreadSheetName=MuonMCWmunuDataOverlaySlimmed.csv

if [ -e $Filename ]
then
  rm $Filename
fi

if [ -e dq_get_all.sh ]
then
  rm dq_get_all.sh
fi

if [ -e $spreadSheetName ]
then
  rm $spreadSheetName
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
prefix="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.Slimmed."

RUNNO=1
#all
for RUN in 119989 119988 119987 119986  
#for RUN in 119989
do

  OUTDS=$prefix$today"v01."

  echo $RUNNO "  " $RUN
  RUNNO=`expr $RUNNO + 1`
  
  echo "prun --exec \"echo %IN > input.txt; './SlimMain.exe' \"  \\" >>$Filename
  echo "    --outputs HISingleMuonWmunuPYTHIADataOverlay.root \\" >>$Filename
  echo "    --athenaTag 17.2.10.5 \\">>$Filename
  echo "    --match '*skimmed*' \\">>$Filename
  runname $RUN $Filename
  echo "    --outDS $OUTDS$RUN \\">>$Filename
  echo "    --excludeFile .svn,Log.txt,make_submit_New.sh,filter.sh,check.sh,*.o,*.h,*.C $Filename \\">>$Filename
  echo "    --extFile SlimMain.exe ,input.txt \\">>$Filename
#  echo "    --noCompile \\">>$Filename
  echo "    --noBuild \\">>$Filename
  #echo "    --nGBPerJob=MAX \\">>$Filename
  echo "    --nGBPerJob 10 \\">>$Filename
  echo "    --nFilesPerJob 10 \\">>$Filename
#  echo "    --maxFileSize 10000000 \\">>$Filename
  echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh
  echo "$OUTDS$RUN/,">>$spreadSheetName

done

