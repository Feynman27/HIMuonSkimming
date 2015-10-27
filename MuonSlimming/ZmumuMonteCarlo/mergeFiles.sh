#!binbash

sh dq_get_all_Z.sh

if [ -e input.txt ]
then
  rm input.txt
fi

ls -m -U user.tbalestr.NTUP_HI.mc11_2TeV.PythiaZmumu_1Lepton.Slimmed.*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

echo "Merging Z MC in HIJING..."

root -l -q -b hadd.C+

echo "Done.Cleaning..."

if [ -e HISingleMuonZmumuPYTHIAHIJINGOverlay.root ]
then 
  mv HISingleMuonZmumuPYTHIAHIJINGOverlay.root HISingleMuonZmumuPYTHIAHIJINGOverlay.`date +%m.%d.%Y`.root
fi

echo "Done running script."
