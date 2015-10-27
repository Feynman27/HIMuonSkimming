#include "TrigGlobalBranch.h"

/////////////////////////////
//initializations
/////////////////////////////

float TrigGlobalBranch::caloMissEy(){

   float missingEy = 0;
   float missingEx = 0;

   for(int i=0;i<TotalEt_n;i++){
	
	float eta = TotalEt_layer_eta->at(i);
	float phi = TotalEt_layer_phi->at(i);
	float et = 0;

	int nLayers = TotalEt_layer_sampling_calib->at(i).size();

	for(int j=0; j<nLayers; j++){

		float tower = TotalEt_layer_sampling_calib->at(i)[j];
		et += tower;
	}

	if (fabs(eta)>3.2) continue;
	missingEy -= et*cos(phi);
	missingEx -= et*sin(phi);


   }

	missingEy = missingEy/1000.;
	return missingEy;
}
float TrigGlobalBranch::caloMissEx(){

   float missingEy = 0;
   float missingEx = 0;

   for(int i=0;i<TotalEt_n;i++){
	
	float eta = TotalEt_layer_eta->at(i);
	float phi = TotalEt_layer_phi->at(i);
	float et = 0;

	int nLayers = TotalEt_layer_sampling_calib->at(i).size();

	for(int j=0; j<nLayers; j++){

		float tower = TotalEt_layer_sampling_calib->at(i)[j];
		et += tower;
	}

	if (fabs(eta)>3.2) continue;
	missingEy -= et*cos(phi);
	missingEx -= et*sin(phi);


   }

	missingEx = missingEx/1000.;
	return missingEx;
}
/////////////////////////////////
//missing et from calo cells
/////////////////////////////////
float TrigGlobalBranch::caloMissEt(){

   float missingEy = 0;
   float missingEx = 0;

   for(int i=0;i<TotalEt_n;i++){
	
	float eta = TotalEt_layer_eta->at(i);
	float phi = TotalEt_layer_phi->at(i);
	float et = 0;

	int nLayers = TotalEt_layer_sampling_calib->at(i).size();

	for(int j=0; j<nLayers; j++){

		float tower = TotalEt_layer_sampling_calib->at(i)[j];
		et += tower;
	}

	if (fabs(eta)>3.2) continue;
	missingEy -= et*cos(phi);
	missingEx -= et*sin(phi);


   }

	missingEy = missingEy/1000.;
	missingEx = missingEx/1000.;
	float MET = sqrt(missingEx*missingEx+missingEy*missingEy);

	return MET;

}

////////////////////////////////////////////////////////////////////////////////////
//Missing momentum vector histo initialization//////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

int TrigGlobalBranch::InitMissMomHistos() {

	
	for(int imom=0; imom<missMomBins; imom++){

		sprintf(chMissPt,"hMissPt_%i",imom);
		sprintf(chMissPx,"hMissPx_%i",imom);
		sprintf(chMissPy,"hMissPy_%i",imom);

		hMissPt[imom] = new TH1F(chMissPt,chMissPt,1000,0.0,100.0); 	
		hMissPx[imom] = new TH1F(chMissPx,chMissPx,2000,-100.0,100.0); 	
		hMissPy[imom] = new TH1F(chMissPy,chMissPy,2000,-100.0,100.0); 	

		for(int icent=0; icent<ncent; icent++){
			
			sprintf(chMissPtCent,"hMissPt_%i_Cent_%i",imom,icent);
			sprintf(chMissPxCent,"hMissPx_%i_Cent_%i",imom,icent);
			sprintf(chMissPyCent,"hMissPy_%i_Cent_%i",imom,icent);

			hMissPtCent[imom][icent] = new TH1F(chMissPtCent,chMissPtCent,500,0.0,100.0); 
			hMissPxCent[imom][icent] = new TH1F(chMissPxCent,chMissPxCent,1000,-100.0,100.0); 
			hMissPyCent[imom][icent] = new TH1F(chMissPyCent,chMissPyCent,1000,-100.0,100.0); 
		}
	}
	return 1;
}

////////////////////////////////////////////////////////////////////////////////////
//index centrality/////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
int TrigGlobalBranch::indexCentrality(float centrality){

		if(centrality>=0.0&&centrality<0.1) return 0;
		else if (centrality>=0.1&&centrality<0.2) return 1;
		else if (centrality>=0.2&&centrality<0.4) return 2;
		else if (centrality>=0.4&&centrality<=0.8) return 3;
		else if (centrality>0.8) return 4;
		else {
			std::cout << "Unable to index centrality." << std::endl;
			exit(0);
		}
	return -1;
}

////////////////////////////////////////////////////////////////////////////////////
//Missing momentum vector histo filling/////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
void TrigGlobalBranch::FillMissMomHistos(){
	
	TVector3 lvSumTemp;
	int imom, icent;
	float centralityTemp = -1.; 
	centralityTemp = AssignCentrality(Fcal_Et);
	icent = indexCentrality(centralityTemp);

	imom = 0;
	lvSumTemp = MissMom(500.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(700.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(1000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(2000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());


	++imom;
	lvSumTemp = MissMom(3000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(4000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(5000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(6000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(7000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(10000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

	++imom;
	lvSumTemp = MissMom(15000.0);
	hMissPt[imom]->Fill(lvSumTemp.Perp());
	hMissPx[imom]->Fill(lvSumTemp.Px());
	hMissPy[imom]->Fill(lvSumTemp.Py());
	hMissPtCent[imom][icent]->Fill(lvSumTemp.Perp());
	hMissPxCent[imom][icent]->Fill(lvSumTemp.Px());
	hMissPyCent[imom][icent]->Fill(lvSumTemp.Py());

        	
}
////////////////////////////////////////////////////////////////////////////////////
//Missing momentum vector theta/////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

float TrigGlobalBranch::Theta(float nu_pz, float nu_px, float nu_py, float nu_pt) {
        //neutrino vector opposite to muon vector
        //nu_theta = nu_theta - TMath::Pi() ;
        float nu_theta = 0.0 ;
        if (nu_pz == 0.0 && nu_px == 0.0 && nu_py == 0.0) {
                nu_theta = -9999.;
                return nu_theta;
        }

        if (nu_theta == -9999.) std::cout << "WARNING: nu_theta not calculated correctly" << std::endl;

       //possible bug here???
       //for now, calculate theta and eta at slimmming level
        nu_theta = (nu_pz == 0.0 && nu_px != 0.0 && nu_py != 0.0 && nu_pt != 0.0) ? TMath::PiOver2() : TMath::ATan2(nu_pt,nu_pz) - TMath::Pi()  ;

        if(nu_theta<0.) nu_theta*=-1.0 ;

        if(nu_theta>TMath::Pi() && nu_theta<3*TMath::PiOver2()) nu_theta-=TMath::PiOver2();
        if(nu_theta>3*TMath::PiOver2() && nu_theta < 2.0*TMath::Pi()) nu_theta-=3*TMath::PiOver2() ;
        if(nu_theta == 3*TMath::PiOver2()) nu_theta-=TMath::Pi() ;

        //safety
        if(nu_theta>TMath::Pi()) std::cout << "WARNING: Theta > Pi --> Expect wrong results." << std::endl;

        return nu_theta;
}

////////////////////////////////////////////////////////////////////////////////////
//Missing momentum vector eta///////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------

float TrigGlobalBranch::Eta(float nu_theta) {

        if (nu_theta == -9999.) return -9999.;

        return -1*TMath::Log(TMath::Tan(nu_theta/2.0));

}


////////////////////////////////////////////////////////////////////////////////////
//Missing momentum vector calculation///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------
TVector3 TrigGlobalBranch::MissMom(float trkThresh){

	//std::cout << "MissMom fcn" << std::endl;
	for (int reco_track=0;reco_track<trk_n;reco_track++){

          	int trkQuality=0;
          	float phi,pt,eta,theta;

		if(reco_track==0) {

			vSum.SetPtThetaPhi(0.,0.,0.);
       			Mytrk_n = 0;
          		trkCounter=0;
		}
			theta = trk_theta_wrtPV->at(reco_track);
			eta = -1.*TMath::Log(TMath::Tan(trk_theta_wrtPV->at(reco_track)/2.)) ;
			phi = trk_phi_wrtPV   ->at(reco_track);
			pt = fabs(1./trk_qoverp_wrtPV->at(reco_track))/TMath::CosH(eta)/1000. ;
			if (trk_expectBLayerHit -> at(reco_track)==1 && trk_nBLHits -> at(reco_track)==0)                         continue;
			if (trk_pt -> at(reco_track) > 10000. && TMath::Prob(trk_chi2->at(reco_track),trk_ndof->at(reco_track)) <= 0.01) continue;
			if(trk_theta_wrtPV->at(reco_track) == 0)      continue; // safety
			float z0     = trk_z0_wrtPV->at(reco_track)*sin(trk_theta_wrtPV->at(reco_track));
			float ez0    = sqrt(trk_cov_z0_wrtPV->at(reco_track)   *pow(sin(trk_theta_wrtPV->at(reco_track)),2) + 
				trk_cov_theta_wrtPV->at(reco_track)*pow(cos(trk_theta_wrtPV->at(reco_track))
					*trk_z0_wrtPV->at(reco_track),2));
			float d0 = trk_d0_wrtPV->at(reco_track);
			float ed0    = sqrt(trk_cov_d0_wrtPV->at(reco_track));

			if (
			       trk_nPixHits -> at(reco_track)     > 1    &&
			       trk_nSCTHits -> at(reco_track)       > 5    &&
			       fabs(trk_eta -> at(reco_track))<2.5      &&
			       trk_nSCTHoles   -> at(reco_track) < 1 &&
			       (trk_nPixHoles-> at(reco_track) + trk_nSCTHoles-> at(reco_track) )   < 2    &&
			       (trk_nPixHits-> at(reco_track)+trk_nSCTHits-> at(reco_track) )   > 7    &&
			       fabs(d0/ed0) < 3.0 &&
			       fabs(z0/ez0) < 3.0 &&
			       trk_pt->at(reco_track)>trkThresh
			   ) { trkQuality = 1; trkCounter++;}
			else continue;

		if(trkQuality) {

			lvTrk.SetPtThetaPhi(pt,theta,phi);
			vSum += lvTrk;
		}

		//safety
          	if(trkQuality!=0&&trkQuality!=1) {
              		std::cout << "ERROR: check track quality. Track quality = " << trkQuality << " Track pT (MeV) = " << trk_pt->at(reco_track) << std::endl; break;
          	}

		Mytrk_n++;
          	if(Mytrk_n>=MAXTRK) break;
	}

	if(trkCounter>0) return vSum;
	else {
		vSum.SetPtThetaPhi(9999.0,-9999.0,-9999.0);
		return vSum;
	}

}
////////////////////////////////////////////////////////////////////////////////////
//Initialize output tree branches///////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------------------------

void TrigGlobalBranch::Set_Trig_and_Global_Branches( TTree *MyTree)
{

   MyTree->Branch("RunNumber", &RunNumber, "RunNumber/I");
   MyTree->Branch("EventNumber", &EventNumber, "EventNumber/I");
   MyTree->Branch("Fcal_Et", &Fcal_Et, "Fcal_Et/F");
   MyTree->Branch("Centrality", &Centrality, "Centrality/F");
   MyTree->Branch("vx_x"            , &Myvx_x            , "vx_x/F"                  );
   MyTree->Branch("vx_y"            , &Myvx_y            , "vx_y/F"                  );
   MyTree->Branch("vx_z"            , &Myvx_z            , "vx_z/F"                  );

   MyTree->Branch("mbtime_timeA"    , &mbtime_timeA      , "mbtime_timeA/F"          );
   MyTree->Branch("mbtime_timeC"    , &mbtime_timeC      , "mbtime_timeC/F"         );
   MyTree->Branch("mbtime_countA"   , &mbtime_countA     , "mbtime_countA/I"         );
   MyTree->Branch("mbtime_countC"   , &mbtime_countC     , "mbtime_countC/I"         );

   MyTree->Branch("Psi_Et_N"        , &Psi_Et_N          , "Psi_Et_N/F"             );
   MyTree->Branch("Psi_Et_P"        , &Psi_Et_P          , "Psi_Et_P/F"             );
   MyTree->Branch("Psi_E_N"         , &Psi_E_N           , "Psi_E_N/F"              );
   MyTree->Branch("Psi_E_P"         , &Psi_E_P           , "Psi_E_P/F"              );
   //missing pT from ID tracks
   MyTree->Branch("nu_pt500"           , &nu_pt500, "nu_pt500/F"              );
   MyTree->Branch("nu_px500"           , &nu_px500, "nu_px500/F"              );
   MyTree->Branch("nu_py500"           , &nu_py500, "nu_py500/F"              );
   MyTree->Branch("nu_pz500"           , &nu_pz500, "nu_pz500/F"              );
   MyTree->Branch("nu_theta500"        , &nu_theta500, "nu_theta500/F"              );
   MyTree->Branch("nu_eta500"          , &nu_eta500, "nu_eta500/F"              );
   MyTree->Branch("nu_phi500"           , &nu_phi500, "nu_phi500/F"              );

   MyTree->Branch("nu_pt700"           , &nu_pt700, "nu_pt700/F"              );
   MyTree->Branch("nu_px700"           , &nu_px700, "nu_px700/F"              );
   MyTree->Branch("nu_py700"           , &nu_py700, "nu_py700/F"              );
   MyTree->Branch("nu_pz700"           , &nu_pz700, "nu_pz700/F"              );
   MyTree->Branch("nu_theta700"        , &nu_theta700, "nu_theta700/F"              );
   MyTree->Branch("nu_eta700"          , &nu_eta700, "nu_eta700/F"              );
   MyTree->Branch("nu_phi700"           , &nu_phi700, "nu_phi700/F"              );

   MyTree->Branch("nu_pt2000"           , &nu_pt2000, "nu_pt2000/F"              );
   MyTree->Branch("nu_px2000"           , &nu_px2000, "nu_px2000/F"              );
   MyTree->Branch("nu_py2000"           , &nu_py2000, "nu_py2000/F"              );
   MyTree->Branch("nu_pz2000"           , &nu_pz2000, "nu_pz2000/F"              );
   MyTree->Branch("nu_theta2000"        , &nu_theta2000, "nu_theta2000/F"              );
   MyTree->Branch("nu_eta2000"          , &nu_eta2000, "nu_eta2000/F"              );
   MyTree->Branch("nu_phi2000"           , &nu_phi2000, "nu_phi2000/F"              );

   MyTree->Branch("nu_pt4000"           , &nu_pt4000, "nu_pt4000/F"              );
   MyTree->Branch("nu_px4000"           , &nu_px4000, "nu_px4000/F"              );
   MyTree->Branch("nu_py4000"           , &nu_py4000, "nu_py4000/F"              );
   MyTree->Branch("nu_pz4000"           , &nu_pz4000, "nu_pz4000/F"              );
   MyTree->Branch("nu_phi4000"           , &nu_phi4000, "nu_phi4000/F"              );
   MyTree->Branch("nu_theta4000"        , &nu_theta4000, "nu_theta4000/F"              );
   MyTree->Branch("nu_eta4000"          , &nu_eta4000, "nu_eta4000/F"              );

   MyTree->Branch("nu_pt10000"           , &nu_pt10000, "nu_pt10000/F"              );
   MyTree->Branch("nu_px10000"           , &nu_px10000, "nu_px10000/F"              );
   MyTree->Branch("nu_py10000"           , &nu_py10000, "nu_py10000/F"              );
   MyTree->Branch("nu_pz10000"           , &nu_pz10000, "nu_pz10000/F"              );
   MyTree->Branch("nu_phi10000"           , &nu_phi10000, "nu_phi10000/F"              );
   MyTree->Branch("nu_theta10000"        , &nu_theta10000, "nu_theta10000/F"              );
   MyTree->Branch("nu_eta10000"          , &nu_eta10000, "nu_eta10000/F"              );

   MyTree->Branch("nu_pt15000"           , &nu_pt15000, "nu_pt15000/F"              );
   MyTree->Branch("nu_px15000"           , &nu_px15000, "nu_px15000/F"              );
   MyTree->Branch("nu_py15000"           , &nu_py15000, "nu_py15000/F"              );
   MyTree->Branch("nu_pz15000"           , &nu_pz15000, "nu_pz15000/F"              );
   MyTree->Branch("nu_phi15000"           , &nu_phi15000, "nu_phi15000/F"              );
   MyTree->Branch("nu_theta15000"        , &nu_theta15000, "nu_theta15000/F"              );
   MyTree->Branch("nu_eta15000"          , &nu_eta15000, "nu_eta15000/F"              );
 
 
   MyTree->Branch("nu_pt5000"           , &nu_pt5000, "nu_pt5000/F"              );
   MyTree->Branch("nu_px5000"           , &nu_px5000, "nu_px5000/F"              );
   MyTree->Branch("nu_py5000"           , &nu_py5000, "nu_py5000/F"              );
   MyTree->Branch("nu_pz5000"           , &nu_pz5000, "nu_pz5000/F"              );
   MyTree->Branch("nu_phi5000"           , &nu_phi5000, "nu_phi5000/F"              );
   MyTree->Branch("nu_theta5000"        , &nu_theta5000, "nu_theta5000/F"              );
   MyTree->Branch("nu_eta5000"          , &nu_eta5000, "nu_eta5000/F"              );

   MyTree->Branch("nu_pt6000"           , &nu_pt6000, "nu_pt6000/F"              );
   MyTree->Branch("nu_px6000"           , &nu_px6000, "nu_px6000/F"              );
   MyTree->Branch("nu_py6000"           , &nu_py6000, "nu_py6000/F"              );
   MyTree->Branch("nu_pz6000"           , &nu_pz6000, "nu_pz6000/F"              );
   MyTree->Branch("nu_phi6000"           , &nu_phi6000, "nu_phi6000/F"              );
   MyTree->Branch("nu_theta6000"        , &nu_theta6000, "nu_theta6000/F"              );
   MyTree->Branch("nu_eta6000"          , &nu_eta6000, "nu_eta6000/F"              );


   MyTree->Branch("nu_pt7000"           , &nu_pt7000, "nu_pt7000/F"              );
   MyTree->Branch("nu_px7000"           , &nu_px7000, "nu_px7000/F"              );
   MyTree->Branch("nu_py7000"           , &nu_py7000, "nu_py7000/F"              );
   MyTree->Branch("nu_pz7000"           , &nu_pz7000, "nu_pz7000/F"              );
   MyTree->Branch("nu_phi7000"           , &nu_phi7000, "nu_phi7000/F"              );
   MyTree->Branch("nu_theta7000"        , &nu_theta7000, "nu_theta7000/F"              );
   MyTree->Branch("nu_eta7000"          , &nu_eta7000, "nu_eta7000/F"              );

   MyTree->Branch("nu_pt1000"           , &nu_pt1000, "nu_pt1000/F"              );
   MyTree->Branch("nu_px1000"           , &nu_px1000, "nu_px1000/F"              );
   MyTree->Branch("nu_py1000"           , &nu_py1000, "nu_py1000/F"              );
   MyTree->Branch("nu_pz1000"           , &nu_pz1000, "nu_pz1000/F"              );
   MyTree->Branch("nu_phi1000"           , &nu_phi1000, "nu_phi1000/F"              );
   MyTree->Branch("nu_theta1000"        , &nu_theta1000, "nu_theta1000/F"              );
   MyTree->Branch("nu_eta1000"          , &nu_eta1000, "nu_eta1000/F"              );

   MyTree->Branch("nu_pt3000"           , &nu_pt3000, "nu_pt3000/F"              );
   MyTree->Branch("nu_px3000"           , &nu_px3000, "nu_px3000/F"              );
   MyTree->Branch("nu_py3000"           , &nu_py3000, "nu_py3000/F"              );
   MyTree->Branch("nu_pz3000"           , &nu_pz3000, "nu_pz3000/F"              );
   MyTree->Branch("nu_phi3000"           , &nu_phi3000, "nu_phi3000/F"              );
   MyTree->Branch("nu_theta3000"        , &nu_theta3000, "nu_theta3000/F"              );
   MyTree->Branch("nu_eta3000"          , &nu_eta3000, "nu_eta3000/F"              );

   MyTree->Branch("caloMET"          , &caloMET, "caloMET/F"              );
   MyTree->Branch("caloMEx"          , &caloMEx, "caloMEx/F"              );
   MyTree->Branch("caloMEy"          , &caloMEy, "caloMEy/F"              );


//   MyTree->Branch("pTmissID_vx"        , "ROOT::Math::TLorentzVector", &pTmissID_nocuts              );
   MyTree->Branch("nu_pt_vx"           , &nu_pt_nocuts, "nu_pt_vx/F"              );
   MyTree->Branch("nu_phi_vx"           , &nu_phi_nocuts, "nu_phi_vx/F"              );
   MyTree->Branch("hasHiPtMuon"     , &hasHiPtMuon       , "hasHiPtMuon/I"              );

   //Trigger Branches for L1 items Before Prescale 
   for(int itrig=0;itrig<N_L1_TRIGS_TBP;itrig++){
     std::string name1=L1_Trig_TBP_Names[itrig]+"_TBP";
     std::string br_string=name1 +"/I";
     MyTree->Branch(name1.c_str() ,  &L1_Trigs_TBP[itrig]  ,  br_string.c_str());
   }
   //Trigger Branches for L1 items After Prescale 
   /*for(int itrig=0;itrig<N_L1_TRIGS_TAP;itrig++){
     std::string name1=L1_Trig_TAP_Names[itrig]+"_TAP";
     std::string br_string=name1 +"/I";
     MyTree->Branch(name1.c_str() ,  &L1_Trigs_TAP[itrig]  ,  br_string.c_str());
   }*/
   //Trigger Branches for L1 items 
   for(int itrig=0;itrig<N_L1_TRIGS;itrig++){
     std::string name1=L1_Trig_Names[itrig];
     std::string br_string=name1 +"/I";
     MyTree->Branch(name1.c_str() ,  &L1_Trigs[itrig]  ,  br_string.c_str());
   }
   //Trigger Branches for EF items 
   for(int itrig=0;itrig<N_EF_TRIGS;itrig++){
     std::string name1=EF_Trig_Names[itrig];
     std::string br_string=name1 +"/I";
     MyTree->Branch(name1.c_str() ,  &EF_Trigs[itrig]  ,  br_string.c_str());
   }
}


////////////////////////////////////////////////////////////////////////////////////
//assign centrality using fcal energy (TeV)/////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

float TrigGlobalBranch::AssignCentrality(float fcal_Et ){

  float centralityTemp = -1.;
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

	return centralityTemp;
}
////////////////////////////////////////////////////////////////////////////////////
//Fill output tree branches/////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
void TrigGlobalBranch::Fill_Trig_and_Global_Branches()
{
  //L1 trigger Info TBP
  for(int itrig=0;itrig<N_L1_TRIGS_TBP;itrig++){
    //8 words, 32 bits per word --> 256 trigger bits
    //std::cout << "Fill trig/glob branches" << std::endl;
    unsigned int temp1 = trig_L1_TBP->at(L1_Trigs_TBP_id[itrig]/32); // get the word
    L1_Trigs_TBP[itrig]   = (temp1 & (1<<(L1_Trigs_TBP_id[itrig]%32))); //get digit in word and shift 1 by modulo amt
    if(L1_Trigs_TBP[itrig] !=0) L1_Trigs_TBP[itrig]=1; 
  } 

  //L1 trigger Info TAP
/*  for(int itrig=0;itrig<N_L1_TRIGS_TAP;itrig++){
    //8 words, 32 bits per word --> 256 trigger bits
    //std::cout << "Fill trig/glob branches" << std::endl;
    unsigned int temp1 = trig_L1_TAP->at(L1_Trigs_TAP_id[itrig]/32); // get the word
    L1_Trigs_TAP[itrig]   = (temp1 & (1<<(L1_Trigs_TAP_id[itrig]%32))); //get digit in word and shift 1 by modulo amt
    if(L1_Trigs_TAP[itrig] !=0) L1_Trigs_TAP[itrig]=1; 
  }*/ 


  //L1 trigger Info
  for(int itrig=0;itrig<N_L1_TRIGS;itrig++){
    unsigned int temp1 = trig_L1_TAV->at(L1_Trigs_id[itrig]/32);
    L1_Trigs[itrig]   = (temp1 & (1<<(L1_Trigs_id[itrig]%32)));
    if(L1_Trigs[itrig] !=0) L1_Trigs[itrig]=1; 
  } 

  //EF trigger Info
  //iterate over each EF trigger defined in the array (see GlobalBranch header file)
  //if the event passed the EF, assign a value 1 (i.e. success)
  for(int itrig=0;itrig<N_EF_TRIGS;itrig++){
    EF_Trigs[itrig]=0;
    int EFsize = trig_EF_passedPhysics->size(); 
    for (int i=0;i<EFsize;i++){
      if (trig_EF_passedPhysics->at(i) == EF_Trigs_id[itrig] ) EF_Trigs[itrig]=1;
    }
  }
	caloMET = caloMissEt(); 
	caloMEx = caloMissEx(); 
	caloMEy = caloMissEy(); 


       //500MeV
       lvSum500 = MissMom(500.0);
       nu_phi500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Phi() + TMath::Pi() : -9999.0;
       nu_pt500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Perp() : -9999.0;
       nu_px500 = fabs(lvSum500.Perp() ) < 9999.0 ? -1.0*lvSum500.Px() : -9999.0;
       nu_py500 = fabs(lvSum500.Perp() ) < 9999.0 ? -1.0*lvSum500.Py(): -9999.0;
       nu_pz500 = fabs(lvSum500.Perp() ) < 9999.0 ? -1.0*lvSum500.Pz() : -9999.0;
       lvSum500.SetXYZ(nu_px500,nu_py500,nu_pz500);
       nu_theta500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Theta() : -9999.0 ;
       nu_eta500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Eta() : -9999.0;

	//700
       lvSum700 = MissMom(700.0);
       nu_phi700 = fabs(lvSum700.Perp() ) < 9999.0 ? lvSum700.Phi() + TMath::Pi() : -9999.0;
       nu_pt700 = fabs(lvSum700.Perp() ) < 9999.0 ? lvSum700.Perp() : -9999.0;
       nu_px700 = fabs(lvSum700.Perp() ) < 9999.0 ? -1.0*lvSum700.Px() : -9999.0;
       nu_py700 = fabs(lvSum700.Perp() ) < 9999.0 ? -1.0*lvSum700.Py(): -9999.0;
       nu_pz700 = fabs(lvSum700.Perp() ) < 9999.0 ? -1.0*lvSum700.Pz() : -9999.0;
       lvSum700.SetXYZ(nu_px700,nu_py700,nu_pz700);
       nu_theta700 = fabs(lvSum700.Perp() ) < 9999.0 ? lvSum700.Theta() : -9999.0 ;
       nu_eta700 = fabs(lvSum700.Perp() ) < 9999.0 ? lvSum700.Eta() : -9999.0;


       //1000
       lvSum1000 = MissMom(1000.0);
       nu_phi1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Phi() + TMath::Pi() : -9999.0;
       nu_pt1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Perp() : -9999.0;
       nu_px1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? -1.0*lvSum1000.Px() : -9999.0;
       nu_py1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? -1.0*lvSum1000.Py(): -9999.0;
       nu_pz1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? -1.0*lvSum1000.Pz() : -9999.0;
       lvSum1000.SetXYZ(nu_px1000,nu_py1000,nu_pz1000);
       nu_theta1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Theta() : -9999.0 ;
       nu_eta1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Eta() : -9999.0;

	//2000
       lvSum2000 = MissMom(2000.0);
       nu_phi2000 = fabs(lvSum2000.Perp() ) < 9999.0 ? lvSum2000.Phi() + TMath::Pi() : -9999.0;
       nu_pt2000 = fabs(lvSum2000.Perp() ) < 9999.0 ? lvSum2000.Perp() : -9999.0;
       nu_px2000 = fabs(lvSum2000.Perp() ) < 9999.0 ? -1.0*lvSum2000.Px() : -9999.0;
       nu_py2000 = fabs(lvSum2000.Perp() ) < 9999.0 ? -1.0*lvSum2000.Py(): -9999.0;
       nu_pz2000 = fabs(lvSum2000.Perp() ) < 9999.0 ? -1.0*lvSum2000.Pz() : -9999.0;
       lvSum2000.SetXYZ(nu_px2000,nu_py2000,nu_pz2000);
       nu_theta2000 = fabs(lvSum2000.Perp() ) < 9999.0 ? lvSum2000.Theta() : -9999.0 ;
       nu_eta2000 = fabs(lvSum2000.Perp() ) < 9999.0 ? lvSum2000.Eta() : -9999.0;

       //3000
       lvSum3000 = MissMom(3000.0);
       nu_phi3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Phi() + TMath::Pi() : -9999.0;
       nu_pt3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Perp() : -9999.0;
       nu_px3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? -1.0*lvSum3000.Px() : -9999.0;
       nu_py3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? -1.0*lvSum3000.Py(): -9999.0;
       nu_pz3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? -1.0*lvSum3000.Pz() : -9999.0;
       lvSum3000.SetXYZ(nu_px3000,nu_py3000,nu_pz3000);
       nu_theta3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Theta() : -9999.0 ;
       nu_eta3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Eta() : -9999.0;
      
       //4000MeV
       lvSum4000 = MissMom(4000.0);
       nu_phi4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Phi() + TMath::Pi() : -9999.0;
       nu_pt4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Perp() : -9999.0;
       nu_px4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? -1.0*lvSum4000.Px() : -9999.0;
       nu_py4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? -1.0*lvSum4000.Py(): -9999.0;
       nu_pz4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? -1.0*lvSum4000.Pz() : -9999.0;
       lvSum4000.SetXYZ(nu_px4000,nu_py4000,nu_pz4000);
       nu_theta4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Theta() : -9999.0 ;
       nu_eta4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Eta() : -9999.0;

       //40000
       lvSum5000 = MissMom(5000.0);
       nu_phi5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Phi() + TMath::Pi() : -9999.0;
       nu_pt5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Perp() : -9999.0;
       nu_px5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? -1.0*lvSum5000.Px() : -9999.0;
       nu_py5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? -1.0*lvSum5000.Py(): -9999.0;
       nu_pz5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? -1.0*lvSum5000.Pz() : -9999.0;
       lvSum5000.SetXYZ(nu_px5000,nu_py5000,nu_pz5000);
       nu_theta5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Theta() : -9999.0 ;
       nu_eta5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Eta() : -9999.0;

       //6000
       lvSum6000 = MissMom(6000.0);
       nu_phi6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Phi() + TMath::Pi() : -9999.0;
       nu_pt6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Perp() : -9999.0;
       nu_px6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? -1.0*lvSum6000.Px() : -9999.0;
       nu_py6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? -1.0*lvSum6000.Py(): -9999.0;
       nu_pz6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? -1.0*lvSum6000.Pz() : -9999.0;
       lvSum6000.SetXYZ(nu_px6000,nu_py6000,nu_pz6000);
       nu_theta6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Theta() : -9999.0 ;
       nu_eta6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Eta() : -9999.0;

       //7000
       lvSum7000 = MissMom(7000.0);
       nu_phi7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Phi() + TMath::Pi() : -9999.0;
       nu_pt7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Perp() : -9999.0;
       nu_px7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? -1.0*lvSum7000.Px() : -9999.0;
       nu_py7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? -1.0*lvSum7000.Py(): -9999.0;
       nu_pz7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? -1.0*lvSum7000.Pz() : -9999.0;
       lvSum7000.SetXYZ(nu_px7000,nu_py7000,nu_pz7000);
       nu_theta7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Theta() : -9999.0 ;
       nu_eta7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Eta() : -9999.0;

       //10000 
       lvSum10000 = MissMom(10000.0);
       nu_phi10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Phi() + TMath::Pi() : -9999.0;
       nu_pt10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Perp() : -9999.0;
       nu_px10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? -1.0*lvSum10000.Px() : -9999.0;
       nu_py10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? -1.0*lvSum10000.Py(): -9999.0;
       nu_pz10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? -1.0*lvSum10000.Pz() : -9999.0;
       lvSum10000.SetXYZ(nu_px10000,nu_py10000,nu_pz10000);
       nu_theta10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Theta() : -9999.0 ;
       nu_eta10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Eta() : -9999.0;

       //15000
       lvSum15000 = MissMom(15000.0);
       nu_phi15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Phi() + TMath::Pi() : -9999.0;
       nu_pt15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Perp() : -9999.0;
       nu_px15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? -1.0*lvSum15000.Px() : -9999.0;
       nu_py15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? -1.0*lvSum15000.Py(): -9999.0;
       nu_pz15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? -1.0*lvSum15000.Pz() : -9999.0;
       lvSum15000.SetXYZ(nu_px15000,nu_py15000,nu_pz15000);
       nu_theta15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Theta() : -9999.0 ;
       nu_eta15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Eta() : -9999.0;

  //Vertex info. the 0th vertex is always the primary one.
   Myvx_x=vx_x->at(0); 
   Myvx_y=vx_y->at(0);
   Myvx_z=vx_z->at(0);


   // Make Centrality classes from FCal Energy  

   Centrality=-1.;

   Centrality = AssignCentrality(Fcal_Et); 
   if( Centrality < 0.) {
	std::cout << "ERROR: Centrality not properly assigned. Expect wrong results." << std::endl;
   }
   
}

TrigGlobalBranch::~TrigGlobalBranch(){
	
	/*for(int imom; imom<missMomBins; imom++){
		if(hMissPt[imom]) delete hMissPt[imom];
		if(hMissPx[imom]) delete hMissPx[imom];
		if(hMissPy[imom]) delete hMissPy[imom];

		for(int icent; icent<ncent; icent++){
			if(hMissPtCent[imom][icent]) delete hMissPtCent[imom][icent];
			if(hMissPxCent[imom][icent]) delete hMissPxCent[imom][icent];
			if(hMissPyCent[imom][icent]) delete hMissPyCent[imom][icent];
		}
	}*/
}

TrigGlobalBranch::TrigGlobalBranch(){

 /*hMissPt = NULL;
 hMissPx = 0;
 hMissPy = 0;
 hMissPtCent = 0;
 hMissPxCent = 0;
 hMissPyCent = 0;
 */
	
	/*for(int imom; imom<missMomBins; imom++){
		hMissPt[imom] = 0;
		hMissPx[imom] = 0;
		hMissPy[imom] = 0;
		
		for(int icent; icent<ncent; icent++){

			hMissPtCent[imom][icent]=0;
			hMissPxCent[imom][icent]=0;
			hMissPyCent[imom][icent]=0;

		}
	}*/


	
}















