#include "MuonSlim.h"

MuonSmear::SmearingClass mcp_smear("Data11","muid","pT","Rel17","MuonMomentumCorrections/share/");

////////////////////////////////////////////////////////////////////////////////////
//assign centrality using fcal energy (TeV)/////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

float MuonSlim::AssignCentrality(float fcal_Et, bool isHI = false, bool isHIp = false){

float centralityTemp = -1.;

if(isHI){
	  if(fcal_Et > 2.8038) {
	    centralityTemp = 0.025; //0-5%
	  }
	  else if (fcal_Et > 2.3102){
	    centralityTemp = 0.075 ; //5-10%
	  }
	  else if (fcal_Et > 1.9073){
	    centralityTemp = 0.125 ; //10-15%
	  }
	  else if (fcal_Et > 1.5707){
	    centralityTemp = 0.175 ; //15-20%
	  }
	  else if (fcal_Et > 1.0448){
	    centralityTemp = 0.25 ; //20-30%
	  }
	  else if (fcal_Et > 0.6624){
	    centralityTemp = 0.35 ; //30-40%
	  }
	  else if (fcal_Et > 0.3909){
	    centralityTemp = 0.45 ;  //40-50%
	  }
	  else if (fcal_Et > 0.2118){
	    centralityTemp = 0.55 ; //50-60%
	  }
	  else if (fcal_Et > 0.1024){
	    centralityTemp = 0.65 ; //60-70%
	  }
	  else if (fcal_Et > 0.0438){
	    centralityTemp = 0.75 ; //70-80%
	  }
	  else {
	    centralityTemp = 0.89;  //80-98%
	  }

	} else if(isHIp){
		
		if(fcal_Et > 0.0395207){
		  centralityTemp = 0.1; //0-20%
		}
		else if(fcal_Et > 0.0236178){
		  centralityTemp = 0.3; //20-40%
		}
		else if(fcal_Et > 0.0129688){
		  centralityTemp = 0.5; //40-60%
		}
		else if(fcal_Et > 0.0521983){
		  centralityTemp = 0.7; //60-80%
		}
		else {
		  centralityTemp = 0.885; //80-97%
		}
	}
	  
	return centralityTemp;
}


////////////////////////////////////////////////////////////////////////////////////////	  
//return bias in mpx for given centrality bin (studied with MB data)
////////////////////////////////////////////////////////////////////////////////////////	  
float MuonSlim::getMpxCorrection(float centrality){
        if(centrality>=0.0&&centrality<=0.05) {
                return -0.46;
        } else if(centrality>=0.05&&centrality<=0.10) {
                return -0.36;
        } else if(centrality>=0.10&&centrality<=0.15) {
                return -0.30;
        } else if(centrality>=0.15&&centrality<=0.20) {
                return -0.24;
        } else if (centrality>=0.2&&centrality<=0.4){
                return -0.15;
        } else if (centrality>=0.4&&centrality<=0.8) {
                return -0.04;
        } else {
                return -9999.;
        }
}
////////////////////////////////////////////////////////////////////////////////////////	  
//return bias in mpy for given centrality bin (studied with MB data)
////////////////////////////////////////////////////////////////////////////////////////	  
float MuonSlim::getMpyCorrection(float centrality){
        if(centrality>=0.0&&centrality<=0.05) {
                return 0.02;
        } else if(centrality>=0.05&&centrality<=0.10) {
                return 0.03;
        } else if(centrality>=0.10&&centrality<=0.15) {
                return 0.01;
        } else if(centrality>=0.15&&centrality<=0.20) {
                return 0.01;
        } else if (centrality>=0.2&&centrality<=0.4){
                return 0.01;
        } else if (centrality>=0.4&&centrality<=0.8) {
                return 0.002;
        } else {
                return -9999.;
        }
}
////////////////////////////////////////////////////////////////////////////////////////	  
//return random event centrality 
///////////////////////////////////////////////////////////////////////////////////////
float MuonSlim::randomEventCentrality(int i, TFile *fMB){

	//get slimmed mb file
	if ( !fMB->IsOpen() ) {
	    std::cout << fMB << " not found!" << std::endl;
	    exit(0);
	}

	unsigned int neventsMB = tMB->GetEntries();
	TRandom r1;
	r1.SetSeed(i);
	bool counter = true;
	while(counter){
		//get random minbias event
		Long64_t e1 = Long64_t(r1.Uniform(neventsMB));
		tMB->GetEntry(e1);

		Long64_t runRand = runNumberMB;
		if((trigger1||trigger2)&&fabs(mpyMB)<9999.&&fabs(mpxMB)<9999.){
			counter = false;
  			if(i%10000==0){
				std::cout << " Random mpy from run: " << runRand << " event: " << e1  << std::endl;
				std::cout << "MPX: " << mpxMB << " MPY: " << mpyMB << " centrality: " << centralityMB*100 <<std::endl;
			}

			return centralityMB;
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////	  
//return random event missing py
///////////////////////////////////////////////////////////////////////////////////////
float MuonSlim::randomEventMPy(int i, TFile *fMB){

	//get slimmed mb file
	if ( !fMB->IsOpen() ) {
	    std::cout << fMB << " not found!" << std::endl;
	    exit(0);
	}

	unsigned int neventsMB = tMB->GetEntries();
  	if(i%10000==0)std::cout << " reading min bias entries " << neventsMB << std::endl;
	TRandom r1;
	r1.SetSeed(i);
	bool counter = true;
	while(counter){
		//get random minbias event
		Long64_t e1 = Long64_t(r1.Uniform(neventsMB));
		tMB->GetEntry(e1);

		Long64_t runRand = runNumberMB;
		mpxMB = nu_pxMB;
		mpyMB = nu_pyMB;
		if((trigger1||trigger2)&&fabs(mpyMB)<9999.&&fabs(mpxMB)<9999.){
			counter = false;
  			if(i%10000==0){
				std::cout << " Random mpy from run: " << runRand << " event: " << e1  << std::endl;
				std::cout << "MPX: " << mpxMB << " MPY: " << mpyMB << std::endl;
			}

			return mpyMB;
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////	  
//return random event missing px
///////////////////////////////////////////////////////////////////////////////////////
float MuonSlim::randomEventMPx(int i, TFile *fMB){

	//get slimmed mb file
	if ( !fMB->IsOpen() ) {
		    std::cout << fMB << " not found!" << std::endl;
		    exit(0);
	}

	unsigned int neventsMB = tMB->GetEntries();
  	if(i%10000==0)std::cout << " reading min bias entries " << neventsMB << std::endl;
	TRandom r1;
	r1.SetSeed(i);
	
	int counter = true;
	while(counter){
		//get random minbias event
		Long64_t e1 = Long64_t(r1.Uniform(neventsMB));
		tMB->GetEntry(e1);

		Long64_t runRand = runNumberMB;
		mpxMB = nu_pxMB;
		mpyMB = nu_pyMB;
		if((trigger1||trigger2)&&fabs(mpxMB)<9999.&&fabs(mpyMB)<9999.){
			counter = false;
  			if(i%10000==0){
				std::cout << " Random mpx from run: " << runRand << " event: " << e1  << std::endl;
				std::cout << "MPX: " << mpxMB << " MPY: " << mpyMB << std::endl;
			}

			return mpxMB;
		}
	}

}
////////////////////////////////////////////////////////////////////////////////////////	  
//perform trigger matching
///////////////////////////////////////////////////////////////////////////////////////

 int MuonSlim::MatchTrigger(int imu, float dR, int triggerIndex) {

	std::vector<float> trigMu4dR_one;
	trigMu4dR_one.clear();
	std::vector<float> trigMu10dR_one;
	trigMu10dR_one.clear();

	bool flag1 = false;
	float dRtemp1 = 9999. ;

	bool flag2 = false ;
	float dRtemp2 = 9999. ;

	bool flag3 = false ;
	float dRtemp3 = 9999. ;

	bool flag4 = false ;
	float dRtemp4 = 9999. ;

	bool flag5 = false ;
	float dRtemp5 = 9999. ;

	bool flag6 = false ;
	float dRtemp6 = 9999. ;

	bool flag7 = false ;
	float dRtemp7 = 9999. ;

	bool flag8 = false ;
	float dRtemp8 = 9999. ;

	bool flag9 = false ;
	float dRtemp9 = 9999. ;

	bool flag10 = false ;
	float dRtemp10 = 9999. ;

	bool flag11 = false ;
	float dRtemp11 = 9999. ;

	float phiReco = -9999.0; float etaReco = -9999.0;

	//if (fabs(phiMS[imu])< 99.0) phiReco = phiMS[imu]; else phiReco = phi[imu];
	//if (fabs(etaMS[imu])< 99.0) etaReco = etaMS[imu]; else etaReco = eta[imu];
	etaReco = (fabs(etaMS[imu])<99.0) ? etaMS[imu] : -99999.;
	phiReco = phiMS[imu];
	//float etaReco = etaMS[imu];
	//float dR = 0.2 ;

	for (int itrig=0; itrig<trig_EF_trigmuonef_n; itrig++){

		//int trigEF1 = trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50[itrig] ;
		int trigEF1 = trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC[itrig] ;
		int nMUinROI1 = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF1==1&&triggerIndex==1){
			for (int k=0; k<nMUinROI1; k++ ) {
			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				//std::cout <<"reco eta = " << etaReco << std::endl;
				//std::cout <<"trigger eta = " << etat << std::endl;
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				//std::cout <<"reco phi = " << phiReco << std::endl;
				//std::cout <<"trigger phi = " << phit << std::endl;
				float deta = etaReco-etat; 
				//std::cout <<"deta = " << deta << std::endl;
				float dphi = phiReco-phit;
//				std::cout <<"dphi = " << dphi << std::endl;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);
				//std::cout << "deltaR = " << dr << std::endl;
				trigMu10dR_one.push_back(dr);

				if (dr<dRtemp1) {
					dRtemp1 = dr ;
			    }
			  }
			}
		}

		//now that we've looped over all the roi tracks, let's set the trigger matching flag
		// if true, the muid muon has been matched 
		if (dRtemp1<dR) {flag1 = true; }
		//else flag1 = false;

		//peripheral trigger

		//int trigEF2 = trig_EF_trigmuonef_EF_mu4_L1VTE50[itrig] ;
		int trigEF2 = trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10[itrig] ;
		int nMUinROI2 = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF2==1&&triggerIndex==2) { 
			for (int k=0; k<nMUinROI2; k++ ) {

			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);
				trigMu10dR_one.push_back(dr);
				if (dr<dRtemp2) {
				dRtemp2 = dr ;
				}
			  }
			}
		}
		if (dRtemp2<dR) {flag2 = true; }
		//else flag2 = false;

		int trigEF3 = trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20[itrig] ;
		int nMUinROI3 = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF3==1&&triggerIndex==3){ 
		 for (int k=0; k<nMUinROI3; k++ ) {
		  
	          if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
		  float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
		  float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
		  float deta = etaReco-etat; 
		  float dphi = phiReco-phit;

              	  if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

		  float dr = sqrt(deta*deta+dphi*dphi);
		  trigMu10dR_one.push_back(dr);
		  if (dr<dRtemp3) {
		   dRtemp3 = dr ;
		  }
		  }
		 }
		}
		if (dRtemp3<dR) {flag3 = true; }
		 
		int trigEF4 = trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50[itrig] ;
		int nMUinROI4 = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF4==1&&triggerIndex==4){
			for (int k=0; k<nMUinROI4; k++ ) {
			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){

				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);
				trigMu4dR_one.push_back(dr);
				//if (dr<dR) {flag1 = true; break;}
				if (dr<dRtemp4) {
					dRtemp4 = dr ;
				}
				}
			}
		}

		//now that we've looped over all the roi tracks, let's set the trigger matching flag
		// if true, the muid muon has been matched 
		if (dRtemp4<dR) {flag4 = true; }

		int trigEF5 = trig_EF_trigmuonef_EF_mu4_L1VTE50[itrig] ;
		int nMUinROI5 = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF5==1&&triggerIndex==5){ 
			for (int k=0; k<nMUinROI5; k++ ) {

			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between -Pi and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);
				trigMu4dR_one.push_back(dr);
				if (dr<dRtemp5) {
				dRtemp5 = dr ;
				}
			  }
			}
		}

		if (dRtemp5<dR) {flag5 = true; }

		int trigEF6 = trig_EF_trigmuonef_EF_mu10[itrig] ;
		int nMUinROI6 = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF6==1&&triggerIndex==6) { 
			for (int k=0; k<nMUinROI6; k++ ) {

			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);
				trigMu10dR_one.push_back(dr);
				if (dr<dRtemp6) {
				dRtemp6 = dr ;
				}
			  }
			}
		}

		if (dRtemp5<dR) {flag5 = true; }

		int trigEF7 = trig_EF_trigmuonef_EF_mu4[itrig] ;
		int nMUinROI7 = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF7==1&&triggerIndex==7) { 
			for (int k=0; k<nMUinROI7; k++ ) {

			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);
				trigMu10dR_one.push_back(dr);
				if (dr<dRtemp7) {
				dRtemp7 = dr ;
				}
			  }
			}
		}

		if (dRtemp7<dR) {flag7 = true; }

		int trigEF8 = trig_EF_trigmuonef_EF_mu8_IDTrkNoCut[itrig] ;
		int nMUinROI = trig_EF_trigmuonef_track_n[itrig] ;

		if(trigEF8==1&&triggerIndex==8){
			for (int k=0; k<nMUinROI; k++ ) {
			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);

				if (dr<dRtemp8) {
					dRtemp8 = dr ;
			    }
			  }
			}
		}

		//now that we've looped over all the roi tracks, let's set the trigger matching flag
		// if true, the muid muon has been matched 
		if (dRtemp8<dR) {flag8 = true; }

		int trigEF9 = trig_EF_trigmuonef_EF_mu8[itrig] ;

		if(trigEF9==1&&triggerIndex==9){
			for (int k=0; k<nMUinROI; k++ ) {
			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);

				if (dr<dRtemp9) {
					dRtemp9 = dr ;
			    }
			  }
			}
		}

		//now that we've looped over all the roi tracks, let's set the trigger matching flag
		// if true, the muid muon has been matched 
		if (dRtemp9<dR) {flag9 = true; }

		int trigEF10 = trig_EF_trigmuonef_EF_mu4_j40_a4hi_EFFS_matched[itrig] ;

		if(trigEF10==1&&triggerIndex==10){
			for (int k=0; k<nMUinROI; k++ ) {
			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);

				if (dr<dRtemp10) {
					dRtemp10 = dr ;
			    }
			  }
			}
		}

		//now that we've looped over all the roi tracks, let's set the trigger matching flag
		// if true, the muid muon has been matched 
		if (dRtemp10<dR) {flag10 = true; }

		int trigEF11 = trig_EF_trigmuonef_EF_mu4_IDTrkNoCut[itrig] ;

		if(trigEF11==1&&triggerIndex==11){
			for (int k=0; k<nMUinROI; k++ ) {
			  if(trig_EF_trigmuonef_track_MS_hasMS->at(itrig)[k]){
				float etat = trig_EF_trigmuonef_track_MS_eta->at(itrig)[k];
				float phit = trig_EF_trigmuonef_track_MS_phi->at(itrig)[k];
				float deta = etaReco-etat; 
				float dphi = phiReco-phit;

              			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1.0*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between 0 and +Pi

				float dr = sqrt(deta*deta+dphi*dphi);

				if (dr<dRtemp11) {
					dRtemp11 = dr ;
			    }
			  }
			}
		}

		//now that we've looped over all the roi tracks, let's set the trigger matching flag
		// if true, the muid muon has been matched 
		if (dRtemp11<dR) {flag11 = true; }



	} //muon trigger loop

	trigMu4dR->push_back(trigMu4dR_one); trigMu10dR->push_back(trigMu10dR_one);

	  /*if(flag2 || flag3){
	    std:: cout << "match found for muon " <<imu<< std::endl;
	    std::cout <<"1: " << flag1 << " 2: " << flag2 <<" 3: " << flag3 << " 4: " << flag4 << " 5: " << flag5 << std::endl;
	  }*/
	if(triggerIndex==1&&flag1) return 1;
	else if(triggerIndex==2&&flag2) return 1;
	else if(triggerIndex==3&&flag3) return 1;
	else if(triggerIndex==4&&flag4) return 1;
	else if(triggerIndex==5&&flag5) return 1;
	else if(triggerIndex==6&&flag6) return 1;
	else if(triggerIndex==7&&flag7) return 1;
	else if(triggerIndex==8&&flag8) return 1;
	else if(triggerIndex==9&&flag9) return 1;
	else if(triggerIndex==10&&flag10) return 1;
	else if(triggerIndex==11&&flag11) return 1;
	else {
//	  	std:: cout << "no match found" << std::endl;
	  //	std::cout <<"1: " << flag1 << " 2: " << flag2 <<" 3: " << flag3 << " 4: " << flag4 << " 5: " << flag5 << std::endl;
		return 0;
	}
}////////////////////////////////////////////////////////////////////////////////////////	  

///////////////////////////////////////////////////////////////////////////////////////
//assign MC ID
//////////////////////////////////////////////////////////////////////////////////////
int MuonSlim::assignPrompt(int pdgIdMother, int pdgId){
   int prompt = -1;
    if ( abs(pdgId)==13 ){
    if ( abs(pdgIdMother)==211) {
      prompt = 5;
    } else if ( abs(pdgIdMother)==321 ) {
      prompt = 8;
    } else if ( (abs(pdgIdMother)>=400 && abs(pdgIdMother)<600) || abs(pdgIdMother)>=4000 ) {
      prompt = 1;
    } else if ( abs(pdgIdMother)==15 ) {
      prompt = 2;
    } else if ( abs(pdgIdMother)==23 ) {
      prompt = 23;
    } else if ( abs(pdgIdMother)==24 ) {
      prompt = 24;
    } else {
      prompt = 3;
    }
  } else if ( abs(pdgId)==11 ){
    if ( abs(pdgIdMother)==24 ) {
        prompt = 25;
       }
     }
  else {
    if ( abs(pdgId)==211 ) {
      prompt = 6;
    } else if ( abs(pdgId)==321 ) {
      prompt = 9;
    } else {
      prompt = 10;
    }
  }
  return prompt;
}
//////////////////////////////////////////////////////////////////////////////////////
//pp MuonSelector
/////////////////////////////////////////////////////////////////////////////////////

int MuonSlim::ppMuonSelector(int i) {

	int value = 0;

	if( mu_muid_isCombinedMuon[i] > 0) 				value++; else return value;	//1
	if(( mu_muid_pt[i]/1000.) > 3.0) 				value++; else return value; 	//2
        if( (!mu_muid_expectBLayerHit[i])||(mu_muid_nBLHits[i])>0) 	value++; else return value;     //3
	if( mu_muid_nPixHits[i] + mu_muid_nPixelDeadSensors[i] > 1)	value++; else return value;	//4 
	if (mu_muid_nSCTHits[i] + mu_muid_nSCTDeadSensors[i] > 5)	value++; else return value;     //5
	if((mu_muid_nPixHoles[i]+mu_muid_nSCTHoles[i])<3) 		value++; else return value;	//6
	if( (fabs(mu_muid_eta[i]) < 1.9) ) {
		if( (mu_muid_nTRTHits[i] > 5) && (mu_muid_nTRTOutliers[i] < 0.9*mu_muid_nTRTHits[i])) 	value++; else return value; //7
        } 
	if( (fabs(mu_muid_eta[i]) >= 1.9) && (mu_muid_nTRTHits[i] > 5)) {
		if( mu_muid_nTRTOutliers[i] < 0.9*mu_muid_nTRTHits[i]) 					value++; else return value; //7
        } else if ( (fabs(mu_muid_eta[i]) >= 1.9) && (mu_muid_nTRTHits[i] <= 5) ) 			value++; else return value; //7 

	if( fabs(mu_muid_d0_exPV[i])<0.2)				value++; else return value;	//8
	if( fabs(mu_muid_me_z0[i] - mu_muid_z0_exPV[i]) < 1.0)		value++; else return value;	//9
	if( fabs(1./mu_muid_id_qoverp_exPV[i]/1000.) > 3.0)		value++; else return value;	//10
	if(fabs(1./mu_muid_me_qoverp_exPV[i]/1000.)  > 0.0)		value++; else return value;	//11
	if(fabs(mu_muid_eta[i])<2.5 )					value++; else return value;	//12
	if( (mu_muid_matchchi2[i]/mu_muid_matchndof[i])<10.0)		value++; else return value;	//13
	return value;
}
//////////////////////////////////////////////////////////////////////////////////////
//HIMuonSelector
/////////////////////////////////////////////////////////////////////////////////////

int MuonSlim::HICombinedMuonSelector(int i) {

	int value = 0;

	if(( mu_muid_pt[i]/1000.) > 0.0) 			value++; else return value; 			//1
	if( mu_muid_nPixHits[i] > 0) 				value++; else return value;			//2 
	if( mu_muid_nBLHits[i] > 0) 				value++; else return value;			//3
	if(mu_muid_nSCTHits[i]>6)					value++; else return value;		//4
	if((mu_muid_nPixHoles[i]+mu_muid_nSCTHoles[i])<2) 	value++; else return value;			//5
	if( fabs(mu_muid_id_d0_exPV[i])<5.)			value++; else return value;			//6
	if( fabs(mu_muid_id_z0_exPV[i])*TMath::Sin(mu_muid_id_theta_exPV[i])<5.0 ) value++; else return value;	//7
	if( fabs(1./mu_muid_id_qoverp_exPV[i]/1000.) > 0.0)		value++; else return value;		//8
	if(fabs(1./mu_muid_me_qoverp_exPV[i]/1000.)  > 0.0)		value++; else return value;		//9
	if(fabs(mu_muid_eta[i])<2.5)				value++; else return value;			//10
	if( (mu_muid_matchchi2[i]/mu_muid_matchndof[i])<10.0)	value++; else return value;			//11
	if( mu_muid_isCombinedMuon[i] > 0) 			value++; else return value;			//12
	return value;
}
//////////////////////////////////////////////////////////////////////////////////////
//HIStandAloneMuonSelector
/////////////////////////////////////////////////////////////////////////////////////

int MuonSlim::HIStandAloneCombinedMuonSelector(int i) {

	int value = 0;

	if( mu_muid_isStandAloneMuon[i] > 0) 			value++; else return value;	//1
	if(( mu_muid_pt[i]/1000.) > 3.0) 			value++; else return value; 	//2
	if( fabs(mu_muid_ms_d0[i])<6)				value++; else return value;	//3
	if( fabs(mu_muid_ms_z0[i])<6 )				value++; else return value;	//4
	if(fabs(1./mu_muid_ms_qoverp[i]/1000.)  > 0.0)		value++; else return value;	//5
	if(fabs(mu_muid_eta[i])<2.5)				value++; else return value;	//6
	if( (mu_muid_matchchi2[i]/mu_muid_matchndof[i])<10.0)	value++; else return value;	//7
	return value;
}


void MuonSlim::SetBranches(){

	#include "SetBranches.h"
}

float MuonSlim::getScaledMpt(float subMPT, float scalefactor,float ptmu){

	return (fabs(subMPT)<9999.) ? scalefactor*subMPT+ptmu:-9999.;

}

float MuonSlim::getSubtractedMpt(){

	    ///calculate the high pt muon subtracted missing pT
	    TVector3 vMptS;
	    TVector3 vMpt;
	    TVector3 vMu;
	    for(int imu=0; imu<mu_muid_n; imu++){

		if(pt[imu]>20.0&&val[imu]>11&&fabs(nu_pt3000)<9999.&&nu_pt3000>15.0&&ZDY[imu]==0){

			vMu.SetPtEtaPhi(pt[imu],eta[imu],phi[imu]);
			break;
		}
		else vMu.SetPtEtaPhi(-9999.,-9999.,-9999.);
	    }
	    
	    vMpt.SetPtEtaPhi(nu_ptNt,nu_etaNt,nu_phiNt+TMath::Pi()) ;
	    vMptS =  vMpt - vMu ;
     	    subtractedMPT = (fabs(vMu.Pt()) < 9999.) ? vMptS.Pt(): -9999. ;
	    return subtractedMPT;

}

//////////////////////////////////////////////////////////////////////////////////////
//Calculate W 4-vector
//////////////////////////////////////////////////////////////////////////////////////
TLorentzVector MuonSlim::WbosonFourVector(int igen){
			TLorentzVector vmu ;
			TLorentzVector vnu ; 
			TLorentzVector vsum;
			TLorentzVector vg ; 
			TLorentzVector vFSR ; 

			vmu.SetPtEtaPhiE(mc_mu_gen_pt[igen],mc_mu_gen_eta[igen],mc_mu_gen_phi[igen],mc_mu_gen_E[igen]);
			vnu.SetPtEtaPhiE(mc_nu_gen_pt[igen],mc_nu_gen_eta[igen],mc_nu_gen_phi[igen],mc_nu_gen_E[igen]);

			for(int ig=0; ig<mc_gamma_n; ig++){

				vg.SetPtEtaPhiE(mc_gamma_gen_pt[ig],mc_gamma_gen_eta[ig],mc_gamma_gen_phi[ig],mc_gamma_gen_E[ig]);
				//construct sum of FSR photons from W parent
				vFSR = (vFSR + vg);
			}

			if(mc_gamma_n==0){

				vsum = (vmu+vnu);
			}
			else vsum = (vmu+vnu+vg);
		return vsum;
}

	
//////////////////////////////////////////////////////////////////////////////////////
//SlimHISingleMuon
//////////////////////////////////////////////////////////////////////////////////////

int MuonSlim::SlimHISingleMuon(TString inputFiles,bool doMSLOW, bool doMSUP, bool doIDLOW, bool doIDUP){

  hJETS15 = new TH1F("hJETS15","hJETS15",100,0,100);
  hJETS15->Sumw2();
  hJETS20 = new TH1F("hJETS20","hJETS20",100,0,100);
  hJETS20->Sumw2();
  hJETS25 = new TH1F("hJETS25","hJETS25",100,0,100);
  hJETS25->Sumw2();
  hJETS30 = new TH1F("hJETS30","hJETS30",100,0,100);
  hJETS30->Sumw2();

  std::cout << "Adding MC skimmed files to TChain..." << std::endl;
  openFromFileList(inputFiles, ntupleToRead);
  outName = "HISingleMuonWmunuPYTHIADataOverlay.root";
  output = new TFile(outName,"RECREATE");
  #include "MakeBranches.h"
  std::cout << "Using MCP Monte Carlo smearing class." << std::endl;
  mcp_smear.UseGeV() ;


  if(doMSLOW) std::cout << "Running MSLOW smearing systematic. " << std::endl;
  if(doMSUP) std::cout << "Running MSUP smearing systematic. " << std::endl;
  if(doIDLOW) std::cout << "Running IDLOW smearing systematic. " << std::endl;
  if(doIDUP) std::cout << "Running IDUP smearing systematic. " << std::endl;

  mcp_smear.UseScale(1) ;
  mcp_smear.UseImprovedCombine() ;
  mcp_smear.RestrictCurvatureCorrections(2.5);
  mcp_smear.FillScales("KC");

  unsigned int entries = ntupleToRead->GetEntries();
  std::cout << " reading entries " << entries << std::endl;

  ///event loop
  for (int i=0; i<entries; i++){
  	
	JETS = 0;

    	ntupleToRead->LoadTree(i);
    	ntupleToRead->GetEntry(i);

    	if( i%10000==0){
     	std::cout << " event " << i << std::endl;
     	//if (i==10000) break; //temp hack
    	}

	massCB->clear();
	mujetdR->clear();
	trigMu4dR->clear();
	trigMu10dR->clear();
	dphiMuJet->clear();
        detaMuJet->clear();
	massCB->reserve(mu_muid_n);
	mujetdR->reserve(mu_muid_n);
	dphiMuJet->reserve(mu_muid_n);
        detaMuJet->reserve(mu_muid_n);
   	///event variables

   	fcal =  Fcal_Et;
  	mbts = fabs(mbtime_timeA - mbtime_timeC); 
   	centrality = Centrality;
	vx_xNt=vx_x;
	vx_yNt=vx_y;
	vx_zNt=vx_z;

	TRandom3 t;
	t.SetSeed(i); 

   	///nu and mu vectors are in opposite directions
	///(performed at skimming level from d3pd)
        //nu_phiNt = nu_phi+TMath::Pi();
        //nu_phiNt = pTmissID->Phi()+TMath::Pi();
	caloMETNt = caloMET;
	caloMETPhiNt = caloMETPhi;
	caloMETEtaNt = caloMETEta;
	caloMExNt = caloMEx;
	caloMEyNt = caloMEy;

	nu_px500Nominal = 1.0*nu_px500;
	nu_py500Nominal = 1.0*nu_py500;
	nu_pt500Nominal = nu_pt500;
        nu_phi500Nominal = nu_phi500;
	nu_theta500Nominal = nu_theta500;
	nu_eta500Nominal = nu_eta500;

	nu_px2000Nominal = 1.0*nu_px2000;
	nu_py2000Nominal = 1.0*nu_py2000;
	nu_pt2000Nominal = nu_pt2000;
        nu_phi2000Nominal = nu_phi2000;
	nu_theta2000Nominal = nu_theta2000;
	nu_eta2000Nominal = nu_eta2000;

	nu_px4000Nominal = 1.0*nu_px4000;
	nu_py4000Nominal = 1.0*nu_py4000;
	nu_pt4000Nominal = nu_pt4000;
        nu_phi4000Nominal = nu_phi4000;
	nu_theta4000Nominal = nu_theta4000;
	nu_eta4000Nominal = nu_eta4000;

	nu_px5000Nominal = 1.0*nu_px5000;
	nu_py5000Nominal = 1.0*nu_py5000;
	nu_pt5000Nominal = nu_pt5000;
        nu_phi5000Nominal = nu_phi5000;
	nu_theta5000Nominal = nu_theta5000;
	nu_eta5000Nominal = nu_eta5000;



	//return offset in mpx,mpy mean
	float mpxCorrection = getMpxCorrection(Centrality);
	float mpyCorrection = getMpyCorrection(Centrality);

	nu_pxNt = 1.0*(nu_px3000 - mpxCorrection);
	nu_pyNt = 1.0*(nu_py3000 - mpyCorrection);
	nu_pzNt = 1.0*nu_pz3000;

	//nu_ptNt = TMath::Sqrt(nu_pxNt*nu_pxNt+nu_pyNt*nu_pyNt); 

	nu_px3000Nominal = 1.0*nu_px3000;
	nu_py3000Nominal = 1.0*nu_py3000;
	nu_pt3000Nominal = nu_pt3000;
	
        nu_phi3000Nominal = nu_phi3000;
	nu_theta3000Nominal = nu_theta3000;
	nu_eta3000Nominal = nu_eta3000;

 	TVector3 vNu;
	if(fabs(nu_pt3000Nominal)<9999.&&fabs(nu_eta3000Nominal)<9999.) vNu.SetXYZ(nu_pxNt,nu_pyNt,nu_pzNt) ; 
	else vNu.SetPtEtaPhi(9999.,9999.,9999.);

        nu_ptNt = vNu.Perp() < 9999. ? vNu.Perp() : -9999.0;
        nu_phiNt = fabs(nu_ptNt) < 9999. ? vNu.Phi() : -9999.0;
	nu_phiSwingBy30CCW = fabs(nu_ptNt) < 9999. ? nu_phiNt-TMath::Pi()/6.0 :  -9999.0;
	nu_phiSwingBy15CCW = fabs(nu_ptNt) < 9999. ? nu_phiNt-TMath::Pi()/12.0 :  -9999.0;
	nu_phiSwingBy30CW = fabs(nu_ptNt) < 9999. ? nu_phiNt+TMath::Pi()/6.0 :  -9999.0;
	nu_phiSwingBy15CW = fabs(nu_ptNt) < 9999. ? nu_phiNt+TMath::Pi()/12.0 :  -9999.0;
	nu_thetaNt = fabs(nu_ptNt) < 9999. ? vNu.Theta() : -9999.0;
	nu_etaNt = fabs(nu_ptNt) < 9999. ? vNu.Eta() : -9999.0; 

       	run = RunNumber;
        event = EventNumber;
        Mytrig_EF_trigmuonef_n = trig_EF_trigmuonef_n ;
        //Myantikt2HIItrEM_n   = antikt2HIItrEM_n;
 	Mymc_mu_n = mc_mu_n;
 	Mymc_gamma_n = mc_gamma_n;
	Mymu_muid_n = mu_muid_n;
        njets = antikt2HIItrEM_n; 

	for(int imu=0; imu<mu_muid_n; imu++){
		ZDY[imu] = 0;
		EF_mu10_MSonly_EFFS_L1ZDC_Matched20[imu] = 0;
		EF_mu10_Matched20[imu] = 0;
		EF_mu4_Matched20[imu] = 0;
		EF_mu10_MSonly_EFFS_L1TE10_Matched20[imu] = 0;
		EF_mu10_MSonly_EFFS_L1TE20_Matched20[imu] = 0;
		EF_trigmuonef_EF_mu4_MSonly_L1TE50_Matched20[imu] = 0;
		EF_trigmuonef_EF_mu4_L1VTE50_Matched20[imu] = 0;

	}

        EFtrig1 = EF_mu10_MSonly_EFFS_L1ZDC; 
        EFtrig2 = EF_mu10_MSonly_EFFS_L1TE10;
        EFtrig3 = EF_mu10_MSonly_EFFS_L1TE20;
        EFtrig4 = EF_mu4_MSonly_L1TE50; 
        EFtrig5 = EF_mu4_L1VTE50;

        //clear mujet dR vector per event
	mugammadR->clear();
	dphiMuGamma->clear();
	detaMuGamma->clear();
        //generator level mu and nu from W 
      	for(int igen=0; igen<mc_mu_n; igen++){
			
			//clear mu-FSRgamma vector

			Mymc_mu_gen_E[igen] = mc_mu_gen_E[igen] ;
			Mymc_mu_gen_pt[igen] = mc_mu_gen_pt[igen] ;
			Mymc_mu_gen_eta[igen] = mc_mu_gen_eta[igen] ;
			Mymc_mu_gen_phi[igen] = mc_mu_gen_phi[igen]  ;
			Mymc_mu_gen_type[igen] = mc_mu_gen_type[igen] ;
			Mymc_mu_gen_mothertype[igen] = mc_mu_gen_mothertype[igen] ;
			Mymc_mu_charge[igen] = mc_mu_charge[igen]  ;
			Mymc_mu_gen_barcode[igen] = mc_mu_gen_barcode[igen];
			
			Mymc_nu_gen_E[igen] = mc_nu_gen_E[igen]  ;
			Mymc_nu_gen_pt[igen] = mc_nu_gen_pt[igen] ;
			Mymc_nu_gen_eta[igen] = mc_nu_gen_eta[igen]  ;
			Mymc_nu_gen_phi[igen] = mc_nu_gen_phi[igen]  ;
			Mymc_nu_gen_type[igen] = mc_nu_gen_type[igen]  ;
			Mymc_nu_gen_mothertype[igen] = mc_nu_gen_mothertype[igen] ;
			Mymc_nu_charge[igen] = mc_nu_charge[igen] ;

			Mymc_gen_WbosonNominalMass[igen] = mc_gen_WbosonMass[igen]  ;
			Mymc_gen_WbosonNominalPt[igen] = mc_gen_WbosonPt[igen] ;
			Mymc_gen_WbosonNominalPhi[igen] = mc_gen_WbosonPhi[igen] ;
			Mymc_gen_WbosonNominalRapidity[igen] = mc_gen_WbosonRapidity[igen]  ;
			Mymc_gen_WbosonNominalPseudoRapidity[igen] = mc_gen_WbosonPseudoRapidity[igen] ;


	                TLorentzVector vsum ;
			vsum = WbosonFourVector(igen);

			Mymc_gen_WbosonCorrectedMass[igen] = vsum.M();
			Mymc_gen_WbosonCorrectedPt[igen] = vsum.Pt();
			Mymc_gen_WbosonCorrectedPhi[igen] = vsum.Phi();
			Mymc_gen_WbosonCorrectedRapidity[igen] = vsum.Rapidity();
			Mymc_gen_WbosonCorrectedPseudoRapidity[igen] = vsum.PseudoRapidity();

			   float dphi = -9999.;
			   if (antikt2HIItrEM_n==0) dPhiWJet[igen] = -9999.;
			   for(int jt=0; jt<antikt2HIItrEM_n; jt++){
			      jet_E[jt] = antikt2HIItrEM_E[jt]/1000. ;
			      jet_eta[jt] = antikt2HIItrEM_eta[jt];
			      jet_Et[jt] = jet_E[jt]/TMath::CosH(jet_eta[jt]) ;
			      jet_pt[jt] = antikt2HIItrEM_pt[jt]/1000.;

			      if(jet_Et[jt]>25.){

				jet_phi[jt] = antikt2HIItrEM_phi[jt];
				dphi = Mymc_gen_WbosonNominalPhi[igen] - jet_phi[jt] ;
				if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between -Pi and +Pi
              			//if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<0.){dphi+=TMath::TwoPi();} //fold between 0 and +Pi
				dPhiWJet[igen] = dphi;
				
			     }
			   } //JETS
	        //generator mu with generator gamma
/*		mugammadR_one.clear(.begin(),.end());

		float mugamma_dRTemp = -9999.;
		if (mc_gamma_n==0) mugammadR_one.push_back(-9999.);

		for(int igamma=0; igamma<mc_gamma_n; igamma++){
			
		
			float dphi = phi[igen] - mc_gamma_gen_phi[igamma]  ;
			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between -Pi and +Pi
			
			float deta = eta[igen] - mc_gamma_gen_eta[igamma] ;
			mugamma_dRTemp = TMath::Sqrt(dphi*dphi+deta*deta) ;
			mugammadR_one.push_back(mugamma_dRTemp);
		}
	
	      		mugammadR->push_back(mugammadR_one);
*/


		} //mu,nu

		for (int igen=0; igen<mc_gamma_n; igen++) {			
			Mymc_gamma_gen_E[igen] = mc_gamma_gen_E[igen] ;
			Mymc_gamma_gen_pt[igen] = mc_gamma_gen_pt[igen] ;
			Mymc_gamma_gen_eta[igen] = mc_gamma_gen_eta[igen] ;
			Mymc_gamma_gen_phi[igen] = mc_gamma_gen_phi[igen]  ;
			Mymc_gamma_gen_type[igen] = mc_gamma_gen_type[igen] ;
			Mymc_gamma_gen_mothertype[igen] = mc_gamma_gen_mothertype[igen] ;
			Mymc_gamma_charge[igen] = mc_gamma_charge[igen]  ;
		}//gamma


	
	EF_L1TE50_NoAlgNt = EF_L1TE50_NoAlg;
	EF_mbZdc_a_c_L1VTE50_trkNt = EF_mbZdc_a_c_L1VTE50_trk ;
	EF_L1MBTS_1_1_NoAlgNt = EF_L1MBTS_1_1_NoAlg;

	EF_mu4_MSonly_L1TE50Nt = EF_mu4_MSonly_L1TE50;
	EF_mu4_L1VTE50Nt = EF_mu4_L1VTE50;
        EF_mu10_MSonly_EFFS_L1ZDCNt = EF_mu10_MSonly_EFFS_L1ZDC; 
        EF_mu10_MSonly_EFFS_L1TE10Nt = EF_mu10_MSonly_EFFS_L1TE10;
        EF_mu10_MSonly_EFFS_L1TE20Nt = EF_mu10_MSonly_EFFS_L1TE20;

	float mugamma_dRTemp = -9999.;
           
          for (int j=0; j<mu_muid_n; j++){
  
	    std::vector<float> massCB_one;
	    std::vector<float> mujetdR_one;
	    std::vector<float> dphiMuJet_one;
	    std::vector<float> detaMuJet_one;

	    massCB_one.clear();
	    mujetdR_one.clear();
	    dphiMuJet_one.clear();
            detaMuJet_one.clear();
            //size of first vector
	    size_t nMuMu =  mu_muid_n-(j+1);
            //std::cout << nMuMu << std::endl;
	    massCB_one.reserve(nMuMu);
	    size_t nMuJet = antikt2HIItrEM_n;
	    mujetdR_one.reserve(nMuJet);
	    dphiMuJet_one.reserve(nMuJet);
            detaMuJet_one.reserve(nMuJet);
	    //std::cout<<massCB_one.capacity()<<std::endl;
	 
	    val[j] = HICombinedMuonSelector(j);
	    valSA[j] = HIStandAloneCombinedMuonSelector(j);
	    pt[j] = mu_muid_pt[j]/1000. ;
	    ptMS[j] = fabs(1./mu_muid_ms_qoverp[j])*TMath::Sin(mu_muid_ms_theta[j])/1000. ;
	    ptID[j] = fabs(1./mu_muid_id_qoverp_exPV[j])*TMath::Sin(mu_muid_id_theta_exPV[j])/1000. ;
	    ptcone20[j] = mu_muid_ptcone20[j]/1000. ;
	    ptcone30[j] = mu_muid_ptcone30[j]/1000. ;
	    ptcone40[j] = mu_muid_ptcone40[j]/1000. ;
	    //custom built isolation cut
	    //first number = eta,phi cone radius
	    //second number = lower track pT used in calculation (GeV)

	    ptcone10ID05[j] = mu_muid_ptcone10ID05[j]/1000. ;
	    ptcone15ID05[j] = mu_muid_ptcone15ID05[j]/1000. ;
	    ptcone20ID05[j] = mu_muid_ptcone20ID05[j]/1000. ;
	    ptcone30ID05[j] = mu_muid_ptcone30ID05[j]/1000. ;
	    ptcone40ID05[j] = mu_muid_ptcone40ID05[j]/1000. ;
	    ptcone50ID05[j] = mu_muid_ptcone50ID05[j]/1000. ;

	    ptcone10ID075[j] = mu_muid_ptcone10ID075[j]/1000. ;
	    ptcone15ID075[j] = mu_muid_ptcone15ID075[j]/1000. ;
	    ptcone20ID075[j] = mu_muid_ptcone20ID075[j]/1000. ;
	    ptcone30ID075[j] = mu_muid_ptcone30ID075[j]/1000. ;
	    ptcone40ID075[j] = mu_muid_ptcone40ID075[j]/1000. ;
	    ptcone50ID075[j] = mu_muid_ptcone50ID075[j]/1000. ;

	    ptcone10ID1[j] = mu_muid_ptcone10ID1[j]/1000. ;
	    ptcone15ID1[j] = mu_muid_ptcone15ID1[j]/1000. ;
	    ptcone20ID1[j] = mu_muid_ptcone20ID1[j]/1000. ;
	    ptcone30ID1[j] = mu_muid_ptcone30ID1[j]/1000. ;
	    ptcone40ID1[j] = mu_muid_ptcone40ID1[j]/1000. ;
	    ptcone50ID1[j] = mu_muid_ptcone50ID1[j]/1000. ;

	    ptcone10ID2[j] = mu_muid_ptcone10ID2[j]/1000. ;
	    ptcone15ID2[j] = mu_muid_ptcone15ID2[j]/1000. ;
	    ptcone20ID2[j] = mu_muid_ptcone20ID2[j]/1000. ;
	    ptcone30ID2[j] = mu_muid_ptcone30ID2[j]/1000. ;
	    ptcone40ID2[j] = mu_muid_ptcone40ID2[j]/1000. ;
	    ptcone50ID2[j] = mu_muid_ptcone50ID2[j]/1000. ;

	    ptcone10ID3[j] = mu_muid_ptcone10ID3[j]/1000. ;
	    ptcone15ID3[j] = mu_muid_ptcone15ID3[j]/1000. ;
	    ptcone20ID3[j] = mu_muid_ptcone20ID3[j]/1000. ;
	    ptcone30ID3[j] = mu_muid_ptcone30ID3[j]/1000. ;
	    ptcone40ID3[j] = mu_muid_ptcone40ID3[j]/1000. ;
	    ptcone50ID3[j] = mu_muid_ptcone50ID3[j]/1000. ;

	    ptcone10ID4[j] = mu_muid_ptcone10ID4[j]/1000. ;
	    ptcone15ID4[j] = mu_muid_ptcone15ID4[j]/1000. ;
	    ptcone20ID4[j] = mu_muid_ptcone20ID4[j]/1000. ;
	    ptcone30ID4[j] = mu_muid_ptcone30ID4[j]/1000. ;
	    ptcone40ID4[j] = mu_muid_ptcone40ID4[j]/1000. ;
	    ptcone50ID4[j] = mu_muid_ptcone50ID4[j]/1000. ;

	    ptcone10ID5[j] = mu_muid_ptcone10ID5[j]/1000. ;
	    ptcone15ID5[j] = mu_muid_ptcone15ID5[j]/1000. ;
	    ptcone20ID5[j] = mu_muid_ptcone20ID5[j]/1000. ;
	    ptcone30ID5[j] = mu_muid_ptcone30ID5[j]/1000. ;
	    ptcone40ID5[j] = mu_muid_ptcone40ID5[j]/1000. ;
	    ptcone50ID5[j] = mu_muid_ptcone50ID5[j]/1000. ;

	    ptcone10ID6[j] = mu_muid_ptcone10ID6[j]/1000. ;
	    ptcone15ID6[j] = mu_muid_ptcone15ID6[j]/1000. ;
	    ptcone20ID6[j] = mu_muid_ptcone20ID6[j]/1000. ;
	    ptcone30ID6[j] = mu_muid_ptcone30ID6[j]/1000. ;
	    ptcone40ID6[j] = mu_muid_ptcone40ID6[j]/1000. ;
	    ptcone50ID6[j] = mu_muid_ptcone50ID6[j]/1000. ;

	    etcone20[j] = mu_muid_etcone20[j]/1000. ;
	    etcone30[j] = mu_muid_etcone30[j]/1000. ;
	    etcone40[j] = mu_muid_etcone40[j]/1000. ;
	    eta[j] = mu_muid_eta[j];
	    thetaMS[j] = mu_muid_ms_theta[j] ;
	    //std::cout << "filling thetaMS = " << thetaMS[j] << " = " <<  mu_muid_ms_theta[j] << std::endl;
	    thetaID[j] = mu_muid_id_theta_exPV[j] ;
	    etaMS[j] = (fabs(thetaMS[j]) < 99.) ? (-1*TMath::Log(TMath::Tan(thetaMS[j]/2.))) : -9999.; ;
	    //std::cout << "filling etaMS = " << etaMS[j] << " = " <<  -1*TMath::Log(TMath::Tan(thetaMS[j]/2.))  << std::endl;
	    //std::cout << "filling muid_eta = " << eta[j] << " = " <<  mu_muid_eta[j]  << std::endl;
	    etaID[j] = -1*TMath::Log(TMath::Tan(thetaID[j]/2.)) ;
	    phi[j] = mu_muid_phi[j];
	    phiMS[j] = mu_muid_ms_phi[j];
	    //std::cout << "filling muid_phi = " << phi[j] << " = " <<  mu_muid_phi[j]  << std::endl;
	    //std::cout << "filling phiMS = " << phiMS[j] << " = " <<  mu_muid_ms_phi[j] << std::endl;
	    phiID[j] = mu_muid_id_phi_exPV[j];
	    charge[j] = mu_muid_charge[j];
	    z0[j] = (mu_muid_id_z0_exPV[j]) ;
	    z0SA[j] = (mu_muid_me_z0[j]) ;
	    eLoss[j] = (1/mu_muid_charge[j]*mu_muid_id_qoverp_exPV[j] > 0) ?  ( fabs(mu_muid_me_qoverp_exPV[j]-mu_muid_id_qoverp_exPV[j])/mu_muid_me_qoverp_exPV[j] ) : -9999; 
	    prompt[j] = -1;
	    ntrt[j] = mu_muid_nTRTHits[j];
	    scat[j] = muid_scatSignificance[j];
	    comp[j] = fabs(scat[j]*0.07)+fabs(eLoss[j]);
	    //std::cout << "Matching trigger for muid_mu "  << j << std::endl;
	    EF_mu10_MSonly_EFFS_L1ZDC_Matched20[j] = MatchTrigger(j,0.2,1);
	    EF_mu10_MSonly_EFFS_L1TE10_Matched20[j] = MatchTrigger(j,0.2,2);
	    EF_mu10_MSonly_EFFS_L1TE20_Matched20[j] = MatchTrigger(j,0.2,3);
	    EF_trigmuonef_EF_mu4_MSonly_L1TE50_Matched20[j] = MatchTrigger(j,0.2,4);
            EF_trigmuonef_EF_mu4_L1VTE50_Matched20[j] = MatchTrigger(j,0.2,5);
	
	    L1Matched[j] = mu_muid_L1_matched[j];

	    //FSR-gamma-muon matching
		mugammadR_one.clear();
		dphiMuGamma_one.clear();
		detaMuGamma_one.clear();

		if (mc_gamma_n==0) mugammadR_one.push_back(-9999.);

		for(int igen=0; igen<mc_gamma_n; igen++){
			
		
			float dphi = phi[j] - mc_gamma_gen_phi[igen]  ;
			if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between -Pi and +Pi
			dphiMuGamma_one.push_back(dphi);
			
			float deta = eta[j] - mc_gamma_gen_eta[igen] ;
			detaMuGamma_one.push_back(deta);

			mugamma_dRTemp = TMath::Sqrt(dphi*dphi+deta*deta) ;
			mugammadR_one.push_back(mugamma_dRTemp);
		}
	
	      		mugammadR->push_back(mugammadR_one);
			dphiMuGamma->push_back(dphiMuGamma_one);
			detaMuGamma->push_back(detaMuGamma_one);


            	pt_tru[j] = mu_muid_truth_pt[j];
            	E_tru[j] = mu_muid_truth_E[j];
            	eta_tru[j] = mu_muid_truth_eta[j];
            	phi_tru[j] = mu_muid_truth_phi[j];
		truthMatched_muid[j] = mu_muid_truth_matched[j];
		barcode_muid_tru[j] = mu_muid_truth_barcode[j];
		truthdR_muid[j] = mu_muid_truth_dr[j];
            	int mother = mu_muid_truth_mothertype[j];
            	int daughter = mu_muid_truth_type[j];
            	prompt[j] = assignPrompt(mother,daughter);

	    ///set flag for Z and DY candidates
	    TLorentzVector vMu1; vMu1.SetPtEtaPhiM(pt[j],eta[j],phi[j],0.1057);
      	    //for(int k=j+1;k<mu_muid_n; k++)

      	    for(int k=0;k<mu_muid_n; k++){
	      float chargeTemp2 = mu_muid_charge[k];
	      float pt2 = mu_muid_pt[k]/1000. ;
	      //int val2 = HIMuonSelectorMuon[k];
	      int val2 = HICombinedMuonSelector(k);
	      float eta2 = mu_muid_eta[k];
	      float phi2 = mu_muid_phi[k];
	      TLorentzVector vMu2; vMu2.SetPtEtaPhiM(pt2,eta2,phi2,0.1057) ;
	      TLorentzVector vMuSum = vMu1+vMu2 ;
	      float invMass = vMuSum.M();
	      if((charge[j]*chargeTemp2) < 0.) massCB_one.push_back(invMass);
	      //hM->Fill(massCB) ;
	      double prob = t.Rndm();
              if( (prob<=0.95)
	      	&&(invMass > 66.0) && ((charge[j]*chargeTemp2) < 0.)
	      	&& (val[j]>11) 
		&& (fabs(1./mu_muid_me_qoverp_exPV[k]/1000.)>0.0) 
		&& (pt2>20.0)){
	       //std::cout << "Found Z/DY background muon. Vetoing..." << std::endl;
	       ZDY[j] = 1;
	       ZDY[k] = 1;
	       //hZDY->Fill(mu_muid_pt[j]/1000.);
	       //ZDY++;
	       //break;
              }
	
	    }

	    massCB->push_back(massCB_one);
           
            ///calculate phi angle [-pi,pi] between missing pT vector and 
	    ///pT vector of the muon
	    /// only calculate mT for events with mu>20GeV
	    TVector3 lvMu;
	    lvMu.SetPtEtaPhi(pt[j],eta[j],phi[j]) ;
     	    TVector3 vW = lvMu+vNu;

	    //missing momentum vector components
	    //set to 9999. if no tracks above the
	    //lower pt threshold were present in the event
	    ptW[j] = (fabs(nu_ptNt) < 9999.) ? vW.Pt(): -9999. ;
	    etaW[j] = (fabs(nu_etaNt) < 9999.) ? vW.Eta() : -9999. ;

	    float phiMuTemp = lvMu.Phi();
	    phi_munu[j] = phiMuTemp - nu_phiNt;
	    //phi_munu = phi - nu_phiNt;
            if(phi_munu[j]> TMath::Pi()) {phi_munu[j] -= TMath::TwoPi();} if(phi_munu[j]<-1*TMath::Pi()){phi_munu[j]+=TMath::TwoPi();} //fold between -Pi and +Pi
	    //phi_munu = lvMu.DeltaPhi(lvIDsum);  
            ///calculate and store the transverse mass
            mt[j] = (fabs(nu_ptNt) < 9999.) ? TMath::Sqrt(2.*fabs(pt[j])*fabs(nu_ptNt)*(1.0-TMath::Cos(phi_munu[j]))) : -9999. ; 
            mtCalo[j] =(fabs(nu_ptNt) < 9999.) ? TMath::Sqrt(2.*fabs(pt[j])*fabs(caloMETNt)*(1.-TMath::Cos(phi_munu[j]))) : -9999.0; 
	    float term1 = TMath::Sqrt(mt[j]*mt[j]+ptW[j]*ptW[j]*TMath::SinH(etaW[j])*TMath::SinH(etaW[j]));
	    float term2 = ptW[j]*TMath::SinH(etaW[j]);
	    float num = term1 +term2;
	    yW[j] = TMath::Log(num/mt[j]);
	    
            ///cuts from pp W/Z cross-section note
	    //if(fabs(ptMS-ptID)>15.||fabs(z0SA - z0)>10.) val = 0 ;
	    //if(ptcone40>0.50*pt ) val = 0 ;

           //muon-jet matching 
	   float dRjetMin = 9999. ;
           float mujet_dRTemp = 9999.;
           if (antikt2HIItrEM_n==0){ 

	   	mujetdR_one.push_back(mujet_dRTemp);
	        dphiMuJet_one.push_back(mujet_dRTemp);
                detaMuJet_one.push_back(mujet_dRTemp);
	   }
           for(int jt=0; jt<antikt2HIItrEM_n; jt++){
              jet_E[jt] = antikt2HIItrEM_E[jt]/1000. ;
              jet_eta[jt] = antikt2HIItrEM_eta[jt];
	      jet_Et[jt] = jet_E[jt]/TMath::CosH(jet_eta[jt]) ;
              jet_pt[jt] = antikt2HIItrEM_pt[jt]/1000.;
              //if(jet_Et>30.&&jet_pt>20.)
              //if(jet_Et>25.)
              if(jet_Et[jt]>30.){
              	jet_phi[jt] = antikt2HIItrEM_phi[jt];
              	float dphi = phi[j] - jet_phi[jt] ;
              	if(dphi> TMath::Pi()) {dphi -= TMath::TwoPi();} if(dphi<-1*TMath::Pi()){dphi+=TMath::TwoPi();} //fold between -Pi and +Pi
		dphiMuJet_one.push_back(dphi);

              	float deta = eta[j] - jet_eta[jt] ;
              	mujet_dRTemp = TMath::Sqrt(dphi*dphi+deta*deta) ;
		detaMuJet_one.push_back(deta);
		//detaMuJet_one.push_back(deta);
	      	//if(mujet_dRTemp<dRjetMin) dRjetMin = mujet_dRTemp ;   //find the smallest dR btwn jet and muon
	           
	        //mujet_dR[jt] = mujet_dRTemp;
	        mujetdR_one.push_back(mujet_dRTemp);
               	JETS++;
           }
	     //else mujet_dR[jt] = -9999.;
	     else {
		mujet_dRTemp = -9999.;
	   	mujetdR_one.push_back(mujet_dRTemp);
	        dphiMuJet_one.push_back(mujet_dRTemp);
                detaMuJet_one.push_back(mujet_dRTemp);
	     	/*mujetdR_one.push_back(-9999.) ;
	        dphiMuJet_one.push_back(-9999.);
                detaMuJet_one.push_back(-9999.);*/
	   }
           } //JETS
	   mujetdR->push_back(mujetdR_one);
	   dphiMuJet->push_back(dphiMuJet_one);
           detaMuJet->push_back(detaMuJet_one);
	   if (JETS!=0) hiPtJets = JETS;

	   //mujet_dR[j] = dRjetMin;

	   if(dRjetMin<=0.3){
               //val = 0;
               hJETS30->Fill(pt[j]);
               JETS1++;
             } 
           if(dRjetMin<=0.25){
               hJETS25->Fill(pt[j]);
             } 
           if(dRjetMin<=0.20){
               hJETS20->Fill(pt[j]);
             } 
           if(dRjetMin<=0.15){
               hJETS15->Fill(pt[j]);
             } 


	   // Use the MC event number to set seed so that the random numbers are reproducible by different analyzers
           mcp_smear.SetSeed(event,i);
           mcp_smear.Event(ptSA[j], ptID[j], pt[j], eta[j], charge[j]) ;

	   // Get Smeared & Scaled Pts
           pTCB_smeared[j] = mcp_smear.pTCB();
           pTMS_smeared[j] = mcp_smear.pTMS();
           pTID_smeared[j] = mcp_smear.pTID();
           ///smeared
           TVector3 lvMuSm;
           lvMuSm.SetPtEtaPhi(pTCB_smeared[j],eta[j],phi[j]) ;
           float phiMuTempSm = lvMuSm.Phi();
           phi_munuSm[j] = phiMuTempSm - nu_phiNt;
           if(phi_munuSm[j] > TMath::Pi()) {phi_munuSm[j] -= TMath::TwoPi();} if(phi_munuSm[j]<-1*TMath::Pi()){phi_munuSm[j]+=TMath::TwoPi();} //fold between -Pi and +Pi
           ///calculate mt using smeared combined muon pT
           mTCB_smeared[j] = TMath::Sqrt(2.*fabs(pTCB_smeared[j])*fabs(nu_ptNt)*(1.-TMath::Cos(phi_munuSm[j]))); 
           

            /// Change the Pts UP or DOWN (ID or MS)
            /// mcp_smear.PTVar(pTMS_smeared, pTID_smeared, pTCB_smeared, THESTRING);
            /// Valid values for "THESTRING": {"MSLOW", "MSUP", "IDLOW", "IDUP"} 

          if(doMSLOW) { mcp_smear.PTVar(pTMS_smeared[j], pTID_smeared[j], pTCB_smeared[j], "MSLOW");}
          else if(doMSUP){ mcp_smear.PTVar(pTMS_smeared[j], pTID_smeared[j], pTCB_smeared[j], "MSUP");}
          else if(doIDLOW){ mcp_smear.PTVar(pTMS_smeared[j], pTID_smeared[j], pTCB_smeared[j], "IDLOW");}
          else if(doIDUP){ mcp_smear.PTVar(pTMS_smeared[j], pTID_smeared[j], pTCB_smeared[j], "IDUP");}
	  else{}



//        subtractedMPT = getSubtractedMpt();
//        scaledMPT[j] = getScaledMpt(subtractedMPT,3.90034,pt[j]); //scale factor from histogram mean division 
       } //muid loop
       
//       subtractedMPT = getSubtractedMpt();
       
       
       //std::cout<<massCB->size()<<std::endl; 
       tree->Fill();
  } //end event loop

     std::cout << " writing result " << std::endl;
     output->Write();
     output->Close();
     std::cout << "writing result: done " << std::endl;
     return 0;
}

//////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////
//dtor
//////////////////////////////////////////////////////////////////////////////////////////////
MuonSlim::~MuonSlim() {

	std::cout << "Clean up." << std::endl;
     	delete ntupleToRead; 
     	delete trig_EF_trigmuonef_track_MS_phi ;
     	delete trig_EF_trigmuonef_track_MS_eta;
	//delete hM;
	//delete hZDY;
	delete hJETS15;
	delete hJETS20;
	delete hJETS25;
	delete hJETS30;
	delete tree;
        delete output ;
	if(fMB) delete fMB;
	if(tMB) delete tMB;

}
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
//ctor
//////////////////////////////////////////////////////////////////////////////////////////////
MuonSlim::MuonSlim (){


  	sMC = "MC";
  	sMCJ2 = "MCJ2";
  	sMB = "MB";
  	sHP = "HP";
  	sHipHP = "HipHP";
  	sPP = "pp";
	
	sMSUP = "MSUP";
	sMSLOW = "MSLOW";
	sIDUP = "IDUP";
	sIDLOW = "IDLOW";

	doSmearSyst = false;
	//mcp_smear("Data11","muid","pT","Rel17","/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/CommonNtuple/MuonMomentumCorrections/share/");

	//tree = new TTree("tree","tree");
	//treeMuTru = new TTree("treeMuTru","treeMuTru");
	ntupleToRead = 0;
	tree = 0;
	tMB = 0;

	//hM = 0;
	//hZDY = 0;
	hJETS15 = 0;
	hJETS20 = 0;
	hJETS25 = 0;
	hJETS30 = 0;


  	outName = "HISingleMuon.root";
	output = 0;
	fMB = 0;

	nu_pt500  = -9999.;
	nu_px500  = -9999.;
	nu_py500  = -9999.;
	nu_pz500  = -9999.;
	nu_theta500 = -9999.;
	nu_eta500 = -9999.;
	nu_phi500 = -9999.;

	nu_pt1000  = -9999.;
	nu_px1000  = -9999.;
	nu_py1000  = -9999.;
	nu_pz1000  = -9999.;
	nu_theta1000 = -9999.;
	nu_eta1000 = -9999.;
	nu_phi1000 = -9999.;

	nu_pt2000  = -9999.;
	nu_px2000  = -9999.;
	nu_py2000  = -9999.;
	nu_pz2000  = -9999.;
	nu_theta2000 = -9999.;
	nu_eta2000 = -9999.;
	nu_phi2000 = -9999.;

	nu_pt3000  = -9999.;
	nu_px3000  = -9999.;
	nu_py3000  = -9999.;
	nu_pz3000  = -9999.;
	nu_theta3000 = -9999.;
	nu_eta3000 = -9999.;
	nu_phi3000 = -9999.;



	hasHiPtMuon = false;

	massCB = 0;
	mujetdR = 0;
	mugammadR = 0;
	dphiMuGamma = 0;
	detaMuGamma = 0;
	dphiMuJet = 0;
	detaMuJet = 0;
	
}
//////////////////////////////////////////////////////////////////////////////////////////////
//---eof---//
