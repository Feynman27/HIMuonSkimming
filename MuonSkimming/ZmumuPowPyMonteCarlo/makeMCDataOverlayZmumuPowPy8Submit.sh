#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 147739 ]
  then
    File="mc11_2TeV.147739.PowhegPythia8_AU2CT10_Zmumu_np.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147807 ]
  then
    File="mc11_2TeV.147807.PowhegPythia8_AU2CT10_Zmumu.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 209105 ]
  then
    File="mc11_2TeV.209105.PowhegPythia8_AU2CT10_Zmumu_nn.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147733 ]
  then
    File="mc11_2TeV.147733.PowhegPythia8_AU2CT10_Zmumu_pn.recon.NTUP_HI.e2310_d750_r4789/"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitMCZmumuPowPy8DataOverlay.sh 
spreadSheetName=MuonMCZmumuPowPy8DataOverlay.csv

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
prefix="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Zmumu.DataOverlay."

RUNNO=1
#all
for RUN in 147739 147807 209105 147733  
#for RUN in 147733 209105    
#for RUN in 147739 147807    
do

  OUTDS=$prefix$today"v05."

  echo $RUNNO "  " $RUN
  RUNNO=`expr $RUNNO + 1`
  
  echo "prun --exec \"echo %IN > input.txt; './SkimMain.exe' \"  \\" >>$Filename
  echo "    --outputs skimmed.root \\" >>$Filename
  echo "    --athenaTag 19.0.1 \\">>$Filename
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

