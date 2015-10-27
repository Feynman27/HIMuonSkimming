#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 147733 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.147733/"
  elif [ $RUNNUMBER -eq 209105 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.209105/"
  elif [ $RUNNUMBER -eq 147739 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.147739/"
  elif [ $RUNNUMBER -eq 147807 ]
  then
    File="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.2014.05.18.v03.147807/"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitMCZmumuDataOverlay.sh 
spreadSheetName=MuonMCZmumuDataOverlaySlimmed.csv

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
prefix="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay.Slimmed."

RUNNO=1
#all
for RUN in 147733 209105 147739 147807   
#for RUN in 147733 209105    
do

  OUTDS=$prefix$today"v05."

  echo $RUNNO "  " $RUN
  RUNNO=`expr $RUNNO + 1`
  
  echo "prun --exec \"echo %IN > input.txt; './SlimMain.exe' \"  \\" >>$Filename
  echo "    --outputs HISingleMuonZmumuPYTHIADataOverlay.root \\" >>$Filename
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

