#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 105009 ]
  then
    File="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.2013.04.08.v01.105009/"
  elif [ $RUNNUMBER -eq 105010 ]
  then
    File="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.2013.04.08.v01.105010/"
  elif [ $RUNNUMBER -eq 105011 ]
  then
    File="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.2013.04.08.v01.105011/"
  elif [ $RUNNUMBER -eq 105012 ]
  then
    File="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.2013.04.08.v01.105012/"
  elif [ $RUNNUMBER -eq 105013 ]
  then
    File="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.2013.04.08.v01.105013/"
  elif [ $RUNNUMBER -eq 105014 ]
  then
    File="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.2013.04.08.v01.105014/"
  fi 
  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}


Filename=Submit_PythiaDataOverlay_Jx.sh 
spreadSheetName=MuonPythiaDataOverlayJ0_5.csv

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
prefix="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.Slimmed."

RUNNO=1
for RUN in 105009 105010 105011 105012 105013 105014   
do

  OUTDS=$prefix$today"v01."
  echo $RUNNO "  " $RUN

  RUNNO=`expr $RUNNO + 1`
  echo "prun --exec \"echo %IN > input.txt; './SlimMain.exe' \"  \\" >>$Filename
  echo "    --outputs HISingleMuonJxPYTHIADataOverlay.root \\" >>$Filename
  echo "    --athenaTag 17.2.2.2 \\">>$Filename
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

