#!binbash

sh dq_get_all_hp.sh

if [ -e input.txt ]
then
  rm input.txt
fi

ls -m -U user.tbalestr.MuonJetsHardProbes.D3PD.Slimmed.*/*root* --color=never > input.txt;tr -d '\n' <input.txt> input2.txt;mv input2.txt input.txt

echo "Merging HP Data..."

root -l -q -b hadd.C+

echo "Done.Cleaning..."

if [ -e HISingleMuonHardProbesData.root ]
then 
  mv HISingleMuonHardProbesData.root HISingleMuonHardProbesData.`date +%m.%d.%Y`.root
fi

echo "Done running script."
