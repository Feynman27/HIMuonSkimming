#define BranchBase_cxx

#include "BranchBase.h"

#include "TH2.h"
#include <TStyle.h>
#include <TCanvas.h>
#include <stdio.h>

/*const int BranchBase::min_pt = 500;
const int BranchBase::MAXTRK = 100000;
const int BranchBase::MAXMUONS = 30;
const int BranchBase::MAXMATCH = 30;
const int BranchBase::MAXJETS = 500;
*/

//#include "MuonBranch.h"
//#include "TrigGlobalBranch.h"

TTree  *BranchBase::fChain = 0;
#include "InitializeVariables.h"

#ifndef __CINT__
const int BranchBase::N_L1_TRIGS_TBP = 16;
#endif

/*#ifndef __CINT__
const int BranchBase::N_L1_TRIGS_TAP = 16;
#endif
*/
#ifndef __CINT__
const int BranchBase::N_L1_TRIGS = 16;
#endif

#ifndef __CINT__
const int BranchBase::N_L1_TRIGS_pPb = 15;
#endif
#ifndef __CINT__
const int BranchBase::N_L1_TRIGS_TBP_pPb = 15;
#endif

/*#ifndef __CINT__
const int BranchBase::N_L1_TRIGS_TAP_pPb = 15;
#endif
*/
#ifndef __CINT__
const int BranchBase::N_EF_TRIGS = 36;
#endif

#ifndef __CINT__
const int BranchBase::N_EF_TRIGS_pPb = 10;
#endif
//HP triggers only
#ifndef __CINT__
const int BranchBase::N_EF_MATCH_TRIG_pPb = N_EF_TRIGS_pPb-3;
#endif
#ifndef __CINT__
const unsigned int BranchBase::L1_Trigs_TBP_id[N_L1_TRIGS]={138,192,36,35,93,91,88,92,133,41,43,228,223,224,15,89};
#endif
/*
#ifndef __CINT__
const unsigned int BranchBase::L1_Trigs_TAP_id[16]={138,192,36,35,93,91,88,92,133,41,43,228,223,224,15,89};
#endif
*/
#ifndef __CINT__
const unsigned int BranchBase::L1_Trigs_TBP_id_pPb[N_L1_TRIGS_TBP_pPb]={89,28,138,35,141,41,91,192,93,222,228,223,17,63,132};
#endif

#ifndef __CINT__
int BranchBase::L1_Trigs_TBP[N_L1_TRIGS] = {0};
#endif
/*
#ifndef __CINT__
int BranchBase::L1_Trigs_TAP[16] = {0};
#endif
*/
#ifndef __CINT__
int BranchBase::L1_Trigs_TBP_pPb[N_L1_TRIGS_TBP_pPb] = {0};
#endif

#ifndef __CINT__
	const std::string BranchBase::L1_Trig_TBP_Names[N_L1_TRIGS]={"L1_TE50"          , // 1    138
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
                                                 "L1_MBTS_4_4"      , //15     15
						 "L1_MU0"           };//16    89

#endif
/*
#ifndef __CINT__
	const std::string BranchBase::L1_Trig_TAP_Names[16]={"L1_TE50"          , // 1    138
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
						 "L1_MBTS_4_4"      , //15     15
						 "L1_MU0"           };//16    89
#endif*/
#ifndef __CINT__
const std::string BranchBase::L1_Trig_TBP_Names_pPb[N_L1_TRIGS_pPb]={"L1_MU0"   , 	// 1    89
                                         "L1_TE10 "       , 	// 2    28 
                                         "L1_TE50 " , 		// 3     138
                                         "L1_MU0_VTE50 "  , 	// 4     35
                                         "L1_TE20 "       , 	// 5     141
                                         "L1_MU0_TE50 "   , 	// 6     41
                                         "L1_MU11 "       , 	// 7     91
                                         "L1_ZDC_A_C "    , 	// 8     192
                                         "L1_MU4 "        , 	// 9    93 
                                         "L1_MBTS_2 "     , 	//10     222
                                         "L1_MBTS_1_1 "   , 	//11     228
                                         "L1_MBTS_2_2 "   , 	//12    223
                                         "L1_RD0_FILLED " , 	//13    17
                                         "L1_RD1_FILLED " , 	//14    63
                                         "L1_TE0 "      };	//15     132

#endif

#ifndef __CINT__
	const unsigned int BranchBase::L1_Trigs_id[N_L1_TRIGS]={138,192,36,35,93,91,88,92,133,41,43,228,223,224,15,89};
#endif
#ifndef __CINT__
	const unsigned int BranchBase::L1_Trigs_id_pPb[N_L1_TRIGS_pPb]={89,28,138,35,141,41,91,192,93,222,228,223,17,63,132};
#endif
#ifndef __CINT__
	int BranchBase::L1_Trigs[N_L1_TRIGS] = {0};
#endif
#ifndef __CINT__
	int BranchBase::L1_Trigs_pPb[N_L1_TRIGS_pPb] = {0};
#endif
#ifndef __CINT__
	const std::string BranchBase::L1_Trig_Names[N_L1_TRIGS]={"L1_TE50"          , // 1    138
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
                                         "L1_MBTS_4_4"      , //15     15
					 "L1_MU0"           };//16    89


#endif
#ifndef __CINT__
	const std::string BranchBase::L1_Trig_Names_pPb[N_L1_TRIGS_pPb]={"L1_MU0"   , 	// 1    89
                                         "L1_TE10 "       , 	// 2    28 
                                         "L1_TE50 " , 		// 3     138
                                         "L1_MU0_VTE50 "  , 	// 4     35
                                         "L1_TE20 "       , 	// 5     141
                                         "L1_MU0_TE50 "   , 	// 6     41
                                         "L1_MU11 "       , 	// 7     91
                                         "L1_ZDC_A_C "    , 	// 8     192
                                         "L1_MU4 "        , 	// 9    93 
                                         "L1_MBTS_2 "     , 	//10     222
                                         "L1_MBTS_1_1 "   , 	//11     228
                                         "L1_MBTS_2_2 "   , 	//12    223
                                         "L1_RD0_FILLED " , 	//13    17
                                         "L1_RD1_FILLED " , 	//14    63
                                         "L1_TE0 "      };	//15     132

#endif

#ifndef __CINT__
	const unsigned int BranchBase::EF_Trigs_id[N_EF_TRIGS]={750,4152,935,937,288,286,684,685,837,801,802,834,803,819,945,944,815,814,836,759,757,758,762,760,761,753,751,752,818,816,817,756,754,755,701,700};
#endif

#ifndef __CINT__
	const unsigned int BranchBase::EF_Trigs_id_pPb[N_EF_TRIGS_pPb]={262,373,693,129,374,127,537,874,439,507};  
#endif
#ifndef __CINT__
	int BranchBase::EF_Trigs[N_EF_TRIGS] = {0};
#endif
#ifndef __CINT__
	int BranchBase::EF_Trigs_pPb[N_EF_TRIGS_pPb] = {0};
#endif
#ifndef __CINT__
	int BranchBase::EF_TrigMuon_pPb[N_EF_MATCH_TRIG_pPb][30] ;
#endif
#ifndef __CINT__
	std::vector<int> *BranchBase::EF_TrigMuon_Reader_pPb[N_EF_MATCH_TRIG_pPb] = {0}  ;
#endif
#ifndef __CINT__
	int BranchBase::EF_Trig_Reader_pPb[N_EF_TRIGS_pPb] = {0};
#endif

#ifndef __CINT__
	const std::string BranchBase::EF_Trig_Names[N_EF_TRIGS]={"EF_L1TE50_NoAlg"     , // 1    750
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
                                         "EF_mu6_L1VTE50"                    //36 700
                                         };

#endif

#ifndef __CINT__
	const std::string BranchBase::EF_Trig_Names_pPb[N_EF_TRIGS_pPb]={
					 "EF_mu8_IDTrkNoCut"			,//1 262
					 "EF_mu8"				,//2 373
					 "EF_mu4_j40_a4hi_EFFS_matched"		,//3 693
					 "EF_mu6"				,//4 129
					 "EF_mu10"				,//5 374
					 "EF_mu4"				,//6 127
					 "EF_mu2"				,//7 537
					 "EF_L1MBTS_2_NoAlg"                    ,//8 874
					 "EF_L1MBTS_1_1_NoAlg"                  ,//9 439 
					 "EF_mbMbts_1_1"			 //10 507
                                         };

#endif

int BranchBase::TurnOnBranches()
{
  if (fChain == 0) return 10;


//-----------------------------------------------------------------------------------------------------------------------------------------
  fChain->SetBranchStatus("*",0);

  fChain->SetBranchStatus("RunNumber"                    , 1);
  fChain->SetBranchStatus("bcid"                         , 1);
  fChain->SetBranchStatus("lbn"                          , 1);
  fChain->SetBranchStatus("EventNumber"                  , 1);
  fChain->SetBranchStatus("vx_*"                         , 1);

  fChain->SetBranchStatus("cccEt_Et_Eh_FCal"             , 1);
  fChain->SetBranchStatus("cccEt_p_Eh_FCal"             , 1);

  fChain->SetBranchStatus("trig_L1_TAV"           , 1);
  fChain->SetBranchStatus("trig_L1_TBP"           , 1);
  //fChain->SetBranchStatus("trig_L1_TAP"           , 1);
  fChain->SetBranchStatus("trig_EF_passedPhysics" , 1); 
  fChain->SetBranchStatus("antikt2HIItrEM_*", 1);
  fChain->SetBranchStatus("antikt3HIItrEM_*", 1);
  fChain->SetBranchStatus("antikt2Truth_*", 1);
  fChain->SetBranchStatus("trk_theta_wrtPV"     ,1);
  fChain->SetBranchStatus("trk_cov_d0_wrtPV"    ,1);
  fChain->SetBranchStatus("trk_cov_z0_wrtPV"    ,1);
  fChain->SetBranchStatus("trk_cov_theta_wrtPV" ,1);
  fChain->SetBranchStatus("trk_qoverp_wrtPV"    ,1);
  fChain->SetBranchStatus("trig_EF_trigmuonef_*", 1);
//fChain->SetBranchStatus("trig_EF_trigmuonef_n",1);
//fChain->SetBranchStatus("trig_EF_trigmuonef_track_*",1);


  //fChain->SetBranchStatus("trig_L2_passedPhysics",1);

  fChain->SetBranchStatus("trk_n"               ,1);
  fChain->SetBranchStatus("trk_pt"              ,1);
  fChain->SetBranchStatus("trk_eta"             ,1);
  fChain->SetBranchStatus("trk_chi2"            ,1);
  fChain->SetBranchStatus("trk_ndof"            ,1);
  fChain->SetBranchStatus("trk_nPixHits"        ,1);
  fChain->SetBranchStatus("trk_nPixHoles"       ,1);
  fChain->SetBranchStatus("trk_nSCTHits"        ,1);
  fChain->SetBranchStatus("trk_nSCTHoles"       ,1);
  fChain->SetBranchStatus("trk_d0_wrtPV"        ,1);
  fChain->SetBranchStatus("trk_z0_wrtPV"        ,1);
  fChain->SetBranchStatus("trk_phi_wrtPV"       ,1);
  fChain->SetBranchStatus("trk_nBLHits"         ,1);
  fChain->SetBranchStatus("trk_expectBLayerHit" ,1);

  fChain->SetBranchStatus("TotalEt_*",1); 


  fChain->SetBranchStatus("mu_*"  ,1);
  fChain->SetBranchStatus("muid_*",1);
  fChain->SetBranchStatus("mc_*",1);
  
//-----------------------------------------------------------------------------------------------------------------------------------------


  Long64_t nentries = fChain->GetEntries();
  std::cout<<"NENTRIES="<<nentries<<std::endl;
  if(nentries==0){std::cout<<" ZERO ENTRIES IN PROGRAM. OUTPUT Wont be produced"<<std::endl;return 100;}

  return 0;


}

Bool_t BranchBase::EventCuts() {

    int event = 0;
    int isGoodEventFlag = 1; 

	    	if(  
    
		//Good vertex
		(vx_n > 1)  &&
		(vx_nTracks->at(0) > 2)  

     		) event = 1;    
 
    Fcal_Et=(cccEt_Et_Eh_FCal->at(0)+cccEt_Et_Eh_FCal->at(1)+cccEt_Et_Eh_FCal->at(2))/1000000.0;  //Fcal energy in TeV

    hasHiPtMuon=0;

    //additional missPt and phi with 
    // global vx parameters but w/o trk cuts
    for(int ivx = 0; ivx<1; ivx++){
        pTmissID_nocuts.SetPxPyPzE(vx_px->at(ivx),vx_py->at(ivx),vx_pz->at(ivx),vx_E->at(ivx));
        nu_pt_nocuts = pTmissID_nocuts.Pt();
        nu_phi_nocuts = pTmissID_nocuts.Phi();
    } //PV

    return event;

}


Bool_t BranchBase::Notify() {return kTRUE;}

void BranchBase::Show(Long64_t entry)
{
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t BranchBase::Cut(Long64_t entry){   return 1;}


BranchBase::BranchBase(TString input_files)
{
	TChain * chain = new TChain("HeavyIonD3PD","");

  	int runType = openFromFileList(input_files, chain);

	if(runType==0) std::cout << "Skimming PYTHIA in Data Jx Sample without muon filter." << std::endl;
	else exit(0);

	#include "SetBranchAddress.h"
}

BranchBase::~BranchBase(){}

Int_t BranchBase::GetEntry(Long64_t entry)
{
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t BranchBase::LoadTree(Long64_t entry)
{
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

