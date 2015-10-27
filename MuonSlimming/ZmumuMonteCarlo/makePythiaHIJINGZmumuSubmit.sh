#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 1199933242 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199933242/"
  elif [ $RUNNUMBER -eq 1199923242  ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199923242/"
  elif [ $RUNNUMBER -eq 1199913242 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199913242/"
  elif [ $RUNNUMBER -eq 1199903242 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199903242/"
  elif [ $RUNNUMBER -eq 1199933241 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199933241/"
  elif [ $RUNNUMBER -eq 1199923241 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.08.v01.1199923241/"
  elif [ $RUNNUMBER -eq 1199913241 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199913241/"
  elif [ $RUNNUMBER -eq 1199903241 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199903241/"
  elif [ $RUNNUMBER -eq 1199933240 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199933240/"
  elif [ $RUNNUMBER -eq 1199923240 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199923240/"
  elif [ $RUNNUMBER -eq 1199913240 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199913240/"
  elif [ $RUNNUMBER -eq 1199903240 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199903240/"
  elif [ $RUNNUMBER -eq 1199933239 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199933239/"
  elif [ $RUNNUMBER -eq 1199923239 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199923239/"
  elif [ $RUNNUMBER -eq 1199913239 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199913239/"
  elif [ $RUNNUMBER -eq 1199903239 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199903239/"
  elif [ $RUNNUMBER -eq 1199933238 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199933238/"
  elif [ $RUNNUMBER -eq 1199913238 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199913238/"
  elif [ $RUNNUMBER -eq 1199903238 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199903238/"
  elif [ $RUNNUMBER -eq 1199923238 ]
  then
    File="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.2013.07.05.v01.1199923238/"
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
prefix="user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.Slimmed."

RUNNO=1
#all
for RUN in 1199933242 1199923242 1199913242 1199903242 1199933241 1199923241 1199913241 1199903241 1199933240 1199923240 1199913240 1199903240 1199933239 1199923239 1199913239 1199903239 1199933238 1199913238 1199903238 1199923238 
#left out tags with failed jobs 1199903242 1199913241
#for RUN in 1199923241 
do

  OUTDS=$prefix$today"v01."

  echo $RUNNO "  " $RUN
  RUNNO=`expr $RUNNO + 1`
  
  echo "prun --exec \"echo %IN > input.txt; './SlimMain.exe' \"  \\" >>$Filename
  echo "    --outputs HISingleMuonZmumuPYTHIAHIJINGOverlay.root \\" >>$Filename
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

