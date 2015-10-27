#include "TruthBranch.h"

//----------------------------------------------------------------------
std::vector<float> TruthBranch::jetCorrelation(int ijet, int pdg){

	std::vector<float> jetpdgDeltaR;	
	int ipdg = 0;
	float deltaR = -9999;

	for(int igen = 0; igen<mc_n; ++igen){

	  //particle of interest to correlate w/ jet
	  if(fabs(mc_gen_type->at(igen))==pdg){
		
		float jetEta = (antikt2HIItrEM_eta->at(ijet)); 
		float jetPhi = (antikt2HIItrEM_phi->at(ijet)); 

		float pdgEta = mc_gen_eta->at(igen); 
		float pdgPhi = mc_gen_phi->at(igen);

		float dphi = jetPhi - pdgPhi;
		if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between -Pi and +Pi
		float deta = jetEta - pdgEta;

		deltaR = TMath::Sqrt(dphi*dphi+deta*deta) ;
	  
	  	if(deltaR<0.3) {
			ipdg++;
			jetpdgDeltaR.push_back(deltaR);
		}
	}
   }

   if(ipdg==0) jetpdgDeltaR.push_back(-9999.);
   return jetpdgDeltaR;
}

int TruthBranch::countTruth(int pdg){
	
        int nTruth = 0;

	for(int i = 0; i<mc_n; ++i){

	  if(fabs(mc_gen_mothertype->at(i))==24&&fabs(mc_gen_type->at(i))==pdg){
	  
	   nTruth++;

	  } else continue;
	}

	return nTruth;
}
//----------------------------------------------------------------------

void TruthBranch::Fill_Truth_Branches(){

	int imu = 0;
	int inu = 0;
	int igamma = 0;

	for(int i = 0; i<mc_n; ++i){
	
	  if(fabs(mc_gen_mothertype->at(i))==24&&fabs(mc_gen_type->at(i))==13){
		mc_mu_gen_E[imu] = mc_gen_E->at(i)/1000.;
		mc_mu_gen_pt[imu] = mc_gen_pt->at(i)/1000.;
		mc_mu_gen_eta[imu] = mc_gen_eta->at(i);
		mc_mu_gen_phi[imu] = mc_gen_phi->at(i);
		mc_mu_gen_type[imu] = mc_gen_type->at(i);
		mc_mu_gen_status[imu] = mc_gen_status->at(i);
		mc_mu_gen_barcode[imu] = mc_gen_barcode->at(i);
		mc_mu_gen_mothertype[imu] = mc_gen_mothertype->at(i);
		mc_mu_gen_motherbarcode[imu] = mc_gen_motherbarcode->at(i);
		mc_mu_charge[imu] = mc_charge->at(i);
			
		for(int j = 0; j<mc_n; ++j){

	  		if(fabs(mc_gen_mothertype->at(j))==24&&fabs(mc_gen_type->at(j))==14){
			        	
				mc_nu_gen_E[inu] = mc_gen_E->at(j)/1000.;
				mc_nu_gen_pt[inu] = mc_gen_pt->at(j)/1000.;
				mc_nu_gen_eta[inu] = mc_gen_eta->at(j);
				mc_nu_gen_phi[inu] = mc_gen_phi->at(j);
				mc_nu_gen_type[inu] = mc_gen_type->at(j);
				mc_nu_gen_status[inu] = mc_gen_status->at(j);
				mc_nu_gen_barcode[inu] = mc_gen_barcode->at(j);
				mc_nu_gen_mothertype[inu] = mc_gen_mothertype->at(j);
				mc_nu_gen_motherbarcode[inu] = mc_gen_motherbarcode->at(j);
				mc_nu_charge[inu] = mc_charge->at(j);
				
				TLorentzVector vmu,vnu,vsum ;

				vmu.SetPtEtaPhiE(mc_mu_gen_pt[imu],mc_mu_gen_eta[imu],mc_mu_gen_phi[imu],mc_mu_gen_E[imu]);
				vnu.SetPtEtaPhiE(mc_nu_gen_pt[inu],mc_nu_gen_eta[inu],mc_nu_gen_phi[inu],mc_nu_gen_E[inu]);

				vsum = vmu+vnu;
				mc_gen_WbosonMass = vsum.M();
				mc_gen_WbosonPt = vsum.Pt();
				mc_gen_WbosonPhi = vsum.Phi();
				mc_gen_WbosonRapidity = vsum.Rapidity();
				mc_gen_WbosonPseudoRapidity = vsum.PseudoRapidity();

				inu++;
			} else continue;
		}

	  	imu++;
	  } 
	  
	 if(fabs(mc_gen_mothertype->at(i))==24&&fabs(mc_gen_type->at(i))==22){
	  
				mc_gamma_gen_E[igamma] = mc_gen_E->at(i)/1000.;
				mc_gamma_gen_pt[igamma] = mc_gen_pt->at(i)/1000.;
				mc_gamma_gen_eta[igamma] = mc_gen_eta->at(i);
				mc_gamma_gen_phi[igamma] = mc_gen_phi->at(i);
				mc_gamma_gen_type[igamma] = mc_gen_type->at(i);
				mc_gamma_gen_status[igamma] = mc_gen_status->at(i);
				mc_gamma_gen_barcode[igamma] = mc_gen_barcode->at(i);
				mc_gamma_gen_mothertype[igamma] = mc_gen_mothertype->at(i);
				mc_gamma_gen_motherbarcode[igamma] = mc_gen_motherbarcode->at(i);
				mc_gamma_charge[igamma] = mc_charge->at(i);
				
				igamma++;

	    }
	}

	mc_mu_n = imu;
	mc_nu_n = inu;
	mc_gamma_n = igamma;


   	for(int i=0;i<antikt2HIItrEM_n;i++){
		
		eljetDeltaR->push_back(jetCorrelation(i, 11));
		gammajetDeltaR->push_back(jetCorrelation(i, 22));
	}

}

//----------------------------------------------------------------------

void TruthBranch::Set_Truth_Branches( TTree *myTree)
{
	myTree->Branch("mc_mu_n",&mc_mu_n,"mc_mu_n/I");
	myTree->Branch("mc_mu_gen_E",&mc_mu_gen_E,"mc_mu_gen_E[mc_mu_n]/F");
	myTree->Branch("mc_mu_gen_pt",&mc_mu_gen_pt,"mc_mu_gen_pt[mc_mu_n]/F");
	myTree->Branch("mc_mu_gen_eta",&mc_mu_gen_eta,"mc_mu_gen_eta[mc_mu_n]/F");
	myTree->Branch("mc_mu_gen_phi",&mc_mu_gen_phi,"mc_mu_gen_phi[mc_mu_n]/F");
	myTree->Branch("mc_mu_gen_type",&mc_mu_gen_type,"mc_mu_gen_type[mc_mu_n]/I");
	myTree->Branch("mc_mu_gen_status",&mc_mu_gen_status,"mc_mu_gen_status[mc_mu_n]/I");
	myTree->Branch("mc_mu_gen_barcode",&mc_mu_gen_barcode,"mc_mu_gen_barcode[mc_mu_n]/I");
	myTree->Branch("mc_mu_gen_mothertype",&mc_mu_gen_mothertype,"mc_mu_gen_mothertype[mc_mu_n]/I");
	myTree->Branch("mc_mu_gen_motherbarcode",&mc_mu_gen_motherbarcode,"mc_mu_gen_motherbarcode[mc_mu_n]/I");
	myTree->Branch("mc_mu_charge",&mc_mu_charge,"mc_mu_charge[mc_mu_n]/F");

	myTree->Branch("mc_nu_n",&mc_nu_n,"mc_nu_n/I");
	myTree->Branch("mc_nu_gen_E",&mc_nu_gen_E,"mc_nu_gen_E[mc_nu_n]/F");
	myTree->Branch("mc_nu_gen_pt",&mc_nu_gen_pt,"mc_nu_gen_pt[mc_nu_n]/F");
	myTree->Branch("mc_nu_gen_eta",&mc_nu_gen_eta,"mc_nu_gen_eta[mc_nu_n]/F");
	myTree->Branch("mc_nu_gen_phi",&mc_nu_gen_phi,"mc_nu_gen_phi[mc_nu_n]/F");
	myTree->Branch("mc_nu_gen_type",&mc_nu_gen_type,"mc_nu_gen_type[mc_nu_n]/I");
	myTree->Branch("mc_nu_gen_status",&mc_nu_gen_status,"mc_nu_gen_status[mc_nu_n]/I");
	myTree->Branch("mc_nu_gen_barcode",&mc_nu_gen_barcode,"mc_nu_gen_barcode[mc_nu_n]/I");
	myTree->Branch("mc_nu_gen_mothertype",&mc_nu_gen_mothertype,"mc_nu_gen_mothertype[mc_nu_n]/I");
	myTree->Branch("mc_nu_charge",&mc_nu_charge,"mc_nu_charge[mc_nu_n]/F");
	myTree->Branch("mc_gen_WbosonMass",&mc_gen_WbosonMass,"mc_gen_WbosonMass[mc_nu_n]/F");
	myTree->Branch("mc_gen_WbosonPt",&mc_gen_WbosonPt,"mc_gen_WbosonPt[mc_nu_n]/F");
	myTree->Branch("mc_gen_WbosonPhi",&mc_gen_WbosonPhi,"mc_gen_WbosonPhi[mc_nu_n]/F");
	myTree->Branch("mc_gen_WbosonRapidity",&mc_gen_WbosonRapidity,"mc_gen_WbosonRapidity[mc_nu_n]/F");
	myTree->Branch("mc_gen_WbosonPseudoRapidity",&mc_gen_WbosonPseudoRapidity,"mc_gen_WbosonPseudoRapidity[mc_nu_n]/F");

	myTree->Branch("mc_gamma_n",&mc_gamma_n,"mc_gamma_n/I");
	myTree->Branch("mc_gamma_gen_E",&mc_gamma_gen_E,"mc_gamma_gen_E[mc_gamma_n]/F");
	myTree->Branch("mc_gamma_gen_pt",&mc_gamma_gen_pt,"mc_gamma_gen_pt[mc_gamma_n]/F");
	myTree->Branch("mc_gamma_gen_eta",&mc_gamma_gen_eta,"mc_gamma_gen_eta[mc_gamma_n]/F");
	myTree->Branch("mc_gamma_gen_phi",&mc_gamma_gen_phi,"mc_gamma_gen_phi[mc_gamma_n]/F");
	myTree->Branch("mc_gamma_gen_type",&mc_gamma_gen_type,"mc_gamma_gen_type[mc_gamma_n]/I");
	myTree->Branch("mc_gamma_gen_status",&mc_gamma_gen_status,"mc_gamma_gen_status[mc_gamma_n]/I");
	myTree->Branch("mc_gamma_gen_barcode",&mc_gamma_gen_barcode,"mc_gamma_gen_barcode[mc_gamma_n]/I");
	myTree->Branch("mc_gamma_gen_mothertype",&mc_gamma_gen_mothertype,"mc_gamma_gen_mothertype[mc_gamma_n]/I");
	myTree->Branch("mc_gamma_charge",&mc_gamma_charge,"mc_gamma_charge[mc_gamma_n]/F");

	myTree->Branch("eljetDeltaR","vector<vector<float> >",&eljetDeltaR);
	myTree->Branch("gammajetDeltaR","vector<vector<float> >",&gammajetDeltaR);

}

TruthBranch::TruthBranch(){
	eljetDeltaR = 0;	
	gammajetDeltaR = 0;	
}
