#!/bin/zsh

runname()
{
 RUNNUMBER=$1
 FileName=$2

  if [ $RUNNUMBER -eq 209103 ]
  then
    File="mc11_2TeV.209103.PowhegPythia8_AU2CT10_Wminmunu_nn.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 209101 ]
  then
    File="mc11_2TeV.209101.PowhegPythia8_AU2CT10_Wplusmunu_nn.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147804 ]
  then
    File="mc11_2TeV.147804.PowhegPythia8_AU2CT10_Wminmunu.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147801 ]
  then
    File="mc11_2TeV.147801.PowhegPythia8_AU2CT10_Wplusmunu.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147737 ]
  then
    File="mc11_2TeV.147737.PowhegPythia8_AU2CT10_Wminmunu_np.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147735 ]
  then
    File="mc11_2TeV.147735.PowhegPythia8_AU2CT10_Wplusmunu_np.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147731 ]
  then
    File="mc11_2TeV.147731.PowhegPythia8_AU2CT10_Wminmunu_pn.recon.NTUP_HI.e2310_d750_r4789/"
  elif [ $RUNNUMBER -eq 147729 ]
  then
    File="mc11_2TeV.147729.PowhegPythia8_AU2CT10_Wplusmunu_pn.recon.NTUP_HI.e2310_d750_r4789/"
  fi

  echo "    --inDS $File \\">> $FileName
  echo "dq2-ls $File ">> check.sh
}






Filename=SubmitMCWmunuPowPy8DataOverlay.sh 
spreadSheetName=MuonMCWmunuPowPy8DataOverlay.csv

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
prefix="user.tbalestr.NTUP_HI.PowhegPythia8_AU2CT10_Wmunu.DataOverlay."

RUNNO=1
#all
for RUN in 209103 209101 147804 147801 147737 147735 147731 147729   
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
#  echo "    --mergeOutput">>$Filename
  echo "echo \"$RUN : \$? \" >>Log.txt">>$Filename
  echo "echo">>$Filename
  echo "echo">>$Filename
  echo -e "\n\n">>$Filename

  echo "dq2-get -f \"*root*\" $OUTDS$RUN/" >>dq_get_all.sh
  echo "$OUTDS$RUN/,">>$spreadSheetName

done

