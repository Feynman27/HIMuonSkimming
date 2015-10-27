#include "TrigGlobalBranch.h"

/////////////////////////////
//initializations
/////////////////////////////

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
////////////////////////////////////////////////////////////////////////////////////
//Initialize output tree branches///////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------------------------
//--------------------------------------------------------------------------

TVector3 TrigGlobalBranch::MissMom(float trkThresh){

	//std::cout << "MissMom fcn" << std::endl;
	for (int reco_track=0;reco_track<trk_n;reco_track++){

       		int Mytrk_n = 0;
          	int trkQuality=0;
          	float phi,pt,eta,theta;

		if(reco_track==0) vSum.SetPtThetaPhi(0.,0.,0.);

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
		   ) trkQuality = 1;
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
	return vSum;

}

void TrigGlobalBranch::Set_Trig_and_Global_Branches( TTree *MyTree)
{

   MyTree->Branch("RunNumber", &RunNumber, "RunNumber/I");
   MyTree->Branch("EventNumber", &EventNumber, "EventNumber/I");
    MyTree->Branch("nu_pt3000"           , &nu_pt3000, "nu_pt3000/F"              );
   MyTree->Branch("nu_px3000"           , &nu_px3000, "nu_px3000/F"              );
   MyTree->Branch("nu_py3000"           , &nu_py3000, "nu_py3000/F"              );
   MyTree->Branch("nu_pz3000"           , &nu_pz3000, "nu_pz3000/F"              );
   MyTree->Branch("nu_phi3000"           , &nu_phi3000, "nu_phi3000/F"              );
   MyTree->Branch("nu_theta3000"        , &nu_theta3000, "nu_theta3000/F"              );
   MyTree->Branch("nu_eta3000"          , &nu_eta3000, "nu_eta3000/F"              );

  MyTree->Branch("Fcal_Et", &Fcal_Et, "Fcal_Et/F");

}


////////////////////////////////////////////////////////////////////////////////////
//Fill output tree branches/////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
void TrigGlobalBranch::Fill_Trig_and_Global_Branches()
{
       lvSum3000 = MissMom(3000.0);
       nu_phi3000 = lvSum3000.Phi()+TMath::Pi();
       nu_pt3000 = lvSum3000.Perp();
       nu_px3000 = lvSum3000.Px();
       nu_py3000 = lvSum3000.Py();
       nu_pz3000 = lvSum3000.Pz();

}

TrigGlobalBranch::~TrigGlobalBranch(){
	
}

TrigGlobalBranch::TrigGlobalBranch(){

	
}















