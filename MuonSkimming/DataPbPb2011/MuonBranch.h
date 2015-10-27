#ifndef MuonBranch_h
#define MuonBranch_h 

#define MAXMUONS 30
#define MAXJETS 500 
#define MAXMATCH 30

#ifndef BranchBase_h
#include "BranchBase.h"
#endif

#include "TLorentzVector.h"
#include "TTree.h"

#include <vector>
#ifdef __MAKECINT__
#pragma link C++ class std::vector < std::vector<float> >+;   
#endif


class MuonBranch : public BranchBase{
   public:

	MuonBranch();
	~MuonBranch(){}

   	void   Fill_Muon_Branches();
   	void   Set_Muon_Branches( TTree *MyTree);
   	int    SelectMuon(int i);
	double  getInvMass(int imu1, int imu2);
	TLorentzVector lv(float pt, float eta, float phi);
	bool  recoMSTP(int itag);
	bool  recoIDTP(int itag);
	float MuonIsolation(int imu, float trkThresh, float coneRadius);

  private:


   TH1F*   hConeTrkMuon;
   Int_t   Mymu_muid_n;
   Int_t   mu_muid_npairs;
   Float_t   Mymu_muid_truth_dr[MAXMUONS];
   Float_t   Mymu_muid_truth_E[MAXMUONS];
   Float_t   Mymu_muid_truth_pt[MAXMUONS];
   Float_t   Mymu_muid_truth_eta[MAXMUONS];
   Float_t   Mymu_muid_truth_phi[MAXMUONS];
   Int_t   Mymu_muid_truth_type[MAXMUONS];
   Int_t   Mymu_muid_truth_status[MAXMUONS];
   Int_t   Mymu_muid_truth_barcode[MAXMUONS];
   Int_t   Mymu_muid_truth_mothertype[MAXMUONS];
   Int_t   Mymu_muid_truth_motherbarcode[MAXMUONS];
   Int_t   Mymu_muid_truth_matched[MAXMUONS];
   Float_t   Mymu_muid_E[MAXMUONS];
   Float_t   Mymu_muid_pt[MAXMUONS];
   Float_t   Mymu_muid_m[MAXMUONS];
   Float_t   Mymu_muid_eta[MAXMUONS];
   Float_t   Mymu_muid_phi[MAXMUONS];
   Float_t   Mymu_muid_px[MAXMUONS];
   Double_t   mu_muid_invMassOS[MAXMUONS*MAXMUONS]; 
   Double_t   mu_muid_invMassSS[MAXMUONS*MAXMUONS]; 
//   std::vector<std::vector<int> > *IDprobe ;
    Int_t mu_muid_IDTP[MAXMUONS];
//   std::vector<int>  IDprobe_one ;
//   std::vector<int>  MSprobe_one ;
   Float_t   Mymu_muid_py[MAXMUONS];
   Float_t   Mymu_muid_pz[MAXMUONS];
   Float_t   Mymu_muid_charge[MAXMUONS];
   Float_t   Mymu_muid_allauthor[MAXMUONS];
   Int_t   Mymu_muid_author[MAXMUONS];
   Float_t   Mymu_muid_beta[MAXMUONS];
   Float_t   Mymu_muid_isMuonLikelihood[MAXMUONS];
   Float_t   Mymu_muid_matchchi2[MAXMUONS];
   Int_t   Mymu_muid_matchndof[MAXMUONS];
   Float_t   Mymu_muid_etcone20[MAXMUONS];
   Float_t   Mymu_muid_etcone30[MAXMUONS];
   Float_t   Mymu_muid_etcone40[MAXMUONS];
   Float_t   Mymu_muid_nucone20[MAXMUONS];
   Float_t   Mymu_muid_nucone30[MAXMUONS];
   Float_t   Mymu_muid_nucone40[MAXMUONS];
   Float_t   Mymu_muid_ptcone20[MAXMUONS];
   Float_t   Mymu_muid_ptcone30[MAXMUONS];
   Float_t   Mymu_muid_ptcone40[MAXMUONS];

   Float_t   mu_muid_ptcone10ID05[MAXMUONS];
   Float_t   mu_muid_ptcone15ID05[MAXMUONS];
   Float_t   mu_muid_ptcone20ID05[MAXMUONS];
   Float_t   mu_muid_ptcone30ID05[MAXMUONS];
   Float_t   mu_muid_ptcone40ID05[MAXMUONS];
   Float_t   mu_muid_ptcone50ID05[MAXMUONS];

   Float_t   mu_muid_ptcone10ID075[MAXMUONS];
   Float_t   mu_muid_ptcone15ID075[MAXMUONS];
   Float_t   mu_muid_ptcone20ID075[MAXMUONS];
   Float_t   mu_muid_ptcone30ID075[MAXMUONS];
   Float_t   mu_muid_ptcone40ID075[MAXMUONS];
   Float_t   mu_muid_ptcone50ID075[MAXMUONS];

   Float_t   mu_muid_ptcone10ID1[MAXMUONS];
   Float_t   mu_muid_ptcone15ID1[MAXMUONS];
   Float_t   mu_muid_ptcone20ID1[MAXMUONS];
   Float_t   mu_muid_ptcone30ID1[MAXMUONS];
   Float_t   mu_muid_ptcone40ID1[MAXMUONS];
   Float_t   mu_muid_ptcone50ID1[MAXMUONS];



   Float_t   mu_muid_ptcone10ID2[MAXMUONS];
   Float_t   mu_muid_ptcone15ID2[MAXMUONS];
   Float_t   mu_muid_ptcone20ID2[MAXMUONS];
   Float_t   mu_muid_ptcone30ID2[MAXMUONS];
   Float_t   mu_muid_ptcone40ID2[MAXMUONS];
   Float_t   mu_muid_ptcone50ID2[MAXMUONS];

   Float_t   mu_muid_ptcone10ID3[MAXMUONS];
   Float_t   mu_muid_ptcone15ID3[MAXMUONS];
   Float_t   mu_muid_ptcone20ID3[MAXMUONS];
   Float_t   mu_muid_ptcone30ID3[MAXMUONS];
   Float_t   mu_muid_ptcone40ID3[MAXMUONS];
   Float_t   mu_muid_ptcone50ID3[MAXMUONS];

   Float_t   mu_muid_ptcone10ID4[MAXMUONS];
   Float_t   mu_muid_ptcone15ID4[MAXMUONS];
   Float_t   mu_muid_ptcone20ID4[MAXMUONS];
   Float_t   mu_muid_ptcone30ID4[MAXMUONS];
   Float_t   mu_muid_ptcone40ID4[MAXMUONS];
   Float_t   mu_muid_ptcone50ID4[MAXMUONS];

   Float_t   mu_muid_ptcone10ID5[MAXMUONS];
   Float_t   mu_muid_ptcone15ID5[MAXMUONS];
   Float_t   mu_muid_ptcone20ID5[MAXMUONS];
   Float_t   mu_muid_ptcone30ID5[MAXMUONS];
   Float_t   mu_muid_ptcone40ID5[MAXMUONS];
   Float_t   mu_muid_ptcone50ID5[MAXMUONS];

   Float_t   mu_muid_ptcone10ID6[MAXMUONS];
   Float_t   mu_muid_ptcone15ID6[MAXMUONS];
   Float_t   mu_muid_ptcone20ID6[MAXMUONS];
   Float_t   mu_muid_ptcone30ID6[MAXMUONS];
   Float_t   mu_muid_ptcone40ID6[MAXMUONS];
   Float_t   mu_muid_ptcone50ID6[MAXMUONS];

   Float_t   totalMuPtCone20ID[MAXMUONS];
   Float_t   totalMuPtCone30ID[MAXMUONS];
   Float_t   Mymu_muid_energyLossPar[MAXMUONS];
   Float_t   Mymu_muid_energyLossErr[MAXMUONS];
   Float_t   Mymu_muid_etCore[MAXMUONS];
   Float_t   Mymu_muid_energyLossType[MAXMUONS];
   Int_t   Mymu_muid_caloMuonIdTag[MAXMUONS];
   Float_t   Mymu_muid_caloLRLikelihood[MAXMUONS];
   Int_t   Mymu_muid_bestMatch[MAXMUONS];
   Int_t   Mymu_muid_isStandAloneMuon[MAXMUONS];
   Int_t   Mymu_muid_isCombinedMuon[MAXMUONS];
   Int_t   Mymu_muid_isLowPtReconstructedMuon[MAXMUONS];
   Int_t   Mymu_muid_isSegmentTaggedMuon[MAXMUONS];
   Int_t   Mymu_muid_isCaloMuonId[MAXMUONS];
   Int_t   Mymu_muid_alsoFoundByLowPt[MAXMUONS];
   Int_t   Mymu_muid_alsoFoundByCaloMuonId[MAXMUONS];
   Int_t   Mymu_muid_loose[MAXMUONS];
   Int_t   Mymu_muid_medium[MAXMUONS];
   Int_t   Mymu_muid_tight[MAXMUONS];
   Float_t   Mymu_muid_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_cb_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_cb_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_cb_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_cb_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_cb_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_ie_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_ie_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_ie_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_ie_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_ie_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_d0_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_d0_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_d0_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_d0_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_z0_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_z0_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_z0_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_phi_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_phi_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_cov_theta_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_cov_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_cov_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_cov_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_cov_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_id_cov_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_cov_d0_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_cov_z0_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_cov_phi_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_cov_theta_exPV[MAXMUONS];
   Float_t   Mymu_muid_me_cov_qoverp_exPV[MAXMUONS];
   Float_t   Mymu_muid_ms_d0[MAXMUONS];
   Float_t   Mymu_muid_ms_z0[MAXMUONS];
   Float_t   Mymu_muid_ms_phi[MAXMUONS];
   Float_t   Mymu_muid_ms_theta[MAXMUONS];
   Float_t   Mymu_muid_ms_qoverp[MAXMUONS];
   Float_t   Mymu_muid_id_d0[MAXMUONS];
   Float_t   Mymu_muid_id_z0[MAXMUONS];
   Float_t   Mymu_muid_id_phi[MAXMUONS];
   Float_t   Mymu_muid_id_theta[MAXMUONS];
   Float_t   Mymu_muid_id_qoverp[MAXMUONS];
   Float_t   Mymu_muid_me_d0[MAXMUONS];
   Float_t   Mymu_muid_me_z0[MAXMUONS];
   Float_t   Mymu_muid_me_phi[MAXMUONS];
   Float_t   Mymu_muid_me_theta[MAXMUONS];
   Float_t   Mymu_muid_me_qoverp[MAXMUONS];
   Float_t   Mymu_muid_ie_d0[MAXMUONS];
   Float_t   Mymu_muid_ie_z0[MAXMUONS];
   Float_t   Mymu_muid_ie_phi[MAXMUONS];
   Float_t   Mymu_muid_ie_theta[MAXMUONS];
   Float_t   Mymu_muid_ie_qoverp[MAXMUONS];
   Int_t   Mymu_muid_nOutliersOnTrack[MAXMUONS];
   Int_t   Mymu_muid_nBLHits[MAXMUONS];
   Int_t   Mymu_muid_nPixHits[MAXMUONS];
   Int_t   Mymu_muid_nSCTHits[MAXMUONS];
   Int_t   Mymu_muid_nTRTHits[MAXMUONS];
   Int_t   Mymu_muid_nTRTHighTHits[MAXMUONS];
   Int_t   Mymu_muid_nBLSharedHits[MAXMUONS];
   Int_t   Mymu_muid_nPixSharedHits[MAXMUONS];
   Int_t   Mymu_muid_nPixHoles[MAXMUONS];
   Int_t   Mymu_muid_nSCTSharedHits[MAXMUONS];
   Int_t   Mymu_muid_nSCTHoles[MAXMUONS];
   Int_t   Mymu_muid_nTRTOutliers[MAXMUONS];
   Int_t   Mymu_muid_nTRTHighTOutliers[MAXMUONS];
   Int_t   Mymu_muid_nGangedPixels[MAXMUONS];
   Int_t   Mymu_muid_nPixelDeadSensors[MAXMUONS];
   Int_t   Mymu_muid_nSCTDeadSensors[MAXMUONS];
   Int_t   Mymu_muid_nTRTDeadStraws[MAXMUONS];
   Int_t   Mymu_muid_expectBLayerHit[MAXMUONS];
   Int_t   Mymu_muid_nMDTHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTHoles[MAXMUONS];
   Int_t   Mymu_muid_nCSCEtaHits[MAXMUONS];
   Int_t   Mymu_muid_nCSCEtaHoles[MAXMUONS];
   Int_t   Mymu_muid_nCSCPhiHits[MAXMUONS];
   Int_t   Mymu_muid_nCSCPhiHoles[MAXMUONS];
   Int_t   Mymu_muid_nRPCEtaHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCEtaHoles[MAXMUONS];
   Int_t   Mymu_muid_nRPCPhiHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCPhiHoles[MAXMUONS];
   Int_t   Mymu_muid_nTGCEtaHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCEtaHoles[MAXMUONS];
   Int_t   Mymu_muid_nTGCPhiHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCPhiHoles[MAXMUONS];
   Int_t   Mymu_muid_nMDTBIHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTBMHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTBOHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTBEEHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTBIS78Hits[MAXMUONS];
   Int_t   Mymu_muid_nMDTEIHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTEMHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTEOHits[MAXMUONS];
   Int_t   Mymu_muid_nMDTEEHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCLayer1EtaHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCLayer2EtaHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCLayer3EtaHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCLayer1PhiHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCLayer2PhiHits[MAXMUONS];
   Int_t   Mymu_muid_nRPCLayer3PhiHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer1EtaHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer2EtaHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer3EtaHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer4EtaHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer1PhiHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer2PhiHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer3PhiHits[MAXMUONS];
   Int_t   Mymu_muid_nTGCLayer4PhiHits[MAXMUONS];
   Int_t   Mymu_muid_barrelSectors[MAXMUONS];
   Int_t   Mymu_muid_endcapSectors[MAXMUONS];
   Float_t   Mymu_muid_trackd0[MAXMUONS];
   Float_t   Mymu_muid_trackz0[MAXMUONS];
   Float_t   Mymu_muid_trackphi[MAXMUONS];
   Float_t   Mymu_muid_tracktheta[MAXMUONS];
   Float_t   Mymu_muid_trackqoverp[MAXMUONS];
   Float_t   Mymu_muid_trackcov_d0[MAXMUONS];
   Float_t   Mymu_muid_trackcov_z0[MAXMUONS];
   Float_t   Mymu_muid_trackcov_phi[MAXMUONS];
   Float_t   Mymu_muid_trackcov_theta[MAXMUONS];
   Float_t   Mymu_muid_trackcov_qoverp[MAXMUONS];
   Float_t   Mymu_muid_trackcov_d0_z0[MAXMUONS];
   Float_t   Mymu_muid_trackcov_d0_phi[MAXMUONS];
   Float_t   Mymu_muid_trackcov_d0_theta[MAXMUONS];
   Float_t   Mymu_muid_trackcov_d0_qoverp[MAXMUONS];
   Float_t   Mymu_muid_trackcov_z0_phi[MAXMUONS];
   Float_t   Mymu_muid_trackcov_z0_theta[MAXMUONS];
   Float_t   Mymu_muid_trackcov_z0_qoverp[MAXMUONS];
   Float_t   Mymu_muid_trackcov_phi_theta[MAXMUONS];
   Float_t   Mymu_muid_trackcov_phi_qoverp[MAXMUONS];
   Float_t   Mymu_muid_trackcov_theta_qoverp[MAXMUONS];
   Float_t   Mymu_muid_trackfitchi2[MAXMUONS];
   Int_t   Mymu_muid_trackfitndof[MAXMUONS];
   Int_t   Mymu_muid_hastrack[MAXMUONS];
   Float_t   Mymu_muid_trackd0beam[MAXMUONS];
   Float_t   Mymu_muid_trackz0beam[MAXMUONS];
   Float_t   Mymu_muid_tracksigd0beam[MAXMUONS];
   Float_t   Mymu_muid_tracksigz0beam[MAXMUONS];
   Float_t   Mymu_muid_trackd0pv[MAXMUONS];
   Float_t   Mymu_muid_trackz0pv[MAXMUONS];
   Float_t   Mymu_muid_tracksigd0pv[MAXMUONS];
   Float_t   Mymu_muid_tracksigz0pv[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_d0_biasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_z0_biasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_sigd0_biasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_sigz0_biasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_d0_unbiasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_z0_unbiasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackd0pvunbiased[MAXMUONS];
   Float_t   Mymu_muid_trackz0pvunbiased[MAXMUONS];
   Float_t   Mymu_muid_tracksigd0pvunbiased[MAXMUONS];
   Float_t   Mymu_muid_tracksigz0pvunbiased[MAXMUONS];
   Int_t     Mytrig_EF_trigmuonef_n;
   Int_t     Mytrig_EF_trigmuonef_EF_mu4_MSonly_L1TE50[MAXMUONS];	
   Int_t     Mytrig_EF_trigmuonef_EF_mu4_L1VTE50[MAXMUONS];
   Int_t     Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC[MAXMUONS];
   Int_t     Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10[MAXMUONS];
   Int_t     Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20[MAXMUONS];

   //Hip 2013
   Int_t     Mytrig_EF_trigmuonef_EF_mu8_IDTrkNoCut[MAXMUONS];
   Int_t     Mytrig_EF_trigmuonef_EF_mu8[MAXMUONS];
   Int_t     Mytrig_EF_trigmuonef_EF_mu4_j40_a4hi_EFFS_matched[MAXMUONS];
   Int_t     Mytrig_EF_trigmuonef_EF_mu4_IDTrkNoCut[MAXMUONS];

   Int_t     Mytrig_EF_trigmuonef_track_n[MAXMUONS];
   std::vector<int> Mytrig_EF_trigmuonef_track_MS_hasMS_one;
   std::vector <std::vector<int> > *Mytrig_EF_trigmuonef_track_MS_hasMS ;
   std::vector<float> Mytrig_EF_trigmuonef_track_MS_phi_one;
   std::vector <std::vector<float> > *Mytrig_EF_trigmuonef_track_MS_phi ;
   std::vector<float> Mytrig_EF_trigmuonef_track_MS_eta_one;
   std::vector <std::vector<float> > *Mytrig_EF_trigmuonef_track_MS_eta  ;




//---------------------------------------------------------------------------
   Int_t Mymu_muid_EFME_n_tot;
   Int_t Mymu_muid_EFCB_n_tot;
   Int_t Mymu_muid_EFMG_n_tot;


   Float_t  Mymu_muid_EFCB_dr       [MAXMUONS];
   Int_t    Mymu_muid_EFCB_n        [MAXMUONS];
   Int_t    Mymu_muid_EFCB_MuonType [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFCB_pt       [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFCB_eta      [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFCB_phi      [MAXMUONS*MAXMATCH];
   Int_t    Mymu_muid_EFCB_hasCB    [MAXMUONS*MAXMATCH];
   Int_t    Mymu_muid_EFCB_matched  [MAXMUONS];

 
   Float_t  Mymu_muid_EFMG_dr       [MAXMUONS];
   Int_t    Mymu_muid_EFMG_n        [MAXMUONS];
   Int_t    Mymu_muid_EFMG_MuonType [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFMG_pt       [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFMG_eta      [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFMG_phi      [MAXMUONS*MAXMATCH];
   Int_t    Mymu_muid_EFMG_hasMG    [MAXMUONS*MAXMATCH];
   Int_t    Mymu_muid_EFMG_matched  [MAXMUONS];
 

   Float_t  Mymu_muid_EFME_dr       [MAXMUONS];
   Int_t    Mymu_muid_EFME_n        [MAXMUONS];
   Int_t    Mymu_muid_EFME_MuonType [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFME_pt       [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFME_eta      [MAXMUONS*MAXMATCH];
   Float_t  Mymu_muid_EFME_phi      [MAXMUONS*MAXMATCH];
   Int_t    Mymu_muid_EFME_hasME    [MAXMUONS*MAXMATCH];
   Int_t    Mymu_muid_EFME_matched  [MAXMUONS];
//---------------------------------------------------------------------------



   Float_t   Mymu_muid_L2CB_dr[MAXMUONS];
   Float_t   Mymu_muid_L2CB_pt[MAXMUONS];
   Float_t   Mymu_muid_L2CB_eta[MAXMUONS];
   Float_t   Mymu_muid_L2CB_phi[MAXMUONS];
   Float_t   Mymu_muid_L2CB_id_pt[MAXMUONS];
   Float_t   Mymu_muid_L2CB_ms_pt[MAXMUONS];
   Int_t   Mymu_muid_L2CB_nPixHits[MAXMUONS];
   Int_t   Mymu_muid_L2CB_nSCTHits[MAXMUONS];
   Int_t   Mymu_muid_L2CB_nTRTHits[MAXMUONS];
   Int_t   Mymu_muid_L2CB_nTRTHighTHits[MAXMUONS];
   Int_t   Mymu_muid_L2CB_matched[MAXMUONS];
   Float_t   Mymu_muid_L1_dr[MAXMUONS];
   Float_t   Mymu_muid_L1_pt[MAXMUONS];
   Float_t   Mymu_muid_L1_eta[MAXMUONS];
   Float_t   Mymu_muid_L1_phi[MAXMUONS];
   Int_t   Mymu_muid_L1_thrNumber[MAXMUONS];
   Int_t   Mymu_muid_L1_RoINumber[MAXMUONS];
   Int_t   Mymu_muid_L1_sectorAddress[MAXMUONS];
   Int_t   Mymu_muid_L1_firstCandidate[MAXMUONS];
   Int_t   Mymu_muid_L1_moreCandInRoI[MAXMUONS];
   Int_t   Mymu_muid_L1_moreCandInSector[MAXMUONS];
   Int_t   Mymu_muid_L1_source[MAXMUONS];
   Int_t   Mymu_muid_L1_hemisphere[MAXMUONS];
   Int_t   Mymu_muid_L1_charge[MAXMUONS];
   Int_t   Mymu_muid_L1_vetoed[MAXMUONS];
   Int_t   Mymu_muid_L1_matched[MAXMUONS];
   Int_t   Mymuid_nScatters[MAXMUONS];
   Float_t   Mymuid_scatSignificance[MAXMUONS];
   Float_t   Mymuid_neighbourSignificance[MAXMUONS];
   Float_t   Mymuid_eta[MAXMUONS];
   Int_t   isGoodMuon[MAXMUONS];
   Int_t   isGoodDiMuonOS[MAXMUONS*MAXMUONS];
   Int_t   isGoodDiMuonSS[MAXMUONS*MAXMUONS];
   Int_t   dimuid_indexOS1[MAXMUONS*MAXMUONS];
   Int_t   dimuid_indexOS2[MAXMUONS*MAXMUONS];
   Int_t   dimuid_indexSS1[MAXMUONS*MAXMUONS];
   Int_t   dimuid_indexSS2[MAXMUONS*MAXMUONS];
   Int_t   isGoodMuon2[MAXMUONS];
//-------------------------------------------------------------------------------
///JET INFORMATION FOR MUON TAGGING
   Int_t           Myantikt2HIItrEM_n;
   Float_t   Myantikt2HIItrEM_E[MAXJETS];
   Float_t   Myantikt2HIItrEM_pt[MAXJETS];
   Float_t   Myantikt2HIItrEM_m[MAXJETS];
   Float_t   Myantikt2HIItrEM_eta[MAXJETS];
   Float_t   Myantikt2HIItrEM_phi[MAXJETS];
   Float_t   Myantikt2HIItrEM_MaxOverMean[MAXJETS];
   Float_t   Myantikt2HIItrEM_MeanTowerEt[MAXJETS];
   Float_t   Myantikt2HIItrEM_SubtractedEt[MAXJETS];
   Float_t   Myantikt2HIItrEM_RMSTowerEt[MAXJETS];
   Float_t   Myantikt2HIItrEM_GausEt[MAXJETS];
   Float_t   Myantikt2HIItrEM_SelfEnergy[MAXJETS];
   Float_t   Myantikt2HIItrEM_SumJt[MAXJETS];
   Float_t   Myantikt2HIItrEM_CoreEt[MAXJETS];
   Float_t   Myantikt2HIItrEM_EdgeEt[MAXJETS];
   Float_t   Myantikt2HIItrEM_CryoCorr[MAXJETS];
   Float_t   Myantikt2HIItrEM_NoFlow[MAXJETS];
   Float_t   Myantikt2HIItrEM_NumConstituents[MAXJETS];
   Float_t   Myantikt2HIItrEM_UncalibEt[MAXJETS];
   Float_t   Myantikt2HIItrEM_Discriminant[MAXJETS];
   Float_t   Myantikt2HIItrEM_MeanTowerEtUnsubtr[MAXJETS];
   Float_t   Myantikt2HIItrEM_n90[MAXJETS];
   Float_t   Myantikt2HIItrEM_fracSamplingMax[MAXJETS];
   Float_t   Myantikt2HIItrEM_SamplingMax[MAXJETS];
   Float_t   Myantikt2HIItrEM_n90constituents[MAXJETS];
   Float_t   Myantikt2HIItrEM_Timing[MAXJETS];
   Float_t   Myantikt2HIItrEM_LArQuality[MAXJETS];
   Float_t   Myantikt2HIItrEM_HECQuality[MAXJETS];
   Float_t   Myantikt2HIItrEM_TileQuality[MAXJETS];
/*   Int_t     Myantikt2HIItr_const_n;
   vector<Float_t > Myantikt2HIItr_const_et;
   vector<Float_t > Myantikt2HIItr_const_eta;
   vector<Float_t > Myantikt2HIItr_const_phi;
   vector<Float_t > Myantikt2HIItr_sampling_et;
   vector<Float_t > Myantikt2HIItr_sampling_et_unsubtr;
   vector<Int_t > Myantikt2HIItr_bad_cell_n;
   vector<Float_t > Myantikt2HIItr_bad_cell_et;
   vector<Float_t > Myantikt2HIItr_bad_cell_area;
   vector<Int_t > Myantikt2HIItr_empty_cell_n;
   vector<Float_t > Myantikt2HIItr_empty_cell_et;
   vector<Float_t > Myantikt2HIItr_empty_cell_area;
   vector<Int_t > Myantikt2HIItr_total_cell_n;
   vector<Float_t > Myantikt2HIItr_total_cell_et;
   vector<Float_t > Myantikt2HIItr_total_cell_area;*/

   ///cone30
   Int_t           Myantikt3HIItrEM_n;
   Float_t   Myantikt3HIItrEM_E[MAXJETS];
   Float_t   Myantikt3HIItrEM_pt[MAXJETS];
   Float_t   Myantikt3HIItrEM_m[MAXJETS];
   Float_t   Myantikt3HIItrEM_eta[MAXJETS];
   Float_t   Myantikt3HIItrEM_phi[MAXJETS];
   Float_t   Myantikt3HIItrEM_MaxOverMean[MAXJETS];
   Float_t   Myantikt3HIItrEM_MeanTowerEt[MAXJETS];
   Float_t   Myantikt3HIItrEM_SubtractedEt[MAXJETS];
   Float_t   Myantikt3HIItrEM_RMSTowerEt[MAXJETS];
   Float_t   Myantikt3HIItrEM_GausEt[MAXJETS];
   Float_t   Myantikt3HIItrEM_SelfEnergy[MAXJETS];
   Float_t   Myantikt3HIItrEM_SumJt[MAXJETS];
   Float_t   Myantikt3HIItrEM_CoreEt[MAXJETS];
   Float_t   Myantikt3HIItrEM_EdgeEt[MAXJETS];
   Float_t   Myantikt3HIItrEM_CryoCorr[MAXJETS];
   Float_t   Myantikt3HIItrEM_NoFlow[MAXJETS];
   Float_t   Myantikt3HIItrEM_NumConstituents[MAXJETS];
   Float_t   Myantikt3HIItrEM_UncalibEt[MAXJETS];
   Float_t   Myantikt3HIItrEM_Discriminant[MAXJETS];
   Float_t   Myantikt3HIItrEM_MeanTowerEtUnsubtr[MAXJETS];
   Float_t   Myantikt3HIItrEM_n90[MAXJETS];
   Float_t   Myantikt3HIItrEM_fracSamplingMax[MAXJETS];
   Float_t   Myantikt3HIItrEM_SamplingMax[MAXJETS];
   Float_t   Myantikt3HIItrEM_n90constituents[MAXJETS];
   Float_t   Myantikt3HIItrEM_Timing[MAXJETS];
   Float_t   Myantikt3HIItrEM_LArQuality[MAXJETS];
   Float_t   Myantikt3HIItrEM_HECQuality[MAXJETS];
   Float_t   Myantikt3HIItrEM_TileQuality[MAXJETS];
/*   Int_t     Myantikt3HIItr_const_n;
   vector<Float_t > Myantikt3HIItr_const_et;
   vector<Float_t > Myantikt3HIItr_const_eta;
   vector<Float_t > Myantikt3HIItr_const_phi;
   vector<Float_t > Myantikt3HIItr_sampling_et;
   vector<Float_t > Myantikt3HIItr_sampling_et_unsubtr;
   vector<Int_t > Myantikt3HIItr_bad_cell_n;
   vector<Float_t > Myantikt3HIItr_bad_cell_et;
   vector<Float_t > Myantikt3HIItr_bad_cell_area;
   vector<Int_t > Myantikt3HIItr_empty_cell_n;
   vector<Float_t > Myantikt3HIItr_empty_cell_et;
   vector<Float_t > Myantikt3HIItr_empty_cell_area;
   vector<Int_t > Myantikt3HIItr_total_cell_n;
   vector<Float_t > Myantikt3HIItr_total_cell_et;
   vector<Float_t > Myantikt3HIItr_total_cell_area;*/
   
   //jet truth
   Int_t Myantikt2Truth_n;
   Float_t Myantikt2Truth_E[MAXJETS];
   Float_t Myantikt2Truth_pt[MAXJETS];
   Float_t Myantikt2Truth_m[MAXJETS];
   Float_t Myantikt2Truth_eta[MAXJETS];
   Float_t Myantikt2Truth_phi[MAXJETS];

   //pp or pPb
   Int_t     MyAntiKt4TopoEM_n;
   Float_t   MyAntiKt4TopoEM_E[MAXJETS];
   Float_t   MyAntiKt4TopoEM_pt[MAXJETS];
   Float_t   MyAntiKt4TopoEM_m[MAXJETS];
   Float_t   MyAntiKt4TopoEM_eta[MAXJETS];
   Float_t   MyAntiKt4TopoEM_phi[MAXJETS];
   Float_t   MyAntiKt4TopoEM_EtaOrigin[MAXJETS];
   Float_t   MyAntiKt4TopoEM_PhiOrigin[MAXJETS];
   Float_t   MyAntiKt4TopoEM_MOrigin[MAXJETS];
   Float_t   MyAntiKt4TopoEM_EtaOriginEM[MAXJETS];
   Float_t   MyAntiKt4TopoEM_PhiOriginEM[MAXJETS];
   Float_t   MyAntiKt4TopoEM_MOriginEM[MAXJETS];
   Float_t   MyAntiKt4TopoEM_WIDTH[MAXJETS];
   Float_t   MyAntiKt4TopoEM_n90[MAXJETS];
   Float_t   MyAntiKt4TopoEM_Timing[MAXJETS];
   Float_t   MyAntiKt4TopoEM_LArQuality[MAXJETS];
   Float_t   MyAntiKt4TopoEM_nTrk[MAXJETS];
   Float_t   MyAntiKt4TopoEM_sumPtTrk[MAXJETS];
   Float_t   MyAntiKt4TopoEM_OriginIndex[MAXJETS];
   Float_t   MyAntiKt4TopoEM_HECQuality[MAXJETS];
   Float_t   MyAntiKt4TopoEM_NegativeE[MAXJETS];
   Float_t   MyAntiKt4TopoEM_AverageLArQF[MAXJETS];
   Float_t   MyAntiKt4TopoEM_YFlip12[MAXJETS];
   Float_t   MyAntiKt4TopoEM_YFlip23[MAXJETS];
   Float_t   MyAntiKt4TopoEM_BCH_CORR_CELL[MAXJETS];
   Float_t   MyAntiKt4TopoEM_BCH_CORR_DOTX[MAXJETS];
   Float_t   MyAntiKt4TopoEM_BCH_CORR_JET[MAXJETS];
   Float_t   MyAntiKt4TopoEM_BCH_CORR_JET_FORCELL[MAXJETS];
   Float_t   MyAntiKt4TopoEM_ENG_BAD_CELLS[MAXJETS];
   Float_t   MyAntiKt4TopoEM_N_BAD_CELLS[MAXJETS];
   Float_t   MyAntiKt4TopoEM_N_BAD_CELLS_CORR[MAXJETS];
   Float_t   MyAntiKt4TopoEM_BAD_CELLS_CORR_E[MAXJETS];
   Float_t   MyAntiKt4TopoEM_NumTowers[MAXJETS];
   Float_t   MyAntiKt4TopoEM_ootFracCells5[MAXJETS];
   Float_t   MyAntiKt4TopoEM_ootFracCells10[MAXJETS];
   Float_t   MyAntiKt4TopoEM_ootFracClusters5[MAXJETS];
   Float_t   MyAntiKt4TopoEM_ootFracClusters10[MAXJETS];
   Int_t     MyAntiKt4TopoEM_SamplingMax[MAXJETS];
   Float_t   MyAntiKt4TopoEM_fracSamplingMax[MAXJETS];
   Float_t   MyAntiKt4TopoEM_hecf[MAXJETS];
   Float_t   MyAntiKt4TopoEM_tgap3f[MAXJETS];
   Int_t     MyAntiKt4TopoEM_isUgly[MAXJETS];
   Int_t     MyAntiKt4TopoEM_isBadLooseMinus[MAXJETS];
   Int_t     MyAntiKt4TopoEM_isBadLoose[MAXJETS];
   Int_t     MyAntiKt4TopoEM_isBadMedium[MAXJETS];
   Int_t     MyAntiKt4TopoEM_isBadTight[MAXJETS];
   Float_t   MyAntiKt4TopoEM_emfrac[MAXJETS];
   Float_t   MyAntiKt4TopoEM_Offset[MAXJETS];
   Float_t   MyAntiKt4TopoEM_EMJES[MAXJETS];
   Float_t   MyAntiKt4TopoEM_EMJES_EtaCorr[MAXJETS];
   Float_t   MyAntiKt4TopoEM_EMJESnooffset[MAXJETS];
   Float_t   MyAntiKt4TopoEM_GCWJES[MAXJETS];
   Float_t   MyAntiKt4TopoEM_GCWJES_EtaCorr[MAXJETS];
   Float_t   MyAntiKt4TopoEM_CB[MAXJETS];
   Float_t   MyAntiKt4TopoEM_LCJES[MAXJETS];
   Float_t   MyAntiKt4TopoEM_emscale_E[MAXJETS];
   Float_t   MyAntiKt4TopoEM_emscale_pt[MAXJETS];
   Float_t   MyAntiKt4TopoEM_emscale_m[MAXJETS];
   Float_t   MyAntiKt4TopoEM_emscale_eta[MAXJETS];
   Float_t   MyAntiKt4TopoEM_emscale_phi[MAXJETS];
   Float_t   MyAntiKt4TopoEM_jvtx_x[MAXJETS];
   Float_t   MyAntiKt4TopoEM_jvtx_y[MAXJETS];
   Float_t   MyAntiKt4TopoEM_jvtx_z[MAXJETS];
   Float_t   MyAntiKt4TopoEM_jvtxf[MAXJETS];
   Float_t   MyAntiKt4TopoEM_GSCFactorF[MAXJETS];
   Float_t   MyAntiKt4TopoEM_WidthFraction[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_PreSamplerB[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_EMB1[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_EMB2[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_EMB3[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_PreSamplerE[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_EME1[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_EME2[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_EME3[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_HEC0[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_HEC1[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_HEC2[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_HEC3[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileBar0[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileBar1[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileBar2[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileGap1[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileGap2[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileGap3[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileExt0[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileExt1[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_TileExt2[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_FCAL0[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_FCAL1[MAXJETS];
   Float_t   MyAntiKt4TopoEM_e_FCAL2[MAXJETS];
   Int_t     MyAntiKt4TopoEM_Nconst[MAXJETS];
   Float_t   MyAntiKt4TopoEM_constscale_E[MAXJETS];
   Float_t   MyAntiKt4TopoEM_constscale_pt[MAXJETS];
   Float_t   MyAntiKt4TopoEM_constscale_m[MAXJETS];
   Float_t   MyAntiKt4TopoEM_constscale_eta[MAXJETS];
   Float_t   MyAntiKt4TopoEM_constscale_phi[MAXJETS];
   Float_t   MyAntiKt4TopoEM_el_dr[MAXJETS];
   Int_t     MyAntiKt4TopoEM_el_matched[MAXJETS];
   Float_t   MyAntiKt4TopoEM_mu_dr[MAXJETS];
   Int_t     MyAntiKt4TopoEM_mu_matched[MAXJETS];
   Float_t   MyAntiKt4TopoEM_L1_dr[MAXJETS];
   Int_t     MyAntiKt4TopoEM_L1_matched[MAXJETS];
   Float_t   MyAntiKt4TopoEM_L2_dr[MAXJETS];
   Int_t     MyAntiKt4TopoEM_L2_matched[MAXJETS];
   Float_t   MyAntiKt4TopoEM_EF_dr[MAXJETS];
   Int_t     MyAntiKt4TopoEM_EF_matched[MAXJETS];



};
#endif
