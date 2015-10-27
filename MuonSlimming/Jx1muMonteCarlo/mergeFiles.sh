#!binbash

if [ -e input.txt ]
then
  rm input.txt
fi

ls -m -U user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.Slimmed.2013.*119120*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

echo "Merging J1+1mu MC in Data..."

root -l -q -b hadd.C+

echo "Done.Cleaning..."

if [ -e HISingleMuonJx1muPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJx1muPYTHIADataOverlay.root HISingleMuonJ1_1muPYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done.Merging J2+1mu MC in Data..."

ls -m -U user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.Slimmed.2013.*119121*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

root -l -q -b hadd.C+

echo "Done.Cleaning..."

if [ -e HISingleMuonJx1muPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJx1muPYTHIADataOverlay.root HISingleMuonJ2_1muPYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done.Merging J3+1mu MC in Data..."

ls -m -U user.tbalestr.mc11_2TeV.pythiaDataOverlay_jetjet_1muon_3p5Ptcut.Slimmed.2013.*119122*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

root -l -q -b hadd.C+

echo "Done.Cleaning."

if [ -e HISingleMuonJx1muPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJx1muPYTHIADataOverlay.root HISingleMuonJ3_1muPYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done running script."
