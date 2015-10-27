#!binbash

sh dq_get_all_Jets.sh

if [ -e input.txt ]
then
  rm input.txt
fi

ls -m -U user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.Slimmed.2013.*105009*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

echo "Merging J0 MC in Data..."

root -l -q -b hadd.C+

echo "Done.Cleaning..."

if [ -e HISingleMuonJxPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJxPYTHIADataOverlay.root HISingleMuonJ0PYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done.Merging J1 MC in Data..."

ls -m -U user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.Slimmed.2013.*105010*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

root -l -q -b hadd.C+

if [ -e HISingleMuonJxPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJxPYTHIADataOverlay.root HISingleMuonJ1PYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done.Merging J2 MC in Data..."

ls -m -U user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.Slimmed.2013.*105011*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

root -l -q -b hadd.C+

if [ -e HISingleMuonJxPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJxPYTHIADataOverlay.root HISingleMuonJ2PYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done.Merging J3 MC in Data..."

ls -m -U user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.Slimmed.2013.*105012*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

root -l -q -b hadd.C+

if [ -e HISingleMuonJxPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJxPYTHIADataOverlay.root HISingleMuonJ3PYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done.Merging J4 MC in Data..."

ls -m -U user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.Slimmed.2013.*.105013*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

root -l -q -b hadd.C+

if [ -e HISingleMuonJxPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJxPYTHIADataOverlay.root HISingleMuonJ4PYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done.Merging J5 MC in Data..."

ls -m -U user.tbalestr.pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288.Slimmed.2013.*105014*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

root -l -q -b hadd.C+

if [ -e HISingleMuonJxPYTHIADataOverlay.root ]
then 
  mv HISingleMuonJxPYTHIADataOverlay.root HISingleMuonJ5PYTHIADataOverlay.`date +%m.%d.%Y`.root
fi
if [ -e input.txt ]
then
  rm input.txt
fi

echo "Done running script."

