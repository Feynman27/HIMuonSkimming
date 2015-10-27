#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 192530 ]
  then
    File="data11_hi.00192530.physics_MinBias.merge.NTUP_HI.x164_m1029"
  elif [ $RUNNUMBER -eq 192534 ]
  then
    File="data11_hi.00192534.physics_MinBias.merge.NTUP_HI.x164_m1029"
  elif [ $RUNNUMBER -eq 193211 ]
  then
    File="data11_hi.00193211.physics_MinBias.merge.NTUP_HI.f418_m1035"
  elif [ $RUNNUMBER -eq 193270 ]
  then
    File="data11_hi.00193270.physics_MinBias.merge.NTUP_HI.f419_m1040"
  elif [ $RUNNUMBER -eq 193291 ]
  then
    File="data11_hi.00193291.physics_MinBias.merge.NTUP_HI.f419_m1040"
  elif [ $RUNNUMBER -eq 193294 ]
  then
    File="data11_hi.00193294.physics_MinBias.merge.NTUP_HI.f419_m1040"
  elif [ $RUNNUMBER -eq 193295 ]
  then
    File="data11_hi.00193295.physics_MinBias.merge.NTUP_HI.f419_m1040"
  elif [ $RUNNUMBER -eq 193321 ]
  then
    File="data11_hi.00193321.physics_MinBias.merge.NTUP_HI.f419_m1040"
  elif [ $RUNNUMBER -eq 193402 ]
  then
    File="data11_hi.00193402.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq 193403 ]
  then
    File="data11_hi.00193403.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq 193411 ]
  then
    File="data11_hi.00193411.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq 193412 ]
  then
    File="data11_hi.00193412.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq 193447 ]
  then
    File="data11_hi.00193447.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq  193463 ]
  then
    File="data11_hi.00193463.physics_MinBias.merge.NTUP_HI.f419_m1040"
  elif [ $RUNNUMBER -eq  193481 ]
  then
    File="data11_hi.00193481.physics_MinBias.merge.NTUP_HI.f424_m1059"
#  elif [ $RUNNUMBER -eq  193491 ]
#  then
#    File="data11_hi.00193491.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq  193491 ]
  then
    File="data11_hi.00193491.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq  193492 ]
  then
    File="data11_hi.00193492.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq  193493 ]
  then
    File="data11_hi.00193493.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq  193494 ]
  then
    File="data11_hi.00193494.physics_MinBias.merge.NTUP_HI.f421_m1045"
  elif [ $RUNNUMBER -eq  193546 ]
  then
    File="data11_hi.00193546.physics_MinBias.merge.NTUP_HI.f419_m1040"
#  elif [ $RUNNUMBER -eq  193599 ]
#  then
#    File="data11_hi.00193599.physics_MinBias.merge.NTUP_HI.f422_m1050"
  elif [ $RUNNUMBER -eq  193599 ]
  then
    File="data11_hi.00193599.physics_MinBias.merge.NTUP_HI.f424_m1059"
#  elif [ $RUNNUMBER -eq  193604 ]
#  then
#    File="data11_hi.00193604.physics_MinBias.merge.NTUP_HI.f423_m1050"

#  elif [ $RUNNUMBER -eq  193558 ]
#  then
#    File="data11_hi.00193558.physics_MinBias.merge.NTUP_HI.f422_m1050"

  elif [ $RUNNUMBER -eq  193558 ]
  then
    File="data11_hi.00193558.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq  193604 ]
  then
    File="data11_hi.00193604.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq  193662 ]
  then
    File="data11_hi.00193662.physics_MinBias.merge.NTUP_HI.f421_m1045"
    elif [ $RUNNUMBER -eq  193655 ]
  then
    File="data11_hi.00193655.physics_MinBias.merge.NTUP_HI.f421_m1045"
    elif [ $RUNNUMBER -eq  193641 ]
  then
    File="data11_hi.00193641.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq  193679 ]
  then
    File="data11_hi.00193679.physics_MinBias.merge.NTUP_HI.f421_m1045"
#  elif [ $RUNNUMBER -eq  193687 ]
#  then
#    File="data11_hi.00193687.physics_MinBias.merge.NTUP_HI.f423_m1050"
  elif [ $RUNNUMBER -eq  193687 ]
  then
    File="data11_hi.00193687.physics_MinBias.merge.NTUP_HI.f424_m1059"
#  elif [ $RUNNUMBER -eq  193718 ]
#  then
#    File="data11_hi.00193718.physics_MinBias.merge.NTUP_HI.f423_m1050"
  elif [ $RUNNUMBER -eq  193718 ]
  then
    File="data11_hi.00193718.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq  193795 ]
  then
    File="data11_hi.00193795.physics_MinBias.merge.NTUP_HI.f421_m1045"

#  elif [ $RUNNUMBER -eq 193823 ]
#  then
#    File="data11_hi.00193823.physics_MinBias.merge.NTUP_HI.f423_m1050"

  elif [ $RUNNUMBER -eq 193823 ]
  then
    File="data11_hi.00193823.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 193825 ]
  then
    File="data11_hi.00193825.physics_MinBias.merge.NTUP_HI.f422_m1050"
  elif [ $RUNNUMBER -eq 193826 ]
  then
    File="data11_hi.00193826.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 193834 ]
  then
    File="data11_hi.00193834.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 193890 ]
  then
    File="data11_hi.00193890.physics_MinBias.merge.NTUP_HI.f422_m1050"
  elif [ $RUNNUMBER -eq 194017 ]
  then
    File="data11_hi.00194017.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194060 ]
  then
    File="data11_hi.00194060.physics_MinBias.merge.NTUP_HI.f422_m1050"
  elif [ $RUNNUMBER -eq 194061 ]
  then
    File="data11_hi.00194061.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194079 ]
  then
    File="data11_hi.00194079.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194121 ]
  then
    File="data11_hi.00194121.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194160 ]
  then
    File="data11_hi.00194160.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194163 ]
  then
    File="data11_hi.00194163.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194179 ]
  then
    File="data11_hi.00194179.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194192 ]
  then
    File="data11_hi.00194192.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194193 ]
  then
    File="data11_hi.00194193.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194287 ]
  then
    File="data11_hi.00194287.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194370 ]
  then
    File="data11_hi.00194370.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194374 ]
  then
    File="data11_hi.00194374.physics_MinBias.merge.NTUP_HI.f424_m1059"
  elif [ $RUNNUMBER -eq 194382 ]
  then
    File="data11_hi.00194382.physics_MinBias.merge.NTUP_HI.f424_m1059"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitMuonMinBiasD3PD.sh 
spreadSheetName=MuonMinBiasD3PD.csv

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
prefix="user.tbalestr.MuonJetsMinBias.D3PD."

RUNNO=1

#all runs
for RUN in 193321 193295 193294 193291 193270 193546 193463 193447 193412 193411 193403 193402 193604 193641 193687 193718 193823 194060 194121 194179 194192 194193 194382 194374 194370 194287 194163 194160 194079 194061 194017 193834 193826 193825 193599 193558 193662 193679 193890 193481 193491 193492 193493 193494 193655 193795 193211 

#for RUN in 193294 193604
#for RUN in 193641 193826 194079 193687 193718 193463 193294 193403 194193 193321 194382 193447 193679 193494 194374 193655 194121 193211 193825 193412 194287 193546 194160 193270 193493 193492 193890 194370 193402 194163 193291 194192 193662 193604 193411 194060 193795 193295 
#for RUN in 193294 193403 193718 194382 193687 193641 193655 194287 193826 194370 194079 194061 193834 193411 193599 193463 193662 193447 193481 194160 193412 193546 193491 193493 193679 194192 193321 193604 194060 193558 194017 194163 194374 193402 193295 193270 194193 193823 194121 193211 193825 193890 193492 194179 193494 193291 193795
do

  OUTDS=$prefix$today"v01."
  echo $RUNNO "  " $RUN
  RUNNO=`expr $RUNNO + 1`

  echo "prun --exec \"echo %IN > input.txt; './SkimMain.exe' \"  \\" >>$Filename
  echo "    --outputs skimmed.root \\" >>$Filename
  echo "    --athenaTag 19.3.0 \\">>$Filename
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
  #echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh
  echo "$OUTDS$RUN/,">>$spreadSheetName


done

