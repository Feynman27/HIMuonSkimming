#!binbash

if [ -e input.txt ]
then
  rm input.txt
fi

ls -m -U user.tbalestr.NTUP_HI.mc11_2TeV.PythiaWmunu_1Lepton.DataOverlay.Slimmed.2013.03.19.v01.*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

echo "Merging Wmunu MC in Data..."

root -l -q -b hadd.C+

echo "Done.Cleaning..."

if [ -e HISingleMuonWmunuPYTHIADataOverlay.root ]
then 
  mv HISingleMuonWmunuPYTHIADataOverlay.root HISingleMuonWmunuPYTHIADataOverlay.`date +%m.%d.%Y`.root
fi

echo "Done running script."
