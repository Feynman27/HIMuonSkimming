#include "TrigGlobalBranch.h"


#ifndef __CINT__
const int TrigGlobalBranch::N_L1_TRIGS_TBP = 15;

#endif

#ifndef __CINT__
const int TrigGlobalBranch::N_L1_TRIGS = 15;

#endif

#ifndef __CINT__
const int TrigGlobalBranch::N_EF_TRIGS = 36;

#endif

#ifndef __CINT__
const unsigned int TrigGlobalBranch::L1_Trigs_TBP_id[15]={138,192,36,35,93,91,88,92,133,41,43,228,223,224,15};

#endif

#ifndef __CINT__
int TrigGlobalBranch::L1_Trigs_TBP[15] = {0};
	
#endif
#ifndef __CINT__
	const std::string TrigGlobalBranch::L1_Trig_TBP_Names[15]={"L1_TE50"          , // 1    138
                                                 "L1_ZDC_A_C"       , // 2    192 
                                                 "L1_ZDC_A_C_VTE50" , // 3     36

                                                 "L1_MU0_VTE50"     , // 4     35
                                                 "L1_MU4"           , // 5     93
                                                 "L1_MU11"          , // 6     91
                                                 "L1_MU15"          , // 7     88
                                                 "L1_MU20"          , // 8     92
                                                 "L1_TE10"          , // 9    133 
                                                 "L1_MU0_TE50"      , //10     41
                                                 "L1_MU4_TE50"      , //11     43

                                                 "L1_MBTS_1_1"      , //12    228
                                                 "L1_MBTS_2_2"      , //13    223
                                                 "L1_MBTS_3_3"      , //14    224
                                                 "L1_MBTS_4_4"      };//15     15

#endif
#ifndef __CINT__
	const unsigned int TrigGlobalBranch::L1_Trigs_id[15]={138,192,36,35,93,91,88,92,133,41,43,228,223,224,15};

#endif
#ifndef __CINT__
	int TrigGlobalBranch::L1_Trigs[15] = {0};

#endif
#ifndef __CINT__
	const std::string TrigGlobalBranch::L1_Trig_Names[15]={"L1_TE50"          , // 1    138
                                         "L1_ZDC_A_C"       , // 2    192 
                                         "L1_ZDC_A_C_VTE50" , // 3     36

                                         "L1_MU0_VTE50"     , // 4     35
                                         "L1_MU4"           , // 5     93
                                         "L1_MU11"          , // 6     91
                                         "L1_MU15"          , // 7     88
                                         "L1_MU20"          , // 8     92
                                         "L1_TE10"          , // 9    133 
                                         "L1_MU0_TE50"      , //10     41
                                         "L1_MU4_TE50"      , //11     43

                                         "L1_MBTS_1_1"      , //12    228
                                         "L1_MBTS_2_2"      , //13    223
                                         "L1_MBTS_3_3"      , //14    224
                                         "L1_MBTS_4_4"      };//15     15


#endif
#ifndef __CINT__
	const unsigned int TrigGlobalBranch::EF_Trigs_id[36]={750,4152,935,937,288,286,684,685,837,801,802,834,803,819,945,944,815,814,836,759,757,758,762,760,761,753,751,752,818,816,817,756,754,755,701,700};

#endif
#ifndef __CINT__
	int TrigGlobalBranch::EF_Trigs[36] = {0};

#endif
#ifndef __CINT__
	const std::string TrigGlobalBranch::EF_Trig_Names[36]={"EF_L1TE50_NoAlg"     , // 1    750
                                         "EF_L1ItemStreamer_L1_TE50" , // 2   4152
                                         "EF_mbZdc_a_c_L1VTE50_trk"  , // 3    935

                                         "EF_mu4_L1VTE50"  ,           // 4   937
                                         "EF_L1MU4_NoAlg"  ,           // 5   288
                                         "EF_L1MU11_NoAlg" ,           // 6   286
                                         "EF_L1MU15_NoAlg" ,           // 7   684
                                         "EF_L1MU20_NoAlg" ,           // 8   685

                                         "EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10", //9  837
                                         "EF_mu10_MSonly_EFFS_L1ZDC"         , //10 801 
                                         "EF_mu13_MSonly_EFFS_L1ZDC"         , //11 802 
                                         "EF_2mu2_MSonly_EFFS_L1ZDC"         , //12 834  
                                         "EF_2mu4_MSonly_EFFS_L1ZDC"         , //13 803 

                                         "EF_mu4_mu2_MSonly_EFFS_L1ZDC"      , //14 819 
                                         "EF_mu4_MSonly_L1TE50"              , //15 945 
                                         "EF_mu4T_MSonly_L1TE50"             , //16 944

                                         "EF_mu4_MSonly_EFFS_L1TE50"         ,//17 815
                                         "EF_mu4_MSonly_EFFS_L1TE20"         ,//18 814
                                         "EF_mu4_MSonly_EFFS_L1TE10"         ,//19 836


                                         "EF_mu10_MSonly_EFFS_L1TE50"        ,//20 759
                                         "EF_mu10_MSonly_EFFS_L1TE10"        ,//21 757
                                         "EF_mu10_MSonly_EFFS_L1TE20"        ,//22 758

                                         "EF_mu13_MSonly_EFFS_L1TE50"        ,//23 762
                                         "EF_mu13_MSonly_EFFS_L1TE10"        ,//24 760 
                                         "EF_mu13_MSonly_EFFS_L1TE20"        ,//25 761

                                         "EF_2mu2_MSonly_EFFS_L1TE50"        ,//26 753 
                                         "EF_2mu2_MSonly_EFFS_L1TE10"        ,//27 751 
                                         "EF_2mu2_MSonly_EFFS_L1TE20"        ,//28 752 

                                         "EF_2mu4_MSonly_EFFS_L1TE50"        ,//29 818
                                         "EF_2mu4_MSonly_EFFS_L1TE10"        ,//30 816 
                                         "EF_2mu4_MSonly_EFFS_L1TE20"        ,//31 817

                                         "EF_mu4_mu2_MSonly_EFFS_L1TE50"     ,//32 756    
                                         "EF_mu4_mu2_MSonly_EFFS_L1TE10"     ,//33 754    
                                         "EF_mu4_mu2_MSonly_EFFS_L1TE20"     ,//34 755    
                                         "EF_mu6_MSonly_L1TE50"              ,//35 701 
                                         "EF_mu6_L1VTE50"                    ,//36 700
                                         };

#endif

float TrigGlobalBranch::Theta(float nu_pz, float nu_px, float nu_py, float nu_pt) {
        //neutrino vector opposite to muon vector
        //nu_theta = nu_theta - TMath::Pi() ;
        float nu_theta = 0.0 ;
        if (nu_pz == 0.0 && nu_px == 0.0 && nu_py == 0.0) {
                nu_theta = -9999.;
                return nu_theta;
        }

        if (nu_theta == -9999.) std::cout << "WARNING: nu_theta not calculated correctly" << std::endl;

        nu_theta = (nu_pz == 0.0 && nu_px != 0.0 && nu_py != 0.0 && nu_pt != 0.0) ? TMath::PiOver2() : TMath::ATan2(nu_pt,nu_pz) - TMath::Pi()  ;

        if(nu_theta<0.) nu_theta*=-1.0 ;

        if(nu_theta>TMath::Pi() && nu_theta<3*TMath::PiOver2()) nu_theta-=TMath::PiOver2();
        if(nu_theta>3*TMath::PiOver2() && nu_theta < 2.0*TMath::Pi()) nu_theta-=3*TMath::PiOver2() ;
        if(nu_theta == 3*TMath::PiOver2()) nu_theta-=TMath::Pi() ;

        //safety
        if(nu_theta>TMath::Pi()) std::cout << "WARNING: Theta > Pi --> Expect wrong results." << std::endl;

        return nu_theta;
}

//--------------------------------------------------------------------------

float TrigGlobalBranch::Eta(float nu_theta) {

        if (nu_theta == -9999.) return -9999.;

        return -1*TMath::Log(TMath::Tan(nu_theta/2.0));

}

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
		float ez0    = sqrt(trk_cov_z0_wrtPV->at(reco_track)   *pow(sin(trk_theta_wrtPV->at(reco_track)),2) + trk_cov_theta_wrtPV->at(reco_track)*pow(cos(trk_theta_wrtPV->at(reco_track))
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

       //500MeV
       lvSum500 = MissMom(500.0);
       
       nu_phi500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Phi() + TMath::Pi() : -9999.0;
       nu_pt500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Perp() : -9999.0;
       nu_theta500 = fabs(lvSum500.Perp() ) < 9999.0 ? Theta(nu_pz500,nu_px500,nu_py500, nu_pt500) : -9999.0 ;
       nu_px500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Px() : -9999.0;
       nu_py500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Py(): -9999.0;
       nu_pz500 = fabs(lvSum500.Perp() ) < 9999.0 ? lvSum500.Pz() : -9999.0;
       nu_eta500 = fabs(lvSum500.Perp() ) < 9999.0 ? Eta(nu_theta500) : -9999.0;

       //1000
       lvSum1000 = MissMom(1000.0);
       nu_phi1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Phi() + TMath::Pi() : -9999.0;
       nu_pt1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Perp() : -9999.0;
       nu_theta1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? Theta(nu_pz1000,nu_px1000,nu_py1000, nu_pt1000) : -9999.0 ;
       nu_px1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Px() : -9999.0;
       nu_py1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Py(): -9999.0;
       nu_pz1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? lvSum1000.Pz() : -9999.0;
       nu_eta1000 = fabs(lvSum1000.Perp() ) < 9999.0 ? Eta(nu_theta1000) : -9999.0;

       //3000
       lvSum3000 = MissMom(3000.0);
       nu_phi3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Phi() + TMath::Pi() : -9999.0;
       nu_pt3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Perp() : -9999.0;
       nu_theta3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? Theta(nu_pz3000,nu_px3000,nu_py3000, nu_pt3000) : -9999.0 ;
       nu_px3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Px() : -9999.0;
       nu_py3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Py(): -9999.0;
       nu_pz3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? lvSum3000.Pz() : -9999.0;
       nu_eta3000 = fabs(lvSum3000.Perp() ) < 9999.0 ? Eta(nu_theta3000) : -9999.0;
      
       //4000MeV
       lvSum4000 = MissMom(4000.0);
       nu_phi4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Phi() + TMath::Pi() : -9999.0;
       nu_pt4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Perp() : -9999.0;
       nu_theta4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? Theta(nu_pz4000,nu_px4000,nu_py4000, nu_pt4000) : -9999.0 ;
       nu_px4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Px() : -9999.0;
       nu_py4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Py(): -9999.0;
       nu_pz4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? lvSum4000.Pz() : -9999.0;
       nu_eta4000 = fabs(lvSum4000.Perp() ) < 9999.0 ? Eta(nu_theta4000) : -9999.0;

       //40000
       lvSum5000 = MissMom(5000.0);
       nu_phi5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Phi() + TMath::Pi() : -9999.0;
       nu_pt5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Perp() : -9999.0;
       nu_theta5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? Theta(nu_pz5000,nu_px5000,nu_py5000, nu_pt5000) : -9999.0 ;
       nu_px5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Px() : -9999.0;
       nu_py5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Py(): -9999.0;
       nu_pz5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? lvSum5000.Pz() : -9999.0;
       nu_eta5000 = fabs(lvSum5000.Perp() ) < 9999.0 ? Eta(nu_theta5000) : -9999.0;

       //6000
       lvSum6000 = MissMom(6000.0);
       nu_phi6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Phi() + TMath::Pi() : -9999.0;
       nu_pt6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Perp() : -9999.0;
       nu_theta6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? Theta(nu_pz6000,nu_px6000,nu_py6000, nu_pt6000) : -9999.0 ;
       nu_px6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Px() : -9999.0;
       nu_py6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Py(): -9999.0;
       nu_pz6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? lvSum6000.Pz() : -9999.0;
       nu_eta6000 = fabs(lvSum6000.Perp() ) < 9999.0 ? Eta(nu_theta6000) : -9999.0;

       //7000
       lvSum7000 = MissMom(7000.0);
       nu_phi7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Phi() + TMath::Pi() : -9999.0;
       nu_pt7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Perp() : -9999.0;
       nu_theta7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? Theta(nu_pz7000,nu_px7000,nu_py7000, nu_pt7000) : -9999.0 ;
       nu_px7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Px() : -9999.0;
       nu_py7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Py(): -9999.0;
       nu_pz7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? lvSum7000.Pz() : -9999.0;
       nu_eta7000 = fabs(lvSum7000.Perp() ) < 9999.0 ? Eta(nu_theta7000) : -9999.0;

       //10000 
       lvSum10000 = MissMom(10000.0);
       nu_phi10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Phi() + TMath::Pi() : -9999.0;
       nu_pt10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Perp() : -9999.0;
       nu_theta10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? Theta(nu_pz10000,nu_px10000,nu_py10000, nu_pt10000) : -9999.0 ;
       nu_px10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Px() : -9999.0;
       nu_py10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Py(): -9999.0;
       nu_pz10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? lvSum10000.Pz() : -9999.0;
       nu_eta10000 = fabs(lvSum10000.Perp() ) < 9999.0 ? Eta(nu_theta10000) : -9999.0;

       //15000
       lvSum15000 = MissMom(15000.0);
       nu_phi15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Phi() + TMath::Pi() : -9999.0;
       nu_pt15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Perp() : -9999.0;
       nu_theta15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? Theta(nu_pz15000,nu_px15000,nu_py15000, nu_pt15000) : -9999.0 ;
       nu_px15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Px() : -9999.0;
       nu_py15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Py(): -9999.0;
       nu_pz15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? lvSum15000.Pz() : -9999.0;
       nu_eta15000 = fabs(lvSum15000.Perp() ) < 9999.0 ? Eta(nu_theta15000) : -9999.0;


  //Vertex info. the 0th vertex is always the primary one.
   Myvx_x=vx_x->at(0); 
   Myvx_y=vx_y->at(0);
   Myvx_z=vx_z->at(0);


   // Make Centrality classes from FCal Energy  

   Centrality=-1.;
   ///Soumya's way
   /*int icent=0;
   for(icent=0;icent<200;icent++){
     if((Fcal_Et*1.041)>centcuts[icent]) break;
   }
   //anything above FCal E_T in 1st element is defined as 0% centrality (centcuts = FCal E_T in TeV)
   if(icent==0) Centrality=0.0;
   else         Centrality=(icent- (Fcal_Et-centcuts[icent])/(centcuts[icent-1]-centcuts[icent])  )/2.0;
   */
   /// Thomas' way
  if(Fcal_Et > 2.8038) {
    Centrality = 0.025; //0-5%
  }
  else if (Fcal_Et > 2.3102){
    Centrality = 0.075 ; //5-10%
  }
  else if (Fcal_Et > 1.9073){
    Centrality = 0.125 ; //10-15%
  }
  else if (Fcal_Et > 1.5707){
    Centrality = 0.175 ; //15-20%
  }
  else if (Fcal_Et > 1.0448){
    Centrality = 0.25 ; //20-30%
  }
  else if (Fcal_Et > 0.6624){
    Centrality = 0.35 ; //30-40%
  }
  else if (Fcal_Et > 0.3909){
    Centrality = 0.45 ;  //40-50%
  }
  else if (Fcal_Et > 0.2118){
    Centrality = 0.55 ; //50-60%
  }
  else if (Fcal_Et > 0.1024){
    Centrality = 0.65 ; //60-70%
  }
  else if (Fcal_Et > 0.0438){
    Centrality = 0.75 ; //70-80%
  }
  else {
    Centrality = 0.89;  //80-98%
  }


   
   //Reaction Plane Info
   Psi_Et_N = HIFlow_PsiEtHICaloUtilLayers ->at (21);
   Psi_Et_P = HIFlow_PsiEtHICaloUtilLayers ->at (45);
   Psi_E_N  = HIFlow_PsiHICaloUtilLayers   ->at (21);
   Psi_E_P  = HIFlow_PsiHICaloUtilLayers   ->at (45);
}

















