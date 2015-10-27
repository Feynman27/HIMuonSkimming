#!binbash

echo "Submitting all skim jobs..."
cd DataPbPb2011; sh SubmitMuonHardProbesD3PD.sh; sh SubmitMuonMinBiasD3PD.sh; cd ../
cd J0-J5; sh Submit_PythiaDataOverlay_Jx.sh; cd ../
cd Jx1muMonteCarlo; sh Submit_pythiaDataOverlay_jetjet_1muon.sh; cd ../
cd WmunuMonteCarlo; sh SubmitMCWmunuDataOverlay.sh; cd ../
cd ZmumuMonteCarlo; sh SubmitZmumuMonteCarlo.sh; cd ../
echo "Done running script."
