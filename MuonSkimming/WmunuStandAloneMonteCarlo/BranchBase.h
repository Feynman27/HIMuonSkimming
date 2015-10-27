/*
Note: When adding branches,declare in BranchBase.h (if not already done so by MakeClass()), 
SetBranchStatus for the HID3PD variables 
in the BranchBase.C and SetBranchAddress for the
in SetBranchAddress.h
*/

#ifndef BranchBase_h
#define BranchBase_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TMath.h>
#include <TH2.h>
#include "TLorentzVector.h" 

#include <vector>
#ifdef __MAKECINT__
#pragma link C++ class std::vector <std::vector<float> >+;   
#pragma link C++ class std::vector <std::vector<int> >+;   
#endif


//#include "GlobalVariables.h"
//#include "prun_helper.h"

#include <iostream>
#include <fstream>
#include <string>

class BranchBase {

protected:

	 static const int N_L1_TRIGS_TBP;
	// const int N_L1_TRIGS_TAP;
	 static const int N_L1_TRIGS;
	 static const int N_EF_TRIGS;
	 static int    L1_Trigs_TBP[16];
   	 static const unsigned int L1_Trigs_TBP_id[16];
   	 static const std::string L1_Trig_TBP_Names    [16];
//   	 int    L1_Trigs_TAP[16];
//   	 const unsigned int L1_Trigs_TAP_id[16];
//   	 const std::string L1_Trig_TAP_Names    [16];
  	 static int    L1_Trigs[16];
   	 static const unsigned int L1_Trigs_id[16];
   	 static const std::string L1_Trig_Names[16];
 	 static int EF_Trigs[36];
 	 static const  unsigned int EF_Trigs_id[36];
 	 static const  std::string EF_Trig_Names    [36];

public :

   //static TTree to be used for derived classes
   static TTree    *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t     fCurrent; //!current Tree number in a TChain

   #include "prun_helper.h"

//   #include "TrackFCalBranch.C"
    static float   Fcal_Et;
    TLorentzVector   pTmissID_nocuts;              
    static Float_t   nu_pt_nocuts;                 
    static Float_t   nu_phi_nocuts;                

 
   // Declaration of leaf types
    static UInt_t          RunNumber;
    static UInt_t          EventNumber;
    static UInt_t          timestamp;
    static UInt_t          timestamp_ns;
    static UInt_t          lbn;
    static UInt_t          bcid;
    static UInt_t          detmask0;
    static UInt_t          detmask1;
    static Float_t         actualIntPerXing;
    static Float_t         averageIntPerXing;
    static UInt_t          pixelFlags;
    static UInt_t          sctFlags;
    static UInt_t          trtFlags;
    static UInt_t          larFlags;
    static UInt_t          tileFlags;
    static UInt_t          muonFlags;
    static UInt_t          fwdFlags;
    static UInt_t          coreFlags;
    static UInt_t          pixelError;
    static UInt_t          sctError;
    static UInt_t          trtError;
    static UInt_t          larError;
    static UInt_t          tileError;
    static UInt_t          muonError;
    static UInt_t          fwdError;
    static UInt_t          coreError;
    static Bool_t          streamDecision_Egamma;
    static Bool_t          streamDecision_Muons;
    static Bool_t          streamDecision_JetTauEtmiss;
    static Bool_t          isSimulation;
    static Bool_t          isCalibration;
    static Bool_t          isTestBeam;
    static Int_t           mb_n;
    static std::vector<float>   *mb_E;
    static std::vector<float>   *mb_eta;
    static std::vector<float>   *mb_phi;
    static std::vector<float>   *mb_time;
    static std::vector<int>     *mb_quality;
    static std::vector<int>     *mb_type;
    static std::vector<int>     *mb_module;
    static std::vector<int>     *mb_channel;
    
    static Float_t         mbtime_timeDiff;
    static Float_t         mbtime_timeA;
    static Float_t         mbtime_timeC;
    static Int_t           mbtime_countA;
    static Int_t           mbtime_countC;
    static Int_t           Zdc_n;
    static std::vector< std::vector<float> > *Zdc_Energy_Vec;
    static std::vector< std::vector<float> > *Zdc_Time_Vec;
    static std::vector<int>     *Zdc_Vec_Size;
    static std::vector<float>   *Zdc_Energy_LG;
    static std::vector<float>   *Zdc_Time_LG;
    static std::vector<float>   *Zdc_Energy_HG;
    static std::vector<float>   *Zdc_Time_HG;
    static std::vector<unsigned int> *Zdc_Id;
    static std::vector<int>     *Zdc_Side;
    static std::vector<int>     *Zdc_Type;
    static std::vector<int>     *Zdc_Module;
    static std::vector<int>     *Zdc_Channel;
    static std::vector<float>   *Zdc_TimeCalib;
    static std::vector<unsigned int> *Zdc_RecMethod;
    static Int_t           ZdcDigits_n;
    static std::vector< std::vector<int> > *ZdcDigits_dig_g0d0;
    static std::vector< std::vector<int> > *ZdcDigits_dig_g0d1;
    static std::vector< std::vector<int> > *ZdcDigits_dig_g1d0;
    static std::vector< std::vector<int> > *ZdcDigits_dig_g1d1;
    static std::vector<unsigned int> *ZdcDigits_Id;
    static std::vector<int>     *ZdcDigits_Side;
    static std::vector<int>     *ZdcDigits_Type;
    static std::vector<int>     *ZdcDigits_Module;
    static std::vector<int>     *ZdcDigits_Channel;
    static Int_t           NSiClusterL0_nClustEta1;
    static Int_t           NSiClusterL0_nClustEta25;
    static Int_t           NSiClusterL1_nClustEta1;
    static Int_t           NSiClusterL1_nClustEta25;
    static Int_t           NSiClusterL2_nClustEta1;
    static Int_t           NSiClusterL2_nClustEta25;
    static Int_t           ccc_Nh_Calo;
    
    static Float_t         ccc_Eh_Calo;
    static Int_t           ccc_Nh_EM;
    static Float_t         ccc_Eh_EM;
    static Int_t           ccc_Nh_HAD;
    static Float_t         ccc_Eh_HAD;
    static Int_t           ccc_Nh_PresB;
    static std::vector<float>   *ccc_Eh_PresB;
    static Int_t           ccc_Nh_EMB;
    static std::vector<float>   *ccc_Eh_EMB;
    static Int_t           ccc_Nh_EMEC;
    static std::vector<float>   *ccc_Eh_EMEC;
    static Int_t           ccc_Nh_Tile;
    static std::vector<float>   *ccc_Eh_Tile;
    static Int_t           ccc_Nh_TileGap;
    static std::vector<float>   *ccc_Eh_TileGap;
    static Int_t           ccc_Nh_HEC;
    static std::vector<float>   *ccc_Eh_HEC;
    static Int_t           ccc_Nh_FCal;
    static std::vector<float>   *ccc_Eh_FCal;
    static Int_t           ccc_Nh_PresE;
    static std::vector<float>   *ccc_Eh_PresE;
    static Int_t           ccc_Nh_Scint;
    static std::vector<float>   *ccc_Eh_Scint;
    static Int_t           cccEt_Et_Nh_Calo;
    static Float_t         cccEt_Et_Eh_Calo;
    static Int_t           cccEt_Et_Nh_EM;
    static Float_t         cccEt_Et_Eh_EM;
    static Int_t           cccEt_Et_Nh_HAD;
    static Float_t         cccEt_Et_Eh_HAD;
    static Int_t           cccEt_Et_Nh_PresB;
    static std::vector<float>   *cccEt_Et_Eh_PresB;
    static Int_t           cccEt_Et_Nh_EMB;
    static std::vector<float>   *cccEt_Et_Eh_EMB;
    static Int_t           cccEt_Et_Nh_EMEC;
    static std::vector<float>   *cccEt_Et_Eh_EMEC;
    static Int_t           cccEt_Et_Nh_Tile;
    static std::vector<float>   *cccEt_Et_Eh_Tile;
    static Int_t           cccEt_Et_Nh_TileGap;
    static std::vector<float>   *cccEt_Et_Eh_TileGap;
    static Int_t           cccEt_Et_Nh_HEC;
    static std::vector<float>   *cccEt_Et_Eh_HEC;
    static Int_t           cccEt_Et_Nh_FCal;
    static std::vector<float>   *cccEt_Et_Eh_FCal;
    static Int_t           cccEt_Et_Nh_PresE;
    static std::vector<float>   *cccEt_Et_Eh_PresE;
    static Int_t           cccEt_Et_Nh_Scint;
    static std::vector<float>   *cccEt_Et_Eh_Scint;
    static Int_t           cccEt_p_Nh_Calo;
    static Float_t         cccEt_p_Eh_Calo;
    static Int_t           cccEt_p_Nh_EM;
    static Float_t         cccEt_p_Eh_EM;
    static Int_t           cccEt_p_Nh_HAD;
    static Float_t         cccEt_p_Eh_HAD;
    static Int_t           cccEt_p_Nh_PresB;
    static std::vector<float>   *cccEt_p_Eh_PresB;
    static Int_t           cccEt_p_Nh_EMB;
    static std::vector<float>   *cccEt_p_Eh_EMB;
    static Int_t           cccEt_p_Nh_EMEC;
    static std::vector<float>   *cccEt_p_Eh_EMEC;
    static Int_t           cccEt_p_Nh_Tile;
    static std::vector<float>   *cccEt_p_Eh_Tile;
    static Int_t           cccEt_p_Nh_TileGap;
    static std::vector<float>   *cccEt_p_Eh_TileGap;
    static Int_t           cccEt_p_Nh_HEC;
    static std::vector<float>   *cccEt_p_Eh_HEC;
    static Int_t           cccEt_p_Nh_FCal;
    static std::vector<float>   *cccEt_p_Eh_FCal;
    static Int_t           cccEt_p_Nh_PresE;
    static std::vector<float>   *cccEt_p_Eh_PresE;
    static Int_t           cccEt_p_Nh_Scint;
    static std::vector<float>   *cccEt_p_Eh_Scint;
    static Int_t           cccEt_n_Nh_Calo;
    static Float_t         cccEt_n_Eh_Calo;
    static Int_t           cccEt_n_Nh_EM;
    static Float_t         cccEt_n_Eh_EM;
    static Int_t           cccEt_n_Nh_HAD;
    static Float_t         cccEt_n_Eh_HAD;
    static Int_t           cccEt_n_Nh_PresB;
    static std::vector<float>   *cccEt_n_Eh_PresB;
    static Int_t           cccEt_n_Nh_EMB;
    static std::vector<float>   *cccEt_n_Eh_EMB;
    static Int_t           cccEt_n_Nh_EMEC;
    static std::vector<float>   *cccEt_n_Eh_EMEC;
    static Int_t           cccEt_n_Nh_Tile;
    static std::vector<float>   *cccEt_n_Eh_Tile;
    static Int_t           cccEt_n_Nh_TileGap;
    static std::vector<float>   *cccEt_n_Eh_TileGap;
    static Int_t           cccEt_n_Nh_HEC;
    static std::vector<float>   *cccEt_n_Eh_HEC;
    static Int_t           cccEt_n_Nh_FCal;
    static std::vector<float>   *cccEt_n_Eh_FCal;
    static Int_t           cccEt_n_Nh_PresE;
    static std::vector<float>   *cccEt_n_Eh_PresE;
    static Int_t           cccEt_n_Nh_Scint;
    static std::vector<float>   *cccEt_n_Eh_Scint;
    static Int_t           lar_ncellA;
    static Int_t           lar_ncellC;
    static Float_t         lar_energyA;
    static Float_t         lar_energyC;
    static Float_t         lar_timeA;
    static Float_t         lar_timeC;
    static Float_t         lar_timeDiff;
    static Int_t           TotalEt_n;
    static std::vector<float>   *TotalEt_layer_eta;
    static std::vector<float>   *TotalEt_layer_phi;
    static std::vector< std::vector<float> > *TotalEt_layer_area;
    static std::vector< std::vector<float> > *TotalEt_layer_sampling;
    static std::vector< std::vector<float> > *TotalEt_layer_sampling_calib;
    static Int_t           trk_n;
    static std::vector<float>   *trk_pt;
    static std::vector<float>   *trk_eta;
    static std::vector<float>   *trk_d0_wrtPV;
    static std::vector<float>   *trk_z0_wrtPV;
    static std::vector<float>   *trk_phi_wrtPV;
    static std::vector<float>   *trk_theta_wrtPV;
    static std::vector<float>   *trk_qoverp_wrtPV;
    static std::vector<float>   *trk_cov_d0_wrtPV;
    static std::vector<float>   *trk_cov_z0_wrtPV;
    static std::vector<float>   *trk_cov_phi_wrtPV;
    static std::vector<float>   *trk_cov_theta_wrtPV;
    static std::vector<float>   *trk_cov_qoverp_wrtPV;
    static std::vector<float>   *trk_chi2;
    static std::vector<int>     *trk_ndof;
    static std::vector<int>     *trk_nBLHits;
    static std::vector<int>     *trk_nPixHits;
    static std::vector<int>     *trk_nSCTHits;
    static std::vector<int>     *trk_nTRTHits;
    static std::vector<int>     *trk_nTRTHighTHits;
    static std::vector<int>     *trk_nPixHoles;
    static std::vector<int>     *trk_nSCTHoles;
    static std::vector<int>     *trk_nTRTHoles;
    static std::vector<int>     *trk_expectBLayerHit;
    static std::vector<int>     *trk_nMDTHits;
    static std::vector<int>     *trk_nCSCEtaHits;
    static std::vector<int>     *trk_nCSCPhiHits;
    static std::vector<int>     *trk_nRPCEtaHits;
    static std::vector<int>     *trk_nRPCPhiHits;
    static std::vector<int>     *trk_nTGCEtaHits;
    static std::vector<int>     *trk_nTGCPhiHits;
    static std::vector<int>     *trk_nHits;
    static std::vector<int>     *trk_nHoles;
    static std::vector<int>     *trk_hitPattern;
    static std::vector<float>   *trk_TRTHighTHitsRatio;
    static std::vector<float>   *trk_TRTHighTOutliersRatio;
    static std::vector<int>     *trk_fitter;
    static std::vector<int>     *trk_patternReco1;
    static std::vector<int>     *trk_patternReco2;
    static std::vector<int>     *trk_seedFinder;
    ///////
    //pPb//
    ///////
    static std::vector<float>   *vx_err_x;
    static std::vector<float>   *vx_err_y;
    static std::vector<float>   *vx_err_z;
    static std::vector<float>   *trk_err_d0_wrtPV;
    static std::vector<float>   *trk_theta;
    static std::vector<float>   *trk_err_z0_wrtPV;
    static std::vector<float>   *trk_err_theta_wrtPV;
    static std::vector<float>   *trk_cov_z0_theta;
    static std::vector<float>   *trk_cov_z0_theta_wrtPV;
    static std::vector<float>   *trk_qoverp;
    static std::vector<float>   *trk_err_phi_wrtPV;
    static std::vector<float>   *trk_err_qoverp_wrtPV;
    ////////
    static std::vector< std::vector<float> > *antikt2Bkgr_layer_CaloBkgrEt;
    static std::vector< std::vector<float> > *antikt2Bkgr_layer_CaloBkgrRMS;
    static std::vector< std::vector<int> > *antikt2Bkgr_layer_CaloBkgrCounts;
    static std::vector<float>   *antikt2Bkgr_layer_CaloBkgrEta;
    static std::vector< std::vector<float> > *antikt4Bkgr_layer_CaloBkgrEt;
    static std::vector< std::vector<float> > *antikt4Bkgr_layer_CaloBkgrRMS;
    static std::vector< std::vector<int> > *antikt4Bkgr_layer_CaloBkgrCounts;
    static std::vector<float>   *antikt4Bkgr_layer_CaloBkgrEta;
    static std::vector< std::vector<float> > *antikt2EMBkgr_layer_CaloBkgrEt;
    static std::vector< std::vector<float> > *antikt2EMBkgr_layer_CaloBkgrRMS;
    static std::vector< std::vector<int> > *antikt2EMBkgr_layer_CaloBkgrCounts;
    static std::vector<float>   *antikt2EMBkgr_layer_CaloBkgrEta;
    static std::vector< std::vector<float> > *antikt4EMBkgr_layer_CaloBkgrEt;
    static std::vector< std::vector<float> > *antikt4EMBkgr_layer_CaloBkgrRMS;
    static std::vector< std::vector<int> > *antikt4EMBkgr_layer_CaloBkgrCounts;
    static std::vector<float>   *antikt4EMBkgr_layer_CaloBkgrEta;
    static std::vector< std::vector<float> > *ItrBkgr_layer_CaloBkgrEt;
    static std::vector< std::vector<float> > *ItrBkgr_layer_CaloBkgrRMS;
    static std::vector< std::vector<int> > *ItrBkgr_layer_CaloBkgrCounts;
    static std::vector<float>   *ItrBkgr_layer_CaloBkgrEta;
    static std::vector< std::vector<float> > *ItrEMBkgr_layer_CaloBkgrEt;
    static std::vector< std::vector<float> > *ItrEMBkgr_layer_CaloBkgrRMS;
    static std::vector< std::vector<int> > *ItrEMBkgr_layer_CaloBkgrCounts;
    static std::vector<float>   *ItrEMBkgr_layer_CaloBkgrEta;
    static std::vector< std::vector<float> > *AvgBkgr_layer_CaloBkgrEt;
    static std::vector< std::vector<float> > *AvgBkgr_layer_CaloBkgrRMS;
    static std::vector< std::vector<int> > *AvgBkgr_layer_CaloBkgrCounts;
    static std::vector<float>   *AvgBkgr_layer_CaloBkgrEta;
    static Int_t           antikt2HI_n;
    static std::vector<float>   *antikt2HI_E;
    static std::vector<float>   *antikt2HI_pt;
    static std::vector<float>   *antikt2HI_m;
    static std::vector<float>   *antikt2HI_eta;
    static std::vector<float>   *antikt2HI_phi;
    static std::vector<float>   *antikt2HI_MaxOverMean;
    static std::vector<float>   *antikt2HI_MeanTowerEt;
    static std::vector<float>   *antikt2HI_SubtractedEt;
    static std::vector<float>   *antikt2HI_RMSTowerEt;
    static std::vector<float>   *antikt2HI_GausEt;
    static std::vector<float>   *antikt2HI_SelfEnergy;
    static std::vector<float>   *antikt2HI_SumJt;
    static std::vector<float>   *antikt2HI_CoreEt;
    static std::vector<float>   *antikt2HI_EdgeEt;
    static std::vector<float>   *antikt2HI_CryoCorr;
    static std::vector<float>   *antikt2HI_NoFlow;
    static std::vector<float>   *antikt2HI_NumConstituents;
    static std::vector<float>   *antikt2HI_UncalibEt;
    static std::vector<float>   *antikt2HI_Discriminant;
    static std::vector<float>   *antikt2HI_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt2HI_n90;
    static std::vector<float>   *antikt2HI_fracSamplingMax;
    static std::vector<float>   *antikt2HI_SamplingMax;
    static std::vector<float>   *antikt2HI_n90constituents;
    static std::vector<float>   *antikt2HI_Timing;
    static std::vector<float>   *antikt2HI_LArQuality;
    static std::vector<float>   *antikt2HI_HECQuality;
    static std::vector<float>   *antikt2HI_TileQuality;
    static std::vector<int>     *antikt2HI_const_n;
    static std::vector< std::vector<float> > *antikt2HI_const_et;
    static std::vector< std::vector<float> > *antikt2HI_const_eta;
    static std::vector< std::vector<float> > *antikt2HI_const_phi;
    static std::vector< std::vector<float> > *antikt2HI_sampling_et;
    static std::vector< std::vector<float> > *antikt2HI_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt2HI_bad_cell_n;
    static std::vector< std::vector<float> > *antikt2HI_bad_cell_et;
    static std::vector< std::vector<float> > *antikt2HI_bad_cell_area;
    static std::vector< std::vector<int> > *antikt2HI_empty_cell_n;
    static std::vector< std::vector<float> > *antikt2HI_empty_cell_et;
    static std::vector< std::vector<float> > *antikt2HI_empty_cell_area;
    static std::vector< std::vector<int> > *antikt2HI_total_cell_n;
    static std::vector< std::vector<float> > *antikt2HI_total_cell_et;
    static std::vector< std::vector<float> > *antikt2HI_total_cell_area;
    static Int_t           antikt4HI_n;
    static std::vector<float>   *antikt4HI_E;
    static std::vector<float>   *antikt4HI_pt;
    static std::vector<float>   *antikt4HI_m;
    static std::vector<float>   *antikt4HI_eta;
    static std::vector<float>   *antikt4HI_phi;
    static std::vector<float>   *antikt4HI_MaxOverMean;
    static std::vector<float>   *antikt4HI_MeanTowerEt;
    static std::vector<float>   *antikt4HI_SubtractedEt;
    static std::vector<float>   *antikt4HI_RMSTowerEt;
    static std::vector<float>   *antikt4HI_GausEt;
    static std::vector<float>   *antikt4HI_SelfEnergy;
    static std::vector<float>   *antikt4HI_SumJt;
    static std::vector<float>   *antikt4HI_CoreEt;
    static std::vector<float>   *antikt4HI_EdgeEt;
    static std::vector<float>   *antikt4HI_CryoCorr;
    static std::vector<float>   *antikt4HI_NoFlow;
    static std::vector<float>   *antikt4HI_NumConstituents;
    static std::vector<float>   *antikt4HI_UncalibEt;
    static std::vector<float>   *antikt4HI_Discriminant;
    static std::vector<float>   *antikt4HI_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt4HI_n90;
    static std::vector<float>   *antikt4HI_fracSamplingMax;
    static std::vector<float>   *antikt4HI_SamplingMax;
    static std::vector<float>   *antikt4HI_n90constituents;
    static std::vector<float>   *antikt4HI_Timing;
    static std::vector<float>   *antikt4HI_LArQuality;
    static std::vector<float>   *antikt4HI_HECQuality;
    static std::vector<float>   *antikt4HI_TileQuality;
    static std::vector<int>     *antikt4HI_const_n;
    static std::vector< std::vector<float> > *antikt4HI_const_et;
    static std::vector< std::vector<float> > *antikt4HI_const_eta;
    static std::vector< std::vector<float> > *antikt4HI_const_phi;
    static std::vector< std::vector<float> > *antikt4HI_sampling_et;
    static std::vector< std::vector<float> > *antikt4HI_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt4HI_bad_cell_n;
    static std::vector< std::vector<float> > *antikt4HI_bad_cell_et;
    static std::vector< std::vector<float> > *antikt4HI_bad_cell_area;
    static std::vector< std::vector<int> > *antikt4HI_empty_cell_n;
    static std::vector< std::vector<float> > *antikt4HI_empty_cell_et;
    static std::vector< std::vector<float> > *antikt4HI_empty_cell_area;
    static std::vector< std::vector<int> > *antikt4HI_total_cell_n;
    static std::vector< std::vector<float> > *antikt4HI_total_cell_et;
    static std::vector< std::vector<float> > *antikt4HI_total_cell_area;
    static Int_t           antikt2HIEM_n;
    static std::vector<float>   *antikt2HIEM_E;
    static std::vector<float>   *antikt2HIEM_pt;
    static std::vector<float>   *antikt2HIEM_m;
    static std::vector<float>   *antikt2HIEM_eta;
    static std::vector<float>   *antikt2HIEM_phi;
    static std::vector<float>   *antikt2HIEM_MaxOverMean;
    static std::vector<float>   *antikt2HIEM_MeanTowerEt;
    static std::vector<float>   *antikt2HIEM_SubtractedEt;
    static std::vector<float>   *antikt2HIEM_RMSTowerEt;
    static std::vector<float>   *antikt2HIEM_GausEt;
    static std::vector<float>   *antikt2HIEM_SelfEnergy;
    static std::vector<float>   *antikt2HIEM_SumJt;
    static std::vector<float>   *antikt2HIEM_CoreEt;
    static std::vector<float>   *antikt2HIEM_EdgeEt;
    static std::vector<float>   *antikt2HIEM_CryoCorr;
    static std::vector<float>   *antikt2HIEM_NoFlow;
    static std::vector<float>   *antikt2HIEM_NumConstituents;
    static std::vector<float>   *antikt2HIEM_UncalibEt;
    static std::vector<float>   *antikt2HIEM_Discriminant;
    static std::vector<float>   *antikt2HIEM_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt2HIEM_n90;
    static std::vector<float>   *antikt2HIEM_fracSamplingMax;
    static std::vector<float>   *antikt2HIEM_SamplingMax;
    static std::vector<float>   *antikt2HIEM_n90constituents;
    static std::vector<float>   *antikt2HIEM_Timing;
    static std::vector<float>   *antikt2HIEM_LArQuality;
    static std::vector<float>   *antikt2HIEM_HECQuality;
    static std::vector<float>   *antikt2HIEM_TileQuality;
    static std::vector<int>     *antikt2HIEM_const_n;
    static std::vector< std::vector<float> > *antikt2HIEM_const_et;
    static std::vector< std::vector<float> > *antikt2HIEM_const_eta;
    static std::vector< std::vector<float> > *antikt2HIEM_const_phi;
    static std::vector< std::vector<float> > *antikt2HIEM_sampling_et;
    static std::vector< std::vector<float> > *antikt2HIEM_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt2HIEM_bad_cell_n;
    static std::vector< std::vector<float> > *antikt2HIEM_bad_cell_et;
    static std::vector< std::vector<float> > *antikt2HIEM_bad_cell_area;
    static std::vector< std::vector<int> > *antikt2HIEM_empty_cell_n;
    static std::vector< std::vector<float> > *antikt2HIEM_empty_cell_et;
    static std::vector< std::vector<float> > *antikt2HIEM_empty_cell_area;
    static std::vector< std::vector<int> > *antikt2HIEM_total_cell_n;
    static std::vector< std::vector<float> > *antikt2HIEM_total_cell_et;
    static std::vector< std::vector<float> > *antikt2HIEM_total_cell_area;
    static Int_t           antikt4HIEM_n;
    static std::vector<float>   *antikt4HIEM_E;
    static std::vector<float>   *antikt4HIEM_pt;
    static std::vector<float>   *antikt4HIEM_m;
    static std::vector<float>   *antikt4HIEM_eta;
    static std::vector<float>   *antikt4HIEM_phi;
    static std::vector<float>   *antikt4HIEM_MaxOverMean;
    static std::vector<float>   *antikt4HIEM_MeanTowerEt;
    static std::vector<float>   *antikt4HIEM_SubtractedEt;
    static std::vector<float>   *antikt4HIEM_RMSTowerEt;
    static std::vector<float>   *antikt4HIEM_GausEt;
    static std::vector<float>   *antikt4HIEM_SelfEnergy;
    static std::vector<float>   *antikt4HIEM_SumJt;
    static std::vector<float>   *antikt4HIEM_CoreEt;
    static std::vector<float>   *antikt4HIEM_EdgeEt;
    static std::vector<float>   *antikt4HIEM_CryoCorr;
    static std::vector<float>   *antikt4HIEM_NoFlow;
    static std::vector<float>   *antikt4HIEM_NumConstituents;
    static std::vector<float>   *antikt4HIEM_UncalibEt;
    static std::vector<float>   *antikt4HIEM_Discriminant;
    static std::vector<float>   *antikt4HIEM_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt4HIEM_n90;
    static std::vector<float>   *antikt4HIEM_fracSamplingMax;
    static std::vector<float>   *antikt4HIEM_SamplingMax;
    static std::vector<float>   *antikt4HIEM_n90constituents;
    static std::vector<float>   *antikt4HIEM_Timing;
    static std::vector<float>   *antikt4HIEM_LArQuality;
    static std::vector<float>   *antikt4HIEM_HECQuality;
    static std::vector<float>   *antikt4HIEM_TileQuality;
    static std::vector<int>     *antikt4HIEM_const_n;
    static std::vector< std::vector<float> > *antikt4HIEM_const_et;
    static std::vector< std::vector<float> > *antikt4HIEM_const_eta;
    static std::vector< std::vector<float> > *antikt4HIEM_const_phi;
    static std::vector< std::vector<float> > *antikt4HIEM_sampling_et;
    static std::vector< std::vector<float> > *antikt4HIEM_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt4HIEM_bad_cell_n;
    static std::vector< std::vector<float> > *antikt4HIEM_bad_cell_et;
    static std::vector< std::vector<float> > *antikt4HIEM_bad_cell_area;
    static std::vector< std::vector<int> > *antikt4HIEM_empty_cell_n;
    static std::vector< std::vector<float> > *antikt4HIEM_empty_cell_et;
    static std::vector< std::vector<float> > *antikt4HIEM_empty_cell_area;
    static std::vector< std::vector<int> > *antikt4HIEM_total_cell_n;
    static std::vector< std::vector<float> > *antikt4HIEM_total_cell_et;
    static std::vector< std::vector<float> > *antikt4HIEM_total_cell_area;
    static Int_t           antikt2HIAvg_n;
    static std::vector<float>   *antikt2HIAvg_E;
    static std::vector<float>   *antikt2HIAvg_pt;
    static std::vector<float>   *antikt2HIAvg_m;
    static std::vector<float>   *antikt2HIAvg_eta;
    static std::vector<float>   *antikt2HIAvg_phi;
    static std::vector<float>   *antikt2HIAvg_MaxOverMean;
    static std::vector<float>   *antikt2HIAvg_MeanTowerEt;
    static std::vector<float>   *antikt2HIAvg_SubtractedEt;
    static std::vector<float>   *antikt2HIAvg_RMSTowerEt;
    static std::vector<float>   *antikt2HIAvg_GausEt;
    static std::vector<float>   *antikt2HIAvg_SelfEnergy;
    static std::vector<float>   *antikt2HIAvg_SumJt;
    static std::vector<float>   *antikt2HIAvg_CoreEt;
    static std::vector<float>   *antikt2HIAvg_EdgeEt;
    static std::vector<float>   *antikt2HIAvg_CryoCorr;
    static std::vector<float>   *antikt2HIAvg_NoFlow;
    static std::vector<float>   *antikt2HIAvg_NumConstituents;
    static std::vector<float>   *antikt2HIAvg_UncalibEt;
    static std::vector<float>   *antikt2HIAvg_Discriminant;
    static std::vector<float>   *antikt2HIAvg_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt2HIAvg_n90;
    static std::vector<float>   *antikt2HIAvg_fracSamplingMax;
    static std::vector<float>   *antikt2HIAvg_SamplingMax;
    static std::vector<float>   *antikt2HIAvg_n90constituents;
    static std::vector<float>   *antikt2HIAvg_Timing;
    static std::vector<float>   *antikt2HIAvg_LArQuality;
    static std::vector<float>   *antikt2HIAvg_HECQuality;
    static std::vector<float>   *antikt2HIAvg_TileQuality;
    static std::vector<int>     *antikt2HIAvg_const_n;
    static std::vector< std::vector<float> > *antikt2HIAvg_const_et;
    static std::vector< std::vector<float> > *antikt2HIAvg_const_eta;
    static std::vector< std::vector<float> > *antikt2HIAvg_const_phi;
    static std::vector< std::vector<float> > *antikt2HIAvg_sampling_et;
    static std::vector< std::vector<float> > *antikt2HIAvg_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt2HIAvg_bad_cell_n;
    static std::vector< std::vector<float> > *antikt2HIAvg_bad_cell_et;
    static std::vector< std::vector<float> > *antikt2HIAvg_bad_cell_area;
    static std::vector< std::vector<int> > *antikt2HIAvg_empty_cell_n;
    static std::vector< std::vector<float> > *antikt2HIAvg_empty_cell_et;
    static std::vector< std::vector<float> > *antikt2HIAvg_empty_cell_area;
    static std::vector< std::vector<int> > *antikt2HIAvg_total_cell_n;
    static std::vector< std::vector<float> > *antikt2HIAvg_total_cell_et;
    static std::vector< std::vector<float> > *antikt2HIAvg_total_cell_area;
    static Int_t           antikt4HIAvg_n;
    static std::vector<float>   *antikt4HIAvg_E;
    static std::vector<float>   *antikt4HIAvg_pt;
    static std::vector<float>   *antikt4HIAvg_m;
    static std::vector<float>   *antikt4HIAvg_eta;
    static std::vector<float>   *antikt4HIAvg_phi;
    static std::vector<float>   *antikt4HIAvg_MaxOverMean;
    static std::vector<float>   *antikt4HIAvg_MeanTowerEt;
    static std::vector<float>   *antikt4HIAvg_SubtractedEt;
    static std::vector<float>   *antikt4HIAvg_RMSTowerEt;
    static std::vector<float>   *antikt4HIAvg_GausEt;
    static std::vector<float>   *antikt4HIAvg_SelfEnergy;
    static std::vector<float>   *antikt4HIAvg_SumJt;
    static std::vector<float>   *antikt4HIAvg_CoreEt;
    static std::vector<float>   *antikt4HIAvg_EdgeEt;
    static std::vector<float>   *antikt4HIAvg_CryoCorr;
    static std::vector<float>   *antikt4HIAvg_NoFlow;
    static std::vector<float>   *antikt4HIAvg_NumConstituents;
    static std::vector<float>   *antikt4HIAvg_UncalibEt;
    static std::vector<float>   *antikt4HIAvg_Discriminant;
    static std::vector<float>   *antikt4HIAvg_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt4HIAvg_n90;
    static std::vector<float>   *antikt4HIAvg_fracSamplingMax;
    static std::vector<float>   *antikt4HIAvg_SamplingMax;
    static std::vector<float>   *antikt4HIAvg_n90constituents;
    static std::vector<float>   *antikt4HIAvg_Timing;
    static std::vector<float>   *antikt4HIAvg_LArQuality;
    static std::vector<float>   *antikt4HIAvg_HECQuality;
    static std::vector<float>   *antikt4HIAvg_TileQuality;
    static std::vector<int>     *antikt4HIAvg_const_n;
    static std::vector< std::vector<float> > *antikt4HIAvg_const_et;
    static std::vector< std::vector<float> > *antikt4HIAvg_const_eta;
    static std::vector< std::vector<float> > *antikt4HIAvg_const_phi;
    static std::vector< std::vector<float> > *antikt4HIAvg_sampling_et;
    static std::vector< std::vector<float> > *antikt4HIAvg_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt4HIAvg_bad_cell_n;
    static std::vector< std::vector<float> > *antikt4HIAvg_bad_cell_et;
    static std::vector< std::vector<float> > *antikt4HIAvg_bad_cell_area;
    static std::vector< std::vector<int> > *antikt4HIAvg_empty_cell_n;
    static std::vector< std::vector<float> > *antikt4HIAvg_empty_cell_et;
    static std::vector< std::vector<float> > *antikt4HIAvg_empty_cell_area;
    static std::vector< std::vector<int> > *antikt4HIAvg_total_cell_n;
    static std::vector< std::vector<float> > *antikt4HIAvg_total_cell_et;
    static std::vector< std::vector<float> > *antikt4HIAvg_total_cell_area;
    static Int_t           antikt2HIItr_n;
    static std::vector<float>   *antikt2HIItr_E;
    static std::vector<float>   *antikt2HIItr_pt;
    static std::vector<float>   *antikt2HIItr_m;
    static std::vector<float>   *antikt2HIItr_eta;
    static std::vector<float>   *antikt2HIItr_phi;
    static std::vector<float>   *antikt2HIItr_MaxOverMean;
    static std::vector<float>   *antikt2HIItr_MeanTowerEt;
    static std::vector<float>   *antikt2HIItr_SubtractedEt;
    static std::vector<float>   *antikt2HIItr_RMSTowerEt;
    static std::vector<float>   *antikt2HIItr_GausEt;
    static std::vector<float>   *antikt2HIItr_SelfEnergy;
    static std::vector<float>   *antikt2HIItr_SumJt;
    static std::vector<float>   *antikt2HIItr_CoreEt;
    static std::vector<float>   *antikt2HIItr_EdgeEt;
    static std::vector<float>   *antikt2HIItr_CryoCorr;
    static std::vector<float>   *antikt2HIItr_NoFlow;
    static std::vector<float>   *antikt2HIItr_NumConstituents;
    static std::vector<float>   *antikt2HIItr_UncalibEt;
    static std::vector<float>   *antikt2HIItr_Discriminant;
    static std::vector<float>   *antikt2HIItr_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt2HIItr_n90;
    static std::vector<float>   *antikt2HIItr_fracSamplingMax;
    static std::vector<float>   *antikt2HIItr_SamplingMax;
    static std::vector<float>   *antikt2HIItr_n90constituents;
    static std::vector<float>   *antikt2HIItr_Timing;
    static std::vector<float>   *antikt2HIItr_LArQuality;
    static std::vector<float>   *antikt2HIItr_HECQuality;
    static std::vector<float>   *antikt2HIItr_TileQuality;
    static std::vector<int>     *antikt2HIItr_const_n;
    static std::vector< std::vector<float> > *antikt2HIItr_const_et;
    static std::vector< std::vector<float> > *antikt2HIItr_const_eta;
    static std::vector< std::vector<float> > *antikt2HIItr_const_phi;
    static std::vector< std::vector<float> > *antikt2HIItr_sampling_et;
    static std::vector< std::vector<float> > *antikt2HIItr_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt2HIItr_bad_cell_n;
    static std::vector< std::vector<float> > *antikt2HIItr_bad_cell_et;
    static std::vector< std::vector<float> > *antikt2HIItr_bad_cell_area;
    static std::vector< std::vector<int> > *antikt2HIItr_empty_cell_n;
    static std::vector< std::vector<float> > *antikt2HIItr_empty_cell_et;
    static std::vector< std::vector<float> > *antikt2HIItr_empty_cell_area;
    static std::vector< std::vector<int> > *antikt2HIItr_total_cell_n;
    static std::vector< std::vector<float> > *antikt2HIItr_total_cell_et;
    static std::vector< std::vector<float> > *antikt2HIItr_total_cell_area;
    static Int_t           antikt3HIItr_n;
    static std::vector<float>   *antikt3HIItr_E;
    static std::vector<float>   *antikt3HIItr_pt;
    static std::vector<float>   *antikt3HIItr_m;
    static std::vector<float>   *antikt3HIItr_eta;
    static std::vector<float>   *antikt3HIItr_phi;
    static std::vector<float>   *antikt3HIItr_MaxOverMean;
    static std::vector<float>   *antikt3HIItr_MeanTowerEt;
    static std::vector<float>   *antikt3HIItr_SubtractedEt;
    static std::vector<float>   *antikt3HIItr_RMSTowerEt;
    static std::vector<float>   *antikt3HIItr_GausEt;
    static std::vector<float>   *antikt3HIItr_SelfEnergy;
    static std::vector<float>   *antikt3HIItr_SumJt;
    static std::vector<float>   *antikt3HIItr_CoreEt;
    static std::vector<float>   *antikt3HIItr_EdgeEt;
    static std::vector<float>   *antikt3HIItr_CryoCorr;
    static std::vector<float>   *antikt3HIItr_NoFlow;
    static std::vector<float>   *antikt3HIItr_NumConstituents;
    static std::vector<float>   *antikt3HIItr_UncalibEt;
    static std::vector<float>   *antikt3HIItr_Discriminant;
    static std::vector<float>   *antikt3HIItr_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt3HIItr_n90;
    static std::vector<float>   *antikt3HIItr_fracSamplingMax;
    static std::vector<float>   *antikt3HIItr_SamplingMax;
    static std::vector<float>   *antikt3HIItr_n90constituents;
    static std::vector<float>   *antikt3HIItr_Timing;
    static std::vector<float>   *antikt3HIItr_LArQuality;
    static std::vector<float>   *antikt3HIItr_HECQuality;
    static std::vector<float>   *antikt3HIItr_TileQuality;
    static std::vector<int>     *antikt3HIItr_const_n;
    static std::vector< std::vector<float> > *antikt3HIItr_const_et;
    static std::vector< std::vector<float> > *antikt3HIItr_const_eta;
    static std::vector< std::vector<float> > *antikt3HIItr_const_phi;
    static std::vector< std::vector<float> > *antikt3HIItr_sampling_et;
    static std::vector< std::vector<float> > *antikt3HIItr_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt3HIItr_bad_cell_n;
    static std::vector< std::vector<float> > *antikt3HIItr_bad_cell_et;
    static std::vector< std::vector<float> > *antikt3HIItr_bad_cell_area;
    static std::vector< std::vector<int> > *antikt3HIItr_empty_cell_n;
    static std::vector< std::vector<float> > *antikt3HIItr_empty_cell_et;
    static std::vector< std::vector<float> > *antikt3HIItr_empty_cell_area;
    static std::vector< std::vector<int> > *antikt3HIItr_total_cell_n;
    static std::vector< std::vector<float> > *antikt3HIItr_total_cell_et;
    static std::vector< std::vector<float> > *antikt3HIItr_total_cell_area;
    static Int_t           antikt4HIItr_n;
    static std::vector<float>   *antikt4HIItr_E;
    static std::vector<float>   *antikt4HIItr_pt;
    static std::vector<float>   *antikt4HIItr_m;
    static std::vector<float>   *antikt4HIItr_eta;
    static std::vector<float>   *antikt4HIItr_phi;
    static std::vector<float>   *antikt4HIItr_MaxOverMean;
    static std::vector<float>   *antikt4HIItr_MeanTowerEt;
    static std::vector<float>   *antikt4HIItr_SubtractedEt;
    static std::vector<float>   *antikt4HIItr_RMSTowerEt;
    static std::vector<float>   *antikt4HIItr_GausEt;
    static std::vector<float>   *antikt4HIItr_SelfEnergy;
    static std::vector<float>   *antikt4HIItr_SumJt;
    static std::vector<float>   *antikt4HIItr_CoreEt;
    static std::vector<float>   *antikt4HIItr_EdgeEt;
    static std::vector<float>   *antikt4HIItr_CryoCorr;
    static std::vector<float>   *antikt4HIItr_NoFlow;
    static std::vector<float>   *antikt4HIItr_NumConstituents;
    static std::vector<float>   *antikt4HIItr_UncalibEt;
    static std::vector<float>   *antikt4HIItr_Discriminant;
    static std::vector<float>   *antikt4HIItr_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt4HIItr_n90;
    static std::vector<float>   *antikt4HIItr_fracSamplingMax;
    static std::vector<float>   *antikt4HIItr_SamplingMax;
    static std::vector<float>   *antikt4HIItr_n90constituents;
    static std::vector<float>   *antikt4HIItr_Timing;
    static std::vector<float>   *antikt4HIItr_LArQuality;
    static std::vector<float>   *antikt4HIItr_HECQuality;
    static std::vector<float>   *antikt4HIItr_TileQuality;
    static std::vector<int>     *antikt4HIItr_const_n;
    static std::vector< std::vector<float> > *antikt4HIItr_const_et;
    static std::vector< std::vector<float> > *antikt4HIItr_const_eta;
    static std::vector< std::vector<float> > *antikt4HIItr_const_phi;
    static std::vector< std::vector<float> > *antikt4HIItr_sampling_et;
    static std::vector< std::vector<float> > *antikt4HIItr_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt4HIItr_bad_cell_n;
    static std::vector< std::vector<float> > *antikt4HIItr_bad_cell_et;
    static std::vector< std::vector<float> > *antikt4HIItr_bad_cell_area;
    static std::vector< std::vector<int> > *antikt4HIItr_empty_cell_n;
    static std::vector< std::vector<float> > *antikt4HIItr_empty_cell_et;
    static std::vector< std::vector<float> > *antikt4HIItr_empty_cell_area;
    static std::vector< std::vector<int> > *antikt4HIItr_total_cell_n;
    static std::vector< std::vector<float> > *antikt4HIItr_total_cell_et;
    static std::vector< std::vector<float> > *antikt4HIItr_total_cell_area;
    static Int_t           antikt5HIItr_n;
    static std::vector<float>   *antikt5HIItr_E;
    static std::vector<float>   *antikt5HIItr_pt;
    static std::vector<float>   *antikt5HIItr_m;
    static std::vector<float>   *antikt5HIItr_eta;
    static std::vector<float>   *antikt5HIItr_phi;
    static std::vector<float>   *antikt5HIItr_MaxOverMean;
    static std::vector<float>   *antikt5HIItr_MeanTowerEt;
    static std::vector<float>   *antikt5HIItr_SubtractedEt;
    static std::vector<float>   *antikt5HIItr_RMSTowerEt;
    static std::vector<float>   *antikt5HIItr_GausEt;
    static std::vector<float>   *antikt5HIItr_SelfEnergy;
    static std::vector<float>   *antikt5HIItr_SumJt;
    static std::vector<float>   *antikt5HIItr_CoreEt;
    static std::vector<float>   *antikt5HIItr_EdgeEt;
    static std::vector<float>   *antikt5HIItr_CryoCorr;
    static std::vector<float>   *antikt5HIItr_NoFlow;
    static std::vector<float>   *antikt5HIItr_NumConstituents;
    static std::vector<float>   *antikt5HIItr_UncalibEt;
    static std::vector<float>   *antikt5HIItr_Discriminant;
    static std::vector<float>   *antikt5HIItr_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt5HIItr_n90;
    static std::vector<float>   *antikt5HIItr_fracSamplingMax;
    static std::vector<float>   *antikt5HIItr_SamplingMax;
    static std::vector<float>   *antikt5HIItr_n90constituents;
    static std::vector<float>   *antikt5HIItr_Timing;
    static std::vector<float>   *antikt5HIItr_LArQuality;
    static std::vector<float>   *antikt5HIItr_HECQuality;
    static std::vector<float>   *antikt5HIItr_TileQuality;
    static std::vector<int>     *antikt5HIItr_const_n;
    static std::vector< std::vector<float> > *antikt5HIItr_const_et;
    static std::vector< std::vector<float> > *antikt5HIItr_const_eta;
    static std::vector< std::vector<float> > *antikt5HIItr_const_phi;
    static std::vector< std::vector<float> > *antikt5HIItr_sampling_et;
    static std::vector< std::vector<float> > *antikt5HIItr_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt5HIItr_bad_cell_n;
    static std::vector< std::vector<float> > *antikt5HIItr_bad_cell_et;
    static std::vector< std::vector<float> > *antikt5HIItr_bad_cell_area;
    static std::vector< std::vector<int> > *antikt5HIItr_empty_cell_n;
    static std::vector< std::vector<float> > *antikt5HIItr_empty_cell_et;
    static std::vector< std::vector<float> > *antikt5HIItr_empty_cell_area;
    static std::vector< std::vector<int> > *antikt5HIItr_total_cell_n;
    static std::vector< std::vector<float> > *antikt5HIItr_total_cell_et;
    static std::vector< std::vector<float> > *antikt5HIItr_total_cell_area;
    static Int_t           antikt6HIItr_n;
    static std::vector<float>   *antikt6HIItr_E;
    static std::vector<float>   *antikt6HIItr_pt;
    static std::vector<float>   *antikt6HIItr_m;
    static std::vector<float>   *antikt6HIItr_eta;
    static std::vector<float>   *antikt6HIItr_phi;
    static std::vector<float>   *antikt6HIItr_MaxOverMean;
    static std::vector<float>   *antikt6HIItr_MeanTowerEt;
    static std::vector<float>   *antikt6HIItr_SubtractedEt;
    static std::vector<float>   *antikt6HIItr_RMSTowerEt;
    static std::vector<float>   *antikt6HIItr_GausEt;
    static std::vector<float>   *antikt6HIItr_SelfEnergy;
    static std::vector<float>   *antikt6HIItr_SumJt;
    static std::vector<float>   *antikt6HIItr_CoreEt;
    static std::vector<float>   *antikt6HIItr_EdgeEt;
    static std::vector<float>   *antikt6HIItr_CryoCorr;
    static std::vector<float>   *antikt6HIItr_NoFlow;
    static std::vector<float>   *antikt6HIItr_NumConstituents;
    static std::vector<float>   *antikt6HIItr_UncalibEt;
    static std::vector<float>   *antikt6HIItr_Discriminant;
    static std::vector<float>   *antikt6HIItr_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt6HIItr_n90;
    static std::vector<float>   *antikt6HIItr_fracSamplingMax;
    static std::vector<float>   *antikt6HIItr_SamplingMax;
    static std::vector<float>   *antikt6HIItr_n90constituents;
    static std::vector<float>   *antikt6HIItr_Timing;
    static std::vector<float>   *antikt6HIItr_LArQuality;
    static std::vector<float>   *antikt6HIItr_HECQuality;
    static std::vector<float>   *antikt6HIItr_TileQuality;
    static std::vector<int>     *antikt6HIItr_const_n;
    static std::vector< std::vector<float> > *antikt6HIItr_const_et;
    static std::vector< std::vector<float> > *antikt6HIItr_const_eta;
    static std::vector< std::vector<float> > *antikt6HIItr_const_phi;
    static std::vector< std::vector<float> > *antikt6HIItr_sampling_et;
    static std::vector< std::vector<float> > *antikt6HIItr_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt6HIItr_bad_cell_n;
    static std::vector< std::vector<float> > *antikt6HIItr_bad_cell_et;
    static std::vector< std::vector<float> > *antikt6HIItr_bad_cell_area;
    static std::vector< std::vector<int> > *antikt6HIItr_empty_cell_n;
    static std::vector< std::vector<float> > *antikt6HIItr_empty_cell_et;
    static std::vector< std::vector<float> > *antikt6HIItr_empty_cell_area;
    static std::vector< std::vector<int> > *antikt6HIItr_total_cell_n;
    static std::vector< std::vector<float> > *antikt6HIItr_total_cell_et;
    static std::vector< std::vector<float> > *antikt6HIItr_total_cell_area;
    static Int_t           antikt2HIItrEM_n;
    static std::vector<float>   *antikt2HIItrEM_E;
    static std::vector<float>   *antikt2HIItrEM_pt;
    static std::vector<float>   *antikt2HIItrEM_m;
    static std::vector<float>   *antikt2HIItrEM_eta;
    static std::vector<float>   *antikt2HIItrEM_phi;
    static std::vector<float>   *antikt2HIItrEM_MaxOverMean;
    static std::vector<float>   *antikt2HIItrEM_MeanTowerEt;
    static std::vector<float>   *antikt2HIItrEM_SubtractedEt;
    static std::vector<float>   *antikt2HIItrEM_RMSTowerEt;
    static std::vector<float>   *antikt2HIItrEM_GausEt;
    static std::vector<float>   *antikt2HIItrEM_SelfEnergy;
    static std::vector<float>   *antikt2HIItrEM_SumJt;
    static std::vector<float>   *antikt2HIItrEM_CoreEt;
    static std::vector<float>   *antikt2HIItrEM_EdgeEt;
    static std::vector<float>   *antikt2HIItrEM_CryoCorr;
    static std::vector<float>   *antikt2HIItrEM_NoFlow;
    static std::vector<float>   *antikt2HIItrEM_NumConstituents;
    static std::vector<float>   *antikt2HIItrEM_UncalibEt;
    static std::vector<float>   *antikt2HIItrEM_Discriminant;
    static std::vector<float>   *antikt2HIItrEM_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt2HIItrEM_n90;
    static std::vector<float>   *antikt2HIItrEM_fracSamplingMax;
    static std::vector<float>   *antikt2HIItrEM_SamplingMax;
    static std::vector<float>   *antikt2HIItrEM_n90constituents;
    static std::vector<float>   *antikt2HIItrEM_Timing;
    static std::vector<float>   *antikt2HIItrEM_LArQuality;
    static std::vector<float>   *antikt2HIItrEM_HECQuality;
    static std::vector<float>   *antikt2HIItrEM_TileQuality;
    static std::vector<int>     *antikt2HIItrEM_const_n;
    static std::vector< std::vector<float> > *antikt2HIItrEM_const_et;
    static std::vector< std::vector<float> > *antikt2HIItrEM_const_eta;
    static std::vector< std::vector<float> > *antikt2HIItrEM_const_phi;
    static std::vector< std::vector<float> > *antikt2HIItrEM_sampling_et;
    static std::vector< std::vector<float> > *antikt2HIItrEM_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt2HIItrEM_bad_cell_n;
    static std::vector< std::vector<float> > *antikt2HIItrEM_bad_cell_et;
    static std::vector< std::vector<float> > *antikt2HIItrEM_bad_cell_area;
    static std::vector< std::vector<int> > *antikt2HIItrEM_empty_cell_n;
    static std::vector< std::vector<float> > *antikt2HIItrEM_empty_cell_et;
    static std::vector< std::vector<float> > *antikt2HIItrEM_empty_cell_area;
    static std::vector< std::vector<int> > *antikt2HIItrEM_total_cell_n;
    static std::vector< std::vector<float> > *antikt2HIItrEM_total_cell_et;
    static std::vector< std::vector<float> > *antikt2HIItrEM_total_cell_area;
    static Int_t           antikt3HIItrEM_n;
    static std::vector<float>   *antikt3HIItrEM_E;
    static std::vector<float>   *antikt3HIItrEM_pt;
    static std::vector<float>   *antikt3HIItrEM_m;
    static std::vector<float>   *antikt3HIItrEM_eta;
    static std::vector<float>   *antikt3HIItrEM_phi;
    static std::vector<float>   *antikt3HIItrEM_MaxOverMean;
    static std::vector<float>   *antikt3HIItrEM_MeanTowerEt;
    static std::vector<float>   *antikt3HIItrEM_SubtractedEt;
    static std::vector<float>   *antikt3HIItrEM_RMSTowerEt;
    static std::vector<float>   *antikt3HIItrEM_GausEt;
    static std::vector<float>   *antikt3HIItrEM_SelfEnergy;
    static std::vector<float>   *antikt3HIItrEM_SumJt;
    static std::vector<float>   *antikt3HIItrEM_CoreEt;
    static std::vector<float>   *antikt3HIItrEM_EdgeEt;
    static std::vector<float>   *antikt3HIItrEM_CryoCorr;
    static std::vector<float>   *antikt3HIItrEM_NoFlow;
    static std::vector<float>   *antikt3HIItrEM_NumConstituents;
    static std::vector<float>   *antikt3HIItrEM_UncalibEt;
    static std::vector<float>   *antikt3HIItrEM_Discriminant;
    static std::vector<float>   *antikt3HIItrEM_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt3HIItrEM_n90;
    static std::vector<float>   *antikt3HIItrEM_fracSamplingMax;
    static std::vector<float>   *antikt3HIItrEM_SamplingMax;
    static std::vector<float>   *antikt3HIItrEM_n90constituents;
    static std::vector<float>   *antikt3HIItrEM_Timing;
    static std::vector<float>   *antikt3HIItrEM_LArQuality;
    static std::vector<float>   *antikt3HIItrEM_HECQuality;
    static std::vector<float>   *antikt3HIItrEM_TileQuality;
    static std::vector<int>     *antikt3HIItrEM_const_n;
    static std::vector< std::vector<float> > *antikt3HIItrEM_const_et;
    static std::vector< std::vector<float> > *antikt3HIItrEM_const_eta;
    static std::vector< std::vector<float> > *antikt3HIItrEM_const_phi;
    static std::vector< std::vector<float> > *antikt3HIItrEM_sampling_et;
    static std::vector< std::vector<float> > *antikt3HIItrEM_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt3HIItrEM_bad_cell_n;
    static std::vector< std::vector<float> > *antikt3HIItrEM_bad_cell_et;
    static std::vector< std::vector<float> > *antikt3HIItrEM_bad_cell_area;
    static std::vector< std::vector<int> > *antikt3HIItrEM_empty_cell_n;
    static std::vector< std::vector<float> > *antikt3HIItrEM_empty_cell_et;
    static std::vector< std::vector<float> > *antikt3HIItrEM_empty_cell_area;
    static std::vector< std::vector<int> > *antikt3HIItrEM_total_cell_n;
    static std::vector< std::vector<float> > *antikt3HIItrEM_total_cell_et;
    static std::vector< std::vector<float> > *antikt3HIItrEM_total_cell_area;
    static Int_t           antikt4HIItrEM_n;
    static std::vector<float>   *antikt4HIItrEM_E;
    static std::vector<float>   *antikt4HIItrEM_pt;
    static std::vector<float>   *antikt4HIItrEM_m;
    static std::vector<float>   *antikt4HIItrEM_eta;
    static std::vector<float>   *antikt4HIItrEM_phi;
    static std::vector<float>   *antikt4HIItrEM_MaxOverMean;
    static std::vector<float>   *antikt4HIItrEM_MeanTowerEt;
    static std::vector<float>   *antikt4HIItrEM_SubtractedEt;
    static std::vector<float>   *antikt4HIItrEM_RMSTowerEt;
    static std::vector<float>   *antikt4HIItrEM_GausEt;
    static std::vector<float>   *antikt4HIItrEM_SelfEnergy;
    static std::vector<float>   *antikt4HIItrEM_SumJt;
    static std::vector<float>   *antikt4HIItrEM_CoreEt;
    static std::vector<float>   *antikt4HIItrEM_EdgeEt;
    static std::vector<float>   *antikt4HIItrEM_CryoCorr;
    static std::vector<float>   *antikt4HIItrEM_NoFlow;
    static std::vector<float>   *antikt4HIItrEM_NumConstituents;
    static std::vector<float>   *antikt4HIItrEM_UncalibEt;
    static std::vector<float>   *antikt4HIItrEM_Discriminant;
    static std::vector<float>   *antikt4HIItrEM_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt4HIItrEM_n90;
    static std::vector<float>   *antikt4HIItrEM_fracSamplingMax;
    static std::vector<float>   *antikt4HIItrEM_SamplingMax;
    static std::vector<float>   *antikt4HIItrEM_n90constituents;
    static std::vector<float>   *antikt4HIItrEM_Timing;
    static std::vector<float>   *antikt4HIItrEM_LArQuality;
    static std::vector<float>   *antikt4HIItrEM_HECQuality;
    static std::vector<float>   *antikt4HIItrEM_TileQuality;
    static std::vector<int>     *antikt4HIItrEM_const_n;
    static std::vector< std::vector<float> > *antikt4HIItrEM_const_et;
    static std::vector< std::vector<float> > *antikt4HIItrEM_const_eta;
    static std::vector< std::vector<float> > *antikt4HIItrEM_const_phi;
    static std::vector< std::vector<float> > *antikt4HIItrEM_sampling_et;
    static std::vector< std::vector<float> > *antikt4HIItrEM_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt4HIItrEM_bad_cell_n;
    static std::vector< std::vector<float> > *antikt4HIItrEM_bad_cell_et;
    static std::vector< std::vector<float> > *antikt4HIItrEM_bad_cell_area;
    static std::vector< std::vector<int> > *antikt4HIItrEM_empty_cell_n;
    static std::vector< std::vector<float> > *antikt4HIItrEM_empty_cell_et;
    static std::vector< std::vector<float> > *antikt4HIItrEM_empty_cell_area;
    static std::vector< std::vector<int> > *antikt4HIItrEM_total_cell_n;
    static std::vector< std::vector<float> > *antikt4HIItrEM_total_cell_et;
    static std::vector< std::vector<float> > *antikt4HIItrEM_total_cell_area;
    static Int_t           antikt5HIItrEM_n;
    static std::vector<float>   *antikt5HIItrEM_E;
    static std::vector<float>   *antikt5HIItrEM_pt;
    static std::vector<float>   *antikt5HIItrEM_m;
    static std::vector<float>   *antikt5HIItrEM_eta;
    static std::vector<float>   *antikt5HIItrEM_phi;
    static std::vector<float>   *antikt5HIItrEM_MaxOverMean;
    static std::vector<float>   *antikt5HIItrEM_MeanTowerEt;
    static std::vector<float>   *antikt5HIItrEM_SubtractedEt;
    static std::vector<float>   *antikt5HIItrEM_RMSTowerEt;
    static std::vector<float>   *antikt5HIItrEM_GausEt;
    static std::vector<float>   *antikt5HIItrEM_SelfEnergy;
    static std::vector<float>   *antikt5HIItrEM_SumJt;
    static std::vector<float>   *antikt5HIItrEM_CoreEt;
    static std::vector<float>   *antikt5HIItrEM_EdgeEt;
    static std::vector<float>   *antikt5HIItrEM_CryoCorr;
    static std::vector<float>   *antikt5HIItrEM_NoFlow;
    static std::vector<float>   *antikt5HIItrEM_NumConstituents;
    static std::vector<float>   *antikt5HIItrEM_UncalibEt;
    static std::vector<float>   *antikt5HIItrEM_Discriminant;
    static std::vector<float>   *antikt5HIItrEM_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt5HIItrEM_n90;
    static std::vector<float>   *antikt5HIItrEM_fracSamplingMax;
    static std::vector<float>   *antikt5HIItrEM_SamplingMax;
    static std::vector<float>   *antikt5HIItrEM_n90constituents;
    static std::vector<float>   *antikt5HIItrEM_Timing;
    static std::vector<float>   *antikt5HIItrEM_LArQuality;
    static std::vector<float>   *antikt5HIItrEM_HECQuality;
    static std::vector<float>   *antikt5HIItrEM_TileQuality;
    static std::vector<int>     *antikt5HIItrEM_const_n;
    static std::vector< std::vector<float> > *antikt5HIItrEM_const_et;
    static std::vector< std::vector<float> > *antikt5HIItrEM_const_eta;
    static std::vector< std::vector<float> > *antikt5HIItrEM_const_phi;
    static std::vector< std::vector<float> > *antikt5HIItrEM_sampling_et;
    static std::vector< std::vector<float> > *antikt5HIItrEM_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt5HIItrEM_bad_cell_n;
    static std::vector< std::vector<float> > *antikt5HIItrEM_bad_cell_et;
    static std::vector< std::vector<float> > *antikt5HIItrEM_bad_cell_area;
    static std::vector< std::vector<int> > *antikt5HIItrEM_empty_cell_n;
    static std::vector< std::vector<float> > *antikt5HIItrEM_empty_cell_et;
    static std::vector< std::vector<float> > *antikt5HIItrEM_empty_cell_area;
    static std::vector< std::vector<int> > *antikt5HIItrEM_total_cell_n;
    static std::vector< std::vector<float> > *antikt5HIItrEM_total_cell_et;
    static std::vector< std::vector<float> > *antikt5HIItrEM_total_cell_area;
    static Int_t           antikt6HIItrEM_n;
    static std::vector<float>   *antikt6HIItrEM_E;
    static std::vector<float>   *antikt6HIItrEM_pt;
    static std::vector<float>   *antikt6HIItrEM_m;
    static std::vector<float>   *antikt6HIItrEM_eta;
    static std::vector<float>   *antikt6HIItrEM_phi;
    static std::vector<float>   *antikt6HIItrEM_MaxOverMean;
    static std::vector<float>   *antikt6HIItrEM_MeanTowerEt;
    static std::vector<float>   *antikt6HIItrEM_SubtractedEt;
    static std::vector<float>   *antikt6HIItrEM_RMSTowerEt;
    static std::vector<float>   *antikt6HIItrEM_GausEt;
    static std::vector<float>   *antikt6HIItrEM_SelfEnergy;
    static std::vector<float>   *antikt6HIItrEM_SumJt;
    static std::vector<float>   *antikt6HIItrEM_CoreEt;
    static std::vector<float>   *antikt6HIItrEM_EdgeEt;
    static std::vector<float>   *antikt6HIItrEM_CryoCorr;
    static std::vector<float>   *antikt6HIItrEM_NoFlow;
    static std::vector<float>   *antikt6HIItrEM_NumConstituents;
    static std::vector<float>   *antikt6HIItrEM_UncalibEt;
    static std::vector<float>   *antikt6HIItrEM_Discriminant;
    static std::vector<float>   *antikt6HIItrEM_MeanTowerEtUnsubtr;
    static std::vector<float>   *antikt6HIItrEM_n90;
    static std::vector<float>   *antikt6HIItrEM_fracSamplingMax;
    static std::vector<float>   *antikt6HIItrEM_SamplingMax;
    static std::vector<float>   *antikt6HIItrEM_n90constituents;
    static std::vector<float>   *antikt6HIItrEM_Timing;
    static std::vector<float>   *antikt6HIItrEM_LArQuality;
    static std::vector<float>   *antikt6HIItrEM_HECQuality;
    static std::vector<float>   *antikt6HIItrEM_TileQuality;
    static std::vector<int>     *antikt6HIItrEM_const_n;
    static std::vector< std::vector<float> > *antikt6HIItrEM_const_et;
    static std::vector< std::vector<float> > *antikt6HIItrEM_const_eta;
    static std::vector< std::vector<float> > *antikt6HIItrEM_const_phi;
    static std::vector< std::vector<float> > *antikt6HIItrEM_sampling_et;
    static std::vector< std::vector<float> > *antikt6HIItrEM_sampling_et_unsubtr;
    static std::vector< std::vector<int> > *antikt6HIItrEM_bad_cell_n;
    static std::vector< std::vector<float> > *antikt6HIItrEM_bad_cell_et;
    static std::vector< std::vector<float> > *antikt6HIItrEM_bad_cell_area;
    static std::vector< std::vector<int> > *antikt6HIItrEM_empty_cell_n;
    static std::vector< std::vector<float> > *antikt6HIItrEM_empty_cell_et;
    static std::vector< std::vector<float> > *antikt6HIItrEM_empty_cell_area;
    static std::vector< std::vector<int> > *antikt6HIItrEM_total_cell_n;
    static std::vector< std::vector<float> > *antikt6HIItrEM_total_cell_et;
    static std::vector< std::vector<float> > *antikt6HIItrEM_total_cell_area;
    static Int_t           jetSeed_n;
    static std::vector<float>   *jetSeed_E;
    static std::vector<float>   *jetSeed_pt;
    static std::vector<float>   *jetSeed_m;
    static std::vector<float>   *jetSeed_eta;
    static std::vector<float>   *jetSeed_phi;
    static Int_t           antikt4Track_n;
    static std::vector<float>   *antikt4Track_E;
    static std::vector<float>   *antikt4Track_pt;
    static std::vector<float>   *antikt4Track_m;
    static std::vector<float>   *antikt4Track_eta;
    static std::vector<float>   *antikt4Track_phi;
    static std::vector<int>     *antikt4Track_const_n;
    static std::vector< std::vector<float> > *antikt4Track_const_pt;
    static std::vector< std::vector<float> > *antikt4Track_const_eta;
    static std::vector< std::vector<float> > *antikt4Track_const_phi;
    static std::vector< std::vector<float> > *antikt4Track_const_chi2;
    static std::vector< std::vector<float> > *antikt4Track_const_d0_wrtPV;
    static std::vector< std::vector<float> > *antikt4Track_const_z0_wrtPV;
    static std::vector< std::vector<float> > *antikt4Track_const_phi0_wrtPV;
    static std::vector< std::vector<float> > *antikt4Track_const_theta_wrtPV;
    static std::vector< std::vector<float> > *antikt4Track_const_qop;
    static std::vector< std::vector<int> > *antikt4Track_const_ndof;
    static std::vector< std::vector<int> > *antikt4Track_const_nBLayerHits;
    static std::vector< std::vector<int> > *antikt4Track_const_nPixelHits;
    static std::vector< std::vector<int> > *antikt4Track_const_nSCTHits;
    static std::vector< std::vector<int> > *antikt4Track_const_nTRTHits;
    static Int_t           antikt6Track_n;
    static std::vector<float>   *antikt6Track_E;
    static std::vector<float>   *antikt6Track_pt;
    static std::vector<float>   *antikt6Track_m;
    static std::vector<float>   *antikt6Track_eta;
    static std::vector<float>   *antikt6Track_phi;
    static std::vector<int>     *antikt6Track_const_n;
    static std::vector< std::vector<float> > *antikt6Track_const_pt;
    static std::vector< std::vector<float> > *antikt6Track_const_eta;
    static std::vector< std::vector<float> > *antikt6Track_const_phi;
    static std::vector< std::vector<float> > *antikt6Track_const_chi2;
    static std::vector< std::vector<float> > *antikt6Track_const_d0_wrtPV;
    static std::vector< std::vector<float> > *antikt6Track_const_z0_wrtPV;
    static std::vector< std::vector<float> > *antikt6Track_const_phi0_wrtPV;
    static std::vector< std::vector<float> > *antikt6Track_const_theta_wrtPV;
    static std::vector< std::vector<float> > *antikt6Track_const_qop;
    static std::vector< std::vector<int> > *antikt6Track_const_ndof;
    static std::vector< std::vector<int> > *antikt6Track_const_nBLayerHits;
    static std::vector< std::vector<int> > *antikt6Track_const_nPixelHits;
    static std::vector< std::vector<int> > *antikt6Track_const_nSCTHits;
    static std::vector< std::vector<int> > *antikt6Track_const_nTRTHits;
    //jet truth
    static Int_t antikt2Truth_n;
    static std::vector<float>   *antikt2Truth_E;
    static std::vector<float>   *antikt2Truth_pt;
    static std::vector<float>   *antikt2Truth_m;
    static std::vector<float>   *antikt2Truth_eta;
    static std::vector<float>   *antikt2Truth_phi;
    ////////////////////////////////////////////////////////
    //pp 2010 @ 2.76TeV////////////////////////////////////
    //////////////////////////////////////////////////////
   static Int_t           AntiKt4TopoEM_n;
   static std::vector<float>   *AntiKt4TopoEM_E;
   static std::vector<float>   *AntiKt4TopoEM_pt;
   static std::vector<float>   *AntiKt4TopoEM_m;
   static std::vector<float>   *AntiKt4TopoEM_eta;
   static std::vector<float>   *AntiKt4TopoEM_phi;
   static std::vector<float>   *AntiKt4TopoEM_EtaOrigin;
   static std::vector<float>   *AntiKt4TopoEM_PhiOrigin;
   static std::vector<float>   *AntiKt4TopoEM_MOrigin;
   static std::vector<float>   *AntiKt4TopoEM_EtaOriginEM;
   static std::vector<float>   *AntiKt4TopoEM_PhiOriginEM;
   static std::vector<float>   *AntiKt4TopoEM_MOriginEM;
   static std::vector<float>   *AntiKt4TopoEM_WIDTH;
   static std::vector<float>   *AntiKt4TopoEM_n90;
   static std::vector<float>   *AntiKt4TopoEM_Timing;
   static std::vector<float>   *AntiKt4TopoEM_LArQuality;
   static std::vector<float>   *AntiKt4TopoEM_nTrk;
   static std::vector<float>   *AntiKt4TopoEM_sumPtTrk;
   static std::vector<float>   *AntiKt4TopoEM_OriginIndex;
   static std::vector<float>   *AntiKt4TopoEM_HECQuality;
   static std::vector<float>   *AntiKt4TopoEM_NegativeE;
   static std::vector<float>   *AntiKt4TopoEM_AverageLArQF;
   static std::vector<float>   *AntiKt4TopoEM_YFlip12;
   static std::vector<float>   *AntiKt4TopoEM_YFlip23;
   static std::vector<float>   *AntiKt4TopoEM_BCH_CORR_CELL;
   static std::vector<float>   *AntiKt4TopoEM_BCH_CORR_DOTX;
   static std::vector<float>   *AntiKt4TopoEM_BCH_CORR_JET;
   static std::vector<float>   *AntiKt4TopoEM_BCH_CORR_JET_FORCELL;
   static std::vector<float>   *AntiKt4TopoEM_ENG_BAD_CELLS;
   static std::vector<float>   *AntiKt4TopoEM_N_BAD_CELLS;
   static std::vector<float>   *AntiKt4TopoEM_N_BAD_CELLS_CORR;
   static std::vector<float>   *AntiKt4TopoEM_BAD_CELLS_CORR_E;
   static std::vector<float>   *AntiKt4TopoEM_NumTowers;
   static std::vector<float>   *AntiKt4TopoEM_ootFracCells5;
   static std::vector<float>   *AntiKt4TopoEM_ootFracCells10;
   static std::vector<float>   *AntiKt4TopoEM_ootFracClusters5;
   static std::vector<float>   *AntiKt4TopoEM_ootFracClusters10;
   static std::vector<int>     *AntiKt4TopoEM_SamplingMax;
   static std::vector<float>   *AntiKt4TopoEM_fracSamplingMax;
   static std::vector<float>   *AntiKt4TopoEM_hecf;
   static std::vector<float>   *AntiKt4TopoEM_tgap3f;
   static std::vector<int>     *AntiKt4TopoEM_isUgly;
   static std::vector<int>     *AntiKt4TopoEM_isBadLooseMinus;
   static std::vector<int>     *AntiKt4TopoEM_isBadLoose;
   static std::vector<int>     *AntiKt4TopoEM_isBadMedium;
   static std::vector<int>     *AntiKt4TopoEM_isBadTight;
   static std::vector<float>   *AntiKt4TopoEM_emfrac;
   static std::vector<float>   *AntiKt4TopoEM_Offset;
   static std::vector<float>   *AntiKt4TopoEM_EMJES;
   static std::vector<float>   *AntiKt4TopoEM_EMJES_EtaCorr;
   static std::vector<float>   *AntiKt4TopoEM_EMJESnooffset;
   static std::vector<float>   *AntiKt4TopoEM_GCWJES;
   static std::vector<float>   *AntiKt4TopoEM_GCWJES_EtaCorr;
   static std::vector<float>   *AntiKt4TopoEM_CB;
   static std::vector<float>   *AntiKt4TopoEM_LCJES;
   static std::vector<float>   *AntiKt4TopoEM_emscale_E;
   static std::vector<float>   *AntiKt4TopoEM_emscale_pt;
   static std::vector<float>   *AntiKt4TopoEM_emscale_m;
   static std::vector<float>   *AntiKt4TopoEM_emscale_eta;
   static std::vector<float>   *AntiKt4TopoEM_emscale_phi;
   static std::vector<float>   *AntiKt4TopoEM_jvtx_x;
   static std::vector<float>   *AntiKt4TopoEM_jvtx_y;
   static std::vector<float>   *AntiKt4TopoEM_jvtx_z;
   static std::vector<float>   *AntiKt4TopoEM_jvtxf;
   static std::vector<float>   *AntiKt4TopoEM_GSCFactorF;
   static std::vector<float>   *AntiKt4TopoEM_WidthFraction;
   static std::vector<float>   *AntiKt4TopoEM_e_PreSamplerB;
   static std::vector<float>   *AntiKt4TopoEM_e_EMB1;
   static std::vector<float>   *AntiKt4TopoEM_e_EMB2;
   static std::vector<float>   *AntiKt4TopoEM_e_EMB3;
   static std::vector<float>   *AntiKt4TopoEM_e_PreSamplerE;
   static std::vector<float>   *AntiKt4TopoEM_e_EME1;
   static std::vector<float>   *AntiKt4TopoEM_e_EME2;
   static std::vector<float>   *AntiKt4TopoEM_e_EME3;
   static std::vector<float>   *AntiKt4TopoEM_e_HEC0;
   static std::vector<float>   *AntiKt4TopoEM_e_HEC1;
   static std::vector<float>   *AntiKt4TopoEM_e_HEC2;
   static std::vector<float>   *AntiKt4TopoEM_e_HEC3;
   static std::vector<float>   *AntiKt4TopoEM_e_TileBar0;
   static std::vector<float>   *AntiKt4TopoEM_e_TileBar1;
   static std::vector<float>   *AntiKt4TopoEM_e_TileBar2;
   static std::vector<float>   *AntiKt4TopoEM_e_TileGap1;
   static std::vector<float>   *AntiKt4TopoEM_e_TileGap2;
   static std::vector<float>   *AntiKt4TopoEM_e_TileGap3;
   static std::vector<float>   *AntiKt4TopoEM_e_TileExt0;
   static std::vector<float>   *AntiKt4TopoEM_e_TileExt1;
   static std::vector<float>   *AntiKt4TopoEM_e_TileExt2;
   static std::vector<float>   *AntiKt4TopoEM_e_FCAL0;
   static std::vector<float>   *AntiKt4TopoEM_e_FCAL1;
   static std::vector<float>   *AntiKt4TopoEM_e_FCAL2;
   static std::vector<std::vector<float> > *AntiKt4TopoEM_shapeBins;
   static std::vector<int>     *AntiKt4TopoEM_Nconst;
   static std::vector<std::vector<float> > *AntiKt4TopoEM_ptconst_default;
   static std::vector<std::vector<float> > *AntiKt4TopoEM_econst_default;
   static std::vector<std::vector<float> > *AntiKt4TopoEM_etaconst_default;
   static std::vector<std::vector<float> > *AntiKt4TopoEM_phiconst_default;
   static std::vector<std::vector<float> > *AntiKt4TopoEM_weightconst_default;
   static std::vector<float>   *AntiKt4TopoEM_constscale_E;
   static std::vector<float>   *AntiKt4TopoEM_constscale_pt;
   static std::vector<float>   *AntiKt4TopoEM_constscale_m;
   static std::vector<float>   *AntiKt4TopoEM_constscale_eta;
   static std::vector<float>   *AntiKt4TopoEM_constscale_phi;
   static std::vector<float>   *AntiKt4TopoEM_el_dr;
   static std::vector<int>     *AntiKt4TopoEM_el_matched;
   static std::vector<float>   *AntiKt4TopoEM_mu_dr;
   static std::vector<int>     *AntiKt4TopoEM_mu_matched;
   static std::vector<float>   *AntiKt4TopoEM_L1_dr;
   static std::vector<int>     *AntiKt4TopoEM_L1_matched;
   static std::vector<float>   *AntiKt4TopoEM_L2_dr;
   static std::vector<int>     *AntiKt4TopoEM_L2_matched;
   static std::vector<float>   *AntiKt4TopoEM_EF_dr;
   static std::vector<int>     *AntiKt4TopoEM_EF_matched;


    ///////////////////////////////////////////////////////
    static std::vector<float>   *HIFlow_PsiHICaloUtilLayers;
    static std::vector<float>   *HIFlow_PsiEtHICaloUtilLayers;
    static Float_t         HIFlow_PsiPtrack;
    static Float_t         HIFlow_PsiNtrack;
    static Float_t         HIFlow_v2EMB1sil;
    static Float_t         HIFlow_v2FCAL0sil;
    static Float_t         HIFlow_v2track;
    static Float_t         HIFlow_PsiFCAL0_w;
    static Float_t         HIFlow_PsiPFCAL0_w;
    static Float_t         HIFlow_PsiNFCAL0_w;
    static std::vector<float>   *HIFlow_Meanv2_Psi_From_EMB1CaloCel_IDLayers;
    static std::vector<float>   *HIFlow_Meanv2_Psi_From_FCAL0CaloCel_IDLayers;
    static std::vector<float>   *HIFlow_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers;
    static std::vector<float>   *HIFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_EMBP1_InDet_EMBN1;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_EMBN1_InDet_EMBP1;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_EMBP1_InDet_FCALN0;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_EMBN1_InDet_FCALP0;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_FCALN0_InDet_EMBN1;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_FCALP0_InDet_EMBP1;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_FCALP0_InDet_FCALN0;
    static std::vector<float>   *HIFlow_v2Eta_Psi_From_FCALN0_InDet_FCALP0;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0;
    static std::vector<float>   *HIFlow_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0;
    static std::vector<float>   *HIFlow_EtaEMBN1;
    static std::vector<float>   *HIFlow_EtaEMBP1;
    static std::vector<float>   *HIFlow_EtaFCALN0;
    static std::vector<float>   *HIFlow_EtaFCALP0;
    static Int_t           mu_staco_n;
    static std::vector<float>   *mu_staco_E;
    static std::vector<float>   *mu_staco_pt;
    static std::vector<float>   *mu_staco_m;
    static std::vector<float>   *mu_staco_eta;
    static std::vector<float>   *mu_staco_phi;
    static std::vector<float>   *mu_staco_px;
    static std::vector<float>   *mu_staco_py;
    static std::vector<float>   *mu_staco_pz;
    static std::vector<float>   *mu_staco_charge;
    static std::vector<unsigned short> *mu_staco_allauthor;
    static std::vector<int>     *mu_staco_author;
    static std::vector<float>   *mu_staco_beta;
    static std::vector<float>   *mu_staco_isMuonLikelihood;
    static std::vector<float>   *mu_staco_matchchi2;
    static std::vector<int>     *mu_staco_matchndof;
    static std::vector<float>   *mu_staco_etcone20;
    static std::vector<float>   *mu_staco_etcone30;
    static std::vector<float>   *mu_staco_etcone40;
    static std::vector<float>   *mu_staco_nucone20;
    static std::vector<float>   *mu_staco_nucone30;
    static std::vector<float>   *mu_staco_nucone40;
    static std::vector<float>   *mu_staco_ptcone20;
    static std::vector<float>   *mu_staco_ptcone30;
    static std::vector<float>   *mu_staco_ptcone40;
    static std::vector<float>   *mu_staco_energyLossPar;
    static std::vector<float>   *mu_staco_energyLossErr;
    static std::vector<float>   *mu_staco_etCore;
    static std::vector<float>   *mu_staco_energyLossType;
    static std::vector<unsigned short> *mu_staco_caloMuonIdTag;
    static std::vector<double>  *mu_staco_caloLRLikelihood;
    static std::vector<int>     *mu_staco_bestMatch;
    static std::vector<int>     *mu_staco_isStandAloneMuon;
    static std::vector<int>     *mu_staco_isCombinedMuon;
    static std::vector<int>     *mu_staco_isLowPtReconstructedMuon;
    static std::vector<int>     *mu_staco_isSegmentTaggedMuon;
    static std::vector<int>     *mu_staco_isCaloMuonId;
    static std::vector<int>     *mu_staco_alsoFoundByLowPt;
    static std::vector<int>     *mu_staco_alsoFoundByCaloMuonId;
    static std::vector<int>     *mu_staco_loose;
    static std::vector<int>     *mu_staco_medium;
    static std::vector<int>     *mu_staco_tight;
    static std::vector<float>   *mu_staco_d0_exPV;
    static std::vector<float>   *mu_staco_z0_exPV;
    static std::vector<float>   *mu_staco_phi_exPV;
    static std::vector<float>   *mu_staco_theta_exPV;
    static std::vector<float>   *mu_staco_qoverp_exPV;
    static std::vector<float>   *mu_staco_cb_d0_exPV;
    static std::vector<float>   *mu_staco_cb_z0_exPV;
    static std::vector<float>   *mu_staco_cb_phi_exPV;
    static std::vector<float>   *mu_staco_cb_theta_exPV;
    static std::vector<float>   *mu_staco_cb_qoverp_exPV;
    static std::vector<float>   *mu_staco_id_d0_exPV;
    static std::vector<float>   *mu_staco_id_z0_exPV;
    static std::vector<float>   *mu_staco_id_phi_exPV;
    static std::vector<float>   *mu_staco_id_theta_exPV;
    static std::vector<float>   *mu_staco_id_qoverp_exPV;
    static std::vector<float>   *mu_staco_me_d0_exPV;
    static std::vector<float>   *mu_staco_me_z0_exPV;
    static std::vector<float>   *mu_staco_me_phi_exPV;
    static std::vector<float>   *mu_staco_me_theta_exPV;
    static std::vector<float>   *mu_staco_me_qoverp_exPV;
    static std::vector<float>   *mu_staco_ie_d0_exPV;
    static std::vector<float>   *mu_staco_ie_z0_exPV;
    static std::vector<float>   *mu_staco_ie_phi_exPV;
    static std::vector<float>   *mu_staco_ie_theta_exPV;
    static std::vector<float>   *mu_staco_ie_qoverp_exPV;
    static std::vector< std::vector<int> > *mu_staco_SpaceTime_detID;
    static std::vector< std::vector<float> > *mu_staco_SpaceTime_t;
    static std::vector< std::vector<float> > *mu_staco_SpaceTime_tError;
    static std::vector< std::vector<float> > *mu_staco_SpaceTime_weight;
    static std::vector< std::vector<float> > *mu_staco_SpaceTime_x;
    static std::vector< std::vector<float> > *mu_staco_SpaceTime_y;
    static std::vector< std::vector<float> > *mu_staco_SpaceTime_z;
    static std::vector<float>   *mu_staco_cov_d0_exPV;
    static std::vector<float>   *mu_staco_cov_z0_exPV;
    static std::vector<float>   *mu_staco_cov_phi_exPV;
    static std::vector<float>   *mu_staco_cov_theta_exPV;
    static std::vector<float>   *mu_staco_cov_qoverp_exPV;
    static std::vector<float>   *mu_staco_cov_d0_z0_exPV;
    static std::vector<float>   *mu_staco_cov_d0_phi_exPV;
    static std::vector<float>   *mu_staco_cov_d0_theta_exPV;
    static std::vector<float>   *mu_staco_cov_d0_qoverp_exPV;
    static std::vector<float>   *mu_staco_cov_z0_phi_exPV;
    static std::vector<float>   *mu_staco_cov_z0_theta_exPV;
    static std::vector<float>   *mu_staco_cov_z0_qoverp_exPV;
    static std::vector<float>   *mu_staco_cov_phi_theta_exPV;
    static std::vector<float>   *mu_staco_cov_phi_qoverp_exPV;
    static std::vector<float>   *mu_staco_cov_theta_qoverp_exPV;
    static std::vector<float>   *mu_staco_id_cov_d0_exPV;
    static std::vector<float>   *mu_staco_id_cov_z0_exPV;
    static std::vector<float>   *mu_staco_id_cov_phi_exPV;
    static std::vector<float>   *mu_staco_id_cov_theta_exPV;
    static std::vector<float>   *mu_staco_id_cov_qoverp_exPV;
    static std::vector<float>   *mu_staco_me_cov_d0_exPV;
    static std::vector<float>   *mu_staco_me_cov_z0_exPV;
    static std::vector<float>   *mu_staco_me_cov_phi_exPV;
    static std::vector<float>   *mu_staco_me_cov_theta_exPV;
    static std::vector<float>   *mu_staco_me_cov_qoverp_exPV;
    static std::vector<float>   *mu_staco_ms_d0;
    static std::vector<float>   *mu_staco_ms_z0;
    static std::vector<float>   *mu_staco_ms_phi;
    static std::vector<float>   *mu_staco_ms_theta;
    static std::vector<float>   *mu_staco_ms_qoverp;
    static std::vector<float>   *mu_staco_id_d0;
    static std::vector<float>   *mu_staco_id_z0;
    static std::vector<float>   *mu_staco_id_phi;
    static std::vector<float>   *mu_staco_id_theta;
    static std::vector<float>   *mu_staco_id_qoverp;
    static std::vector<float>   *mu_staco_me_d0;
    static std::vector<float>   *mu_staco_me_z0;
    static std::vector<float>   *mu_staco_me_phi;
    static std::vector<float>   *mu_staco_me_theta;
    static std::vector<float>   *mu_staco_me_qoverp;
    static std::vector<float>   *mu_staco_ie_d0;
    static std::vector<float>   *mu_staco_ie_z0;
    static std::vector<float>   *mu_staco_ie_phi;
    static std::vector<float>   *mu_staco_ie_theta;
    static std::vector<float>   *mu_staco_ie_qoverp;
    static std::vector<int>     *mu_staco_nOutliersOnTrack;
    static std::vector<int>     *mu_staco_nBLHits;
    static std::vector<int>     *mu_staco_nPixHits;
    static std::vector<int>     *mu_staco_nSCTHits;
    static std::vector<int>     *mu_staco_nTRTHits;
    static std::vector<int>     *mu_staco_nTRTHighTHits;
    static std::vector<int>     *mu_staco_nBLSharedHits;
    static std::vector<int>     *mu_staco_nPixSharedHits;
    static std::vector<int>     *mu_staco_nPixHoles;
    static std::vector<int>     *mu_staco_nSCTSharedHits;
    static std::vector<int>     *mu_staco_nSCTHoles;
    static std::vector<int>     *mu_staco_nTRTOutliers;
    static std::vector<int>     *mu_staco_nTRTHighTOutliers;
    static std::vector<int>     *mu_staco_nGangedPixels;
    static std::vector<int>     *mu_staco_nPixelDeadSensors;
    static std::vector<int>     *mu_staco_nSCTDeadSensors;
    static std::vector<int>     *mu_staco_nTRTDeadStraws;
    static std::vector<int>     *mu_staco_expectBLayerHit;
    static std::vector<int>     *mu_staco_nMDTHits;
    static std::vector<int>     *mu_staco_nMDTHoles;
    static std::vector<int>     *mu_staco_nCSCEtaHits;
    static std::vector<int>     *mu_staco_nCSCEtaHoles;
    static std::vector<int>     *mu_staco_nCSCPhiHits;
    static std::vector<int>     *mu_staco_nCSCPhiHoles;
    static std::vector<int>     *mu_staco_nRPCEtaHits;
    static std::vector<int>     *mu_staco_nRPCEtaHoles;
    static std::vector<int>     *mu_staco_nRPCPhiHits;
    static std::vector<int>     *mu_staco_nRPCPhiHoles;
    static std::vector<int>     *mu_staco_nTGCEtaHits;
    static std::vector<int>     *mu_staco_nTGCEtaHoles;
    static std::vector<int>     *mu_staco_nTGCPhiHits;
    static std::vector<int>     *mu_staco_nTGCPhiHoles;
    static std::vector<int>     *mu_staco_nMDTBIHits;
    static std::vector<int>     *mu_staco_nMDTBMHits;
    static std::vector<int>     *mu_staco_nMDTBOHits;
    static std::vector<int>     *mu_staco_nMDTBEEHits;
    static std::vector<int>     *mu_staco_nMDTBIS78Hits;
    static std::vector<int>     *mu_staco_nMDTEIHits;
    static std::vector<int>     *mu_staco_nMDTEMHits;
    static std::vector<int>     *mu_staco_nMDTEOHits;
    static std::vector<int>     *mu_staco_nMDTEEHits;
    static std::vector<int>     *mu_staco_nRPCLayer1EtaHits;
    static std::vector<int>     *mu_staco_nRPCLayer2EtaHits;
    static std::vector<int>     *mu_staco_nRPCLayer3EtaHits;
    static std::vector<int>     *mu_staco_nRPCLayer1PhiHits;
    static std::vector<int>     *mu_staco_nRPCLayer2PhiHits;
    static std::vector<int>     *mu_staco_nRPCLayer3PhiHits;
    static std::vector<int>     *mu_staco_nTGCLayer1EtaHits;
    static std::vector<int>     *mu_staco_nTGCLayer2EtaHits;
    static std::vector<int>     *mu_staco_nTGCLayer3EtaHits;
    static std::vector<int>     *mu_staco_nTGCLayer4EtaHits;
    static std::vector<int>     *mu_staco_nTGCLayer1PhiHits;
    static std::vector<int>     *mu_staco_nTGCLayer2PhiHits;
    static std::vector<int>     *mu_staco_nTGCLayer3PhiHits;
    static std::vector<int>     *mu_staco_nTGCLayer4PhiHits;
    static std::vector<int>     *mu_staco_barrelSectors;
    static std::vector<int>     *mu_staco_endcapSectors;
    static std::vector<float>   *mu_staco_trackd0;
    static std::vector<float>   *mu_staco_trackz0;
    static std::vector<float>   *mu_staco_trackphi;
    static std::vector<float>   *mu_staco_tracktheta;
    static std::vector<float>   *mu_staco_trackqoverp;
    static std::vector<float>   *mu_staco_trackcov_d0;
    static std::vector<float>   *mu_staco_trackcov_z0;
    static std::vector<float>   *mu_staco_trackcov_phi;
    static std::vector<float>   *mu_staco_trackcov_theta;
    static std::vector<float>   *mu_staco_trackcov_qoverp;
    static std::vector<float>   *mu_staco_trackcov_d0_z0;
    static std::vector<float>   *mu_staco_trackcov_d0_phi;
    static std::vector<float>   *mu_staco_trackcov_d0_theta;
    static std::vector<float>   *mu_staco_trackcov_d0_qoverp;
    static std::vector<float>   *mu_staco_trackcov_z0_phi;
    static std::vector<float>   *mu_staco_trackcov_z0_theta;
    static std::vector<float>   *mu_staco_trackcov_z0_qoverp;
    static std::vector<float>   *mu_staco_trackcov_phi_theta;
    static std::vector<float>   *mu_staco_trackcov_phi_qoverp;
    static std::vector<float>   *mu_staco_trackcov_theta_qoverp;
    static std::vector<float>   *mu_staco_trackfitchi2;
    static std::vector<int>     *mu_staco_trackfitndof;
    static std::vector<int>     *mu_staco_hastrack;
    static std::vector<float>   *mu_staco_trackd0beam;
    static std::vector<float>   *mu_staco_trackz0beam;
    static std::vector<float>   *mu_staco_tracksigd0beam;
    static std::vector<float>   *mu_staco_tracksigz0beam;
    static std::vector<float>   *mu_staco_trackd0pv;
    static std::vector<float>   *mu_staco_trackz0pv;
    static std::vector<float>   *mu_staco_tracksigd0pv;
    static std::vector<float>   *mu_staco_tracksigz0pv;
    static std::vector<float>   *mu_staco_trackIPEstimate_d0_biasedpvunbiased;
    static std::vector<float>   *mu_staco_trackIPEstimate_z0_biasedpvunbiased;
    static std::vector<float>   *mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;
    static std::vector<float>   *mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;
    static std::vector<float>   *mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;
    static std::vector<float>   *mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;
    static std::vector<float>   *mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;
    static std::vector<float>   *mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;
    static std::vector<float>   *mu_staco_trackd0pvunbiased;
    static std::vector<float>   *mu_staco_trackz0pvunbiased;
    static std::vector<float>   *mu_staco_tracksigd0pvunbiased;
    static std::vector<float>   *mu_staco_tracksigz0pvunbiased;
    static std::vector<float>   *mu_staco_EFCB_dr;
    static std::vector<int>     *mu_staco_EFCB_n;
    static std::vector< std::vector<int> > *mu_staco_EFCB_MuonType;
    static std::vector< std::vector<float> > *mu_staco_EFCB_pt;
    static std::vector< std::vector<float> > *mu_staco_EFCB_eta;
    static std::vector< std::vector<float> > *mu_staco_EFCB_phi;
    static std::vector< std::vector<int> > *mu_staco_EFCB_hasCB;
    static std::vector<int>     *mu_staco_EFCB_matched;
    static std::vector<float>   *mu_staco_EFMG_dr;
    static std::vector<int>     *mu_staco_EFMG_n;
    static std::vector< std::vector<int> > *mu_staco_EFMG_MuonType;
    static std::vector< std::vector<float> > *mu_staco_EFMG_pt;
    static std::vector< std::vector<float> > *mu_staco_EFMG_eta;
    static std::vector< std::vector<float> > *mu_staco_EFMG_phi;
    static std::vector< std::vector<int> > *mu_staco_EFMG_hasMG;
    static std::vector<int>     *mu_staco_EFMG_matched;
    static std::vector<float>   *mu_staco_EFME_dr;
    static std::vector<int>     *mu_staco_EFME_n;
    static std::vector< std::vector<int> > *mu_staco_EFME_MuonType;
    static std::vector< std::vector<float> > *mu_staco_EFME_pt;
    static std::vector< std::vector<float> > *mu_staco_EFME_eta;
    static std::vector< std::vector<float> > *mu_staco_EFME_phi;
    static std::vector< std::vector<int> > *mu_staco_EFME_hasME;
    static std::vector<int>     *mu_staco_EFME_matched;
    static std::vector<float>   *mu_staco_L2CB_dr;
    static std::vector<float>   *mu_staco_L2CB_pt;
    static std::vector<float>   *mu_staco_L2CB_eta;
    static std::vector<float>   *mu_staco_L2CB_phi;
    static std::vector<float>   *mu_staco_L2CB_id_pt;
    static std::vector<float>   *mu_staco_L2CB_ms_pt;
    static std::vector<int>     *mu_staco_L2CB_nPixHits;
    static std::vector<int>     *mu_staco_L2CB_nSCTHits;
    static std::vector<int>     *mu_staco_L2CB_nTRTHits;
    static std::vector<int>     *mu_staco_L2CB_nTRTHighTHits;
    static std::vector<int>     *mu_staco_L2CB_matched;
    static std::vector<float>   *mu_staco_L1_dr;
    static std::vector<float>   *mu_staco_L1_pt;
    static std::vector<float>   *mu_staco_L1_eta;
    static std::vector<float>   *mu_staco_L1_phi;
    static std::vector<short>   *mu_staco_L1_thrNumber;
    static std::vector<short>   *mu_staco_L1_RoINumber;
    static std::vector<short>   *mu_staco_L1_sectorAddress;
    static std::vector<int>     *mu_staco_L1_firstCandidate;
    static std::vector<int>     *mu_staco_L1_moreCandInRoI;
    static std::vector<int>     *mu_staco_L1_moreCandInSector;
    static std::vector<short>   *mu_staco_L1_source;
    static std::vector<short>   *mu_staco_L1_hemisphere;
    static std::vector<short>   *mu_staco_L1_charge;
    static std::vector<int>     *mu_staco_L1_vetoed;
    static std::vector<int>     *mu_staco_L1_matched;
    static Bool_t          EF_2g10_loose;
    static Bool_t          EF_2g5_loose;
    static Bool_t          EF_2g7_loose;
    static Bool_t          EF_2mu2_MSonly_EFFS_L1ZDC;
    static Bool_t          EF_2mu4T_MSonly;
    static Bool_t          EF_2mu4_MSonly;
    static Bool_t          EF_2mu4_MSonly_EFFS_L1MU0;
    static Bool_t          EF_2mu4_MSonly_EFFS_L1ZDC;
    static Bool_t          EF_2mu6T_MSonly;
    static Bool_t          EF_2mu6_MSonly;
    static Bool_t          EF_L1ItemStreamer_L1_2MU0;
    static Bool_t          EF_L1ItemStreamer_L1_2MU0_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_2MU0_MU6;
    static Bool_t          EF_L1ItemStreamer_L1_2MU0_MV;
    static Bool_t          EF_L1ItemStreamer_L1_2MU0_NL;
    static Bool_t          EF_L1ItemStreamer_L1_2MU0_NZ;
    static Bool_t          EF_L1ItemStreamer_L1_2MU11;
    static Bool_t          EF_L1ItemStreamer_L1_2MU4;
    static Bool_t          EF_L1ItemStreamer_L1_2MU4_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_2MU6;
    static Bool_t          EF_L1ItemStreamer_L1_2MU6_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;
    static Bool_t          EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;
    static Bool_t          EF_L1ItemStreamer_L1_EM10;
    static Bool_t          EF_L1ItemStreamer_L1_EM12;
    static Bool_t          EF_L1ItemStreamer_L1_EM14;
    static Bool_t          EF_L1ItemStreamer_L1_EM16;
    static Bool_t          EF_L1ItemStreamer_L1_EM3;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_FIRSTEMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_MV_VTE50;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_NL;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_NZ;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_TE50;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_UNPAIRED_ISO;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO;
    static Bool_t          EF_L1ItemStreamer_L1_EM3_VTE50;
    static Bool_t          EF_L1ItemStreamer_L1_EM4;
    static Bool_t          EF_L1ItemStreamer_L1_EM5;
    static Bool_t          EF_L1ItemStreamer_L1_EM5_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_EM7;
    static Bool_t          EF_L1ItemStreamer_L1_MU0;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_MV;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_MV_VTE50;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_NL;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_NZ;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_TE50;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;
    static Bool_t          EF_L1ItemStreamer_L1_MU0_VTE50;
    static Bool_t          EF_L1ItemStreamer_L1_MU11;
    static Bool_t          EF_L1ItemStreamer_L1_MU11_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_MU15;
    static Bool_t          EF_L1ItemStreamer_L1_MU20;
    static Bool_t          EF_L1ItemStreamer_L1_MU4;
    static Bool_t          EF_L1ItemStreamer_L1_MU4_EMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY;
    static Bool_t          EF_L1ItemStreamer_L1_MU4_MV_VTE50;
    static Bool_t          EF_L1ItemStreamer_L1_MU4_TE50;
    static Bool_t          EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;
    static Bool_t          EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;
    static Bool_t          EF_L1ItemStreamer_L1_MU4_VTE50;
    static Bool_t          EF_L1ItemStreamer_L1_MU6;
    static Bool_t          EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY;
    static Bool_t          EF_SeededStreamerL1Calo;
    static Bool_t          EF_g10_loose;
    static Bool_t          EF_g10_loose_larcalib;
    static Bool_t          EF_g5_NoCut_cosmic;
    static Bool_t          EF_g5_loose;
    static Bool_t          EF_g5_loose_larcalib;
    static Bool_t          EF_g7_loose;
    static Bool_t          EF_mu10T_MSonly;
    static Bool_t          EF_mu10_MSonly;
    static Bool_t          EF_mu10_MSonly_EFFS_L1ZDC;
    static Bool_t          EF_mu10_MSonly_EFFS_L1TE10;
    static Bool_t          EF_mu10_MSonly_EFFS_L1TE20;
    static Bool_t          EF_mu13T_MSonly;
    static Bool_t          EF_mu13_MSonly;
    static Bool_t          EF_mu13_MSonly_EFFS_L1ZDC;
    static Bool_t          EF_mu4T;
    static Bool_t          EF_mu4T_IDTrkNoCut;
    static Bool_t          EF_mu4T_MSonly;
    static Bool_t          EF_mu4T_MSonly_L1TE50;
    static Bool_t          EF_mu4T_MSonly_barrel;
    static Bool_t          EF_mu4T_MSonly_cosmic;
    static Bool_t          EF_mu4T_cosmic;
    static Bool_t          EF_mu4_L1VTE50;
    static Bool_t          EF_mu4_MSonly;
    static Bool_t          EF_mu4_MSonly_EFFS_L1ZDC;
    static Bool_t          EF_mu4_MSonly_L1TE50;
    static Bool_t          EF_mu4_MSonly_barrel;
    static Bool_t          EF_mu4_MSonly_barrel_EFFS_L1ZDC;
    static Bool_t          EF_mu4_MSonly_cosmic;
    static Bool_t          EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;
    static Bool_t          EF_mu4_MSonly_j15_a2hi_EFFS_matched;
    static Bool_t          EF_mu4_cosmic;
    static Bool_t          EF_mu4_mu2_MSonly_EFFS_L1ZDC;
    static Bool_t          EF_mu6T_MSonly;
    static Bool_t          EF_mu6_MSonly;
    static Bool_t          EF_mu6_MSonly_L1TE50;
    static Bool_t          EF_mu6_L1VTE50;

    //////////////////////////////
    //pPb EF trigger not in 2011//
    /////////////////////////////
    static Bool_t          EF_mu4_MSonly_EFFS_L1TE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50;
    static Bool_t          EF_mu13_MSonly_EFFS_L1TE20;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20;
    static Bool_t          EF_mu13_MSonly_EFFS_L1TE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50;
    static Bool_t          EF_mu10_MSonly_EFFS_L1TE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50;
    static Bool_t          EF_mu13_MSonly_EFFS_L1TE10;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10;

    ////////////////////////////
    static Bool_t          L1_2EM3;
    static Bool_t          L1_2EM3_NL;
    static Bool_t          L1_2EM3_NZ;
    static Bool_t          L1_2EM5;
    static Bool_t          L1_2MU0;
    static Bool_t          L1_2MU0_EMPTY;
    static Bool_t          L1_2MU0_MU6;
    static Bool_t          L1_2MU0_MV;
    static Bool_t          L1_2MU0_NL;
    static Bool_t          L1_2MU0_NZ;
    static Bool_t          L1_2MU11;
    static Bool_t          L1_2MU20;
    static Bool_t          L1_2MU4;
    static Bool_t          L1_2MU4_EMPTY;
    static Bool_t          L1_2MU6;
    static Bool_t          L1_2MU6_EMPTY;
    static Bool_t          L1_2MU6_FIRSTEMPTY;
    static Bool_t          L1_2MU6_UNPAIRED_ISO;
    static Bool_t          L1_2MU6_UNPAIRED_NONISO;
    static Bool_t          L1_EM10;
    static Bool_t          L1_EM12;
    static Bool_t          L1_EM14;
    static Bool_t          L1_EM16;
    static Bool_t          L1_EM3;
    static Bool_t          L1_EM3_EMPTY;
    static Bool_t          L1_EM3_FIRSTEMPTY;
    static Bool_t          L1_EM3_MV_VTE50;
    static Bool_t          L1_EM3_NL;
    static Bool_t          L1_EM3_NZ;
    static Bool_t          L1_EM3_TE50;
    static Bool_t          L1_EM3_UNPAIRED_ISO;
    static Bool_t          L1_EM3_UNPAIRED_NONISO;
    static Bool_t          L1_EM3_VTE50;
    static Bool_t          L1_EM4;
    static Bool_t          L1_EM5;
    static Bool_t          L1_EM5_EMPTY;
    static Bool_t          L1_EM7;
    static Bool_t          L1_MU0;
    static Bool_t          L1_MU0_EMPTY;
    static Bool_t          L1_MU0_FIRSTEMPTY;
    static Bool_t          L1_MU0_MV;
    static Bool_t          L1_MU0_MV_VTE50;
    static Bool_t          L1_MU0_NL;
    static Bool_t          L1_MU0_NZ;
    static Bool_t          L1_MU0_TE50;
    static Bool_t          L1_MU0_UNPAIRED_ISO;
    static Bool_t          L1_MU0_UNPAIRED_NONISO;
    static Bool_t          L1_MU0_VTE50;
    static Bool_t          L1_MU11;
    static Bool_t          L1_MU11_EMPTY;
    static Bool_t          L1_MU15;
    static Bool_t          L1_MU20;
    static Bool_t          L1_MU4;
    static Bool_t          L1_MU4_EMPTY;
    static Bool_t          L1_MU4_FIRSTEMPTY;
    static Bool_t          L1_MU4_MV_VTE50;
    static Bool_t          L1_MU4_TE50;
    static Bool_t          L1_MU4_UNPAIRED_ISO;
    static Bool_t          L1_MU4_UNPAIRED_NONISO;
    static Bool_t          L1_MU4_VTE50;
    static Bool_t          L1_MU6;
    static Bool_t          L1_MU6_FIRSTEMPTY;
    
    //////////////////////////////////////////////
    //pPb Triggers 2012 not included in 2011 run//
    /////////////////////////////////////////////
    static Bool_t	   L1_TE10;	  
    static Bool_t	   L1_TE50;
    static Bool_t	   L1_TE20;
    static Bool_t          L1_ZDC_A_C;
    static Bool_t          L1_MBTS_2;
    static Bool_t          L1_MBTS_1_1;
    static Bool_t          L1_MBTS_2_2;
    static Bool_t          L1_RD0_FILLED; 
    static Bool_t          L1_RD1_FILLED;
    static Bool_t          L1_TE0;
    ////////////////////////////////////
    static Bool_t          L2_2g10_loose;
    static Bool_t          L2_2g5_loose;
    static Bool_t          L2_2g7_loose;
    static Bool_t          L2_2mu2_MSonly_EFFS_L1ZDC;
    static Bool_t          L2_2mu4T_MSonly;
    static Bool_t          L2_2mu4_MSonly;
    static Bool_t          L2_2mu4_MSonly_EFFS_L1ZDC;
    static Bool_t          L2_2mu6T_MSonly;
    static Bool_t          L2_2mu6_MSonly;
    static Bool_t          L2_L1ItemStreamer_L1_2EM3;
    static Bool_t          L2_L1ItemStreamer_L1_2EM3_NL;
    static Bool_t          L2_L1ItemStreamer_L1_2EM3_NZ;
    static Bool_t          L2_L1ItemStreamer_L1_2EM5;
    static Bool_t          L2_L1ItemStreamer_L1_2MU0;
    static Bool_t          L2_L1ItemStreamer_L1_2MU0_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_2MU0_MU6;
    static Bool_t          L2_L1ItemStreamer_L1_2MU0_MV;
    static Bool_t          L2_L1ItemStreamer_L1_2MU0_NL;
    static Bool_t          L2_L1ItemStreamer_L1_2MU0_NZ;
    static Bool_t          L2_L1ItemStreamer_L1_2MU11;
    static Bool_t          L2_L1ItemStreamer_L1_2MU4;
    static Bool_t          L2_L1ItemStreamer_L1_2MU4_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_2MU6;
    static Bool_t          L2_L1ItemStreamer_L1_2MU6_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;
    static Bool_t          L2_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;
    static Bool_t          L2_L1ItemStreamer_L1_EM10;
    static Bool_t          L2_L1ItemStreamer_L1_EM12;
    static Bool_t          L2_L1ItemStreamer_L1_EM14;
    static Bool_t          L2_L1ItemStreamer_L1_EM16;
    static Bool_t          L2_L1ItemStreamer_L1_EM3;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_FIRSTEMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_MV_VTE50;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_NL;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_NZ;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_TE50;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_UNPAIRED_ISO;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO;
    static Bool_t          L2_L1ItemStreamer_L1_EM3_VTE50;
    static Bool_t          L2_L1ItemStreamer_L1_EM4;
    static Bool_t          L2_L1ItemStreamer_L1_EM5;
    static Bool_t          L2_L1ItemStreamer_L1_EM5_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_EM7;
    static Bool_t          L2_L1ItemStreamer_L1_MU0;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_FIRSTEMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_MV;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_MV_VTE50;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_NL;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_NZ;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_TE50;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;
    static Bool_t          L2_L1ItemStreamer_L1_MU0_VTE50;
    static Bool_t          L2_L1ItemStreamer_L1_MU11;
    static Bool_t          L2_L1ItemStreamer_L1_MU11_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_MU15;
    static Bool_t          L2_L1ItemStreamer_L1_MU20;
    static Bool_t          L2_L1ItemStreamer_L1_MU4;
    static Bool_t          L2_L1ItemStreamer_L1_MU4_EMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_MU4_FIRSTEMPTY;
    static Bool_t          L2_L1ItemStreamer_L1_MU4_MV_VTE50;
    static Bool_t          L2_L1ItemStreamer_L1_MU4_TE50;
    static Bool_t          L2_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;
    static Bool_t          L2_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;
    static Bool_t          L2_L1ItemStreamer_L1_MU4_VTE50;
    static Bool_t          L2_L1ItemStreamer_L1_MU6;
    static Bool_t          L2_L1ItemStreamer_L1_MU6_FIRSTEMPTY;
    static Bool_t          L2_SeededStreamerL1Calo;
    static Bool_t          L2_em3_empty_larcalib;
    static Bool_t          L2_em5_empty_larcalib;
    static Bool_t          L2_g10_loose;
    static Bool_t          L2_g5_NoCut_cosmic;
    static Bool_t          L2_g5_loose;
    static Bool_t          L2_g7_loose;
    static Bool_t          L2_mu10T_MSonly;
    static Bool_t          L2_mu10_MSonly;
    static Bool_t          L2_mu10_MSonly_EFFS_L1ZDC;
    static Bool_t          L2_mu13T_MSonly;
    static Bool_t          L2_mu13_MSonly;
    static Bool_t          L2_mu13_MSonly_EFFS_L1ZDC;
    static Bool_t          L2_mu4;
    static Bool_t          L2_mu4T;
    static Bool_t          L2_mu4T_IDTrkNoCut;
    static Bool_t          L2_mu4T_MSonly;
    static Bool_t          L2_mu4T_MSonly_L1TE50;
    static Bool_t          L2_mu4T_MSonly_barrel;
    static Bool_t          L2_mu4T_MSonly_cosmic;
    static Bool_t          L2_mu4T_cal;
    static Bool_t          L2_mu4T_cosmic;
    static Bool_t          L2_mu4_IDTrkNoCut;
    static Bool_t          L2_mu4_L1VTE50;
    static Bool_t          L2_mu4_MSonly;
    static Bool_t          L2_mu4_MSonly_EFFS_L1ZDC;
    static Bool_t          L2_mu4_MSonly_L1TE50;
    static Bool_t          L2_mu4_MSonly_barrel;
    static Bool_t          L2_mu4_MSonly_barrel_EFFS_L1ZDC;
    static Bool_t          L2_mu4_MSonly_cosmic;
    static Bool_t          L2_mu4_cal_empty;
    static Bool_t          L2_mu4_cosmic;
    static Bool_t          L2_mu4_mu2_MSonly_EFFS_L1ZDC;
    static Bool_t          L2_mu6T_MSonly;
    static Bool_t          L2_mu6_MSonly;
    static Bool_t          L2_mu6_cal;
    static Int_t           mu_muid_n;
    static std::vector<float>   *mu_muid_E;
    static std::vector<float>   *mu_muid_pt;
    static std::vector<float>   *mu_muid_m;
    static std::vector<float>   *mu_muid_eta;
    static std::vector<float>   *mu_muid_phi;
    static std::vector<float>   *mu_muid_px;
    static std::vector<float>   *mu_muid_py;
    static std::vector<float>   *mu_muid_pz;
    static std::vector<float>   *mu_muid_charge;
    static std::vector<unsigned short> *mu_muid_allauthor;
    static std::vector<int>     *mu_muid_author;
    static std::vector<float>   *mu_muid_beta;
    static std::vector<float>   *mu_muid_isMuonLikelihood;
    static std::vector<float>   *mu_muid_matchchi2;
    static std::vector<int>     *mu_muid_matchndof;
    static std::vector<float>   *mu_muid_etcone20;
    static std::vector<float>   *mu_muid_etcone30;
    static std::vector<float>   *mu_muid_etcone40;
    static std::vector<float>   *mu_muid_nucone20;
    static std::vector<float>   *mu_muid_nucone30;
    static std::vector<float>   *mu_muid_nucone40;
    static std::vector<float>   *mu_muid_ptcone20;
    static std::vector<float>   *mu_muid_ptcone30;
    static std::vector<float>   *mu_muid_ptcone40;
    static std::vector<float>   *mu_muid_energyLossPar;
    static std::vector<float>   *mu_muid_energyLossErr;
    static std::vector<float>   *mu_muid_etCore;
    static std::vector<float>   *mu_muid_energyLossType;
    static std::vector<unsigned short> *mu_muid_caloMuonIdTag;
    static std::vector<double>  *mu_muid_caloLRLikelihood;
    static std::vector<int>     *mu_muid_bestMatch;
    static std::vector<int>     *mu_muid_isStandAloneMuon;
    static std::vector<int>     *mu_muid_isCombinedMuon;
    static std::vector<int>     *mu_muid_isLowPtReconstructedMuon;
    static std::vector<int>     *mu_muid_isSegmentTaggedMuon;
    static std::vector<int>     *mu_muid_isCaloMuonId;
    static std::vector<int>     *mu_muid_alsoFoundByLowPt;
    static std::vector<int>     *mu_muid_alsoFoundByCaloMuonId;
    static std::vector<int>     *mu_muid_loose;
    static std::vector<int>     *mu_muid_medium;
    static std::vector<int>     *mu_muid_tight;
    static std::vector<float>   *mu_muid_d0_exPV;
    static std::vector<float>   *mu_muid_z0_exPV;
    static std::vector<float>   *mu_muid_phi_exPV;
    static std::vector<float>   *mu_muid_theta_exPV;
    static std::vector<float>   *mu_muid_qoverp_exPV;
    static std::vector<float>   *mu_muid_cb_d0_exPV;
    static std::vector<float>   *mu_muid_cb_z0_exPV;
    static std::vector<float>   *mu_muid_cb_phi_exPV;
    static std::vector<float>   *mu_muid_cb_theta_exPV;
    static std::vector<float>   *mu_muid_cb_qoverp_exPV;
    static std::vector<float>   *mu_muid_id_d0_exPV;
    static std::vector<float>   *mu_muid_id_z0_exPV;
    static std::vector<float>   *mu_muid_id_phi_exPV;
    static std::vector<float>   *mu_muid_id_theta_exPV;
    static std::vector<float>   *mu_muid_id_qoverp_exPV;
    static std::vector<float>   *mu_muid_me_d0_exPV;
    static std::vector<float>   *mu_muid_me_z0_exPV;
    static std::vector<float>   *mu_muid_me_phi_exPV;
    static std::vector<float>   *mu_muid_me_theta_exPV;
    static std::vector<float>   *mu_muid_me_qoverp_exPV;
    static std::vector<float>   *mu_muid_ie_d0_exPV;
    static std::vector<float>   *mu_muid_ie_z0_exPV;
    static std::vector<float>   *mu_muid_ie_phi_exPV;
    static std::vector<float>   *mu_muid_ie_theta_exPV;
    static std::vector<float>   *mu_muid_ie_qoverp_exPV;
    static std::vector< std::vector<int> > *mu_muid_SpaceTime_detID;
    static std::vector< std::vector<float> > *mu_muid_SpaceTime_t;
    static std::vector< std::vector<float> > *mu_muid_SpaceTime_tError;
    static std::vector< std::vector<float> > *mu_muid_SpaceTime_weight;
    static std::vector< std::vector<float> > *mu_muid_SpaceTime_x;
    static std::vector< std::vector<float> > *mu_muid_SpaceTime_y;
    static std::vector< std::vector<float> > *mu_muid_SpaceTime_z;
    static std::vector<float>   *mu_muid_cov_d0_exPV;
    static std::vector<float>   *mu_muid_cov_z0_exPV;
    static std::vector<float>   *mu_muid_cov_phi_exPV;
    static std::vector<float>   *mu_muid_cov_theta_exPV;
    static std::vector<float>   *mu_muid_cov_qoverp_exPV;
    static std::vector<float>   *mu_muid_cov_d0_z0_exPV;
    static std::vector<float>   *mu_muid_cov_d0_phi_exPV;
    static std::vector<float>   *mu_muid_cov_d0_theta_exPV;
    static std::vector<float>   *mu_muid_cov_d0_qoverp_exPV;
    static std::vector<float>   *mu_muid_cov_z0_phi_exPV;
    static std::vector<float>   *mu_muid_cov_z0_theta_exPV;
    static std::vector<float>   *mu_muid_cov_z0_qoverp_exPV;
    static std::vector<float>   *mu_muid_cov_phi_theta_exPV;
    static std::vector<float>   *mu_muid_cov_phi_qoverp_exPV;
    static std::vector<float>   *mu_muid_cov_theta_qoverp_exPV;
    static std::vector<float>   *mu_muid_id_cov_d0_exPV;
    static std::vector<float>   *mu_muid_id_cov_z0_exPV;
    static std::vector<float>   *mu_muid_id_cov_phi_exPV;
    static std::vector<float>   *mu_muid_id_cov_theta_exPV;
    static std::vector<float>   *mu_muid_id_cov_qoverp_exPV;
    static std::vector<float>   *mu_muid_me_cov_d0_exPV;
    static std::vector<float>   *mu_muid_me_cov_z0_exPV;
    static std::vector<float>   *mu_muid_me_cov_phi_exPV;
    static std::vector<float>   *mu_muid_me_cov_theta_exPV;
    static std::vector<float>   *mu_muid_me_cov_qoverp_exPV;
    static std::vector<float>   *mu_muid_ms_d0;
    static std::vector<float>   *mu_muid_ms_z0;
    static std::vector<float>   *mu_muid_ms_phi;
    static std::vector<float>   *mu_muid_ms_theta;
    static std::vector<float>   *mu_muid_ms_qoverp;
    static std::vector<float>   *mu_muid_id_d0;
    static std::vector<float>   *mu_muid_id_z0;
    static std::vector<float>   *mu_muid_id_phi;
    static std::vector<float>   *mu_muid_id_theta;
    static std::vector<float>   *mu_muid_id_qoverp;
    static std::vector<float>   *mu_muid_me_d0;
    static std::vector<float>   *mu_muid_me_z0;
    static std::vector<float>   *mu_muid_me_phi;
    static std::vector<float>   *mu_muid_me_theta;
    static std::vector<float>   *mu_muid_me_qoverp;
    static std::vector<float>   *mu_muid_ie_d0;
    static std::vector<float>   *mu_muid_ie_z0;
    static std::vector<float>   *mu_muid_ie_phi;
    static std::vector<float>   *mu_muid_ie_theta;
    static std::vector<float>   *mu_muid_ie_qoverp;
    static std::vector<int>     *mu_muid_nOutliersOnTrack;
    static std::vector<int>     *mu_muid_nBLHits;
    static std::vector<int>     *mu_muid_nPixHits;
    static std::vector<int>     *mu_muid_nSCTHits;
    static std::vector<int>     *mu_muid_nTRTHits;
    static std::vector<int>     *mu_muid_nTRTHighTHits;
    static std::vector<int>     *mu_muid_nBLSharedHits;
    static std::vector<int>     *mu_muid_nPixSharedHits;
    static std::vector<int>     *mu_muid_nPixHoles;
    static std::vector<int>     *mu_muid_nSCTSharedHits;
    static std::vector<int>     *mu_muid_nSCTHoles;
    static std::vector<int>     *mu_muid_nTRTOutliers;
    static std::vector<int>     *mu_muid_nTRTHighTOutliers;
    static std::vector<int>     *mu_muid_nGangedPixels;
    static std::vector<int>     *mu_muid_nPixelDeadSensors;
    static std::vector<int>     *mu_muid_nSCTDeadSensors;
    static std::vector<int>     *mu_muid_nTRTDeadStraws;
    static std::vector<int>     *mu_muid_expectBLayerHit;
    static std::vector<int>     *mu_muid_nMDTHits;
    static std::vector<int>     *mu_muid_nMDTHoles;
    static std::vector<int>     *mu_muid_nCSCEtaHits;
    static std::vector<int>     *mu_muid_nCSCEtaHoles;
    static std::vector<int>     *mu_muid_nCSCPhiHits;
    static std::vector<int>     *mu_muid_nCSCPhiHoles;
    static std::vector<int>     *mu_muid_nRPCEtaHits;
    static std::vector<int>     *mu_muid_nRPCEtaHoles;
    static std::vector<int>     *mu_muid_nRPCPhiHits;
    static std::vector<int>     *mu_muid_nRPCPhiHoles;
    static std::vector<int>     *mu_muid_nTGCEtaHits;
    static std::vector<int>     *mu_muid_nTGCEtaHoles;
    static std::vector<int>     *mu_muid_nTGCPhiHits;
    static std::vector<int>     *mu_muid_nTGCPhiHoles;
    static std::vector<int>     *mu_muid_nMDTBIHits;
    static std::vector<int>     *mu_muid_nMDTBMHits;
    static std::vector<int>     *mu_muid_nMDTBOHits;
    static std::vector<int>     *mu_muid_nMDTBEEHits;
    static std::vector<int>     *mu_muid_nMDTBIS78Hits;
    static std::vector<int>     *mu_muid_nMDTEIHits;
    static std::vector<int>     *mu_muid_nMDTEMHits;
    static std::vector<int>     *mu_muid_nMDTEOHits;
    static std::vector<int>     *mu_muid_nMDTEEHits;
    static std::vector<int>     *mu_muid_nRPCLayer1EtaHits;
    static std::vector<int>     *mu_muid_nRPCLayer2EtaHits;
    static std::vector<int>     *mu_muid_nRPCLayer3EtaHits;
    static std::vector<int>     *mu_muid_nRPCLayer1PhiHits;
    static std::vector<int>     *mu_muid_nRPCLayer2PhiHits;
    static std::vector<int>     *mu_muid_nRPCLayer3PhiHits;
    static std::vector<int>     *mu_muid_nTGCLayer1EtaHits;
    static std::vector<int>     *mu_muid_nTGCLayer2EtaHits;
    static std::vector<int>     *mu_muid_nTGCLayer3EtaHits;
    static std::vector<int>     *mu_muid_nTGCLayer4EtaHits;
    static std::vector<int>     *mu_muid_nTGCLayer1PhiHits;
    static std::vector<int>     *mu_muid_nTGCLayer2PhiHits;
    static std::vector<int>     *mu_muid_nTGCLayer3PhiHits;
    static std::vector<int>     *mu_muid_nTGCLayer4PhiHits;
    static std::vector<int>     *mu_muid_barrelSectors;
    static std::vector<int>     *mu_muid_endcapSectors;
    static std::vector<float>   *mu_muid_trackd0;
    static std::vector<float>   *mu_muid_trackz0;
    static std::vector<float>   *mu_muid_trackphi;
    static std::vector<float>   *mu_muid_tracktheta;
    static std::vector<float>   *mu_muid_trackqoverp;
    static std::vector<float>   *mu_muid_trackcov_d0;
    static std::vector<float>   *mu_muid_trackcov_z0;
    static std::vector<float>   *mu_muid_trackcov_phi;
    static std::vector<float>   *mu_muid_trackcov_theta;
    static std::vector<float>   *mu_muid_trackcov_qoverp;
    static std::vector<float>   *mu_muid_trackcov_d0_z0;
    static std::vector<float>   *mu_muid_trackcov_d0_phi;
    static std::vector<float>   *mu_muid_trackcov_d0_theta;
    static std::vector<float>   *mu_muid_trackcov_d0_qoverp;
    static std::vector<float>   *mu_muid_trackcov_z0_phi;
    static std::vector<float>   *mu_muid_trackcov_z0_theta;
    static std::vector<float>   *mu_muid_trackcov_z0_qoverp;
    static std::vector<float>   *mu_muid_trackcov_phi_theta;
    static std::vector<float>   *mu_muid_trackcov_phi_qoverp;
    static std::vector<float>   *mu_muid_trackcov_theta_qoverp;
    static std::vector<float>   *mu_muid_trackfitchi2;
    static std::vector<int>     *mu_muid_trackfitndof;
    static std::vector<int>     *mu_muid_hastrack;
    static std::vector<float>   *mu_muid_trackd0beam;
    static std::vector<float>   *mu_muid_trackz0beam;
    static std::vector<float>   *mu_muid_tracksigd0beam;
    static std::vector<float>   *mu_muid_tracksigz0beam;
    static std::vector<float>   *mu_muid_trackd0pv;
    static std::vector<float>   *mu_muid_trackz0pv;
    static std::vector<float>   *mu_muid_tracksigd0pv;
    static std::vector<float>   *mu_muid_tracksigz0pv;
    static std::vector<float>   *mu_muid_trackIPEstimate_d0_biasedpvunbiased;
    static std::vector<float>   *mu_muid_trackIPEstimate_z0_biasedpvunbiased;
    static std::vector<float>   *mu_muid_trackIPEstimate_sigd0_biasedpvunbiased;
    static std::vector<float>   *mu_muid_trackIPEstimate_sigz0_biasedpvunbiased;
    static std::vector<float>   *mu_muid_trackIPEstimate_d0_unbiasedpvunbiased;
    static std::vector<float>   *mu_muid_trackIPEstimate_z0_unbiasedpvunbiased;
    static std::vector<float>   *mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased;
    static std::vector<float>   *mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased;
    static std::vector<float>   *mu_muid_trackd0pvunbiased;
    static std::vector<float>   *mu_muid_trackz0pvunbiased;
    static std::vector<float>   *mu_muid_tracksigd0pvunbiased;
    static std::vector<float>   *mu_muid_tracksigz0pvunbiased;
    static std::vector<float>   *mu_muid_EFCB_dr;
    static std::vector<int>     *mu_muid_EFCB_n;
    static std::vector< std::vector<int> > *mu_muid_EFCB_MuonType;
    static std::vector< std::vector<float> > *mu_muid_EFCB_pt;
    static std::vector< std::vector<float> > *mu_muid_EFCB_eta;
    static std::vector< std::vector<float> > *mu_muid_EFCB_phi;
    static std::vector< std::vector<int> > *mu_muid_EFCB_hasCB;
    static std::vector<int>     *mu_muid_EFCB_matched;
    static std::vector<float>   *mu_muid_EFMG_dr;
    static std::vector<int>     *mu_muid_EFMG_n;
    static std::vector< std::vector<int> > *mu_muid_EFMG_MuonType;
    static std::vector< std::vector<float> > *mu_muid_EFMG_pt;
    static std::vector< std::vector<float> > *mu_muid_EFMG_eta;
    static std::vector< std::vector<float> > *mu_muid_EFMG_phi;
    static std::vector< std::vector<int> > *mu_muid_EFMG_hasMG;
    static std::vector<int>     *mu_muid_EFMG_matched;
    static std::vector<float>   *mu_muid_EFME_dr;
    static std::vector<int>     *mu_muid_EFME_n;
    static std::vector< std::vector<int> > *mu_muid_EFME_MuonType;
    static std::vector< std::vector<float> > *mu_muid_EFME_pt;
    static std::vector< std::vector<float> > *mu_muid_EFME_eta;
    static std::vector< std::vector<float> > *mu_muid_EFME_phi;
    static std::vector< std::vector<int> > *mu_muid_EFME_hasME;
    static std::vector<int>     *mu_muid_EFME_matched;
    static std::vector<float>   *mu_muid_L2CB_dr;
    static std::vector<float>   *mu_muid_L2CB_pt;
    static std::vector<float>   *mu_muid_L2CB_eta;
    static std::vector<float>   *mu_muid_L2CB_phi;
    static std::vector<float>   *mu_muid_L2CB_id_pt;
    static std::vector<float>   *mu_muid_L2CB_ms_pt;
    static std::vector<int>     *mu_muid_L2CB_nPixHits;
    static std::vector<int>     *mu_muid_L2CB_nSCTHits;
    static std::vector<int>     *mu_muid_L2CB_nTRTHits;
    static std::vector<int>     *mu_muid_L2CB_nTRTHighTHits;
    static std::vector<int>     *mu_muid_L2CB_matched;
    static std::vector<float>   *mu_muid_L1_dr;
    static std::vector<float>   *mu_muid_L1_pt;
    static std::vector<float>   *mu_muid_L1_eta;
    static std::vector<float>   *mu_muid_L1_phi;
    static std::vector<short>   *mu_muid_L1_thrNumber;
    static std::vector<short>   *mu_muid_L1_RoINumber;
    static std::vector<short>   *mu_muid_L1_sectorAddress;
    static std::vector<int>     *mu_muid_L1_firstCandidate;
    static std::vector<int>     *mu_muid_L1_moreCandInRoI;
    static std::vector<int>     *mu_muid_L1_moreCandInSector;
    static std::vector<short>   *mu_muid_L1_source;
    static std::vector<short>   *mu_muid_L1_hemisphere;
    static std::vector<short>   *mu_muid_L1_charge;
    static std::vector<int>     *mu_muid_L1_vetoed;
    static std::vector<int>     *mu_muid_L1_matched;
    static Int_t           muid_n;
    static std::vector<int>     *muid_nScatters;
    static std::vector<double>  *muid_scatSignificance;
    static std::vector<double>  *muid_neighbourSignificance;
    static std::vector<double>  *muid_eta;
    static UInt_t          trig_DB_SMK;
    static UInt_t          trig_DB_L1PSK;
    static UInt_t          trig_DB_HLTPSK;
    static std::vector<unsigned int> *trig_L1_TAV;
    static std::vector<short>   *trig_L2_passedPhysics;
    static std::vector<short>   *trig_EF_passedPhysics;
    static std::vector<unsigned int> *trig_L1_TBP;
    static std::vector<unsigned int> *trig_L1_TAP;
    static std::vector<short>   *trig_L2_passedRaw;
    static std::vector<short>   *trig_EF_passedRaw;
    static Bool_t          trig_L2_truncated;
    static Bool_t          trig_EF_truncated;
    static std::vector<short>   *trig_L2_resurrected;
    static std::vector<short>   *trig_EF_resurrected;
    static std::vector<short>   *trig_L2_passedThrough;
    static std::vector<short>   *trig_EF_passedThrough;
    static std::vector<short>   *trig_L2_wasPrescaled;
    static std::vector<short>   *trig_L2_wasResurrected;
    static std::vector<short>   *trig_EF_wasPrescaled;
    static std::vector<short>   *trig_EF_wasResurrected;
    static Bool_t          L1_2J15;
    static Bool_t          L1_J10;
    static Bool_t          L1_J15;
    static Bool_t          L1_J30;
    static Bool_t          L1_J75;
    static Int_t           trig_L1_jet_n;
    static std::vector<float>   *trig_L1_jet_eta;
    static std::vector<float>   *trig_L1_jet_phi;
    static std::vector< std::vector<std::string> > *trig_L1_jet_thrNames;
    static std::vector< std::vector<float> > *trig_L1_jet_thrValues;
    static std::vector<unsigned int> *trig_L1_jet_thrPattern;
    static std::vector<float>   *trig_L1_jet_et4x4;
    static std::vector<float>   *trig_L1_jet_et6x6;
    static std::vector<float>   *trig_L1_jet_et8x8;
    static std::vector<unsigned int> *trig_L1_jet_RoIWord;
    static Int_t           trig_L1_emtau_n;
    static std::vector<float>   *trig_L1_emtau_eta;
    static std::vector<float>   *trig_L1_emtau_phi;
    static std::vector< std::vector<std::string> > *trig_L1_emtau_thrNames;
    static std::vector< std::vector<float> > *trig_L1_emtau_thrValues;
    static std::vector<float>   *trig_L1_emtau_core;
    static std::vector<float>   *trig_L1_emtau_EMClus;
    static std::vector<float>   *trig_L1_emtau_tauClus;
    static std::vector<float>   *trig_L1_emtau_EMIsol;
    static std::vector<float>   *trig_L1_emtau_hadIsol;
    static std::vector<float>   *trig_L1_emtau_hadCore;
    static std::vector<unsigned int> *trig_L1_emtau_thrPattern;
    static std::vector<int>     *trig_L1_emtau_L1_2EM3;
    static std::vector<int>     *trig_L1_emtau_L1_2EM3_NL;
    static std::vector<int>     *trig_L1_emtau_L1_2EM3_NZ;
    static std::vector<int>     *trig_L1_emtau_L1_2EM5;
    static std::vector<int>     *trig_L1_emtau_L1_EM10;
    static std::vector<int>     *trig_L1_emtau_L1_EM12;
    static std::vector<int>     *trig_L1_emtau_L1_EM14;
    static std::vector<int>     *trig_L1_emtau_L1_EM16;
    static std::vector<int>     *trig_L1_emtau_L1_EM3;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_EMPTY;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_FIRSTEMPTY;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_MV_VTE50;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_NL;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_NZ;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_TE50;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_UNPAIRED_ISO;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_UNPAIRED_NONISO;
    static std::vector<int>     *trig_L1_emtau_L1_EM3_VTE50;
    static std::vector<int>     *trig_L1_emtau_L1_EM4;
    static std::vector<int>     *trig_L1_emtau_L1_EM5;
    static std::vector<int>     *trig_L1_emtau_L1_EM5_EMPTY;
    static std::vector<int>     *trig_L1_emtau_L1_EM7;
    static std::vector<unsigned int> *trig_L1_emtau_RoIWord;
    static Int_t           trig_EF_jet_n;
    static std::vector<float>   *trig_EF_jet_E;
    static std::vector<float>   *trig_EF_jet_pt;
    static std::vector<float>   *trig_EF_jet_m;
    static std::vector<float>   *trig_EF_jet_eta;
    static std::vector<float>   *trig_EF_jet_phi;
    static std::vector<int>     *trig_EF_jet_a4;
    static std::vector<int>     *trig_EF_jet_a2;
    static std::vector<int>     *trig_EF_jet_a4hi;
    static std::vector<int>     *trig_EF_jet_a2hi;
    static std::vector<unsigned int> *trig_EF_jet_RoIword;
    static std::vector<int>     *trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1J10;
    static std::vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10;
    static std::vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20;
    static std::vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1J10;
    static std::vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10;
    static std::vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20;
    static std::vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1J10;
    static std::vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10;
    static std::vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20;
    static std::vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_jet_EF_j75_a4hi_EFFS_L1ZDC;
    static std::vector<std::string>  *trig_L1_esum_thrNames;
    static Float_t         trig_L1_esum_ExMiss;
    static Float_t         trig_L1_esum_EyMiss;
    static Float_t         trig_L1_esum_energyT;
    static Bool_t          trig_L1_esum_overflowX;
    static Bool_t          trig_L1_esum_overflowY;
    static Bool_t          trig_L1_esum_overflowT;
    static UInt_t          trig_L1_esum_RoIWord0;
    static UInt_t          trig_L1_esum_RoIWord1;
    static UInt_t          trig_L1_esum_RoIWord2;
    static Float_t         trig_EF_met_MEx;
    static Float_t         trig_EF_met_MEy;
    static Float_t         trig_EF_met_MEz;
    static Float_t         trig_EF_met_sumEt;
    static Float_t         trig_EF_met_sumE;
    static Int_t           trig_EF_met_flag;
    static std::vector<std::string>  *trig_EF_met_nameOfComponent;
    static std::vector<float>   *trig_EF_met_MExComponent;
    static std::vector<float>   *trig_EF_met_MEyComponent;
    static std::vector<float>   *trig_EF_met_MEzComponent;
    static std::vector<float>   *trig_EF_met_sumEtComponent;
    static std::vector<float>   *trig_EF_met_sumEComponent;
    static std::vector<float>   *trig_EF_met_componentCalib0;
    static std::vector<float>   *trig_EF_met_componentCalib1;
    static std::vector<short>   *trig_EF_met_sumOfSigns;
    static std::vector<unsigned short> *trig_EF_met_usedChannels;
    static std::vector<short>   *trig_EF_met_status;
    static Int_t           trig_EF_trigmuonef_n;
    static std::vector<int>     *trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_trigmuonef_EF_2mu4T_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0;
    static std::vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_trigmuonef_EF_2mu6T_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_2mu6_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MU6;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MV;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NL;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NZ;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU11;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4_EMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_EMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_EMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NL;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NZ;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_TE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_VTE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11_EMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU15;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU20;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_EMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_MV_VTE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_TE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_VTE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6;
    static std::vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu10T_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu13T_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4T;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly_barrel;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4T_cosmic;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_L1VTE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_barrel;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_cosmic;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_cosmic;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu6T_MSonly;
    static std::vector<int>     *trig_EF_trigmuonef_EF_mu6_MSonly;
//    static std::vector<int>     *trig_EF_trigmuonef_EF_mu6_L1VTE50 ;
//    static std::vector<int>     *trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50 ;
    static std::vector<int>     *trig_EF_trigmuonef_RoINum;
    static std::vector<int>     *trig_EF_trigmuonef_NSegments;
    static std::vector<int>     *trig_EF_trigmuonef_NMdtHits;
    static std::vector<int>     *trig_EF_trigmuonef_NRpcHits;
    static std::vector<int>     *trig_EF_trigmuonef_NTgcHits;
    static std::vector<int>     *trig_EF_trigmuonef_NCscHits;
    static std::vector<float>   *trig_EF_trigmuonef_EtaPreviousLevel;
    static std::vector<float>   *trig_EF_trigmuonef_PhiPreviousLevel;
    static std::vector<int>     *trig_EF_trigmuonef_track_n;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MuonType;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_pt;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_eta;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_phi;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_charge;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_d0;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_z0;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_chi2;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_chi2prob;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_posX;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_posY;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_MS_posZ;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_NRpcHitsPhi;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_NTgcHitsPhi;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_NCscHitsPhi;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_NRpcHitsEta;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_NTgcHitsEta;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_NCscHitsEta;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_NMdtHits;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_MS_hasMS;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_pt;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_eta;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_phi;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_charge;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_d0;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_z0;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_chi2;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_chi2prob;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_posX;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_posY;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_SA_posZ;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_SA_hasSA;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_pt;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_eta;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_phi;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_charge;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_d0;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_z0;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_chi2;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_chi2prob;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_posX;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_posY;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_posZ;
    static std::vector< std::vector<float> > *trig_EF_trigmuonef_track_CB_matchChi2;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_CB_NIdSctHits;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_CB_NIdPixelHits;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_CB_NTrtHits;
    static std::vector< std::vector<int> > *trig_EF_trigmuonef_track_CB_hasCB;
    static Int_t           bcmRDO_n;
    static std::vector< std::vector<int> > *bcmRDO_channel;
    static std::vector<int>     *bcmRDO_nhits;
    static std::vector< std::vector<int> > *bcmRDO_pulse1pos;
    static std::vector< std::vector<int> > *bcmRDO_pulse1width;
    static std::vector< std::vector<int> > *bcmRDO_pulse2pos;
    static std::vector< std::vector<int> > *bcmRDO_pulse2width;
    static std::vector< std::vector<int> > *bcmRDO_lvl1a;
    static std::vector< std::vector<int> > *bcmRDO_bcid;
    static std::vector< std::vector<int> > *bcmRDO_lvl1id;
    static UInt_t          ctpRDO_nBC;
    static UInt_t          ctpRDO_lvl1aBC;
    static UInt_t          ctpRDO_time_s;
    static UInt_t          ctpRDO_time_ns;
    static std::vector<unsigned int> *ctpRDO_pit;
    static std::vector<unsigned int> *ctpRDO_tbp;
    static std::vector<unsigned int> *ctpRDO_tap;
    static std::vector<unsigned int> *ctpRDO_tav;
    static UInt_t          ctp_decisionTypeWord;
    static std::vector<std::string>  *ctp_decisionItems;
    static std::vector<unsigned int> *ctp_decisionWords;
    static UInt_t          ctp_nDecisionItems;
    static UInt_t          mbtsLvl2_nElements;
    static std::vector<float>   *mbtsLvl2_energies;
    static UInt_t          mbtsLvl2_ntimes;
    static std::vector<float>   *mbtsLvl2_times;
    static UInt_t          lvl2_sp_nElements;
    static UInt_t          lvl2_sp_hPixelClusTotBins;
    static Float_t         lvl2_sp_hPixelClusTotMin;
    static Float_t         lvl2_sp_hPixelClusTotMax;
    static UInt_t          lvl2_sp_hPixelClusSizeBins;
    static Float_t         lvl2_sp_hPixelClusSizeMin;
    static Float_t         lvl2_sp_hPixelClusSizeMax;
    static std::vector<float>   *lvl2_sp_pixelClusEndcapC_contents;
    static std::vector<float>   *lvl2_sp_pixelClusBarrel_contents;
    static std::vector<float>   *lvl2_sp_pixelClusEndcapA_contents;
    static std::vector<unsigned int> *lvl2_sp_droppedPixelModuleIds;
    static UInt_t          lvl2_sp_sctSpEndcapC;
    static UInt_t          lvl2_sp_sctSpBarrel;
    static UInt_t          lvl2_sp_sctSpEndcapA;
    static std::vector<unsigned int> *lvl2_sp_droppedSctModuleIds;
    static UInt_t          lvl2_mbTrt_nElements;
    static UInt_t          lvl2_mbTrt_hTotBins;
    static Float_t         lvl2_mbTrt_hTotMin;
    static Float_t         lvl2_mbTrt_hTotMax;
    static std::vector<float>   *lvl2_mbTrt_endcapC_contents;
    static std::vector<float>   *lvl2_mbTrt_barrel_contents;
    static std::vector<float>   *lvl2_mbTrt_endcapA_contents;
    static UInt_t          ef_trk_nElements;
    static UInt_t          ef_trk_hZ0Bins;
    static Float_t         ef_trk_hZ0Min;
    static Float_t         ef_trk_hZ0Max;
    static UInt_t          ef_trk_hPtBins;
    static Float_t         ef_trk_hPtMin;
    static Float_t         ef_trk_hPtMax;
    static UInt_t          ef_trk_hEtaBins;
    static Float_t         ef_trk_hEtaMin;
    static Float_t         ef_trk_hEtaMax;
    static UInt_t          ef_trk_hPhiBins;
    static Float_t         ef_trk_hPhiMin;
    static Float_t         ef_trk_hPhiMax;
    static std::vector<float>   *ef_trk_z0_pt_contents;
    static std::vector<float>   *ef_trk_eta_phi_contents;
    static Int_t           trig_L2_jet_n;
    static std::vector<float>   *trig_L2_jet_E;
    static std::vector<float>   *trig_L2_jet_eta;
    static std::vector<float>   *trig_L2_jet_phi;
    static std::vector<unsigned int> *trig_L2_jet_RoIWord;
    static std::vector<double>  *trig_L2_jet_ehad0;
    static std::vector<double>  *trig_L2_jet_eem0;
    static std::vector<int>     *trig_L2_jet_nLeadingCells;
    static std::vector<float>   *trig_L2_jet_hecf;
    static std::vector<float>   *trig_L2_jet_jetQuality;
    static std::vector<float>   *trig_L2_jet_emf;
    static std::vector<float>   *trig_L2_jet_jetTimeCells;
    static std::vector<int>     *trig_L2_jet_L2_fj10_empty_larcalib;
    static std::vector<int>     *trig_L2_jet_L2_fj25_larcalib;
    static std::vector<int>     *trig_L2_jet_L2_j10_empty_larcalib;
    static std::vector<int>     *trig_L2_jet_L2_j200_larcalib;
    static std::vector<int>     *trig_L2_jet_L2_j25_larcalib;
    static std::vector<int>     *trig_L2_jet_L2_j50_larcalib;
    static std::vector<int>     *trig_L2_jet_L2_j95_larcalib;
    static Int_t           vx_n;
    static std::vector<float>   *vx_x;
    static std::vector<float>   *vx_y;
    static std::vector<float>   *vx_z;
    static std::vector<float>   *vx_cov_x;
    static std::vector<float>   *vx_cov_y;
    static std::vector<float>   *vx_cov_z;
    static std::vector<float>   *vx_cov_xy;
    static std::vector<float>   *vx_cov_xz;
    static std::vector<float>   *vx_cov_yz;
    static std::vector<int>     *vx_type;
    static std::vector<float>   *vx_chi2;
    static std::vector<int>     *vx_ndof;
    static std::vector<float>   *vx_px;
    static std::vector<float>   *vx_py;
    static std::vector<float>   *vx_pz;
    static std::vector<float>   *vx_E;
    static std::vector<float>   *vx_m;
    static std::vector<int>     *vx_nTracks;
    static std::vector<float>   *vx_sumPt;
    static std::vector<int>     *vx_trk_n;
    static std::vector< std::vector<float> > *vx_trk_weight;
    static std::vector< std::vector<int> > *vx_trk_index;
    static Int_t           el_n;
    static std::vector<float>   *el_E;
    static std::vector<float>   *el_Et;
    static std::vector<float>   *el_pt;
    static std::vector<float>   *el_m;
    static std::vector<float>   *el_eta;
    static std::vector<float>   *el_phi;
    static std::vector<float>   *el_px;
    static std::vector<float>   *el_py;
    static std::vector<float>   *el_pz;
    static std::vector<float>   *el_charge;
    static std::vector<int>     *el_author;
    static std::vector<unsigned int> *el_isEM;
    static std::vector<unsigned int> *el_isEMLoose;
    static std::vector<unsigned int> *el_isEMMedium;
    static std::vector<unsigned int> *el_isEMTight;
    static std::vector<unsigned int> *el_OQ;
    static std::vector<int>     *el_convFlag;
    static std::vector<int>     *el_isConv;
    static std::vector<int>     *el_nConv;
    static std::vector<int>     *el_nSingleTrackConv;
    static std::vector<int>     *el_nDoubleTrackConv;
    static std::vector<unsigned int> *el_OQRecalc;
    static std::vector<int>     *el_mediumWithoutTrack;
    static std::vector<int>     *el_mediumIsoWithoutTrack;
    static std::vector<int>     *el_tightWithoutTrack;
    static std::vector<int>     *el_tightIsoWithoutTrack;
    static std::vector<int>     *el_loose;
    static std::vector<int>     *el_looseIso;
    static std::vector<int>     *el_medium;
    static std::vector<int>     *el_mediumIso;
    static std::vector<int>     *el_tight;
    static std::vector<int>     *el_tightIso;
    static std::vector<int>     *el_loosePP;
    static std::vector<int>     *el_loosePPIso;
    static std::vector<int>     *el_mediumPP;
    static std::vector<int>     *el_mediumPPIso;
    static std::vector<int>     *el_tightPP;
    static std::vector<int>     *el_tightPPIso;
    static std::vector<int>     *el_goodOQ;
    static std::vector<float>   *el_Ethad;
    static std::vector<float>   *el_Ethad1;
    static std::vector<float>   *el_f1;
    static std::vector<float>   *el_f1core;
    static std::vector<float>   *el_Emins1;
    static std::vector<float>   *el_fside;
    static std::vector<float>   *el_Emax2;
    static std::vector<float>   *el_ws3;
    static std::vector<float>   *el_wstot;
    static std::vector<float>   *el_emaxs1;
    static std::vector<float>   *el_deltaEs;
    static std::vector<float>   *el_E233;
    static std::vector<float>   *el_E237;
    static std::vector<float>   *el_E277;
    static std::vector<float>   *el_weta2;
    static std::vector<float>   *el_f3;
    static std::vector<float>   *el_f3core;
    static std::vector<float>   *el_rphiallcalo;
    static std::vector<float>   *el_Etcone45;
    static std::vector<float>   *el_Etcone15;
    static std::vector<float>   *el_Etcone20;
    static std::vector<float>   *el_Etcone25;
    static std::vector<float>   *el_Etcone30;
    static std::vector<float>   *el_Etcone35;
    static std::vector<float>   *el_Etcone40;
    static std::vector<float>   *el_ptcone20;
    static std::vector<float>   *el_ptcone30;
    static std::vector<float>   *el_ptcone40;
    static std::vector<float>   *el_nucone20;
    static std::vector<float>   *el_nucone30;
    static std::vector<float>   *el_nucone40;
    static std::vector<float>   *el_Etcone15_pt_corrected;
    static std::vector<float>   *el_Etcone20_pt_corrected;
    static std::vector<float>   *el_Etcone25_pt_corrected;
    static std::vector<float>   *el_Etcone30_pt_corrected;
    static std::vector<float>   *el_Etcone35_pt_corrected;
    static std::vector<float>   *el_Etcone40_pt_corrected;
    static std::vector<float>   *el_convanglematch;
    static std::vector<float>   *el_convtrackmatch;
    static std::vector<float>   *el_pos7;
    static std::vector<float>   *el_etacorrmag;
    static std::vector<float>   *el_deltaeta1;
    static std::vector<float>   *el_deltaeta2;
    static std::vector<float>   *el_deltaphi2;
    static std::vector<float>   *el_deltaphiRescaled;
    static std::vector<float>   *el_deltaPhiRot;
    static std::vector<float>   *el_expectHitInBLayer;
    static std::vector<float>   *el_trackd0_physics;
    static std::vector<float>   *el_etaSampling1;
    static std::vector<float>   *el_reta;
    static std::vector<float>   *el_rphi;
    static std::vector<float>   *el_EtringnoisedR03sig2;
    static std::vector<float>   *el_EtringnoisedR03sig3;
    static std::vector<float>   *el_EtringnoisedR03sig4;
    static std::vector<double>  *el_isolationlikelihoodjets;
    static std::vector<double>  *el_isolationlikelihoodhqelectrons;
    static std::vector<double>  *el_electronweight;
    static std::vector<double>  *el_electronbgweight;
    static std::vector<double>  *el_softeweight;
    static std::vector<double>  *el_softebgweight;
    static std::vector<double>  *el_neuralnet;
    static std::vector<double>  *el_Hmatrix;
    static std::vector<double>  *el_Hmatrix5;
    static std::vector<double>  *el_adaboost;
    static std::vector<double>  *el_softeneuralnet;
    static std::vector<float>   *el_zvertex;
    static std::vector<float>   *el_errz;
    static std::vector<float>   *el_etap;
    static std::vector<float>   *el_depth;
    static std::vector<int>     *el_refittedTrack_n;
    static std::vector< std::vector<int> > *el_refittedTrack_author;
    static std::vector< std::vector<float> > *el_refittedTrack_chi2;
    static std::vector< std::vector<int> > *el_refittedTrack_hasBrem;
    static std::vector< std::vector<float> > *el_refittedTrack_bremRadius;
    static std::vector< std::vector<float> > *el_refittedTrack_bremZ;
    static std::vector< std::vector<float> > *el_refittedTrack_bremRadiusErr;
    static std::vector< std::vector<float> > *el_refittedTrack_bremZErr;
    static std::vector< std::vector<int> > *el_refittedTrack_bremFitStatus;
    static std::vector< std::vector<float> > *el_refittedTrack_qoverp;
    static std::vector< std::vector<float> > *el_refittedTrack_d0;
    static std::vector< std::vector<float> > *el_refittedTrack_z0;
    static std::vector< std::vector<float> > *el_refittedTrack_theta;
    static std::vector< std::vector<float> > *el_refittedTrack_phi;
    static std::vector< std::vector<float> > *el_refittedTrack_LMqoverp;
    static std::vector< std::vector<float> > *el_refittedTrack_covd0;
    static std::vector< std::vector<float> > *el_refittedTrack_covz0;
    static std::vector< std::vector<float> > *el_refittedTrack_covphi;
    static std::vector< std::vector<float> > *el_refittedTrack_covtheta;
    static std::vector< std::vector<float> > *el_refittedTrack_covqoverp;
    static std::vector< std::vector<float> > *el_refittedTrack_covd0z0;
    static std::vector< std::vector<float> > *el_refittedTrack_covz0phi;
    static std::vector< std::vector<float> > *el_refittedTrack_covz0theta;
    static std::vector< std::vector<float> > *el_refittedTrack_covz0qoverp;
    static std::vector< std::vector<float> > *el_refittedTrack_covd0phi;
    static std::vector< std::vector<float> > *el_refittedTrack_covd0theta;
    static std::vector< std::vector<float> > *el_refittedTrack_covd0qoverp;
    static std::vector< std::vector<float> > *el_refittedTrack_covphitheta;
    static std::vector< std::vector<float> > *el_refittedTrack_covphiqoverp;
    static std::vector< std::vector<float> > *el_refittedTrack_covthetaqoverp;
    static std::vector<float>   *el_Es0;
    static std::vector<float>   *el_etas0;
    static std::vector<float>   *el_phis0;
    static std::vector<float>   *el_Es1;
    static std::vector<float>   *el_etas1;
    static std::vector<float>   *el_phis1;
    static std::vector<float>   *el_Es2;
    static std::vector<float>   *el_etas2;
    static std::vector<float>   *el_phis2;
    static std::vector<float>   *el_Es3;
    static std::vector<float>   *el_etas3;
    static std::vector<float>   *el_phis3;
    static std::vector<float>   *el_E_PreSamplerB;
    static std::vector<float>   *el_E_EMB1;
    static std::vector<float>   *el_E_EMB2;
    static std::vector<float>   *el_E_EMB3;
    static std::vector<float>   *el_E_PreSamplerE;
    static std::vector<float>   *el_E_EME1;
    static std::vector<float>   *el_E_EME2;
    static std::vector<float>   *el_E_EME3;
    static std::vector<float>   *el_E_HEC0;
    static std::vector<float>   *el_E_HEC1;
    static std::vector<float>   *el_E_HEC2;
    static std::vector<float>   *el_E_HEC3;
    static std::vector<float>   *el_E_TileBar0;
    static std::vector<float>   *el_E_TileBar1;
    static std::vector<float>   *el_E_TileBar2;
    static std::vector<float>   *el_E_TileGap1;
    static std::vector<float>   *el_E_TileGap2;
    static std::vector<float>   *el_E_TileGap3;
    static std::vector<float>   *el_E_TileExt0;
    static std::vector<float>   *el_E_TileExt1;
    static std::vector<float>   *el_E_TileExt2;
    static std::vector<float>   *el_E_FCAL0;
    static std::vector<float>   *el_E_FCAL1;
    static std::vector<float>   *el_E_FCAL2;
    static std::vector<float>   *el_cl_E;
    static std::vector<float>   *el_cl_pt;
    static std::vector<float>   *el_cl_eta;
    static std::vector<float>   *el_cl_phi;
    static std::vector<float>   *el_firstEdens;
    static std::vector<float>   *el_cellmaxfrac;
    static std::vector<float>   *el_longitudinal;
    static std::vector<float>   *el_secondlambda;
    static std::vector<float>   *el_lateral;
    static std::vector<float>   *el_secondR;
    static std::vector<float>   *el_centerlambda;
    static std::vector<float>   *el_rawcl_Es0;
    static std::vector<float>   *el_rawcl_etas0;
    static std::vector<float>   *el_rawcl_phis0;
    static std::vector<float>   *el_rawcl_Es1;
    static std::vector<float>   *el_rawcl_etas1;
    static std::vector<float>   *el_rawcl_phis1;
    static std::vector<float>   *el_rawcl_Es2;
    static std::vector<float>   *el_rawcl_etas2;
    static std::vector<float>   *el_rawcl_phis2;
    static std::vector<float>   *el_rawcl_Es3;
    static std::vector<float>   *el_rawcl_etas3;
    static std::vector<float>   *el_rawcl_phis3;
    static std::vector<float>   *el_rawcl_E;
    static std::vector<float>   *el_rawcl_pt;
    static std::vector<float>   *el_rawcl_eta;
    static std::vector<float>   *el_rawcl_phi;
    static std::vector<float>   *el_trackd0;
    static std::vector<float>   *el_trackz0;
    static std::vector<float>   *el_trackphi;
    static std::vector<float>   *el_tracktheta;
    static std::vector<float>   *el_trackqoverp;
    static std::vector<float>   *el_trackpt;
    static std::vector<float>   *el_tracketa;
    static std::vector<float>   *el_trackcov_d0;
    static std::vector<float>   *el_trackcov_z0;
    static std::vector<float>   *el_trackcov_phi;
    static std::vector<float>   *el_trackcov_theta;
    static std::vector<float>   *el_trackcov_qoverp;
    static std::vector<float>   *el_trackcov_d0_z0;
    static std::vector<float>   *el_trackcov_d0_phi;
    static std::vector<float>   *el_trackcov_d0_theta;
    static std::vector<float>   *el_trackcov_d0_qoverp;
    static std::vector<float>   *el_trackcov_z0_phi;
    static std::vector<float>   *el_trackcov_z0_theta;
    static std::vector<float>   *el_trackcov_z0_qoverp;
    static std::vector<float>   *el_trackcov_phi_theta;
    static std::vector<float>   *el_trackcov_phi_qoverp;
    static std::vector<float>   *el_trackcov_theta_qoverp;
    static std::vector<float>   *el_trackfitchi2;
    static std::vector<int>     *el_trackfitndof;
    static std::vector<int>     *el_nBLHits;
    static std::vector<int>     *el_nPixHits;
    static std::vector<int>     *el_nSCTHits;
    static std::vector<int>     *el_nTRTHits;
    static std::vector<int>     *el_nTRTHighTHits;
    static std::vector<int>     *el_nPixHoles;
    static std::vector<int>     *el_nSCTHoles;
    static std::vector<int>     *el_nTRTHoles;
    static std::vector<int>     *el_nBLSharedHits;
    static std::vector<int>     *el_nPixSharedHits;
    static std::vector<int>     *el_nSCTSharedHits;
    static std::vector<int>     *el_nBLayerOutliers;
    static std::vector<int>     *el_nPixelOutliers;
    static std::vector<int>     *el_nSCTOutliers;
    static std::vector<int>     *el_nTRTOutliers;
    static std::vector<int>     *el_nTRTHighTOutliers;
    static std::vector<int>     *el_expectBLayerHit;
    static std::vector<int>     *el_nSiHits;
    static std::vector<float>   *el_TRTHighTHitsRatio;
    static std::vector<float>   *el_TRTHighTOutliersRatio;
    static std::vector<float>   *el_pixeldEdx;
    static std::vector<int>     *el_nGoodHitsPixeldEdx;
    static std::vector<float>   *el_massPixeldEdx;
    static std::vector< std::vector<float> > *el_likelihoodsPixeldEdx;
    static std::vector<float>   *el_eProbabilityComb;
    static std::vector<float>   *el_eProbabilityHT;
    static std::vector<float>   *el_eProbabilityToT;
    static std::vector<float>   *el_eProbabilityBrem;
    static std::vector<float>   *el_vertweight;
    static std::vector<float>   *el_vertx;
    static std::vector<float>   *el_verty;
    static std::vector<float>   *el_vertz;
    static std::vector<float>   *el_trackd0beam;
    static std::vector<float>   *el_trackz0beam;
    static std::vector<float>   *el_tracksigd0beam;
    static std::vector<float>   *el_tracksigz0beam;
    static std::vector<float>   *el_trackd0pv;
    static std::vector<float>   *el_trackz0pv;
    static std::vector<float>   *el_tracksigd0pv;
    static std::vector<float>   *el_tracksigz0pv;
    static std::vector<float>   *el_trackIPEstimate_d0_biasedpvunbiased;
    static std::vector<float>   *el_trackIPEstimate_z0_biasedpvunbiased;
    static std::vector<float>   *el_trackIPEstimate_sigd0_biasedpvunbiased;
    static std::vector<float>   *el_trackIPEstimate_sigz0_biasedpvunbiased;
    static std::vector<float>   *el_trackIPEstimate_d0_unbiasedpvunbiased;
    static std::vector<float>   *el_trackIPEstimate_z0_unbiasedpvunbiased;
    static std::vector<float>   *el_trackIPEstimate_sigd0_unbiasedpvunbiased;
    static std::vector<float>   *el_trackIPEstimate_sigz0_unbiasedpvunbiased;
    static std::vector<float>   *el_trackd0pvunbiased;
    static std::vector<float>   *el_trackz0pvunbiased;
    static std::vector<float>   *el_tracksigd0pvunbiased;
    static std::vector<float>   *el_tracksigz0pvunbiased;
    static std::vector<int>     *el_hastrack;
    static std::vector<float>   *el_deltaEmax2;
    static std::vector<float>   *el_calibHitsShowerDepth;
    static std::vector<unsigned int> *el_isIso;
    static std::vector<float>   *el_mvaptcone20;
    static std::vector<float>   *el_mvaptcone30;
    static std::vector<float>   *el_mvaptcone40;
    static Int_t           ph_n;
    static std::vector<float>   *ph_E;
    static std::vector<float>   *ph_Et;
    static std::vector<float>   *ph_pt;
    static std::vector<float>   *ph_m;
    static std::vector<float>   *ph_eta;
    static std::vector<float>   *ph_phi;
    static std::vector<float>   *ph_px;
    static std::vector<float>   *ph_py;
    static std::vector<float>   *ph_pz;
    static std::vector<int>     *ph_author;
    static std::vector<int>     *ph_isRecovered;
    static std::vector<unsigned int> *ph_isEM;
    static std::vector<unsigned int> *ph_isEMLoose;
    static std::vector<unsigned int> *ph_isEMMedium;
    static std::vector<unsigned int> *ph_isEMTight;
    static std::vector<unsigned int> *ph_OQ;
    static std::vector<unsigned int> *ph_OQRecalc;
    static std::vector<int>     *ph_loose;
    static std::vector<int>     *ph_looseIso;
    static std::vector<int>     *ph_tight;
    static std::vector<int>     *ph_tightIso;
    static std::vector<int>     *ph_looseAR;
    static std::vector<int>     *ph_looseARIso;
    static std::vector<int>     *ph_tightAR;
    static std::vector<int>     *ph_tightARIso;
    static std::vector<int>     *ph_goodOQ;
    static std::vector<float>   *ph_Ethad;
    static std::vector<float>   *ph_Ethad1;
    static std::vector<float>   *ph_E033;
    static std::vector<float>   *ph_f1;
    static std::vector<float>   *ph_f1core;
    static std::vector<float>   *ph_Emins1;
    static std::vector<float>   *ph_fside;
    static std::vector<float>   *ph_Emax2;
    static std::vector<float>   *ph_ws3;
    static std::vector<float>   *ph_wstot;
    static std::vector<float>   *ph_E132;
    static std::vector<float>   *ph_E1152;
    static std::vector<float>   *ph_emaxs1;
    static std::vector<float>   *ph_deltaEs;
    static std::vector<float>   *ph_E233;
    static std::vector<float>   *ph_E237;
    static std::vector<float>   *ph_E277;
    static std::vector<float>   *ph_weta2;
    static std::vector<float>   *ph_f3;
    static std::vector<float>   *ph_f3core;
    static std::vector<float>   *ph_rphiallcalo;
    static std::vector<float>   *ph_Etcone45;
    static std::vector<float>   *ph_Etcone15;
    static std::vector<float>   *ph_Etcone20;
    static std::vector<float>   *ph_Etcone25;
    static std::vector<float>   *ph_Etcone30;
    static std::vector<float>   *ph_Etcone35;
    static std::vector<float>   *ph_Etcone40;
    static std::vector<float>   *ph_ptcone20;
    static std::vector<float>   *ph_ptcone30;
    static std::vector<float>   *ph_ptcone40;
    static std::vector<float>   *ph_nucone20;
    static std::vector<float>   *ph_nucone30;
    static std::vector<float>   *ph_nucone40;
    static std::vector<float>   *ph_Etcone15_pt_corrected;
    static std::vector<float>   *ph_Etcone20_pt_corrected;
    static std::vector<float>   *ph_Etcone25_pt_corrected;
    static std::vector<float>   *ph_Etcone30_pt_corrected;
    static std::vector<float>   *ph_Etcone35_pt_corrected;
    static std::vector<float>   *ph_Etcone40_pt_corrected;
    static std::vector<float>   *ph_convanglematch;
    static std::vector<float>   *ph_convtrackmatch;
    static std::vector<float>   *ph_reta;
    static std::vector<float>   *ph_rphi;
    static std::vector<float>   *ph_EtringnoisedR03sig2;
    static std::vector<float>   *ph_EtringnoisedR03sig3;
    static std::vector<float>   *ph_EtringnoisedR03sig4;
    static std::vector<double>  *ph_isolationlikelihoodjets;
    static std::vector<double>  *ph_isolationlikelihoodhqelectrons;
    static std::vector<double>  *ph_loglikelihood;
    static std::vector<double>  *ph_photonweight;
    static std::vector<double>  *ph_photonbgweight;
    static std::vector<double>  *ph_neuralnet;
    static std::vector<double>  *ph_Hmatrix;
    static std::vector<double>  *ph_Hmatrix5;
    static std::vector<double>  *ph_adaboost;
    static std::vector<float>   *ph_zvertex;
    static std::vector<float>   *ph_errz;
    static std::vector<float>   *ph_etap;
    static std::vector<float>   *ph_depth;
    static std::vector<float>   *ph_cl_E;
    static std::vector<float>   *ph_cl_pt;
    static std::vector<float>   *ph_cl_eta;
    static std::vector<float>   *ph_cl_phi;
    static std::vector<float>   *ph_Es0;
    static std::vector<float>   *ph_etas0;
    static std::vector<float>   *ph_phis0;
    static std::vector<float>   *ph_Es1;
    static std::vector<float>   *ph_etas1;
    static std::vector<float>   *ph_phis1;
    static std::vector<float>   *ph_Es2;
    static std::vector<float>   *ph_etas2;
    static std::vector<float>   *ph_phis2;
    static std::vector<float>   *ph_Es3;
    static std::vector<float>   *ph_etas3;
    static std::vector<float>   *ph_phis3;
    static std::vector<float>   *ph_rawcl_Es0;
    static std::vector<float>   *ph_rawcl_etas0;
    static std::vector<float>   *ph_rawcl_phis0;
    static std::vector<float>   *ph_rawcl_Es1;
    static std::vector<float>   *ph_rawcl_etas1;
    static std::vector<float>   *ph_rawcl_phis1;
    static std::vector<float>   *ph_rawcl_Es2;
    static std::vector<float>   *ph_rawcl_etas2;
    static std::vector<float>   *ph_rawcl_phis2;
    static std::vector<float>   *ph_rawcl_Es3;
    static std::vector<float>   *ph_rawcl_etas3;
    static std::vector<float>   *ph_rawcl_phis3;
    static std::vector<float>   *ph_rawcl_E;
    static std::vector<float>   *ph_rawcl_pt;
    static std::vector<float>   *ph_rawcl_eta;
    static std::vector<float>   *ph_rawcl_phi;
    static std::vector<float>   *ph_deltaEmax2;
    static std::vector<float>   *ph_calibHitsShowerDepth;
    static std::vector<unsigned int> *ph_isIso;
    static std::vector<float>   *ph_mvaptcone20;
    static std::vector<float>   *ph_mvaptcone30;
    static std::vector<float>   *ph_mvaptcone40;
    static std::vector<float>   *ph_topoEtcone20;
    static std::vector<float>   *ph_topoEtcone40;
    static std::vector<float>   *ph_topoEtcone60;
    static std::vector<float>   *mu_staco_truth_dr;
    static std::vector<float>   *mu_staco_truth_E;
    static std::vector<float>   *mu_staco_truth_pt;
    static std::vector<float>   *mu_staco_truth_eta;
    static std::vector<float>   *mu_staco_truth_phi;
    static std::vector<int>     *mu_staco_truth_type;
    static std::vector<int>     *mu_staco_truth_status;
    static std::vector<int>     *mu_staco_truth_barcode;
    static std::vector<int>     *mu_staco_truth_mothertype;
    static std::vector<int>     *mu_staco_truth_motherbarcode;
    static std::vector<int>     *mu_staco_truth_matched;
    static std::vector<float>   *mu_muid_truth_dr;
    static std::vector<float>   *mu_muid_truth_E;
    static std::vector<float>   *mu_muid_truth_pt;
    static std::vector<float>   *mu_muid_truth_eta;
    static std::vector<float>   *mu_muid_truth_phi;
    static std::vector<int>     *mu_muid_truth_type;
    static std::vector<int>     *mu_muid_truth_status;
    static std::vector<int>     *mu_muid_truth_barcode;
    static std::vector<int>     *mu_muid_truth_mothertype;
    static std::vector<int>     *mu_muid_truth_motherbarcode;
    static std::vector<int>     *mu_muid_truth_matched;

    static Float_t   MET_RefFinal_etx;
    static Float_t   MET_RefFinal_ety;
    static Float_t   MET_RefFinal_phi;
    static Float_t   MET_RefFinal_et;
    static Float_t   MET_RefFinal_sumet;
    static Float_t   MET_RefFinal_etx_CentralReg;
    static Float_t   MET_RefFinal_ety_CentralReg;
    static Float_t   MET_RefFinal_sumet_CentralReg;
    static Float_t   MET_RefFinal_phi_CentralReg;
    static Float_t   MET_RefFinal_etx_EndcapRegion;
    static Float_t   MET_RefFinal_ety_EndcapRegion;
    static Float_t   MET_RefFinal_sumet_EndcapRegion;
    static Float_t   MET_RefFinal_phi_EndcapRegion;
    static Float_t   MET_RefFinal_etx_ForwardReg;
    static Float_t   MET_RefFinal_ety_ForwardReg;
    static Float_t   MET_RefFinal_sumet_ForwardReg;
    static Float_t   MET_RefFinal_phi_ForwardReg;



    //truth info
        static UInt_t		mc_channel_number;
	static UInt_t 		mc_event_number;
	static Float_t 	mc_event_weight;
	static Int_t		mcVx_n;
	static std::vector<float> *	    	mcVx_x;
	static std::vector<float> *        	mcVx_y;
	static std::vector<float> *         	mcVx_z;
	static Int_t					mc_n;
	static std::vector<float> *		mc_gen_E;
	static std::vector<float> *		mc_gen_pt;
	static std::vector<float> *		mc_gen_eta;
	static std::vector<float> *		mc_gen_phi;
	static std::vector<int> *		mc_gen_type;
	static std::vector<int> *		mc_gen_status;
	static std::vector<int> *		mc_gen_barcode;
	static std::vector<int> *		mc_gen_mothertype;
	static std::vector<int> *		mc_gen_motherbarcode;
	static std::vector<int> *		mc_perigee_ok;
	static std::vector<float> *		mc_perigee_d0;
	static std::vector<float> *		mc_perigee_z0;
	static std::vector<float> *		mc_perigee_phi;
	static std::vector<float> *		mc_perigee_theta;
	static std::vector<float> *		mc_perigee_qoverp;
	static std::vector<float> *		mc_charge;
	static Int_t					mc_unstable_n;
	static std::vector<float> *		mc_unstable_gen_pt;
	static std::vector<float> *		mc_unstable_gen_eta;
	static std::vector<float> *		mc_unstable_gen_phi;
	static std::vector<float> *		mc_unstable_gen_energy;
	static std::vector<int> *		mc_unstable_pdg;
	static std::vector<float> *		mc_unstable_charge;
	static std::vector<int> *		mc_unstable_barcode;
	static std::vector<int> *		mc_unstable_status;
	static std::vector<int> *		mc_unstable_mother_pdg;


   // List of branches
   TBranch   *b_MET_RefFinal_etx;
   TBranch   *b_MET_RefFinal_ety;
   TBranch   *b_MET_RefFinal_phi;
   TBranch   *b_MET_RefFinal_et;
   TBranch   *b_MET_RefFinal_sumet;
   TBranch   *b_MET_RefFinal_etx_CentralReg;
   TBranch   *b_MET_RefFinal_ety_CentralReg;
   TBranch   *b_MET_RefFinal_sumet_CentralReg;
   TBranch   *b_MET_RefFinal_phi_CentralReg;
   TBranch   *b_MET_RefFinal_etx_EndcapRegion;
   TBranch   *b_MET_RefFinal_ety_EndcapRegion;
   TBranch   *b_MET_RefFinal_sumet_EndcapRegion;
   TBranch   *b_MET_RefFinal_phi_EndcapRegion;
   TBranch   *b_MET_RefFinal_etx_ForwardReg;
   TBranch   *b_MET_RefFinal_ety_ForwardReg;
   TBranch   *b_MET_RefFinal_sumet_ForwardReg;
   TBranch   *b_MET_RefFinal_phi_ForwardReg;


   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_timestamp;   //!
   TBranch        *b_timestamp_ns;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_detmask0;   //!
   TBranch        *b_detmask1;   //!
   TBranch        *b_actualIntPerXing;   //!
   TBranch        *b_averageIntPerXing;   //!
   TBranch        *b_pixelFlags;   //!
   TBranch        *b_sctFlags;   //!
   TBranch        *b_trtFlags;   //!
   TBranch        *b_larFlags;   //!
   TBranch        *b_tileFlags;   //!
   TBranch        *b_muonFlags;   //!
   TBranch        *b_fwdFlags;   //!
   TBranch        *b_coreFlags;   //!
   TBranch        *b_pixelError;   //!
   TBranch        *b_sctError;   //!
   TBranch        *b_trtError;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_tileError;   //!
   TBranch        *b_muonError;   //!
   TBranch        *b_fwdError;   //!
   TBranch        *b_coreError;   //!
   TBranch        *b_streamDecision_Egamma;   //!
   TBranch        *b_streamDecision_Muons;   //!
   TBranch        *b_streamDecision_JetTauEtmiss;   //!
   TBranch        *b_isSimulation;   //!
   TBranch        *b_isCalibration;   //!
   TBranch        *b_isTestBeam;   //!
   TBranch        *b_mb_n;   //!
   TBranch        *b_mb_E;   //!
   TBranch        *b_mb_eta;   //!
   TBranch        *b_mb_phi;   //!
   TBranch        *b_mb_time;   //!
   TBranch        *b_mb_quality;   //!
   TBranch        *b_mb_type;   //!
   TBranch        *b_mb_module;   //!
   TBranch        *b_mb_channel;   //!
   TBranch        *b_mbtime_timeDiff;   //!
   TBranch        *b_mbtime_timeA;   //!
   TBranch        *b_mbtime_timeC;   //!
   TBranch        *b_mbtime_countA;   //!
   TBranch        *b_mbtime_countC;   //!
   TBranch        *b_Zdc_n;   //!
   TBranch        *b_Zdc_Energy_Vec;   //!
   TBranch        *b_Zdc_Time_Vec;   //!
   TBranch        *b_Zdc_Vec_Size;   //!
   TBranch        *b_Zdc_Energy_LG;   //!
   TBranch        *b_Zdc_Time_LG;   //!
   TBranch        *b_Zdc_Energy_HG;   //!
   TBranch        *b_Zdc_Time_HG;   //!
   TBranch        *b_Zdc_Id;   //!
   TBranch        *b_Zdc_Side;   //!
   TBranch        *b_Zdc_Type;   //!
   TBranch        *b_Zdc_Module;   //!
   TBranch        *b_Zdc_Channel;   //!
   TBranch        *b_Zdc_TimeCalib;   //!
   TBranch        *b_Zdc_RecMethod;   //!
   TBranch        *b_ZdcDigits_n;   //!
   TBranch        *b_ZdcDigits_dig_g0d0;   //!
   TBranch        *b_ZdcDigits_dig_g0d1;   //!
   TBranch        *b_ZdcDigits_dig_g1d0;   //!
   TBranch        *b_ZdcDigits_dig_g1d1;   //!
   TBranch        *b_ZdcDigits_Id;   //!
   TBranch        *b_ZdcDigits_Side;   //!
   TBranch        *b_ZdcDigits_Type;   //!
   TBranch        *b_ZdcDigits_Module;   //!
   TBranch        *b_ZdcDigits_Channel;   //!
   TBranch        *b_NSiClusterL0_nClustEta1;   //!
   TBranch        *b_NSiClusterL0_nClustEta25;   //!
   TBranch        *b_NSiClusterL1_nClustEta1;   //!
   TBranch        *b_NSiClusterL1_nClustEta25;   //!
   TBranch        *b_NSiClusterL2_nClustEta1;   //!
   TBranch        *b_NSiClusterL2_nClustEta25;   //!
   TBranch        *b_ccc_Nh_Calo;   //!
   TBranch        *b_ccc_Eh_Calo;   //!
   TBranch        *b_ccc_Nh_EM;   //!
   TBranch        *b_ccc_Eh_EM;   //!
   TBranch        *b_ccc_Nh_HAD;   //!
   TBranch        *b_ccc_Eh_HAD;   //!
   TBranch        *b_ccc_Nh_PresB;   //!
   TBranch        *b_ccc_Eh_PresB;   //!
   TBranch        *b_ccc_Nh_EMB;   //!
   TBranch        *b_ccc_Eh_EMB;   //!
   TBranch        *b_ccc_Nh_EMEC;   //!
   TBranch        *b_ccc_Eh_EMEC;   //!
   TBranch        *b_ccc_Nh_Tile;   //!
   TBranch        *b_ccc_Eh_Tile;   //!
   TBranch        *b_ccc_Nh_TileGap;   //!
   TBranch        *b_ccc_Eh_TileGap;   //!
   TBranch        *b_ccc_Nh_HEC;   //!
   TBranch        *b_ccc_Eh_HEC;   //!
   TBranch        *b_ccc_Nh_FCal;   //!
   TBranch        *b_ccc_Eh_FCal;   //!
   TBranch        *b_ccc_Nh_PresE;   //!
   TBranch        *b_ccc_Eh_PresE;   //!
   TBranch        *b_ccc_Nh_Scint;   //!
   TBranch        *b_ccc_Eh_Scint;   //!
   TBranch        *b_cccEt_Et_Nh_Calo;   //!
   TBranch        *b_cccEt_Et_Eh_Calo;   //!
   TBranch        *b_cccEt_Et_Nh_EM;   //!
   TBranch        *b_cccEt_Et_Eh_EM;   //!
   TBranch        *b_cccEt_Et_Nh_HAD;   //!
   TBranch        *b_cccEt_Et_Eh_HAD;   //!
   TBranch        *b_cccEt_Et_Nh_PresB;   //!
   TBranch        *b_cccEt_Et_Eh_PresB;   //!
   TBranch        *b_cccEt_Et_Nh_EMB;   //!
   TBranch        *b_cccEt_Et_Eh_EMB;   //!
   TBranch        *b_cccEt_Et_Nh_EMEC;   //!
   TBranch        *b_cccEt_Et_Eh_EMEC;   //!
   TBranch        *b_cccEt_Et_Nh_Tile;   //!
   TBranch        *b_cccEt_Et_Eh_Tile;   //!
   TBranch        *b_cccEt_Et_Nh_TileGap;   //!
   TBranch        *b_cccEt_Et_Eh_TileGap;   //!
   TBranch        *b_cccEt_Et_Nh_HEC;   //!
   TBranch        *b_cccEt_Et_Eh_HEC;   //!
   TBranch        *b_cccEt_Et_Nh_FCal;   //!
   TBranch        *b_cccEt_Et_Eh_FCal;   //!
   TBranch        *b_cccEt_Et_Nh_PresE;   //!
   TBranch        *b_cccEt_Et_Eh_PresE;   //!
   TBranch        *b_cccEt_Et_Nh_Scint;   //!
   TBranch        *b_cccEt_Et_Eh_Scint;   //!
   TBranch        *b_cccEt_p_Nh_Calo;   //!
   TBranch        *b_cccEt_p_Eh_Calo;   //!
   TBranch        *b_cccEt_p_Nh_EM;   //!
   TBranch        *b_cccEt_p_Eh_EM;   //!
   TBranch        *b_cccEt_p_Nh_HAD;   //!
   TBranch        *b_cccEt_p_Eh_HAD;   //!
   TBranch        *b_cccEt_p_Nh_PresB;   //!
   TBranch        *b_cccEt_p_Eh_PresB;   //!
   TBranch        *b_cccEt_p_Nh_EMB;   //!
   TBranch        *b_cccEt_p_Eh_EMB;   //!
   TBranch        *b_cccEt_p_Nh_EMEC;   //!
   TBranch        *b_cccEt_p_Eh_EMEC;   //!
   TBranch        *b_cccEt_p_Nh_Tile;   //!
   TBranch        *b_cccEt_p_Eh_Tile;   //!
   TBranch        *b_cccEt_p_Nh_TileGap;   //!
   TBranch        *b_cccEt_p_Eh_TileGap;   //!
   TBranch        *b_cccEt_p_Nh_HEC;   //!
   TBranch        *b_cccEt_p_Eh_HEC;   //!
   TBranch        *b_cccEt_p_Nh_FCal;   //!
   TBranch        *b_cccEt_p_Eh_FCal;   //!
   TBranch        *b_cccEt_p_Nh_PresE;   //!
   TBranch        *b_cccEt_p_Eh_PresE;   //!
   TBranch        *b_cccEt_p_Nh_Scint;   //!
   TBranch        *b_cccEt_p_Eh_Scint;   //!
   TBranch        *b_cccEt_n_Nh_Calo;   //!
   TBranch        *b_cccEt_n_Eh_Calo;   //!
   TBranch        *b_cccEt_n_Nh_EM;   //!
   TBranch        *b_cccEt_n_Eh_EM;   //!
   TBranch        *b_cccEt_n_Nh_HAD;   //!
   TBranch        *b_cccEt_n_Eh_HAD;   //!
   TBranch        *b_cccEt_n_Nh_PresB;   //!
   TBranch        *b_cccEt_n_Eh_PresB;   //!
   TBranch        *b_cccEt_n_Nh_EMB;   //!
   TBranch        *b_cccEt_n_Eh_EMB;   //!
   TBranch        *b_cccEt_n_Nh_EMEC;   //!
   TBranch        *b_cccEt_n_Eh_EMEC;   //!
   TBranch        *b_cccEt_n_Nh_Tile;   //!
   TBranch        *b_cccEt_n_Eh_Tile;   //!
   TBranch        *b_cccEt_n_Nh_TileGap;   //!
   TBranch        *b_cccEt_n_Eh_TileGap;   //!
   TBranch        *b_cccEt_n_Nh_HEC;   //!
   TBranch        *b_cccEt_n_Eh_HEC;   //!
   TBranch        *b_cccEt_n_Nh_FCal;   //!
   TBranch        *b_cccEt_n_Eh_FCal;   //!
   TBranch        *b_cccEt_n_Nh_PresE;   //!
   TBranch        *b_cccEt_n_Eh_PresE;   //!
   TBranch        *b_cccEt_n_Nh_Scint;   //!
   TBranch        *b_cccEt_n_Eh_Scint;   //!
   TBranch        *b_lar_ncellA;   //!
   TBranch        *b_lar_ncellC;   //!
   TBranch        *b_lar_energyA;   //!
   TBranch        *b_lar_energyC;   //!
   TBranch        *b_lar_timeA;   //!
   TBranch        *b_lar_timeC;   //!
   TBranch        *b_lar_timeDiff;   //!
   TBranch        *b_TotalEt_n;   //!
   TBranch        *b_TotalEt_layer_eta;   //!
   TBranch        *b_TotalEt_layer_phi;   //!
   TBranch        *b_TotalEt_layer_area;   //!
   TBranch        *b_TotalEt_layer_sampling;   //!
   TBranch        *b_TotalEt_layer_sampling_calib;   //!
   TBranch        *b_trk_n;   //!
   TBranch        *b_trk_pt;   //!
   TBranch        *b_trk_eta;   //!
   TBranch        *b_trk_d0_wrtPV;   //!
   TBranch        *b_trk_z0_wrtPV;   //!
   TBranch        *b_trk_phi_wrtPV;   //!
   TBranch        *b_trk_theta_wrtPV;   //!
   TBranch        *b_trk_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_d0_wrtPV;   //!
   TBranch        *b_trk_cov_z0_wrtPV;   //!
   TBranch        *b_trk_cov_phi_wrtPV;   //!
   TBranch        *b_trk_cov_theta_wrtPV;   //!
   TBranch        *b_trk_cov_qoverp_wrtPV;   //!
   TBranch        *b_trk_chi2;   //!
   TBranch        *b_trk_ndof;   //!
   TBranch        *b_trk_nBLHits;   //!
   TBranch        *b_trk_nPixHits;   //!
   TBranch        *b_trk_nSCTHits;   //!
   TBranch        *b_trk_nTRTHits;   //!
   TBranch        *b_trk_nTRTHighTHits;   //!
   TBranch        *b_trk_nPixHoles;   //!
   TBranch        *b_trk_nSCTHoles;   //!
   TBranch        *b_trk_nTRTHoles;   //!
   TBranch        *b_trk_expectBLayerHit;   //!
   TBranch        *b_trk_nMDTHits;   //!
   TBranch        *b_trk_nCSCEtaHits;   //!
   TBranch        *b_trk_nCSCPhiHits;   //!
   TBranch        *b_trk_nRPCEtaHits;   //!
   TBranch        *b_trk_nRPCPhiHits;   //!
   TBranch        *b_trk_nTGCEtaHits;   //!
   TBranch        *b_trk_nTGCPhiHits;   //!
   TBranch        *b_trk_nHits;   //!
   TBranch        *b_trk_nHoles;   //!
   TBranch        *b_trk_hitPattern;   //!
   TBranch        *b_trk_TRTHighTHitsRatio;   //!
   TBranch        *b_trk_TRTHighTOutliersRatio;   //!
   TBranch        *b_trk_fitter;   //!
   TBranch        *b_trk_patternReco1;   //!
   TBranch        *b_trk_patternReco2;   //!
   TBranch        *b_trk_seedFinder;   //!
   //jet truth
   TBranch        *b_antikt2Truth_n;
   TBranch        *b_antikt2Truth_E;
   TBranch        *b_antikt2Truth_pt;
   TBranch        *b_antikt2Truth_m;
   TBranch        *b_antikt2Truth_eta;
   TBranch        *b_antikt2Truth_phi;
   TBranch        *b_antikt2Bkgr_layer_CaloBkgrEt;   //!
   TBranch        *b_antikt2Bkgr_layer_CaloBkgrRMS;   //!
   TBranch        *b_antikt2Bkgr_layer_CaloBkgrCounts;   //!
   TBranch        *b_antikt2Bkgr_layer_CaloBkgrEta;   //!
   TBranch        *b_antikt4Bkgr_layer_CaloBkgrEt;   //!
   TBranch        *b_antikt4Bkgr_layer_CaloBkgrRMS;   //!
   TBranch        *b_antikt4Bkgr_layer_CaloBkgrCounts;   //!
   TBranch        *b_antikt4Bkgr_layer_CaloBkgrEta;   //!
   TBranch        *b_antikt2EMBkgr_layer_CaloBkgrEt;   //!
   TBranch        *b_antikt2EMBkgr_layer_CaloBkgrRMS;   //!
   TBranch        *b_antikt2EMBkgr_layer_CaloBkgrCounts;   //!
   TBranch        *b_antikt2EMBkgr_layer_CaloBkgrEta;   //!
   TBranch        *b_antikt4EMBkgr_layer_CaloBkgrEt;   //!
   TBranch        *b_antikt4EMBkgr_layer_CaloBkgrRMS;   //!
   TBranch        *b_antikt4EMBkgr_layer_CaloBkgrCounts;   //!
   TBranch        *b_antikt4EMBkgr_layer_CaloBkgrEta;   //!
   TBranch        *b_ItrBkgr_layer_CaloBkgrEt;   //!
   TBranch        *b_ItrBkgr_layer_CaloBkgrRMS;   //!
   TBranch        *b_ItrBkgr_layer_CaloBkgrCounts;   //!
   TBranch        *b_ItrBkgr_layer_CaloBkgrEta;   //!
   TBranch        *b_ItrEMBkgr_layer_CaloBkgrEt;   //!
   TBranch        *b_ItrEMBkgr_layer_CaloBkgrRMS;   //!
   TBranch        *b_ItrEMBkgr_layer_CaloBkgrCounts;   //!
   TBranch        *b_ItrEMBkgr_layer_CaloBkgrEta;   //!
   TBranch        *b_AvgBkgr_layer_CaloBkgrEt;   //!
   TBranch        *b_AvgBkgr_layer_CaloBkgrRMS;   //!
   TBranch        *b_AvgBkgr_layer_CaloBkgrCounts;   //!
   TBranch        *b_AvgBkgr_layer_CaloBkgrEta;   //!
   TBranch        *b_antikt2HI_n;   //!
   TBranch        *b_antikt2HI_E;   //!
   TBranch        *b_antikt2HI_pt;   //!
   TBranch        *b_antikt2HI_m;   //!
   TBranch        *b_antikt2HI_eta;   //!
   TBranch        *b_antikt2HI_phi;   //!
   TBranch        *b_antikt2HI_MaxOverMean;   //!
   TBranch        *b_antikt2HI_MeanTowerEt;   //!
   TBranch        *b_antikt2HI_SubtractedEt;   //!
   TBranch        *b_antikt2HI_RMSTowerEt;   //!
   TBranch        *b_antikt2HI_GausEt;   //!
   TBranch        *b_antikt2HI_SelfEnergy;   //!
   TBranch        *b_antikt2HI_SumJt;   //!
   TBranch        *b_antikt2HI_CoreEt;   //!
   TBranch        *b_antikt2HI_EdgeEt;   //!
   TBranch        *b_antikt2HI_CryoCorr;   //!
   TBranch        *b_antikt2HI_NoFlow;   //!
   TBranch        *b_antikt2HI_NumConstituents;   //!
   TBranch        *b_antikt2HI_UncalibEt;   //!
   TBranch        *b_antikt2HI_Discriminant;   //!
   TBranch        *b_antikt2HI_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt2HI_n90;   //!
   TBranch        *b_antikt2HI_fracSamplingMax;   //!
   TBranch        *b_antikt2HI_SamplingMax;   //!
   TBranch        *b_antikt2HI_n90constituents;   //!
   TBranch        *b_antikt2HI_Timing;   //!
   TBranch        *b_antikt2HI_LArQuality;   //!
   TBranch        *b_antikt2HI_HECQuality;   //!
   TBranch        *b_antikt2HI_TileQuality;   //!
   TBranch        *b_antikt2HI_const_n;   //!
   TBranch        *b_antikt2HI_const_et;   //!
   TBranch        *b_antikt2HI_const_eta;   //!
   TBranch        *b_antikt2HI_const_phi;   //!
   TBranch        *b_antikt2HI_sampling_et;   //!
   TBranch        *b_antikt2HI_sampling_et_unsubtr;   //!
   TBranch        *b_antikt2HI_bad_cell_n;   //!
   TBranch        *b_antikt2HI_bad_cell_et;   //!
   TBranch        *b_antikt2HI_bad_cell_area;   //!
   TBranch        *b_antikt2HI_empty_cell_n;   //!
   TBranch        *b_antikt2HI_empty_cell_et;   //!
   TBranch        *b_antikt2HI_empty_cell_area;   //!
   TBranch        *b_antikt2HI_total_cell_n;   //!
   TBranch        *b_antikt2HI_total_cell_et;   //!
   TBranch        *b_antikt2HI_total_cell_area;   //!
   TBranch        *b_antikt4HI_n;   //!
   TBranch        *b_antikt4HI_E;   //!
   TBranch        *b_antikt4HI_pt;   //!
   TBranch        *b_antikt4HI_m;   //!
   TBranch        *b_antikt4HI_eta;   //!
   TBranch        *b_antikt4HI_phi;   //!
   TBranch        *b_antikt4HI_MaxOverMean;   //!
   TBranch        *b_antikt4HI_MeanTowerEt;   //!
   TBranch        *b_antikt4HI_SubtractedEt;   //!
   TBranch        *b_antikt4HI_RMSTowerEt;   //!
   TBranch        *b_antikt4HI_GausEt;   //!
   TBranch        *b_antikt4HI_SelfEnergy;   //!
   TBranch        *b_antikt4HI_SumJt;   //!
   TBranch        *b_antikt4HI_CoreEt;   //!
   TBranch        *b_antikt4HI_EdgeEt;   //!
   TBranch        *b_antikt4HI_CryoCorr;   //!
   TBranch        *b_antikt4HI_NoFlow;   //!
   TBranch        *b_antikt4HI_NumConstituents;   //!
   TBranch        *b_antikt4HI_UncalibEt;   //!
   TBranch        *b_antikt4HI_Discriminant;   //!
   TBranch        *b_antikt4HI_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt4HI_n90;   //!
   TBranch        *b_antikt4HI_fracSamplingMax;   //!
   TBranch        *b_antikt4HI_SamplingMax;   //!
   TBranch        *b_antikt4HI_n90constituents;   //!
   TBranch        *b_antikt4HI_Timing;   //!
   TBranch        *b_antikt4HI_LArQuality;   //!
   TBranch        *b_antikt4HI_HECQuality;   //!
   TBranch        *b_antikt4HI_TileQuality;   //!
   TBranch        *b_antikt4HI_const_n;   //!
   TBranch        *b_antikt4HI_const_et;   //!
   TBranch        *b_antikt4HI_const_eta;   //!
   TBranch        *b_antikt4HI_const_phi;   //!
   TBranch        *b_antikt4HI_sampling_et;   //!
   TBranch        *b_antikt4HI_sampling_et_unsubtr;   //!
   TBranch        *b_antikt4HI_bad_cell_n;   //!
   TBranch        *b_antikt4HI_bad_cell_et;   //!
   TBranch        *b_antikt4HI_bad_cell_area;   //!
   TBranch        *b_antikt4HI_empty_cell_n;   //!
   TBranch        *b_antikt4HI_empty_cell_et;   //!
   TBranch        *b_antikt4HI_empty_cell_area;   //!
   TBranch        *b_antikt4HI_total_cell_n;   //!
   TBranch        *b_antikt4HI_total_cell_et;   //!
   TBranch        *b_antikt4HI_total_cell_area;   //!
   TBranch        *b_antikt2HIEM_n;   //!
   TBranch        *b_antikt2HIEM_E;   //!
   TBranch        *b_antikt2HIEM_pt;   //!
   TBranch        *b_antikt2HIEM_m;   //!
   TBranch        *b_antikt2HIEM_eta;   //!
   TBranch        *b_antikt2HIEM_phi;   //!
   TBranch        *b_antikt2HIEM_MaxOverMean;   //!
   TBranch        *b_antikt2HIEM_MeanTowerEt;   //!
   TBranch        *b_antikt2HIEM_SubtractedEt;   //!
   TBranch        *b_antikt2HIEM_RMSTowerEt;   //!
   TBranch        *b_antikt2HIEM_GausEt;   //!
   TBranch        *b_antikt2HIEM_SelfEnergy;   //!
   TBranch        *b_antikt2HIEM_SumJt;   //!
   TBranch        *b_antikt2HIEM_CoreEt;   //!
   TBranch        *b_antikt2HIEM_EdgeEt;   //!
   TBranch        *b_antikt2HIEM_CryoCorr;   //!
   TBranch        *b_antikt2HIEM_NoFlow;   //!
   TBranch        *b_antikt2HIEM_NumConstituents;   //!
   TBranch        *b_antikt2HIEM_UncalibEt;   //!
   TBranch        *b_antikt2HIEM_Discriminant;   //!
   TBranch        *b_antikt2HIEM_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt2HIEM_n90;   //!
   TBranch        *b_antikt2HIEM_fracSamplingMax;   //!
   TBranch        *b_antikt2HIEM_SamplingMax;   //!
   TBranch        *b_antikt2HIEM_n90constituents;   //!
   TBranch        *b_antikt2HIEM_Timing;   //!
   TBranch        *b_antikt2HIEM_LArQuality;   //!
   TBranch        *b_antikt2HIEM_HECQuality;   //!
   TBranch        *b_antikt2HIEM_TileQuality;   //!
   TBranch        *b_antikt2HIEM_const_n;   //!
   TBranch        *b_antikt2HIEM_const_et;   //!
   TBranch        *b_antikt2HIEM_const_eta;   //!
   TBranch        *b_antikt2HIEM_const_phi;   //!
   TBranch        *b_antikt2HIEM_sampling_et;   //!
   TBranch        *b_antikt2HIEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt2HIEM_bad_cell_n;   //!
   TBranch        *b_antikt2HIEM_bad_cell_et;   //!
   TBranch        *b_antikt2HIEM_bad_cell_area;   //!
   TBranch        *b_antikt2HIEM_empty_cell_n;   //!
   TBranch        *b_antikt2HIEM_empty_cell_et;   //!
   TBranch        *b_antikt2HIEM_empty_cell_area;   //!
   TBranch        *b_antikt2HIEM_total_cell_n;   //!
   TBranch        *b_antikt2HIEM_total_cell_et;   //!
   TBranch        *b_antikt2HIEM_total_cell_area;   //!
   TBranch        *b_antikt4HIEM_n;   //!
   TBranch        *b_antikt4HIEM_E;   //!
   TBranch        *b_antikt4HIEM_pt;   //!
   TBranch        *b_antikt4HIEM_m;   //!
   TBranch        *b_antikt4HIEM_eta;   //!
   TBranch        *b_antikt4HIEM_phi;   //!
   TBranch        *b_antikt4HIEM_MaxOverMean;   //!
   TBranch        *b_antikt4HIEM_MeanTowerEt;   //!
   TBranch        *b_antikt4HIEM_SubtractedEt;   //!
   TBranch        *b_antikt4HIEM_RMSTowerEt;   //!
   TBranch        *b_antikt4HIEM_GausEt;   //!
   TBranch        *b_antikt4HIEM_SelfEnergy;   //!
   TBranch        *b_antikt4HIEM_SumJt;   //!
   TBranch        *b_antikt4HIEM_CoreEt;   //!
   TBranch        *b_antikt4HIEM_EdgeEt;   //!
   TBranch        *b_antikt4HIEM_CryoCorr;   //!
   TBranch        *b_antikt4HIEM_NoFlow;   //!
   TBranch        *b_antikt4HIEM_NumConstituents;   //!
   TBranch        *b_antikt4HIEM_UncalibEt;   //!
   TBranch        *b_antikt4HIEM_Discriminant;   //!
   TBranch        *b_antikt4HIEM_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt4HIEM_n90;   //!
   TBranch        *b_antikt4HIEM_fracSamplingMax;   //!
   TBranch        *b_antikt4HIEM_SamplingMax;   //!
   TBranch        *b_antikt4HIEM_n90constituents;   //!
   TBranch        *b_antikt4HIEM_Timing;   //!
   TBranch        *b_antikt4HIEM_LArQuality;   //!
   TBranch        *b_antikt4HIEM_HECQuality;   //!
   TBranch        *b_antikt4HIEM_TileQuality;   //!
   TBranch        *b_antikt4HIEM_const_n;   //!
   TBranch        *b_antikt4HIEM_const_et;   //!
   TBranch        *b_antikt4HIEM_const_eta;   //!
   TBranch        *b_antikt4HIEM_const_phi;   //!
   TBranch        *b_antikt4HIEM_sampling_et;   //!
   TBranch        *b_antikt4HIEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt4HIEM_bad_cell_n;   //!
   TBranch        *b_antikt4HIEM_bad_cell_et;   //!
   TBranch        *b_antikt4HIEM_bad_cell_area;   //!
   TBranch        *b_antikt4HIEM_empty_cell_n;   //!
   TBranch        *b_antikt4HIEM_empty_cell_et;   //!
   TBranch        *b_antikt4HIEM_empty_cell_area;   //!
   TBranch        *b_antikt4HIEM_total_cell_n;   //!
   TBranch        *b_antikt4HIEM_total_cell_et;   //!
   TBranch        *b_antikt4HIEM_total_cell_area;   //!
   TBranch        *b_antikt2HIAvg_n;   //!
   TBranch        *b_antikt2HIAvg_E;   //!
   TBranch        *b_antikt2HIAvg_pt;   //!
   TBranch        *b_antikt2HIAvg_m;   //!
   TBranch        *b_antikt2HIAvg_eta;   //!
   TBranch        *b_antikt2HIAvg_phi;   //!
   TBranch        *b_antikt2HIAvg_MaxOverMean;   //!
   TBranch        *b_antikt2HIAvg_MeanTowerEt;   //!
   TBranch        *b_antikt2HIAvg_SubtractedEt;   //!
   TBranch        *b_antikt2HIAvg_RMSTowerEt;   //!
   TBranch        *b_antikt2HIAvg_GausEt;   //!
   TBranch        *b_antikt2HIAvg_SelfEnergy;   //!
   TBranch        *b_antikt2HIAvg_SumJt;   //!
   TBranch        *b_antikt2HIAvg_CoreEt;   //!
   TBranch        *b_antikt2HIAvg_EdgeEt;   //!
   TBranch        *b_antikt2HIAvg_CryoCorr;   //!
   TBranch        *b_antikt2HIAvg_NoFlow;   //!
   TBranch        *b_antikt2HIAvg_NumConstituents;   //!
   TBranch        *b_antikt2HIAvg_UncalibEt;   //!
   TBranch        *b_antikt2HIAvg_Discriminant;   //!
   TBranch        *b_antikt2HIAvg_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt2HIAvg_n90;   //!
   TBranch        *b_antikt2HIAvg_fracSamplingMax;   //!
   TBranch        *b_antikt2HIAvg_SamplingMax;   //!
   TBranch        *b_antikt2HIAvg_n90constituents;   //!
   TBranch        *b_antikt2HIAvg_Timing;   //!
   TBranch        *b_antikt2HIAvg_LArQuality;   //!
   TBranch        *b_antikt2HIAvg_HECQuality;   //!
   TBranch        *b_antikt2HIAvg_TileQuality;   //!
   TBranch        *b_antikt2HIAvg_const_n;   //!
   TBranch        *b_antikt2HIAvg_const_et;   //!
   TBranch        *b_antikt2HIAvg_const_eta;   //!
   TBranch        *b_antikt2HIAvg_const_phi;   //!
   TBranch        *b_antikt2HIAvg_sampling_et;   //!
   TBranch        *b_antikt2HIAvg_sampling_et_unsubtr;   //!
   TBranch        *b_antikt2HIAvg_bad_cell_n;   //!
   TBranch        *b_antikt2HIAvg_bad_cell_et;   //!
   TBranch        *b_antikt2HIAvg_bad_cell_area;   //!
   TBranch        *b_antikt2HIAvg_empty_cell_n;   //!
   TBranch        *b_antikt2HIAvg_empty_cell_et;   //!
   TBranch        *b_antikt2HIAvg_empty_cell_area;   //!
   TBranch        *b_antikt2HIAvg_total_cell_n;   //!
   TBranch        *b_antikt2HIAvg_total_cell_et;   //!
   TBranch        *b_antikt2HIAvg_total_cell_area;   //!
   TBranch        *b_antikt4HIAvg_n;   //!
   TBranch        *b_antikt4HIAvg_E;   //!
   TBranch        *b_antikt4HIAvg_pt;   //!
   TBranch        *b_antikt4HIAvg_m;   //!
   TBranch        *b_antikt4HIAvg_eta;   //!
   TBranch        *b_antikt4HIAvg_phi;   //!
   TBranch        *b_antikt4HIAvg_MaxOverMean;   //!
   TBranch        *b_antikt4HIAvg_MeanTowerEt;   //!
   TBranch        *b_antikt4HIAvg_SubtractedEt;   //!
   TBranch        *b_antikt4HIAvg_RMSTowerEt;   //!
   TBranch        *b_antikt4HIAvg_GausEt;   //!
   TBranch        *b_antikt4HIAvg_SelfEnergy;   //!
   TBranch        *b_antikt4HIAvg_SumJt;   //!
   TBranch        *b_antikt4HIAvg_CoreEt;   //!
   TBranch        *b_antikt4HIAvg_EdgeEt;   //!
   TBranch        *b_antikt4HIAvg_CryoCorr;   //!
   TBranch        *b_antikt4HIAvg_NoFlow;   //!
   TBranch        *b_antikt4HIAvg_NumConstituents;   //!
   TBranch        *b_antikt4HIAvg_UncalibEt;   //!
   TBranch        *b_antikt4HIAvg_Discriminant;   //!
   TBranch        *b_antikt4HIAvg_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt4HIAvg_n90;   //!
   TBranch        *b_antikt4HIAvg_fracSamplingMax;   //!
   TBranch        *b_antikt4HIAvg_SamplingMax;   //!
   TBranch        *b_antikt4HIAvg_n90constituents;   //!
   TBranch        *b_antikt4HIAvg_Timing;   //!
   TBranch        *b_antikt4HIAvg_LArQuality;   //!
   TBranch        *b_antikt4HIAvg_HECQuality;   //!
   TBranch        *b_antikt4HIAvg_TileQuality;   //!
   TBranch        *b_antikt4HIAvg_const_n;   //!
   TBranch        *b_antikt4HIAvg_const_et;   //!
   TBranch        *b_antikt4HIAvg_const_eta;   //!
   TBranch        *b_antikt4HIAvg_const_phi;   //!
   TBranch        *b_antikt4HIAvg_sampling_et;   //!
   TBranch        *b_antikt4HIAvg_sampling_et_unsubtr;   //!
   TBranch        *b_antikt4HIAvg_bad_cell_n;   //!
   TBranch        *b_antikt4HIAvg_bad_cell_et;   //!
   TBranch        *b_antikt4HIAvg_bad_cell_area;   //!
   TBranch        *b_antikt4HIAvg_empty_cell_n;   //!
   TBranch        *b_antikt4HIAvg_empty_cell_et;   //!
   TBranch        *b_antikt4HIAvg_empty_cell_area;   //!
   TBranch        *b_antikt4HIAvg_total_cell_n;   //!
   TBranch        *b_antikt4HIAvg_total_cell_et;   //!
   TBranch        *b_antikt4HIAvg_total_cell_area;   //!
   TBranch        *b_antikt2HIItr_n;   //!
   TBranch        *b_antikt2HIItr_E;   //!
   TBranch        *b_antikt2HIItr_pt;   //!
   TBranch        *b_antikt2HIItr_m;   //!
   TBranch        *b_antikt2HIItr_eta;   //!
   TBranch        *b_antikt2HIItr_phi;   //!
   TBranch        *b_antikt2HIItr_MaxOverMean;   //!
   TBranch        *b_antikt2HIItr_MeanTowerEt;   //!
   TBranch        *b_antikt2HIItr_SubtractedEt;   //!
   TBranch        *b_antikt2HIItr_RMSTowerEt;   //!
   TBranch        *b_antikt2HIItr_GausEt;   //!
   TBranch        *b_antikt2HIItr_SelfEnergy;   //!
   TBranch        *b_antikt2HIItr_SumJt;   //!
   TBranch        *b_antikt2HIItr_CoreEt;   //!
   TBranch        *b_antikt2HIItr_EdgeEt;   //!
   TBranch        *b_antikt2HIItr_CryoCorr;   //!
   TBranch        *b_antikt2HIItr_NoFlow;   //!
   TBranch        *b_antikt2HIItr_NumConstituents;   //!
   TBranch        *b_antikt2HIItr_UncalibEt;   //!
   TBranch        *b_antikt2HIItr_Discriminant;   //!
   TBranch        *b_antikt2HIItr_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt2HIItr_n90;   //!
   TBranch        *b_antikt2HIItr_fracSamplingMax;   //!
   TBranch        *b_antikt2HIItr_SamplingMax;   //!
   TBranch        *b_antikt2HIItr_n90constituents;   //!
   TBranch        *b_antikt2HIItr_Timing;   //!
   TBranch        *b_antikt2HIItr_LArQuality;   //!
   TBranch        *b_antikt2HIItr_HECQuality;   //!
   TBranch        *b_antikt2HIItr_TileQuality;   //!
   TBranch        *b_antikt2HIItr_const_n;   //!
   TBranch        *b_antikt2HIItr_const_et;   //!
   TBranch        *b_antikt2HIItr_const_eta;   //!
   TBranch        *b_antikt2HIItr_const_phi;   //!
   TBranch        *b_antikt2HIItr_sampling_et;   //!
   TBranch        *b_antikt2HIItr_sampling_et_unsubtr;   //!
   TBranch        *b_antikt2HIItr_bad_cell_n;   //!
   TBranch        *b_antikt2HIItr_bad_cell_et;   //!
   TBranch        *b_antikt2HIItr_bad_cell_area;   //!
   TBranch        *b_antikt2HIItr_empty_cell_n;   //!
   TBranch        *b_antikt2HIItr_empty_cell_et;   //!
   TBranch        *b_antikt2HIItr_empty_cell_area;   //!
   TBranch        *b_antikt2HIItr_total_cell_n;   //!
   TBranch        *b_antikt2HIItr_total_cell_et;   //!
   TBranch        *b_antikt2HIItr_total_cell_area;   //!
   TBranch        *b_antikt3HIItr_n;   //!
   TBranch        *b_antikt3HIItr_E;   //!
   TBranch        *b_antikt3HIItr_pt;   //!
   TBranch        *b_antikt3HIItr_m;   //!
   TBranch        *b_antikt3HIItr_eta;   //!
   TBranch        *b_antikt3HIItr_phi;   //!
   TBranch        *b_antikt3HIItr_MaxOverMean;   //!
   TBranch        *b_antikt3HIItr_MeanTowerEt;   //!
   TBranch        *b_antikt3HIItr_SubtractedEt;   //!
   TBranch        *b_antikt3HIItr_RMSTowerEt;   //!
   TBranch        *b_antikt3HIItr_GausEt;   //!
   TBranch        *b_antikt3HIItr_SelfEnergy;   //!
   TBranch        *b_antikt3HIItr_SumJt;   //!
   TBranch        *b_antikt3HIItr_CoreEt;   //!
   TBranch        *b_antikt3HIItr_EdgeEt;   //!
   TBranch        *b_antikt3HIItr_CryoCorr;   //!
   TBranch        *b_antikt3HIItr_NoFlow;   //!
   TBranch        *b_antikt3HIItr_NumConstituents;   //!
   TBranch        *b_antikt3HIItr_UncalibEt;   //!
   TBranch        *b_antikt3HIItr_Discriminant;   //!
   TBranch        *b_antikt3HIItr_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt3HIItr_n90;   //!
   TBranch        *b_antikt3HIItr_fracSamplingMax;   //!
   TBranch        *b_antikt3HIItr_SamplingMax;   //!
   TBranch        *b_antikt3HIItr_n90constituents;   //!
   TBranch        *b_antikt3HIItr_Timing;   //!
   TBranch        *b_antikt3HIItr_LArQuality;   //!
   TBranch        *b_antikt3HIItr_HECQuality;   //!
   TBranch        *b_antikt3HIItr_TileQuality;   //!
   TBranch        *b_antikt3HIItr_const_n;   //!
   TBranch        *b_antikt3HIItr_const_et;   //!
   TBranch        *b_antikt3HIItr_const_eta;   //!
   TBranch        *b_antikt3HIItr_const_phi;   //!
   TBranch        *b_antikt3HIItr_sampling_et;   //!
   TBranch        *b_antikt3HIItr_sampling_et_unsubtr;   //!
   TBranch        *b_antikt3HIItr_bad_cell_n;   //!
   TBranch        *b_antikt3HIItr_bad_cell_et;   //!
   TBranch        *b_antikt3HIItr_bad_cell_area;   //!
   TBranch        *b_antikt3HIItr_empty_cell_n;   //!
   TBranch        *b_antikt3HIItr_empty_cell_et;   //!
   TBranch        *b_antikt3HIItr_empty_cell_area;   //!
   TBranch        *b_antikt3HIItr_total_cell_n;   //!
   TBranch        *b_antikt3HIItr_total_cell_et;   //!
   TBranch        *b_antikt3HIItr_total_cell_area;   //!
   TBranch        *b_antikt4HIItr_n;   //!
   TBranch        *b_antikt4HIItr_E;   //!
   TBranch        *b_antikt4HIItr_pt;   //!
   TBranch        *b_antikt4HIItr_m;   //!
   TBranch        *b_antikt4HIItr_eta;   //!
   TBranch        *b_antikt4HIItr_phi;   //!
   TBranch        *b_antikt4HIItr_MaxOverMean;   //!
   TBranch        *b_antikt4HIItr_MeanTowerEt;   //!
   TBranch        *b_antikt4HIItr_SubtractedEt;   //!
   TBranch        *b_antikt4HIItr_RMSTowerEt;   //!
   TBranch        *b_antikt4HIItr_GausEt;   //!
   TBranch        *b_antikt4HIItr_SelfEnergy;   //!
   TBranch        *b_antikt4HIItr_SumJt;   //!
   TBranch        *b_antikt4HIItr_CoreEt;   //!
   TBranch        *b_antikt4HIItr_EdgeEt;   //!
   TBranch        *b_antikt4HIItr_CryoCorr;   //!
   TBranch        *b_antikt4HIItr_NoFlow;   //!
   TBranch        *b_antikt4HIItr_NumConstituents;   //!
   TBranch        *b_antikt4HIItr_UncalibEt;   //!
   TBranch        *b_antikt4HIItr_Discriminant;   //!
   TBranch        *b_antikt4HIItr_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt4HIItr_n90;   //!
   TBranch        *b_antikt4HIItr_fracSamplingMax;   //!
   TBranch        *b_antikt4HIItr_SamplingMax;   //!
   TBranch        *b_antikt4HIItr_n90constituents;   //!
   TBranch        *b_antikt4HIItr_Timing;   //!
   TBranch        *b_antikt4HIItr_LArQuality;   //!
   TBranch        *b_antikt4HIItr_HECQuality;   //!
   TBranch        *b_antikt4HIItr_TileQuality;   //!
   TBranch        *b_antikt4HIItr_const_n;   //!
   TBranch        *b_antikt4HIItr_const_et;   //!
   TBranch        *b_antikt4HIItr_const_eta;   //!
   TBranch        *b_antikt4HIItr_const_phi;   //!
   TBranch        *b_antikt4HIItr_sampling_et;   //!
   TBranch        *b_antikt4HIItr_sampling_et_unsubtr;   //!
   TBranch        *b_antikt4HIItr_bad_cell_n;   //!
   TBranch        *b_antikt4HIItr_bad_cell_et;   //!
   TBranch        *b_antikt4HIItr_bad_cell_area;   //!
   TBranch        *b_antikt4HIItr_empty_cell_n;   //!
   TBranch        *b_antikt4HIItr_empty_cell_et;   //!
   TBranch        *b_antikt4HIItr_empty_cell_area;   //!
   TBranch        *b_antikt4HIItr_total_cell_n;   //!
   TBranch        *b_antikt4HIItr_total_cell_et;   //!
   TBranch        *b_antikt4HIItr_total_cell_area;   //!
   TBranch        *b_antikt5HIItr_n;   //!
   TBranch        *b_antikt5HIItr_E;   //!
   TBranch        *b_antikt5HIItr_pt;   //!
   TBranch        *b_antikt5HIItr_m;   //!
   TBranch        *b_antikt5HIItr_eta;   //!
   TBranch        *b_antikt5HIItr_phi;   //!
   TBranch        *b_antikt5HIItr_MaxOverMean;   //!
   TBranch        *b_antikt5HIItr_MeanTowerEt;   //!
   TBranch        *b_antikt5HIItr_SubtractedEt;   //!
   TBranch        *b_antikt5HIItr_RMSTowerEt;   //!
   TBranch        *b_antikt5HIItr_GausEt;   //!
   TBranch        *b_antikt5HIItr_SelfEnergy;   //!
   TBranch        *b_antikt5HIItr_SumJt;   //!
   TBranch        *b_antikt5HIItr_CoreEt;   //!
   TBranch        *b_antikt5HIItr_EdgeEt;   //!
   TBranch        *b_antikt5HIItr_CryoCorr;   //!
   TBranch        *b_antikt5HIItr_NoFlow;   //!
   TBranch        *b_antikt5HIItr_NumConstituents;   //!
   TBranch        *b_antikt5HIItr_UncalibEt;   //!
   TBranch        *b_antikt5HIItr_Discriminant;   //!
   TBranch        *b_antikt5HIItr_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt5HIItr_n90;   //!
   TBranch        *b_antikt5HIItr_fracSamplingMax;   //!
   TBranch        *b_antikt5HIItr_SamplingMax;   //!
   TBranch        *b_antikt5HIItr_n90constituents;   //!
   TBranch        *b_antikt5HIItr_Timing;   //!
   TBranch        *b_antikt5HIItr_LArQuality;   //!
   TBranch        *b_antikt5HIItr_HECQuality;   //!
   TBranch        *b_antikt5HIItr_TileQuality;   //!
   TBranch        *b_antikt5HIItr_const_n;   //!
   TBranch        *b_antikt5HIItr_const_et;   //!
   TBranch        *b_antikt5HIItr_const_eta;   //!
   TBranch        *b_antikt5HIItr_const_phi;   //!
   TBranch        *b_antikt5HIItr_sampling_et;   //!
   TBranch        *b_antikt5HIItr_sampling_et_unsubtr;   //!
   TBranch        *b_antikt5HIItr_bad_cell_n;   //!
   TBranch        *b_antikt5HIItr_bad_cell_et;   //!
   TBranch        *b_antikt5HIItr_bad_cell_area;   //!
   TBranch        *b_antikt5HIItr_empty_cell_n;   //!
   TBranch        *b_antikt5HIItr_empty_cell_et;   //!
   TBranch        *b_antikt5HIItr_empty_cell_area;   //!
   TBranch        *b_antikt5HIItr_total_cell_n;   //!
   TBranch        *b_antikt5HIItr_total_cell_et;   //!
   TBranch        *b_antikt5HIItr_total_cell_area;   //!
   TBranch        *b_antikt6HIItr_n;   //!
   TBranch        *b_antikt6HIItr_E;   //!
   TBranch        *b_antikt6HIItr_pt;   //!
   TBranch        *b_antikt6HIItr_m;   //!
   TBranch        *b_antikt6HIItr_eta;   //!
   TBranch        *b_antikt6HIItr_phi;   //!
   TBranch        *b_antikt6HIItr_MaxOverMean;   //!
   TBranch        *b_antikt6HIItr_MeanTowerEt;   //!
   TBranch        *b_antikt6HIItr_SubtractedEt;   //!
   TBranch        *b_antikt6HIItr_RMSTowerEt;   //!
   TBranch        *b_antikt6HIItr_GausEt;   //!
   TBranch        *b_antikt6HIItr_SelfEnergy;   //!
   TBranch        *b_antikt6HIItr_SumJt;   //!
   TBranch        *b_antikt6HIItr_CoreEt;   //!
   TBranch        *b_antikt6HIItr_EdgeEt;   //!
   TBranch        *b_antikt6HIItr_CryoCorr;   //!
   TBranch        *b_antikt6HIItr_NoFlow;   //!
   TBranch        *b_antikt6HIItr_NumConstituents;   //!
   TBranch        *b_antikt6HIItr_UncalibEt;   //!
   TBranch        *b_antikt6HIItr_Discriminant;   //!
   TBranch        *b_antikt6HIItr_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt6HIItr_n90;   //!
   TBranch        *b_antikt6HIItr_fracSamplingMax;   //!
   TBranch        *b_antikt6HIItr_SamplingMax;   //!
   TBranch        *b_antikt6HIItr_n90constituents;   //!
   TBranch        *b_antikt6HIItr_Timing;   //!
   TBranch        *b_antikt6HIItr_LArQuality;   //!
   TBranch        *b_antikt6HIItr_HECQuality;   //!
   TBranch        *b_antikt6HIItr_TileQuality;   //!
   TBranch        *b_antikt6HIItr_const_n;   //!
   TBranch        *b_antikt6HIItr_const_et;   //!
   TBranch        *b_antikt6HIItr_const_eta;   //!
   TBranch        *b_antikt6HIItr_const_phi;   //!
   TBranch        *b_antikt6HIItr_sampling_et;   //!
   TBranch        *b_antikt6HIItr_sampling_et_unsubtr;   //!
   TBranch        *b_antikt6HIItr_bad_cell_n;   //!
   TBranch        *b_antikt6HIItr_bad_cell_et;   //!
   TBranch        *b_antikt6HIItr_bad_cell_area;   //!
   TBranch        *b_antikt6HIItr_empty_cell_n;   //!
   TBranch        *b_antikt6HIItr_empty_cell_et;   //!
   TBranch        *b_antikt6HIItr_empty_cell_area;   //!
   TBranch        *b_antikt6HIItr_total_cell_n;   //!
   TBranch        *b_antikt6HIItr_total_cell_et;   //!
   TBranch        *b_antikt6HIItr_total_cell_area;   //!
   TBranch        *b_antikt2HIItrEM_n;   //!
   TBranch        *b_antikt2HIItrEM_E;   //!
   TBranch        *b_antikt2HIItrEM_pt;   //!
   TBranch        *b_antikt2HIItrEM_m;   //!
   TBranch        *b_antikt2HIItrEM_eta;   //!
   TBranch        *b_antikt2HIItrEM_phi;   //!
   TBranch        *b_antikt2HIItrEM_MaxOverMean;   //!
   TBranch        *b_antikt2HIItrEM_MeanTowerEt;   //!
   TBranch        *b_antikt2HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt2HIItrEM_RMSTowerEt;   //!
   TBranch        *b_antikt2HIItrEM_GausEt;   //!
   TBranch        *b_antikt2HIItrEM_SelfEnergy;   //!
   TBranch        *b_antikt2HIItrEM_SumJt;   //!
   TBranch        *b_antikt2HIItrEM_CoreEt;   //!
   TBranch        *b_antikt2HIItrEM_EdgeEt;   //!
   TBranch        *b_antikt2HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt2HIItrEM_NoFlow;   //!
   TBranch        *b_antikt2HIItrEM_NumConstituents;   //!
   TBranch        *b_antikt2HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt2HIItrEM_Discriminant;   //!
   TBranch        *b_antikt2HIItrEM_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt2HIItrEM_n90;   //!
   TBranch        *b_antikt2HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt2HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt2HIItrEM_n90constituents;   //!
   TBranch        *b_antikt2HIItrEM_Timing;   //!
   TBranch        *b_antikt2HIItrEM_LArQuality;   //!
   TBranch        *b_antikt2HIItrEM_HECQuality;   //!
   TBranch        *b_antikt2HIItrEM_TileQuality;   //!
   TBranch        *b_antikt2HIItrEM_const_n;   //!
   TBranch        *b_antikt2HIItrEM_const_et;   //!
   TBranch        *b_antikt2HIItrEM_const_eta;   //!
   TBranch        *b_antikt2HIItrEM_const_phi;   //!
   TBranch        *b_antikt2HIItrEM_sampling_et;   //!
   TBranch        *b_antikt2HIItrEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt2HIItrEM_bad_cell_n;   //!
   TBranch        *b_antikt2HIItrEM_bad_cell_et;   //!
   TBranch        *b_antikt2HIItrEM_bad_cell_area;   //!
   TBranch        *b_antikt2HIItrEM_empty_cell_n;   //!
   TBranch        *b_antikt2HIItrEM_empty_cell_et;   //!
   TBranch        *b_antikt2HIItrEM_empty_cell_area;   //!
   TBranch        *b_antikt2HIItrEM_total_cell_n;   //!
   TBranch        *b_antikt2HIItrEM_total_cell_et;   //!
   TBranch        *b_antikt2HIItrEM_total_cell_area;   //!
   TBranch        *b_antikt3HIItrEM_n;   //!
   TBranch        *b_antikt3HIItrEM_E;   //!
   TBranch        *b_antikt3HIItrEM_pt;   //!
   TBranch        *b_antikt3HIItrEM_m;   //!
   TBranch        *b_antikt3HIItrEM_eta;   //!
   TBranch        *b_antikt3HIItrEM_phi;   //!
   TBranch        *b_antikt3HIItrEM_MaxOverMean;   //!
   TBranch        *b_antikt3HIItrEM_MeanTowerEt;   //!
   TBranch        *b_antikt3HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt3HIItrEM_RMSTowerEt;   //!
   TBranch        *b_antikt3HIItrEM_GausEt;   //!
   TBranch        *b_antikt3HIItrEM_SelfEnergy;   //!
   TBranch        *b_antikt3HIItrEM_SumJt;   //!
   TBranch        *b_antikt3HIItrEM_CoreEt;   //!
   TBranch        *b_antikt3HIItrEM_EdgeEt;   //!
   TBranch        *b_antikt3HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt3HIItrEM_NoFlow;   //!
   TBranch        *b_antikt3HIItrEM_NumConstituents;   //!
   TBranch        *b_antikt3HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt3HIItrEM_Discriminant;   //!
   TBranch        *b_antikt3HIItrEM_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt3HIItrEM_n90;   //!
   TBranch        *b_antikt3HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt3HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt3HIItrEM_n90constituents;   //!
   TBranch        *b_antikt3HIItrEM_Timing;   //!
   TBranch        *b_antikt3HIItrEM_LArQuality;   //!
   TBranch        *b_antikt3HIItrEM_HECQuality;   //!
   TBranch        *b_antikt3HIItrEM_TileQuality;   //!
   TBranch        *b_antikt3HIItrEM_const_n;   //!
   TBranch        *b_antikt3HIItrEM_const_et;   //!
   TBranch        *b_antikt3HIItrEM_const_eta;   //!
   TBranch        *b_antikt3HIItrEM_const_phi;   //!
   TBranch        *b_antikt3HIItrEM_sampling_et;   //!
   TBranch        *b_antikt3HIItrEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt3HIItrEM_bad_cell_n;   //!
   TBranch        *b_antikt3HIItrEM_bad_cell_et;   //!
   TBranch        *b_antikt3HIItrEM_bad_cell_area;   //!
   TBranch        *b_antikt3HIItrEM_empty_cell_n;   //!
   TBranch        *b_antikt3HIItrEM_empty_cell_et;   //!
   TBranch        *b_antikt3HIItrEM_empty_cell_area;   //!
   TBranch        *b_antikt3HIItrEM_total_cell_n;   //!
   TBranch        *b_antikt3HIItrEM_total_cell_et;   //!
   TBranch        *b_antikt3HIItrEM_total_cell_area;   //!
   TBranch        *b_antikt4HIItrEM_n;   //!
   TBranch        *b_antikt4HIItrEM_E;   //!
   TBranch        *b_antikt4HIItrEM_pt;   //!
   TBranch        *b_antikt4HIItrEM_m;   //!
   TBranch        *b_antikt4HIItrEM_eta;   //!
   TBranch        *b_antikt4HIItrEM_phi;   //!
   TBranch        *b_antikt4HIItrEM_MaxOverMean;   //!
   TBranch        *b_antikt4HIItrEM_MeanTowerEt;   //!
   TBranch        *b_antikt4HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt4HIItrEM_RMSTowerEt;   //!
   TBranch        *b_antikt4HIItrEM_GausEt;   //!
   TBranch        *b_antikt4HIItrEM_SelfEnergy;   //!
   TBranch        *b_antikt4HIItrEM_SumJt;   //!
   TBranch        *b_antikt4HIItrEM_CoreEt;   //!
   TBranch        *b_antikt4HIItrEM_EdgeEt;   //!
   TBranch        *b_antikt4HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt4HIItrEM_NoFlow;   //!
   TBranch        *b_antikt4HIItrEM_NumConstituents;   //!
   TBranch        *b_antikt4HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt4HIItrEM_Discriminant;   //!
   TBranch        *b_antikt4HIItrEM_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt4HIItrEM_n90;   //!
   TBranch        *b_antikt4HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt4HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt4HIItrEM_n90constituents;   //!
   TBranch        *b_antikt4HIItrEM_Timing;   //!
   TBranch        *b_antikt4HIItrEM_LArQuality;   //!
   TBranch        *b_antikt4HIItrEM_HECQuality;   //!
   TBranch        *b_antikt4HIItrEM_TileQuality;   //!
   TBranch        *b_antikt4HIItrEM_const_n;   //!
   TBranch        *b_antikt4HIItrEM_const_et;   //!
   TBranch        *b_antikt4HIItrEM_const_eta;   //!
   TBranch        *b_antikt4HIItrEM_const_phi;   //!
   TBranch        *b_antikt4HIItrEM_sampling_et;   //!
   TBranch        *b_antikt4HIItrEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt4HIItrEM_bad_cell_n;   //!
   TBranch        *b_antikt4HIItrEM_bad_cell_et;   //!
   TBranch        *b_antikt4HIItrEM_bad_cell_area;   //!
   TBranch        *b_antikt4HIItrEM_empty_cell_n;   //!
   TBranch        *b_antikt4HIItrEM_empty_cell_et;   //!
   TBranch        *b_antikt4HIItrEM_empty_cell_area;   //!
   TBranch        *b_antikt4HIItrEM_total_cell_n;   //!
   TBranch        *b_antikt4HIItrEM_total_cell_et;   //!
   TBranch        *b_antikt4HIItrEM_total_cell_area;   //!
   TBranch        *b_antikt5HIItrEM_n;   //!
   TBranch        *b_antikt5HIItrEM_E;   //!
   TBranch        *b_antikt5HIItrEM_pt;   //!
   TBranch        *b_antikt5HIItrEM_m;   //!
   TBranch        *b_antikt5HIItrEM_eta;   //!
   TBranch        *b_antikt5HIItrEM_phi;   //!
   TBranch        *b_antikt5HIItrEM_MaxOverMean;   //!
   TBranch        *b_antikt5HIItrEM_MeanTowerEt;   //!
   TBranch        *b_antikt5HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt5HIItrEM_RMSTowerEt;   //!
   TBranch        *b_antikt5HIItrEM_GausEt;   //!
   TBranch        *b_antikt5HIItrEM_SelfEnergy;   //!
   TBranch        *b_antikt5HIItrEM_SumJt;   //!
   TBranch        *b_antikt5HIItrEM_CoreEt;   //!
   TBranch        *b_antikt5HIItrEM_EdgeEt;   //!
   TBranch        *b_antikt5HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt5HIItrEM_NoFlow;   //!
   TBranch        *b_antikt5HIItrEM_NumConstituents;   //!
   TBranch        *b_antikt5HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt5HIItrEM_Discriminant;   //!
   TBranch        *b_antikt5HIItrEM_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt5HIItrEM_n90;   //!
   TBranch        *b_antikt5HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt5HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt5HIItrEM_n90constituents;   //!
   TBranch        *b_antikt5HIItrEM_Timing;   //!
   TBranch        *b_antikt5HIItrEM_LArQuality;   //!
   TBranch        *b_antikt5HIItrEM_HECQuality;   //!
   TBranch        *b_antikt5HIItrEM_TileQuality;   //!
   TBranch        *b_antikt5HIItrEM_const_n;   //!
   TBranch        *b_antikt5HIItrEM_const_et;   //!
   TBranch        *b_antikt5HIItrEM_const_eta;   //!
   TBranch        *b_antikt5HIItrEM_const_phi;   //!
   TBranch        *b_antikt5HIItrEM_sampling_et;   //!
   TBranch        *b_antikt5HIItrEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt5HIItrEM_bad_cell_n;   //!
   TBranch        *b_antikt5HIItrEM_bad_cell_et;   //!
   TBranch        *b_antikt5HIItrEM_bad_cell_area;   //!
   TBranch        *b_antikt5HIItrEM_empty_cell_n;   //!
   TBranch        *b_antikt5HIItrEM_empty_cell_et;   //!
   TBranch        *b_antikt5HIItrEM_empty_cell_area;   //!
   TBranch        *b_antikt5HIItrEM_total_cell_n;   //!
   TBranch        *b_antikt5HIItrEM_total_cell_et;   //!
   TBranch        *b_antikt5HIItrEM_total_cell_area;   //!
   TBranch        *b_antikt6HIItrEM_n;   //!
   TBranch        *b_antikt6HIItrEM_E;   //!
   TBranch        *b_antikt6HIItrEM_pt;   //!
   TBranch        *b_antikt6HIItrEM_m;   //!
   TBranch        *b_antikt6HIItrEM_eta;   //!
   TBranch        *b_antikt6HIItrEM_phi;   //!
   TBranch        *b_antikt6HIItrEM_MaxOverMean;   //!
   TBranch        *b_antikt6HIItrEM_MeanTowerEt;   //!
   TBranch        *b_antikt6HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt6HIItrEM_RMSTowerEt;   //!
   TBranch        *b_antikt6HIItrEM_GausEt;   //!
   TBranch        *b_antikt6HIItrEM_SelfEnergy;   //!
   TBranch        *b_antikt6HIItrEM_SumJt;   //!
   TBranch        *b_antikt6HIItrEM_CoreEt;   //!
   TBranch        *b_antikt6HIItrEM_EdgeEt;   //!
   TBranch        *b_antikt6HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt6HIItrEM_NoFlow;   //!
   TBranch        *b_antikt6HIItrEM_NumConstituents;   //!
   TBranch        *b_antikt6HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt6HIItrEM_Discriminant;   //!
   TBranch        *b_antikt6HIItrEM_MeanTowerEtUnsubtr;   //!
   TBranch        *b_antikt6HIItrEM_n90;   //!
   TBranch        *b_antikt6HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt6HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt6HIItrEM_n90constituents;   //!
   TBranch        *b_antikt6HIItrEM_Timing;   //!
   TBranch        *b_antikt6HIItrEM_LArQuality;   //!
   TBranch        *b_antikt6HIItrEM_HECQuality;   //!
   TBranch        *b_antikt6HIItrEM_TileQuality;   //!
   TBranch        *b_antikt6HIItrEM_const_n;   //!
   TBranch        *b_antikt6HIItrEM_const_et;   //!
   TBranch        *b_antikt6HIItrEM_const_eta;   //!
   TBranch        *b_antikt6HIItrEM_const_phi;   //!
   TBranch        *b_antikt6HIItrEM_sampling_et;   //!
   TBranch        *b_antikt6HIItrEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt6HIItrEM_bad_cell_n;   //!
   TBranch        *b_antikt6HIItrEM_bad_cell_et;   //!
   TBranch        *b_antikt6HIItrEM_bad_cell_area;   //!
   TBranch        *b_antikt6HIItrEM_empty_cell_n;   //!
   TBranch        *b_antikt6HIItrEM_empty_cell_et;   //!
   TBranch        *b_antikt6HIItrEM_empty_cell_area;   //!
   TBranch        *b_antikt6HIItrEM_total_cell_n;   //!
   TBranch        *b_antikt6HIItrEM_total_cell_et;   //!
   TBranch        *b_antikt6HIItrEM_total_cell_area;   //!
   TBranch        *b_jetSeed_n;   //!
   TBranch        *b_jetSeed_E;   //!
   TBranch        *b_jetSeed_pt;   //!
   TBranch        *b_jetSeed_m;   //!
   TBranch        *b_jetSeed_eta;   //!
   TBranch        *b_jetSeed_phi;   //!
   TBranch        *b_antikt4Track_n;   //!
   TBranch        *b_antikt4Track_E;   //!
   TBranch        *b_antikt4Track_pt;   //!
   TBranch        *b_antikt4Track_m;   //!
   TBranch        *b_antikt4Track_eta;   //!
   TBranch        *b_antikt4Track_phi;   //!
   TBranch        *b_antikt4Track_const_n;   //!
   TBranch        *b_antikt4Track_const_pt;   //!
   TBranch        *b_antikt4Track_const_eta;   //!
   TBranch        *b_antikt4Track_const_phi;   //!
   TBranch        *b_antikt4Track_const_chi2;   //!
   TBranch        *b_antikt4Track_const_d0_wrtPV;   //!
   TBranch        *b_antikt4Track_const_z0_wrtPV;   //!
   TBranch        *b_antikt4Track_const_phi0_wrtPV;   //!
   TBranch        *b_antikt4Track_const_theta_wrtPV;   //!
   TBranch        *b_antikt4Track_const_qop;   //!
   TBranch        *b_antikt4Track_const_ndof;   //!
   TBranch        *b_antikt4Track_const_nBLayerHits;   //!
   TBranch        *b_antikt4Track_const_nPixelHits;   //!
   TBranch        *b_antikt4Track_const_nSCTHits;   //!
   TBranch        *b_antikt4Track_const_nTRTHits;   //!
   TBranch        *b_antikt6Track_n;   //!
   TBranch        *b_antikt6Track_E;   //!
   TBranch        *b_antikt6Track_pt;   //!
   TBranch        *b_antikt6Track_m;   //!
   TBranch        *b_antikt6Track_eta;   //!
   TBranch        *b_antikt6Track_phi;   //!
   TBranch        *b_antikt6Track_const_n;   //!
   TBranch        *b_antikt6Track_const_pt;   //!
   TBranch        *b_antikt6Track_const_eta;   //!
   TBranch        *b_antikt6Track_const_phi;   //!
   TBranch        *b_antikt6Track_const_chi2;   //!
   TBranch        *b_antikt6Track_const_d0_wrtPV;   //!
   TBranch        *b_antikt6Track_const_z0_wrtPV;   //!
   TBranch        *b_antikt6Track_const_phi0_wrtPV;   //!
   TBranch        *b_antikt6Track_const_theta_wrtPV;   //!
   TBranch        *b_antikt6Track_const_qop;   //!
   TBranch        *b_antikt6Track_const_ndof;   //!
   TBranch        *b_antikt6Track_const_nBLayerHits;   //!
   TBranch        *b_antikt6Track_const_nPixelHits;   //!
   TBranch        *b_antikt6Track_const_nSCTHits;   //!
   TBranch        *b_antikt6Track_const_nTRTHits;   //!

   //branches for
   //pp @ 2.76TeV 2010
   //and pPb 4.76TeV 2012
   TBranch        *b_trk_cov_z0_theta;   //!
   TBranch        *b_trk_cov_z0_theta_wrtPV;   //!
   TBranch        *b_vx_err_x;   //!
   TBranch        *b_vx_err_y;   //!
   TBranch        *b_vx_err_z;   //!
   TBranch        *b_trk_err_d0_wrtPV;   //!
   TBranch        *b_trk_theta;   //!
   TBranch        *b_trk_err_z0_wrtPV;   //!
   TBranch        *b_trk_err_theta_wrtPV;   //!
   TBranch        *b_trk_qoverp;   //!
   TBranch        *b_trk_err_phi_wrtPV;   //!
   TBranch        *b_trk_err_qoverp_wrtPV;   //!
   TBranch        *b_AntiKt4TopoEM_n;   //!
   TBranch        *b_AntiKt4TopoEM_E;   //!
   TBranch        *b_AntiKt4TopoEM_pt;   //!
   TBranch        *b_AntiKt4TopoEM_m;   //!
   TBranch        *b_AntiKt4TopoEM_eta;   //!
   TBranch        *b_AntiKt4TopoEM_phi;   //!
   TBranch        *b_AntiKt4TopoEM_EtaOrigin;   //!
   TBranch        *b_AntiKt4TopoEM_PhiOrigin;   //!
   TBranch        *b_AntiKt4TopoEM_MOrigin;   //!
   TBranch        *b_AntiKt4TopoEM_EtaOriginEM;   //!
   TBranch        *b_AntiKt4TopoEM_PhiOriginEM;   //!
   TBranch        *b_AntiKt4TopoEM_MOriginEM;   //!
   TBranch        *b_AntiKt4TopoEM_WIDTH;   //!
   TBranch        *b_AntiKt4TopoEM_n90;   //!
   TBranch        *b_AntiKt4TopoEM_Timing;   //!
   TBranch        *b_AntiKt4TopoEM_LArQuality;   //!
   TBranch        *b_AntiKt4TopoEM_nTrk;   //!
   TBranch        *b_AntiKt4TopoEM_sumPtTrk;   //!
   TBranch        *b_AntiKt4TopoEM_OriginIndex;   //!
   TBranch        *b_AntiKt4TopoEM_HECQuality;   //!
   TBranch        *b_AntiKt4TopoEM_NegativeE;   //!
   TBranch        *b_AntiKt4TopoEM_AverageLArQF;   //!
   TBranch        *b_AntiKt4TopoEM_YFlip12;   //!
   TBranch        *b_AntiKt4TopoEM_YFlip23;   //!
   TBranch        *b_AntiKt4TopoEM_BCH_CORR_CELL;   //!
   TBranch        *b_AntiKt4TopoEM_BCH_CORR_DOTX;   //!
   TBranch        *b_AntiKt4TopoEM_BCH_CORR_JET;   //!
   TBranch        *b_AntiKt4TopoEM_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_AntiKt4TopoEM_ENG_BAD_CELLS;   //!
   TBranch        *b_AntiKt4TopoEM_N_BAD_CELLS;   //!
   TBranch        *b_AntiKt4TopoEM_N_BAD_CELLS_CORR;   //!
   TBranch        *b_AntiKt4TopoEM_BAD_CELLS_CORR_E;   //!
   TBranch        *b_AntiKt4TopoEM_NumTowers;   //!
   TBranch        *b_AntiKt4TopoEM_ootFracCells5;   //!
   TBranch        *b_AntiKt4TopoEM_ootFracCells10;   //!
   TBranch        *b_AntiKt4TopoEM_ootFracClusters5;   //!
   TBranch        *b_AntiKt4TopoEM_ootFracClusters10;   //!
   TBranch        *b_AntiKt4TopoEM_SamplingMax;   //!
   TBranch        *b_AntiKt4TopoEM_fracSamplingMax;   //!
   TBranch        *b_AntiKt4TopoEM_hecf;   //!
   TBranch        *b_AntiKt4TopoEM_tgap3f;   //!
   TBranch        *b_AntiKt4TopoEM_isUgly;   //!
   TBranch        *b_AntiKt4TopoEM_isBadLooseMinus;   //!
   TBranch        *b_AntiKt4TopoEM_isBadLoose;   //!
   TBranch        *b_AntiKt4TopoEM_isBadMedium;   //!
   TBranch        *b_AntiKt4TopoEM_isBadTight;   //!
   TBranch        *b_AntiKt4TopoEM_emfrac;   //!
   TBranch        *b_AntiKt4TopoEM_Offset;   //!
   TBranch        *b_AntiKt4TopoEM_EMJES;   //!
   TBranch        *b_AntiKt4TopoEM_EMJES_EtaCorr;   //!
   TBranch        *b_AntiKt4TopoEM_EMJESnooffset;   //!
   TBranch        *b_AntiKt4TopoEM_GCWJES;   //!
   TBranch        *b_AntiKt4TopoEM_GCWJES_EtaCorr;   //!
   TBranch        *b_AntiKt4TopoEM_CB;   //!
   TBranch        *b_AntiKt4TopoEM_LCJES;   //!
   TBranch        *b_AntiKt4TopoEM_emscale_E;   //!
   TBranch        *b_AntiKt4TopoEM_emscale_pt;   //!
   TBranch        *b_AntiKt4TopoEM_emscale_m;   //!
   TBranch        *b_AntiKt4TopoEM_emscale_eta;   //!
   TBranch        *b_AntiKt4TopoEM_emscale_phi;   //!
   TBranch        *b_AntiKt4TopoEM_jvtx_x;   //!
   TBranch        *b_AntiKt4TopoEM_jvtx_y;   //!
   TBranch        *b_AntiKt4TopoEM_jvtx_z;   //!
   TBranch        *b_AntiKt4TopoEM_jvtxf;   //!
   TBranch        *b_AntiKt4TopoEM_GSCFactorF;   //!
   TBranch        *b_AntiKt4TopoEM_WidthFraction;   //!
   TBranch        *b_AntiKt4TopoEM_e_PreSamplerB;   //!
   TBranch        *b_AntiKt4TopoEM_e_EMB1;   //!
   TBranch        *b_AntiKt4TopoEM_e_EMB2;   //!
   TBranch        *b_AntiKt4TopoEM_e_EMB3;   //!
   TBranch        *b_AntiKt4TopoEM_e_PreSamplerE;   //!
   TBranch        *b_AntiKt4TopoEM_e_EME1;   //!
   TBranch        *b_AntiKt4TopoEM_e_EME2;   //!
   TBranch        *b_AntiKt4TopoEM_e_EME3;   //!
   TBranch        *b_AntiKt4TopoEM_e_HEC0;   //!
   TBranch        *b_AntiKt4TopoEM_e_HEC1;   //!
   TBranch        *b_AntiKt4TopoEM_e_HEC2;   //!
   TBranch        *b_AntiKt4TopoEM_e_HEC3;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileBar0;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileBar1;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileBar2;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileGap1;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileGap2;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileGap3;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileExt0;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileExt1;   //!
   TBranch        *b_AntiKt4TopoEM_e_TileExt2;   //!
   TBranch        *b_AntiKt4TopoEM_e_FCAL0;   //!
   TBranch        *b_AntiKt4TopoEM_e_FCAL1;   //!
   TBranch        *b_AntiKt4TopoEM_e_FCAL2;   //!
   TBranch        *b_AntiKt4TopoEM_shapeBins;   //!
   TBranch        *b_AntiKt4TopoEM_Nconst;   //!
   TBranch        *b_AntiKt4TopoEM_ptconst_default;   //!
   TBranch        *b_AntiKt4TopoEM_econst_default;   //!
   TBranch        *b_AntiKt4TopoEM_etaconst_default;   //!
   TBranch        *b_AntiKt4TopoEM_phiconst_default;   //!
   TBranch        *b_AntiKt4TopoEM_weightconst_default;   //!
   TBranch        *b_AntiKt4TopoEM_constscale_E;   //!
   TBranch        *b_AntiKt4TopoEM_constscale_pt;   //!
   TBranch        *b_AntiKt4TopoEM_constscale_m;   //!
   TBranch        *b_AntiKt4TopoEM_constscale_eta;   //!
   TBranch        *b_AntiKt4TopoEM_constscale_phi;   //!
   TBranch        *b_AntiKt4TopoEM_el_dr;   //!
   TBranch        *b_AntiKt4TopoEM_el_matched;   //!
   TBranch        *b_AntiKt4TopoEM_mu_dr;   //!
   TBranch        *b_AntiKt4TopoEM_mu_matched;   //!
   TBranch        *b_AntiKt4TopoEM_L1_dr;   //!
   TBranch        *b_AntiKt4TopoEM_L1_matched;   //!
   TBranch        *b_AntiKt4TopoEM_L2_dr;   //!
   TBranch        *b_AntiKt4TopoEM_L2_matched;   //!
   TBranch        *b_AntiKt4TopoEM_EF_dr;   //!
   TBranch        *b_AntiKt4TopoEM_EF_matched;   //!
//////////////////////////////////////////////////////////////////////


   TBranch        *b_HIFlow_PsiHICaloUtilLayers;   //!
   TBranch        *b_HIFlow_PsiEtHICaloUtilLayers;   //!
   TBranch        *b_HIFlow_PsiPtrack;   //!
   TBranch        *b_HIFlow_PsiNtrack;   //!
   TBranch        *b_HIFlow_v2EMB1sil;   //!
   TBranch        *b_HIFlow_v2FCAL0sil;   //!
   TBranch        *b_HIFlow_v2track;   //!
   TBranch        *b_HIFlow_PsiFCAL0_w;   //!
   TBranch        *b_HIFlow_PsiPFCAL0_w;   //!
   TBranch        *b_HIFlow_PsiNFCAL0_w;   //!
   TBranch        *b_HIFlow_Meanv2_Psi_From_EMB1CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_Meanv2_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_EMBP1_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_EMBN1_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_EMBP1_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_EMBN1_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_FCALN0_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_FCALP0_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_FCALP0_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2Eta_Psi_From_FCALN0_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_EtaEMBN1;   //!
   TBranch        *b_HIFlow_EtaEMBP1;   //!
   TBranch        *b_HIFlow_EtaFCALN0;   //!
   TBranch        *b_HIFlow_EtaFCALP0;   //!
   TBranch        *b_mu_staco_n;   //!
   TBranch        *b_mu_staco_E;   //!
   TBranch        *b_mu_staco_pt;   //!
   TBranch        *b_mu_staco_m;   //!
   TBranch        *b_mu_staco_eta;   //!
   TBranch        *b_mu_staco_phi;   //!
   TBranch        *b_mu_staco_px;   //!
   TBranch        *b_mu_staco_py;   //!
   TBranch        *b_mu_staco_pz;   //!
   TBranch        *b_mu_staco_charge;   //!
   TBranch        *b_mu_staco_allauthor;   //!
   TBranch        *b_mu_staco_author;   //!
   TBranch        *b_mu_staco_beta;   //!
   TBranch        *b_mu_staco_isMuonLikelihood;   //!
   TBranch        *b_mu_staco_matchchi2;   //!
   TBranch        *b_mu_staco_matchndof;   //!
   TBranch        *b_mu_staco_etcone20;   //!
   TBranch        *b_mu_staco_etcone30;   //!
   TBranch        *b_mu_staco_etcone40;   //!
   TBranch        *b_mu_staco_nucone20;   //!
   TBranch        *b_mu_staco_nucone30;   //!
   TBranch        *b_mu_staco_nucone40;   //!
   TBranch        *b_mu_staco_ptcone20;   //!
   TBranch        *b_mu_staco_ptcone30;   //!
   TBranch        *b_mu_staco_ptcone40;   //!
   TBranch        *b_mu_staco_energyLossPar;   //!
   TBranch        *b_mu_staco_energyLossErr;   //!
   TBranch        *b_mu_staco_etCore;   //!
   TBranch        *b_mu_staco_energyLossType;   //!
   TBranch        *b_mu_staco_caloMuonIdTag;   //!
   TBranch        *b_mu_staco_caloLRLikelihood;   //!
   TBranch        *b_mu_staco_bestMatch;   //!
   TBranch        *b_mu_staco_isStandAloneMuon;   //!
   TBranch        *b_mu_staco_isCombinedMuon;   //!
   TBranch        *b_mu_staco_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_staco_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_staco_isCaloMuonId;   //!
   TBranch        *b_mu_staco_alsoFoundByLowPt;   //!
   TBranch        *b_mu_staco_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_staco_loose;   //!
   TBranch        *b_mu_staco_medium;   //!
   TBranch        *b_mu_staco_tight;   //!
   TBranch        *b_mu_staco_d0_exPV;   //!
   TBranch        *b_mu_staco_z0_exPV;   //!
   TBranch        *b_mu_staco_phi_exPV;   //!
   TBranch        *b_mu_staco_theta_exPV;   //!
   TBranch        *b_mu_staco_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cb_d0_exPV;   //!
   TBranch        *b_mu_staco_cb_z0_exPV;   //!
   TBranch        *b_mu_staco_cb_phi_exPV;   //!
   TBranch        *b_mu_staco_cb_theta_exPV;   //!
   TBranch        *b_mu_staco_cb_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_d0_exPV;   //!
   TBranch        *b_mu_staco_id_z0_exPV;   //!
   TBranch        *b_mu_staco_id_phi_exPV;   //!
   TBranch        *b_mu_staco_id_theta_exPV;   //!
   TBranch        *b_mu_staco_id_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_d0_exPV;   //!
   TBranch        *b_mu_staco_me_z0_exPV;   //!
   TBranch        *b_mu_staco_me_phi_exPV;   //!
   TBranch        *b_mu_staco_me_theta_exPV;   //!
   TBranch        *b_mu_staco_me_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ie_d0_exPV;   //!
   TBranch        *b_mu_staco_ie_z0_exPV;   //!
   TBranch        *b_mu_staco_ie_phi_exPV;   //!
   TBranch        *b_mu_staco_ie_theta_exPV;   //!
   TBranch        *b_mu_staco_ie_qoverp_exPV;   //!
   TBranch        *b_mu_staco_SpaceTime_detID;   //!
   TBranch        *b_mu_staco_SpaceTime_t;   //!
   TBranch        *b_mu_staco_SpaceTime_tError;   //!
   TBranch        *b_mu_staco_SpaceTime_weight;   //!
   TBranch        *b_mu_staco_SpaceTime_x;   //!
   TBranch        *b_mu_staco_SpaceTime_y;   //!
   TBranch        *b_mu_staco_SpaceTime_z;   //!
   TBranch        *b_mu_staco_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_id_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_me_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ms_d0;   //!
   TBranch        *b_mu_staco_ms_z0;   //!
   TBranch        *b_mu_staco_ms_phi;   //!
   TBranch        *b_mu_staco_ms_theta;   //!
   TBranch        *b_mu_staco_ms_qoverp;   //!
   TBranch        *b_mu_staco_id_d0;   //!
   TBranch        *b_mu_staco_id_z0;   //!
   TBranch        *b_mu_staco_id_phi;   //!
   TBranch        *b_mu_staco_id_theta;   //!
   TBranch        *b_mu_staco_id_qoverp;   //!
   TBranch        *b_mu_staco_me_d0;   //!
   TBranch        *b_mu_staco_me_z0;   //!
   TBranch        *b_mu_staco_me_phi;   //!
   TBranch        *b_mu_staco_me_theta;   //!
   TBranch        *b_mu_staco_me_qoverp;   //!
   TBranch        *b_mu_staco_ie_d0;   //!
   TBranch        *b_mu_staco_ie_z0;   //!
   TBranch        *b_mu_staco_ie_phi;   //!
   TBranch        *b_mu_staco_ie_theta;   //!
   TBranch        *b_mu_staco_ie_qoverp;   //!
   TBranch        *b_mu_staco_nOutliersOnTrack;   //!
   TBranch        *b_mu_staco_nBLHits;   //!
   TBranch        *b_mu_staco_nPixHits;   //!
   TBranch        *b_mu_staco_nSCTHits;   //!
   TBranch        *b_mu_staco_nTRTHits;   //!
   TBranch        *b_mu_staco_nTRTHighTHits;   //!
   TBranch        *b_mu_staco_nBLSharedHits;   //!
   TBranch        *b_mu_staco_nPixSharedHits;   //!
   TBranch        *b_mu_staco_nPixHoles;   //!
   TBranch        *b_mu_staco_nSCTSharedHits;   //!
   TBranch        *b_mu_staco_nSCTHoles;   //!
   TBranch        *b_mu_staco_nTRTOutliers;   //!
   TBranch        *b_mu_staco_nTRTHighTOutliers;   //!
   TBranch        *b_mu_staco_nGangedPixels;   //!
   TBranch        *b_mu_staco_nPixelDeadSensors;   //!
   TBranch        *b_mu_staco_nSCTDeadSensors;   //!
   TBranch        *b_mu_staco_nTRTDeadStraws;   //!
   TBranch        *b_mu_staco_expectBLayerHit;   //!
   TBranch        *b_mu_staco_nMDTHits;   //!
   TBranch        *b_mu_staco_nMDTHoles;   //!
   TBranch        *b_mu_staco_nCSCEtaHits;   //!
   TBranch        *b_mu_staco_nCSCEtaHoles;   //!
   TBranch        *b_mu_staco_nCSCPhiHits;   //!
   TBranch        *b_mu_staco_nCSCPhiHoles;   //!
   TBranch        *b_mu_staco_nRPCEtaHits;   //!
   TBranch        *b_mu_staco_nRPCEtaHoles;   //!
   TBranch        *b_mu_staco_nRPCPhiHits;   //!
   TBranch        *b_mu_staco_nRPCPhiHoles;   //!
   TBranch        *b_mu_staco_nTGCEtaHits;   //!
   TBranch        *b_mu_staco_nTGCEtaHoles;   //!
   TBranch        *b_mu_staco_nTGCPhiHits;   //!
   TBranch        *b_mu_staco_nTGCPhiHoles;   //!
   TBranch        *b_mu_staco_nMDTBIHits;   //!
   TBranch        *b_mu_staco_nMDTBMHits;   //!
   TBranch        *b_mu_staco_nMDTBOHits;   //!
   TBranch        *b_mu_staco_nMDTBEEHits;   //!
   TBranch        *b_mu_staco_nMDTBIS78Hits;   //!
   TBranch        *b_mu_staco_nMDTEIHits;   //!
   TBranch        *b_mu_staco_nMDTEMHits;   //!
   TBranch        *b_mu_staco_nMDTEOHits;   //!
   TBranch        *b_mu_staco_nMDTEEHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_staco_barrelSectors;   //!
   TBranch        *b_mu_staco_endcapSectors;   //!
   TBranch        *b_mu_staco_trackd0;   //!
   TBranch        *b_mu_staco_trackz0;   //!
   TBranch        *b_mu_staco_trackphi;   //!
   TBranch        *b_mu_staco_tracktheta;   //!
   TBranch        *b_mu_staco_trackqoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0;   //!
   TBranch        *b_mu_staco_trackcov_z0;   //!
   TBranch        *b_mu_staco_trackcov_phi;   //!
   TBranch        *b_mu_staco_trackcov_theta;   //!
   TBranch        *b_mu_staco_trackcov_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0_z0;   //!
   TBranch        *b_mu_staco_trackcov_d0_phi;   //!
   TBranch        *b_mu_staco_trackcov_d0_theta;   //!
   TBranch        *b_mu_staco_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_z0_phi;   //!
   TBranch        *b_mu_staco_trackcov_z0_theta;   //!
   TBranch        *b_mu_staco_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_phi_theta;   //!
   TBranch        *b_mu_staco_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_staco_trackfitchi2;   //!
   TBranch        *b_mu_staco_trackfitndof;   //!
   TBranch        *b_mu_staco_hastrack;   //!
   TBranch        *b_mu_staco_trackd0beam;   //!
   TBranch        *b_mu_staco_trackz0beam;   //!
   TBranch        *b_mu_staco_tracksigd0beam;   //!
   TBranch        *b_mu_staco_tracksigz0beam;   //!
   TBranch        *b_mu_staco_trackd0pv;   //!
   TBranch        *b_mu_staco_trackz0pv;   //!
   TBranch        *b_mu_staco_tracksigd0pv;   //!
   TBranch        *b_mu_staco_tracksigz0pv;   //!
   TBranch        *b_mu_staco_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackd0pvunbiased;   //!
   TBranch        *b_mu_staco_trackz0pvunbiased;   //!
   TBranch        *b_mu_staco_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_staco_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_staco_EFCB_dr;   //!
   TBranch        *b_mu_staco_EFCB_n;   //!
   TBranch        *b_mu_staco_EFCB_MuonType;   //!
   TBranch        *b_mu_staco_EFCB_pt;   //!
   TBranch        *b_mu_staco_EFCB_eta;   //!
   TBranch        *b_mu_staco_EFCB_phi;   //!
   TBranch        *b_mu_staco_EFCB_hasCB;   //!
   TBranch        *b_mu_staco_EFCB_matched;   //!
   TBranch        *b_mu_staco_EFMG_dr;   //!
   TBranch        *b_mu_staco_EFMG_n;   //!
   TBranch        *b_mu_staco_EFMG_MuonType;   //!
   TBranch        *b_mu_staco_EFMG_pt;   //!
   TBranch        *b_mu_staco_EFMG_eta;   //!
   TBranch        *b_mu_staco_EFMG_phi;   //!
   TBranch        *b_mu_staco_EFMG_hasMG;   //!
   TBranch        *b_mu_staco_EFMG_matched;   //!
   TBranch        *b_mu_staco_EFME_dr;   //!
   TBranch        *b_mu_staco_EFME_n;   //!
   TBranch        *b_mu_staco_EFME_MuonType;   //!
   TBranch        *b_mu_staco_EFME_pt;   //!
   TBranch        *b_mu_staco_EFME_eta;   //!
   TBranch        *b_mu_staco_EFME_phi;   //!
   TBranch        *b_mu_staco_EFME_hasME;   //!
   TBranch        *b_mu_staco_EFME_matched;   //!
   TBranch        *b_mu_staco_L2CB_dr;   //!
   TBranch        *b_mu_staco_L2CB_pt;   //!
   TBranch        *b_mu_staco_L2CB_eta;   //!
   TBranch        *b_mu_staco_L2CB_phi;   //!
   TBranch        *b_mu_staco_L2CB_id_pt;   //!
   TBranch        *b_mu_staco_L2CB_ms_pt;   //!
   TBranch        *b_mu_staco_L2CB_nPixHits;   //!
   TBranch        *b_mu_staco_L2CB_nSCTHits;   //!
   TBranch        *b_mu_staco_L2CB_nTRTHits;   //!
   TBranch        *b_mu_staco_L2CB_nTRTHighTHits;   //!
   TBranch        *b_mu_staco_L2CB_matched;   //!
   TBranch        *b_mu_staco_L1_dr;   //!
   TBranch        *b_mu_staco_L1_pt;   //!
   TBranch        *b_mu_staco_L1_eta;   //!
   TBranch        *b_mu_staco_L1_phi;   //!
   TBranch        *b_mu_staco_L1_thrNumber;   //!
   TBranch        *b_mu_staco_L1_RoINumber;   //!
   TBranch        *b_mu_staco_L1_sectorAddress;   //!
   TBranch        *b_mu_staco_L1_firstCandidate;   //!
   TBranch        *b_mu_staco_L1_moreCandInRoI;   //!
   TBranch        *b_mu_staco_L1_moreCandInSector;   //!
   TBranch        *b_mu_staco_L1_source;   //!
   TBranch        *b_mu_staco_L1_hemisphere;   //!
   TBranch        *b_mu_staco_L1_charge;   //!
   TBranch        *b_mu_staco_L1_vetoed;   //!
   TBranch        *b_mu_staco_L1_matched;   //!
   TBranch        *b_EF_2g10_loose;   //!
   TBranch        *b_EF_2g5_loose;   //!
   TBranch        *b_EF_2g7_loose;   //!
   TBranch        *b_EF_2mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_2mu4T_MSonly;   //!
   TBranch        *b_EF_2mu4_MSonly;   //!
   TBranch        *b_EF_2mu4_MSonly_EFFS_L1MU0;   //!
   TBranch        *b_EF_2mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_2mu6T_MSonly;   //!
   TBranch        *b_EF_2mu6_MSonly;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0_MV;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0_NL;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0_NZ;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU11;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU4_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU6_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM12;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM14;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM16;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_MV_VTE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_NL;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_NZ;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_TE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_UNPAIRED_ISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_VTE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM5_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM7;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_MV;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_MV_VTE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_NL;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_NZ;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_TE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_VTE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU11;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU11_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4_MV_VTE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4_TE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU4_VTE50;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY;   //!
   TBranch        *b_EF_SeededStreamerL1Calo;   //!
   TBranch        *b_EF_g10_loose;   //!
   TBranch        *b_EF_g10_loose_larcalib;   //!
   TBranch        *b_EF_g5_NoCut_cosmic;   //!
   TBranch        *b_EF_g5_loose;   //!
   TBranch        *b_EF_g5_loose_larcalib;   //!
   TBranch        *b_EF_g7_loose;   //!
   TBranch        *b_EF_mu10T_MSonly;   //!
   TBranch        *b_EF_mu10_MSonly;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu13T_MSonly;   //!
   TBranch        *b_EF_mu13_MSonly;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu4T;   //!
   TBranch        *b_EF_mu4T_IDTrkNoCut;   //!
   TBranch        *b_EF_mu4T_MSonly;   //!
   TBranch        *b_EF_mu4T_MSonly_L1TE50;   //!
   TBranch        *b_EF_mu4T_MSonly_barrel;   //!
   TBranch        *b_EF_mu4T_MSonly_cosmic;   //!
   TBranch        *b_EF_mu4T_cosmic;   //!
   TBranch        *b_EF_mu4_L1VTE50;   //!
   TBranch        *b_EF_mu4_MSonly;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu4_MSonly_L1TE50;   //!
   TBranch        *b_EF_mu4_MSonly_barrel;   //!
   TBranch        *b_EF_mu4_MSonly_barrel_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu4_MSonly_cosmic;   //!
   TBranch        *b_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu4_MSonly_j15_a2hi_EFFS_matched;   //!
   TBranch        *b_EF_mu4_cosmic;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu6T_MSonly;   //!
   TBranch        *b_EF_mu6_MSonly;   //!
   TBranch        *b_EF_mu6_L1VTE50;   //!
   TBranch        *b_EF_mu6_MSonly_L1TE50;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L1_2EM3;   //!
   TBranch        *b_L1_2EM3_NL;   //!
   TBranch        *b_L1_2EM3_NZ;   //!
   TBranch        *b_L1_2EM5;   //!
   TBranch        *b_L1_2MU0;   //!
   TBranch        *b_L1_2MU0_EMPTY;   //!
   TBranch        *b_L1_2MU0_MU6;   //!
   TBranch        *b_L1_2MU0_MV;   //!
   TBranch        *b_L1_2MU0_NL;   //!
   TBranch        *b_L1_2MU0_NZ;   //!
   TBranch        *b_L1_2MU11;   //!
   TBranch        *b_L1_2MU20;   //!
   TBranch        *b_L1_2MU4;   //!
   TBranch        *b_L1_2MU4_EMPTY;   //!
   TBranch        *b_L1_2MU6;   //!
   TBranch        *b_L1_2MU6_EMPTY;   //!
   TBranch        *b_L1_2MU6_FIRSTEMPTY;   //!
   TBranch        *b_L1_2MU6_UNPAIRED_ISO;   //!
   TBranch        *b_L1_2MU6_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_EM10;   //!
   TBranch        *b_L1_EM12;   //!
   TBranch        *b_L1_EM14;   //!
   TBranch        *b_L1_EM16;   //!
   TBranch        *b_L1_EM3;   //!
   TBranch        *b_L1_EM3_EMPTY;   //!
   TBranch        *b_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_L1_EM3_MV_VTE50;   //!
   TBranch        *b_L1_EM3_NL;   //!
   TBranch        *b_L1_EM3_NZ;   //!
   TBranch        *b_L1_EM3_TE50;   //!
   TBranch        *b_L1_EM3_UNPAIRED_ISO;   //!
   TBranch        *b_L1_EM3_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_EM3_VTE50;   //!
   TBranch        *b_L1_EM4;   //!
   TBranch        *b_L1_EM5;   //!
   TBranch        *b_L1_EM5_EMPTY;   //!
   TBranch        *b_L1_EM7;   //!
   TBranch        *b_L1_MU0;   //!
   TBranch        *b_L1_MU0_EMPTY;   //!
   TBranch        *b_L1_MU0_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU0_MV;   //!
   TBranch        *b_L1_MU0_MV_VTE50;   //!
   TBranch        *b_L1_MU0_NL;   //!
   TBranch        *b_L1_MU0_NZ;   //!
   TBranch        *b_L1_MU0_TE50;   //!
   TBranch        *b_L1_MU0_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MU0_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_MU0_VTE50;   //!
   TBranch        *b_L1_MU11;   //!
   TBranch        *b_L1_MU11_EMPTY;   //!
   TBranch        *b_L1_MU15;   //!
   TBranch        *b_L1_MU20;   //!
   TBranch        *b_L1_MU4;   //!
   TBranch        *b_L1_MU4_EMPTY;   //!
   TBranch        *b_L1_MU4_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU4_MV_VTE50;   //!
   TBranch        *b_L1_MU4_TE50;   //!
   TBranch        *b_L1_MU4_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MU4_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_MU4_VTE50;   //!
   TBranch        *b_L1_MU6;   //!
   TBranch        *b_L1_MU6_FIRSTEMPTY;   //!
   TBranch        *b_L2_2g10_loose;   //!
   TBranch        *b_L2_2g5_loose;   //!
   TBranch        *b_L2_2g7_loose;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_2mu4T_MSonly;   //!
   TBranch        *b_L2_2mu4_MSonly;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_2mu6T_MSonly;   //!
   TBranch        *b_L2_2mu6_MSonly;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM3_NL;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM3_NZ;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0_MV;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0_NL;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0_NZ;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU11;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU4_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU6_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM12;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM14;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM16;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_MV_VTE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_NL;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_NZ;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_TE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_UNPAIRED_ISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_VTE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM5_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM7;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_FIRSTEMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_MV;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_MV_VTE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_NL;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_NZ;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_TE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_VTE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU11;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU11_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4_FIRSTEMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4_MV_VTE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4_TE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU4_VTE50;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU6_FIRSTEMPTY;   //!
   TBranch        *b_L2_SeededStreamerL1Calo;   //!
   TBranch        *b_L2_em3_empty_larcalib;   //!
   TBranch        *b_L2_em5_empty_larcalib;   //!
   TBranch        *b_L2_g10_loose;   //!
   TBranch        *b_L2_g5_NoCut_cosmic;   //!
   TBranch        *b_L2_g5_loose;   //!
   TBranch        *b_L2_g7_loose;   //!
   TBranch        *b_L2_mu10T_MSonly;   //!
   TBranch        *b_L2_mu10_MSonly;   //!
   TBranch        *b_L2_mu10_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu13T_MSonly;   //!
   TBranch        *b_L2_mu13_MSonly;   //!
   TBranch        *b_L2_mu13_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4;   //!
   TBranch        *b_L2_mu4T;   //!
   TBranch        *b_L2_mu4T_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4T_MSonly;   //!
   TBranch        *b_L2_mu4T_MSonly_L1TE50;   //!
   TBranch        *b_L2_mu4T_MSonly_barrel;   //!
   TBranch        *b_L2_mu4T_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4T_cal;   //!
   TBranch        *b_L2_mu4T_cosmic;   //!
   TBranch        *b_L2_mu4_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4_L1VTE50;   //!
   TBranch        *b_L2_mu4_MSonly;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4_MSonly_L1TE50;   //!
   TBranch        *b_L2_mu4_MSonly_barrel;   //!
   TBranch        *b_L2_mu4_MSonly_barrel_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4_cal_empty;   //!
   TBranch        *b_L2_mu4_cosmic;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu6T_MSonly;   //!
   TBranch        *b_L2_mu6_MSonly;   //!
   TBranch        *b_L2_mu6_cal;   //!
   TBranch        *b_mu_muid_n;   //!
   TBranch        *b_mu_muid_E;   //!
   TBranch        *b_mu_muid_pt;   //!
   TBranch        *b_mu_muid_m;   //!
   TBranch        *b_mu_muid_eta;   //!
   TBranch        *b_mu_muid_phi;   //!
   TBranch        *b_mu_muid_px;   //!
   TBranch        *b_mu_muid_py;   //!
   TBranch        *b_mu_muid_pz;   //!
   TBranch        *b_mu_muid_charge;   //!
   TBranch        *b_mu_muid_allauthor;   //!
   TBranch        *b_mu_muid_author;   //!
   TBranch        *b_mu_muid_beta;   //!
   TBranch        *b_mu_muid_isMuonLikelihood;   //!
   TBranch        *b_mu_muid_matchchi2;   //!
   TBranch        *b_mu_muid_matchndof;   //!
   TBranch        *b_mu_muid_etcone20;   //!
   TBranch        *b_mu_muid_etcone30;   //!
   TBranch        *b_mu_muid_etcone40;   //!
   TBranch        *b_mu_muid_nucone20;   //!
   TBranch        *b_mu_muid_nucone30;   //!
   TBranch        *b_mu_muid_nucone40;   //!
   TBranch        *b_mu_muid_ptcone20;   //!
   TBranch        *b_mu_muid_ptcone30;   //!
   TBranch        *b_mu_muid_ptcone40;   //!
   TBranch        *b_mu_muid_energyLossPar;   //!
   TBranch        *b_mu_muid_energyLossErr;   //!
   TBranch        *b_mu_muid_etCore;   //!
   TBranch        *b_mu_muid_energyLossType;   //!
   TBranch        *b_mu_muid_caloMuonIdTag;   //!
   TBranch        *b_mu_muid_caloLRLikelihood;   //!
   TBranch        *b_mu_muid_bestMatch;   //!
   TBranch        *b_mu_muid_isStandAloneMuon;   //!
   TBranch        *b_mu_muid_isCombinedMuon;   //!
   TBranch        *b_mu_muid_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_muid_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_muid_isCaloMuonId;   //!
   TBranch        *b_mu_muid_alsoFoundByLowPt;   //!
   TBranch        *b_mu_muid_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_muid_loose;   //!
   TBranch        *b_mu_muid_medium;   //!
   TBranch        *b_mu_muid_tight;   //!
   TBranch        *b_mu_muid_d0_exPV;   //!
   TBranch        *b_mu_muid_z0_exPV;   //!
   TBranch        *b_mu_muid_phi_exPV;   //!
   TBranch        *b_mu_muid_theta_exPV;   //!
   TBranch        *b_mu_muid_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cb_d0_exPV;   //!
   TBranch        *b_mu_muid_cb_z0_exPV;   //!
   TBranch        *b_mu_muid_cb_phi_exPV;   //!
   TBranch        *b_mu_muid_cb_theta_exPV;   //!
   TBranch        *b_mu_muid_cb_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_d0_exPV;   //!
   TBranch        *b_mu_muid_id_z0_exPV;   //!
   TBranch        *b_mu_muid_id_phi_exPV;   //!
   TBranch        *b_mu_muid_id_theta_exPV;   //!
   TBranch        *b_mu_muid_id_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_d0_exPV;   //!
   TBranch        *b_mu_muid_me_z0_exPV;   //!
   TBranch        *b_mu_muid_me_phi_exPV;   //!
   TBranch        *b_mu_muid_me_theta_exPV;   //!
   TBranch        *b_mu_muid_me_qoverp_exPV;   //!
   TBranch        *b_mu_muid_ie_d0_exPV;   //!
   TBranch        *b_mu_muid_ie_z0_exPV;   //!
   TBranch        *b_mu_muid_ie_phi_exPV;   //!
   TBranch        *b_mu_muid_ie_theta_exPV;   //!
   TBranch        *b_mu_muid_ie_qoverp_exPV;   //!
   TBranch        *b_mu_muid_SpaceTime_detID;   //!
   TBranch        *b_mu_muid_SpaceTime_t;   //!
   TBranch        *b_mu_muid_SpaceTime_tError;   //!
   TBranch        *b_mu_muid_SpaceTime_weight;   //!
   TBranch        *b_mu_muid_SpaceTime_x;   //!
   TBranch        *b_mu_muid_SpaceTime_y;   //!
   TBranch        *b_mu_muid_SpaceTime_z;   //!
   TBranch        *b_mu_muid_cov_d0_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_cov_d0_exPV;   //!
   TBranch        *b_mu_muid_id_cov_z0_exPV;   //!
   TBranch        *b_mu_muid_id_cov_phi_exPV;   //!
   TBranch        *b_mu_muid_id_cov_theta_exPV;   //!
   TBranch        *b_mu_muid_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_cov_d0_exPV;   //!
   TBranch        *b_mu_muid_me_cov_z0_exPV;   //!
   TBranch        *b_mu_muid_me_cov_phi_exPV;   //!
   TBranch        *b_mu_muid_me_cov_theta_exPV;   //!
   TBranch        *b_mu_muid_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_muid_ms_d0;   //!
   TBranch        *b_mu_muid_ms_z0;   //!
   TBranch        *b_mu_muid_ms_phi;   //!
   TBranch        *b_mu_muid_ms_theta;   //!
   TBranch        *b_mu_muid_ms_qoverp;   //!
   TBranch        *b_mu_muid_id_d0;   //!
   TBranch        *b_mu_muid_id_z0;   //!
   TBranch        *b_mu_muid_id_phi;   //!
   TBranch        *b_mu_muid_id_theta;   //!
   TBranch        *b_mu_muid_id_qoverp;   //!
   TBranch        *b_mu_muid_me_d0;   //!
   TBranch        *b_mu_muid_me_z0;   //!
   TBranch        *b_mu_muid_me_phi;   //!
   TBranch        *b_mu_muid_me_theta;   //!
   TBranch        *b_mu_muid_me_qoverp;   //!
   TBranch        *b_mu_muid_ie_d0;   //!
   TBranch        *b_mu_muid_ie_z0;   //!
   TBranch        *b_mu_muid_ie_phi;   //!
   TBranch        *b_mu_muid_ie_theta;   //!
   TBranch        *b_mu_muid_ie_qoverp;   //!
   TBranch        *b_mu_muid_nOutliersOnTrack;   //!
   TBranch        *b_mu_muid_nBLHits;   //!
   TBranch        *b_mu_muid_nPixHits;   //!
   TBranch        *b_mu_muid_nSCTHits;   //!
   TBranch        *b_mu_muid_nTRTHits;   //!
   TBranch        *b_mu_muid_nTRTHighTHits;   //!
   TBranch        *b_mu_muid_nBLSharedHits;   //!
   TBranch        *b_mu_muid_nPixSharedHits;   //!
   TBranch        *b_mu_muid_nPixHoles;   //!
   TBranch        *b_mu_muid_nSCTSharedHits;   //!
   TBranch        *b_mu_muid_nSCTHoles;   //!
   TBranch        *b_mu_muid_nTRTOutliers;   //!
   TBranch        *b_mu_muid_nTRTHighTOutliers;   //!
   TBranch        *b_mu_muid_nGangedPixels;   //!
   TBranch        *b_mu_muid_nPixelDeadSensors;   //!
   TBranch        *b_mu_muid_nSCTDeadSensors;   //!
   TBranch        *b_mu_muid_nTRTDeadStraws;   //!
   TBranch        *b_mu_muid_expectBLayerHit;   //!
   TBranch        *b_mu_muid_nMDTHits;   //!
   TBranch        *b_mu_muid_nMDTHoles;   //!
   TBranch        *b_mu_muid_nCSCEtaHits;   //!
   TBranch        *b_mu_muid_nCSCEtaHoles;   //!
   TBranch        *b_mu_muid_nCSCPhiHits;   //!
   TBranch        *b_mu_muid_nCSCPhiHoles;   //!
   TBranch        *b_mu_muid_nRPCEtaHits;   //!
   TBranch        *b_mu_muid_nRPCEtaHoles;   //!
   TBranch        *b_mu_muid_nRPCPhiHits;   //!
   TBranch        *b_mu_muid_nRPCPhiHoles;   //!
   TBranch        *b_mu_muid_nTGCEtaHits;   //!
   TBranch        *b_mu_muid_nTGCEtaHoles;   //!
   TBranch        *b_mu_muid_nTGCPhiHits;   //!
   TBranch        *b_mu_muid_nTGCPhiHoles;   //!
   TBranch        *b_mu_muid_nMDTBIHits;   //!
   TBranch        *b_mu_muid_nMDTBMHits;   //!
   TBranch        *b_mu_muid_nMDTBOHits;   //!
   TBranch        *b_mu_muid_nMDTBEEHits;   //!
   TBranch        *b_mu_muid_nMDTBIS78Hits;   //!
   TBranch        *b_mu_muid_nMDTEIHits;   //!
   TBranch        *b_mu_muid_nMDTEMHits;   //!
   TBranch        *b_mu_muid_nMDTEOHits;   //!
   TBranch        *b_mu_muid_nMDTEEHits;   //!
   TBranch        *b_mu_muid_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_muid_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_muid_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_muid_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_muid_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_muid_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_muid_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_muid_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_muid_barrelSectors;   //!
   TBranch        *b_mu_muid_endcapSectors;   //!
   TBranch        *b_mu_muid_trackd0;   //!
   TBranch        *b_mu_muid_trackz0;   //!
   TBranch        *b_mu_muid_trackphi;   //!
   TBranch        *b_mu_muid_tracktheta;   //!
   TBranch        *b_mu_muid_trackqoverp;   //!
   TBranch        *b_mu_muid_trackcov_d0;   //!
   TBranch        *b_mu_muid_trackcov_z0;   //!
   TBranch        *b_mu_muid_trackcov_phi;   //!
   TBranch        *b_mu_muid_trackcov_theta;   //!
   TBranch        *b_mu_muid_trackcov_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_d0_z0;   //!
   TBranch        *b_mu_muid_trackcov_d0_phi;   //!
   TBranch        *b_mu_muid_trackcov_d0_theta;   //!
   TBranch        *b_mu_muid_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_z0_phi;   //!
   TBranch        *b_mu_muid_trackcov_z0_theta;   //!
   TBranch        *b_mu_muid_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_phi_theta;   //!
   TBranch        *b_mu_muid_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_muid_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_muid_trackfitchi2;   //!
   TBranch        *b_mu_muid_trackfitndof;   //!
   TBranch        *b_mu_muid_hastrack;   //!
   TBranch        *b_mu_muid_trackd0beam;   //!
   TBranch        *b_mu_muid_trackz0beam;   //!
   TBranch        *b_mu_muid_tracksigd0beam;   //!
   TBranch        *b_mu_muid_tracksigz0beam;   //!
   TBranch        *b_mu_muid_trackd0pv;   //!
   TBranch        *b_mu_muid_trackz0pv;   //!
   TBranch        *b_mu_muid_tracksigd0pv;   //!
   TBranch        *b_mu_muid_tracksigz0pv;   //!
   TBranch        *b_mu_muid_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_muid_trackd0pvunbiased;   //!
   TBranch        *b_mu_muid_trackz0pvunbiased;   //!
   TBranch        *b_mu_muid_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_muid_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_muid_EFCB_dr;   //!
   TBranch        *b_mu_muid_EFCB_n;   //!
   TBranch        *b_mu_muid_EFCB_MuonType;   //!
   TBranch        *b_mu_muid_EFCB_pt;   //!
   TBranch        *b_mu_muid_EFCB_eta;   //!
   TBranch        *b_mu_muid_EFCB_phi;   //!
   TBranch        *b_mu_muid_EFCB_hasCB;   //!
   TBranch        *b_mu_muid_EFCB_matched;   //!
   TBranch        *b_mu_muid_EFMG_dr;   //!
   TBranch        *b_mu_muid_EFMG_n;   //!
   TBranch        *b_mu_muid_EFMG_MuonType;   //!
   TBranch        *b_mu_muid_EFMG_pt;   //!
   TBranch        *b_mu_muid_EFMG_eta;   //!
   TBranch        *b_mu_muid_EFMG_phi;   //!
   TBranch        *b_mu_muid_EFMG_hasMG;   //!
   TBranch        *b_mu_muid_EFMG_matched;   //!
   TBranch        *b_mu_muid_EFME_dr;   //!
   TBranch        *b_mu_muid_EFME_n;   //!
   TBranch        *b_mu_muid_EFME_MuonType;   //!
   TBranch        *b_mu_muid_EFME_pt;   //!
   TBranch        *b_mu_muid_EFME_eta;   //!
   TBranch        *b_mu_muid_EFME_phi;   //!
   TBranch        *b_mu_muid_EFME_hasME;   //!
   TBranch        *b_mu_muid_EFME_matched;   //!
   TBranch        *b_mu_muid_L2CB_dr;   //!
   TBranch        *b_mu_muid_L2CB_pt;   //!
   TBranch        *b_mu_muid_L2CB_eta;   //!
   TBranch        *b_mu_muid_L2CB_phi;   //!
   TBranch        *b_mu_muid_L2CB_id_pt;   //!
   TBranch        *b_mu_muid_L2CB_ms_pt;   //!
   TBranch        *b_mu_muid_L2CB_nPixHits;   //!
   TBranch        *b_mu_muid_L2CB_nSCTHits;   //!
   TBranch        *b_mu_muid_L2CB_nTRTHits;   //!
   TBranch        *b_mu_muid_L2CB_nTRTHighTHits;   //!
   TBranch        *b_mu_muid_L2CB_matched;   //!
   TBranch        *b_mu_muid_L1_dr;   //!
   TBranch        *b_mu_muid_L1_pt;   //!
   TBranch        *b_mu_muid_L1_eta;   //!
   TBranch        *b_mu_muid_L1_phi;   //!
   TBranch        *b_mu_muid_L1_thrNumber;   //!
   TBranch        *b_mu_muid_L1_RoINumber;   //!
   TBranch        *b_mu_muid_L1_sectorAddress;   //!
   TBranch        *b_mu_muid_L1_firstCandidate;   //!
   TBranch        *b_mu_muid_L1_moreCandInRoI;   //!
   TBranch        *b_mu_muid_L1_moreCandInSector;   //!
   TBranch        *b_mu_muid_L1_source;   //!
   TBranch        *b_mu_muid_L1_hemisphere;   //!
   TBranch        *b_mu_muid_L1_charge;   //!
   TBranch        *b_mu_muid_L1_vetoed;   //!
   TBranch        *b_mu_muid_L1_matched;   //!
   TBranch        *b_muid_n;   //!
   TBranch        *b_muid_nScatters;   //!
   TBranch        *b_muid_scatSignificance;   //!
   TBranch        *b_muid_neighbourSignificance;   //!
   TBranch        *b_muid_eta;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_DB_L1PSK;   //!
   TBranch        *b_trig_DB_HLTPSK;   //!
   TBranch        *b_trig_L1_TAV;   //!
   TBranch        *b_trig_L2_passedPhysics;   //!
   TBranch        *b_trig_EF_passedPhysics;   //!
   TBranch        *b_trig_L1_TBP;   //!
   TBranch        *b_trig_L1_TAP;   //!
   TBranch        *b_trig_L2_passedRaw;   //!
   TBranch        *b_trig_EF_passedRaw;   //!
   TBranch        *b_trig_L2_truncated;   //!
   TBranch        *b_trig_EF_truncated;   //!
   TBranch        *b_trig_L2_resurrected;   //!
   TBranch        *b_trig_EF_resurrected;   //!
   TBranch        *b_trig_L2_passedThrough;   //!
   TBranch        *b_trig_EF_passedThrough;   //!
   TBranch        *b_trig_L2_wasPrescaled;   //!
   TBranch        *b_trig_L2_wasResurrected;   //!
   TBranch        *b_trig_EF_wasPrescaled;   //!
   TBranch        *b_trig_EF_wasResurrected;   //!
   TBranch        *b_L1_2J15;   //!
   TBranch        *b_L1_J10;   //!
   TBranch        *b_L1_J15;   //!
   TBranch        *b_L1_J30;   //!
   TBranch        *b_L1_J75;   //!
   TBranch        *b_trig_L1_jet_n;   //!
   TBranch        *b_trig_L1_jet_eta;   //!
   TBranch        *b_trig_L1_jet_phi;   //!
   TBranch        *b_trig_L1_jet_thrNames;   //!
   TBranch        *b_trig_L1_jet_thrValues;   //!
   TBranch        *b_trig_L1_jet_thrPattern;   //!
   TBranch        *b_trig_L1_jet_et4x4;   //!
   TBranch        *b_trig_L1_jet_et6x6;   //!
   TBranch        *b_trig_L1_jet_et8x8;   //!
   TBranch        *b_trig_L1_jet_RoIWord;   //!
   TBranch        *b_trig_L1_emtau_n;   //!
   TBranch        *b_trig_L1_emtau_eta;   //!
   TBranch        *b_trig_L1_emtau_phi;   //!
   TBranch        *b_trig_L1_emtau_thrNames;   //!
   TBranch        *b_trig_L1_emtau_thrValues;   //!
   TBranch        *b_trig_L1_emtau_core;   //!
   TBranch        *b_trig_L1_emtau_EMClus;   //!
   TBranch        *b_trig_L1_emtau_tauClus;   //!
   TBranch        *b_trig_L1_emtau_EMIsol;   //!
   TBranch        *b_trig_L1_emtau_hadIsol;   //!
   TBranch        *b_trig_L1_emtau_hadCore;   //!
   TBranch        *b_trig_L1_emtau_thrPattern;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3_NL;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3_NZ;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM5;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM12;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14;   //!
   TBranch        *b_trig_L1_emtau_L1_EM16;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_EMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_MV_VTE50;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_NL;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_NZ;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_TE50;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_UNPAIRED_ISO;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_UNPAIRED_NONISO;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_VTE50;   //!
   TBranch        *b_trig_L1_emtau_L1_EM4;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5_EMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM7;   //!
   TBranch        *b_trig_L1_emtau_RoIWord;   //!
   TBranch        *b_trig_EF_jet_n;   //!
   TBranch        *b_trig_EF_jet_E;   //!
   TBranch        *b_trig_EF_jet_pt;   //!
   TBranch        *b_trig_EF_jet_m;   //!
   TBranch        *b_trig_EF_jet_eta;   //!
   TBranch        *b_trig_EF_jet_phi;   //!
   TBranch        *b_trig_EF_jet_a4;   //!
   TBranch        *b_trig_EF_jet_a2;   //!
   TBranch        *b_trig_EF_jet_a4hi;   //!
   TBranch        *b_trig_EF_jet_a2hi;   //!
   TBranch        *b_trig_EF_jet_RoIword;   //!
   TBranch        *b_trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j75_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_L1_esum_thrNames;   //!
   TBranch        *b_trig_L1_esum_ExMiss;   //!
   TBranch        *b_trig_L1_esum_EyMiss;   //!
   TBranch        *b_trig_L1_esum_energyT;   //!
   TBranch        *b_trig_L1_esum_overflowX;   //!
   TBranch        *b_trig_L1_esum_overflowY;   //!
   TBranch        *b_trig_L1_esum_overflowT;   //!
   TBranch        *b_trig_L1_esum_RoIWord0;   //!
   TBranch        *b_trig_L1_esum_RoIWord1;   //!
   TBranch        *b_trig_L1_esum_RoIWord2;   //!
   TBranch        *b_trig_EF_met_MEx;   //!
   TBranch        *b_trig_EF_met_MEy;   //!
   TBranch        *b_trig_EF_met_MEz;   //!
   TBranch        *b_trig_EF_met_sumEt;   //!
   TBranch        *b_trig_EF_met_sumE;   //!
   TBranch        *b_trig_EF_met_flag;   //!
   TBranch        *b_trig_EF_met_nameOfComponent;   //!
   TBranch        *b_trig_EF_met_MExComponent;   //!
   TBranch        *b_trig_EF_met_MEyComponent;   //!
   TBranch        *b_trig_EF_met_MEzComponent;   //!
   TBranch        *b_trig_EF_met_sumEtComponent;   //!
   TBranch        *b_trig_EF_met_sumEComponent;   //!
   TBranch        *b_trig_EF_met_componentCalib0;   //!
   TBranch        *b_trig_EF_met_componentCalib1;   //!
   TBranch        *b_trig_EF_met_sumOfSigns;   //!
   TBranch        *b_trig_EF_met_usedChannels;   //!
   TBranch        *b_trig_EF_met_status;   //!
   TBranch        *b_trig_EF_trigmuonef_n;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu6T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu6_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MV;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NL;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NZ;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU11;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4_EMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_EMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NL;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NZ;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11_EMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_EMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_MV_VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly_barrel;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_L1VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_MSonly;   //!
//   TBranch        *b_trig_EF_trigmuonef_EF_mu6_L1VTE50;   //!
//   TBranch        *b_trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50 ;   //!
   TBranch        *b_trig_EF_trigmuonef_RoINum;   //!
   TBranch        *b_trig_EF_trigmuonef_NSegments;   //!
   TBranch        *b_trig_EF_trigmuonef_NMdtHits;   //!
   TBranch        *b_trig_EF_trigmuonef_NRpcHits;   //!
   TBranch        *b_trig_EF_trigmuonef_NTgcHits;   //!
   TBranch        *b_trig_EF_trigmuonef_NCscHits;   //!
   TBranch        *b_trig_EF_trigmuonef_EtaPreviousLevel;   //!
   TBranch        *b_trig_EF_trigmuonef_PhiPreviousLevel;   //!
   TBranch        *b_trig_EF_trigmuonef_track_n;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MuonType;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NRpcHitsPhi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NTgcHitsPhi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NCscHitsPhi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NRpcHitsEta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NTgcHitsEta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NCscHitsEta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NMdtHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_hasMS;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_hasSA;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_matchChi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_NIdSctHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_NIdPixelHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_NTrtHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_hasCB;   //!
   TBranch        *b_bcmRDO_n;   //!
   TBranch        *b_bcmRDO_channel;   //!
   TBranch        *b_bcmRDO_nhits;   //!
   TBranch        *b_bcmRDO_pulse1pos;   //!
   TBranch        *b_bcmRDO_pulse1width;   //!
   TBranch        *b_bcmRDO_pulse2pos;   //!
   TBranch        *b_bcmRDO_pulse2width;   //!
   TBranch        *b_bcmRDO_lvl1a;   //!
   TBranch        *b_bcmRDO_bcid;   //!
   TBranch        *b_bcmRDO_lvl1id;   //!
   TBranch        *b_ctpRDO_nBC;   //!
   TBranch        *b_ctpRDO_lvl1aBC;   //!
   TBranch        *b_ctpRDO_time_s;   //!
   TBranch        *b_ctpRDO_time_ns;   //!
   TBranch        *b_ctpRDO_pit;   //!
   TBranch        *b_ctpRDO_tbp;   //!
   TBranch        *b_ctpRDO_tap;   //!
   TBranch        *b_ctpRDO_tav;   //!
   TBranch        *b_ctp_decisionTypeWord;   //!
   TBranch        *b_ctp_decisionItems;   //!
   TBranch        *b_ctp_decisionWords;   //!
   TBranch        *b_ctp_nDecisionItems;   //!
   TBranch        *b_mbtsLvl2_nElements;   //!
   TBranch        *b_mbtsLvl2_energies;   //!
   TBranch        *b_mbtsLvl2_ntimes;   //!
   TBranch        *b_mbtsLvl2_times;   //!
   TBranch        *b_lvl2_sp_nElements;   //!
   TBranch        *b_lvl2_sp_hPixelClusTotBins;   //!
   TBranch        *b_lvl2_sp_hPixelClusTotMin;   //!
   TBranch        *b_lvl2_sp_hPixelClusTotMax;   //!
   TBranch        *b_lvl2_sp_hPixelClusSizeBins;   //!
   TBranch        *b_lvl2_sp_hPixelClusSizeMin;   //!
   TBranch        *b_lvl2_sp_hPixelClusSizeMax;   //!
   TBranch        *b_lvl2_sp_pixelClusEndcapC_contents;   //!
   TBranch        *b_lvl2_sp_pixelClusBarrel_contents;   //!
   TBranch        *b_lvl2_sp_pixelClusEndcapA_contents;   //!
   TBranch        *b_lvl2_sp_droppedPixelModuleIds;   //!
   TBranch        *b_lvl2_sp_sctSpEndcapC;   //!
   TBranch        *b_lvl2_sp_sctSpBarrel;   //!
   TBranch        *b_lvl2_sp_sctSpEndcapA;   //!
   TBranch        *b_lvl2_sp_droppedSctModuleIds;   //!
   TBranch        *b_lvl2_mbTrt_nElements;   //!
   TBranch        *b_lvl2_mbTrt_hTotBins;   //!
   TBranch        *b_lvl2_mbTrt_hTotMin;   //!
   TBranch        *b_lvl2_mbTrt_hTotMax;   //!
   TBranch        *b_lvl2_mbTrt_endcapC_contents;   //!
   TBranch        *b_lvl2_mbTrt_barrel_contents;   //!
   TBranch        *b_lvl2_mbTrt_endcapA_contents;   //!
   TBranch        *b_ef_trk_nElements;   //!
   TBranch        *b_ef_trk_hZ0Bins;   //!
   TBranch        *b_ef_trk_hZ0Min;   //!
   TBranch        *b_ef_trk_hZ0Max;   //!
   TBranch        *b_ef_trk_hPtBins;   //!
   TBranch        *b_ef_trk_hPtMin;   //!
   TBranch        *b_ef_trk_hPtMax;   //!
   TBranch        *b_ef_trk_hEtaBins;   //!
   TBranch        *b_ef_trk_hEtaMin;   //!
   TBranch        *b_ef_trk_hEtaMax;   //!
   TBranch        *b_ef_trk_hPhiBins;   //!
   TBranch        *b_ef_trk_hPhiMin;   //!
   TBranch        *b_ef_trk_hPhiMax;   //!
   TBranch        *b_ef_trk_z0_pt_contents;   //!
   TBranch        *b_ef_trk_eta_phi_contents;   //!
   TBranch        *b_trig_L2_jet_n;   //!
   TBranch        *b_trig_L2_jet_E;   //!
   TBranch        *b_trig_L2_jet_eta;   //!
   TBranch        *b_trig_L2_jet_phi;   //!
   TBranch        *b_trig_L2_jet_RoIWord;   //!
   TBranch        *b_trig_L2_jet_ehad0;   //!
   TBranch        *b_trig_L2_jet_eem0;   //!
   TBranch        *b_trig_L2_jet_nLeadingCells;   //!
   TBranch        *b_trig_L2_jet_hecf;   //!
   TBranch        *b_trig_L2_jet_jetQuality;   //!
   TBranch        *b_trig_L2_jet_emf;   //!
   TBranch        *b_trig_L2_jet_jetTimeCells;   //!
   TBranch        *b_trig_L2_jet_L2_fj10_empty_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_fj25_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j10_empty_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j200_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j25_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j50_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j95_larcalib;   //!
   TBranch        *b_vx_n;   //!
   TBranch        *b_vx_x;   //!
   TBranch        *b_vx_y;   //!
   TBranch        *b_vx_z;   //!
   TBranch        *b_vx_cov_x;   //!
   TBranch        *b_vx_cov_y;   //!
   TBranch        *b_vx_cov_z;   //!
   TBranch        *b_vx_cov_xy;   //!
   TBranch        *b_vx_cov_xz;   //!
   TBranch        *b_vx_cov_yz;   //!
   TBranch        *b_vx_type;   //!
   TBranch        *b_vx_chi2;   //!
   TBranch        *b_vx_ndof;   //!
   TBranch        *b_vx_px;   //!
   TBranch        *b_vx_py;   //!
   TBranch        *b_vx_pz;   //!
   TBranch        *b_vx_E;   //!
   TBranch        *b_vx_m;   //!
   TBranch        *b_vx_nTracks;   //!
   TBranch        *b_vx_sumPt;   //!
   TBranch        *b_vx_trk_n;   //!
   TBranch        *b_vx_trk_weight;   //!
   TBranch        *b_vx_trk_index;   //!
   TBranch        *b_el_n;   //!
   TBranch        *b_el_E;   //!
   TBranch        *b_el_Et;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_m;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_px;   //!
   TBranch        *b_el_py;   //!
   TBranch        *b_el_pz;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_author;   //!
   TBranch        *b_el_isEM;   //!
   TBranch        *b_el_isEMLoose;   //!
   TBranch        *b_el_isEMMedium;   //!
   TBranch        *b_el_isEMTight;   //!
   TBranch        *b_el_OQ;   //!
   TBranch        *b_el_convFlag;   //!
   TBranch        *b_el_isConv;   //!
   TBranch        *b_el_nConv;   //!
   TBranch        *b_el_nSingleTrackConv;   //!
   TBranch        *b_el_nDoubleTrackConv;   //!
   TBranch        *b_el_OQRecalc;   //!
   TBranch        *b_el_mediumWithoutTrack;   //!
   TBranch        *b_el_mediumIsoWithoutTrack;   //!
   TBranch        *b_el_tightWithoutTrack;   //!
   TBranch        *b_el_tightIsoWithoutTrack;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_looseIso;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_mediumIso;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_tightIso;   //!
   TBranch        *b_el_loosePP;   //!
   TBranch        *b_el_loosePPIso;   //!
   TBranch        *b_el_mediumPP;   //!
   TBranch        *b_el_mediumPPIso;   //!
   TBranch        *b_el_tightPP;   //!
   TBranch        *b_el_tightPPIso;   //!
   TBranch        *b_el_goodOQ;   //!
   TBranch        *b_el_Ethad;   //!
   TBranch        *b_el_Ethad1;   //!
   TBranch        *b_el_f1;   //!
   TBranch        *b_el_f1core;   //!
   TBranch        *b_el_Emins1;   //!
   TBranch        *b_el_fside;   //!
   TBranch        *b_el_Emax2;   //!
   TBranch        *b_el_ws3;   //!
   TBranch        *b_el_wstot;   //!
   TBranch        *b_el_emaxs1;   //!
   TBranch        *b_el_deltaEs;   //!
   TBranch        *b_el_E233;   //!
   TBranch        *b_el_E237;   //!
   TBranch        *b_el_E277;   //!
   TBranch        *b_el_weta2;   //!
   TBranch        *b_el_f3;   //!
   TBranch        *b_el_f3core;   //!
   TBranch        *b_el_rphiallcalo;   //!
   TBranch        *b_el_Etcone45;   //!
   TBranch        *b_el_Etcone15;   //!
   TBranch        *b_el_Etcone20;   //!
   TBranch        *b_el_Etcone25;   //!
   TBranch        *b_el_Etcone30;   //!
   TBranch        *b_el_Etcone35;   //!
   TBranch        *b_el_Etcone40;   //!
   TBranch        *b_el_ptcone20;   //!
   TBranch        *b_el_ptcone30;   //!
   TBranch        *b_el_ptcone40;   //!
   TBranch        *b_el_nucone20;   //!
   TBranch        *b_el_nucone30;   //!
   TBranch        *b_el_nucone40;   //!
   TBranch        *b_el_Etcone15_pt_corrected;   //!
   TBranch        *b_el_Etcone20_pt_corrected;   //!
   TBranch        *b_el_Etcone25_pt_corrected;   //!
   TBranch        *b_el_Etcone30_pt_corrected;   //!
   TBranch        *b_el_Etcone35_pt_corrected;   //!
   TBranch        *b_el_Etcone40_pt_corrected;   //!
   TBranch        *b_el_convanglematch;   //!
   TBranch        *b_el_convtrackmatch;   //!
   TBranch        *b_el_pos7;   //!
   TBranch        *b_el_etacorrmag;   //!
   TBranch        *b_el_deltaeta1;   //!
   TBranch        *b_el_deltaeta2;   //!
   TBranch        *b_el_deltaphi2;   //!
   TBranch        *b_el_deltaphiRescaled;   //!
   TBranch        *b_el_deltaPhiRot;   //!
   TBranch        *b_el_expectHitInBLayer;   //!
   TBranch        *b_el_trackd0_physics;   //!
   TBranch        *b_el_etaSampling1;   //!
   TBranch        *b_el_reta;   //!
   TBranch        *b_el_rphi;   //!
   TBranch        *b_el_EtringnoisedR03sig2;   //!
   TBranch        *b_el_EtringnoisedR03sig3;   //!
   TBranch        *b_el_EtringnoisedR03sig4;   //!
   TBranch        *b_el_isolationlikelihoodjets;   //!
   TBranch        *b_el_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_el_electronweight;   //!
   TBranch        *b_el_electronbgweight;   //!
   TBranch        *b_el_softeweight;   //!
   TBranch        *b_el_softebgweight;   //!
   TBranch        *b_el_neuralnet;   //!
   TBranch        *b_el_Hmatrix;   //!
   TBranch        *b_el_Hmatrix5;   //!
   TBranch        *b_el_adaboost;   //!
   TBranch        *b_el_softeneuralnet;   //!
   TBranch        *b_el_zvertex;   //!
   TBranch        *b_el_errz;   //!
   TBranch        *b_el_etap;   //!
   TBranch        *b_el_depth;   //!
   TBranch        *b_el_refittedTrack_n;   //!
   TBranch        *b_el_refittedTrack_author;   //!
   TBranch        *b_el_refittedTrack_chi2;   //!
   TBranch        *b_el_refittedTrack_hasBrem;   //!
   TBranch        *b_el_refittedTrack_bremRadius;   //!
   TBranch        *b_el_refittedTrack_bremZ;   //!
   TBranch        *b_el_refittedTrack_bremRadiusErr;   //!
   TBranch        *b_el_refittedTrack_bremZErr;   //!
   TBranch        *b_el_refittedTrack_bremFitStatus;   //!
   TBranch        *b_el_refittedTrack_qoverp;   //!
   TBranch        *b_el_refittedTrack_d0;   //!
   TBranch        *b_el_refittedTrack_z0;   //!
   TBranch        *b_el_refittedTrack_theta;   //!
   TBranch        *b_el_refittedTrack_phi;   //!
   TBranch        *b_el_refittedTrack_LMqoverp;   //!
   TBranch        *b_el_refittedTrack_covd0;   //!
   TBranch        *b_el_refittedTrack_covz0;   //!
   TBranch        *b_el_refittedTrack_covphi;   //!
   TBranch        *b_el_refittedTrack_covtheta;   //!
   TBranch        *b_el_refittedTrack_covqoverp;   //!
   TBranch        *b_el_refittedTrack_covd0z0;   //!
   TBranch        *b_el_refittedTrack_covz0phi;   //!
   TBranch        *b_el_refittedTrack_covz0theta;   //!
   TBranch        *b_el_refittedTrack_covz0qoverp;   //!
   TBranch        *b_el_refittedTrack_covd0phi;   //!
   TBranch        *b_el_refittedTrack_covd0theta;   //!
   TBranch        *b_el_refittedTrack_covd0qoverp;   //!
   TBranch        *b_el_refittedTrack_covphitheta;   //!
   TBranch        *b_el_refittedTrack_covphiqoverp;   //!
   TBranch        *b_el_refittedTrack_covthetaqoverp;   //!
   TBranch        *b_el_Es0;   //!
   TBranch        *b_el_etas0;   //!
   TBranch        *b_el_phis0;   //!
   TBranch        *b_el_Es1;   //!
   TBranch        *b_el_etas1;   //!
   TBranch        *b_el_phis1;   //!
   TBranch        *b_el_Es2;   //!
   TBranch        *b_el_etas2;   //!
   TBranch        *b_el_phis2;   //!
   TBranch        *b_el_Es3;   //!
   TBranch        *b_el_etas3;   //!
   TBranch        *b_el_phis3;   //!
   TBranch        *b_el_E_PreSamplerB;   //!
   TBranch        *b_el_E_EMB1;   //!
   TBranch        *b_el_E_EMB2;   //!
   TBranch        *b_el_E_EMB3;   //!
   TBranch        *b_el_E_PreSamplerE;   //!
   TBranch        *b_el_E_EME1;   //!
   TBranch        *b_el_E_EME2;   //!
   TBranch        *b_el_E_EME3;   //!
   TBranch        *b_el_E_HEC0;   //!
   TBranch        *b_el_E_HEC1;   //!
   TBranch        *b_el_E_HEC2;   //!
   TBranch        *b_el_E_HEC3;   //!
   TBranch        *b_el_E_TileBar0;   //!
   TBranch        *b_el_E_TileBar1;   //!
   TBranch        *b_el_E_TileBar2;   //!
   TBranch        *b_el_E_TileGap1;   //!
   TBranch        *b_el_E_TileGap2;   //!
   TBranch        *b_el_E_TileGap3;   //!
   TBranch        *b_el_E_TileExt0;   //!
   TBranch        *b_el_E_TileExt1;   //!
   TBranch        *b_el_E_TileExt2;   //!
   TBranch        *b_el_E_FCAL0;   //!
   TBranch        *b_el_E_FCAL1;   //!
   TBranch        *b_el_E_FCAL2;   //!
   TBranch        *b_el_cl_E;   //!
   TBranch        *b_el_cl_pt;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_cl_phi;   //!
   TBranch        *b_el_firstEdens;   //!
   TBranch        *b_el_cellmaxfrac;   //!
   TBranch        *b_el_longitudinal;   //!
   TBranch        *b_el_secondlambda;   //!
   TBranch        *b_el_lateral;   //!
   TBranch        *b_el_secondR;   //!
   TBranch        *b_el_centerlambda;   //!
   TBranch        *b_el_rawcl_Es0;   //!
   TBranch        *b_el_rawcl_etas0;   //!
   TBranch        *b_el_rawcl_phis0;   //!
   TBranch        *b_el_rawcl_Es1;   //!
   TBranch        *b_el_rawcl_etas1;   //!
   TBranch        *b_el_rawcl_phis1;   //!
   TBranch        *b_el_rawcl_Es2;   //!
   TBranch        *b_el_rawcl_etas2;   //!
   TBranch        *b_el_rawcl_phis2;   //!
   TBranch        *b_el_rawcl_Es3;   //!
   TBranch        *b_el_rawcl_etas3;   //!
   TBranch        *b_el_rawcl_phis3;   //!
   TBranch        *b_el_rawcl_E;   //!
   TBranch        *b_el_rawcl_pt;   //!
   TBranch        *b_el_rawcl_eta;   //!
   TBranch        *b_el_rawcl_phi;   //!
   TBranch        *b_el_trackd0;   //!
   TBranch        *b_el_trackz0;   //!
   TBranch        *b_el_trackphi;   //!
   TBranch        *b_el_tracktheta;   //!
   TBranch        *b_el_trackqoverp;   //!
   TBranch        *b_el_trackpt;   //!
   TBranch        *b_el_tracketa;   //!
   TBranch        *b_el_trackcov_d0;   //!
   TBranch        *b_el_trackcov_z0;   //!
   TBranch        *b_el_trackcov_phi;   //!
   TBranch        *b_el_trackcov_theta;   //!
   TBranch        *b_el_trackcov_qoverp;   //!
   TBranch        *b_el_trackcov_d0_z0;   //!
   TBranch        *b_el_trackcov_d0_phi;   //!
   TBranch        *b_el_trackcov_d0_theta;   //!
   TBranch        *b_el_trackcov_d0_qoverp;   //!
   TBranch        *b_el_trackcov_z0_phi;   //!
   TBranch        *b_el_trackcov_z0_theta;   //!
   TBranch        *b_el_trackcov_z0_qoverp;   //!
   TBranch        *b_el_trackcov_phi_theta;   //!
   TBranch        *b_el_trackcov_phi_qoverp;   //!
   TBranch        *b_el_trackcov_theta_qoverp;   //!
   TBranch        *b_el_trackfitchi2;   //!
   TBranch        *b_el_trackfitndof;   //!
   TBranch        *b_el_nBLHits;   //!
   TBranch        *b_el_nPixHits;   //!
   TBranch        *b_el_nSCTHits;   //!
   TBranch        *b_el_nTRTHits;   //!
   TBranch        *b_el_nTRTHighTHits;   //!
   TBranch        *b_el_nPixHoles;   //!
   TBranch        *b_el_nSCTHoles;   //!
   TBranch        *b_el_nTRTHoles;   //!
   TBranch        *b_el_nBLSharedHits;   //!
   TBranch        *b_el_nPixSharedHits;   //!
   TBranch        *b_el_nSCTSharedHits;   //!
   TBranch        *b_el_nBLayerOutliers;   //!
   TBranch        *b_el_nPixelOutliers;   //!
   TBranch        *b_el_nSCTOutliers;   //!
   TBranch        *b_el_nTRTOutliers;   //!
   TBranch        *b_el_nTRTHighTOutliers;   //!
   TBranch        *b_el_expectBLayerHit;   //!
   TBranch        *b_el_nSiHits;   //!
   TBranch        *b_el_TRTHighTHitsRatio;   //!
   TBranch        *b_el_TRTHighTOutliersRatio;   //!
   TBranch        *b_el_pixeldEdx;   //!
   TBranch        *b_el_nGoodHitsPixeldEdx;   //!
   TBranch        *b_el_massPixeldEdx;   //!
   TBranch        *b_el_likelihoodsPixeldEdx;   //!
   TBranch        *b_el_eProbabilityComb;   //!
   TBranch        *b_el_eProbabilityHT;   //!
   TBranch        *b_el_eProbabilityToT;   //!
   TBranch        *b_el_eProbabilityBrem;   //!
   TBranch        *b_el_vertweight;   //!
   TBranch        *b_el_vertx;   //!
   TBranch        *b_el_verty;   //!
   TBranch        *b_el_vertz;   //!
   TBranch        *b_el_trackd0beam;   //!
   TBranch        *b_el_trackz0beam;   //!
   TBranch        *b_el_tracksigd0beam;   //!
   TBranch        *b_el_tracksigz0beam;   //!
   TBranch        *b_el_trackd0pv;   //!
   TBranch        *b_el_trackz0pv;   //!
   TBranch        *b_el_tracksigd0pv;   //!
   TBranch        *b_el_tracksigz0pv;   //!
   TBranch        *b_el_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackd0pvunbiased;   //!
   TBranch        *b_el_trackz0pvunbiased;   //!
   TBranch        *b_el_tracksigd0pvunbiased;   //!
   TBranch        *b_el_tracksigz0pvunbiased;   //!
   TBranch        *b_el_hastrack;   //!
   TBranch        *b_el_deltaEmax2;   //!
   TBranch        *b_el_calibHitsShowerDepth;   //!
   TBranch        *b_el_isIso;   //!
   TBranch        *b_el_mvaptcone20;   //!
   TBranch        *b_el_mvaptcone30;   //!
   TBranch        *b_el_mvaptcone40;   //!
   TBranch        *b_ph_n;   //!
   TBranch        *b_ph_E;   //!
   TBranch        *b_ph_Et;   //!
   TBranch        *b_ph_pt;   //!
   TBranch        *b_ph_m;   //!
   TBranch        *b_ph_eta;   //!
   TBranch        *b_ph_phi;   //!
   TBranch        *b_ph_px;   //!
   TBranch        *b_ph_py;   //!
   TBranch        *b_ph_pz;   //!
   TBranch        *b_ph_author;   //!
   TBranch        *b_ph_isRecovered;   //!
   TBranch        *b_ph_isEM;   //!
   TBranch        *b_ph_isEMLoose;   //!
   TBranch        *b_ph_isEMMedium;   //!
   TBranch        *b_ph_isEMTight;   //!
   TBranch        *b_ph_OQ;   //!
   TBranch        *b_ph_OQRecalc;   //!
   TBranch        *b_ph_loose;   //!
   TBranch        *b_ph_looseIso;   //!
   TBranch        *b_ph_tight;   //!
   TBranch        *b_ph_tightIso;   //!
   TBranch        *b_ph_looseAR;   //!
   TBranch        *b_ph_looseARIso;   //!
   TBranch        *b_ph_tightAR;   //!
   TBranch        *b_ph_tightARIso;   //!
   TBranch        *b_ph_goodOQ;   //!
   TBranch        *b_ph_Ethad;   //!
   TBranch        *b_ph_Ethad1;   //!
   TBranch        *b_ph_E033;   //!
   TBranch        *b_ph_f1;   //!
   TBranch        *b_ph_f1core;   //!
   TBranch        *b_ph_Emins1;   //!
   TBranch        *b_ph_fside;   //!
   TBranch        *b_ph_Emax2;   //!
   TBranch        *b_ph_ws3;   //!
   TBranch        *b_ph_wstot;   //!
   TBranch        *b_ph_E132;   //!
   TBranch        *b_ph_E1152;   //!
   TBranch        *b_ph_emaxs1;   //!
   TBranch        *b_ph_deltaEs;   //!
   TBranch        *b_ph_E233;   //!
   TBranch        *b_ph_E237;   //!
   TBranch        *b_ph_E277;   //!
   TBranch        *b_ph_weta2;   //!
   TBranch        *b_ph_f3;   //!
   TBranch        *b_ph_f3core;   //!
   TBranch        *b_ph_rphiallcalo;   //!
   TBranch        *b_ph_Etcone45;   //!
   TBranch        *b_ph_Etcone15;   //!
   TBranch        *b_ph_Etcone20;   //!
   TBranch        *b_ph_Etcone25;   //!
   TBranch        *b_ph_Etcone30;   //!
   TBranch        *b_ph_Etcone35;   //!
   TBranch        *b_ph_Etcone40;   //!
   TBranch        *b_ph_ptcone20;   //!
   TBranch        *b_ph_ptcone30;   //!
   TBranch        *b_ph_ptcone40;   //!
   TBranch        *b_ph_nucone20;   //!
   TBranch        *b_ph_nucone30;   //!
   TBranch        *b_ph_nucone40;   //!
   TBranch        *b_ph_Etcone15_pt_corrected;   //!
   TBranch        *b_ph_Etcone20_pt_corrected;   //!
   TBranch        *b_ph_Etcone25_pt_corrected;   //!
   TBranch        *b_ph_Etcone30_pt_corrected;   //!
   TBranch        *b_ph_Etcone35_pt_corrected;   //!
   TBranch        *b_ph_Etcone40_pt_corrected;   //!
   TBranch        *b_ph_convanglematch;   //!
   TBranch        *b_ph_convtrackmatch;   //!
   TBranch        *b_ph_reta;   //!
   TBranch        *b_ph_rphi;   //!
   TBranch        *b_ph_EtringnoisedR03sig2;   //!
   TBranch        *b_ph_EtringnoisedR03sig3;   //!
   TBranch        *b_ph_EtringnoisedR03sig4;   //!
   TBranch        *b_ph_isolationlikelihoodjets;   //!
   TBranch        *b_ph_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_ph_loglikelihood;   //!
   TBranch        *b_ph_photonweight;   //!
   TBranch        *b_ph_photonbgweight;   //!
   TBranch        *b_ph_neuralnet;   //!
   TBranch        *b_ph_Hmatrix;   //!
   TBranch        *b_ph_Hmatrix5;   //!
   TBranch        *b_ph_adaboost;   //!
   TBranch        *b_ph_zvertex;   //!
   TBranch        *b_ph_errz;   //!
   TBranch        *b_ph_etap;   //!
   TBranch        *b_ph_depth;   //!
   TBranch        *b_ph_cl_E;   //!
   TBranch        *b_ph_cl_pt;   //!
   TBranch        *b_ph_cl_eta;   //!
   TBranch        *b_ph_cl_phi;   //!
   TBranch        *b_ph_Es0;   //!
   TBranch        *b_ph_etas0;   //!
   TBranch        *b_ph_phis0;   //!
   TBranch        *b_ph_Es1;   //!
   TBranch        *b_ph_etas1;   //!
   TBranch        *b_ph_phis1;   //!
   TBranch        *b_ph_Es2;   //!
   TBranch        *b_ph_etas2;   //!
   TBranch        *b_ph_phis2;   //!
   TBranch        *b_ph_Es3;   //!
   TBranch        *b_ph_etas3;   //!
   TBranch        *b_ph_phis3;   //!
   TBranch        *b_ph_rawcl_Es0;   //!
   TBranch        *b_ph_rawcl_etas0;   //!
   TBranch        *b_ph_rawcl_phis0;   //!
   TBranch        *b_ph_rawcl_Es1;   //!
   TBranch        *b_ph_rawcl_etas1;   //!
   TBranch        *b_ph_rawcl_phis1;   //!
   TBranch        *b_ph_rawcl_Es2;   //!
   TBranch        *b_ph_rawcl_etas2;   //!
   TBranch        *b_ph_rawcl_phis2;   //!
   TBranch        *b_ph_rawcl_Es3;   //!
   TBranch        *b_ph_rawcl_etas3;   //!
   TBranch        *b_ph_rawcl_phis3;   //!
   TBranch        *b_ph_rawcl_E;   //!
   TBranch        *b_ph_rawcl_pt;   //!
   TBranch        *b_ph_rawcl_eta;   //!
   TBranch        *b_ph_rawcl_phi;   //!
   TBranch        *b_ph_deltaEmax2;   //!
   TBranch        *b_ph_calibHitsShowerDepth;   //!
   TBranch        *b_ph_isIso;   //!
   TBranch        *b_ph_mvaptcone20;   //!
   TBranch        *b_ph_mvaptcone30;   //!
   TBranch        *b_ph_mvaptcone40;   //!
   TBranch        *b_ph_topoEtcone20;   //!
   TBranch        *b_ph_topoEtcone40;   //!
   TBranch        *b_ph_topoEtcone60;   //!
   TBranch        *b_mu_staco_truth_dr;   //!
   TBranch        *b_mu_staco_truth_E;   //!
   TBranch        *b_mu_staco_truth_pt;   //!
   TBranch        *b_mu_staco_truth_eta;   //!
   TBranch        *b_mu_staco_truth_phi;   //!
   TBranch        *b_mu_staco_truth_type;   //!
   TBranch        *b_mu_staco_truth_status;   //!
   TBranch        *b_mu_staco_truth_barcode;   //!
   TBranch        *b_mu_staco_truth_mothertype;   //!
   TBranch        *b_mu_staco_truth_motherbarcode;   //!
   TBranch        *b_mu_staco_truth_matched;   //!
   TBranch        *b_mu_muid_truth_dr;   //!   
   TBranch        *b_mu_muid_truth_E;   //!
   TBranch        *b_mu_muid_truth_pt;   //!  
   TBranch        *b_mu_muid_truth_eta;   //!
   TBranch        *b_mu_muid_truth_phi;   //!
   TBranch        *b_mu_muid_truth_type;   //!
   TBranch        *b_mu_muid_truth_status;   //!
   TBranch        *b_mu_muid_truth_barcode;   //!
   TBranch        *b_mu_muid_truth_mothertype;   //!
   TBranch        *b_mu_muid_truth_motherbarcode;   //!
   TBranch        *b_mu_muid_truth_matched;   //! 

    //truth info
        TBranch		*b_mc_channel_number;
	TBranch 	*b_mc_event_number;
	TBranch 	*b_mc_event_weight;
	TBranch		*b_mcVx_n;
	TBranch	    	*b_mcVx_x;
	TBranch        	*b_mcVx_y;
	TBranch         *b_mcVx_z;
	TBranch		*b_mc_n;
	TBranch		*b_mc_gen_E;
	TBranch		*b_mc_gen_pt;
	TBranch		*b_mc_gen_eta;
	TBranch		*b_mc_gen_phi;
	TBranch		*b_mc_gen_type;
	TBranch		*b_mc_gen_status;
	TBranch		*b_mc_gen_barcode;
	TBranch		*b_mc_gen_mothertype;
	TBranch		*b_mc_gen_motherbarcode;
	TBranch		*b_mc_perigee_ok;
	TBranch		*b_mc_perigee_d0;
	TBranch		*b_mc_perigee_z0;
	TBranch		*b_mc_perigee_phi;
	TBranch		*b_mc_perigee_theta;
	TBranch		*b_mc_perigee_qoverp;
	TBranch		*b_mc_charge;
	TBranch		*b_mc_unstable_n;
	TBranch		*b_mc_unstable_gen_pt;
	TBranch		*b_mc_unstable_gen_eta;
	TBranch		*b_mc_unstable_gen_phi;
	TBranch		*b_mc_unstable_gen_energy;
	TBranch		*b_mc_unstable_pdg;
	TBranch		*b_mc_unstable_charge;
	TBranch		*b_mc_unstable_barcode;
	TBranch		*b_mc_unstable_status;
	TBranch		*b_mc_unstable_mother_pdg;



   BranchBase(){};
   BranchBase(TString str1);
   virtual ~BranchBase();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree){};
   virtual int      TurnOnBranches();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void	    Set_Muon_Branches(TTree *tree) {};
   virtual void	    Set_Truth_Branches(TTree *tree) {};
   virtual void     Set_Trig_and_Global_Branches(TTree *tree){};
   virtual Bool_t   EventCuts();
   virtual void     Fill_Trig_and_Global_Branches(){};
   virtual void     Fill_Muon_Branches() {};
   virtual void     Fill_Truth_Branches() {};

};

#endif

