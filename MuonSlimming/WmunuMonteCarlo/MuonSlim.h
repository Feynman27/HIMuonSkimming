#ifndef MuonSlim_h
#define MuonSlim_h

#include <iostream>
#include <cmath>
#include <string>
#include <vector>


#ifdef __MAKECINT__
#pragma link C++ class std::vector < std::vector<int> >+;   
#pragma link C++ class std::vector < std::vector<float> >+;
#endif

#include "TChain.h"
#include "TTree.h"
#include "TString.h"
#include "TFile.h"
#include "TH1.h"
#include "TMath.h"
#include "TRandom3.h"

#include "TDirectory.h"
#include "TSystem.h"
#include "TVector3.h"
#include "TLorentzVector.h"

#include "MuonMomentumCorrections/MuonMomentumCorrections/SmearingClass.h"

class MuonSlim {
	
	public:
	
		int SlimHISingleMuon(TString inputFiles,bool doMSLOW, bool doMSUP, bool doIDLOW, bool doIDUP);	
		int assignPrompt(int pdgIdMother, int pdgId);
		int ppMuonSelector(int index);
		int HICombinedMuonSelector(int index);
		int HIStandAloneCombinedMuonSelector(int index);
		int MatchTrigger(int imu, float dR, int triggerIndex);
		void SetBranches();
		float getSubtractedMpt();
		float getScaledMpt(float subMPT, float scalefactor,float ptmu);
		float randomEventMPx(int i, TFile *fMB);
		float randomEventMPy(int i,TFile *fMB);
		float randomEventCentrality(int i,TFile *fMB);
		float getMpxCorrection(float Centrality); 
		float getMpyCorrection(float Centrality); 
		float AssignCentrality(float fcal_Et, bool isHI , bool isHIp );
		TLorentzVector WbosonFourVector(int igen);

		#include "prun_helper.h"
		MuonSlim();
		~MuonSlim();

	private:


		TChain* ntupleToRead;

		TFile* output;
		TFile* fMB;

		TH1F* hM;
		TH1F* hZDY;
		TH1F* hJETS15;
		TH1F* hJETS20;
		TH1F* hJETS25;
		TH1F* hJETS30; 

		TTree* tree;
		TTree* tMB;

		//MuonSmear::SmearingClass mcp_smear ;		

		
		std::string sMC;
		std::string sMCJ2;
		std::string sMB;
		std::string sHP;
		std::string sHipHP;
		std::string sPP;
		std::string sMSUP;
		std::string sMSLOW;
		std::string sIDUP;
		std::string sIDLOW;

  		TRandom3 r;
		bool doSmearSyst;

		TString outName;

		float mu_muid_truth_dr[30], mu_muid_truth_E[30], mu_muid_truth_pt[30], mu_muid_truth_eta[30], mu_muid_truth_phi[30];
		int   mu_muid_nPixHits[30], mu_muid_nBLHits[30], mu_muid_nSCTHits[30], mu_muid_nPixHoles[30], mu_muid_nSCTHoles[30],mu_muid_matchndof[30];
		int   mu_muid_expectBLayerHit[30], mu_muid_nPixelDeadSensors[30],mu_muid_nSCTDeadSensors[30],mu_muid_nTRTOutliers[30];
		float mu_muid_d0_exPV[30],mu_muid_z0_exPV[30];
		float mu_muid_id_d0_exPV[30], mu_muid_id_qoverp[30], mu_muid_me_qoverp[30], mu_muid_matchchi2[30], ;
		int  mu_muid_truth_type[30], mu_muid_truth_barcode[30], mu_muid_truth_mothertype[30], mu_muid_truth_motherbarcode[30], mu_muid_truth_matched[30];
		int mu_muid_n, muid_npairs, trig_EF_trigmuonef_n;
		int Mymu_muid_n,Myantikt2HIItrEM_n,Mytrig_EF_trigmuonef_n,Mymc_mu_n,Mymc_gamma_n;
		int trig_EF_trigmuonef_track_n[30]  ;
		int isGoodMuon[30]  ;
		int mu_muid_nTRTHits[30]  ;
		int RunNumber, EventNumber, EF_mu4_MSonly_L1TE50, EF_mu4_L1VTE50 , EF_mu10_MSonly_EFFS_L1ZDC, EF_mu10_MSonly_EFFS_L1TE20, EF_mu10_MSonly_EFFS_L1TE10, EF_mu10, EF_mu4;
		int EF_mu8,EF_mu4_j40_a4hi_EFFS_matched,EF_mu4_IDTrkNoCut,EF_L1MBTS_2_NoAlg,EF_mu8_IDTrkNoCut;
		int EF_L1MBTS_1_1_NoAlg;
		int EF_mbZdc_a_c_L1VTE50_trk,EF_L1TE50_NoAlg, L1_MU0;
		int mu_muid_isCombinedMuon[30],mu_muid_L1_matched[30] ;
		int mu_muid_isStandAloneMuon[30];
		float mu_muid_ms_d0[30],mu_muid_ms_z0[30];

		int mc_mu_n, mc_gamma_n;
		float mc_mu_gen_E[30],mc_mu_gen_pt[30],mc_mu_gen_eta[30],mc_mu_gen_phi[30],mc_mu_charge[30];;
		int mc_mu_gen_mothertype[30],mc_mu_gen_type[30], mc_mu_gen_barcode[30],mc_mu_gen_motherBarcode[30] ;
		int mc_nu_n;
		float mc_nu_gen_E[30],mc_nu_gen_pt[30],mc_nu_gen_eta[30],mc_nu_gen_phi[30], mc_nu_charge[30];
		int mc_nu_gen_mothertype[30],mc_nu_gen_type[30];
		float mc_gen_WbosonMass[30],mc_gen_WbosonPt[30],mc_gen_WbosonRapidity[30],mc_gen_WbosonPseudoRapidity[30],mc_gen_WbosonPhi[30];
		float mc_gamma_gen_E[30],mc_gamma_gen_pt[30],mc_gamma_gen_eta[30],mc_gamma_gen_phi[30],mc_gamma_charge[30];;
		int mc_gamma_gen_mothertype[30],mc_gamma_gen_type[30];

		float Mymc_mu_gen_E[30],Mymc_mu_gen_pt[30], Mymc_mu_gen_eta[30], Mymc_mu_gen_phi[30],Mymc_mu_charge[30];
		//float recGenMuCone,recGenTriggeredMuCone,recGenStandardCutMuCone,recGenMptMuCone,recGenMtMuCone; 
		int Mymc_mu_gen_type[30], Mymc_mu_gen_mothertype[30];
		float Mymc_nu_gen_E[30],Mymc_nu_gen_pt[30], Mymc_nu_gen_eta[30], Mymc_nu_gen_phi[30], Mymc_nu_charge[30];
		int Mymc_nu_gen_type[30], Mymc_nu_gen_mothertype[30];
		float Mymc_gen_WbosonNominalPhi[30],Mymc_gen_WbosonNominalMass[30],Mymc_gen_WbosonNominalPt[30], Mymc_gen_WbosonNominalRapidity[30],Mymc_gen_WbosonNominalPseudoRapidity[30];
		float Mymc_gen_WbosonCorrectedPhi[30],Mymc_gen_WbosonCorrectedMass[30],Mymc_gen_WbosonCorrectedPt[30], Mymc_gen_WbosonCorrectedRapidity[30],Mymc_gen_WbosonCorrectedPseudoRapidity[30];
		float dPhiWJet[30];
		float Mymc_gamma_gen_E[30],Mymc_gamma_gen_pt[30], Mymc_gamma_gen_eta[30], Mymc_gamma_gen_phi[30], Mymc_gamma_charge[30];
		int Mymc_gamma_gen_type[30], Mymc_gamma_gen_mothertype[30],Mymc_mu_gen_motherBarcode[30],Mymc_mu_gen_barcode[30] ;


		int trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50[30]  ;
		int trig_EF_trigmuonef_EF_mu4_L1VTE50[30]  ;
		int trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC[30]  ;
		int trig_EF_trigmuonef_EF_mu10[30]  ;
		int trig_EF_trigmuonef_EF_mu4[30]  ;
		int trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20[30]  ;
		int trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10[30]  ;
		int trig_EF_trigmuonef_EF_mu8_IDTrkNoCut[30]; 
		int trig_EF_trigmuonef_EF_mu8[30];
		int trig_EF_trigmuonef_EF_mu4_j40_a4hi_EFFS_matched[30];
		int trig_EF_trigmuonef_EF_mu4_IDTrkNoCut[30];
		//int EF_mu4_MSonly_EFFS_L1ZDC[muonBranch], trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC[muonBranch];  

		double pTCB_smeared[30], mTCB_smeared[30], pTMS_smeared[30], pTID_smeared[30];
		float pt_tru[30], E_tru[30], eta_tru[30], phi_tru[30], truthdR_muid[30]; 
		int truthMatched_muid[30], motherBarcode_muid_tru[30],barcode_muid_tru[30];

		float mu_muid_pt[30]  ;
		float mu_muid_eta[30]  ;
		float mu_muid_id_phi_exPV[30]  ;
		float mu_muid_ms_theta[30]  ;
		float mu_muid_ms_phi[30]  ;
		float muid_scatSignificance[30]  ;
		float mu_muid_charge[30]  ;
		float Fcal_Et, Centrality, mbtime_timeA, mbtime_timeC ;
		float vx_x,vx_y,vx_z, vx_xNt ,vx_yNt,vx_zNt;
		//temp hack for Hip
		 
    		std::vector<float>   *cccEt_p_Eh_FCal;

		float caloMET,caloMEx,caloMEy,caloMETPhi,caloMETEta  ;
		float MET_RefFinal_et,MET_RefFinal_etx,MET_RefFinal_ety,MET_RefFinal_phi,MET_RefFinal_sumet;
		float subtractedMPT ;

		float nu_pt500 ;
		float nu_px500 ;
		float nu_py500 ;
		float nu_pz500 ;
		float nu_theta500 ;
		float nu_eta500 ;
		float nu_phi500 ;

		float nu_pt1000 ;
		float nu_px1000 ;
		float nu_py1000 ;
		float nu_pz1000 ;
		float nu_theta1000 ;
		float nu_eta1000 ;
		float nu_phi1000 ;

		float nu_pt2000 ;
		float nu_px2000 ;
		float nu_py2000 ;
		float nu_pz2000 ;
		float nu_theta2000 ;
		float nu_eta2000 ;
		float nu_phi2000 ;

		float nu_pt3000 ;
		float nu_px3000 ;
		float nu_py3000 ;
		float nu_pz3000 ;
		float nu_theta3000 ;
		float nu_eta3000 ;
		float nu_phi3000 ;

		float nu_pt4000 ;
		float nu_px4000 ;
		float nu_py4000 ;
		float nu_theta4000 ;
		float nu_eta4000 ;
		float nu_phi4000 ;

		float nu_pt5000 ;
		float nu_px5000 ;
		float nu_py5000 ;
		float nu_theta5000 ;
		float nu_eta5000 ;
		float nu_phi5000 ;



		int hasHiPtMuon ;
		float scaledMPT[30] ;
		float mu_muid_phi[30]  ;
		float mu_muid_me_qoverp_exPV[30]  ;
		float mu_muid_ptcone20[30],mu_muid_ptcone30[30],mu_muid_ptcone40[30],mu_muid_etcone20[30],mu_muid_etcone30[30],mu_muid_etcone40[30] ;
		float mu_muid_ptcone10ID05[30],mu_muid_ptcone15ID05[30],mu_muid_ptcone20ID05[30],mu_muid_ptcone30ID05[30],mu_muid_ptcone40ID05[30],mu_muid_ptcone50ID05[30]; 
		float mu_muid_ptcone10ID075[30],mu_muid_ptcone15ID075[30],mu_muid_ptcone20ID075[30],mu_muid_ptcone30ID075[30],mu_muid_ptcone40ID075[30],mu_muid_ptcone50ID075[30]; 
		float mu_muid_ptcone10ID1[30],mu_muid_ptcone15ID1[30],mu_muid_ptcone20ID1[30],mu_muid_ptcone30ID1[30],mu_muid_ptcone40ID1[30],mu_muid_ptcone50ID1[30]; 
		float mu_muid_ptcone10ID2[30],mu_muid_ptcone15ID2[30],mu_muid_ptcone20ID2[30],mu_muid_ptcone30ID2[30],mu_muid_ptcone40ID2[30],mu_muid_ptcone50ID2[30]; 
		float mu_muid_ptcone10ID3[30],mu_muid_ptcone15ID3[30],mu_muid_ptcone20ID3[30],mu_muid_ptcone30ID3[30],mu_muid_ptcone40ID3[30],mu_muid_ptcone50ID3[30]; 
		float mu_muid_ptcone10ID4[30],mu_muid_ptcone15ID4[30],mu_muid_ptcone20ID4[30],mu_muid_ptcone30ID4[30],mu_muid_ptcone40ID4[30],mu_muid_ptcone50ID4[30]; 
		float mu_muid_ptcone10ID5[30],mu_muid_ptcone15ID5[30],mu_muid_ptcone20ID5[30],mu_muid_ptcone30ID5[30],mu_muid_ptcone40ID5[30],mu_muid_ptcone50ID5[30]; 
		float mu_muid_ptcone10ID6[30],mu_muid_ptcone15ID6[30],mu_muid_ptcone20ID6[30],mu_muid_ptcone30ID6[30],mu_muid_ptcone40ID6[30],mu_muid_ptcone50ID6[30]; 
		float mu_muid_id_z0_exPV[30], mu_muid_me_z0[30], mu_muid_ms_qoverp[30], mu_muid_id_qoverp_exPV[30], mu_muid_id_theta_exPV[30] ;

		std::vector<std::vector<float> > *trig_EF_trigmuonef_track_MS_phi  ;
		std::vector<std::vector<float> > *trig_EF_trigmuonef_track_MS_eta ;
		std::vector<std::vector<int> > *trig_EF_trigmuonef_track_MS_hasMS ;

		// --JETS-- //
		int jetBranch ;
		int hiPtJets ;
		int antikt2HIItrEM_n;
		float antikt2HIItrEM_E[100], antikt2HIItrEM_pt[100], antikt2HIItrEM_eta[100], antikt2HIItrEM_phi[100] ;
		int AntiKt4TopoEM_n;
		float AntiKt4TopoEM_E[100], AntiKt4TopoEM_pt[100], AntiKt4TopoEM_eta[100], AntiKt4TopoEM_phi[100] ;
		int njets;
		float jet_E[100], jet_Et[100], jet_phi[100], jet_pt[100], jet_eta[100]; 

		std::vector<std::vector<float> > *mujetdR;
		std::vector<std::vector<float> > *trigMu4dR;
		std::vector<std::vector<float> > *trigMu10dR;
		//std::vector<float> mujetdR_one;
		std::vector<std::vector<float> > *massCB;
		//std::vector<float> massCB_one;

		std::vector<std::vector<float> > *dphiMuJet;
		//std::vector<float> dphiMuJet_one;

		std::vector<std::vector<float> > *detaMuJet;
		//std::vector<float> detaMuJet_one;

		int JETS ;
		int JETS1 ;


		std::vector<std::vector<float> > *mugammadR;
		std::vector<float> mugammadR_one;
		std::vector<std::vector<float> > *dphiMuGamma;
		std::vector<float> dphiMuGamma_one;
		std::vector<std::vector<float> > *detaMuGamma;
		std::vector<float> detaMuGamma_one;

		int val[30],valSA[30], prompt[30], ntrt[30], run, event, EFtrig1,EFtrig2,EFtrig3 ,EFtrig4,EFtrig5,EFtrig_hip1,EFtrig_hip2,EFtrig_hip3,EFtrig_hip4,EFtrig_hip5,EFtrig_hipMB ;
		float pt[30],ptMS[30],ptID[30], phi[30], eta[30],phiMS[30],etaMS[30],thetaMS[30], z0[30], z0SA[30], eLoss[30], charge[30] ,scat[30], comp[30], fcal, mbts,centrality , ptcone20[30], ptcone30[30], ptcone40[30], etcone20[30], etcone30[30], etcone40[30];

		float ptcone10ID05[30],ptcone15ID05[30],ptcone20ID05[30],ptcone30ID05[30],ptcone40ID05[30],ptcone50ID05[30]; 
		float ptcone10ID075[30],ptcone15ID075[30],ptcone20ID075[30],ptcone30ID075[30],ptcone40ID075[30],ptcone50ID075[30]; 
		float ptcone10ID1[30],ptcone15ID1[30],ptcone20ID1[30],ptcone30ID1[30],ptcone40ID1[30],ptcone50ID1[30]; 
		float ptcone10ID2[30],ptcone15ID2[30],ptcone20ID2[30],ptcone30ID2[30],ptcone40ID2[30],ptcone50ID2[30]; 
		float ptcone10ID3[30],ptcone15ID3[30],ptcone20ID3[30],ptcone30ID3[30],ptcone40ID3[30],ptcone50ID3[30]; 
		float ptcone10ID4[30],ptcone15ID4[30],ptcone20ID4[30],ptcone30ID4[30],ptcone40ID4[30],ptcone50ID4[30]; 
		float ptcone10ID5[30],ptcone15ID5[30],ptcone20ID5[30],ptcone30ID5[30],ptcone40ID5[30],ptcone50ID5[30]; 
		float ptcone10ID6[30],ptcone15ID6[30],ptcone20ID6[30],ptcone30ID6[30],ptcone40ID6[30],ptcone50ID6[30]; 

		float ptSA[30];
		float mt[30] ;
		float mtCalo[30] ;
		float yW[30] ;
		float ptW[30], etaW[30] ;
		float phi_munu[30] ;
		float phi_munuSm[30] ;
		float caloMETNt,caloMExNt,caloMEyNt,caloSumEtNt,caloMETPhiNt,caloMETEtaNt ;
		float nu_ptNt ;
		float nu_pxNt ;
		float nu_pyNt ;
		float nu_pzNt ;
        	float nu_phiNt ;
		float nu_phiSwingBy30CCW,nu_phiSwingBy15CCW,nu_phiSwingBy15CW,nu_phiSwingBy30CW;
        	float nu_etaNt ;
        	float nu_thetaNt ;

		float nu_pt500Nominal ;
		float nu_px500Nominal ;
		float nu_py500Nominal ;
        	float nu_phi500Nominal ;
        	float nu_eta500Nominal ;
        	float nu_theta500Nominal ;
		
		float nu_pt1000Nominal ;
		float nu_px1000Nominal ;
		float nu_py1000Nominal ;
        	float nu_phi1000Nominal ;
        	float nu_eta1000Nominal ;
        	float nu_theta1000Nominal ;

		float nu_pt2000Nominal ;
		float nu_px2000Nominal ;
		float nu_py2000Nominal ;
        	float nu_phi2000Nominal ;
        	float nu_eta2000Nominal ;
        	float nu_theta2000Nominal ;

		float nu_pt3000Nominal ;
		float nu_px3000Nominal ;
		float nu_py3000Nominal ;
        	float nu_phi3000Nominal ;
        	float nu_eta3000Nominal ;
        	float nu_theta3000Nominal ;

		float nu_pt4000Nominal ;
		float nu_px4000Nominal ;
		float nu_py4000Nominal ;
        	float nu_phi4000Nominal ;
        	float nu_eta4000Nominal ;
        	float nu_theta4000Nominal ;

		float nu_pt5000Nominal ;
		float nu_px5000Nominal ;
		float nu_py5000Nominal ;
        	float nu_phi5000Nominal ;
        	float nu_eta5000Nominal ;
        	float nu_theta5000Nominal ;


		int EF_mu4_MSonly_L1TE50Nt, EF_mu4_L1VTE50Nt, EF_mbZdc_a_c_L1VTE50_trkNt, EF_L1TE50_NoAlgNt; 
		int EF_mu8Nt, EF_mu4_j40_a4hi_EFFS_matchedNt, EF_mu4_IDTrkNoCutNt, EF_L1MBTS_2_NoAlgNt, EF_mu8_IDTrkNoCutNt;
		int EF_L1MBTS_1_1_NoAlgNt;
		int EF_mu8_Matched20[30], EF_mu4_j40_a4hi_EFFS_matched_Matched20[30], EF_mu4_IDTrkNoCut_Matched20[30], EF_mu8_IDTrkNoCut_Matched20[30];
		int EF_mu10_MSonly_EFFS_L1ZDC_Matched20[30],EF_mu10_MSonly_EFFS_L1TE10_Matched20[30],EF_mu10_MSonly_EFFS_L1TE20_Matched20[30], EF_mu4_Matched20[30], EF_mu10_Matched20[30];  
		int EF_trigmuonef_EF_mu4_L1VTE50_Matched20[30],EF_trigmuonef_EF_mu4_MSonly_L1TE50_Matched20[30]; 
		int L1Matched[30];
		int EF_mu10_MSonly_EFFS_L1ZDCNt, EF_mu10_MSonly_EFFS_L1TE20Nt, EF_mu10_MSonly_EFFS_L1TE10Nt, EF_mu10Nt, EF_mu4Nt; 
		int L1_MU0Nt;

		int hasHiPtMuonNt ;
		int ZDY[30] ;
		float thetaID[30], etaID[30], phiID[30] ;

		float mpxMB,nu_pxMB;
		float mpyMB,nu_pyMB;
		float centralityMB;
		int runNumberMB,eventNumberMB,trigger1,trigger2;	


};
#endif

