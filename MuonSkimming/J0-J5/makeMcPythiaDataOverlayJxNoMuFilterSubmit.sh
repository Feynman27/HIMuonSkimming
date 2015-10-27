#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 105009 ]
  then
    File="mc11_2TeV.105009.J0_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288/"
  elif [ $RUNNUMBER -eq 105010 ]
  then
    File="mc11_2TeV.105010.J1_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288/"
  elif [ $RUNNUMBER -eq 105011 ]
  then
    File="mc11_2TeV.105011.J2_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288/"
  elif [ $RUNNUMBER -eq 105012 ]
  then
    File="mc11_2TeV.105012.J3_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288/"
  elif [ $RUNNUMBER -eq 105013 ]
  then
    File="mc11_2TeV.105013.J4_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288/"
  elif [ $RUNNUMBER -eq 105014 ]
  then
    File="mc11_2TeV.105014.J5_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288/"
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
prefix="user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288."

RUNNO=1
for RUN in 105009 105010 105011 105012 105013 105014   
#for RUN in 105014
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
  echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh
  echo "$OUTDS$RUN/,">>$spreadSheetName

done

