#!binbash

echo "Submitting all slim jobs..."
cd DataPbPb2011; sh SubmitMuonHardProbesD3PD.sh; cd ../
#cd J0-J5; sh Submit_PythiaDataOverlay_Jx.sh; cd ../
cd Jx1muMonteCarlo; sh Submit_PythiaDataOverlay_Jx1mu.sh; cd ../
cd WmunuMonteCarlo; sh SubmitMCWmunuDataOverlay.sh; cd ../
cd ZmumuMonteCarlo; sh SubmitMCZmumuDataOverlay.sh; cd ../
echo "Done running script."
