#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 209103 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.209103/"
  elif [ $RUNNUMBER -eq 209101 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.209101/"
  elif [ $RUNNUMBER -eq 147804 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.147804/"
  elif [ $RUNNUMBER -eq 147801 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.147801/"
  elif [ $RUNNUMBER -eq 147737 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.147737/"
  elif [ $RUNNUMBER -eq 147735 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.147735/"
  elif [ $RUNNUMBER -eq 147731 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.147731/"
  elif [ $RUNNUMBER -eq 147729 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.2013.10.02.v01.147729/"
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
prefix="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay.Slimmed."

RUNNO=1
#all
for RUN in 209103 209101 147804 147801 147737 147735 147731 147729   
do

  OUTDS=$prefix$today"v03."

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
  echo "    --nGBPerJob=MAX \\">>$Filename
  #echo "    --nGBPerJob 10 \\">>$Filename
  echo "    --nFilesPerJob 7 \\">>$Filename
#  echo "    --maxFileSize 10000000 \\">>$Filename
  echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh
  echo "$OUTDS$RUN/,">>$spreadSheetName

done

