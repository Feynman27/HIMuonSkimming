//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Oct  1 16:34:46 2012 by ROOT version 5.30/05
// from TTree HeavyIonD3PD/HeavyIonD3PD
// found on file: data12_hip.00210185.physics_MinBias.merge.NTUP_HI.f477_m1221._0003.1.root
//////////////////////////////////////////////////////////

#ifndef BranchBase_pPb_h
#define BranchBase_pPb_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class BranchBase_pPb {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Bool_t          EF_2g10_loose;
   Bool_t          EF_2g5_loose;
   Bool_t          EF_2g7_loose;
   Bool_t          EF_2mu2_MSonly_EFFS_L1MBTS;
   Bool_t          EF_2mu2_MSonly_EFFS_L1TE10;
   Bool_t          EF_2mu2_MSonly_EFFS_L1TE20;
   Bool_t          EF_2mu2_MSonly_EFFS_L1TE50;
   Bool_t          EF_2mu2_MSonly_EFFS_L1ZDC;
   Bool_t          EF_2mu2_MSonly_EFFS_L1ZDC_OR;
   Bool_t          EF_2mu4T_MSonly;
   Bool_t          EF_2mu4_MSonly;
   Bool_t          EF_2mu4_MSonly_EFFS_L1MU0;
   Bool_t          EF_2mu4_MSonly_EFFS_L1TE10;
   Bool_t          EF_2mu4_MSonly_EFFS_L1TE20;
   Bool_t          EF_2mu4_MSonly_EFFS_L1TE50;
   Bool_t          EF_2mu4_MSonly_EFFS_L1ZDC;
   Bool_t          EF_2mu6T_MSonly;
   Bool_t          EF_2mu6_MSonly;
   Bool_t          EF_L1ItemStreamer_L1_2MU0;
   Bool_t          EF_L1ItemStreamer_L1_2MU0_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_2MU11;
   Bool_t          EF_L1ItemStreamer_L1_2MU4;
   Bool_t          EF_L1ItemStreamer_L1_2MU4_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_2MU6;
   Bool_t          EF_L1ItemStreamer_L1_2MU6_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;
   Bool_t          EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;
   Bool_t          EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;
   Bool_t          EF_L1ItemStreamer_L1_EM10;
   Bool_t          EF_L1ItemStreamer_L1_EM12;
   Bool_t          EF_L1ItemStreamer_L1_EM14;
   Bool_t          EF_L1ItemStreamer_L1_EM16;
   Bool_t          EF_L1ItemStreamer_L1_EM3;
   Bool_t          EF_L1ItemStreamer_L1_EM3_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_EM3_FIRSTEMPTY;
   Bool_t          EF_L1ItemStreamer_L1_EM3_MV_VTE50;
   Bool_t          EF_L1ItemStreamer_L1_EM3_UNPAIRED_ISO;
   Bool_t          EF_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO;
   Bool_t          EF_L1ItemStreamer_L1_EM3_VTE50;
   Bool_t          EF_L1ItemStreamer_L1_EM4;
   Bool_t          EF_L1ItemStreamer_L1_EM5;
   Bool_t          EF_L1ItemStreamer_L1_EM5_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_EM7;
   Bool_t          EF_L1ItemStreamer_L1_MU0;
   Bool_t          EF_L1ItemStreamer_L1_MU0_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU0_MV_VTE50;
   Bool_t          EF_L1ItemStreamer_L1_MU0_TE50;
   Bool_t          EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;
   Bool_t          EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;
   Bool_t          EF_L1ItemStreamer_L1_MU0_VTE50;
   Bool_t          EF_L1ItemStreamer_L1_MU11;
   Bool_t          EF_L1ItemStreamer_L1_MU11_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU15;
   Bool_t          EF_L1ItemStreamer_L1_MU20;
   Bool_t          EF_L1ItemStreamer_L1_MU4;
   Bool_t          EF_L1ItemStreamer_L1_MU4_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU4_MV_VTE50;
   Bool_t          EF_L1ItemStreamer_L1_MU4_TE50;
   Bool_t          EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;
   Bool_t          EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;
   Bool_t          EF_L1ItemStreamer_L1_MU4_VTE50;
   Bool_t          EF_L1ItemStreamer_L1_MU6;
   Bool_t          EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY;
   Bool_t          EF_SeededStreamerL1Calo;
   Bool_t          EF_e10_loose1;
   Bool_t          EF_e10_medium1;
   Bool_t          EF_e5_loose1;
   Bool_t          EF_e5_medium1;
   Bool_t          EF_e7_loose1;
   Bool_t          EF_e7_medium1;
   Bool_t          EF_g10_loose;
   Bool_t          EF_g10_loose_larcalib;
   Bool_t          EF_g10_medium;
   Bool_t          EF_g5_NoCut_cosmic;
   Bool_t          EF_g5_loose;
   Bool_t          EF_g5_loose_larcalib;
   Bool_t          EF_g5_medium;
   Bool_t          EF_g7_loose;
   Bool_t          EF_g7_medium;
   Bool_t          EF_mu10T_MSonly;
   Bool_t          EF_mu10_MSonly;
   Bool_t          EF_mu10_MSonly_EFFS_L1TE10;
   Bool_t          EF_mu10_MSonly_EFFS_L1TE20;
   Bool_t          EF_mu10_MSonly_EFFS_L1TE50;
   Bool_t          EF_mu10_MSonly_EFFS_L1ZDC;
   Bool_t          EF_mu13T_MSonly;
   Bool_t          EF_mu13_MSonly;
   Bool_t          EF_mu13_MSonly_EFFS_L1TE10;
   Bool_t          EF_mu13_MSonly_EFFS_L1TE20;
   Bool_t          EF_mu13_MSonly_EFFS_L1TE50;
   Bool_t          EF_mu13_MSonly_EFFS_L1ZDC;
   Bool_t          EF_mu4;
   Bool_t          EF_mu4T;
   Bool_t          EF_mu4T_IDTrkNoCut;
   Bool_t          EF_mu4T_MSonly;
   Bool_t          EF_mu4T_MSonly_L1TE50;
   Bool_t          EF_mu4T_MSonly_barrel;
   Bool_t          EF_mu4T_MSonly_cosmic;
   Bool_t          EF_mu4T_cosmic;
   Bool_t          EF_mu4_IDTrkNoCut;
   Bool_t          EF_mu4_L1VTE50;
   Bool_t          EF_mu4_MSonly;
   Bool_t          EF_mu4_MSonly_EFFS_L1MBTS;
   Bool_t          EF_mu4_MSonly_EFFS_L1TE10;
   Bool_t          EF_mu4_MSonly_EFFS_L1TE20;
   Bool_t          EF_mu4_MSonly_EFFS_L1TE50;
   Bool_t          EF_mu4_MSonly_EFFS_L1ZDC;
   Bool_t          EF_mu4_MSonly_EFFS_L1ZDC_OR;
   Bool_t          EF_mu4_MSonly_L1TE50;
   Bool_t          EF_mu4_MSonly_barrel;
   Bool_t          EF_mu4_MSonly_barrel_EFFS_L1ZDC;
   Bool_t          EF_mu4_MSonly_barrel_L1TE50;
   Bool_t          EF_mu4_MSonly_cosmic;
   Bool_t          EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;
   Bool_t          EF_mu4_MSonly_j15_a2hi_EFFS_matched;
   Bool_t          EF_mu4_barrel_L1VTE50;
   Bool_t          EF_mu4_cosmic;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1TE10;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1TE20;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1TE50;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1ZDC;
   Bool_t          EF_mu6T_MSonly;
   Bool_t          EF_mu6_IDTrkNoCut;
   Bool_t          EF_mu6_L1VTE50;
   Bool_t          EF_mu6_MSonly;
   Bool_t          EF_mu6_MSonly_L1TE50;
   Bool_t          L1_2EM3;
   Bool_t          L1_2EM5;
   Bool_t          L1_2MU0;
   Bool_t          L1_2MU0_EMPTY;
   Bool_t          L1_2MU11;
   Bool_t          L1_2MU20;
   Bool_t          L1_2MU4;
   Bool_t          L1_2MU4_EMPTY;
   Bool_t          L1_2MU6;
   Bool_t          L1_2MU6_EMPTY;
   Bool_t          L1_2MU6_FIRSTEMPTY;
   Bool_t          L1_2MU6_UNPAIRED_ISO;
   Bool_t          L1_2MU6_UNPAIRED_NONISO;
   Bool_t          L1_EM10;
   Bool_t          L1_EM12;
   Bool_t          L1_EM14;
   Bool_t          L1_EM16;
   Bool_t          L1_EM3;
   Bool_t          L1_EM3_EMPTY;
   Bool_t          L1_EM3_FIRSTEMPTY;
   Bool_t          L1_EM3_MV_VTE50;
   Bool_t          L1_EM3_UNPAIRED_ISO;
   Bool_t          L1_EM3_UNPAIRED_NONISO;
   Bool_t          L1_EM3_VTE50;
   Bool_t          L1_EM4;
   Bool_t          L1_EM5;
   Bool_t          L1_EM5_EMPTY;
   Bool_t          L1_EM7;
   Bool_t          L1_MU0;
   Bool_t          L1_MU0_EMPTY;
   Bool_t          L1_MU0_FIRSTEMPTY;
   Bool_t          L1_MU0_MV_VTE50;
   Bool_t          L1_MU0_TE50;
   Bool_t          L1_MU0_UNPAIRED_ISO;
   Bool_t          L1_MU0_UNPAIRED_NONISO;
   Bool_t          L1_MU0_VTE50;
   Bool_t          L1_MU11;
   Bool_t          L1_MU11_EMPTY;
   Bool_t          L1_MU15;
   Bool_t          L1_MU20;
   Bool_t          L1_MU4;
   Bool_t          L1_MU4_EMPTY;
   Bool_t          L1_MU4_FIRSTEMPTY;
   Bool_t          L1_MU4_MV_VTE50;
   Bool_t          L1_MU4_TE50;
   Bool_t          L1_MU4_UNPAIRED_ISO;
   Bool_t          L1_MU4_UNPAIRED_NONISO;
   Bool_t          L1_MU4_VTE50;
   Bool_t          L1_MU6;
   Bool_t          L1_MU6_FIRSTEMPTY;
   Bool_t          L2_2g10_loose;
   Bool_t          L2_2g5_loose;
   Bool_t          L2_2g7_loose;
   Bool_t          L2_2mu2_MSonly_EFFS_L1MBTS;
   Bool_t          L2_2mu2_MSonly_EFFS_L1TE10;
   Bool_t          L2_2mu2_MSonly_EFFS_L1TE20;
   Bool_t          L2_2mu2_MSonly_EFFS_L1TE50;
   Bool_t          L2_2mu2_MSonly_EFFS_L1ZDC;
   Bool_t          L2_2mu2_MSonly_EFFS_L1ZDC_OR;
   Bool_t          L2_2mu4T_MSonly;
   Bool_t          L2_2mu4_MSonly;
   Bool_t          L2_2mu4_MSonly_EFFS_L1MU0;
   Bool_t          L2_2mu4_MSonly_EFFS_L1TE10;
   Bool_t          L2_2mu4_MSonly_EFFS_L1TE20;
   Bool_t          L2_2mu4_MSonly_EFFS_L1TE50;
   Bool_t          L2_2mu4_MSonly_EFFS_L1ZDC;
   Bool_t          L2_2mu6T_MSonly;
   Bool_t          L2_2mu6_MSonly;
   Bool_t          L2_L1ItemStreamer_L1_2EM3;
   Bool_t          L2_L1ItemStreamer_L1_2EM5;
   Bool_t          L2_L1ItemStreamer_L1_2MU0;
   Bool_t          L2_L1ItemStreamer_L1_2MU0_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_2MU11;
   Bool_t          L2_L1ItemStreamer_L1_2MU4;
   Bool_t          L2_L1ItemStreamer_L1_2MU4_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_2MU6;
   Bool_t          L2_L1ItemStreamer_L1_2MU6_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;
   Bool_t          L2_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;
   Bool_t          L2_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;
   Bool_t          L2_L1ItemStreamer_L1_EM10;
   Bool_t          L2_L1ItemStreamer_L1_EM12;
   Bool_t          L2_L1ItemStreamer_L1_EM14;
   Bool_t          L2_L1ItemStreamer_L1_EM16;
   Bool_t          L2_L1ItemStreamer_L1_EM3;
   Bool_t          L2_L1ItemStreamer_L1_EM3_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_EM3_FIRSTEMPTY;
   Bool_t          L2_L1ItemStreamer_L1_EM3_MV_VTE50;
   Bool_t          L2_L1ItemStreamer_L1_EM3_UNPAIRED_ISO;
   Bool_t          L2_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO;
   Bool_t          L2_L1ItemStreamer_L1_EM3_VTE50;
   Bool_t          L2_L1ItemStreamer_L1_EM4;
   Bool_t          L2_L1ItemStreamer_L1_EM5;
   Bool_t          L2_L1ItemStreamer_L1_EM5_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_EM7;
   Bool_t          L2_L1ItemStreamer_L1_MU0;
   Bool_t          L2_L1ItemStreamer_L1_MU0_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU0_FIRSTEMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU0_MV_VTE50;
   Bool_t          L2_L1ItemStreamer_L1_MU0_TE50;
   Bool_t          L2_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;
   Bool_t          L2_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;
   Bool_t          L2_L1ItemStreamer_L1_MU0_VTE50;
   Bool_t          L2_L1ItemStreamer_L1_MU11;
   Bool_t          L2_L1ItemStreamer_L1_MU11_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU15;
   Bool_t          L2_L1ItemStreamer_L1_MU20;
   Bool_t          L2_L1ItemStreamer_L1_MU4;
   Bool_t          L2_L1ItemStreamer_L1_MU4_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU4_FIRSTEMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU4_MV_VTE50;
   Bool_t          L2_L1ItemStreamer_L1_MU4_TE50;
   Bool_t          L2_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;
   Bool_t          L2_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;
   Bool_t          L2_L1ItemStreamer_L1_MU4_VTE50;
   Bool_t          L2_L1ItemStreamer_L1_MU6;
   Bool_t          L2_L1ItemStreamer_L1_MU6_FIRSTEMPTY;
   Bool_t          L2_SeededStreamerL1Calo;
   Bool_t          L2_e10_loose1;
   Bool_t          L2_e10_medium1;
   Bool_t          L2_e5_loose1;
   Bool_t          L2_e5_medium1;
   Bool_t          L2_e7_loose1;
   Bool_t          L2_e7_medium1;
   Bool_t          L2_em3_empty_larcalib;
   Bool_t          L2_em5_empty_larcalib;
   Bool_t          L2_g10_loose;
   Bool_t          L2_g10_medium;
   Bool_t          L2_g5_NoCut_cosmic;
   Bool_t          L2_g5_loose;
   Bool_t          L2_g5_medium;
   Bool_t          L2_g7_loose;
   Bool_t          L2_g7_medium;
   Bool_t          L2_mu10T_MSonly;
   Bool_t          L2_mu10_MSonly;
   Bool_t          L2_mu10_MSonly_EFFS_L1TE10;
   Bool_t          L2_mu10_MSonly_EFFS_L1TE20;
   Bool_t          L2_mu10_MSonly_EFFS_L1TE50;
   Bool_t          L2_mu10_MSonly_EFFS_L1ZDC;
   Bool_t          L2_mu13T_MSonly;
   Bool_t          L2_mu13_MSonly;
   Bool_t          L2_mu13_MSonly_EFFS_L1TE10;
   Bool_t          L2_mu13_MSonly_EFFS_L1TE20;
   Bool_t          L2_mu13_MSonly_EFFS_L1TE50;
   Bool_t          L2_mu13_MSonly_EFFS_L1ZDC;
   Bool_t          L2_mu4;
   Bool_t          L2_mu4T;
   Bool_t          L2_mu4T_IDTrkNoCut;
   Bool_t          L2_mu4T_MSonly;
   Bool_t          L2_mu4T_MSonly_L1TE50;
   Bool_t          L2_mu4T_MSonly_barrel;
   Bool_t          L2_mu4T_MSonly_cosmic;
   Bool_t          L2_mu4T_cosmic;
   Bool_t          L2_mu4T_l2cal;
   Bool_t          L2_mu4_IDTrkNoCut;
   Bool_t          L2_mu4_L1VTE50;
   Bool_t          L2_mu4_MSonly;
   Bool_t          L2_mu4_MSonly_EFFS_L1MBTS;
   Bool_t          L2_mu4_MSonly_EFFS_L1TE10;
   Bool_t          L2_mu4_MSonly_EFFS_L1TE20;
   Bool_t          L2_mu4_MSonly_EFFS_L1TE50;
   Bool_t          L2_mu4_MSonly_EFFS_L1ZDC;
   Bool_t          L2_mu4_MSonly_EFFS_L1ZDC_OR;
   Bool_t          L2_mu4_MSonly_L1TE50;
   Bool_t          L2_mu4_MSonly_barrel;
   Bool_t          L2_mu4_MSonly_barrel_EFFS_L1ZDC;
   Bool_t          L2_mu4_MSonly_barrel_L1TE50;
   Bool_t          L2_mu4_MSonly_cosmic;
   Bool_t          L2_mu4_barrel_L1VTE50;
   Bool_t          L2_mu4_cosmic;
   Bool_t          L2_mu4_l2cal_empty;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1TE10;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1TE20;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1TE50;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1ZDC;
   Bool_t          L2_mu6T_MSonly;
   Bool_t          L2_mu6_IDTrkNoCut;
   Bool_t          L2_mu6_L1VTE50;
   Bool_t          L2_mu6_MSonly;
   Bool_t          L2_mu6_MSonly_L1TE50;
   Bool_t          L2_mu6_l2cal;
   vector<int>     *trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1MBTS;
   vector<int>     *trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC_OR;
   vector<int>     *trig_EF_trigmuonef_EF_2mu4T_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0;
   vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_2mu6T_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_2mu6_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU11;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4_EMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_EMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_EMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_TE50;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11_EMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU15;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU20;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_EMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_MV_VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_TE50;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY;
   vector<int>     *trig_EF_trigmuonef_EF_mu10T_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_mu13T_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_mu4;
   vector<int>     *trig_EF_trigmuonef_EF_mu4T;
   vector<int>     *trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut;
   vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly_barrel;
   vector<int>     *trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic;
   vector<int>     *trig_EF_trigmuonef_EF_mu4T_cosmic;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_IDTrkNoCut;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_L1VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MBTS;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC_OR;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_barrel;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_barrel_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_cosmic;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_barrel_L1VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_cosmic;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_mu6T_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_IDTrkNoCut;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_L1VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50;
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          timestamp;
   UInt_t          timestamp_ns;
   UInt_t          lbn;
   UInt_t          bcid;
   UInt_t          detmask0;
   UInt_t          detmask1;
   Float_t         actualIntPerXing;
   Float_t         averageIntPerXing;
   UInt_t          pixelFlags;
   UInt_t          sctFlags;
   UInt_t          trtFlags;
   UInt_t          larFlags;
   UInt_t          tileFlags;
   UInt_t          muonFlags;
   UInt_t          fwdFlags;
   UInt_t          coreFlags;
   UInt_t          pixelError;
   UInt_t          sctError;
   UInt_t          trtError;
   UInt_t          larError;
   UInt_t          tileError;
   UInt_t          muonError;
   UInt_t          fwdError;
   UInt_t          coreError;
   Bool_t          streamDecision_Egamma;
   Bool_t          streamDecision_Muons;
   Bool_t          streamDecision_JetTauEtmiss;
   Bool_t          isSimulation;
   Bool_t          isCalibration;
   Bool_t          isTestBeam;
   Int_t           mb_n;
   vector<float>   *mb_E;
   vector<float>   *mb_eta;
   vector<float>   *mb_phi;
   vector<float>   *mb_time;
   vector<int>     *mb_quality;
   vector<int>     *mb_type;
   vector<int>     *mb_module;
   vector<int>     *mb_channel;
   Float_t         mbtime_timeDiff;
   Float_t         mbtime_timeA;
   Float_t         mbtime_timeC;
   Int_t           mbtime_countA;
   Int_t           mbtime_countC;
   Int_t           Zdc_n;
   vector<vector<float> > *Zdc_Energy_Vec;
   vector<vector<float> > *Zdc_Time_Vec;
   vector<int>     *Zdc_Vec_Size;
   vector<float>   *Zdc_Energy_LG;
   vector<float>   *Zdc_Time_LG;
   vector<float>   *Zdc_Energy_HG;
   vector<float>   *Zdc_Time_HG;
   vector<unsigned int> *Zdc_Id;
   vector<int>     *Zdc_Side;
   vector<int>     *Zdc_Type;
   vector<int>     *Zdc_Module;
   vector<int>     *Zdc_Channel;
   vector<float>   *Zdc_TimeCalib;
   vector<unsigned int> *Zdc_RecMethod;
   Int_t           ZdcDigits_n;
   vector<vector<int> > *ZdcDigits_dig_g0d0;
   vector<vector<int> > *ZdcDigits_dig_g0d1;
   vector<vector<int> > *ZdcDigits_dig_g1d0;
   vector<vector<int> > *ZdcDigits_dig_g1d1;
   vector<unsigned int> *ZdcDigits_Id;
   vector<int>     *ZdcDigits_Side;
   vector<int>     *ZdcDigits_Type;
   vector<int>     *ZdcDigits_Module;
   vector<int>     *ZdcDigits_Channel;
   Int_t           pixClus_n;
   vector<unsigned int> *pixClus_id;
   vector<char>    *pixClus_bec;
   vector<char>    *pixClus_layer;
   vector<unsigned int> *pixClus_detElementId;
   vector<char>    *pixClus_phi_module;
   vector<char>    *pixClus_eta_module;
   vector<short>   *pixClus_col;
   vector<short>   *pixClus_row;
   vector<float>   *pixClus_charge;
   vector<short>   *pixClus_LVL1A;
   vector<int>     *pixClus_sizePhi;
   vector<int>     *pixClus_sizeZ;
   vector<int>     *pixClus_size;
   vector<float>   *pixClus_locX;
   vector<float>   *pixClus_locY;
   vector<float>   *pixClus_x;
   vector<float>   *pixClus_y;
   vector<float>   *pixClus_z;
   vector<char>    *pixClus_isFake;
   vector<char>    *pixClus_isGanged;
   vector<int>     *pixClus_isSplit;
   vector<float>   *pixClus_splitProb1;
   vector<float>   *pixClus_splitProb2;
   Int_t           cc_fcal_n;
   vector<float>   *cc_fcal_E;
   vector<float>   *cc_fcal_pt;
   vector<float>   *cc_fcal_eta;
   vector<float>   *cc_fcal_phi;
   vector<int>     *cc_fcal_QCells;
   vector<int>     *cc_fcal_GainCells;
   vector<int>     *cc_fcal_DetCells;
   vector<float>   *cc_fcal_TimeCells;
   vector<float>   *cc_fcal_xCells;
   vector<float>   *cc_fcal_yCells;
   vector<float>   *cc_fcal_zCells;
   vector<int>     *cc_fcal_BadCells;
   vector<unsigned int> *cc_fcal_IdCells;
   vector<float>   *cc_fcal_Sigma;
   Int_t           ccc_Nh_Calo;
   Float_t         ccc_Eh_Calo;
   Int_t           ccc_Nh_EM;
   Float_t         ccc_Eh_EM;
   Int_t           ccc_Nh_HAD;
   Float_t         ccc_Eh_HAD;
   Int_t           ccc_Nh_PresB;
   vector<float>   *ccc_Eh_PresB;
   Int_t           ccc_Nh_EMB;
   vector<float>   *ccc_Eh_EMB;
   Int_t           ccc_Nh_EMEC;
   vector<float>   *ccc_Eh_EMEC;
   Int_t           ccc_Nh_Tile;
   vector<float>   *ccc_Eh_Tile;
   Int_t           ccc_Nh_TileGap;
   vector<float>   *ccc_Eh_TileGap;
   Int_t           ccc_Nh_HEC;
   vector<float>   *ccc_Eh_HEC;
   Int_t           ccc_Nh_FCal;
   vector<float>   *ccc_Eh_FCal;
   Int_t           ccc_Nh_PresE;
   vector<float>   *ccc_Eh_PresE;
   Int_t           ccc_Nh_Scint;
   vector<float>   *ccc_Eh_Scint;
   Int_t           cccEt_Et_Nh_Calo;
   Float_t         cccEt_Et_Eh_Calo;
   Int_t           cccEt_Et_Nh_EM;
   Float_t         cccEt_Et_Eh_EM;
   Int_t           cccEt_Et_Nh_HAD;
   Float_t         cccEt_Et_Eh_HAD;
   Int_t           cccEt_Et_Nh_PresB;
   vector<float>   *cccEt_Et_Eh_PresB;
   Int_t           cccEt_Et_Nh_EMB;
   vector<float>   *cccEt_Et_Eh_EMB;
   Int_t           cccEt_Et_Nh_EMEC;
   vector<float>   *cccEt_Et_Eh_EMEC;
   Int_t           cccEt_Et_Nh_Tile;
   vector<float>   *cccEt_Et_Eh_Tile;
   Int_t           cccEt_Et_Nh_TileGap;
   vector<float>   *cccEt_Et_Eh_TileGap;
   Int_t           cccEt_Et_Nh_HEC;
   vector<float>   *cccEt_Et_Eh_HEC;
   Int_t           cccEt_Et_Nh_FCal;
   vector<float>   *cccEt_Et_Eh_FCal;
   Int_t           cccEt_Et_Nh_PresE;
   vector<float>   *cccEt_Et_Eh_PresE;
   Int_t           cccEt_Et_Nh_Scint;
   vector<float>   *cccEt_Et_Eh_Scint;
   Int_t           cccEt_p_Nh_Calo;
   Float_t         cccEt_p_Eh_Calo;
   Int_t           cccEt_p_Nh_EM;
   Float_t         cccEt_p_Eh_EM;
   Int_t           cccEt_p_Nh_HAD;
   Float_t         cccEt_p_Eh_HAD;
   Int_t           cccEt_p_Nh_PresB;
   vector<float>   *cccEt_p_Eh_PresB;
   Int_t           cccEt_p_Nh_EMB;
   vector<float>   *cccEt_p_Eh_EMB;
   Int_t           cccEt_p_Nh_EMEC;
   vector<float>   *cccEt_p_Eh_EMEC;
   Int_t           cccEt_p_Nh_Tile;
   vector<float>   *cccEt_p_Eh_Tile;
   Int_t           cccEt_p_Nh_TileGap;
   vector<float>   *cccEt_p_Eh_TileGap;
   Int_t           cccEt_p_Nh_HEC;
   vector<float>   *cccEt_p_Eh_HEC;
   Int_t           cccEt_p_Nh_FCal;
   vector<float>   *cccEt_p_Eh_FCal;
   Int_t           cccEt_p_Nh_PresE;
   vector<float>   *cccEt_p_Eh_PresE;
   Int_t           cccEt_p_Nh_Scint;
   vector<float>   *cccEt_p_Eh_Scint;
   Int_t           cccEt_n_Nh_Calo;
   Float_t         cccEt_n_Eh_Calo;
   Int_t           cccEt_n_Nh_EM;
   Float_t         cccEt_n_Eh_EM;
   Int_t           cccEt_n_Nh_HAD;
   Float_t         cccEt_n_Eh_HAD;
   Int_t           cccEt_n_Nh_PresB;
   vector<float>   *cccEt_n_Eh_PresB;
   Int_t           cccEt_n_Nh_EMB;
   vector<float>   *cccEt_n_Eh_EMB;
   Int_t           cccEt_n_Nh_EMEC;
   vector<float>   *cccEt_n_Eh_EMEC;
   Int_t           cccEt_n_Nh_Tile;
   vector<float>   *cccEt_n_Eh_Tile;
   Int_t           cccEt_n_Nh_TileGap;
   vector<float>   *cccEt_n_Eh_TileGap;
   Int_t           cccEt_n_Nh_HEC;
   vector<float>   *cccEt_n_Eh_HEC;
   Int_t           cccEt_n_Nh_FCal;
   vector<float>   *cccEt_n_Eh_FCal;
   Int_t           cccEt_n_Nh_PresE;
   vector<float>   *cccEt_n_Eh_PresE;
   Int_t           cccEt_n_Nh_Scint;
   vector<float>   *cccEt_n_Eh_Scint;
   Int_t           lar_ncellA;
   Int_t           lar_ncellC;
   Float_t         lar_energyA;
   Float_t         lar_energyC;
   Float_t         lar_timeA;
   Float_t         lar_timeC;
   Float_t         lar_timeDiff;
   Int_t           TotalEt_n;
   vector<float>   *TotalEt_layer_eta;
   vector<float>   *TotalEt_layer_phi;
   vector<vector<float> > *TotalEt_layer_area;
   vector<vector<float> > *TotalEt_layer_sampling;
   vector<vector<float> > *TotalEt_layer_sampling_calib;
   Int_t           trk_n;
   vector<float>   *trk_d0;
   vector<float>   *trk_z0;
   vector<float>   *trk_phi;
   vector<float>   *trk_theta;
   vector<float>   *trk_qoverp;
   vector<float>   *trk_pt;
   vector<float>   *trk_eta;
   vector<float>   *trk_err_d0;
   vector<float>   *trk_err_z0;
   vector<float>   *trk_err_phi;
   vector<float>   *trk_err_theta;
   vector<float>   *trk_err_qoverp;
   vector<float>   *trk_cov_d0_z0;
   vector<float>   *trk_cov_d0_phi;
   vector<float>   *trk_cov_d0_theta;
   vector<float>   *trk_cov_d0_qoverp;
   vector<float>   *trk_cov_z0_phi;
   vector<float>   *trk_cov_z0_theta;
   vector<float>   *trk_cov_z0_qoverp;
   vector<float>   *trk_cov_phi_theta;
   vector<float>   *trk_cov_phi_qoverp;
   vector<float>   *trk_cov_theta_qoverp;
   vector<float>   *trk_d0_wrtPV;
   vector<float>   *trk_z0_wrtPV;
   vector<float>   *trk_phi_wrtPV;
   vector<float>   *trk_err_d0_wrtPV;
   vector<float>   *trk_err_z0_wrtPV;
   vector<float>   *trk_err_phi_wrtPV;
   vector<float>   *trk_err_theta_wrtPV;
   vector<float>   *trk_err_qoverp_wrtPV;
   vector<float>   *trk_cov_d0_z0_wrtPV;
   vector<float>   *trk_cov_d0_phi_wrtPV;
   vector<float>   *trk_cov_d0_theta_wrtPV;
   vector<float>   *trk_cov_d0_qoverp_wrtPV;
   vector<float>   *trk_cov_z0_phi_wrtPV;
   vector<float>   *trk_cov_z0_theta_wrtPV;
   vector<float>   *trk_cov_z0_qoverp_wrtPV;
   vector<float>   *trk_cov_phi_theta_wrtPV;
   vector<float>   *trk_cov_phi_qoverp_wrtPV;
   vector<float>   *trk_cov_theta_qoverp_wrtPV;
   vector<float>   *trk_d0_wrtBS;
   vector<float>   *trk_z0_wrtBS;
   vector<float>   *trk_phi_wrtBS;
   vector<float>   *trk_err_d0_wrtBS;
   vector<float>   *trk_err_z0_wrtBS;
   vector<float>   *trk_err_phi_wrtBS;
   vector<float>   *trk_err_theta_wrtBS;
   vector<float>   *trk_err_qoverp_wrtBS;
   vector<float>   *trk_cov_d0_z0_wrtBS;
   vector<float>   *trk_cov_d0_phi_wrtBS;
   vector<float>   *trk_cov_d0_theta_wrtBS;
   vector<float>   *trk_cov_d0_qoverp_wrtBS;
   vector<float>   *trk_cov_z0_phi_wrtBS;
   vector<float>   *trk_cov_z0_theta_wrtBS;
   vector<float>   *trk_cov_z0_qoverp_wrtBS;
   vector<float>   *trk_cov_phi_theta_wrtBS;
   vector<float>   *trk_cov_phi_qoverp_wrtBS;
   vector<float>   *trk_cov_theta_qoverp_wrtBS;
   vector<float>   *trk_d0_wrtBL;
   vector<float>   *trk_z0_wrtBL;
   vector<float>   *trk_phi_wrtBL;
   vector<float>   *trk_d0_err_wrtBL;
   vector<float>   *trk_z0_err_wrtBL;
   vector<float>   *trk_phi_err_wrtBL;
   vector<float>   *trk_theta_err_wrtBL;
   vector<float>   *trk_qoverp_err_wrtBL;
   vector<float>   *trk_d0_z0_err_wrtBL;
   vector<float>   *trk_d0_phi_err_wrtBL;
   vector<float>   *trk_d0_theta_err_wrtBL;
   vector<float>   *trk_d0_qoverp_err_wrtBL;
   vector<float>   *trk_z0_phi_err_wrtBL;
   vector<float>   *trk_z0_theta_err_wrtBL;
   vector<float>   *trk_z0_qoverp_err_wrtBL;
   vector<float>   *trk_phi_theta_err_wrtBL;
   vector<float>   *trk_phi_qoverp_err_wrtBL;
   vector<float>   *trk_theta_qoverp_err_wrtBL;
   vector<float>   *trk_chi2;
   vector<int>     *trk_ndof;
   vector<int>     *trk_nBLHits;
   vector<int>     *trk_nPixHits;
   vector<int>     *trk_nSCTHits;
   vector<int>     *trk_nTRTHits;
   vector<int>     *trk_nTRTHighTHits;
   vector<int>     *trk_nTRTXenonHits;
   vector<int>     *trk_nPixHoles;
   vector<int>     *trk_nSCTHoles;
   vector<int>     *trk_nTRTHoles;
   vector<int>     *trk_nPixelDeadSensors;
   vector<int>     *trk_nSCTDeadSensors;
   vector<int>     *trk_nBLSharedHits;
   vector<int>     *trk_nPixSharedHits;
   vector<int>     *trk_nSCTSharedHits;
   vector<int>     *trk_nBLayerSplitHits;
   vector<int>     *trk_nPixSplitHits;
   vector<int>     *trk_nBLayerOutliers;
   vector<int>     *trk_nPixelOutliers;
   vector<int>     *trk_nSCTOutliers;
   vector<int>     *trk_nTRTOutliers;
   vector<int>     *trk_nTRTHighTOutliers;
   vector<int>     *trk_expectBLayerHit;
   vector<int>     *trk_nHits;
   vector<int>     *trk_nHoles;
   vector<int>     *trk_hitPattern;
   vector<int>     *trk_fitter;
   vector<int>     *trk_patternReco1;
   vector<int>     *trk_patternReco2;
   vector<int>     *trk_trackProperties;
   vector<int>     *trk_particleHypothesis;
   vector<vector<float> > *trk_blayerPrediction_x;
   vector<vector<float> > *trk_blayerPrediction_y;
   vector<vector<float> > *trk_blayerPrediction_z;
   vector<vector<float> > *trk_blayerPrediction_locX;
   vector<vector<float> > *trk_blayerPrediction_locY;
   vector<vector<float> > *trk_blayerPrediction_err_locX;
   vector<vector<float> > *trk_blayerPrediction_err_locY;
   vector<vector<float> > *trk_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trk_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trk_blayerPrediction_detElementId;
   vector<vector<int> > *trk_blayerPrediction_row;
   vector<vector<int> > *trk_blayerPrediction_col;
   vector<vector<int> > *trk_blayerPrediction_type;
   vector<int>     *trk_Pixel_hit_n;
   vector<vector<unsigned int> > *trk_Pixel_hit_id;
   vector<vector<unsigned int> > *trk_Pixel_hit_detElementId;
   vector<vector<int> > *trk_Pixel_hit_detType;
   vector<vector<int> > *trk_Pixel_hit_bec;
   vector<vector<int> > *trk_Pixel_hit_layer;
   vector<vector<float> > *trk_Pixel_hit_charge;
   vector<vector<int> > *trk_Pixel_hit_sizePhi;
   vector<vector<int> > *trk_Pixel_hit_sizeZ;
   vector<vector<int> > *trk_Pixel_hit_size;
   vector<vector<int> > *trk_Pixel_hit_isFake;
   vector<vector<int> > *trk_Pixel_hit_isGanged;
   vector<vector<int> > *trk_Pixel_hit_isSplit;
   vector<vector<float> > *trk_Pixel_hit_splitProb1;
   vector<vector<float> > *trk_Pixel_hit_splitProb2;
   vector<vector<int> > *trk_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trk_Pixel_hit_locX;
   vector<vector<float> > *trk_Pixel_hit_locY;
   vector<vector<float> > *trk_Pixel_hit_incidencePhi;
   vector<vector<float> > *trk_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trk_Pixel_hit_err_locX;
   vector<vector<float> > *trk_Pixel_hit_err_locY;
   vector<vector<float> > *trk_Pixel_hit_cov_locXY;
   vector<vector<float> > *trk_Pixel_hit_x;
   vector<vector<float> > *trk_Pixel_hit_y;
   vector<vector<float> > *trk_Pixel_hit_z;
   vector<vector<float> > *trk_Pixel_hit_trkLocX;
   vector<vector<float> > *trk_Pixel_hit_trkLocY;
   vector<vector<float> > *trk_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trk_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trk_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trk_Pixel_hit_chi2;
   vector<vector<int> > *trk_Pixel_hit_ndof;
   vector<int>     *trk_SCT_hit_n;
   vector<vector<unsigned int> > *trk_SCT_hit_id;
   vector<vector<unsigned int> > *trk_SCT_hit_detElementId;
   vector<vector<int> > *trk_SCT_hit_detType;
   vector<vector<int> > *trk_SCT_hit_bec;
   vector<vector<int> > *trk_SCT_hit_layer;
   vector<vector<int> > *trk_SCT_hit_sizePhi;
   vector<vector<int> > *trk_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trk_SCT_hit_locX;
   vector<vector<float> > *trk_SCT_hit_locY;
   vector<vector<float> > *trk_SCT_hit_incidencePhi;
   vector<vector<float> > *trk_SCT_hit_incidenceTheta;
   vector<vector<float> > *trk_SCT_hit_err_locX;
   vector<vector<float> > *trk_SCT_hit_err_locY;
   vector<vector<float> > *trk_SCT_hit_cov_locXY;
   vector<vector<float> > *trk_SCT_hit_x;
   vector<vector<float> > *trk_SCT_hit_y;
   vector<vector<float> > *trk_SCT_hit_z;
   vector<vector<float> > *trk_SCT_hit_trkLocX;
   vector<vector<float> > *trk_SCT_hit_trkLocY;
   vector<vector<float> > *trk_SCT_hit_err_trkLocX;
   vector<vector<float> > *trk_SCT_hit_err_trkLocY;
   vector<vector<float> > *trk_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trk_SCT_hit_chi2;
   vector<vector<int> > *trk_SCT_hit_ndof;
   vector<int>     *trk_TRT_hit_n;
   vector<vector<unsigned int> > *trk_TRT_hit_id;
   vector<vector<unsigned int> > *trk_TRT_hit_detElementId;
   vector<vector<int> > *trk_TRT_hit_detType;
   vector<vector<int> > *trk_TRT_hit_bec;
   vector<vector<int> > *trk_TRT_hit_layer;
   vector<vector<int> > *trk_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trk_TRT_hit_locR;
   vector<vector<float> > *trk_TRT_hit_err_locR;
   vector<vector<float> > *trk_TRT_hit_trkLocR;
   vector<vector<float> > *trk_TRT_hit_trkLocPhi;
   vector<vector<float> > *trk_TRT_hit_err_trkLocR;
   vector<vector<float> > *trk_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trk_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trk_TRT_hit_TOT;
   vector<vector<int> > *trk_TRT_hit_highLevel;
   vector<vector<float> > *trk_TRT_hit_trailingEdge;
   vector<vector<float> > *trk_TRT_hit_chi2;
   vector<vector<int> > *trk_TRT_hit_ndof;
   vector<int>     *trk_Pixel_outlier_n;
   vector<vector<unsigned int> > *trk_Pixel_outlier_id;
   vector<vector<unsigned int> > *trk_Pixel_outlier_detElementId;
   vector<vector<int> > *trk_Pixel_outlier_detType;
   vector<vector<int> > *trk_Pixel_outlier_bec;
   vector<vector<int> > *trk_Pixel_outlier_layer;
   vector<vector<float> > *trk_Pixel_outlier_charge;
   vector<vector<int> > *trk_Pixel_outlier_sizePhi;
   vector<vector<int> > *trk_Pixel_outlier_sizeZ;
   vector<vector<int> > *trk_Pixel_outlier_size;
   vector<vector<int> > *trk_Pixel_outlier_isFake;
   vector<vector<int> > *trk_Pixel_outlier_isGanged;
   vector<vector<int> > *trk_Pixel_outlier_isSplit;
   vector<vector<float> > *trk_Pixel_outlier_splitProb1;
   vector<vector<float> > *trk_Pixel_outlier_splitProb2;
   vector<vector<int> > *trk_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trk_Pixel_outlier_locX;
   vector<vector<float> > *trk_Pixel_outlier_locY;
   vector<vector<float> > *trk_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trk_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trk_Pixel_outlier_err_locX;
   vector<vector<float> > *trk_Pixel_outlier_err_locY;
   vector<vector<float> > *trk_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trk_Pixel_outlier_x;
   vector<vector<float> > *trk_Pixel_outlier_y;
   vector<vector<float> > *trk_Pixel_outlier_z;
   vector<vector<float> > *trk_Pixel_outlier_trkLocX;
   vector<vector<float> > *trk_Pixel_outlier_trkLocY;
   vector<vector<float> > *trk_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trk_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trk_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trk_Pixel_outlier_chi2;
   vector<vector<int> > *trk_Pixel_outlier_ndof;
   vector<int>     *trk_SCT_outlier_n;
   vector<vector<unsigned int> > *trk_SCT_outlier_id;
   vector<vector<unsigned int> > *trk_SCT_outlier_detElementId;
   vector<vector<int> > *trk_SCT_outlier_detType;
   vector<vector<int> > *trk_SCT_outlier_bec;
   vector<vector<int> > *trk_SCT_outlier_layer;
   vector<vector<int> > *trk_SCT_outlier_sizePhi;
   vector<vector<int> > *trk_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trk_SCT_outlier_locX;
   vector<vector<float> > *trk_SCT_outlier_locY;
   vector<vector<float> > *trk_SCT_outlier_incidencePhi;
   vector<vector<float> > *trk_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trk_SCT_outlier_err_locX;
   vector<vector<float> > *trk_SCT_outlier_err_locY;
   vector<vector<float> > *trk_SCT_outlier_cov_locXY;
   vector<vector<float> > *trk_SCT_outlier_x;
   vector<vector<float> > *trk_SCT_outlier_y;
   vector<vector<float> > *trk_SCT_outlier_z;
   vector<vector<float> > *trk_SCT_outlier_trkLocX;
   vector<vector<float> > *trk_SCT_outlier_trkLocY;
   vector<vector<float> > *trk_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trk_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trk_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trk_SCT_outlier_chi2;
   vector<vector<int> > *trk_SCT_outlier_ndof;
   vector<int>     *trk_TRT_outlier_n;
   vector<vector<unsigned int> > *trk_TRT_outlier_id;
   vector<vector<unsigned int> > *trk_TRT_outlier_detElementId;
   vector<vector<int> > *trk_TRT_outlier_detType;
   vector<vector<int> > *trk_TRT_outlier_bec;
   vector<vector<int> > *trk_TRT_outlier_layer;
   vector<vector<int> > *trk_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trk_TRT_outlier_locR;
   vector<vector<float> > *trk_TRT_outlier_err_locR;
   vector<vector<float> > *trk_TRT_outlier_trkLocR;
   vector<vector<float> > *trk_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trk_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trk_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trk_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trk_TRT_outlier_TOT;
   vector<vector<int> > *trk_TRT_outlier_highLevel;
   vector<vector<float> > *trk_TRT_outlier_trailingEdge;
   vector<vector<float> > *trk_TRT_outlier_chi2;
   vector<vector<int> > *trk_TRT_outlier_ndof;
   vector<int>     *trk_Pixel_hole_n;
   vector<vector<unsigned int> > *trk_Pixel_hole_detElementId;
   vector<vector<int> > *trk_Pixel_hole_bec;
   vector<vector<int> > *trk_Pixel_hole_layer;
   vector<vector<float> > *trk_Pixel_hole_trkLocX;
   vector<vector<float> > *trk_Pixel_hole_trkLocY;
   vector<vector<float> > *trk_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trk_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trk_Pixel_hole_cov_trkLocXY;
   vector<int>     *trk_SCT_hole_n;
   vector<vector<unsigned int> > *trk_SCT_hole_detElementId;
   vector<vector<int> > *trk_SCT_hole_bec;
   vector<vector<int> > *trk_SCT_hole_layer;
   vector<vector<float> > *trk_SCT_hole_trkLocX;
   vector<vector<float> > *trk_SCT_hole_trkLocY;
   vector<vector<float> > *trk_SCT_hole_err_trkLocX;
   vector<vector<float> > *trk_SCT_hole_err_trkLocY;
   vector<vector<float> > *trk_SCT_hole_cov_trkLocXY;
   vector<int>     *trk_TRT_hole_n;
   vector<vector<unsigned int> > *trk_TRT_hole_detElementId;
   vector<vector<int> > *trk_TRT_hole_bec;
   vector<vector<int> > *trk_TRT_hole_layer;
   vector<vector<float> > *trk_TRT_hole_trkLocR;
   vector<vector<float> > *trk_TRT_hole_trkLocPhi;
   vector<vector<float> > *trk_TRT_hole_err_trkLocR;
   vector<vector<float> > *trk_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trk_TRT_hole_cov_trkLocRPhi;
   Int_t           pTrklets_n;
   vector<int>     *pTrklets_nBPixClus;
   vector<int>     *pTrklets_n1PixClus;
   vector<int>     *pTrklets_n2PixClus;
   vector<int>     *pTrklets_layerSum;
   vector<float>   *pTrklets_eta;
   vector<float>   *pTrklets_phi;
   vector<float>   *pTrklets_pt;
   vector<float>   *pTrklets_deta;
   vector<float>   *pTrklets_dphi;
   vector<float>   *pTrklets_etaS;
   vector<float>   *pTrklets_phiS;
   vector<float>   *pTrklets_energy0;
   vector<float>   *pTrklets_energy1;
   vector<int>     *pTrklets_cSize0;
   vector<int>     *pTrklets_cSize1;
   vector<float>   *pTrklets_cRowSize0;
   vector<float>   *pTrklets_cRowSize1;
   vector<float>   *pTrklets_cColSize0;
   vector<float>   *pTrklets_cColSize1;
   vector<vector<unsigned int> > *pTrklets_clusIds;
   Int_t           trkPix_n;
   vector<float>   *trkPix_d0;
   vector<float>   *trkPix_z0;
   vector<float>   *trkPix_phi;
   vector<float>   *trkPix_theta;
   vector<float>   *trkPix_qoverp;
   vector<float>   *trkPix_pt;
   vector<float>   *trkPix_eta;
   vector<float>   *trkPix_err_d0;
   vector<float>   *trkPix_err_z0;
   vector<float>   *trkPix_err_phi;
   vector<float>   *trkPix_err_theta;
   vector<float>   *trkPix_err_qoverp;
   vector<float>   *trkPix_cov_d0_z0;
   vector<float>   *trkPix_cov_d0_phi;
   vector<float>   *trkPix_cov_d0_theta;
   vector<float>   *trkPix_cov_d0_qoverp;
   vector<float>   *trkPix_cov_z0_phi;
   vector<float>   *trkPix_cov_z0_theta;
   vector<float>   *trkPix_cov_z0_qoverp;
   vector<float>   *trkPix_cov_phi_theta;
   vector<float>   *trkPix_cov_phi_qoverp;
   vector<float>   *trkPix_cov_theta_qoverp;
   vector<float>   *trkPix_d0_wrtPV;
   vector<float>   *trkPix_z0_wrtPV;
   vector<float>   *trkPix_phi_wrtPV;
   vector<float>   *trkPix_err_d0_wrtPV;
   vector<float>   *trkPix_err_z0_wrtPV;
   vector<float>   *trkPix_err_phi_wrtPV;
   vector<float>   *trkPix_err_theta_wrtPV;
   vector<float>   *trkPix_err_qoverp_wrtPV;
   vector<float>   *trkPix_cov_d0_z0_wrtPV;
   vector<float>   *trkPix_cov_d0_phi_wrtPV;
   vector<float>   *trkPix_cov_d0_theta_wrtPV;
   vector<float>   *trkPix_cov_d0_qoverp_wrtPV;
   vector<float>   *trkPix_cov_z0_phi_wrtPV;
   vector<float>   *trkPix_cov_z0_theta_wrtPV;
   vector<float>   *trkPix_cov_z0_qoverp_wrtPV;
   vector<float>   *trkPix_cov_phi_theta_wrtPV;
   vector<float>   *trkPix_cov_phi_qoverp_wrtPV;
   vector<float>   *trkPix_cov_theta_qoverp_wrtPV;
   vector<float>   *trkPix_d0_wrtBS;
   vector<float>   *trkPix_z0_wrtBS;
   vector<float>   *trkPix_phi_wrtBS;
   vector<float>   *trkPix_err_d0_wrtBS;
   vector<float>   *trkPix_err_z0_wrtBS;
   vector<float>   *trkPix_err_phi_wrtBS;
   vector<float>   *trkPix_err_theta_wrtBS;
   vector<float>   *trkPix_err_qoverp_wrtBS;
   vector<float>   *trkPix_cov_d0_z0_wrtBS;
   vector<float>   *trkPix_cov_d0_phi_wrtBS;
   vector<float>   *trkPix_cov_d0_theta_wrtBS;
   vector<float>   *trkPix_cov_d0_qoverp_wrtBS;
   vector<float>   *trkPix_cov_z0_phi_wrtBS;
   vector<float>   *trkPix_cov_z0_theta_wrtBS;
   vector<float>   *trkPix_cov_z0_qoverp_wrtBS;
   vector<float>   *trkPix_cov_phi_theta_wrtBS;
   vector<float>   *trkPix_cov_phi_qoverp_wrtBS;
   vector<float>   *trkPix_cov_theta_qoverp_wrtBS;
   vector<float>   *trkPix_d0_wrtBL;
   vector<float>   *trkPix_z0_wrtBL;
   vector<float>   *trkPix_phi_wrtBL;
   vector<float>   *trkPix_d0_err_wrtBL;
   vector<float>   *trkPix_z0_err_wrtBL;
   vector<float>   *trkPix_phi_err_wrtBL;
   vector<float>   *trkPix_theta_err_wrtBL;
   vector<float>   *trkPix_qoverp_err_wrtBL;
   vector<float>   *trkPix_d0_z0_err_wrtBL;
   vector<float>   *trkPix_d0_phi_err_wrtBL;
   vector<float>   *trkPix_d0_theta_err_wrtBL;
   vector<float>   *trkPix_d0_qoverp_err_wrtBL;
   vector<float>   *trkPix_z0_phi_err_wrtBL;
   vector<float>   *trkPix_z0_theta_err_wrtBL;
   vector<float>   *trkPix_z0_qoverp_err_wrtBL;
   vector<float>   *trkPix_phi_theta_err_wrtBL;
   vector<float>   *trkPix_phi_qoverp_err_wrtBL;
   vector<float>   *trkPix_theta_qoverp_err_wrtBL;
   vector<float>   *trkPix_chi2;
   vector<int>     *trkPix_ndof;
   vector<int>     *trkPix_nBLHits;
   vector<int>     *trkPix_nPixHits;
   vector<int>     *trkPix_nSCTHits;
   vector<int>     *trkPix_nTRTHits;
   vector<int>     *trkPix_nTRTHighTHits;
   vector<int>     *trkPix_nTRTXenonHits;
   vector<int>     *trkPix_nPixHoles;
   vector<int>     *trkPix_nSCTHoles;
   vector<int>     *trkPix_nTRTHoles;
   vector<int>     *trkPix_nPixelDeadSensors;
   vector<int>     *trkPix_nSCTDeadSensors;
   vector<int>     *trkPix_nBLSharedHits;
   vector<int>     *trkPix_nPixSharedHits;
   vector<int>     *trkPix_nSCTSharedHits;
   vector<int>     *trkPix_nBLayerSplitHits;
   vector<int>     *trkPix_nPixSplitHits;
   vector<int>     *trkPix_nBLayerOutliers;
   vector<int>     *trkPix_nPixelOutliers;
   vector<int>     *trkPix_nSCTOutliers;
   vector<int>     *trkPix_nTRTOutliers;
   vector<int>     *trkPix_nTRTHighTOutliers;
   vector<int>     *trkPix_expectBLayerHit;
   vector<int>     *trkPix_nHits;
   vector<int>     *trkPix_nHoles;
   vector<int>     *trkPix_hitPattern;
   vector<int>     *trkPix_fitter;
   vector<int>     *trkPix_patternReco1;
   vector<int>     *trkPix_patternReco2;
   vector<int>     *trkPix_trackProperties;
   vector<int>     *trkPix_particleHypothesis;
   vector<vector<float> > *trkPix_blayerPrediction_x;
   vector<vector<float> > *trkPix_blayerPrediction_y;
   vector<vector<float> > *trkPix_blayerPrediction_z;
   vector<vector<float> > *trkPix_blayerPrediction_locX;
   vector<vector<float> > *trkPix_blayerPrediction_locY;
   vector<vector<float> > *trkPix_blayerPrediction_err_locX;
   vector<vector<float> > *trkPix_blayerPrediction_err_locY;
   vector<vector<float> > *trkPix_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trkPix_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trkPix_blayerPrediction_detElementId;
   vector<vector<int> > *trkPix_blayerPrediction_row;
   vector<vector<int> > *trkPix_blayerPrediction_col;
   vector<vector<int> > *trkPix_blayerPrediction_type;
   vector<int>     *trkPix_Pixel_hit_n;
   vector<vector<unsigned int> > *trkPix_Pixel_hit_id;
   vector<vector<unsigned int> > *trkPix_Pixel_hit_detElementId;
   vector<vector<int> > *trkPix_Pixel_hit_detType;
   vector<vector<int> > *trkPix_Pixel_hit_bec;
   vector<vector<int> > *trkPix_Pixel_hit_layer;
   vector<vector<float> > *trkPix_Pixel_hit_charge;
   vector<vector<int> > *trkPix_Pixel_hit_sizePhi;
   vector<vector<int> > *trkPix_Pixel_hit_sizeZ;
   vector<vector<int> > *trkPix_Pixel_hit_size;
   vector<vector<int> > *trkPix_Pixel_hit_isFake;
   vector<vector<int> > *trkPix_Pixel_hit_isGanged;
   vector<vector<int> > *trkPix_Pixel_hit_isSplit;
   vector<vector<float> > *trkPix_Pixel_hit_splitProb1;
   vector<vector<float> > *trkPix_Pixel_hit_splitProb2;
   vector<vector<int> > *trkPix_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trkPix_Pixel_hit_locX;
   vector<vector<float> > *trkPix_Pixel_hit_locY;
   vector<vector<float> > *trkPix_Pixel_hit_incidencePhi;
   vector<vector<float> > *trkPix_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trkPix_Pixel_hit_err_locX;
   vector<vector<float> > *trkPix_Pixel_hit_err_locY;
   vector<vector<float> > *trkPix_Pixel_hit_cov_locXY;
   vector<vector<float> > *trkPix_Pixel_hit_x;
   vector<vector<float> > *trkPix_Pixel_hit_y;
   vector<vector<float> > *trkPix_Pixel_hit_z;
   vector<vector<float> > *trkPix_Pixel_hit_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hit_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trkPix_Pixel_hit_chi2;
   vector<vector<int> > *trkPix_Pixel_hit_ndof;
   vector<int>     *trkPix_SCT_hit_n;
   vector<vector<unsigned int> > *trkPix_SCT_hit_id;
   vector<vector<unsigned int> > *trkPix_SCT_hit_detElementId;
   vector<vector<int> > *trkPix_SCT_hit_detType;
   vector<vector<int> > *trkPix_SCT_hit_bec;
   vector<vector<int> > *trkPix_SCT_hit_layer;
   vector<vector<int> > *trkPix_SCT_hit_sizePhi;
   vector<vector<int> > *trkPix_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trkPix_SCT_hit_locX;
   vector<vector<float> > *trkPix_SCT_hit_locY;
   vector<vector<float> > *trkPix_SCT_hit_incidencePhi;
   vector<vector<float> > *trkPix_SCT_hit_incidenceTheta;
   vector<vector<float> > *trkPix_SCT_hit_err_locX;
   vector<vector<float> > *trkPix_SCT_hit_err_locY;
   vector<vector<float> > *trkPix_SCT_hit_cov_locXY;
   vector<vector<float> > *trkPix_SCT_hit_x;
   vector<vector<float> > *trkPix_SCT_hit_y;
   vector<vector<float> > *trkPix_SCT_hit_z;
   vector<vector<float> > *trkPix_SCT_hit_trkLocX;
   vector<vector<float> > *trkPix_SCT_hit_trkLocY;
   vector<vector<float> > *trkPix_SCT_hit_err_trkLocX;
   vector<vector<float> > *trkPix_SCT_hit_err_trkLocY;
   vector<vector<float> > *trkPix_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trkPix_SCT_hit_chi2;
   vector<vector<int> > *trkPix_SCT_hit_ndof;
   vector<int>     *trkPix_TRT_hit_n;
   vector<vector<unsigned int> > *trkPix_TRT_hit_id;
   vector<vector<unsigned int> > *trkPix_TRT_hit_detElementId;
   vector<vector<int> > *trkPix_TRT_hit_detType;
   vector<vector<int> > *trkPix_TRT_hit_bec;
   vector<vector<int> > *trkPix_TRT_hit_layer;
   vector<vector<int> > *trkPix_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trkPix_TRT_hit_locR;
   vector<vector<float> > *trkPix_TRT_hit_err_locR;
   vector<vector<float> > *trkPix_TRT_hit_trkLocR;
   vector<vector<float> > *trkPix_TRT_hit_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hit_err_trkLocR;
   vector<vector<float> > *trkPix_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trkPix_TRT_hit_TOT;
   vector<vector<int> > *trkPix_TRT_hit_highLevel;
   vector<vector<float> > *trkPix_TRT_hit_trailingEdge;
   vector<vector<float> > *trkPix_TRT_hit_chi2;
   vector<vector<int> > *trkPix_TRT_hit_ndof;
   vector<int>     *trkPix_Pixel_outlier_n;
   vector<vector<unsigned int> > *trkPix_Pixel_outlier_id;
   vector<vector<unsigned int> > *trkPix_Pixel_outlier_detElementId;
   vector<vector<int> > *trkPix_Pixel_outlier_detType;
   vector<vector<int> > *trkPix_Pixel_outlier_bec;
   vector<vector<int> > *trkPix_Pixel_outlier_layer;
   vector<vector<float> > *trkPix_Pixel_outlier_charge;
   vector<vector<int> > *trkPix_Pixel_outlier_sizePhi;
   vector<vector<int> > *trkPix_Pixel_outlier_sizeZ;
   vector<vector<int> > *trkPix_Pixel_outlier_size;
   vector<vector<int> > *trkPix_Pixel_outlier_isFake;
   vector<vector<int> > *trkPix_Pixel_outlier_isGanged;
   vector<vector<int> > *trkPix_Pixel_outlier_isSplit;
   vector<vector<float> > *trkPix_Pixel_outlier_splitProb1;
   vector<vector<float> > *trkPix_Pixel_outlier_splitProb2;
   vector<vector<int> > *trkPix_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trkPix_Pixel_outlier_locX;
   vector<vector<float> > *trkPix_Pixel_outlier_locY;
   vector<vector<float> > *trkPix_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trkPix_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trkPix_Pixel_outlier_err_locX;
   vector<vector<float> > *trkPix_Pixel_outlier_err_locY;
   vector<vector<float> > *trkPix_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trkPix_Pixel_outlier_x;
   vector<vector<float> > *trkPix_Pixel_outlier_y;
   vector<vector<float> > *trkPix_Pixel_outlier_z;
   vector<vector<float> > *trkPix_Pixel_outlier_trkLocX;
   vector<vector<float> > *trkPix_Pixel_outlier_trkLocY;
   vector<vector<float> > *trkPix_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trkPix_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trkPix_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trkPix_Pixel_outlier_chi2;
   vector<vector<int> > *trkPix_Pixel_outlier_ndof;
   vector<int>     *trkPix_SCT_outlier_n;
   vector<vector<unsigned int> > *trkPix_SCT_outlier_id;
   vector<vector<unsigned int> > *trkPix_SCT_outlier_detElementId;
   vector<vector<int> > *trkPix_SCT_outlier_detType;
   vector<vector<int> > *trkPix_SCT_outlier_bec;
   vector<vector<int> > *trkPix_SCT_outlier_layer;
   vector<vector<int> > *trkPix_SCT_outlier_sizePhi;
   vector<vector<int> > *trkPix_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trkPix_SCT_outlier_locX;
   vector<vector<float> > *trkPix_SCT_outlier_locY;
   vector<vector<float> > *trkPix_SCT_outlier_incidencePhi;
   vector<vector<float> > *trkPix_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trkPix_SCT_outlier_err_locX;
   vector<vector<float> > *trkPix_SCT_outlier_err_locY;
   vector<vector<float> > *trkPix_SCT_outlier_cov_locXY;
   vector<vector<float> > *trkPix_SCT_outlier_x;
   vector<vector<float> > *trkPix_SCT_outlier_y;
   vector<vector<float> > *trkPix_SCT_outlier_z;
   vector<vector<float> > *trkPix_SCT_outlier_trkLocX;
   vector<vector<float> > *trkPix_SCT_outlier_trkLocY;
   vector<vector<float> > *trkPix_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trkPix_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trkPix_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trkPix_SCT_outlier_chi2;
   vector<vector<int> > *trkPix_SCT_outlier_ndof;
   vector<int>     *trkPix_TRT_outlier_n;
   vector<vector<unsigned int> > *trkPix_TRT_outlier_id;
   vector<vector<unsigned int> > *trkPix_TRT_outlier_detElementId;
   vector<vector<int> > *trkPix_TRT_outlier_detType;
   vector<vector<int> > *trkPix_TRT_outlier_bec;
   vector<vector<int> > *trkPix_TRT_outlier_layer;
   vector<vector<int> > *trkPix_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trkPix_TRT_outlier_locR;
   vector<vector<float> > *trkPix_TRT_outlier_err_locR;
   vector<vector<float> > *trkPix_TRT_outlier_trkLocR;
   vector<vector<float> > *trkPix_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trkPix_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trkPix_TRT_outlier_TOT;
   vector<vector<int> > *trkPix_TRT_outlier_highLevel;
   vector<vector<float> > *trkPix_TRT_outlier_trailingEdge;
   vector<vector<float> > *trkPix_TRT_outlier_chi2;
   vector<vector<int> > *trkPix_TRT_outlier_ndof;
   vector<int>     *trkPix_Pixel_hole_n;
   vector<vector<unsigned int> > *trkPix_Pixel_hole_detElementId;
   vector<vector<int> > *trkPix_Pixel_hole_bec;
   vector<vector<int> > *trkPix_Pixel_hole_layer;
   vector<vector<float> > *trkPix_Pixel_hole_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hole_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hole_cov_trkLocXY;
   vector<int>     *trkPix_SCT_hole_n;
   vector<vector<unsigned int> > *trkPix_SCT_hole_detElementId;
   vector<vector<int> > *trkPix_SCT_hole_bec;
   vector<vector<int> > *trkPix_SCT_hole_layer;
   vector<vector<float> > *trkPix_SCT_hole_trkLocX;
   vector<vector<float> > *trkPix_SCT_hole_trkLocY;
   vector<vector<float> > *trkPix_SCT_hole_err_trkLocX;
   vector<vector<float> > *trkPix_SCT_hole_err_trkLocY;
   vector<vector<float> > *trkPix_SCT_hole_cov_trkLocXY;
   vector<int>     *trkPix_TRT_hole_n;
   vector<vector<unsigned int> > *trkPix_TRT_hole_detElementId;
   vector<vector<int> > *trkPix_TRT_hole_bec;
   vector<vector<int> > *trkPix_TRT_hole_layer;
   vector<vector<float> > *trkPix_TRT_hole_trkLocR;
   vector<vector<float> > *trkPix_TRT_hole_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hole_err_trkLocR;
   vector<vector<float> > *trkPix_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hole_cov_trkLocRPhi;
   Int_t           trkSCT_n;
   vector<float>   *trkSCT_d0;
   vector<float>   *trkSCT_z0;
   vector<float>   *trkSCT_phi;
   vector<float>   *trkSCT_theta;
   vector<float>   *trkSCT_qoverp;
   vector<float>   *trkSCT_pt;
   vector<float>   *trkSCT_eta;
   vector<float>   *trkSCT_err_d0;
   vector<float>   *trkSCT_err_z0;
   vector<float>   *trkSCT_err_phi;
   vector<float>   *trkSCT_err_theta;
   vector<float>   *trkSCT_err_qoverp;
   vector<float>   *trkSCT_cov_d0_z0;
   vector<float>   *trkSCT_cov_d0_phi;
   vector<float>   *trkSCT_cov_d0_theta;
   vector<float>   *trkSCT_cov_d0_qoverp;
   vector<float>   *trkSCT_cov_z0_phi;
   vector<float>   *trkSCT_cov_z0_theta;
   vector<float>   *trkSCT_cov_z0_qoverp;
   vector<float>   *trkSCT_cov_phi_theta;
   vector<float>   *trkSCT_cov_phi_qoverp;
   vector<float>   *trkSCT_cov_theta_qoverp;
   vector<float>   *trkSCT_d0_wrtPV;
   vector<float>   *trkSCT_z0_wrtPV;
   vector<float>   *trkSCT_phi_wrtPV;
   vector<float>   *trkSCT_err_d0_wrtPV;
   vector<float>   *trkSCT_err_z0_wrtPV;
   vector<float>   *trkSCT_err_phi_wrtPV;
   vector<float>   *trkSCT_err_theta_wrtPV;
   vector<float>   *trkSCT_err_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_d0_z0_wrtPV;
   vector<float>   *trkSCT_cov_d0_phi_wrtPV;
   vector<float>   *trkSCT_cov_d0_theta_wrtPV;
   vector<float>   *trkSCT_cov_d0_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_z0_phi_wrtPV;
   vector<float>   *trkSCT_cov_z0_theta_wrtPV;
   vector<float>   *trkSCT_cov_z0_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_phi_theta_wrtPV;
   vector<float>   *trkSCT_cov_phi_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_theta_qoverp_wrtPV;
   vector<float>   *trkSCT_d0_wrtBS;
   vector<float>   *trkSCT_z0_wrtBS;
   vector<float>   *trkSCT_phi_wrtBS;
   vector<float>   *trkSCT_err_d0_wrtBS;
   vector<float>   *trkSCT_err_z0_wrtBS;
   vector<float>   *trkSCT_err_phi_wrtBS;
   vector<float>   *trkSCT_err_theta_wrtBS;
   vector<float>   *trkSCT_err_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_d0_z0_wrtBS;
   vector<float>   *trkSCT_cov_d0_phi_wrtBS;
   vector<float>   *trkSCT_cov_d0_theta_wrtBS;
   vector<float>   *trkSCT_cov_d0_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_z0_phi_wrtBS;
   vector<float>   *trkSCT_cov_z0_theta_wrtBS;
   vector<float>   *trkSCT_cov_z0_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_phi_theta_wrtBS;
   vector<float>   *trkSCT_cov_phi_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_theta_qoverp_wrtBS;
   vector<float>   *trkSCT_d0_wrtBL;
   vector<float>   *trkSCT_z0_wrtBL;
   vector<float>   *trkSCT_phi_wrtBL;
   vector<float>   *trkSCT_d0_err_wrtBL;
   vector<float>   *trkSCT_z0_err_wrtBL;
   vector<float>   *trkSCT_phi_err_wrtBL;
   vector<float>   *trkSCT_theta_err_wrtBL;
   vector<float>   *trkSCT_qoverp_err_wrtBL;
   vector<float>   *trkSCT_d0_z0_err_wrtBL;
   vector<float>   *trkSCT_d0_phi_err_wrtBL;
   vector<float>   *trkSCT_d0_theta_err_wrtBL;
   vector<float>   *trkSCT_d0_qoverp_err_wrtBL;
   vector<float>   *trkSCT_z0_phi_err_wrtBL;
   vector<float>   *trkSCT_z0_theta_err_wrtBL;
   vector<float>   *trkSCT_z0_qoverp_err_wrtBL;
   vector<float>   *trkSCT_phi_theta_err_wrtBL;
   vector<float>   *trkSCT_phi_qoverp_err_wrtBL;
   vector<float>   *trkSCT_theta_qoverp_err_wrtBL;
   vector<float>   *trkSCT_chi2;
   vector<int>     *trkSCT_ndof;
   vector<int>     *trkSCT_nBLHits;
   vector<int>     *trkSCT_nPixHits;
   vector<int>     *trkSCT_nSCTHits;
   vector<int>     *trkSCT_nTRTHits;
   vector<int>     *trkSCT_nTRTHighTHits;
   vector<int>     *trkSCT_nTRTXenonHits;
   vector<int>     *trkSCT_nPixHoles;
   vector<int>     *trkSCT_nSCTHoles;
   vector<int>     *trkSCT_nTRTHoles;
   vector<int>     *trkSCT_nPixelDeadSensors;
   vector<int>     *trkSCT_nSCTDeadSensors;
   vector<int>     *trkSCT_nBLSharedHits;
   vector<int>     *trkSCT_nPixSharedHits;
   vector<int>     *trkSCT_nSCTSharedHits;
   vector<int>     *trkSCT_nBLayerSplitHits;
   vector<int>     *trkSCT_nPixSplitHits;
   vector<int>     *trkSCT_nBLayerOutliers;
   vector<int>     *trkSCT_nPixelOutliers;
   vector<int>     *trkSCT_nSCTOutliers;
   vector<int>     *trkSCT_nTRTOutliers;
   vector<int>     *trkSCT_nTRTHighTOutliers;
   vector<int>     *trkSCT_expectBLayerHit;
   vector<int>     *trkSCT_nHits;
   vector<int>     *trkSCT_nHoles;
   vector<int>     *trkSCT_hitPattern;
   vector<int>     *trkSCT_fitter;
   vector<int>     *trkSCT_patternReco1;
   vector<int>     *trkSCT_patternReco2;
   vector<int>     *trkSCT_trackProperties;
   vector<int>     *trkSCT_particleHypothesis;
   vector<vector<float> > *trkSCT_blayerPrediction_x;
   vector<vector<float> > *trkSCT_blayerPrediction_y;
   vector<vector<float> > *trkSCT_blayerPrediction_z;
   vector<vector<float> > *trkSCT_blayerPrediction_locX;
   vector<vector<float> > *trkSCT_blayerPrediction_locY;
   vector<vector<float> > *trkSCT_blayerPrediction_err_locX;
   vector<vector<float> > *trkSCT_blayerPrediction_err_locY;
   vector<vector<float> > *trkSCT_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trkSCT_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trkSCT_blayerPrediction_detElementId;
   vector<vector<int> > *trkSCT_blayerPrediction_row;
   vector<vector<int> > *trkSCT_blayerPrediction_col;
   vector<vector<int> > *trkSCT_blayerPrediction_type;
   vector<int>     *trkSCT_Pixel_hit_n;
   vector<vector<unsigned int> > *trkSCT_Pixel_hit_id;
   vector<vector<unsigned int> > *trkSCT_Pixel_hit_detElementId;
   vector<vector<int> > *trkSCT_Pixel_hit_detType;
   vector<vector<int> > *trkSCT_Pixel_hit_bec;
   vector<vector<int> > *trkSCT_Pixel_hit_layer;
   vector<vector<float> > *trkSCT_Pixel_hit_charge;
   vector<vector<int> > *trkSCT_Pixel_hit_sizePhi;
   vector<vector<int> > *trkSCT_Pixel_hit_sizeZ;
   vector<vector<int> > *trkSCT_Pixel_hit_size;
   vector<vector<int> > *trkSCT_Pixel_hit_isFake;
   vector<vector<int> > *trkSCT_Pixel_hit_isGanged;
   vector<vector<int> > *trkSCT_Pixel_hit_isSplit;
   vector<vector<float> > *trkSCT_Pixel_hit_splitProb1;
   vector<vector<float> > *trkSCT_Pixel_hit_splitProb2;
   vector<vector<int> > *trkSCT_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trkSCT_Pixel_hit_locX;
   vector<vector<float> > *trkSCT_Pixel_hit_locY;
   vector<vector<float> > *trkSCT_Pixel_hit_incidencePhi;
   vector<vector<float> > *trkSCT_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trkSCT_Pixel_hit_err_locX;
   vector<vector<float> > *trkSCT_Pixel_hit_err_locY;
   vector<vector<float> > *trkSCT_Pixel_hit_cov_locXY;
   vector<vector<float> > *trkSCT_Pixel_hit_x;
   vector<vector<float> > *trkSCT_Pixel_hit_y;
   vector<vector<float> > *trkSCT_Pixel_hit_z;
   vector<vector<float> > *trkSCT_Pixel_hit_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hit_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trkSCT_Pixel_hit_chi2;
   vector<vector<int> > *trkSCT_Pixel_hit_ndof;
   vector<int>     *trkSCT_SCT_hit_n;
   vector<vector<unsigned int> > *trkSCT_SCT_hit_id;
   vector<vector<unsigned int> > *trkSCT_SCT_hit_detElementId;
   vector<vector<int> > *trkSCT_SCT_hit_detType;
   vector<vector<int> > *trkSCT_SCT_hit_bec;
   vector<vector<int> > *trkSCT_SCT_hit_layer;
   vector<vector<int> > *trkSCT_SCT_hit_sizePhi;
   vector<vector<int> > *trkSCT_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trkSCT_SCT_hit_locX;
   vector<vector<float> > *trkSCT_SCT_hit_locY;
   vector<vector<float> > *trkSCT_SCT_hit_incidencePhi;
   vector<vector<float> > *trkSCT_SCT_hit_incidenceTheta;
   vector<vector<float> > *trkSCT_SCT_hit_err_locX;
   vector<vector<float> > *trkSCT_SCT_hit_err_locY;
   vector<vector<float> > *trkSCT_SCT_hit_cov_locXY;
   vector<vector<float> > *trkSCT_SCT_hit_x;
   vector<vector<float> > *trkSCT_SCT_hit_y;
   vector<vector<float> > *trkSCT_SCT_hit_z;
   vector<vector<float> > *trkSCT_SCT_hit_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hit_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hit_err_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hit_err_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trkSCT_SCT_hit_chi2;
   vector<vector<int> > *trkSCT_SCT_hit_ndof;
   vector<int>     *trkSCT_TRT_hit_n;
   vector<vector<unsigned int> > *trkSCT_TRT_hit_id;
   vector<vector<unsigned int> > *trkSCT_TRT_hit_detElementId;
   vector<vector<int> > *trkSCT_TRT_hit_detType;
   vector<vector<int> > *trkSCT_TRT_hit_bec;
   vector<vector<int> > *trkSCT_TRT_hit_layer;
   vector<vector<int> > *trkSCT_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trkSCT_TRT_hit_locR;
   vector<vector<float> > *trkSCT_TRT_hit_err_locR;
   vector<vector<float> > *trkSCT_TRT_hit_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hit_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hit_err_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trkSCT_TRT_hit_TOT;
   vector<vector<int> > *trkSCT_TRT_hit_highLevel;
   vector<vector<float> > *trkSCT_TRT_hit_trailingEdge;
   vector<vector<float> > *trkSCT_TRT_hit_chi2;
   vector<vector<int> > *trkSCT_TRT_hit_ndof;
   vector<int>     *trkSCT_Pixel_outlier_n;
   vector<vector<unsigned int> > *trkSCT_Pixel_outlier_id;
   vector<vector<unsigned int> > *trkSCT_Pixel_outlier_detElementId;
   vector<vector<int> > *trkSCT_Pixel_outlier_detType;
   vector<vector<int> > *trkSCT_Pixel_outlier_bec;
   vector<vector<int> > *trkSCT_Pixel_outlier_layer;
   vector<vector<float> > *trkSCT_Pixel_outlier_charge;
   vector<vector<int> > *trkSCT_Pixel_outlier_sizePhi;
   vector<vector<int> > *trkSCT_Pixel_outlier_sizeZ;
   vector<vector<int> > *trkSCT_Pixel_outlier_size;
   vector<vector<int> > *trkSCT_Pixel_outlier_isFake;
   vector<vector<int> > *trkSCT_Pixel_outlier_isGanged;
   vector<vector<int> > *trkSCT_Pixel_outlier_isSplit;
   vector<vector<float> > *trkSCT_Pixel_outlier_splitProb1;
   vector<vector<float> > *trkSCT_Pixel_outlier_splitProb2;
   vector<vector<int> > *trkSCT_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trkSCT_Pixel_outlier_locX;
   vector<vector<float> > *trkSCT_Pixel_outlier_locY;
   vector<vector<float> > *trkSCT_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trkSCT_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_locX;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_locY;
   vector<vector<float> > *trkSCT_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trkSCT_Pixel_outlier_x;
   vector<vector<float> > *trkSCT_Pixel_outlier_y;
   vector<vector<float> > *trkSCT_Pixel_outlier_z;
   vector<vector<float> > *trkSCT_Pixel_outlier_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_outlier_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trkSCT_Pixel_outlier_chi2;
   vector<vector<int> > *trkSCT_Pixel_outlier_ndof;
   vector<int>     *trkSCT_SCT_outlier_n;
   vector<vector<unsigned int> > *trkSCT_SCT_outlier_id;
   vector<vector<unsigned int> > *trkSCT_SCT_outlier_detElementId;
   vector<vector<int> > *trkSCT_SCT_outlier_detType;
   vector<vector<int> > *trkSCT_SCT_outlier_bec;
   vector<vector<int> > *trkSCT_SCT_outlier_layer;
   vector<vector<int> > *trkSCT_SCT_outlier_sizePhi;
   vector<vector<int> > *trkSCT_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trkSCT_SCT_outlier_locX;
   vector<vector<float> > *trkSCT_SCT_outlier_locY;
   vector<vector<float> > *trkSCT_SCT_outlier_incidencePhi;
   vector<vector<float> > *trkSCT_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trkSCT_SCT_outlier_err_locX;
   vector<vector<float> > *trkSCT_SCT_outlier_err_locY;
   vector<vector<float> > *trkSCT_SCT_outlier_cov_locXY;
   vector<vector<float> > *trkSCT_SCT_outlier_x;
   vector<vector<float> > *trkSCT_SCT_outlier_y;
   vector<vector<float> > *trkSCT_SCT_outlier_z;
   vector<vector<float> > *trkSCT_SCT_outlier_trkLocX;
   vector<vector<float> > *trkSCT_SCT_outlier_trkLocY;
   vector<vector<float> > *trkSCT_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trkSCT_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trkSCT_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trkSCT_SCT_outlier_chi2;
   vector<vector<int> > *trkSCT_SCT_outlier_ndof;
   vector<int>     *trkSCT_TRT_outlier_n;
   vector<vector<unsigned int> > *trkSCT_TRT_outlier_id;
   vector<vector<unsigned int> > *trkSCT_TRT_outlier_detElementId;
   vector<vector<int> > *trkSCT_TRT_outlier_detType;
   vector<vector<int> > *trkSCT_TRT_outlier_bec;
   vector<vector<int> > *trkSCT_TRT_outlier_layer;
   vector<vector<int> > *trkSCT_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trkSCT_TRT_outlier_locR;
   vector<vector<float> > *trkSCT_TRT_outlier_err_locR;
   vector<vector<float> > *trkSCT_TRT_outlier_trkLocR;
   vector<vector<float> > *trkSCT_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trkSCT_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trkSCT_TRT_outlier_TOT;
   vector<vector<int> > *trkSCT_TRT_outlier_highLevel;
   vector<vector<float> > *trkSCT_TRT_outlier_trailingEdge;
   vector<vector<float> > *trkSCT_TRT_outlier_chi2;
   vector<vector<int> > *trkSCT_TRT_outlier_ndof;
   vector<int>     *trkSCT_Pixel_hole_n;
   vector<vector<unsigned int> > *trkSCT_Pixel_hole_detElementId;
   vector<vector<int> > *trkSCT_Pixel_hole_bec;
   vector<vector<int> > *trkSCT_Pixel_hole_layer;
   vector<vector<float> > *trkSCT_Pixel_hole_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hole_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hole_cov_trkLocXY;
   vector<int>     *trkSCT_SCT_hole_n;
   vector<vector<unsigned int> > *trkSCT_SCT_hole_detElementId;
   vector<vector<int> > *trkSCT_SCT_hole_bec;
   vector<vector<int> > *trkSCT_SCT_hole_layer;
   vector<vector<float> > *trkSCT_SCT_hole_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hole_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hole_err_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hole_err_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hole_cov_trkLocXY;
   vector<int>     *trkSCT_TRT_hole_n;
   vector<vector<unsigned int> > *trkSCT_TRT_hole_detElementId;
   vector<vector<int> > *trkSCT_TRT_hole_bec;
   vector<vector<int> > *trkSCT_TRT_hole_layer;
   vector<vector<float> > *trkSCT_TRT_hole_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hole_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hole_err_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hole_cov_trkLocRPhi;
   Int_t           trkTRT_n;
   vector<float>   *trkTRT_d0;
   vector<float>   *trkTRT_z0;
   vector<float>   *trkTRT_phi;
   vector<float>   *trkTRT_theta;
   vector<float>   *trkTRT_qoverp;
   vector<float>   *trkTRT_pt;
   vector<float>   *trkTRT_eta;
   vector<float>   *trkTRT_err_d0;
   vector<float>   *trkTRT_err_z0;
   vector<float>   *trkTRT_err_phi;
   vector<float>   *trkTRT_err_theta;
   vector<float>   *trkTRT_err_qoverp;
   vector<float>   *trkTRT_cov_d0_z0;
   vector<float>   *trkTRT_cov_d0_phi;
   vector<float>   *trkTRT_cov_d0_theta;
   vector<float>   *trkTRT_cov_d0_qoverp;
   vector<float>   *trkTRT_cov_z0_phi;
   vector<float>   *trkTRT_cov_z0_theta;
   vector<float>   *trkTRT_cov_z0_qoverp;
   vector<float>   *trkTRT_cov_phi_theta;
   vector<float>   *trkTRT_cov_phi_qoverp;
   vector<float>   *trkTRT_cov_theta_qoverp;
   vector<float>   *trkTRT_d0_wrtPV;
   vector<float>   *trkTRT_z0_wrtPV;
   vector<float>   *trkTRT_phi_wrtPV;
   vector<float>   *trkTRT_err_d0_wrtPV;
   vector<float>   *trkTRT_err_z0_wrtPV;
   vector<float>   *trkTRT_err_phi_wrtPV;
   vector<float>   *trkTRT_err_theta_wrtPV;
   vector<float>   *trkTRT_err_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_d0_z0_wrtPV;
   vector<float>   *trkTRT_cov_d0_phi_wrtPV;
   vector<float>   *trkTRT_cov_d0_theta_wrtPV;
   vector<float>   *trkTRT_cov_d0_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_z0_phi_wrtPV;
   vector<float>   *trkTRT_cov_z0_theta_wrtPV;
   vector<float>   *trkTRT_cov_z0_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_phi_theta_wrtPV;
   vector<float>   *trkTRT_cov_phi_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_theta_qoverp_wrtPV;
   vector<float>   *trkTRT_d0_wrtBS;
   vector<float>   *trkTRT_z0_wrtBS;
   vector<float>   *trkTRT_phi_wrtBS;
   vector<float>   *trkTRT_err_d0_wrtBS;
   vector<float>   *trkTRT_err_z0_wrtBS;
   vector<float>   *trkTRT_err_phi_wrtBS;
   vector<float>   *trkTRT_err_theta_wrtBS;
   vector<float>   *trkTRT_err_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_d0_z0_wrtBS;
   vector<float>   *trkTRT_cov_d0_phi_wrtBS;
   vector<float>   *trkTRT_cov_d0_theta_wrtBS;
   vector<float>   *trkTRT_cov_d0_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_z0_phi_wrtBS;
   vector<float>   *trkTRT_cov_z0_theta_wrtBS;
   vector<float>   *trkTRT_cov_z0_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_phi_theta_wrtBS;
   vector<float>   *trkTRT_cov_phi_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_theta_qoverp_wrtBS;
   vector<float>   *trkTRT_d0_wrtBL;
   vector<float>   *trkTRT_z0_wrtBL;
   vector<float>   *trkTRT_phi_wrtBL;
   vector<float>   *trkTRT_d0_err_wrtBL;
   vector<float>   *trkTRT_z0_err_wrtBL;
   vector<float>   *trkTRT_phi_err_wrtBL;
   vector<float>   *trkTRT_theta_err_wrtBL;
   vector<float>   *trkTRT_qoverp_err_wrtBL;
   vector<float>   *trkTRT_d0_z0_err_wrtBL;
   vector<float>   *trkTRT_d0_phi_err_wrtBL;
   vector<float>   *trkTRT_d0_theta_err_wrtBL;
   vector<float>   *trkTRT_d0_qoverp_err_wrtBL;
   vector<float>   *trkTRT_z0_phi_err_wrtBL;
   vector<float>   *trkTRT_z0_theta_err_wrtBL;
   vector<float>   *trkTRT_z0_qoverp_err_wrtBL;
   vector<float>   *trkTRT_phi_theta_err_wrtBL;
   vector<float>   *trkTRT_phi_qoverp_err_wrtBL;
   vector<float>   *trkTRT_theta_qoverp_err_wrtBL;
   vector<float>   *trkTRT_chi2;
   vector<int>     *trkTRT_ndof;
   vector<int>     *trkTRT_nBLHits;
   vector<int>     *trkTRT_nPixHits;
   vector<int>     *trkTRT_nSCTHits;
   vector<int>     *trkTRT_nTRTHits;
   vector<int>     *trkTRT_nTRTHighTHits;
   vector<int>     *trkTRT_nTRTXenonHits;
   vector<int>     *trkTRT_nPixHoles;
   vector<int>     *trkTRT_nSCTHoles;
   vector<int>     *trkTRT_nTRTHoles;
   vector<int>     *trkTRT_nPixelDeadSensors;
   vector<int>     *trkTRT_nSCTDeadSensors;
   vector<int>     *trkTRT_nBLSharedHits;
   vector<int>     *trkTRT_nPixSharedHits;
   vector<int>     *trkTRT_nSCTSharedHits;
   vector<int>     *trkTRT_nBLayerSplitHits;
   vector<int>     *trkTRT_nPixSplitHits;
   vector<int>     *trkTRT_nBLayerOutliers;
   vector<int>     *trkTRT_nPixelOutliers;
   vector<int>     *trkTRT_nSCTOutliers;
   vector<int>     *trkTRT_nTRTOutliers;
   vector<int>     *trkTRT_nTRTHighTOutliers;
   vector<int>     *trkTRT_expectBLayerHit;
   vector<int>     *trkTRT_nHits;
   vector<int>     *trkTRT_nHoles;
   vector<int>     *trkTRT_hitPattern;
   vector<int>     *trkTRT_fitter;
   vector<int>     *trkTRT_patternReco1;
   vector<int>     *trkTRT_patternReco2;
   vector<int>     *trkTRT_trackProperties;
   vector<int>     *trkTRT_particleHypothesis;
   vector<vector<float> > *trkTRT_blayerPrediction_x;
   vector<vector<float> > *trkTRT_blayerPrediction_y;
   vector<vector<float> > *trkTRT_blayerPrediction_z;
   vector<vector<float> > *trkTRT_blayerPrediction_locX;
   vector<vector<float> > *trkTRT_blayerPrediction_locY;
   vector<vector<float> > *trkTRT_blayerPrediction_err_locX;
   vector<vector<float> > *trkTRT_blayerPrediction_err_locY;
   vector<vector<float> > *trkTRT_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trkTRT_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trkTRT_blayerPrediction_detElementId;
   vector<vector<int> > *trkTRT_blayerPrediction_row;
   vector<vector<int> > *trkTRT_blayerPrediction_col;
   vector<vector<int> > *trkTRT_blayerPrediction_type;
   vector<int>     *trkTRT_Pixel_hit_n;
   vector<vector<unsigned int> > *trkTRT_Pixel_hit_id;
   vector<vector<unsigned int> > *trkTRT_Pixel_hit_detElementId;
   vector<vector<int> > *trkTRT_Pixel_hit_detType;
   vector<vector<int> > *trkTRT_Pixel_hit_bec;
   vector<vector<int> > *trkTRT_Pixel_hit_layer;
   vector<vector<float> > *trkTRT_Pixel_hit_charge;
   vector<vector<int> > *trkTRT_Pixel_hit_sizePhi;
   vector<vector<int> > *trkTRT_Pixel_hit_sizeZ;
   vector<vector<int> > *trkTRT_Pixel_hit_size;
   vector<vector<int> > *trkTRT_Pixel_hit_isFake;
   vector<vector<int> > *trkTRT_Pixel_hit_isGanged;
   vector<vector<int> > *trkTRT_Pixel_hit_isSplit;
   vector<vector<float> > *trkTRT_Pixel_hit_splitProb1;
   vector<vector<float> > *trkTRT_Pixel_hit_splitProb2;
   vector<vector<int> > *trkTRT_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trkTRT_Pixel_hit_locX;
   vector<vector<float> > *trkTRT_Pixel_hit_locY;
   vector<vector<float> > *trkTRT_Pixel_hit_incidencePhi;
   vector<vector<float> > *trkTRT_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trkTRT_Pixel_hit_err_locX;
   vector<vector<float> > *trkTRT_Pixel_hit_err_locY;
   vector<vector<float> > *trkTRT_Pixel_hit_cov_locXY;
   vector<vector<float> > *trkTRT_Pixel_hit_x;
   vector<vector<float> > *trkTRT_Pixel_hit_y;
   vector<vector<float> > *trkTRT_Pixel_hit_z;
   vector<vector<float> > *trkTRT_Pixel_hit_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hit_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trkTRT_Pixel_hit_chi2;
   vector<vector<int> > *trkTRT_Pixel_hit_ndof;
   vector<int>     *trkTRT_SCT_hit_n;
   vector<vector<unsigned int> > *trkTRT_SCT_hit_id;
   vector<vector<unsigned int> > *trkTRT_SCT_hit_detElementId;
   vector<vector<int> > *trkTRT_SCT_hit_detType;
   vector<vector<int> > *trkTRT_SCT_hit_bec;
   vector<vector<int> > *trkTRT_SCT_hit_layer;
   vector<vector<int> > *trkTRT_SCT_hit_sizePhi;
   vector<vector<int> > *trkTRT_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trkTRT_SCT_hit_locX;
   vector<vector<float> > *trkTRT_SCT_hit_locY;
   vector<vector<float> > *trkTRT_SCT_hit_incidencePhi;
   vector<vector<float> > *trkTRT_SCT_hit_incidenceTheta;
   vector<vector<float> > *trkTRT_SCT_hit_err_locX;
   vector<vector<float> > *trkTRT_SCT_hit_err_locY;
   vector<vector<float> > *trkTRT_SCT_hit_cov_locXY;
   vector<vector<float> > *trkTRT_SCT_hit_x;
   vector<vector<float> > *trkTRT_SCT_hit_y;
   vector<vector<float> > *trkTRT_SCT_hit_z;
   vector<vector<float> > *trkTRT_SCT_hit_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hit_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hit_err_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hit_err_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trkTRT_SCT_hit_chi2;
   vector<vector<int> > *trkTRT_SCT_hit_ndof;
   vector<int>     *trkTRT_TRT_hit_n;
   vector<vector<unsigned int> > *trkTRT_TRT_hit_id;
   vector<vector<unsigned int> > *trkTRT_TRT_hit_detElementId;
   vector<vector<int> > *trkTRT_TRT_hit_detType;
   vector<vector<int> > *trkTRT_TRT_hit_bec;
   vector<vector<int> > *trkTRT_TRT_hit_layer;
   vector<vector<int> > *trkTRT_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trkTRT_TRT_hit_locR;
   vector<vector<float> > *trkTRT_TRT_hit_err_locR;
   vector<vector<float> > *trkTRT_TRT_hit_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hit_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hit_err_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trkTRT_TRT_hit_TOT;
   vector<vector<int> > *trkTRT_TRT_hit_highLevel;
   vector<vector<float> > *trkTRT_TRT_hit_trailingEdge;
   vector<vector<float> > *trkTRT_TRT_hit_chi2;
   vector<vector<int> > *trkTRT_TRT_hit_ndof;
   vector<int>     *trkTRT_Pixel_outlier_n;
   vector<vector<unsigned int> > *trkTRT_Pixel_outlier_id;
   vector<vector<unsigned int> > *trkTRT_Pixel_outlier_detElementId;
   vector<vector<int> > *trkTRT_Pixel_outlier_detType;
   vector<vector<int> > *trkTRT_Pixel_outlier_bec;
   vector<vector<int> > *trkTRT_Pixel_outlier_layer;
   vector<vector<float> > *trkTRT_Pixel_outlier_charge;
   vector<vector<int> > *trkTRT_Pixel_outlier_sizePhi;
   vector<vector<int> > *trkTRT_Pixel_outlier_sizeZ;
   vector<vector<int> > *trkTRT_Pixel_outlier_size;
   vector<vector<int> > *trkTRT_Pixel_outlier_isFake;
   vector<vector<int> > *trkTRT_Pixel_outlier_isGanged;
   vector<vector<int> > *trkTRT_Pixel_outlier_isSplit;
   vector<vector<float> > *trkTRT_Pixel_outlier_splitProb1;
   vector<vector<float> > *trkTRT_Pixel_outlier_splitProb2;
   vector<vector<int> > *trkTRT_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trkTRT_Pixel_outlier_locX;
   vector<vector<float> > *trkTRT_Pixel_outlier_locY;
   vector<vector<float> > *trkTRT_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trkTRT_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_locX;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_locY;
   vector<vector<float> > *trkTRT_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trkTRT_Pixel_outlier_x;
   vector<vector<float> > *trkTRT_Pixel_outlier_y;
   vector<vector<float> > *trkTRT_Pixel_outlier_z;
   vector<vector<float> > *trkTRT_Pixel_outlier_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_outlier_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trkTRT_Pixel_outlier_chi2;
   vector<vector<int> > *trkTRT_Pixel_outlier_ndof;
   vector<int>     *trkTRT_SCT_outlier_n;
   vector<vector<unsigned int> > *trkTRT_SCT_outlier_id;
   vector<vector<unsigned int> > *trkTRT_SCT_outlier_detElementId;
   vector<vector<int> > *trkTRT_SCT_outlier_detType;
   vector<vector<int> > *trkTRT_SCT_outlier_bec;
   vector<vector<int> > *trkTRT_SCT_outlier_layer;
   vector<vector<int> > *trkTRT_SCT_outlier_sizePhi;
   vector<vector<int> > *trkTRT_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trkTRT_SCT_outlier_locX;
   vector<vector<float> > *trkTRT_SCT_outlier_locY;
   vector<vector<float> > *trkTRT_SCT_outlier_incidencePhi;
   vector<vector<float> > *trkTRT_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trkTRT_SCT_outlier_err_locX;
   vector<vector<float> > *trkTRT_SCT_outlier_err_locY;
   vector<vector<float> > *trkTRT_SCT_outlier_cov_locXY;
   vector<vector<float> > *trkTRT_SCT_outlier_x;
   vector<vector<float> > *trkTRT_SCT_outlier_y;
   vector<vector<float> > *trkTRT_SCT_outlier_z;
   vector<vector<float> > *trkTRT_SCT_outlier_trkLocX;
   vector<vector<float> > *trkTRT_SCT_outlier_trkLocY;
   vector<vector<float> > *trkTRT_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trkTRT_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trkTRT_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trkTRT_SCT_outlier_chi2;
   vector<vector<int> > *trkTRT_SCT_outlier_ndof;
   vector<int>     *trkTRT_TRT_outlier_n;
   vector<vector<unsigned int> > *trkTRT_TRT_outlier_id;
   vector<vector<unsigned int> > *trkTRT_TRT_outlier_detElementId;
   vector<vector<int> > *trkTRT_TRT_outlier_detType;
   vector<vector<int> > *trkTRT_TRT_outlier_bec;
   vector<vector<int> > *trkTRT_TRT_outlier_layer;
   vector<vector<int> > *trkTRT_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trkTRT_TRT_outlier_locR;
   vector<vector<float> > *trkTRT_TRT_outlier_err_locR;
   vector<vector<float> > *trkTRT_TRT_outlier_trkLocR;
   vector<vector<float> > *trkTRT_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trkTRT_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trkTRT_TRT_outlier_TOT;
   vector<vector<int> > *trkTRT_TRT_outlier_highLevel;
   vector<vector<float> > *trkTRT_TRT_outlier_trailingEdge;
   vector<vector<float> > *trkTRT_TRT_outlier_chi2;
   vector<vector<int> > *trkTRT_TRT_outlier_ndof;
   vector<int>     *trkTRT_Pixel_hole_n;
   vector<vector<unsigned int> > *trkTRT_Pixel_hole_detElementId;
   vector<vector<int> > *trkTRT_Pixel_hole_bec;
   vector<vector<int> > *trkTRT_Pixel_hole_layer;
   vector<vector<float> > *trkTRT_Pixel_hole_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hole_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hole_cov_trkLocXY;
   vector<int>     *trkTRT_SCT_hole_n;
   vector<vector<unsigned int> > *trkTRT_SCT_hole_detElementId;
   vector<vector<int> > *trkTRT_SCT_hole_bec;
   vector<vector<int> > *trkTRT_SCT_hole_layer;
   vector<vector<float> > *trkTRT_SCT_hole_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hole_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hole_err_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hole_err_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hole_cov_trkLocXY;
   vector<int>     *trkTRT_TRT_hole_n;
   vector<vector<unsigned int> > *trkTRT_TRT_hole_detElementId;
   vector<vector<int> > *trkTRT_TRT_hole_bec;
   vector<vector<int> > *trkTRT_TRT_hole_layer;
   vector<vector<float> > *trkTRT_TRT_hole_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hole_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hole_err_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hole_cov_trkLocRPhi;
   Int_t           AntiKt4TopoEM_n;
   vector<float>   *AntiKt4TopoEM_E;
   vector<float>   *AntiKt4TopoEM_pt;
   vector<float>   *AntiKt4TopoEM_m;
   vector<float>   *AntiKt4TopoEM_eta;
   vector<float>   *AntiKt4TopoEM_phi;
   vector<float>   *AntiKt4TopoEM_EtaOrigin;
   vector<float>   *AntiKt4TopoEM_PhiOrigin;
   vector<float>   *AntiKt4TopoEM_MOrigin;
   vector<float>   *AntiKt4TopoEM_EtaOriginEM;
   vector<float>   *AntiKt4TopoEM_PhiOriginEM;
   vector<float>   *AntiKt4TopoEM_MOriginEM;
   vector<float>   *AntiKt4TopoEM_WIDTH;
   vector<float>   *AntiKt4TopoEM_n90;
   vector<float>   *AntiKt4TopoEM_Timing;
   vector<float>   *AntiKt4TopoEM_LArQuality;
   vector<float>   *AntiKt4TopoEM_nTrk;
   vector<float>   *AntiKt4TopoEM_sumPtTrk;
   vector<float>   *AntiKt4TopoEM_OriginIndex;
   vector<float>   *AntiKt4TopoEM_HECQuality;
   vector<float>   *AntiKt4TopoEM_NegativeE;
   vector<float>   *AntiKt4TopoEM_AverageLArQF;
   vector<float>   *AntiKt4TopoEM_YFlip12;
   vector<float>   *AntiKt4TopoEM_YFlip23;
   vector<float>   *AntiKt4TopoEM_BCH_CORR_CELL;
   vector<float>   *AntiKt4TopoEM_BCH_CORR_DOTX;
   vector<float>   *AntiKt4TopoEM_BCH_CORR_JET;
   vector<float>   *AntiKt4TopoEM_BCH_CORR_JET_FORCELL;
   vector<float>   *AntiKt4TopoEM_ENG_BAD_CELLS;
   vector<float>   *AntiKt4TopoEM_N_BAD_CELLS;
   vector<float>   *AntiKt4TopoEM_N_BAD_CELLS_CORR;
   vector<float>   *AntiKt4TopoEM_BAD_CELLS_CORR_E;
   vector<float>   *AntiKt4TopoEM_NumTowers;
   vector<float>   *AntiKt4TopoEM_ootFracCells5;
   vector<float>   *AntiKt4TopoEM_ootFracCells10;
   vector<float>   *AntiKt4TopoEM_ootFracClusters5;
   vector<float>   *AntiKt4TopoEM_ootFracClusters10;
   vector<int>     *AntiKt4TopoEM_SamplingMax;
   vector<float>   *AntiKt4TopoEM_fracSamplingMax;
   vector<float>   *AntiKt4TopoEM_hecf;
   vector<float>   *AntiKt4TopoEM_tgap3f;
   vector<int>     *AntiKt4TopoEM_isUgly;
   vector<int>     *AntiKt4TopoEM_isBadLooseMinus;
   vector<int>     *AntiKt4TopoEM_isBadLoose;
   vector<int>     *AntiKt4TopoEM_isBadMedium;
   vector<int>     *AntiKt4TopoEM_isBadTight;
   vector<float>   *AntiKt4TopoEM_emfrac;
   vector<float>   *AntiKt4TopoEM_Offset;
   vector<float>   *AntiKt4TopoEM_EMJES;
   vector<float>   *AntiKt4TopoEM_EMJES_EtaCorr;
   vector<float>   *AntiKt4TopoEM_EMJESnooffset;
   vector<float>   *AntiKt4TopoEM_GCWJES;
   vector<float>   *AntiKt4TopoEM_GCWJES_EtaCorr;
   vector<float>   *AntiKt4TopoEM_CB;
   vector<float>   *AntiKt4TopoEM_LCJES;
   vector<float>   *AntiKt4TopoEM_emscale_E;
   vector<float>   *AntiKt4TopoEM_emscale_pt;
   vector<float>   *AntiKt4TopoEM_emscale_m;
   vector<float>   *AntiKt4TopoEM_emscale_eta;
   vector<float>   *AntiKt4TopoEM_emscale_phi;
   vector<float>   *AntiKt4TopoEM_jvtx_x;
   vector<float>   *AntiKt4TopoEM_jvtx_y;
   vector<float>   *AntiKt4TopoEM_jvtx_z;
   vector<float>   *AntiKt4TopoEM_jvtxf;
   vector<float>   *AntiKt4TopoEM_GSCFactorF;
   vector<float>   *AntiKt4TopoEM_WidthFraction;
   vector<float>   *AntiKt4TopoEM_e_PreSamplerB;
   vector<float>   *AntiKt4TopoEM_e_EMB1;
   vector<float>   *AntiKt4TopoEM_e_EMB2;
   vector<float>   *AntiKt4TopoEM_e_EMB3;
   vector<float>   *AntiKt4TopoEM_e_PreSamplerE;
   vector<float>   *AntiKt4TopoEM_e_EME1;
   vector<float>   *AntiKt4TopoEM_e_EME2;
   vector<float>   *AntiKt4TopoEM_e_EME3;
   vector<float>   *AntiKt4TopoEM_e_HEC0;
   vector<float>   *AntiKt4TopoEM_e_HEC1;
   vector<float>   *AntiKt4TopoEM_e_HEC2;
   vector<float>   *AntiKt4TopoEM_e_HEC3;
   vector<float>   *AntiKt4TopoEM_e_TileBar0;
   vector<float>   *AntiKt4TopoEM_e_TileBar1;
   vector<float>   *AntiKt4TopoEM_e_TileBar2;
   vector<float>   *AntiKt4TopoEM_e_TileGap1;
   vector<float>   *AntiKt4TopoEM_e_TileGap2;
   vector<float>   *AntiKt4TopoEM_e_TileGap3;
   vector<float>   *AntiKt4TopoEM_e_TileExt0;
   vector<float>   *AntiKt4TopoEM_e_TileExt1;
   vector<float>   *AntiKt4TopoEM_e_TileExt2;
   vector<float>   *AntiKt4TopoEM_e_FCAL0;
   vector<float>   *AntiKt4TopoEM_e_FCAL1;
   vector<float>   *AntiKt4TopoEM_e_FCAL2;
   vector<vector<float> > *AntiKt4TopoEM_shapeBins;
   vector<int>     *AntiKt4TopoEM_Nconst;
   vector<vector<float> > *AntiKt4TopoEM_ptconst_default;
   vector<vector<float> > *AntiKt4TopoEM_econst_default;
   vector<vector<float> > *AntiKt4TopoEM_etaconst_default;
   vector<vector<float> > *AntiKt4TopoEM_phiconst_default;
   vector<vector<float> > *AntiKt4TopoEM_weightconst_default;
   vector<float>   *AntiKt4TopoEM_constscale_E;
   vector<float>   *AntiKt4TopoEM_constscale_pt;
   vector<float>   *AntiKt4TopoEM_constscale_m;
   vector<float>   *AntiKt4TopoEM_constscale_eta;
   vector<float>   *AntiKt4TopoEM_constscale_phi;
   vector<float>   *AntiKt4TopoEM_el_dr;
   vector<int>     *AntiKt4TopoEM_el_matched;
   vector<float>   *AntiKt4TopoEM_mu_dr;
   vector<int>     *AntiKt4TopoEM_mu_matched;
   vector<float>   *AntiKt4TopoEM_L1_dr;
   vector<int>     *AntiKt4TopoEM_L1_matched;
   vector<float>   *AntiKt4TopoEM_L2_dr;
   vector<int>     *AntiKt4TopoEM_L2_matched;
   vector<float>   *AntiKt4TopoEM_EF_dr;
   vector<int>     *AntiKt4TopoEM_EF_matched;
   Int_t           AntiKt4LCTopo_n;
   vector<float>   *AntiKt4LCTopo_E;
   vector<float>   *AntiKt4LCTopo_pt;
   vector<float>   *AntiKt4LCTopo_m;
   vector<float>   *AntiKt4LCTopo_eta;
   vector<float>   *AntiKt4LCTopo_phi;
   vector<float>   *AntiKt4LCTopo_EtaOrigin;
   vector<float>   *AntiKt4LCTopo_PhiOrigin;
   vector<float>   *AntiKt4LCTopo_MOrigin;
   vector<float>   *AntiKt4LCTopo_EtaOriginEM;
   vector<float>   *AntiKt4LCTopo_PhiOriginEM;
   vector<float>   *AntiKt4LCTopo_MOriginEM;
   vector<float>   *AntiKt4LCTopo_WIDTH;
   vector<float>   *AntiKt4LCTopo_n90;
   vector<float>   *AntiKt4LCTopo_Timing;
   vector<float>   *AntiKt4LCTopo_LArQuality;
   vector<float>   *AntiKt4LCTopo_nTrk;
   vector<float>   *AntiKt4LCTopo_sumPtTrk;
   vector<float>   *AntiKt4LCTopo_OriginIndex;
   vector<float>   *AntiKt4LCTopo_HECQuality;
   vector<float>   *AntiKt4LCTopo_NegativeE;
   vector<float>   *AntiKt4LCTopo_AverageLArQF;
   vector<float>   *AntiKt4LCTopo_YFlip12;
   vector<float>   *AntiKt4LCTopo_YFlip23;
   vector<float>   *AntiKt4LCTopo_BCH_CORR_CELL;
   vector<float>   *AntiKt4LCTopo_BCH_CORR_DOTX;
   vector<float>   *AntiKt4LCTopo_BCH_CORR_JET;
   vector<float>   *AntiKt4LCTopo_BCH_CORR_JET_FORCELL;
   vector<float>   *AntiKt4LCTopo_ENG_BAD_CELLS;
   vector<float>   *AntiKt4LCTopo_N_BAD_CELLS;
   vector<float>   *AntiKt4LCTopo_N_BAD_CELLS_CORR;
   vector<float>   *AntiKt4LCTopo_BAD_CELLS_CORR_E;
   vector<float>   *AntiKt4LCTopo_NumTowers;
   vector<float>   *AntiKt4LCTopo_ootFracCells5;
   vector<float>   *AntiKt4LCTopo_ootFracCells10;
   vector<float>   *AntiKt4LCTopo_ootFracClusters5;
   vector<float>   *AntiKt4LCTopo_ootFracClusters10;
   vector<int>     *AntiKt4LCTopo_SamplingMax;
   vector<float>   *AntiKt4LCTopo_fracSamplingMax;
   vector<float>   *AntiKt4LCTopo_hecf;
   vector<float>   *AntiKt4LCTopo_tgap3f;
   vector<int>     *AntiKt4LCTopo_isUgly;
   vector<int>     *AntiKt4LCTopo_isBadLooseMinus;
   vector<int>     *AntiKt4LCTopo_isBadLoose;
   vector<int>     *AntiKt4LCTopo_isBadMedium;
   vector<int>     *AntiKt4LCTopo_isBadTight;
   vector<float>   *AntiKt4LCTopo_emfrac;
   vector<float>   *AntiKt4LCTopo_Offset;
   vector<float>   *AntiKt4LCTopo_EMJES;
   vector<float>   *AntiKt4LCTopo_EMJES_EtaCorr;
   vector<float>   *AntiKt4LCTopo_EMJESnooffset;
   vector<float>   *AntiKt4LCTopo_GCWJES;
   vector<float>   *AntiKt4LCTopo_GCWJES_EtaCorr;
   vector<float>   *AntiKt4LCTopo_CB;
   vector<float>   *AntiKt4LCTopo_LCJES;
   vector<float>   *AntiKt4LCTopo_emscale_E;
   vector<float>   *AntiKt4LCTopo_emscale_pt;
   vector<float>   *AntiKt4LCTopo_emscale_m;
   vector<float>   *AntiKt4LCTopo_emscale_eta;
   vector<float>   *AntiKt4LCTopo_emscale_phi;
   vector<float>   *AntiKt4LCTopo_jvtx_x;
   vector<float>   *AntiKt4LCTopo_jvtx_y;
   vector<float>   *AntiKt4LCTopo_jvtx_z;
   vector<float>   *AntiKt4LCTopo_jvtxf;
   vector<float>   *AntiKt4LCTopo_GSCFactorF;
   vector<float>   *AntiKt4LCTopo_WidthFraction;
   vector<float>   *AntiKt4LCTopo_e_PreSamplerB;
   vector<float>   *AntiKt4LCTopo_e_EMB1;
   vector<float>   *AntiKt4LCTopo_e_EMB2;
   vector<float>   *AntiKt4LCTopo_e_EMB3;
   vector<float>   *AntiKt4LCTopo_e_PreSamplerE;
   vector<float>   *AntiKt4LCTopo_e_EME1;
   vector<float>   *AntiKt4LCTopo_e_EME2;
   vector<float>   *AntiKt4LCTopo_e_EME3;
   vector<float>   *AntiKt4LCTopo_e_HEC0;
   vector<float>   *AntiKt4LCTopo_e_HEC1;
   vector<float>   *AntiKt4LCTopo_e_HEC2;
   vector<float>   *AntiKt4LCTopo_e_HEC3;
   vector<float>   *AntiKt4LCTopo_e_TileBar0;
   vector<float>   *AntiKt4LCTopo_e_TileBar1;
   vector<float>   *AntiKt4LCTopo_e_TileBar2;
   vector<float>   *AntiKt4LCTopo_e_TileGap1;
   vector<float>   *AntiKt4LCTopo_e_TileGap2;
   vector<float>   *AntiKt4LCTopo_e_TileGap3;
   vector<float>   *AntiKt4LCTopo_e_TileExt0;
   vector<float>   *AntiKt4LCTopo_e_TileExt1;
   vector<float>   *AntiKt4LCTopo_e_TileExt2;
   vector<float>   *AntiKt4LCTopo_e_FCAL0;
   vector<float>   *AntiKt4LCTopo_e_FCAL1;
   vector<float>   *AntiKt4LCTopo_e_FCAL2;
   vector<vector<float> > *AntiKt4LCTopo_shapeBins;
   vector<int>     *AntiKt4LCTopo_Nconst;
   vector<vector<float> > *AntiKt4LCTopo_ptconst_default;
   vector<vector<float> > *AntiKt4LCTopo_econst_default;
   vector<vector<float> > *AntiKt4LCTopo_etaconst_default;
   vector<vector<float> > *AntiKt4LCTopo_phiconst_default;
   vector<vector<float> > *AntiKt4LCTopo_weightconst_default;
   vector<float>   *AntiKt4LCTopo_constscale_E;
   vector<float>   *AntiKt4LCTopo_constscale_pt;
   vector<float>   *AntiKt4LCTopo_constscale_m;
   vector<float>   *AntiKt4LCTopo_constscale_eta;
   vector<float>   *AntiKt4LCTopo_constscale_phi;
   vector<float>   *AntiKt4LCTopo_el_dr;
   vector<int>     *AntiKt4LCTopo_el_matched;
   vector<float>   *AntiKt4LCTopo_mu_dr;
   vector<int>     *AntiKt4LCTopo_mu_matched;
   vector<float>   *AntiKt4LCTopo_L1_dr;
   vector<int>     *AntiKt4LCTopo_L1_matched;
   vector<float>   *AntiKt4LCTopo_L2_dr;
   vector<int>     *AntiKt4LCTopo_L2_matched;
   vector<float>   *AntiKt4LCTopo_EF_dr;
   vector<int>     *AntiKt4LCTopo_EF_matched;
   Int_t           AntiKt6Tower_n;
   vector<float>   *AntiKt6Tower_E;
   vector<float>   *AntiKt6Tower_pt;
   vector<float>   *AntiKt6Tower_m;
   vector<float>   *AntiKt6Tower_eta;
   vector<float>   *AntiKt6Tower_phi;
   vector<float>   *AntiKt6Tower_EtaOrigin;
   vector<float>   *AntiKt6Tower_PhiOrigin;
   vector<float>   *AntiKt6Tower_MOrigin;
   vector<float>   *AntiKt6Tower_EtaOriginEM;
   vector<float>   *AntiKt6Tower_PhiOriginEM;
   vector<float>   *AntiKt6Tower_MOriginEM;
   vector<float>   *AntiKt6Tower_WIDTH;
   vector<float>   *AntiKt6Tower_n90;
   vector<float>   *AntiKt6Tower_Timing;
   vector<float>   *AntiKt6Tower_LArQuality;
   vector<float>   *AntiKt6Tower_nTrk;
   vector<float>   *AntiKt6Tower_sumPtTrk;
   vector<float>   *AntiKt6Tower_OriginIndex;
   vector<float>   *AntiKt6Tower_HECQuality;
   vector<float>   *AntiKt6Tower_NegativeE;
   vector<float>   *AntiKt6Tower_AverageLArQF;
   vector<float>   *AntiKt6Tower_YFlip12;
   vector<float>   *AntiKt6Tower_YFlip23;
   vector<float>   *AntiKt6Tower_BCH_CORR_CELL;
   vector<float>   *AntiKt6Tower_BCH_CORR_DOTX;
   vector<float>   *AntiKt6Tower_BCH_CORR_JET;
   vector<float>   *AntiKt6Tower_BCH_CORR_JET_FORCELL;
   vector<float>   *AntiKt6Tower_ENG_BAD_CELLS;
   vector<float>   *AntiKt6Tower_N_BAD_CELLS;
   vector<float>   *AntiKt6Tower_N_BAD_CELLS_CORR;
   vector<float>   *AntiKt6Tower_BAD_CELLS_CORR_E;
   vector<float>   *AntiKt6Tower_NumTowers;
   vector<float>   *AntiKt6Tower_ootFracCells5;
   vector<float>   *AntiKt6Tower_ootFracCells10;
   vector<float>   *AntiKt6Tower_ootFracClusters5;
   vector<float>   *AntiKt6Tower_ootFracClusters10;
   vector<int>     *AntiKt6Tower_SamplingMax;
   vector<float>   *AntiKt6Tower_fracSamplingMax;
   vector<float>   *AntiKt6Tower_hecf;
   vector<float>   *AntiKt6Tower_tgap3f;
   vector<int>     *AntiKt6Tower_isUgly;
   vector<int>     *AntiKt6Tower_isBadLooseMinus;
   vector<int>     *AntiKt6Tower_isBadLoose;
   vector<int>     *AntiKt6Tower_isBadMedium;
   vector<int>     *AntiKt6Tower_isBadTight;
   vector<float>   *AntiKt6Tower_emfrac;
   vector<float>   *AntiKt6Tower_Offset;
   vector<float>   *AntiKt6Tower_EMJES;
   vector<float>   *AntiKt6Tower_EMJES_EtaCorr;
   vector<float>   *AntiKt6Tower_EMJESnooffset;
   vector<float>   *AntiKt6Tower_GCWJES;
   vector<float>   *AntiKt6Tower_GCWJES_EtaCorr;
   vector<float>   *AntiKt6Tower_CB;
   vector<float>   *AntiKt6Tower_LCJES;
   vector<float>   *AntiKt6Tower_emscale_E;
   vector<float>   *AntiKt6Tower_emscale_pt;
   vector<float>   *AntiKt6Tower_emscale_m;
   vector<float>   *AntiKt6Tower_emscale_eta;
   vector<float>   *AntiKt6Tower_emscale_phi;
   vector<float>   *AntiKt6Tower_jvtx_x;
   vector<float>   *AntiKt6Tower_jvtx_y;
   vector<float>   *AntiKt6Tower_jvtx_z;
   vector<float>   *AntiKt6Tower_jvtxf;
   vector<float>   *AntiKt6Tower_GSCFactorF;
   vector<float>   *AntiKt6Tower_WidthFraction;
   vector<float>   *AntiKt6Tower_e_PreSamplerB;
   vector<float>   *AntiKt6Tower_e_EMB1;
   vector<float>   *AntiKt6Tower_e_EMB2;
   vector<float>   *AntiKt6Tower_e_EMB3;
   vector<float>   *AntiKt6Tower_e_PreSamplerE;
   vector<float>   *AntiKt6Tower_e_EME1;
   vector<float>   *AntiKt6Tower_e_EME2;
   vector<float>   *AntiKt6Tower_e_EME3;
   vector<float>   *AntiKt6Tower_e_HEC0;
   vector<float>   *AntiKt6Tower_e_HEC1;
   vector<float>   *AntiKt6Tower_e_HEC2;
   vector<float>   *AntiKt6Tower_e_HEC3;
   vector<float>   *AntiKt6Tower_e_TileBar0;
   vector<float>   *AntiKt6Tower_e_TileBar1;
   vector<float>   *AntiKt6Tower_e_TileBar2;
   vector<float>   *AntiKt6Tower_e_TileGap1;
   vector<float>   *AntiKt6Tower_e_TileGap2;
   vector<float>   *AntiKt6Tower_e_TileGap3;
   vector<float>   *AntiKt6Tower_e_TileExt0;
   vector<float>   *AntiKt6Tower_e_TileExt1;
   vector<float>   *AntiKt6Tower_e_TileExt2;
   vector<float>   *AntiKt6Tower_e_FCAL0;
   vector<float>   *AntiKt6Tower_e_FCAL1;
   vector<float>   *AntiKt6Tower_e_FCAL2;
   vector<vector<float> > *AntiKt6Tower_shapeBins;
   vector<int>     *AntiKt6Tower_Nconst;
   vector<vector<float> > *AntiKt6Tower_ptconst_default;
   vector<vector<float> > *AntiKt6Tower_econst_default;
   vector<vector<float> > *AntiKt6Tower_etaconst_default;
   vector<vector<float> > *AntiKt6Tower_phiconst_default;
   vector<vector<float> > *AntiKt6Tower_weightconst_default;
   vector<float>   *AntiKt6Tower_constscale_E;
   vector<float>   *AntiKt6Tower_constscale_pt;
   vector<float>   *AntiKt6Tower_constscale_m;
   vector<float>   *AntiKt6Tower_constscale_eta;
   vector<float>   *AntiKt6Tower_constscale_phi;
   vector<float>   *AntiKt6Tower_el_dr;
   vector<int>     *AntiKt6Tower_el_matched;
   vector<float>   *AntiKt6Tower_mu_dr;
   vector<int>     *AntiKt6Tower_mu_matched;
   vector<float>   *AntiKt6Tower_L1_dr;
   vector<int>     *AntiKt6Tower_L1_matched;
   vector<float>   *AntiKt6Tower_L2_dr;
   vector<int>     *AntiKt6Tower_L2_matched;
   vector<float>   *AntiKt6Tower_EF_dr;
   vector<int>     *AntiKt6Tower_EF_matched;
   Int_t           AntiKt6GhostTower_n;
   vector<float>   *AntiKt6GhostTower_E;
   vector<float>   *AntiKt6GhostTower_pt;
   vector<float>   *AntiKt6GhostTower_m;
   vector<float>   *AntiKt6GhostTower_eta;
   vector<float>   *AntiKt6GhostTower_phi;
   vector<float>   *AntiKt6GhostTower_EtaOrigin;
   vector<float>   *AntiKt6GhostTower_PhiOrigin;
   vector<float>   *AntiKt6GhostTower_MOrigin;
   vector<float>   *AntiKt6GhostTower_EtaOriginEM;
   vector<float>   *AntiKt6GhostTower_PhiOriginEM;
   vector<float>   *AntiKt6GhostTower_MOriginEM;
   vector<float>   *AntiKt6GhostTower_WIDTH;
   vector<float>   *AntiKt6GhostTower_n90;
   vector<float>   *AntiKt6GhostTower_Timing;
   vector<float>   *AntiKt6GhostTower_LArQuality;
   vector<float>   *AntiKt6GhostTower_nTrk;
   vector<float>   *AntiKt6GhostTower_sumPtTrk;
   vector<float>   *AntiKt6GhostTower_OriginIndex;
   vector<float>   *AntiKt6GhostTower_HECQuality;
   vector<float>   *AntiKt6GhostTower_NegativeE;
   vector<float>   *AntiKt6GhostTower_AverageLArQF;
   vector<float>   *AntiKt6GhostTower_YFlip12;
   vector<float>   *AntiKt6GhostTower_YFlip23;
   vector<float>   *AntiKt6GhostTower_BCH_CORR_CELL;
   vector<float>   *AntiKt6GhostTower_BCH_CORR_DOTX;
   vector<float>   *AntiKt6GhostTower_BCH_CORR_JET;
   vector<float>   *AntiKt6GhostTower_BCH_CORR_JET_FORCELL;
   vector<float>   *AntiKt6GhostTower_ENG_BAD_CELLS;
   vector<float>   *AntiKt6GhostTower_N_BAD_CELLS;
   vector<float>   *AntiKt6GhostTower_N_BAD_CELLS_CORR;
   vector<float>   *AntiKt6GhostTower_BAD_CELLS_CORR_E;
   vector<float>   *AntiKt6GhostTower_NumTowers;
   vector<float>   *AntiKt6GhostTower_ootFracCells5;
   vector<float>   *AntiKt6GhostTower_ootFracCells10;
   vector<float>   *AntiKt6GhostTower_ootFracClusters5;
   vector<float>   *AntiKt6GhostTower_ootFracClusters10;
   vector<int>     *AntiKt6GhostTower_SamplingMax;
   vector<float>   *AntiKt6GhostTower_fracSamplingMax;
   vector<float>   *AntiKt6GhostTower_hecf;
   vector<float>   *AntiKt6GhostTower_tgap3f;
   vector<int>     *AntiKt6GhostTower_isUgly;
   vector<int>     *AntiKt6GhostTower_isBadLooseMinus;
   vector<int>     *AntiKt6GhostTower_isBadLoose;
   vector<int>     *AntiKt6GhostTower_isBadMedium;
   vector<int>     *AntiKt6GhostTower_isBadTight;
   vector<float>   *AntiKt6GhostTower_emfrac;
   vector<float>   *AntiKt6GhostTower_Offset;
   vector<float>   *AntiKt6GhostTower_EMJES;
   vector<float>   *AntiKt6GhostTower_EMJES_EtaCorr;
   vector<float>   *AntiKt6GhostTower_EMJESnooffset;
   vector<float>   *AntiKt6GhostTower_GCWJES;
   vector<float>   *AntiKt6GhostTower_GCWJES_EtaCorr;
   vector<float>   *AntiKt6GhostTower_CB;
   vector<float>   *AntiKt6GhostTower_LCJES;
   vector<float>   *AntiKt6GhostTower_emscale_E;
   vector<float>   *AntiKt6GhostTower_emscale_pt;
   vector<float>   *AntiKt6GhostTower_emscale_m;
   vector<float>   *AntiKt6GhostTower_emscale_eta;
   vector<float>   *AntiKt6GhostTower_emscale_phi;
   vector<float>   *AntiKt6GhostTower_jvtx_x;
   vector<float>   *AntiKt6GhostTower_jvtx_y;
   vector<float>   *AntiKt6GhostTower_jvtx_z;
   vector<float>   *AntiKt6GhostTower_jvtxf;
   vector<float>   *AntiKt6GhostTower_GSCFactorF;
   vector<float>   *AntiKt6GhostTower_WidthFraction;
   vector<float>   *AntiKt6GhostTower_e_PreSamplerB;
   vector<float>   *AntiKt6GhostTower_e_EMB1;
   vector<float>   *AntiKt6GhostTower_e_EMB2;
   vector<float>   *AntiKt6GhostTower_e_EMB3;
   vector<float>   *AntiKt6GhostTower_e_PreSamplerE;
   vector<float>   *AntiKt6GhostTower_e_EME1;
   vector<float>   *AntiKt6GhostTower_e_EME2;
   vector<float>   *AntiKt6GhostTower_e_EME3;
   vector<float>   *AntiKt6GhostTower_e_HEC0;
   vector<float>   *AntiKt6GhostTower_e_HEC1;
   vector<float>   *AntiKt6GhostTower_e_HEC2;
   vector<float>   *AntiKt6GhostTower_e_HEC3;
   vector<float>   *AntiKt6GhostTower_e_TileBar0;
   vector<float>   *AntiKt6GhostTower_e_TileBar1;
   vector<float>   *AntiKt6GhostTower_e_TileBar2;
   vector<float>   *AntiKt6GhostTower_e_TileGap1;
   vector<float>   *AntiKt6GhostTower_e_TileGap2;
   vector<float>   *AntiKt6GhostTower_e_TileGap3;
   vector<float>   *AntiKt6GhostTower_e_TileExt0;
   vector<float>   *AntiKt6GhostTower_e_TileExt1;
   vector<float>   *AntiKt6GhostTower_e_TileExt2;
   vector<float>   *AntiKt6GhostTower_e_FCAL0;
   vector<float>   *AntiKt6GhostTower_e_FCAL1;
   vector<float>   *AntiKt6GhostTower_e_FCAL2;
   vector<vector<float> > *AntiKt6GhostTower_shapeBins;
   vector<int>     *AntiKt6GhostTower_Nconst;
   vector<vector<float> > *AntiKt6GhostTower_ptconst_default;
   vector<vector<float> > *AntiKt6GhostTower_econst_default;
   vector<vector<float> > *AntiKt6GhostTower_etaconst_default;
   vector<vector<float> > *AntiKt6GhostTower_phiconst_default;
   vector<vector<float> > *AntiKt6GhostTower_weightconst_default;
   vector<float>   *AntiKt6GhostTower_constscale_E;
   vector<float>   *AntiKt6GhostTower_constscale_pt;
   vector<float>   *AntiKt6GhostTower_constscale_m;
   vector<float>   *AntiKt6GhostTower_constscale_eta;
   vector<float>   *AntiKt6GhostTower_constscale_phi;
   vector<float>   *AntiKt6GhostTower_el_dr;
   vector<int>     *AntiKt6GhostTower_el_matched;
   vector<float>   *AntiKt6GhostTower_mu_dr;
   vector<int>     *AntiKt6GhostTower_mu_matched;
   vector<float>   *AntiKt6GhostTower_L1_dr;
   vector<int>     *AntiKt6GhostTower_L1_matched;
   vector<float>   *AntiKt6GhostTower_L2_dr;
   vector<int>     *AntiKt6GhostTower_L2_matched;
   vector<float>   *AntiKt6GhostTower_EF_dr;
   vector<int>     *AntiKt6GhostTower_EF_matched;
   Int_t           AntiKt6LCTopo_n;
   vector<float>   *AntiKt6LCTopo_E;
   vector<float>   *AntiKt6LCTopo_pt;
   vector<float>   *AntiKt6LCTopo_m;
   vector<float>   *AntiKt6LCTopo_eta;
   vector<float>   *AntiKt6LCTopo_phi;
   vector<float>   *AntiKt6LCTopo_EtaOrigin;
   vector<float>   *AntiKt6LCTopo_PhiOrigin;
   vector<float>   *AntiKt6LCTopo_MOrigin;
   vector<float>   *AntiKt6LCTopo_EtaOriginEM;
   vector<float>   *AntiKt6LCTopo_PhiOriginEM;
   vector<float>   *AntiKt6LCTopo_MOriginEM;
   vector<float>   *AntiKt6LCTopo_WIDTH;
   vector<float>   *AntiKt6LCTopo_n90;
   vector<float>   *AntiKt6LCTopo_Timing;
   vector<float>   *AntiKt6LCTopo_LArQuality;
   vector<float>   *AntiKt6LCTopo_nTrk;
   vector<float>   *AntiKt6LCTopo_sumPtTrk;
   vector<float>   *AntiKt6LCTopo_OriginIndex;
   vector<float>   *AntiKt6LCTopo_HECQuality;
   vector<float>   *AntiKt6LCTopo_NegativeE;
   vector<float>   *AntiKt6LCTopo_AverageLArQF;
   vector<float>   *AntiKt6LCTopo_YFlip12;
   vector<float>   *AntiKt6LCTopo_YFlip23;
   vector<float>   *AntiKt6LCTopo_BCH_CORR_CELL;
   vector<float>   *AntiKt6LCTopo_BCH_CORR_DOTX;
   vector<float>   *AntiKt6LCTopo_BCH_CORR_JET;
   vector<float>   *AntiKt6LCTopo_BCH_CORR_JET_FORCELL;
   vector<float>   *AntiKt6LCTopo_ENG_BAD_CELLS;
   vector<float>   *AntiKt6LCTopo_N_BAD_CELLS;
   vector<float>   *AntiKt6LCTopo_N_BAD_CELLS_CORR;
   vector<float>   *AntiKt6LCTopo_BAD_CELLS_CORR_E;
   vector<float>   *AntiKt6LCTopo_NumTowers;
   vector<float>   *AntiKt6LCTopo_ootFracCells5;
   vector<float>   *AntiKt6LCTopo_ootFracCells10;
   vector<float>   *AntiKt6LCTopo_ootFracClusters5;
   vector<float>   *AntiKt6LCTopo_ootFracClusters10;
   vector<int>     *AntiKt6LCTopo_SamplingMax;
   vector<float>   *AntiKt6LCTopo_fracSamplingMax;
   vector<float>   *AntiKt6LCTopo_hecf;
   vector<float>   *AntiKt6LCTopo_tgap3f;
   vector<int>     *AntiKt6LCTopo_isUgly;
   vector<int>     *AntiKt6LCTopo_isBadLooseMinus;
   vector<int>     *AntiKt6LCTopo_isBadLoose;
   vector<int>     *AntiKt6LCTopo_isBadMedium;
   vector<int>     *AntiKt6LCTopo_isBadTight;
   vector<float>   *AntiKt6LCTopo_emfrac;
   vector<float>   *AntiKt6LCTopo_Offset;
   vector<float>   *AntiKt6LCTopo_EMJES;
   vector<float>   *AntiKt6LCTopo_EMJES_EtaCorr;
   vector<float>   *AntiKt6LCTopo_EMJESnooffset;
   vector<float>   *AntiKt6LCTopo_GCWJES;
   vector<float>   *AntiKt6LCTopo_GCWJES_EtaCorr;
   vector<float>   *AntiKt6LCTopo_CB;
   vector<float>   *AntiKt6LCTopo_LCJES;
   vector<float>   *AntiKt6LCTopo_emscale_E;
   vector<float>   *AntiKt6LCTopo_emscale_pt;
   vector<float>   *AntiKt6LCTopo_emscale_m;
   vector<float>   *AntiKt6LCTopo_emscale_eta;
   vector<float>   *AntiKt6LCTopo_emscale_phi;
   vector<float>   *AntiKt6LCTopo_jvtx_x;
   vector<float>   *AntiKt6LCTopo_jvtx_y;
   vector<float>   *AntiKt6LCTopo_jvtx_z;
   vector<float>   *AntiKt6LCTopo_jvtxf;
   vector<float>   *AntiKt6LCTopo_GSCFactorF;
   vector<float>   *AntiKt6LCTopo_WidthFraction;
   vector<float>   *AntiKt6LCTopo_e_PreSamplerB;
   vector<float>   *AntiKt6LCTopo_e_EMB1;
   vector<float>   *AntiKt6LCTopo_e_EMB2;
   vector<float>   *AntiKt6LCTopo_e_EMB3;
   vector<float>   *AntiKt6LCTopo_e_PreSamplerE;
   vector<float>   *AntiKt6LCTopo_e_EME1;
   vector<float>   *AntiKt6LCTopo_e_EME2;
   vector<float>   *AntiKt6LCTopo_e_EME3;
   vector<float>   *AntiKt6LCTopo_e_HEC0;
   vector<float>   *AntiKt6LCTopo_e_HEC1;
   vector<float>   *AntiKt6LCTopo_e_HEC2;
   vector<float>   *AntiKt6LCTopo_e_HEC3;
   vector<float>   *AntiKt6LCTopo_e_TileBar0;
   vector<float>   *AntiKt6LCTopo_e_TileBar1;
   vector<float>   *AntiKt6LCTopo_e_TileBar2;
   vector<float>   *AntiKt6LCTopo_e_TileGap1;
   vector<float>   *AntiKt6LCTopo_e_TileGap2;
   vector<float>   *AntiKt6LCTopo_e_TileGap3;
   vector<float>   *AntiKt6LCTopo_e_TileExt0;
   vector<float>   *AntiKt6LCTopo_e_TileExt1;
   vector<float>   *AntiKt6LCTopo_e_TileExt2;
   vector<float>   *AntiKt6LCTopo_e_FCAL0;
   vector<float>   *AntiKt6LCTopo_e_FCAL1;
   vector<float>   *AntiKt6LCTopo_e_FCAL2;
   vector<vector<float> > *AntiKt6LCTopo_shapeBins;
   vector<int>     *AntiKt6LCTopo_Nconst;
   vector<vector<float> > *AntiKt6LCTopo_ptconst_default;
   vector<vector<float> > *AntiKt6LCTopo_econst_default;
   vector<vector<float> > *AntiKt6LCTopo_etaconst_default;
   vector<vector<float> > *AntiKt6LCTopo_phiconst_default;
   vector<vector<float> > *AntiKt6LCTopo_weightconst_default;
   vector<float>   *AntiKt6LCTopo_constscale_E;
   vector<float>   *AntiKt6LCTopo_constscale_pt;
   vector<float>   *AntiKt6LCTopo_constscale_m;
   vector<float>   *AntiKt6LCTopo_constscale_eta;
   vector<float>   *AntiKt6LCTopo_constscale_phi;
   vector<float>   *AntiKt6LCTopo_el_dr;
   vector<int>     *AntiKt6LCTopo_el_matched;
   vector<float>   *AntiKt6LCTopo_mu_dr;
   vector<int>     *AntiKt6LCTopo_mu_matched;
   vector<float>   *AntiKt6LCTopo_L1_dr;
   vector<int>     *AntiKt6LCTopo_L1_matched;
   vector<float>   *AntiKt6LCTopo_L2_dr;
   vector<int>     *AntiKt6LCTopo_L2_matched;
   vector<float>   *AntiKt6LCTopo_EF_dr;
   vector<int>     *AntiKt6LCTopo_EF_matched;
   Int_t           AntiKt6TopoEM_n;
   vector<float>   *AntiKt6TopoEM_E;
   vector<float>   *AntiKt6TopoEM_pt;
   vector<float>   *AntiKt6TopoEM_m;
   vector<float>   *AntiKt6TopoEM_eta;
   vector<float>   *AntiKt6TopoEM_phi;
   vector<float>   *AntiKt6TopoEM_EtaOrigin;
   vector<float>   *AntiKt6TopoEM_PhiOrigin;
   vector<float>   *AntiKt6TopoEM_MOrigin;
   vector<float>   *AntiKt6TopoEM_EtaOriginEM;
   vector<float>   *AntiKt6TopoEM_PhiOriginEM;
   vector<float>   *AntiKt6TopoEM_MOriginEM;
   vector<float>   *AntiKt6TopoEM_WIDTH;
   vector<float>   *AntiKt6TopoEM_n90;
   vector<float>   *AntiKt6TopoEM_Timing;
   vector<float>   *AntiKt6TopoEM_LArQuality;
   vector<float>   *AntiKt6TopoEM_nTrk;
   vector<float>   *AntiKt6TopoEM_sumPtTrk;
   vector<float>   *AntiKt6TopoEM_OriginIndex;
   vector<float>   *AntiKt6TopoEM_HECQuality;
   vector<float>   *AntiKt6TopoEM_NegativeE;
   vector<float>   *AntiKt6TopoEM_AverageLArQF;
   vector<float>   *AntiKt6TopoEM_YFlip12;
   vector<float>   *AntiKt6TopoEM_YFlip23;
   vector<float>   *AntiKt6TopoEM_BCH_CORR_CELL;
   vector<float>   *AntiKt6TopoEM_BCH_CORR_DOTX;
   vector<float>   *AntiKt6TopoEM_BCH_CORR_JET;
   vector<float>   *AntiKt6TopoEM_BCH_CORR_JET_FORCELL;
   vector<float>   *AntiKt6TopoEM_ENG_BAD_CELLS;
   vector<float>   *AntiKt6TopoEM_N_BAD_CELLS;
   vector<float>   *AntiKt6TopoEM_N_BAD_CELLS_CORR;
   vector<float>   *AntiKt6TopoEM_BAD_CELLS_CORR_E;
   vector<float>   *AntiKt6TopoEM_NumTowers;
   vector<float>   *AntiKt6TopoEM_ootFracCells5;
   vector<float>   *AntiKt6TopoEM_ootFracCells10;
   vector<float>   *AntiKt6TopoEM_ootFracClusters5;
   vector<float>   *AntiKt6TopoEM_ootFracClusters10;
   vector<int>     *AntiKt6TopoEM_SamplingMax;
   vector<float>   *AntiKt6TopoEM_fracSamplingMax;
   vector<float>   *AntiKt6TopoEM_hecf;
   vector<float>   *AntiKt6TopoEM_tgap3f;
   vector<int>     *AntiKt6TopoEM_isUgly;
   vector<int>     *AntiKt6TopoEM_isBadLooseMinus;
   vector<int>     *AntiKt6TopoEM_isBadLoose;
   vector<int>     *AntiKt6TopoEM_isBadMedium;
   vector<int>     *AntiKt6TopoEM_isBadTight;
   vector<float>   *AntiKt6TopoEM_emfrac;
   vector<float>   *AntiKt6TopoEM_Offset;
   vector<float>   *AntiKt6TopoEM_EMJES;
   vector<float>   *AntiKt6TopoEM_EMJES_EtaCorr;
   vector<float>   *AntiKt6TopoEM_EMJESnooffset;
   vector<float>   *AntiKt6TopoEM_GCWJES;
   vector<float>   *AntiKt6TopoEM_GCWJES_EtaCorr;
   vector<float>   *AntiKt6TopoEM_CB;
   vector<float>   *AntiKt6TopoEM_LCJES;
   vector<float>   *AntiKt6TopoEM_emscale_E;
   vector<float>   *AntiKt6TopoEM_emscale_pt;
   vector<float>   *AntiKt6TopoEM_emscale_m;
   vector<float>   *AntiKt6TopoEM_emscale_eta;
   vector<float>   *AntiKt6TopoEM_emscale_phi;
   vector<float>   *AntiKt6TopoEM_jvtx_x;
   vector<float>   *AntiKt6TopoEM_jvtx_y;
   vector<float>   *AntiKt6TopoEM_jvtx_z;
   vector<float>   *AntiKt6TopoEM_jvtxf;
   vector<float>   *AntiKt6TopoEM_GSCFactorF;
   vector<float>   *AntiKt6TopoEM_WidthFraction;
   vector<float>   *AntiKt6TopoEM_e_PreSamplerB;
   vector<float>   *AntiKt6TopoEM_e_EMB1;
   vector<float>   *AntiKt6TopoEM_e_EMB2;
   vector<float>   *AntiKt6TopoEM_e_EMB3;
   vector<float>   *AntiKt6TopoEM_e_PreSamplerE;
   vector<float>   *AntiKt6TopoEM_e_EME1;
   vector<float>   *AntiKt6TopoEM_e_EME2;
   vector<float>   *AntiKt6TopoEM_e_EME3;
   vector<float>   *AntiKt6TopoEM_e_HEC0;
   vector<float>   *AntiKt6TopoEM_e_HEC1;
   vector<float>   *AntiKt6TopoEM_e_HEC2;
   vector<float>   *AntiKt6TopoEM_e_HEC3;
   vector<float>   *AntiKt6TopoEM_e_TileBar0;
   vector<float>   *AntiKt6TopoEM_e_TileBar1;
   vector<float>   *AntiKt6TopoEM_e_TileBar2;
   vector<float>   *AntiKt6TopoEM_e_TileGap1;
   vector<float>   *AntiKt6TopoEM_e_TileGap2;
   vector<float>   *AntiKt6TopoEM_e_TileGap3;
   vector<float>   *AntiKt6TopoEM_e_TileExt0;
   vector<float>   *AntiKt6TopoEM_e_TileExt1;
   vector<float>   *AntiKt6TopoEM_e_TileExt2;
   vector<float>   *AntiKt6TopoEM_e_FCAL0;
   vector<float>   *AntiKt6TopoEM_e_FCAL1;
   vector<float>   *AntiKt6TopoEM_e_FCAL2;
   vector<vector<float> > *AntiKt6TopoEM_shapeBins;
   vector<int>     *AntiKt6TopoEM_Nconst;
   vector<vector<float> > *AntiKt6TopoEM_ptconst_default;
   vector<vector<float> > *AntiKt6TopoEM_econst_default;
   vector<vector<float> > *AntiKt6TopoEM_etaconst_default;
   vector<vector<float> > *AntiKt6TopoEM_phiconst_default;
   vector<vector<float> > *AntiKt6TopoEM_weightconst_default;
   vector<float>   *AntiKt6TopoEM_constscale_E;
   vector<float>   *AntiKt6TopoEM_constscale_pt;
   vector<float>   *AntiKt6TopoEM_constscale_m;
   vector<float>   *AntiKt6TopoEM_constscale_eta;
   vector<float>   *AntiKt6TopoEM_constscale_phi;
   vector<float>   *AntiKt6TopoEM_el_dr;
   vector<int>     *AntiKt6TopoEM_el_matched;
   vector<float>   *AntiKt6TopoEM_mu_dr;
   vector<int>     *AntiKt6TopoEM_mu_matched;
   vector<float>   *AntiKt6TopoEM_L1_dr;
   vector<int>     *AntiKt6TopoEM_L1_matched;
   vector<float>   *AntiKt6TopoEM_L2_dr;
   vector<int>     *AntiKt6TopoEM_L2_matched;
   vector<float>   *AntiKt6TopoEM_EF_dr;
   vector<int>     *AntiKt6TopoEM_EF_matched;
   Int_t           cl_emTopo_n;
   vector<float>   *cl_emTopo_pt;
   vector<float>   *cl_emTopo_eta;
   vector<float>   *cl_emTopo_phi;
   vector<float>   *cl_emTopo_E_em;
   vector<float>   *cl_emTopo_E_had;
   vector<float>   *cl_emTopo_firstEdens;
   vector<float>   *cl_emTopo_cellmaxfrac;
   vector<float>   *cl_emTopo_longitudinal;
   vector<float>   *cl_emTopo_secondlambda;
   vector<float>   *cl_emTopo_lateral;
   vector<float>   *cl_emTopo_secondR;
   vector<float>   *cl_emTopo_centerlambda;
   vector<float>   *cl_emTopo_deltaTheta;
   vector<float>   *cl_emTopo_deltaPhi;
   vector<float>   *cl_emTopo_centermag;
   vector<float>   *cl_emTopo_time;
   vector<float>   *cl_emTopo_E_PreSamplerB;
   vector<float>   *cl_emTopo_E_EMB1;
   vector<float>   *cl_emTopo_E_EMB2;
   vector<float>   *cl_emTopo_E_EMB3;
   vector<float>   *cl_emTopo_E_PreSamplerE;
   vector<float>   *cl_emTopo_E_EME1;
   vector<float>   *cl_emTopo_E_EME2;
   vector<float>   *cl_emTopo_E_EME3;
   vector<float>   *cl_emTopo_E_HEC0;
   vector<float>   *cl_emTopo_E_HEC1;
   vector<float>   *cl_emTopo_E_HEC2;
   vector<float>   *cl_emTopo_E_HEC3;
   vector<float>   *cl_emTopo_E_TileBar0;
   vector<float>   *cl_emTopo_E_TileBar1;
   vector<float>   *cl_emTopo_E_TileBar2;
   vector<float>   *cl_emTopo_E_TileGap1;
   vector<float>   *cl_emTopo_E_TileGap2;
   vector<float>   *cl_emTopo_E_TileGap3;
   vector<float>   *cl_emTopo_E_TileExt0;
   vector<float>   *cl_emTopo_E_TileExt1;
   vector<float>   *cl_emTopo_E_TileExt2;
   vector<float>   *cl_emTopo_E_FCAL0;
   vector<float>   *cl_emTopo_E_FCAL1;
   vector<float>   *cl_emTopo_E_FCAL2;
   Int_t           cl_hadTopo_n;
   vector<float>   *cl_hadTopo_pt;
   vector<float>   *cl_hadTopo_eta;
   vector<float>   *cl_hadTopo_phi;
   vector<float>   *cl_hadTopo_E_em;
   vector<float>   *cl_hadTopo_E_had;
   vector<float>   *cl_hadTopo_firstEdens;
   vector<float>   *cl_hadTopo_cellmaxfrac;
   vector<float>   *cl_hadTopo_longitudinal;
   vector<float>   *cl_hadTopo_secondlambda;
   vector<float>   *cl_hadTopo_lateral;
   vector<float>   *cl_hadTopo_secondR;
   vector<float>   *cl_hadTopo_centerlambda;
   vector<float>   *cl_hadTopo_deltaTheta;
   vector<float>   *cl_hadTopo_deltaPhi;
   vector<float>   *cl_hadTopo_centermag;
   vector<float>   *cl_hadTopo_time;
   vector<float>   *cl_hadTopo_E_PreSamplerB;
   vector<float>   *cl_hadTopo_E_EMB1;
   vector<float>   *cl_hadTopo_E_EMB2;
   vector<float>   *cl_hadTopo_E_EMB3;
   vector<float>   *cl_hadTopo_E_PreSamplerE;
   vector<float>   *cl_hadTopo_E_EME1;
   vector<float>   *cl_hadTopo_E_EME2;
   vector<float>   *cl_hadTopo_E_EME3;
   vector<float>   *cl_hadTopo_E_HEC0;
   vector<float>   *cl_hadTopo_E_HEC1;
   vector<float>   *cl_hadTopo_E_HEC2;
   vector<float>   *cl_hadTopo_E_HEC3;
   vector<float>   *cl_hadTopo_E_TileBar0;
   vector<float>   *cl_hadTopo_E_TileBar1;
   vector<float>   *cl_hadTopo_E_TileBar2;
   vector<float>   *cl_hadTopo_E_TileGap1;
   vector<float>   *cl_hadTopo_E_TileGap2;
   vector<float>   *cl_hadTopo_E_TileGap3;
   vector<float>   *cl_hadTopo_E_TileExt0;
   vector<float>   *cl_hadTopo_E_TileExt1;
   vector<float>   *cl_hadTopo_E_TileExt2;
   vector<float>   *cl_hadTopo_E_FCAL0;
   vector<float>   *cl_hadTopo_E_FCAL1;
   vector<float>   *cl_hadTopo_E_FCAL2;
   Int_t           emcl_n;
   vector<float>   *emcl_E;
   vector<float>   *emcl_pt;
   vector<float>   *emcl_m;
   vector<float>   *emcl_eta;
   vector<float>   *emcl_phi;
   vector<float>   *emcl_E_em;
   vector<float>   *emcl_E_had;
   Int_t           mu_staco_n;
   vector<float>   *mu_staco_E;
   vector<float>   *mu_staco_pt;
   vector<float>   *mu_staco_m;
   vector<float>   *mu_staco_eta;
   vector<float>   *mu_staco_phi;
   vector<float>   *mu_staco_px;
   vector<float>   *mu_staco_py;
   vector<float>   *mu_staco_pz;
   vector<float>   *mu_staco_charge;
   vector<unsigned short> *mu_staco_allauthor;
   vector<int>     *mu_staco_author;
   vector<float>   *mu_staco_beta;
   vector<float>   *mu_staco_isMuonLikelihood;
   vector<float>   *mu_staco_matchchi2;
   vector<int>     *mu_staco_matchndof;
   vector<float>   *mu_staco_etcone20;
   vector<float>   *mu_staco_etcone30;
   vector<float>   *mu_staco_etcone40;
   vector<float>   *mu_staco_nucone20;
   vector<float>   *mu_staco_nucone30;
   vector<float>   *mu_staco_nucone40;
   vector<float>   *mu_staco_ptcone20;
   vector<float>   *mu_staco_ptcone30;
   vector<float>   *mu_staco_ptcone40;
   vector<float>   *mu_staco_etconeNoEm10;
   vector<float>   *mu_staco_etconeNoEm20;
   vector<float>   *mu_staco_etconeNoEm30;
   vector<float>   *mu_staco_etconeNoEm40;
   vector<float>   *mu_staco_scatteringCurvatureSignificance;
   vector<float>   *mu_staco_scatteringNeighbourSignificance;
   vector<float>   *mu_staco_momentumBalanceSignificance;
   vector<float>   *mu_staco_energyLossPar;
   vector<float>   *mu_staco_energyLossErr;
   vector<float>   *mu_staco_etCore;
   vector<float>   *mu_staco_energyLossType;
   vector<unsigned short> *mu_staco_caloMuonIdTag;
   vector<double>  *mu_staco_caloLRLikelihood;
   vector<int>     *mu_staco_bestMatch;
   vector<int>     *mu_staco_isStandAloneMuon;
   vector<int>     *mu_staco_isCombinedMuon;
   vector<int>     *mu_staco_isLowPtReconstructedMuon;
   vector<int>     *mu_staco_isSegmentTaggedMuon;
   vector<int>     *mu_staco_isCaloMuonId;
   vector<int>     *mu_staco_alsoFoundByLowPt;
   vector<int>     *mu_staco_alsoFoundByCaloMuonId;
   vector<int>     *mu_staco_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_staco_loose;
   vector<int>     *mu_staco_medium;
   vector<int>     *mu_staco_tight;
   vector<float>   *mu_staco_d0_exPV;
   vector<float>   *mu_staco_z0_exPV;
   vector<float>   *mu_staco_phi_exPV;
   vector<float>   *mu_staco_theta_exPV;
   vector<float>   *mu_staco_qoverp_exPV;
   vector<float>   *mu_staco_cb_d0_exPV;
   vector<float>   *mu_staco_cb_z0_exPV;
   vector<float>   *mu_staco_cb_phi_exPV;
   vector<float>   *mu_staco_cb_theta_exPV;
   vector<float>   *mu_staco_cb_qoverp_exPV;
   vector<float>   *mu_staco_id_d0_exPV;
   vector<float>   *mu_staco_id_z0_exPV;
   vector<float>   *mu_staco_id_phi_exPV;
   vector<float>   *mu_staco_id_theta_exPV;
   vector<float>   *mu_staco_id_qoverp_exPV;
   vector<float>   *mu_staco_me_d0_exPV;
   vector<float>   *mu_staco_me_z0_exPV;
   vector<float>   *mu_staco_me_phi_exPV;
   vector<float>   *mu_staco_me_theta_exPV;
   vector<float>   *mu_staco_me_qoverp_exPV;
   vector<float>   *mu_staco_ie_d0_exPV;
   vector<float>   *mu_staco_ie_z0_exPV;
   vector<float>   *mu_staco_ie_phi_exPV;
   vector<float>   *mu_staco_ie_theta_exPV;
   vector<float>   *mu_staco_ie_qoverp_exPV;
   vector<vector<int> > *mu_staco_SpaceTime_detID;
   vector<vector<float> > *mu_staco_SpaceTime_t;
   vector<vector<float> > *mu_staco_SpaceTime_tError;
   vector<vector<float> > *mu_staco_SpaceTime_weight;
   vector<vector<float> > *mu_staco_SpaceTime_x;
   vector<vector<float> > *mu_staco_SpaceTime_y;
   vector<vector<float> > *mu_staco_SpaceTime_z;
   vector<float>   *mu_staco_cov_d0_exPV;
   vector<float>   *mu_staco_cov_z0_exPV;
   vector<float>   *mu_staco_cov_phi_exPV;
   vector<float>   *mu_staco_cov_theta_exPV;
   vector<float>   *mu_staco_cov_qoverp_exPV;
   vector<float>   *mu_staco_cov_d0_z0_exPV;
   vector<float>   *mu_staco_cov_d0_phi_exPV;
   vector<float>   *mu_staco_cov_d0_theta_exPV;
   vector<float>   *mu_staco_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_cov_z0_phi_exPV;
   vector<float>   *mu_staco_cov_z0_theta_exPV;
   vector<float>   *mu_staco_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_cov_phi_theta_exPV;
   vector<float>   *mu_staco_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_d0_exPV;
   vector<float>   *mu_staco_id_cov_z0_exPV;
   vector<float>   *mu_staco_id_cov_phi_exPV;
   vector<float>   *mu_staco_id_cov_theta_exPV;
   vector<float>   *mu_staco_id_cov_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_d0_exPV;
   vector<float>   *mu_staco_me_cov_z0_exPV;
   vector<float>   *mu_staco_me_cov_phi_exPV;
   vector<float>   *mu_staco_me_cov_theta_exPV;
   vector<float>   *mu_staco_me_cov_qoverp_exPV;
   vector<float>   *mu_staco_ms_d0;
   vector<float>   *mu_staco_ms_z0;
   vector<float>   *mu_staco_ms_phi;
   vector<float>   *mu_staco_ms_theta;
   vector<float>   *mu_staco_ms_qoverp;
   vector<float>   *mu_staco_id_d0;
   vector<float>   *mu_staco_id_z0;
   vector<float>   *mu_staco_id_phi;
   vector<float>   *mu_staco_id_theta;
   vector<float>   *mu_staco_id_qoverp;
   vector<float>   *mu_staco_me_d0;
   vector<float>   *mu_staco_me_z0;
   vector<float>   *mu_staco_me_phi;
   vector<float>   *mu_staco_me_theta;
   vector<float>   *mu_staco_me_qoverp;
   vector<float>   *mu_staco_ie_d0;
   vector<float>   *mu_staco_ie_z0;
   vector<float>   *mu_staco_ie_phi;
   vector<float>   *mu_staco_ie_theta;
   vector<float>   *mu_staco_ie_qoverp;
   vector<int>     *mu_staco_nOutliersOnTrack;
   vector<int>     *mu_staco_nBLHits;
   vector<int>     *mu_staco_nPixHits;
   vector<int>     *mu_staco_nSCTHits;
   vector<int>     *mu_staco_nTRTHits;
   vector<int>     *mu_staco_nTRTHighTHits;
   vector<int>     *mu_staco_nBLSharedHits;
   vector<int>     *mu_staco_nPixSharedHits;
   vector<int>     *mu_staco_nPixHoles;
   vector<int>     *mu_staco_nSCTSharedHits;
   vector<int>     *mu_staco_nSCTHoles;
   vector<int>     *mu_staco_nTRTOutliers;
   vector<int>     *mu_staco_nTRTHighTOutliers;
   vector<int>     *mu_staco_nGangedPixels;
   vector<int>     *mu_staco_nPixelDeadSensors;
   vector<int>     *mu_staco_nSCTDeadSensors;
   vector<int>     *mu_staco_nTRTDeadStraws;
   vector<int>     *mu_staco_expectBLayerHit;
   vector<int>     *mu_staco_nMDTHits;
   vector<int>     *mu_staco_nMDTHoles;
   vector<int>     *mu_staco_nCSCEtaHits;
   vector<int>     *mu_staco_nCSCEtaHoles;
   vector<int>     *mu_staco_nCSCUnspoiledEtaHits;
   vector<int>     *mu_staco_nCSCPhiHits;
   vector<int>     *mu_staco_nCSCPhiHoles;
   vector<int>     *mu_staco_nRPCEtaHits;
   vector<int>     *mu_staco_nRPCEtaHoles;
   vector<int>     *mu_staco_nRPCPhiHits;
   vector<int>     *mu_staco_nRPCPhiHoles;
   vector<int>     *mu_staco_nTGCEtaHits;
   vector<int>     *mu_staco_nTGCEtaHoles;
   vector<int>     *mu_staco_nTGCPhiHits;
   vector<int>     *mu_staco_nTGCPhiHoles;
   vector<int>     *mu_staco_nprecisionLayers;
   vector<int>     *mu_staco_nprecisionHoleLayers;
   vector<int>     *mu_staco_nphiLayers;
   vector<int>     *mu_staco_ntrigEtaLayers;
   vector<int>     *mu_staco_nphiHoleLayers;
   vector<int>     *mu_staco_ntrigEtaHoleLayers;
   vector<int>     *mu_staco_nMDTBIHits;
   vector<int>     *mu_staco_nMDTBMHits;
   vector<int>     *mu_staco_nMDTBOHits;
   vector<int>     *mu_staco_nMDTBEEHits;
   vector<int>     *mu_staco_nMDTBIS78Hits;
   vector<int>     *mu_staco_nMDTEIHits;
   vector<int>     *mu_staco_nMDTEMHits;
   vector<int>     *mu_staco_nMDTEOHits;
   vector<int>     *mu_staco_nMDTEEHits;
   vector<int>     *mu_staco_nRPCLayer1EtaHits;
   vector<int>     *mu_staco_nRPCLayer2EtaHits;
   vector<int>     *mu_staco_nRPCLayer3EtaHits;
   vector<int>     *mu_staco_nRPCLayer1PhiHits;
   vector<int>     *mu_staco_nRPCLayer2PhiHits;
   vector<int>     *mu_staco_nRPCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer1EtaHits;
   vector<int>     *mu_staco_nTGCLayer2EtaHits;
   vector<int>     *mu_staco_nTGCLayer3EtaHits;
   vector<int>     *mu_staco_nTGCLayer4EtaHits;
   vector<int>     *mu_staco_nTGCLayer1PhiHits;
   vector<int>     *mu_staco_nTGCLayer2PhiHits;
   vector<int>     *mu_staco_nTGCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer4PhiHits;
   vector<int>     *mu_staco_barrelSectors;
   vector<int>     *mu_staco_endcapSectors;
   vector<float>   *mu_staco_trackd0;
   vector<float>   *mu_staco_trackz0;
   vector<float>   *mu_staco_trackphi;
   vector<float>   *mu_staco_tracktheta;
   vector<float>   *mu_staco_trackqoverp;
   vector<float>   *mu_staco_trackcov_d0;
   vector<float>   *mu_staco_trackcov_z0;
   vector<float>   *mu_staco_trackcov_phi;
   vector<float>   *mu_staco_trackcov_theta;
   vector<float>   *mu_staco_trackcov_qoverp;
   vector<float>   *mu_staco_trackcov_d0_z0;
   vector<float>   *mu_staco_trackcov_d0_phi;
   vector<float>   *mu_staco_trackcov_d0_theta;
   vector<float>   *mu_staco_trackcov_d0_qoverp;
   vector<float>   *mu_staco_trackcov_z0_phi;
   vector<float>   *mu_staco_trackcov_z0_theta;
   vector<float>   *mu_staco_trackcov_z0_qoverp;
   vector<float>   *mu_staco_trackcov_phi_theta;
   vector<float>   *mu_staco_trackcov_phi_qoverp;
   vector<float>   *mu_staco_trackcov_theta_qoverp;
   vector<float>   *mu_staco_trackfitchi2;
   vector<int>     *mu_staco_trackfitndof;
   vector<int>     *mu_staco_hastrack;
   vector<float>   *mu_staco_trackd0beam;
   vector<float>   *mu_staco_trackz0beam;
   vector<float>   *mu_staco_tracksigd0beam;
   vector<float>   *mu_staco_tracksigz0beam;
   vector<float>   *mu_staco_trackd0pv;
   vector<float>   *mu_staco_trackz0pv;
   vector<float>   *mu_staco_tracksigd0pv;
   vector<float>   *mu_staco_tracksigz0pv;
   vector<float>   *mu_staco_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackd0pvunbiased;
   vector<float>   *mu_staco_trackz0pvunbiased;
   vector<float>   *mu_staco_tracksigd0pvunbiased;
   vector<float>   *mu_staco_tracksigz0pvunbiased;
   vector<float>   *mu_staco_EFCB_dr;
   vector<int>     *mu_staco_EFCB_n;
   vector<vector<int> > *mu_staco_EFCB_MuonType;
   vector<vector<float> > *mu_staco_EFCB_pt;
   vector<vector<float> > *mu_staco_EFCB_eta;
   vector<vector<float> > *mu_staco_EFCB_phi;
   vector<vector<int> > *mu_staco_EFCB_hasCB;
   vector<int>     *mu_staco_EFCB_matched;
   vector<float>   *mu_staco_EFMG_dr;
   vector<int>     *mu_staco_EFMG_n;
   vector<vector<int> > *mu_staco_EFMG_MuonType;
   vector<vector<float> > *mu_staco_EFMG_pt;
   vector<vector<float> > *mu_staco_EFMG_eta;
   vector<vector<float> > *mu_staco_EFMG_phi;
   vector<vector<int> > *mu_staco_EFMG_hasMG;
   vector<int>     *mu_staco_EFMG_matched;
   vector<float>   *mu_staco_EFME_dr;
   vector<int>     *mu_staco_EFME_n;
   vector<vector<int> > *mu_staco_EFME_MuonType;
   vector<vector<float> > *mu_staco_EFME_pt;
   vector<vector<float> > *mu_staco_EFME_eta;
   vector<vector<float> > *mu_staco_EFME_phi;
   vector<vector<int> > *mu_staco_EFME_hasME;
   vector<int>     *mu_staco_EFME_matched;
   vector<float>   *mu_staco_L2CB_dr;
   vector<float>   *mu_staco_L2CB_pt;
   vector<float>   *mu_staco_L2CB_eta;
   vector<float>   *mu_staco_L2CB_phi;
   vector<float>   *mu_staco_L2CB_id_pt;
   vector<float>   *mu_staco_L2CB_ms_pt;
   vector<int>     *mu_staco_L2CB_nPixHits;
   vector<int>     *mu_staco_L2CB_nSCTHits;
   vector<int>     *mu_staco_L2CB_nTRTHits;
   vector<int>     *mu_staco_L2CB_nTRTHighTHits;
   vector<int>     *mu_staco_L2CB_matched;
   vector<float>   *mu_staco_L1_dr;
   vector<float>   *mu_staco_L1_pt;
   vector<float>   *mu_staco_L1_eta;
   vector<float>   *mu_staco_L1_phi;
   vector<short>   *mu_staco_L1_thrNumber;
   vector<short>   *mu_staco_L1_RoINumber;
   vector<short>   *mu_staco_L1_sectorAddress;
   vector<int>     *mu_staco_L1_firstCandidate;
   vector<int>     *mu_staco_L1_moreCandInRoI;
   vector<int>     *mu_staco_L1_moreCandInSector;
   vector<short>   *mu_staco_L1_source;
   vector<short>   *mu_staco_L1_hemisphere;
   vector<short>   *mu_staco_L1_charge;
   vector<int>     *mu_staco_L1_vetoed;
   vector<int>     *mu_staco_L1_matched;
   Int_t           mu_muid_n;
   vector<float>   *mu_muid_E;
   vector<float>   *mu_muid_pt;
   vector<float>   *mu_muid_m;
   vector<float>   *mu_muid_eta;
   vector<float>   *mu_muid_phi;
   vector<float>   *mu_muid_px;
   vector<float>   *mu_muid_py;
   vector<float>   *mu_muid_pz;
   vector<float>   *mu_muid_charge;
   vector<unsigned short> *mu_muid_allauthor;
   vector<int>     *mu_muid_author;
   vector<float>   *mu_muid_beta;
   vector<float>   *mu_muid_isMuonLikelihood;
   vector<float>   *mu_muid_matchchi2;
   vector<int>     *mu_muid_matchndof;
   vector<float>   *mu_muid_etcone20;
   vector<float>   *mu_muid_etcone30;
   vector<float>   *mu_muid_etcone40;
   vector<float>   *mu_muid_nucone20;
   vector<float>   *mu_muid_nucone30;
   vector<float>   *mu_muid_nucone40;
   vector<float>   *mu_muid_ptcone20;
   vector<float>   *mu_muid_ptcone30;
   vector<float>   *mu_muid_ptcone40;
   vector<float>   *mu_muid_etconeNoEm10;
   vector<float>   *mu_muid_etconeNoEm20;
   vector<float>   *mu_muid_etconeNoEm30;
   vector<float>   *mu_muid_etconeNoEm40;
   vector<float>   *mu_muid_scatteringCurvatureSignificance;
   vector<float>   *mu_muid_scatteringNeighbourSignificance;
   vector<float>   *mu_muid_momentumBalanceSignificance;
   vector<float>   *mu_muid_energyLossPar;
   vector<float>   *mu_muid_energyLossErr;
   vector<float>   *mu_muid_etCore;
   vector<float>   *mu_muid_energyLossType;
   vector<unsigned short> *mu_muid_caloMuonIdTag;
   vector<double>  *mu_muid_caloLRLikelihood;
   vector<int>     *mu_muid_bestMatch;
   vector<int>     *mu_muid_isStandAloneMuon;
   vector<int>     *mu_muid_isCombinedMuon;
   vector<int>     *mu_muid_isLowPtReconstructedMuon;
   vector<int>     *mu_muid_isSegmentTaggedMuon;
   vector<int>     *mu_muid_isCaloMuonId;
   vector<int>     *mu_muid_alsoFoundByLowPt;
   vector<int>     *mu_muid_alsoFoundByCaloMuonId;
   vector<int>     *mu_muid_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_muid_loose;
   vector<int>     *mu_muid_medium;
   vector<int>     *mu_muid_tight;
   vector<float>   *mu_muid_d0_exPV;
   vector<float>   *mu_muid_z0_exPV;
   vector<float>   *mu_muid_phi_exPV;
   vector<float>   *mu_muid_theta_exPV;
   vector<float>   *mu_muid_qoverp_exPV;
   vector<float>   *mu_muid_cb_d0_exPV;
   vector<float>   *mu_muid_cb_z0_exPV;
   vector<float>   *mu_muid_cb_phi_exPV;
   vector<float>   *mu_muid_cb_theta_exPV;
   vector<float>   *mu_muid_cb_qoverp_exPV;
   vector<float>   *mu_muid_id_d0_exPV;
   vector<float>   *mu_muid_id_z0_exPV;
   vector<float>   *mu_muid_id_phi_exPV;
   vector<float>   *mu_muid_id_theta_exPV;
   vector<float>   *mu_muid_id_qoverp_exPV;
   vector<float>   *mu_muid_me_d0_exPV;
   vector<float>   *mu_muid_me_z0_exPV;
   vector<float>   *mu_muid_me_phi_exPV;
   vector<float>   *mu_muid_me_theta_exPV;
   vector<float>   *mu_muid_me_qoverp_exPV;
   vector<float>   *mu_muid_ie_d0_exPV;
   vector<float>   *mu_muid_ie_z0_exPV;
   vector<float>   *mu_muid_ie_phi_exPV;
   vector<float>   *mu_muid_ie_theta_exPV;
   vector<float>   *mu_muid_ie_qoverp_exPV;
   vector<vector<int> > *mu_muid_SpaceTime_detID;
   vector<vector<float> > *mu_muid_SpaceTime_t;
   vector<vector<float> > *mu_muid_SpaceTime_tError;
   vector<vector<float> > *mu_muid_SpaceTime_weight;
   vector<vector<float> > *mu_muid_SpaceTime_x;
   vector<vector<float> > *mu_muid_SpaceTime_y;
   vector<vector<float> > *mu_muid_SpaceTime_z;
   vector<float>   *mu_muid_cov_d0_exPV;
   vector<float>   *mu_muid_cov_z0_exPV;
   vector<float>   *mu_muid_cov_phi_exPV;
   vector<float>   *mu_muid_cov_theta_exPV;
   vector<float>   *mu_muid_cov_qoverp_exPV;
   vector<float>   *mu_muid_cov_d0_z0_exPV;
   vector<float>   *mu_muid_cov_d0_phi_exPV;
   vector<float>   *mu_muid_cov_d0_theta_exPV;
   vector<float>   *mu_muid_cov_d0_qoverp_exPV;
   vector<float>   *mu_muid_cov_z0_phi_exPV;
   vector<float>   *mu_muid_cov_z0_theta_exPV;
   vector<float>   *mu_muid_cov_z0_qoverp_exPV;
   vector<float>   *mu_muid_cov_phi_theta_exPV;
   vector<float>   *mu_muid_cov_phi_qoverp_exPV;
   vector<float>   *mu_muid_cov_theta_qoverp_exPV;
   vector<float>   *mu_muid_id_cov_d0_exPV;
   vector<float>   *mu_muid_id_cov_z0_exPV;
   vector<float>   *mu_muid_id_cov_phi_exPV;
   vector<float>   *mu_muid_id_cov_theta_exPV;
   vector<float>   *mu_muid_id_cov_qoverp_exPV;
   vector<float>   *mu_muid_me_cov_d0_exPV;
   vector<float>   *mu_muid_me_cov_z0_exPV;
   vector<float>   *mu_muid_me_cov_phi_exPV;
   vector<float>   *mu_muid_me_cov_theta_exPV;
   vector<float>   *mu_muid_me_cov_qoverp_exPV;
   vector<float>   *mu_muid_ms_d0;
   vector<float>   *mu_muid_ms_z0;
   vector<float>   *mu_muid_ms_phi;
   vector<float>   *mu_muid_ms_theta;
   vector<float>   *mu_muid_ms_qoverp;
   vector<float>   *mu_muid_id_d0;
   vector<float>   *mu_muid_id_z0;
   vector<float>   *mu_muid_id_phi;
   vector<float>   *mu_muid_id_theta;
   vector<float>   *mu_muid_id_qoverp;
   vector<float>   *mu_muid_me_d0;
   vector<float>   *mu_muid_me_z0;
   vector<float>   *mu_muid_me_phi;
   vector<float>   *mu_muid_me_theta;
   vector<float>   *mu_muid_me_qoverp;
   vector<float>   *mu_muid_ie_d0;
   vector<float>   *mu_muid_ie_z0;
   vector<float>   *mu_muid_ie_phi;
   vector<float>   *mu_muid_ie_theta;
   vector<float>   *mu_muid_ie_qoverp;
   vector<int>     *mu_muid_nOutliersOnTrack;
   vector<int>     *mu_muid_nBLHits;
   vector<int>     *mu_muid_nPixHits;
   vector<int>     *mu_muid_nSCTHits;
   vector<int>     *mu_muid_nTRTHits;
   vector<int>     *mu_muid_nTRTHighTHits;
   vector<int>     *mu_muid_nBLSharedHits;
   vector<int>     *mu_muid_nPixSharedHits;
   vector<int>     *mu_muid_nPixHoles;
   vector<int>     *mu_muid_nSCTSharedHits;
   vector<int>     *mu_muid_nSCTHoles;
   vector<int>     *mu_muid_nTRTOutliers;
   vector<int>     *mu_muid_nTRTHighTOutliers;
   vector<int>     *mu_muid_nGangedPixels;
   vector<int>     *mu_muid_nPixelDeadSensors;
   vector<int>     *mu_muid_nSCTDeadSensors;
   vector<int>     *mu_muid_nTRTDeadStraws;
   vector<int>     *mu_muid_expectBLayerHit;
   vector<int>     *mu_muid_nMDTHits;
   vector<int>     *mu_muid_nMDTHoles;
   vector<int>     *mu_muid_nCSCEtaHits;
   vector<int>     *mu_muid_nCSCEtaHoles;
   vector<int>     *mu_muid_nCSCUnspoiledEtaHits;
   vector<int>     *mu_muid_nCSCPhiHits;
   vector<int>     *mu_muid_nCSCPhiHoles;
   vector<int>     *mu_muid_nRPCEtaHits;
   vector<int>     *mu_muid_nRPCEtaHoles;
   vector<int>     *mu_muid_nRPCPhiHits;
   vector<int>     *mu_muid_nRPCPhiHoles;
   vector<int>     *mu_muid_nTGCEtaHits;
   vector<int>     *mu_muid_nTGCEtaHoles;
   vector<int>     *mu_muid_nTGCPhiHits;
   vector<int>     *mu_muid_nTGCPhiHoles;
   vector<int>     *mu_muid_nprecisionLayers;
   vector<int>     *mu_muid_nprecisionHoleLayers;
   vector<int>     *mu_muid_nphiLayers;
   vector<int>     *mu_muid_ntrigEtaLayers;
   vector<int>     *mu_muid_nphiHoleLayers;
   vector<int>     *mu_muid_ntrigEtaHoleLayers;
   vector<int>     *mu_muid_nMDTBIHits;
   vector<int>     *mu_muid_nMDTBMHits;
   vector<int>     *mu_muid_nMDTBOHits;
   vector<int>     *mu_muid_nMDTBEEHits;
   vector<int>     *mu_muid_nMDTBIS78Hits;
   vector<int>     *mu_muid_nMDTEIHits;
   vector<int>     *mu_muid_nMDTEMHits;
   vector<int>     *mu_muid_nMDTEOHits;
   vector<int>     *mu_muid_nMDTEEHits;
   vector<int>     *mu_muid_nRPCLayer1EtaHits;
   vector<int>     *mu_muid_nRPCLayer2EtaHits;
   vector<int>     *mu_muid_nRPCLayer3EtaHits;
   vector<int>     *mu_muid_nRPCLayer1PhiHits;
   vector<int>     *mu_muid_nRPCLayer2PhiHits;
   vector<int>     *mu_muid_nRPCLayer3PhiHits;
   vector<int>     *mu_muid_nTGCLayer1EtaHits;
   vector<int>     *mu_muid_nTGCLayer2EtaHits;
   vector<int>     *mu_muid_nTGCLayer3EtaHits;
   vector<int>     *mu_muid_nTGCLayer4EtaHits;
   vector<int>     *mu_muid_nTGCLayer1PhiHits;
   vector<int>     *mu_muid_nTGCLayer2PhiHits;
   vector<int>     *mu_muid_nTGCLayer3PhiHits;
   vector<int>     *mu_muid_nTGCLayer4PhiHits;
   vector<int>     *mu_muid_barrelSectors;
   vector<int>     *mu_muid_endcapSectors;
   vector<float>   *mu_muid_trackd0;
   vector<float>   *mu_muid_trackz0;
   vector<float>   *mu_muid_trackphi;
   vector<float>   *mu_muid_tracktheta;
   vector<float>   *mu_muid_trackqoverp;
   vector<float>   *mu_muid_trackcov_d0;
   vector<float>   *mu_muid_trackcov_z0;
   vector<float>   *mu_muid_trackcov_phi;
   vector<float>   *mu_muid_trackcov_theta;
   vector<float>   *mu_muid_trackcov_qoverp;
   vector<float>   *mu_muid_trackcov_d0_z0;
   vector<float>   *mu_muid_trackcov_d0_phi;
   vector<float>   *mu_muid_trackcov_d0_theta;
   vector<float>   *mu_muid_trackcov_d0_qoverp;
   vector<float>   *mu_muid_trackcov_z0_phi;
   vector<float>   *mu_muid_trackcov_z0_theta;
   vector<float>   *mu_muid_trackcov_z0_qoverp;
   vector<float>   *mu_muid_trackcov_phi_theta;
   vector<float>   *mu_muid_trackcov_phi_qoverp;
   vector<float>   *mu_muid_trackcov_theta_qoverp;
   vector<float>   *mu_muid_trackfitchi2;
   vector<int>     *mu_muid_trackfitndof;
   vector<int>     *mu_muid_hastrack;
   vector<float>   *mu_muid_trackd0beam;
   vector<float>   *mu_muid_trackz0beam;
   vector<float>   *mu_muid_tracksigd0beam;
   vector<float>   *mu_muid_tracksigz0beam;
   vector<float>   *mu_muid_trackd0pv;
   vector<float>   *mu_muid_trackz0pv;
   vector<float>   *mu_muid_tracksigd0pv;
   vector<float>   *mu_muid_tracksigz0pv;
   vector<float>   *mu_muid_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_muid_trackd0pvunbiased;
   vector<float>   *mu_muid_trackz0pvunbiased;
   vector<float>   *mu_muid_tracksigd0pvunbiased;
   vector<float>   *mu_muid_tracksigz0pvunbiased;
   vector<float>   *mu_muid_EFCB_dr;
   vector<int>     *mu_muid_EFCB_n;
   vector<vector<int> > *mu_muid_EFCB_MuonType;
   vector<vector<float> > *mu_muid_EFCB_pt;
   vector<vector<float> > *mu_muid_EFCB_eta;
   vector<vector<float> > *mu_muid_EFCB_phi;
   vector<vector<int> > *mu_muid_EFCB_hasCB;
   vector<int>     *mu_muid_EFCB_matched;
   vector<float>   *mu_muid_EFMG_dr;
   vector<int>     *mu_muid_EFMG_n;
   vector<vector<int> > *mu_muid_EFMG_MuonType;
   vector<vector<float> > *mu_muid_EFMG_pt;
   vector<vector<float> > *mu_muid_EFMG_eta;
   vector<vector<float> > *mu_muid_EFMG_phi;
   vector<vector<int> > *mu_muid_EFMG_hasMG;
   vector<int>     *mu_muid_EFMG_matched;
   vector<float>   *mu_muid_EFME_dr;
   vector<int>     *mu_muid_EFME_n;
   vector<vector<int> > *mu_muid_EFME_MuonType;
   vector<vector<float> > *mu_muid_EFME_pt;
   vector<vector<float> > *mu_muid_EFME_eta;
   vector<vector<float> > *mu_muid_EFME_phi;
   vector<vector<int> > *mu_muid_EFME_hasME;
   vector<int>     *mu_muid_EFME_matched;
   vector<float>   *mu_muid_L2CB_dr;
   vector<float>   *mu_muid_L2CB_pt;
   vector<float>   *mu_muid_L2CB_eta;
   vector<float>   *mu_muid_L2CB_phi;
   vector<float>   *mu_muid_L2CB_id_pt;
   vector<float>   *mu_muid_L2CB_ms_pt;
   vector<int>     *mu_muid_L2CB_nPixHits;
   vector<int>     *mu_muid_L2CB_nSCTHits;
   vector<int>     *mu_muid_L2CB_nTRTHits;
   vector<int>     *mu_muid_L2CB_nTRTHighTHits;
   vector<int>     *mu_muid_L2CB_matched;
   vector<float>   *mu_muid_L1_dr;
   vector<float>   *mu_muid_L1_pt;
   vector<float>   *mu_muid_L1_eta;
   vector<float>   *mu_muid_L1_phi;
   vector<short>   *mu_muid_L1_thrNumber;
   vector<short>   *mu_muid_L1_RoINumber;
   vector<short>   *mu_muid_L1_sectorAddress;
   vector<int>     *mu_muid_L1_firstCandidate;
   vector<int>     *mu_muid_L1_moreCandInRoI;
   vector<int>     *mu_muid_L1_moreCandInSector;
   vector<short>   *mu_muid_L1_source;
   vector<short>   *mu_muid_L1_hemisphere;
   vector<short>   *mu_muid_L1_charge;
   vector<int>     *mu_muid_L1_vetoed;
   vector<int>     *mu_muid_L1_matched;
   Int_t           muid_n;
   vector<int>     *muid_nScatters;
   vector<double>  *muid_scatSignificance;
   vector<double>  *muid_neighbourSignificance;
   vector<double>  *muid_eta;
   UInt_t          trig_DB_SMK;
   UInt_t          trig_DB_L1PSK;
   UInt_t          trig_DB_HLTPSK;
   vector<unsigned int> *trig_L1_TAV;
   vector<short>   *trig_L2_passedPhysics;
   vector<short>   *trig_EF_passedPhysics;
   vector<unsigned int> *trig_L1_TBP;
   vector<unsigned int> *trig_L1_TAP;
   vector<short>   *trig_L2_passedRaw;
   vector<short>   *trig_EF_passedRaw;
   Bool_t          trig_L2_truncated;
   Bool_t          trig_EF_truncated;
   vector<short>   *trig_L2_resurrected;
   vector<short>   *trig_EF_resurrected;
   vector<short>   *trig_L2_passedThrough;
   vector<short>   *trig_EF_passedThrough;
   vector<short>   *trig_L2_wasPrescaled;
   vector<short>   *trig_L2_wasResurrected;
   vector<short>   *trig_EF_wasPrescaled;
   vector<short>   *trig_EF_wasResurrected;
   Bool_t          L1_FJ3;
   Bool_t          L1_J10;
   Bool_t          L1_J15;
   Bool_t          L1_J30;
   Bool_t          L1_J5;
   Bool_t          L1_J75;
   Int_t           trig_L1_jet_n;
   vector<float>   *trig_L1_jet_eta;
   vector<float>   *trig_L1_jet_phi;
   vector<vector<string> > *trig_L1_jet_thrNames;
   vector<vector<float> > *trig_L1_jet_thrValues;
   vector<unsigned int> *trig_L1_jet_thrPattern;
   vector<unsigned int> *trig_L1_jet_RoIWord;
   vector<float>   *trig_L1_jet_et4x4;
   vector<float>   *trig_L1_jet_et6x6;
   vector<float>   *trig_L1_jet_et8x8;
   Int_t           trig_L1_emtau_n;
   vector<float>   *trig_L1_emtau_eta;
   vector<float>   *trig_L1_emtau_phi;
   vector<vector<string> > *trig_L1_emtau_thrNames;
   vector<vector<float> > *trig_L1_emtau_thrValues;
   vector<float>   *trig_L1_emtau_core;
   vector<float>   *trig_L1_emtau_EMClus;
   vector<float>   *trig_L1_emtau_tauClus;
   vector<float>   *trig_L1_emtau_EMIsol;
   vector<float>   *trig_L1_emtau_hadIsol;
   vector<float>   *trig_L1_emtau_hadCore;
   vector<unsigned int> *trig_L1_emtau_thrPattern;
   vector<unsigned int> *trig_L1_emtau_RoIWord;
   Int_t           trig_EF_jet_n;
   vector<float>   *trig_EF_jet_E;
   vector<float>   *trig_EF_jet_pt;
   vector<float>   *trig_EF_jet_m;
   vector<float>   *trig_EF_jet_eta;
   vector<float>   *trig_EF_jet_phi;
   vector<int>     *trig_EF_jet_a4;
   vector<int>     *trig_EF_jet_a2;
   vector<int>     *trig_EF_jet_a4hi;
   vector<int>     *trig_EF_jet_a2hi;
   vector<unsigned int> *trig_EF_jet_RoIword;
   vector<int>     *trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j10_u0uchad_LArNoiseBurst;
   vector<int>     *trig_EF_jet_EF_j10_u0uchad_empty_LArNoiseBurst;
   vector<int>     *trig_EF_jet_EF_j10_u0uchad_firstempty_LArNoiseBurst;
   vector<int>     *trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1J10;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1J10;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1J10;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j75_a4hi_EFFS_L1J10;
   vector<int>     *trig_EF_jet_EF_j75_a4hi_EFFS_L1ZDC;
   vector<string>  *trig_L1_esum_thrNames;
   Float_t         trig_L1_esum_ExMiss;
   Float_t         trig_L1_esum_EyMiss;
   Float_t         trig_L1_esum_energyT;
   Bool_t          trig_L1_esum_overflowX;
   Bool_t          trig_L1_esum_overflowY;
   Bool_t          trig_L1_esum_overflowT;
   UInt_t          trig_L1_esum_RoIWord0;
   UInt_t          trig_L1_esum_RoIWord1;
   UInt_t          trig_L1_esum_RoIWord2;
   Float_t         trig_EF_met_MEx;
   Float_t         trig_EF_met_MEy;
   Float_t         trig_EF_met_MEz;
   Float_t         trig_EF_met_sumEt;
   Float_t         trig_EF_met_sumE;
   Int_t           trig_EF_met_flag;
   vector<string>  *trig_EF_met_nameOfComponent;
   vector<float>   *trig_EF_met_MExComponent;
   vector<float>   *trig_EF_met_MEyComponent;
   vector<float>   *trig_EF_met_MEzComponent;
   vector<float>   *trig_EF_met_sumEtComponent;
   vector<float>   *trig_EF_met_sumEComponent;
   vector<float>   *trig_EF_met_componentCalib0;
   vector<float>   *trig_EF_met_componentCalib1;
   vector<short>   *trig_EF_met_sumOfSigns;
   vector<unsigned short> *trig_EF_met_usedChannels;
   vector<short>   *trig_EF_met_status;
   Int_t           trig_EF_ph_n;
   vector<float>   *trig_EF_ph_E;
   vector<float>   *trig_EF_ph_Et;
   vector<float>   *trig_EF_ph_pt;
   vector<float>   *trig_EF_ph_m;
   vector<float>   *trig_EF_ph_eta;
   vector<float>   *trig_EF_ph_phi;
   vector<float>   *trig_EF_ph_px;
   vector<float>   *trig_EF_ph_py;
   vector<float>   *trig_EF_ph_pz;
   vector<int>     *trig_EF_ph_author;
   vector<int>     *trig_EF_ph_isRecovered;
   vector<unsigned int> *trig_EF_ph_isEM;
   vector<unsigned int> *trig_EF_ph_isEMLoose;
   vector<unsigned int> *trig_EF_ph_isEMMedium;
   vector<unsigned int> *trig_EF_ph_isEMTight;
   vector<int>     *trig_EF_ph_convFlag;
   vector<int>     *trig_EF_ph_isConv;
   vector<int>     *trig_EF_ph_nConv;
   vector<int>     *trig_EF_ph_nSingleTrackConv;
   vector<int>     *trig_EF_ph_nDoubleTrackConv;
   vector<int>     *trig_EF_ph_loose;
   vector<int>     *trig_EF_ph_looseIso;
   vector<int>     *trig_EF_ph_tight;
   vector<int>     *trig_EF_ph_tightIso;
   vector<int>     *trig_EF_ph_looseAR;
   vector<int>     *trig_EF_ph_looseARIso;
   vector<int>     *trig_EF_ph_tightAR;
   vector<int>     *trig_EF_ph_tightARIso;
   Int_t           trig_EF_trigmuonef_n;
   vector<int>     *trig_EF_trigmuonef_effs15;
   vector<int>     *trig_EF_trigmuonef_effs18;
   vector<int>     *trig_EF_trigmuonef_effs24;
   vector<int>     *trig_EF_trigmuonef_RoINum;
   vector<int>     *trig_EF_trigmuonef_NSegments;
   vector<int>     *trig_EF_trigmuonef_NMdtHits;
   vector<int>     *trig_EF_trigmuonef_NRpcHits;
   vector<int>     *trig_EF_trigmuonef_NTgcHits;
   vector<int>     *trig_EF_trigmuonef_NCscHits;
   vector<float>   *trig_EF_trigmuonef_EtaPreviousLevel;
   vector<float>   *trig_EF_trigmuonef_PhiPreviousLevel;
   vector<int>     *trig_EF_trigmuonef_track_n;
   vector<vector<int> > *trig_EF_trigmuonef_track_MuonType;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posZ;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NRpcHitsPhi;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NTgcHitsPhi;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NCscHitsPhi;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NRpcHitsEta;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NTgcHitsEta;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NCscHitsEta;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NMdtHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_hasMS;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posZ;
   vector<vector<int> > *trig_EF_trigmuonef_track_SA_hasSA;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posZ;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_matchChi2;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_NIdSctHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_NIdPixelHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_NTrtHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_hasCB;
   Int_t           bcmRDO_n;
   vector<vector<int> > *bcmRDO_channel;
   vector<int>     *bcmRDO_nhits;
   vector<vector<int> > *bcmRDO_pulse1pos;
   vector<vector<int> > *bcmRDO_pulse1width;
   vector<vector<int> > *bcmRDO_pulse2pos;
   vector<vector<int> > *bcmRDO_pulse2width;
   vector<vector<int> > *bcmRDO_lvl1a;
   vector<vector<int> > *bcmRDO_bcid;
   vector<vector<int> > *bcmRDO_lvl1id;
   UInt_t          ctpRDO_nBC;
   UInt_t          ctpRDO_lvl1aBC;
   UInt_t          ctpRDO_time_s;
   UInt_t          ctpRDO_time_ns;
   vector<unsigned int> *ctpRDO_pit;
   vector<unsigned int> *ctpRDO_tbp;
   vector<unsigned int> *ctpRDO_tap;
   vector<unsigned int> *ctpRDO_tav;
   UInt_t          ctp_decisionTypeWord;
   vector<string>  *ctp_decisionItems;
   vector<unsigned int> *ctp_decisionWords;
   UInt_t          ctp_nDecisionItems;
   UInt_t          mbtsLvl2_nElements;
   vector<float>   *mbtsLvl2_energies;
   UInt_t          mbtsLvl2_ntimes;
   vector<float>   *mbtsLvl2_times;
   UInt_t          lvl2_sp_nElements;
   UInt_t          lvl2_sp_hPixelClusTotBins;
   Float_t         lvl2_sp_hPixelClusTotMin;
   Float_t         lvl2_sp_hPixelClusTotMax;
   UInt_t          lvl2_sp_hPixelClusSizeBins;
   Float_t         lvl2_sp_hPixelClusSizeMin;
   Float_t         lvl2_sp_hPixelClusSizeMax;
   vector<float>   *lvl2_sp_pixelClusEndcapC_contents;
   vector<float>   *lvl2_sp_pixelClusBarrel_contents;
   vector<float>   *lvl2_sp_pixelClusEndcapA_contents;
   vector<unsigned int> *lvl2_sp_droppedPixelModuleIds;
   UInt_t          lvl2_sp_sctSpEndcapC;
   UInt_t          lvl2_sp_sctSpBarrel;
   UInt_t          lvl2_sp_sctSpEndcapA;
   vector<unsigned int> *lvl2_sp_droppedSctModuleIds;
   UInt_t          lvl2_mbTrt_nElements;
   UInt_t          lvl2_mbTrt_hTotBins;
   Float_t         lvl2_mbTrt_hTotMin;
   Float_t         lvl2_mbTrt_hTotMax;
   vector<float>   *lvl2_mbTrt_endcapC_contents;
   vector<float>   *lvl2_mbTrt_barrel_contents;
   vector<float>   *lvl2_mbTrt_endcapA_contents;
   UInt_t          ef_trk_nElements;
   UInt_t          ef_trk_hZ0Bins;
   Float_t         ef_trk_hZ0Min;
   Float_t         ef_trk_hZ0Max;
   UInt_t          ef_trk_hPtBins;
   Float_t         ef_trk_hPtMin;
   Float_t         ef_trk_hPtMax;
   UInt_t          ef_trk_hEtaBins;
   Float_t         ef_trk_hEtaMin;
   Float_t         ef_trk_hEtaMax;
   UInt_t          ef_trk_hPhiBins;
   Float_t         ef_trk_hPhiMin;
   Float_t         ef_trk_hPhiMax;
   vector<float>   *ef_trk_z0_pt_contents;
   vector<float>   *ef_trk_eta_phi_contents;
   Int_t           trtRDO_countRDOhitsInEvent;
   Int_t           trtRDO_countBarrelhitsInEvent;
   Int_t           trtRDO_countEndCaphitsInEvent;
   Int_t           trtRDO_countEndCapAhitsInEvent;
   Int_t           trtRDO_countEndCapChitsInEvent;
   Int_t           trtRDO_countdeadstraws;
   Int_t           vx_n;
   vector<float>   *vx_x;
   vector<float>   *vx_y;
   vector<float>   *vx_z;
   vector<float>   *vx_err_x;
   vector<float>   *vx_err_y;
   vector<float>   *vx_err_z;
   vector<float>   *vx_cov_xy;
   vector<float>   *vx_cov_xz;
   vector<float>   *vx_cov_yz;
   vector<int>     *vx_type;
   vector<float>   *vx_chi2;
   vector<int>     *vx_ndof;
   vector<float>   *vx_px;
   vector<float>   *vx_py;
   vector<float>   *vx_pz;
   vector<float>   *vx_E;
   vector<float>   *vx_m;
   vector<int>     *vx_nTracks;
   vector<float>   *vx_sumPt;
   vector<vector<float> > *vx_trk_weight;
   vector<int>     *vx_trk_n;
   vector<vector<int> > *vx_trk_index;
   Int_t           el_n;
   vector<float>   *el_E;
   vector<float>   *el_Et;
   vector<float>   *el_pt;
   vector<float>   *el_m;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *el_px;
   vector<float>   *el_py;
   vector<float>   *el_pz;
   vector<float>   *el_charge;
   vector<int>     *el_author;
   vector<unsigned int> *el_isEM;
   vector<unsigned int> *el_isEMLoose;
   vector<unsigned int> *el_isEMMedium;
   vector<unsigned int> *el_isEMTight;
   vector<unsigned int> *el_OQ;
   vector<int>     *el_convFlag;
   vector<int>     *el_isConv;
   vector<int>     *el_nConv;
   vector<int>     *el_nSingleTrackConv;
   vector<int>     *el_nDoubleTrackConv;
   vector<int>     *el_mediumWithoutTrack;
   vector<int>     *el_mediumIsoWithoutTrack;
   vector<int>     *el_tightWithoutTrack;
   vector<int>     *el_tightIsoWithoutTrack;
   vector<int>     *el_loose;
   vector<int>     *el_looseIso;
   vector<int>     *el_medium;
   vector<int>     *el_mediumIso;
   vector<int>     *el_tight;
   vector<int>     *el_tightIso;
   vector<int>     *el_loosePP;
   vector<int>     *el_loosePPIso;
   vector<int>     *el_mediumPP;
   vector<int>     *el_mediumPPIso;
   vector<int>     *el_tightPP;
   vector<int>     *el_tightPPIso;
   vector<int>     *el_goodOQ;
   vector<float>   *el_Ethad;
   vector<float>   *el_Ethad1;
   vector<float>   *el_f1;
   vector<float>   *el_f1core;
   vector<float>   *el_Emins1;
   vector<float>   *el_fside;
   vector<float>   *el_Emax2;
   vector<float>   *el_ws3;
   vector<float>   *el_wstot;
   vector<float>   *el_emaxs1;
   vector<float>   *el_deltaEs;
   vector<float>   *el_E233;
   vector<float>   *el_E237;
   vector<float>   *el_E277;
   vector<float>   *el_weta2;
   vector<float>   *el_f3;
   vector<float>   *el_f3core;
   vector<float>   *el_rphiallcalo;
   vector<float>   *el_Etcone45;
   vector<float>   *el_Etcone15;
   vector<float>   *el_Etcone20;
   vector<float>   *el_Etcone25;
   vector<float>   *el_Etcone30;
   vector<float>   *el_Etcone35;
   vector<float>   *el_Etcone40;
   vector<float>   *el_ptcone20;
   vector<float>   *el_ptcone30;
   vector<float>   *el_ptcone40;
   vector<float>   *el_nucone20;
   vector<float>   *el_nucone30;
   vector<float>   *el_nucone40;
   vector<float>   *el_Etcone15_pt_corrected;
   vector<float>   *el_Etcone20_pt_corrected;
   vector<float>   *el_Etcone25_pt_corrected;
   vector<float>   *el_Etcone30_pt_corrected;
   vector<float>   *el_Etcone35_pt_corrected;
   vector<float>   *el_Etcone40_pt_corrected;
   vector<float>   *el_convanglematch;
   vector<float>   *el_convtrackmatch;
   vector<float>   *el_pos7;
   vector<float>   *el_etacorrmag;
   vector<float>   *el_deltaeta1;
   vector<float>   *el_deltaeta2;
   vector<float>   *el_deltaphi2;
   vector<float>   *el_deltaphiRescaled;
   vector<float>   *el_deltaPhiFromLast;
   vector<float>   *el_deltaPhiRot;
   vector<float>   *el_expectHitInBLayer;
   vector<float>   *el_trackd0_physics;
   vector<float>   *el_etaSampling1;
   vector<float>   *el_reta;
   vector<float>   *el_rphi;
   vector<float>   *el_topoEtcone20;
   vector<float>   *el_topoEtcone30;
   vector<float>   *el_topoEtcone40;
   vector<float>   *el_materialTraversed;
   vector<float>   *el_EtringnoisedR03sig2;
   vector<float>   *el_EtringnoisedR03sig3;
   vector<float>   *el_EtringnoisedR03sig4;
   vector<float>   *el_ptcone20_zpv05;
   vector<float>   *el_ptcone30_zpv05;
   vector<float>   *el_ptcone40_zpv05;
   vector<float>   *el_nucone20_zpv05;
   vector<float>   *el_nucone30_zpv05;
   vector<float>   *el_nucone40_zpv05;
   vector<double>  *el_isolationlikelihoodjets;
   vector<double>  *el_isolationlikelihoodhqelectrons;
   vector<double>  *el_electronweight;
   vector<double>  *el_electronbgweight;
   vector<double>  *el_softeweight;
   vector<double>  *el_softebgweight;
   vector<double>  *el_neuralnet;
   vector<double>  *el_Hmatrix;
   vector<double>  *el_Hmatrix5;
   vector<double>  *el_adaboost;
   vector<double>  *el_softeneuralnet;
   vector<double>  *el_ringernn;
   vector<float>   *el_zvertex;
   vector<float>   *el_errz;
   vector<float>   *el_etap;
   vector<float>   *el_depth;
   vector<int>     *el_refittedTrack_n;
   vector<vector<int> > *el_refittedTrack_author;
   vector<vector<float> > *el_refittedTrack_chi2;
   vector<vector<int> > *el_refittedTrack_hasBrem;
   vector<vector<float> > *el_refittedTrack_bremRadius;
   vector<vector<float> > *el_refittedTrack_bremZ;
   vector<vector<float> > *el_refittedTrack_bremRadiusErr;
   vector<vector<float> > *el_refittedTrack_bremZErr;
   vector<vector<int> > *el_refittedTrack_bremFitStatus;
   vector<vector<float> > *el_refittedTrack_qoverp;
   vector<vector<float> > *el_refittedTrack_d0;
   vector<vector<float> > *el_refittedTrack_z0;
   vector<vector<float> > *el_refittedTrack_theta;
   vector<vector<float> > *el_refittedTrack_phi;
   vector<vector<float> > *el_refittedTrack_LMqoverp;
   vector<vector<float> > *el_refittedTrack_covd0;
   vector<vector<float> > *el_refittedTrack_covz0;
   vector<vector<float> > *el_refittedTrack_covphi;
   vector<vector<float> > *el_refittedTrack_covtheta;
   vector<vector<float> > *el_refittedTrack_covqoverp;
   vector<vector<float> > *el_refittedTrack_covd0z0;
   vector<vector<float> > *el_refittedTrack_covz0phi;
   vector<vector<float> > *el_refittedTrack_covz0theta;
   vector<vector<float> > *el_refittedTrack_covz0qoverp;
   vector<vector<float> > *el_refittedTrack_covd0phi;
   vector<vector<float> > *el_refittedTrack_covd0theta;
   vector<vector<float> > *el_refittedTrack_covd0qoverp;
   vector<vector<float> > *el_refittedTrack_covphitheta;
   vector<vector<float> > *el_refittedTrack_covphiqoverp;
   vector<vector<float> > *el_refittedTrack_covthetaqoverp;
   vector<vector<float> > *el_refittedTrack_d0_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_wrtBL;
   vector<vector<float> > *el_refittedTrack_theta_wrtBL;
   vector<vector<float> > *el_refittedTrack_qoverp_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_z0_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_phi_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_d0_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_phi_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_z0_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_theta_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_phi_qoverp_err_wrtBL;
   vector<vector<float> > *el_refittedTrack_theta_qoverp_err_wrtBL;
   vector<float>   *el_Es0;
   vector<float>   *el_etas0;
   vector<float>   *el_phis0;
   vector<float>   *el_Es1;
   vector<float>   *el_etas1;
   vector<float>   *el_phis1;
   vector<float>   *el_Es2;
   vector<float>   *el_etas2;
   vector<float>   *el_phis2;
   vector<float>   *el_Es3;
   vector<float>   *el_etas3;
   vector<float>   *el_phis3;
   vector<float>   *el_E_PreSamplerB;
   vector<float>   *el_E_EMB1;
   vector<float>   *el_E_EMB2;
   vector<float>   *el_E_EMB3;
   vector<float>   *el_E_PreSamplerE;
   vector<float>   *el_E_EME1;
   vector<float>   *el_E_EME2;
   vector<float>   *el_E_EME3;
   vector<float>   *el_E_HEC0;
   vector<float>   *el_E_HEC1;
   vector<float>   *el_E_HEC2;
   vector<float>   *el_E_HEC3;
   vector<float>   *el_E_TileBar0;
   vector<float>   *el_E_TileBar1;
   vector<float>   *el_E_TileBar2;
   vector<float>   *el_E_TileGap1;
   vector<float>   *el_E_TileGap2;
   vector<float>   *el_E_TileGap3;
   vector<float>   *el_E_TileExt0;
   vector<float>   *el_E_TileExt1;
   vector<float>   *el_E_TileExt2;
   vector<float>   *el_E_FCAL0;
   vector<float>   *el_E_FCAL1;
   vector<float>   *el_E_FCAL2;
   vector<float>   *el_cl_E;
   vector<float>   *el_cl_pt;
   vector<float>   *el_cl_eta;
   vector<float>   *el_cl_phi;
   vector<double>  *el_cl_etaCalo;
   vector<double>  *el_cl_phiCalo;
   vector<float>   *el_firstEdens;
   vector<float>   *el_cellmaxfrac;
   vector<float>   *el_longitudinal;
   vector<float>   *el_secondlambda;
   vector<float>   *el_lateral;
   vector<float>   *el_secondR;
   vector<float>   *el_centerlambda;
   vector<float>   *el_rawcl_Es0;
   vector<float>   *el_rawcl_etas0;
   vector<float>   *el_rawcl_phis0;
   vector<float>   *el_rawcl_Es1;
   vector<float>   *el_rawcl_etas1;
   vector<float>   *el_rawcl_phis1;
   vector<float>   *el_rawcl_Es2;
   vector<float>   *el_rawcl_etas2;
   vector<float>   *el_rawcl_phis2;
   vector<float>   *el_rawcl_Es3;
   vector<float>   *el_rawcl_etas3;
   vector<float>   *el_rawcl_phis3;
   vector<float>   *el_rawcl_E;
   vector<float>   *el_rawcl_pt;
   vector<float>   *el_rawcl_eta;
   vector<float>   *el_rawcl_phi;
   vector<float>   *el_trackd0;
   vector<float>   *el_trackz0;
   vector<float>   *el_trackphi;
   vector<float>   *el_tracktheta;
   vector<float>   *el_trackqoverp;
   vector<float>   *el_trackpt;
   vector<float>   *el_tracketa;
   vector<float>   *el_trackcov_d0;
   vector<float>   *el_trackcov_z0;
   vector<float>   *el_trackcov_phi;
   vector<float>   *el_trackcov_theta;
   vector<float>   *el_trackcov_qoverp;
   vector<float>   *el_trackcov_d0_z0;
   vector<float>   *el_trackcov_d0_phi;
   vector<float>   *el_trackcov_d0_theta;
   vector<float>   *el_trackcov_d0_qoverp;
   vector<float>   *el_trackcov_z0_phi;
   vector<float>   *el_trackcov_z0_theta;
   vector<float>   *el_trackcov_z0_qoverp;
   vector<float>   *el_trackcov_phi_theta;
   vector<float>   *el_trackcov_phi_qoverp;
   vector<float>   *el_trackcov_theta_qoverp;
   vector<float>   *el_trackfitchi2;
   vector<int>     *el_trackfitndof;
   vector<int>     *el_nBLHits;
   vector<int>     *el_nPixHits;
   vector<int>     *el_nSCTHits;
   vector<int>     *el_nTRTHits;
   vector<int>     *el_nTRTHighTHits;
   vector<int>     *el_nTRTXenonHits;
   vector<int>     *el_nPixHoles;
   vector<int>     *el_nSCTHoles;
   vector<int>     *el_nTRTHoles;
   vector<int>     *el_nPixelDeadSensors;
   vector<int>     *el_nSCTDeadSensors;
   vector<int>     *el_nBLSharedHits;
   vector<int>     *el_nPixSharedHits;
   vector<int>     *el_nSCTSharedHits;
   vector<int>     *el_nBLayerSplitHits;
   vector<int>     *el_nPixSplitHits;
   vector<int>     *el_nBLayerOutliers;
   vector<int>     *el_nPixelOutliers;
   vector<int>     *el_nSCTOutliers;
   vector<int>     *el_nTRTOutliers;
   vector<int>     *el_nTRTHighTOutliers;
   vector<int>     *el_nContribPixelLayers;
   vector<int>     *el_nGangedPixels;
   vector<int>     *el_nGangedFlaggedFakes;
   vector<int>     *el_nPixelSpoiltHits;
   vector<int>     *el_nSCTDoubleHoles;
   vector<int>     *el_nSCTSpoiltHits;
   vector<int>     *el_expectBLayerHit;
   vector<int>     *el_nSiHits;
   vector<float>   *el_TRTHighTHitsRatio;
   vector<float>   *el_TRTHighTOutliersRatio;
   vector<float>   *el_pixeldEdx;
   vector<int>     *el_nGoodHitsPixeldEdx;
   vector<float>   *el_massPixeldEdx;
   vector<vector<float> > *el_likelihoodsPixeldEdx;
   vector<float>   *el_eProbabilityComb;
   vector<float>   *el_eProbabilityHT;
   vector<float>   *el_eProbabilityToT;
   vector<float>   *el_eProbabilityBrem;
   vector<float>   *el_vertweight;
   vector<float>   *el_vertx;
   vector<float>   *el_verty;
   vector<float>   *el_vertz;
   vector<float>   *el_trackd0beam;
   vector<float>   *el_trackz0beam;
   vector<float>   *el_tracksigd0beam;
   vector<float>   *el_tracksigz0beam;
   vector<float>   *el_trackd0pv;
   vector<float>   *el_trackz0pv;
   vector<float>   *el_tracksigd0pv;
   vector<float>   *el_tracksigz0pv;
   vector<float>   *el_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *el_trackd0pvunbiased;
   vector<float>   *el_trackz0pvunbiased;
   vector<float>   *el_tracksigd0pvunbiased;
   vector<float>   *el_tracksigz0pvunbiased;
   vector<float>   *el_Unrefittedtrack_d0;
   vector<float>   *el_Unrefittedtrack_z0;
   vector<float>   *el_Unrefittedtrack_phi;
   vector<float>   *el_Unrefittedtrack_theta;
   vector<float>   *el_Unrefittedtrack_qoverp;
   vector<float>   *el_Unrefittedtrack_pt;
   vector<float>   *el_Unrefittedtrack_eta;
   vector<float>   *el_theta_LM;
   vector<float>   *el_qoverp_LM;
   vector<float>   *el_locX_LM;
   vector<float>   *el_locY_LM;
   vector<float>   *el_phi_LM;
   vector<float>   *el_theta_err_LM;
   vector<float>   *el_qoverp_err_LM;
   vector<float>   *el_locX_err_LM;
   vector<float>   *el_locY_err_LM;
   vector<float>   *el_phi_err_LM;
   vector<int>     *el_hastrack;
   vector<float>   *el_deltaEmax2;
   vector<float>   *el_calibHitsShowerDepth;
   vector<unsigned int> *el_isIso;
   vector<float>   *el_mvaptcone20;
   vector<float>   *el_mvaptcone30;
   vector<float>   *el_mvaptcone40;
   vector<float>   *el_CaloPointing_eta;
   vector<float>   *el_CaloPointing_sigma_eta;
   vector<float>   *el_CaloPointing_zvertex;
   vector<float>   *el_CaloPointing_sigma_zvertex;
   vector<float>   *el_HPV_eta;
   vector<float>   *el_HPV_sigma_eta;
   vector<float>   *el_HPV_zvertex;
   vector<float>   *el_HPV_sigma_zvertex;
   vector<float>   *el_topoEtcone60;
   vector<float>   *el_ES0_real;
   vector<float>   *el_ES1_real;
   vector<float>   *el_ES2_real;
   vector<float>   *el_ES3_real;
   vector<float>   *el_EcellS0;
   vector<float>   *el_etacellS0;
   vector<float>   *el_Etcone40_ED_corrected;
   vector<float>   *el_Etcone40_corrected;
   vector<float>   *el_topoEtcone20_corrected;
   vector<float>   *el_topoEtcone30_corrected;
   vector<float>   *el_topoEtcone40_corrected;
   vector<float>   *el_ED_median;
   vector<float>   *el_ED_sigma;
   vector<float>   *el_ED_Njets;
   vector<float>   *el_EF_dr;
   vector<float>   *el_L2_dr;
   vector<float>   *el_L1_dr;
   vector<int>     *el_L1_index;
   Int_t           ph_n;
   vector<float>   *ph_E;
   vector<float>   *ph_Et;
   vector<float>   *ph_pt;
   vector<float>   *ph_m;
   vector<float>   *ph_eta;
   vector<float>   *ph_phi;
   vector<float>   *ph_px;
   vector<float>   *ph_py;
   vector<float>   *ph_pz;
   vector<int>     *ph_author;
   vector<int>     *ph_isRecovered;
   vector<unsigned int> *ph_isEM;
   vector<unsigned int> *ph_isEMLoose;
   vector<unsigned int> *ph_isEMMedium;
   vector<unsigned int> *ph_isEMTight;
   vector<unsigned int> *ph_OQ;
   vector<int>     *ph_loose;
   vector<int>     *ph_looseIso;
   vector<int>     *ph_tight;
   vector<int>     *ph_tightIso;
   vector<int>     *ph_looseAR;
   vector<int>     *ph_looseARIso;
   vector<int>     *ph_tightAR;
   vector<int>     *ph_tightARIso;
   vector<int>     *ph_goodOQ;
   vector<float>   *ph_Ethad;
   vector<float>   *ph_Ethad1;
   vector<float>   *ph_E033;
   vector<float>   *ph_f1;
   vector<float>   *ph_f1core;
   vector<float>   *ph_Emins1;
   vector<float>   *ph_fside;
   vector<float>   *ph_Emax2;
   vector<float>   *ph_ws3;
   vector<float>   *ph_wstot;
   vector<float>   *ph_E132;
   vector<float>   *ph_E1152;
   vector<float>   *ph_emaxs1;
   vector<float>   *ph_deltaEs;
   vector<float>   *ph_E233;
   vector<float>   *ph_E237;
   vector<float>   *ph_E277;
   vector<float>   *ph_weta2;
   vector<float>   *ph_f3;
   vector<float>   *ph_f3core;
   vector<float>   *ph_rphiallcalo;
   vector<float>   *ph_Etcone45;
   vector<float>   *ph_Etcone15;
   vector<float>   *ph_Etcone20;
   vector<float>   *ph_Etcone25;
   vector<float>   *ph_Etcone30;
   vector<float>   *ph_Etcone35;
   vector<float>   *ph_Etcone40;
   vector<float>   *ph_ptcone20;
   vector<float>   *ph_ptcone30;
   vector<float>   *ph_ptcone40;
   vector<float>   *ph_nucone20;
   vector<float>   *ph_nucone30;
   vector<float>   *ph_nucone40;
   vector<float>   *ph_Etcone15_pt_corrected;
   vector<float>   *ph_Etcone20_pt_corrected;
   vector<float>   *ph_Etcone25_pt_corrected;
   vector<float>   *ph_Etcone30_pt_corrected;
   vector<float>   *ph_Etcone35_pt_corrected;
   vector<float>   *ph_Etcone40_pt_corrected;
   vector<float>   *ph_convanglematch;
   vector<float>   *ph_convtrackmatch;
   vector<float>   *ph_reta;
   vector<float>   *ph_rphi;
   vector<float>   *ph_topoEtcone20;
   vector<float>   *ph_topoEtcone30;
   vector<float>   *ph_topoEtcone40;
   vector<float>   *ph_materialTraversed;
   vector<float>   *ph_EtringnoisedR03sig2;
   vector<float>   *ph_EtringnoisedR03sig3;
   vector<float>   *ph_EtringnoisedR03sig4;
   vector<float>   *ph_ptcone20_zpv05;
   vector<float>   *ph_ptcone30_zpv05;
   vector<float>   *ph_ptcone40_zpv05;
   vector<float>   *ph_nucone20_zpv05;
   vector<float>   *ph_nucone30_zpv05;
   vector<float>   *ph_nucone40_zpv05;
   vector<double>  *ph_isolationlikelihoodjets;
   vector<double>  *ph_isolationlikelihoodhqelectrons;
   vector<double>  *ph_loglikelihood;
   vector<double>  *ph_photonweight;
   vector<double>  *ph_photonbgweight;
   vector<double>  *ph_neuralnet;
   vector<double>  *ph_Hmatrix;
   vector<double>  *ph_Hmatrix5;
   vector<double>  *ph_adaboost;
   vector<double>  *ph_ringernn;
   vector<float>   *ph_zvertex;
   vector<float>   *ph_errz;
   vector<float>   *ph_etap;
   vector<float>   *ph_depth;
   vector<float>   *ph_cl_E;
   vector<float>   *ph_cl_pt;
   vector<float>   *ph_cl_eta;
   vector<float>   *ph_cl_phi;
   vector<double>  *ph_cl_etaCalo;
   vector<double>  *ph_cl_phiCalo;
   vector<float>   *ph_Es0;
   vector<float>   *ph_etas0;
   vector<float>   *ph_phis0;
   vector<float>   *ph_Es1;
   vector<float>   *ph_etas1;
   vector<float>   *ph_phis1;
   vector<float>   *ph_Es2;
   vector<float>   *ph_etas2;
   vector<float>   *ph_phis2;
   vector<float>   *ph_Es3;
   vector<float>   *ph_etas3;
   vector<float>   *ph_phis3;
   vector<float>   *ph_rawcl_Es0;
   vector<float>   *ph_rawcl_etas0;
   vector<float>   *ph_rawcl_phis0;
   vector<float>   *ph_rawcl_Es1;
   vector<float>   *ph_rawcl_etas1;
   vector<float>   *ph_rawcl_phis1;
   vector<float>   *ph_rawcl_Es2;
   vector<float>   *ph_rawcl_etas2;
   vector<float>   *ph_rawcl_phis2;
   vector<float>   *ph_rawcl_Es3;
   vector<float>   *ph_rawcl_etas3;
   vector<float>   *ph_rawcl_phis3;
   vector<float>   *ph_rawcl_E;
   vector<float>   *ph_rawcl_pt;
   vector<float>   *ph_rawcl_eta;
   vector<float>   *ph_rawcl_phi;
   vector<float>   *ph_convMatchDeltaEta1;
   vector<float>   *ph_convMatchDeltaEta2;
   vector<float>   *ph_convMatchDeltaPhi1;
   vector<float>   *ph_convMatchDeltaPhi2;
   vector<vector<float> > *ph_rings_E;
   vector<int>     *ph_vx_n;
   vector<vector<float> > *ph_vx_x;
   vector<vector<float> > *ph_vx_y;
   vector<vector<float> > *ph_vx_z;
   vector<vector<float> > *ph_vx_px;
   vector<vector<float> > *ph_vx_py;
   vector<vector<float> > *ph_vx_pz;
   vector<vector<float> > *ph_vx_E;
   vector<vector<float> > *ph_vx_m;
   vector<vector<int> > *ph_vx_nTracks;
   vector<vector<float> > *ph_vx_sumPt;
   vector<vector<vector<float> > > *ph_vx_convTrk_weight;
   vector<vector<int> > *ph_vx_convTrk_n;
   vector<vector<vector<int> > > *ph_vx_convTrk_fitter;
   vector<vector<vector<int> > > *ph_vx_convTrk_patternReco1;
   vector<vector<vector<int> > > *ph_vx_convTrk_patternReco2;
   vector<vector<vector<int> > > *ph_vx_convTrk_trackProperties;
   vector<vector<vector<int> > > *ph_vx_convTrk_particleHypothesis;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHighTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTXenonHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixelDeadSensors;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTDeadSensors;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLSharedHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixSharedHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTSharedHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLayerSplitHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixSplitHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLayerOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixelOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHighTOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nContribPixelLayers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nGangedPixels;
   vector<vector<vector<int> > > *ph_vx_convTrk_nGangedFlaggedFakes;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixelSpoiltHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTDoubleHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTSpoiltHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTDeadStraws;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTTubeHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nOutliersOnTrack;
   vector<vector<vector<int> > > *ph_vx_convTrk_standardDeviationOfChi2OS;
   vector<vector<vector<int> > > *ph_vx_convTrk_expectBLayerHit;
   vector<vector<vector<int> > > *ph_vx_convTrk_nMDTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCSCEtaHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCSCPhiHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRPCEtaHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRPCPhiHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTGCEtaHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTGCPhiHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nMdtHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCscEtaHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCscPhiHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRpcEtaHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRpcPhiHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTgcEtaHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTgcPhiHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_hitPattern;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSiHits;
   vector<vector<vector<float> > > *ph_vx_convTrk_TRTHighTHitsRatio;
   vector<vector<vector<float> > > *ph_vx_convTrk_TRTHighTOutliersRatio;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityComb;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityHT;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityToT;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityBrem;
   vector<vector<vector<float> > > *ph_vx_convTrk_chi2;
   vector<vector<vector<int> > > *ph_vx_convTrk_ndof;
   vector<float>   *ph_deltaEmax2;
   vector<float>   *ph_calibHitsShowerDepth;
   vector<unsigned int> *ph_isIso;
   vector<float>   *ph_mvaptcone20;
   vector<float>   *ph_mvaptcone30;
   vector<float>   *ph_mvaptcone40;
   vector<vector<float> > *ph_vx_Chi2;
   vector<vector<float> > *ph_vx_Dcottheta;
   vector<vector<float> > *ph_vx_Dphi;
   vector<vector<float> > *ph_vx_Dist;
   vector<vector<float> > *ph_vx_DR1R2;
   vector<float>   *ph_CaloPointing_eta;
   vector<float>   *ph_CaloPointing_sigma_eta;
   vector<float>   *ph_CaloPointing_zvertex;
   vector<float>   *ph_CaloPointing_sigma_zvertex;
   vector<float>   *ph_HPV_eta;
   vector<float>   *ph_HPV_sigma_eta;
   vector<float>   *ph_HPV_zvertex;
   vector<float>   *ph_HPV_sigma_zvertex;
   vector<int>     *ph_NN_passes;
   vector<float>   *ph_NN_discriminant;
   vector<float>   *ph_ES0_real;
   vector<float>   *ph_ES1_real;
   vector<float>   *ph_ES2_real;
   vector<float>   *ph_ES3_real;
   vector<float>   *ph_EcellS0;
   vector<float>   *ph_etacellS0;
   vector<float>   *ph_Etcone40_ED_corrected;
   vector<float>   *ph_Etcone40_corrected;
   vector<float>   *ph_topoEtcone20_corrected;
   vector<float>   *ph_topoEtcone30_corrected;
   vector<float>   *ph_topoEtcone40_corrected;
   vector<float>   *ph_ED_median;
   vector<float>   *ph_ED_sigma;
   vector<float>   *ph_ED_Njets;
   vector<float>   *ph_convIP;
   vector<float>   *ph_convIPRev;
   vector<int>     *ph_el_index;
   vector<float>   *ph_EF_dr;
   vector<int>     *ph_EF_index;
   vector<float>   *ph_L2_dr;
   vector<float>   *ph_L1_dr;
   vector<int>     *ph_L1_index;

   // List of branches
   TBranch        *b_EF_2g10_loose;   //!
   TBranch        *b_EF_2g5_loose;   //!
   TBranch        *b_EF_2g7_loose;   //!
   TBranch        *b_EF_2mu2_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_EF_2mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_2mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_2mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_2mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_2mu2_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_EF_2mu4T_MSonly;   //!
   TBranch        *b_EF_2mu4_MSonly;   //!
   TBranch        *b_EF_2mu4_MSonly_EFFS_L1MU0;   //!
   TBranch        *b_EF_2mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_2mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_2mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_2mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_2mu6T_MSonly;   //!
   TBranch        *b_EF_2mu6_MSonly;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0_EMPTY;   //!
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
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_MV_VTE50;   //!
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
   TBranch        *b_EF_e10_loose1;   //!
   TBranch        *b_EF_e10_medium1;   //!
   TBranch        *b_EF_e5_loose1;   //!
   TBranch        *b_EF_e5_medium1;   //!
   TBranch        *b_EF_e7_loose1;   //!
   TBranch        *b_EF_e7_medium1;   //!
   TBranch        *b_EF_g10_loose;   //!
   TBranch        *b_EF_g10_loose_larcalib;   //!
   TBranch        *b_EF_g10_medium;   //!
   TBranch        *b_EF_g5_NoCut_cosmic;   //!
   TBranch        *b_EF_g5_loose;   //!
   TBranch        *b_EF_g5_loose_larcalib;   //!
   TBranch        *b_EF_g5_medium;   //!
   TBranch        *b_EF_g7_loose;   //!
   TBranch        *b_EF_g7_medium;   //!
   TBranch        *b_EF_mu10T_MSonly;   //!
   TBranch        *b_EF_mu10_MSonly;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu10_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu13T_MSonly;   //!
   TBranch        *b_EF_mu13_MSonly;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu13_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu4;   //!
   TBranch        *b_EF_mu4T;   //!
   TBranch        *b_EF_mu4T_IDTrkNoCut;   //!
   TBranch        *b_EF_mu4T_MSonly;   //!
   TBranch        *b_EF_mu4T_MSonly_L1TE50;   //!
   TBranch        *b_EF_mu4T_MSonly_barrel;   //!
   TBranch        *b_EF_mu4T_MSonly_cosmic;   //!
   TBranch        *b_EF_mu4T_cosmic;   //!
   TBranch        *b_EF_mu4_IDTrkNoCut;   //!
   TBranch        *b_EF_mu4_L1VTE50;   //!
   TBranch        *b_EF_mu4_MSonly;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_EF_mu4_MSonly_L1TE50;   //!
   TBranch        *b_EF_mu4_MSonly_barrel;   //!
   TBranch        *b_EF_mu4_MSonly_barrel_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu4_MSonly_barrel_L1TE50;   //!
   TBranch        *b_EF_mu4_MSonly_cosmic;   //!
   TBranch        *b_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu4_MSonly_j15_a2hi_EFFS_matched;   //!
   TBranch        *b_EF_mu4_barrel_L1VTE50;   //!
   TBranch        *b_EF_mu4_cosmic;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu6T_MSonly;   //!
   TBranch        *b_EF_mu6_IDTrkNoCut;   //!
   TBranch        *b_EF_mu6_L1VTE50;   //!
   TBranch        *b_EF_mu6_MSonly;   //!
   TBranch        *b_EF_mu6_MSonly_L1TE50;   //!
   TBranch        *b_L1_2EM3;   //!
   TBranch        *b_L1_2EM5;   //!
   TBranch        *b_L1_2MU0;   //!
   TBranch        *b_L1_2MU0_EMPTY;   //!
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
   TBranch        *b_L1_MU0_MV_VTE50;   //!
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
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_L2_2mu4T_MSonly;   //!
   TBranch        *b_L2_2mu4_MSonly;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1MU0;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_2mu6T_MSonly;   //!
   TBranch        *b_L2_2mu6_MSonly;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0_EMPTY;   //!
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
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_MV_VTE50;   //!
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
   TBranch        *b_L2_e10_loose1;   //!
   TBranch        *b_L2_e10_medium1;   //!
   TBranch        *b_L2_e5_loose1;   //!
   TBranch        *b_L2_e5_medium1;   //!
   TBranch        *b_L2_e7_loose1;   //!
   TBranch        *b_L2_e7_medium1;   //!
   TBranch        *b_L2_em3_empty_larcalib;   //!
   TBranch        *b_L2_em5_empty_larcalib;   //!
   TBranch        *b_L2_g10_loose;   //!
   TBranch        *b_L2_g10_medium;   //!
   TBranch        *b_L2_g5_NoCut_cosmic;   //!
   TBranch        *b_L2_g5_loose;   //!
   TBranch        *b_L2_g5_medium;   //!
   TBranch        *b_L2_g7_loose;   //!
   TBranch        *b_L2_g7_medium;   //!
   TBranch        *b_L2_mu10T_MSonly;   //!
   TBranch        *b_L2_mu10_MSonly;   //!
   TBranch        *b_L2_mu10_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_mu10_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_mu10_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_mu10_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu13T_MSonly;   //!
   TBranch        *b_L2_mu13_MSonly;   //!
   TBranch        *b_L2_mu13_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_mu13_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_mu13_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_mu13_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4;   //!
   TBranch        *b_L2_mu4T;   //!
   TBranch        *b_L2_mu4T_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4T_MSonly;   //!
   TBranch        *b_L2_mu4T_MSonly_L1TE50;   //!
   TBranch        *b_L2_mu4T_MSonly_barrel;   //!
   TBranch        *b_L2_mu4T_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4T_cosmic;   //!
   TBranch        *b_L2_mu4T_l2cal;   //!
   TBranch        *b_L2_mu4_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4_L1VTE50;   //!
   TBranch        *b_L2_mu4_MSonly;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_L2_mu4_MSonly_L1TE50;   //!
   TBranch        *b_L2_mu4_MSonly_barrel;   //!
   TBranch        *b_L2_mu4_MSonly_barrel_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4_MSonly_barrel_L1TE50;   //!
   TBranch        *b_L2_mu4_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4_barrel_L1VTE50;   //!
   TBranch        *b_L2_mu4_cosmic;   //!
   TBranch        *b_L2_mu4_l2cal_empty;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu6T_MSonly;   //!
   TBranch        *b_L2_mu6_IDTrkNoCut;   //!
   TBranch        *b_L2_mu6_L1VTE50;   //!
   TBranch        *b_L2_mu6_MSonly;   //!
   TBranch        *b_L2_mu6_MSonly_L1TE50;   //!
   TBranch        *b_L2_mu6_l2cal;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu6T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_2mu6_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY;   //!
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
   TBranch        *b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50;   //!
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
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly_barrel;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4T_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_L1VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_barrel_L1VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_cosmic;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_L1VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50;   //!
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
   TBranch        *b_pixClus_n;   //!
   TBranch        *b_pixClus_id;   //!
   TBranch        *b_pixClus_bec;   //!
   TBranch        *b_pixClus_layer;   //!
   TBranch        *b_pixClus_detElementId;   //!
   TBranch        *b_pixClus_phi_module;   //!
   TBranch        *b_pixClus_eta_module;   //!
   TBranch        *b_pixClus_col;   //!
   TBranch        *b_pixClus_row;   //!
   TBranch        *b_pixClus_charge;   //!
   TBranch        *b_pixClus_LVL1A;   //!
   TBranch        *b_pixClus_sizePhi;   //!
   TBranch        *b_pixClus_sizeZ;   //!
   TBranch        *b_pixClus_size;   //!
   TBranch        *b_pixClus_locX;   //!
   TBranch        *b_pixClus_locY;   //!
   TBranch        *b_pixClus_x;   //!
   TBranch        *b_pixClus_y;   //!
   TBranch        *b_pixClus_z;   //!
   TBranch        *b_pixClus_isFake;   //!
   TBranch        *b_pixClus_isGanged;   //!
   TBranch        *b_pixClus_isSplit;   //!
   TBranch        *b_pixClus_splitProb1;   //!
   TBranch        *b_pixClus_splitProb2;   //!
   TBranch        *b_cc_fcal_n;   //!
   TBranch        *b_cc_fcal_E;   //!
   TBranch        *b_cc_fcal_pt;   //!
   TBranch        *b_cc_fcal_eta;   //!
   TBranch        *b_cc_fcal_phi;   //!
   TBranch        *b_cc_fcal_QCells;   //!
   TBranch        *b_cc_fcal_GainCells;   //!
   TBranch        *b_cc_fcal_DetCells;   //!
   TBranch        *b_cc_fcal_TimeCells;   //!
   TBranch        *b_cc_fcal_xCells;   //!
   TBranch        *b_cc_fcal_yCells;   //!
   TBranch        *b_cc_fcal_zCells;   //!
   TBranch        *b_cc_fcal_BadCells;   //!
   TBranch        *b_cc_fcal_IdCells;   //!
   TBranch        *b_cc_fcal_Sigma;   //!
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
   TBranch        *b_trk_d0;   //!
   TBranch        *b_trk_z0;   //!
   TBranch        *b_trk_phi;   //!
   TBranch        *b_trk_theta;   //!
   TBranch        *b_trk_qoverp;   //!
   TBranch        *b_trk_pt;   //!
   TBranch        *b_trk_eta;   //!
   TBranch        *b_trk_err_d0;   //!
   TBranch        *b_trk_err_z0;   //!
   TBranch        *b_trk_err_phi;   //!
   TBranch        *b_trk_err_theta;   //!
   TBranch        *b_trk_err_qoverp;   //!
   TBranch        *b_trk_cov_d0_z0;   //!
   TBranch        *b_trk_cov_d0_phi;   //!
   TBranch        *b_trk_cov_d0_theta;   //!
   TBranch        *b_trk_cov_d0_qoverp;   //!
   TBranch        *b_trk_cov_z0_phi;   //!
   TBranch        *b_trk_cov_z0_theta;   //!
   TBranch        *b_trk_cov_z0_qoverp;   //!
   TBranch        *b_trk_cov_phi_theta;   //!
   TBranch        *b_trk_cov_phi_qoverp;   //!
   TBranch        *b_trk_cov_theta_qoverp;   //!
   TBranch        *b_trk_d0_wrtPV;   //!
   TBranch        *b_trk_z0_wrtPV;   //!
   TBranch        *b_trk_phi_wrtPV;   //!
   TBranch        *b_trk_err_d0_wrtPV;   //!
   TBranch        *b_trk_err_z0_wrtPV;   //!
   TBranch        *b_trk_err_phi_wrtPV;   //!
   TBranch        *b_trk_err_theta_wrtPV;   //!
   TBranch        *b_trk_err_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trk_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trk_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trk_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trk_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trk_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trk_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trk_d0_wrtBS;   //!
   TBranch        *b_trk_z0_wrtBS;   //!
   TBranch        *b_trk_phi_wrtBS;   //!
   TBranch        *b_trk_err_d0_wrtBS;   //!
   TBranch        *b_trk_err_z0_wrtBS;   //!
   TBranch        *b_trk_err_phi_wrtBS;   //!
   TBranch        *b_trk_err_theta_wrtBS;   //!
   TBranch        *b_trk_err_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trk_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trk_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trk_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trk_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trk_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trk_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trk_d0_wrtBL;   //!
   TBranch        *b_trk_z0_wrtBL;   //!
   TBranch        *b_trk_phi_wrtBL;   //!
   TBranch        *b_trk_d0_err_wrtBL;   //!
   TBranch        *b_trk_z0_err_wrtBL;   //!
   TBranch        *b_trk_phi_err_wrtBL;   //!
   TBranch        *b_trk_theta_err_wrtBL;   //!
   TBranch        *b_trk_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_d0_z0_err_wrtBL;   //!
   TBranch        *b_trk_d0_phi_err_wrtBL;   //!
   TBranch        *b_trk_d0_theta_err_wrtBL;   //!
   TBranch        *b_trk_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_z0_phi_err_wrtBL;   //!
   TBranch        *b_trk_z0_theta_err_wrtBL;   //!
   TBranch        *b_trk_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_phi_theta_err_wrtBL;   //!
   TBranch        *b_trk_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_chi2;   //!
   TBranch        *b_trk_ndof;   //!
   TBranch        *b_trk_nBLHits;   //!
   TBranch        *b_trk_nPixHits;   //!
   TBranch        *b_trk_nSCTHits;   //!
   TBranch        *b_trk_nTRTHits;   //!
   TBranch        *b_trk_nTRTHighTHits;   //!
   TBranch        *b_trk_nTRTXenonHits;   //!
   TBranch        *b_trk_nPixHoles;   //!
   TBranch        *b_trk_nSCTHoles;   //!
   TBranch        *b_trk_nTRTHoles;   //!
   TBranch        *b_trk_nPixelDeadSensors;   //!
   TBranch        *b_trk_nSCTDeadSensors;   //!
   TBranch        *b_trk_nBLSharedHits;   //!
   TBranch        *b_trk_nPixSharedHits;   //!
   TBranch        *b_trk_nSCTSharedHits;   //!
   TBranch        *b_trk_nBLayerSplitHits;   //!
   TBranch        *b_trk_nPixSplitHits;   //!
   TBranch        *b_trk_nBLayerOutliers;   //!
   TBranch        *b_trk_nPixelOutliers;   //!
   TBranch        *b_trk_nSCTOutliers;   //!
   TBranch        *b_trk_nTRTOutliers;   //!
   TBranch        *b_trk_nTRTHighTOutliers;   //!
   TBranch        *b_trk_expectBLayerHit;   //!
   TBranch        *b_trk_nHits;   //!
   TBranch        *b_trk_nHoles;   //!
   TBranch        *b_trk_hitPattern;   //!
   TBranch        *b_trk_fitter;   //!
   TBranch        *b_trk_patternReco1;   //!
   TBranch        *b_trk_patternReco2;   //!
   TBranch        *b_trk_trackProperties;   //!
   TBranch        *b_trk_particleHypothesis;   //!
   TBranch        *b_trk_blayerPrediction_x;   //!
   TBranch        *b_trk_blayerPrediction_y;   //!
   TBranch        *b_trk_blayerPrediction_z;   //!
   TBranch        *b_trk_blayerPrediction_locX;   //!
   TBranch        *b_trk_blayerPrediction_locY;   //!
   TBranch        *b_trk_blayerPrediction_err_locX;   //!
   TBranch        *b_trk_blayerPrediction_err_locY;   //!
   TBranch        *b_trk_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trk_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trk_blayerPrediction_detElementId;   //!
   TBranch        *b_trk_blayerPrediction_row;   //!
   TBranch        *b_trk_blayerPrediction_col;   //!
   TBranch        *b_trk_blayerPrediction_type;   //!
   TBranch        *b_trk_Pixel_hit_n;   //!
   TBranch        *b_trk_Pixel_hit_id;   //!
   TBranch        *b_trk_Pixel_hit_detElementId;   //!
   TBranch        *b_trk_Pixel_hit_detType;   //!
   TBranch        *b_trk_Pixel_hit_bec;   //!
   TBranch        *b_trk_Pixel_hit_layer;   //!
   TBranch        *b_trk_Pixel_hit_charge;   //!
   TBranch        *b_trk_Pixel_hit_sizePhi;   //!
   TBranch        *b_trk_Pixel_hit_sizeZ;   //!
   TBranch        *b_trk_Pixel_hit_size;   //!
   TBranch        *b_trk_Pixel_hit_isFake;   //!
   TBranch        *b_trk_Pixel_hit_isGanged;   //!
   TBranch        *b_trk_Pixel_hit_isSplit;   //!
   TBranch        *b_trk_Pixel_hit_splitProb1;   //!
   TBranch        *b_trk_Pixel_hit_splitProb2;   //!
   TBranch        *b_trk_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trk_Pixel_hit_locX;   //!
   TBranch        *b_trk_Pixel_hit_locY;   //!
   TBranch        *b_trk_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trk_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trk_Pixel_hit_err_locX;   //!
   TBranch        *b_trk_Pixel_hit_err_locY;   //!
   TBranch        *b_trk_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trk_Pixel_hit_x;   //!
   TBranch        *b_trk_Pixel_hit_y;   //!
   TBranch        *b_trk_Pixel_hit_z;   //!
   TBranch        *b_trk_Pixel_hit_trkLocX;   //!
   TBranch        *b_trk_Pixel_hit_trkLocY;   //!
   TBranch        *b_trk_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trk_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trk_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trk_Pixel_hit_chi2;   //!
   TBranch        *b_trk_Pixel_hit_ndof;   //!
   TBranch        *b_trk_SCT_hit_n;   //!
   TBranch        *b_trk_SCT_hit_id;   //!
   TBranch        *b_trk_SCT_hit_detElementId;   //!
   TBranch        *b_trk_SCT_hit_detType;   //!
   TBranch        *b_trk_SCT_hit_bec;   //!
   TBranch        *b_trk_SCT_hit_layer;   //!
   TBranch        *b_trk_SCT_hit_sizePhi;   //!
   TBranch        *b_trk_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trk_SCT_hit_locX;   //!
   TBranch        *b_trk_SCT_hit_locY;   //!
   TBranch        *b_trk_SCT_hit_incidencePhi;   //!
   TBranch        *b_trk_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trk_SCT_hit_err_locX;   //!
   TBranch        *b_trk_SCT_hit_err_locY;   //!
   TBranch        *b_trk_SCT_hit_cov_locXY;   //!
   TBranch        *b_trk_SCT_hit_x;   //!
   TBranch        *b_trk_SCT_hit_y;   //!
   TBranch        *b_trk_SCT_hit_z;   //!
   TBranch        *b_trk_SCT_hit_trkLocX;   //!
   TBranch        *b_trk_SCT_hit_trkLocY;   //!
   TBranch        *b_trk_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trk_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trk_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trk_SCT_hit_chi2;   //!
   TBranch        *b_trk_SCT_hit_ndof;   //!
   TBranch        *b_trk_TRT_hit_n;   //!
   TBranch        *b_trk_TRT_hit_id;   //!
   TBranch        *b_trk_TRT_hit_detElementId;   //!
   TBranch        *b_trk_TRT_hit_detType;   //!
   TBranch        *b_trk_TRT_hit_bec;   //!
   TBranch        *b_trk_TRT_hit_layer;   //!
   TBranch        *b_trk_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trk_TRT_hit_locR;   //!
   TBranch        *b_trk_TRT_hit_err_locR;   //!
   TBranch        *b_trk_TRT_hit_trkLocR;   //!
   TBranch        *b_trk_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trk_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trk_TRT_hit_TOT;   //!
   TBranch        *b_trk_TRT_hit_highLevel;   //!
   TBranch        *b_trk_TRT_hit_trailingEdge;   //!
   TBranch        *b_trk_TRT_hit_chi2;   //!
   TBranch        *b_trk_TRT_hit_ndof;   //!
   TBranch        *b_trk_Pixel_outlier_n;   //!
   TBranch        *b_trk_Pixel_outlier_id;   //!
   TBranch        *b_trk_Pixel_outlier_detElementId;   //!
   TBranch        *b_trk_Pixel_outlier_detType;   //!
   TBranch        *b_trk_Pixel_outlier_bec;   //!
   TBranch        *b_trk_Pixel_outlier_layer;   //!
   TBranch        *b_trk_Pixel_outlier_charge;   //!
   TBranch        *b_trk_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trk_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trk_Pixel_outlier_size;   //!
   TBranch        *b_trk_Pixel_outlier_isFake;   //!
   TBranch        *b_trk_Pixel_outlier_isGanged;   //!
   TBranch        *b_trk_Pixel_outlier_isSplit;   //!
   TBranch        *b_trk_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trk_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trk_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trk_Pixel_outlier_locX;   //!
   TBranch        *b_trk_Pixel_outlier_locY;   //!
   TBranch        *b_trk_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trk_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trk_Pixel_outlier_err_locX;   //!
   TBranch        *b_trk_Pixel_outlier_err_locY;   //!
   TBranch        *b_trk_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trk_Pixel_outlier_x;   //!
   TBranch        *b_trk_Pixel_outlier_y;   //!
   TBranch        *b_trk_Pixel_outlier_z;   //!
   TBranch        *b_trk_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trk_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trk_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trk_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trk_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trk_Pixel_outlier_chi2;   //!
   TBranch        *b_trk_Pixel_outlier_ndof;   //!
   TBranch        *b_trk_SCT_outlier_n;   //!
   TBranch        *b_trk_SCT_outlier_id;   //!
   TBranch        *b_trk_SCT_outlier_detElementId;   //!
   TBranch        *b_trk_SCT_outlier_detType;   //!
   TBranch        *b_trk_SCT_outlier_bec;   //!
   TBranch        *b_trk_SCT_outlier_layer;   //!
   TBranch        *b_trk_SCT_outlier_sizePhi;   //!
   TBranch        *b_trk_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trk_SCT_outlier_locX;   //!
   TBranch        *b_trk_SCT_outlier_locY;   //!
   TBranch        *b_trk_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trk_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trk_SCT_outlier_err_locX;   //!
   TBranch        *b_trk_SCT_outlier_err_locY;   //!
   TBranch        *b_trk_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trk_SCT_outlier_x;   //!
   TBranch        *b_trk_SCT_outlier_y;   //!
   TBranch        *b_trk_SCT_outlier_z;   //!
   TBranch        *b_trk_SCT_outlier_trkLocX;   //!
   TBranch        *b_trk_SCT_outlier_trkLocY;   //!
   TBranch        *b_trk_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trk_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trk_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trk_SCT_outlier_chi2;   //!
   TBranch        *b_trk_SCT_outlier_ndof;   //!
   TBranch        *b_trk_TRT_outlier_n;   //!
   TBranch        *b_trk_TRT_outlier_id;   //!
   TBranch        *b_trk_TRT_outlier_detElementId;   //!
   TBranch        *b_trk_TRT_outlier_detType;   //!
   TBranch        *b_trk_TRT_outlier_bec;   //!
   TBranch        *b_trk_TRT_outlier_layer;   //!
   TBranch        *b_trk_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trk_TRT_outlier_locR;   //!
   TBranch        *b_trk_TRT_outlier_err_locR;   //!
   TBranch        *b_trk_TRT_outlier_trkLocR;   //!
   TBranch        *b_trk_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trk_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trk_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trk_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trk_TRT_outlier_TOT;   //!
   TBranch        *b_trk_TRT_outlier_highLevel;   //!
   TBranch        *b_trk_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trk_TRT_outlier_chi2;   //!
   TBranch        *b_trk_TRT_outlier_ndof;   //!
   TBranch        *b_trk_Pixel_hole_n;   //!
   TBranch        *b_trk_Pixel_hole_detElementId;   //!
   TBranch        *b_trk_Pixel_hole_bec;   //!
   TBranch        *b_trk_Pixel_hole_layer;   //!
   TBranch        *b_trk_Pixel_hole_trkLocX;   //!
   TBranch        *b_trk_Pixel_hole_trkLocY;   //!
   TBranch        *b_trk_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trk_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trk_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trk_SCT_hole_n;   //!
   TBranch        *b_trk_SCT_hole_detElementId;   //!
   TBranch        *b_trk_SCT_hole_bec;   //!
   TBranch        *b_trk_SCT_hole_layer;   //!
   TBranch        *b_trk_SCT_hole_trkLocX;   //!
   TBranch        *b_trk_SCT_hole_trkLocY;   //!
   TBranch        *b_trk_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trk_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trk_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trk_TRT_hole_n;   //!
   TBranch        *b_trk_TRT_hole_detElementId;   //!
   TBranch        *b_trk_TRT_hole_bec;   //!
   TBranch        *b_trk_TRT_hole_layer;   //!
   TBranch        *b_trk_TRT_hole_trkLocR;   //!
   TBranch        *b_trk_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trk_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hole_cov_trkLocRPhi;   //!
   TBranch        *b_pTrklets_n;   //!
   TBranch        *b_pTrklets_nBPixClus;   //!
   TBranch        *b_pTrklets_n1PixClus;   //!
   TBranch        *b_pTrklets_n2PixClus;   //!
   TBranch        *b_pTrklets_layerSum;   //!
   TBranch        *b_pTrklets_eta;   //!
   TBranch        *b_pTrklets_phi;   //!
   TBranch        *b_pTrklets_pt;   //!
   TBranch        *b_pTrklets_deta;   //!
   TBranch        *b_pTrklets_dphi;   //!
   TBranch        *b_pTrklets_etaS;   //!
   TBranch        *b_pTrklets_phiS;   //!
   TBranch        *b_pTrklets_energy0;   //!
   TBranch        *b_pTrklets_energy1;   //!
   TBranch        *b_pTrklets_cSize0;   //!
   TBranch        *b_pTrklets_cSize1;   //!
   TBranch        *b_pTrklets_cRowSize0;   //!
   TBranch        *b_pTrklets_cRowSize1;   //!
   TBranch        *b_pTrklets_cColSize0;   //!
   TBranch        *b_pTrklets_cColSize1;   //!
   TBranch        *b_pTrklets_clusIds;   //!
   TBranch        *b_trkPix_n;   //!
   TBranch        *b_trkPix_d0;   //!
   TBranch        *b_trkPix_z0;   //!
   TBranch        *b_trkPix_phi;   //!
   TBranch        *b_trkPix_theta;   //!
   TBranch        *b_trkPix_qoverp;   //!
   TBranch        *b_trkPix_pt;   //!
   TBranch        *b_trkPix_eta;   //!
   TBranch        *b_trkPix_err_d0;   //!
   TBranch        *b_trkPix_err_z0;   //!
   TBranch        *b_trkPix_err_phi;   //!
   TBranch        *b_trkPix_err_theta;   //!
   TBranch        *b_trkPix_err_qoverp;   //!
   TBranch        *b_trkPix_cov_d0_z0;   //!
   TBranch        *b_trkPix_cov_d0_phi;   //!
   TBranch        *b_trkPix_cov_d0_theta;   //!
   TBranch        *b_trkPix_cov_d0_qoverp;   //!
   TBranch        *b_trkPix_cov_z0_phi;   //!
   TBranch        *b_trkPix_cov_z0_theta;   //!
   TBranch        *b_trkPix_cov_z0_qoverp;   //!
   TBranch        *b_trkPix_cov_phi_theta;   //!
   TBranch        *b_trkPix_cov_phi_qoverp;   //!
   TBranch        *b_trkPix_cov_theta_qoverp;   //!
   TBranch        *b_trkPix_d0_wrtPV;   //!
   TBranch        *b_trkPix_z0_wrtPV;   //!
   TBranch        *b_trkPix_phi_wrtPV;   //!
   TBranch        *b_trkPix_err_d0_wrtPV;   //!
   TBranch        *b_trkPix_err_z0_wrtPV;   //!
   TBranch        *b_trkPix_err_phi_wrtPV;   //!
   TBranch        *b_trkPix_err_theta_wrtPV;   //!
   TBranch        *b_trkPix_err_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trkPix_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trkPix_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trkPix_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_d0_wrtBS;   //!
   TBranch        *b_trkPix_z0_wrtBS;   //!
   TBranch        *b_trkPix_phi_wrtBS;   //!
   TBranch        *b_trkPix_err_d0_wrtBS;   //!
   TBranch        *b_trkPix_err_z0_wrtBS;   //!
   TBranch        *b_trkPix_err_phi_wrtBS;   //!
   TBranch        *b_trkPix_err_theta_wrtBS;   //!
   TBranch        *b_trkPix_err_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trkPix_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trkPix_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trkPix_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_d0_wrtBL;   //!
   TBranch        *b_trkPix_z0_wrtBL;   //!
   TBranch        *b_trkPix_phi_wrtBL;   //!
   TBranch        *b_trkPix_d0_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_err_wrtBL;   //!
   TBranch        *b_trkPix_phi_err_wrtBL;   //!
   TBranch        *b_trkPix_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_z0_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_phi_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_phi_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_phi_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_chi2;   //!
   TBranch        *b_trkPix_ndof;   //!
   TBranch        *b_trkPix_nBLHits;   //!
   TBranch        *b_trkPix_nPixHits;   //!
   TBranch        *b_trkPix_nSCTHits;   //!
   TBranch        *b_trkPix_nTRTHits;   //!
   TBranch        *b_trkPix_nTRTHighTHits;   //!
   TBranch        *b_trkPix_nTRTXenonHits;   //!
   TBranch        *b_trkPix_nPixHoles;   //!
   TBranch        *b_trkPix_nSCTHoles;   //!
   TBranch        *b_trkPix_nTRTHoles;   //!
   TBranch        *b_trkPix_nPixelDeadSensors;   //!
   TBranch        *b_trkPix_nSCTDeadSensors;   //!
   TBranch        *b_trkPix_nBLSharedHits;   //!
   TBranch        *b_trkPix_nPixSharedHits;   //!
   TBranch        *b_trkPix_nSCTSharedHits;   //!
   TBranch        *b_trkPix_nBLayerSplitHits;   //!
   TBranch        *b_trkPix_nPixSplitHits;   //!
   TBranch        *b_trkPix_nBLayerOutliers;   //!
   TBranch        *b_trkPix_nPixelOutliers;   //!
   TBranch        *b_trkPix_nSCTOutliers;   //!
   TBranch        *b_trkPix_nTRTOutliers;   //!
   TBranch        *b_trkPix_nTRTHighTOutliers;   //!
   TBranch        *b_trkPix_expectBLayerHit;   //!
   TBranch        *b_trkPix_nHits;   //!
   TBranch        *b_trkPix_nHoles;   //!
   TBranch        *b_trkPix_hitPattern;   //!
   TBranch        *b_trkPix_fitter;   //!
   TBranch        *b_trkPix_patternReco1;   //!
   TBranch        *b_trkPix_patternReco2;   //!
   TBranch        *b_trkPix_trackProperties;   //!
   TBranch        *b_trkPix_particleHypothesis;   //!
   TBranch        *b_trkPix_blayerPrediction_x;   //!
   TBranch        *b_trkPix_blayerPrediction_y;   //!
   TBranch        *b_trkPix_blayerPrediction_z;   //!
   TBranch        *b_trkPix_blayerPrediction_locX;   //!
   TBranch        *b_trkPix_blayerPrediction_locY;   //!
   TBranch        *b_trkPix_blayerPrediction_err_locX;   //!
   TBranch        *b_trkPix_blayerPrediction_err_locY;   //!
   TBranch        *b_trkPix_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trkPix_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trkPix_blayerPrediction_detElementId;   //!
   TBranch        *b_trkPix_blayerPrediction_row;   //!
   TBranch        *b_trkPix_blayerPrediction_col;   //!
   TBranch        *b_trkPix_blayerPrediction_type;   //!
   TBranch        *b_trkPix_Pixel_hit_n;   //!
   TBranch        *b_trkPix_Pixel_hit_id;   //!
   TBranch        *b_trkPix_Pixel_hit_detElementId;   //!
   TBranch        *b_trkPix_Pixel_hit_detType;   //!
   TBranch        *b_trkPix_Pixel_hit_bec;   //!
   TBranch        *b_trkPix_Pixel_hit_layer;   //!
   TBranch        *b_trkPix_Pixel_hit_charge;   //!
   TBranch        *b_trkPix_Pixel_hit_sizePhi;   //!
   TBranch        *b_trkPix_Pixel_hit_sizeZ;   //!
   TBranch        *b_trkPix_Pixel_hit_size;   //!
   TBranch        *b_trkPix_Pixel_hit_isFake;   //!
   TBranch        *b_trkPix_Pixel_hit_isGanged;   //!
   TBranch        *b_trkPix_Pixel_hit_isSplit;   //!
   TBranch        *b_trkPix_Pixel_hit_splitProb1;   //!
   TBranch        *b_trkPix_Pixel_hit_splitProb2;   //!
   TBranch        *b_trkPix_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trkPix_Pixel_hit_locX;   //!
   TBranch        *b_trkPix_Pixel_hit_locY;   //!
   TBranch        *b_trkPix_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trkPix_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trkPix_Pixel_hit_err_locX;   //!
   TBranch        *b_trkPix_Pixel_hit_err_locY;   //!
   TBranch        *b_trkPix_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trkPix_Pixel_hit_x;   //!
   TBranch        *b_trkPix_Pixel_hit_y;   //!
   TBranch        *b_trkPix_Pixel_hit_z;   //!
   TBranch        *b_trkPix_Pixel_hit_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hit_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trkPix_Pixel_hit_chi2;   //!
   TBranch        *b_trkPix_Pixel_hit_ndof;   //!
   TBranch        *b_trkPix_SCT_hit_n;   //!
   TBranch        *b_trkPix_SCT_hit_id;   //!
   TBranch        *b_trkPix_SCT_hit_detElementId;   //!
   TBranch        *b_trkPix_SCT_hit_detType;   //!
   TBranch        *b_trkPix_SCT_hit_bec;   //!
   TBranch        *b_trkPix_SCT_hit_layer;   //!
   TBranch        *b_trkPix_SCT_hit_sizePhi;   //!
   TBranch        *b_trkPix_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trkPix_SCT_hit_locX;   //!
   TBranch        *b_trkPix_SCT_hit_locY;   //!
   TBranch        *b_trkPix_SCT_hit_incidencePhi;   //!
   TBranch        *b_trkPix_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trkPix_SCT_hit_err_locX;   //!
   TBranch        *b_trkPix_SCT_hit_err_locY;   //!
   TBranch        *b_trkPix_SCT_hit_cov_locXY;   //!
   TBranch        *b_trkPix_SCT_hit_x;   //!
   TBranch        *b_trkPix_SCT_hit_y;   //!
   TBranch        *b_trkPix_SCT_hit_z;   //!
   TBranch        *b_trkPix_SCT_hit_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hit_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trkPix_SCT_hit_chi2;   //!
   TBranch        *b_trkPix_SCT_hit_ndof;   //!
   TBranch        *b_trkPix_TRT_hit_n;   //!
   TBranch        *b_trkPix_TRT_hit_id;   //!
   TBranch        *b_trkPix_TRT_hit_detElementId;   //!
   TBranch        *b_trkPix_TRT_hit_detType;   //!
   TBranch        *b_trkPix_TRT_hit_bec;   //!
   TBranch        *b_trkPix_TRT_hit_layer;   //!
   TBranch        *b_trkPix_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trkPix_TRT_hit_locR;   //!
   TBranch        *b_trkPix_TRT_hit_err_locR;   //!
   TBranch        *b_trkPix_TRT_hit_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trkPix_TRT_hit_TOT;   //!
   TBranch        *b_trkPix_TRT_hit_highLevel;   //!
   TBranch        *b_trkPix_TRT_hit_trailingEdge;   //!
   TBranch        *b_trkPix_TRT_hit_chi2;   //!
   TBranch        *b_trkPix_TRT_hit_ndof;   //!
   TBranch        *b_trkPix_Pixel_outlier_n;   //!
   TBranch        *b_trkPix_Pixel_outlier_id;   //!
   TBranch        *b_trkPix_Pixel_outlier_detElementId;   //!
   TBranch        *b_trkPix_Pixel_outlier_detType;   //!
   TBranch        *b_trkPix_Pixel_outlier_bec;   //!
   TBranch        *b_trkPix_Pixel_outlier_layer;   //!
   TBranch        *b_trkPix_Pixel_outlier_charge;   //!
   TBranch        *b_trkPix_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trkPix_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trkPix_Pixel_outlier_size;   //!
   TBranch        *b_trkPix_Pixel_outlier_isFake;   //!
   TBranch        *b_trkPix_Pixel_outlier_isGanged;   //!
   TBranch        *b_trkPix_Pixel_outlier_isSplit;   //!
   TBranch        *b_trkPix_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trkPix_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trkPix_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trkPix_Pixel_outlier_locX;   //!
   TBranch        *b_trkPix_Pixel_outlier_locY;   //!
   TBranch        *b_trkPix_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trkPix_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_locX;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_locY;   //!
   TBranch        *b_trkPix_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trkPix_Pixel_outlier_x;   //!
   TBranch        *b_trkPix_Pixel_outlier_y;   //!
   TBranch        *b_trkPix_Pixel_outlier_z;   //!
   TBranch        *b_trkPix_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkPix_Pixel_outlier_chi2;   //!
   TBranch        *b_trkPix_Pixel_outlier_ndof;   //!
   TBranch        *b_trkPix_SCT_outlier_n;   //!
   TBranch        *b_trkPix_SCT_outlier_id;   //!
   TBranch        *b_trkPix_SCT_outlier_detElementId;   //!
   TBranch        *b_trkPix_SCT_outlier_detType;   //!
   TBranch        *b_trkPix_SCT_outlier_bec;   //!
   TBranch        *b_trkPix_SCT_outlier_layer;   //!
   TBranch        *b_trkPix_SCT_outlier_sizePhi;   //!
   TBranch        *b_trkPix_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkPix_SCT_outlier_locX;   //!
   TBranch        *b_trkPix_SCT_outlier_locY;   //!
   TBranch        *b_trkPix_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trkPix_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trkPix_SCT_outlier_err_locX;   //!
   TBranch        *b_trkPix_SCT_outlier_err_locY;   //!
   TBranch        *b_trkPix_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trkPix_SCT_outlier_x;   //!
   TBranch        *b_trkPix_SCT_outlier_y;   //!
   TBranch        *b_trkPix_SCT_outlier_z;   //!
   TBranch        *b_trkPix_SCT_outlier_trkLocX;   //!
   TBranch        *b_trkPix_SCT_outlier_trkLocY;   //!
   TBranch        *b_trkPix_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trkPix_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trkPix_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkPix_SCT_outlier_chi2;   //!
   TBranch        *b_trkPix_SCT_outlier_ndof;   //!
   TBranch        *b_trkPix_TRT_outlier_n;   //!
   TBranch        *b_trkPix_TRT_outlier_id;   //!
   TBranch        *b_trkPix_TRT_outlier_detElementId;   //!
   TBranch        *b_trkPix_TRT_outlier_detType;   //!
   TBranch        *b_trkPix_TRT_outlier_bec;   //!
   TBranch        *b_trkPix_TRT_outlier_layer;   //!
   TBranch        *b_trkPix_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkPix_TRT_outlier_locR;   //!
   TBranch        *b_trkPix_TRT_outlier_err_locR;   //!
   TBranch        *b_trkPix_TRT_outlier_trkLocR;   //!
   TBranch        *b_trkPix_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trkPix_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trkPix_TRT_outlier_TOT;   //!
   TBranch        *b_trkPix_TRT_outlier_highLevel;   //!
   TBranch        *b_trkPix_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trkPix_TRT_outlier_chi2;   //!
   TBranch        *b_trkPix_TRT_outlier_ndof;   //!
   TBranch        *b_trkPix_Pixel_hole_n;   //!
   TBranch        *b_trkPix_Pixel_hole_detElementId;   //!
   TBranch        *b_trkPix_Pixel_hole_bec;   //!
   TBranch        *b_trkPix_Pixel_hole_layer;   //!
   TBranch        *b_trkPix_Pixel_hole_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hole_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trkPix_SCT_hole_n;   //!
   TBranch        *b_trkPix_SCT_hole_detElementId;   //!
   TBranch        *b_trkPix_SCT_hole_bec;   //!
   TBranch        *b_trkPix_SCT_hole_layer;   //!
   TBranch        *b_trkPix_SCT_hole_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hole_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trkPix_TRT_hole_n;   //!
   TBranch        *b_trkPix_TRT_hole_detElementId;   //!
   TBranch        *b_trkPix_TRT_hole_bec;   //!
   TBranch        *b_trkPix_TRT_hole_layer;   //!
   TBranch        *b_trkPix_TRT_hole_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hole_cov_trkLocRPhi;   //!
   TBranch        *b_trkSCT_n;   //!
   TBranch        *b_trkSCT_d0;   //!
   TBranch        *b_trkSCT_z0;   //!
   TBranch        *b_trkSCT_phi;   //!
   TBranch        *b_trkSCT_theta;   //!
   TBranch        *b_trkSCT_qoverp;   //!
   TBranch        *b_trkSCT_pt;   //!
   TBranch        *b_trkSCT_eta;   //!
   TBranch        *b_trkSCT_err_d0;   //!
   TBranch        *b_trkSCT_err_z0;   //!
   TBranch        *b_trkSCT_err_phi;   //!
   TBranch        *b_trkSCT_err_theta;   //!
   TBranch        *b_trkSCT_err_qoverp;   //!
   TBranch        *b_trkSCT_cov_d0_z0;   //!
   TBranch        *b_trkSCT_cov_d0_phi;   //!
   TBranch        *b_trkSCT_cov_d0_theta;   //!
   TBranch        *b_trkSCT_cov_d0_qoverp;   //!
   TBranch        *b_trkSCT_cov_z0_phi;   //!
   TBranch        *b_trkSCT_cov_z0_theta;   //!
   TBranch        *b_trkSCT_cov_z0_qoverp;   //!
   TBranch        *b_trkSCT_cov_phi_theta;   //!
   TBranch        *b_trkSCT_cov_phi_qoverp;   //!
   TBranch        *b_trkSCT_cov_theta_qoverp;   //!
   TBranch        *b_trkSCT_d0_wrtPV;   //!
   TBranch        *b_trkSCT_z0_wrtPV;   //!
   TBranch        *b_trkSCT_phi_wrtPV;   //!
   TBranch        *b_trkSCT_err_d0_wrtPV;   //!
   TBranch        *b_trkSCT_err_z0_wrtPV;   //!
   TBranch        *b_trkSCT_err_phi_wrtPV;   //!
   TBranch        *b_trkSCT_err_theta_wrtPV;   //!
   TBranch        *b_trkSCT_err_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trkSCT_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trkSCT_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trkSCT_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_d0_wrtBS;   //!
   TBranch        *b_trkSCT_z0_wrtBS;   //!
   TBranch        *b_trkSCT_phi_wrtBS;   //!
   TBranch        *b_trkSCT_err_d0_wrtBS;   //!
   TBranch        *b_trkSCT_err_z0_wrtBS;   //!
   TBranch        *b_trkSCT_err_phi_wrtBS;   //!
   TBranch        *b_trkSCT_err_theta_wrtBS;   //!
   TBranch        *b_trkSCT_err_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trkSCT_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trkSCT_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trkSCT_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_d0_wrtBL;   //!
   TBranch        *b_trkSCT_z0_wrtBL;   //!
   TBranch        *b_trkSCT_phi_wrtBL;   //!
   TBranch        *b_trkSCT_d0_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_err_wrtBL;   //!
   TBranch        *b_trkSCT_phi_err_wrtBL;   //!
   TBranch        *b_trkSCT_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_z0_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_phi_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_phi_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_phi_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_chi2;   //!
   TBranch        *b_trkSCT_ndof;   //!
   TBranch        *b_trkSCT_nBLHits;   //!
   TBranch        *b_trkSCT_nPixHits;   //!
   TBranch        *b_trkSCT_nSCTHits;   //!
   TBranch        *b_trkSCT_nTRTHits;   //!
   TBranch        *b_trkSCT_nTRTHighTHits;   //!
   TBranch        *b_trkSCT_nTRTXenonHits;   //!
   TBranch        *b_trkSCT_nPixHoles;   //!
   TBranch        *b_trkSCT_nSCTHoles;   //!
   TBranch        *b_trkSCT_nTRTHoles;   //!
   TBranch        *b_trkSCT_nPixelDeadSensors;   //!
   TBranch        *b_trkSCT_nSCTDeadSensors;   //!
   TBranch        *b_trkSCT_nBLSharedHits;   //!
   TBranch        *b_trkSCT_nPixSharedHits;   //!
   TBranch        *b_trkSCT_nSCTSharedHits;   //!
   TBranch        *b_trkSCT_nBLayerSplitHits;   //!
   TBranch        *b_trkSCT_nPixSplitHits;   //!
   TBranch        *b_trkSCT_nBLayerOutliers;   //!
   TBranch        *b_trkSCT_nPixelOutliers;   //!
   TBranch        *b_trkSCT_nSCTOutliers;   //!
   TBranch        *b_trkSCT_nTRTOutliers;   //!
   TBranch        *b_trkSCT_nTRTHighTOutliers;   //!
   TBranch        *b_trkSCT_expectBLayerHit;   //!
   TBranch        *b_trkSCT_nHits;   //!
   TBranch        *b_trkSCT_nHoles;   //!
   TBranch        *b_trkSCT_hitPattern;   //!
   TBranch        *b_trkSCT_fitter;   //!
   TBranch        *b_trkSCT_patternReco1;   //!
   TBranch        *b_trkSCT_patternReco2;   //!
   TBranch        *b_trkSCT_trackProperties;   //!
   TBranch        *b_trkSCT_particleHypothesis;   //!
   TBranch        *b_trkSCT_blayerPrediction_x;   //!
   TBranch        *b_trkSCT_blayerPrediction_y;   //!
   TBranch        *b_trkSCT_blayerPrediction_z;   //!
   TBranch        *b_trkSCT_blayerPrediction_locX;   //!
   TBranch        *b_trkSCT_blayerPrediction_locY;   //!
   TBranch        *b_trkSCT_blayerPrediction_err_locX;   //!
   TBranch        *b_trkSCT_blayerPrediction_err_locY;   //!
   TBranch        *b_trkSCT_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trkSCT_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trkSCT_blayerPrediction_detElementId;   //!
   TBranch        *b_trkSCT_blayerPrediction_row;   //!
   TBranch        *b_trkSCT_blayerPrediction_col;   //!
   TBranch        *b_trkSCT_blayerPrediction_type;   //!
   TBranch        *b_trkSCT_Pixel_hit_n;   //!
   TBranch        *b_trkSCT_Pixel_hit_id;   //!
   TBranch        *b_trkSCT_Pixel_hit_detElementId;   //!
   TBranch        *b_trkSCT_Pixel_hit_detType;   //!
   TBranch        *b_trkSCT_Pixel_hit_bec;   //!
   TBranch        *b_trkSCT_Pixel_hit_layer;   //!
   TBranch        *b_trkSCT_Pixel_hit_charge;   //!
   TBranch        *b_trkSCT_Pixel_hit_sizePhi;   //!
   TBranch        *b_trkSCT_Pixel_hit_sizeZ;   //!
   TBranch        *b_trkSCT_Pixel_hit_size;   //!
   TBranch        *b_trkSCT_Pixel_hit_isFake;   //!
   TBranch        *b_trkSCT_Pixel_hit_isGanged;   //!
   TBranch        *b_trkSCT_Pixel_hit_isSplit;   //!
   TBranch        *b_trkSCT_Pixel_hit_splitProb1;   //!
   TBranch        *b_trkSCT_Pixel_hit_splitProb2;   //!
   TBranch        *b_trkSCT_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trkSCT_Pixel_hit_locX;   //!
   TBranch        *b_trkSCT_Pixel_hit_locY;   //!
   TBranch        *b_trkSCT_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trkSCT_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_locX;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_locY;   //!
   TBranch        *b_trkSCT_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trkSCT_Pixel_hit_x;   //!
   TBranch        *b_trkSCT_Pixel_hit_y;   //!
   TBranch        *b_trkSCT_Pixel_hit_z;   //!
   TBranch        *b_trkSCT_Pixel_hit_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hit_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_Pixel_hit_chi2;   //!
   TBranch        *b_trkSCT_Pixel_hit_ndof;   //!
   TBranch        *b_trkSCT_SCT_hit_n;   //!
   TBranch        *b_trkSCT_SCT_hit_id;   //!
   TBranch        *b_trkSCT_SCT_hit_detElementId;   //!
   TBranch        *b_trkSCT_SCT_hit_detType;   //!
   TBranch        *b_trkSCT_SCT_hit_bec;   //!
   TBranch        *b_trkSCT_SCT_hit_layer;   //!
   TBranch        *b_trkSCT_SCT_hit_sizePhi;   //!
   TBranch        *b_trkSCT_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trkSCT_SCT_hit_locX;   //!
   TBranch        *b_trkSCT_SCT_hit_locY;   //!
   TBranch        *b_trkSCT_SCT_hit_incidencePhi;   //!
   TBranch        *b_trkSCT_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trkSCT_SCT_hit_err_locX;   //!
   TBranch        *b_trkSCT_SCT_hit_err_locY;   //!
   TBranch        *b_trkSCT_SCT_hit_cov_locXY;   //!
   TBranch        *b_trkSCT_SCT_hit_x;   //!
   TBranch        *b_trkSCT_SCT_hit_y;   //!
   TBranch        *b_trkSCT_SCT_hit_z;   //!
   TBranch        *b_trkSCT_SCT_hit_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hit_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_SCT_hit_chi2;   //!
   TBranch        *b_trkSCT_SCT_hit_ndof;   //!
   TBranch        *b_trkSCT_TRT_hit_n;   //!
   TBranch        *b_trkSCT_TRT_hit_id;   //!
   TBranch        *b_trkSCT_TRT_hit_detElementId;   //!
   TBranch        *b_trkSCT_TRT_hit_detType;   //!
   TBranch        *b_trkSCT_TRT_hit_bec;   //!
   TBranch        *b_trkSCT_TRT_hit_layer;   //!
   TBranch        *b_trkSCT_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trkSCT_TRT_hit_locR;   //!
   TBranch        *b_trkSCT_TRT_hit_err_locR;   //!
   TBranch        *b_trkSCT_TRT_hit_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trkSCT_TRT_hit_TOT;   //!
   TBranch        *b_trkSCT_TRT_hit_highLevel;   //!
   TBranch        *b_trkSCT_TRT_hit_trailingEdge;   //!
   TBranch        *b_trkSCT_TRT_hit_chi2;   //!
   TBranch        *b_trkSCT_TRT_hit_ndof;   //!
   TBranch        *b_trkSCT_Pixel_outlier_n;   //!
   TBranch        *b_trkSCT_Pixel_outlier_id;   //!
   TBranch        *b_trkSCT_Pixel_outlier_detElementId;   //!
   TBranch        *b_trkSCT_Pixel_outlier_detType;   //!
   TBranch        *b_trkSCT_Pixel_outlier_bec;   //!
   TBranch        *b_trkSCT_Pixel_outlier_layer;   //!
   TBranch        *b_trkSCT_Pixel_outlier_charge;   //!
   TBranch        *b_trkSCT_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trkSCT_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trkSCT_Pixel_outlier_size;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isFake;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isGanged;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isSplit;   //!
   TBranch        *b_trkSCT_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trkSCT_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trkSCT_Pixel_outlier_locX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_locY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trkSCT_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_locX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_locY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_x;   //!
   TBranch        *b_trkSCT_Pixel_outlier_y;   //!
   TBranch        *b_trkSCT_Pixel_outlier_z;   //!
   TBranch        *b_trkSCT_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_chi2;   //!
   TBranch        *b_trkSCT_Pixel_outlier_ndof;   //!
   TBranch        *b_trkSCT_SCT_outlier_n;   //!
   TBranch        *b_trkSCT_SCT_outlier_id;   //!
   TBranch        *b_trkSCT_SCT_outlier_detElementId;   //!
   TBranch        *b_trkSCT_SCT_outlier_detType;   //!
   TBranch        *b_trkSCT_SCT_outlier_bec;   //!
   TBranch        *b_trkSCT_SCT_outlier_layer;   //!
   TBranch        *b_trkSCT_SCT_outlier_sizePhi;   //!
   TBranch        *b_trkSCT_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkSCT_SCT_outlier_locX;   //!
   TBranch        *b_trkSCT_SCT_outlier_locY;   //!
   TBranch        *b_trkSCT_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trkSCT_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_locX;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_locY;   //!
   TBranch        *b_trkSCT_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trkSCT_SCT_outlier_x;   //!
   TBranch        *b_trkSCT_SCT_outlier_y;   //!
   TBranch        *b_trkSCT_SCT_outlier_z;   //!
   TBranch        *b_trkSCT_SCT_outlier_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_outlier_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_SCT_outlier_chi2;   //!
   TBranch        *b_trkSCT_SCT_outlier_ndof;   //!
   TBranch        *b_trkSCT_TRT_outlier_n;   //!
   TBranch        *b_trkSCT_TRT_outlier_id;   //!
   TBranch        *b_trkSCT_TRT_outlier_detElementId;   //!
   TBranch        *b_trkSCT_TRT_outlier_detType;   //!
   TBranch        *b_trkSCT_TRT_outlier_bec;   //!
   TBranch        *b_trkSCT_TRT_outlier_layer;   //!
   TBranch        *b_trkSCT_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkSCT_TRT_outlier_locR;   //!
   TBranch        *b_trkSCT_TRT_outlier_err_locR;   //!
   TBranch        *b_trkSCT_TRT_outlier_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trkSCT_TRT_outlier_TOT;   //!
   TBranch        *b_trkSCT_TRT_outlier_highLevel;   //!
   TBranch        *b_trkSCT_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trkSCT_TRT_outlier_chi2;   //!
   TBranch        *b_trkSCT_TRT_outlier_ndof;   //!
   TBranch        *b_trkSCT_Pixel_hole_n;   //!
   TBranch        *b_trkSCT_Pixel_hole_detElementId;   //!
   TBranch        *b_trkSCT_Pixel_hole_bec;   //!
   TBranch        *b_trkSCT_Pixel_hole_layer;   //!
   TBranch        *b_trkSCT_Pixel_hole_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hole_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_SCT_hole_n;   //!
   TBranch        *b_trkSCT_SCT_hole_detElementId;   //!
   TBranch        *b_trkSCT_SCT_hole_bec;   //!
   TBranch        *b_trkSCT_SCT_hole_layer;   //!
   TBranch        *b_trkSCT_SCT_hole_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hole_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_TRT_hole_n;   //!
   TBranch        *b_trkSCT_TRT_hole_detElementId;   //!
   TBranch        *b_trkSCT_TRT_hole_bec;   //!
   TBranch        *b_trkSCT_TRT_hole_layer;   //!
   TBranch        *b_trkSCT_TRT_hole_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hole_cov_trkLocRPhi;   //!
   TBranch        *b_trkTRT_n;   //!
   TBranch        *b_trkTRT_d0;   //!
   TBranch        *b_trkTRT_z0;   //!
   TBranch        *b_trkTRT_phi;   //!
   TBranch        *b_trkTRT_theta;   //!
   TBranch        *b_trkTRT_qoverp;   //!
   TBranch        *b_trkTRT_pt;   //!
   TBranch        *b_trkTRT_eta;   //!
   TBranch        *b_trkTRT_err_d0;   //!
   TBranch        *b_trkTRT_err_z0;   //!
   TBranch        *b_trkTRT_err_phi;   //!
   TBranch        *b_trkTRT_err_theta;   //!
   TBranch        *b_trkTRT_err_qoverp;   //!
   TBranch        *b_trkTRT_cov_d0_z0;   //!
   TBranch        *b_trkTRT_cov_d0_phi;   //!
   TBranch        *b_trkTRT_cov_d0_theta;   //!
   TBranch        *b_trkTRT_cov_d0_qoverp;   //!
   TBranch        *b_trkTRT_cov_z0_phi;   //!
   TBranch        *b_trkTRT_cov_z0_theta;   //!
   TBranch        *b_trkTRT_cov_z0_qoverp;   //!
   TBranch        *b_trkTRT_cov_phi_theta;   //!
   TBranch        *b_trkTRT_cov_phi_qoverp;   //!
   TBranch        *b_trkTRT_cov_theta_qoverp;   //!
   TBranch        *b_trkTRT_d0_wrtPV;   //!
   TBranch        *b_trkTRT_z0_wrtPV;   //!
   TBranch        *b_trkTRT_phi_wrtPV;   //!
   TBranch        *b_trkTRT_err_d0_wrtPV;   //!
   TBranch        *b_trkTRT_err_z0_wrtPV;   //!
   TBranch        *b_trkTRT_err_phi_wrtPV;   //!
   TBranch        *b_trkTRT_err_theta_wrtPV;   //!
   TBranch        *b_trkTRT_err_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trkTRT_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trkTRT_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trkTRT_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_d0_wrtBS;   //!
   TBranch        *b_trkTRT_z0_wrtBS;   //!
   TBranch        *b_trkTRT_phi_wrtBS;   //!
   TBranch        *b_trkTRT_err_d0_wrtBS;   //!
   TBranch        *b_trkTRT_err_z0_wrtBS;   //!
   TBranch        *b_trkTRT_err_phi_wrtBS;   //!
   TBranch        *b_trkTRT_err_theta_wrtBS;   //!
   TBranch        *b_trkTRT_err_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trkTRT_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trkTRT_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trkTRT_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_d0_wrtBL;   //!
   TBranch        *b_trkTRT_z0_wrtBL;   //!
   TBranch        *b_trkTRT_phi_wrtBL;   //!
   TBranch        *b_trkTRT_d0_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_err_wrtBL;   //!
   TBranch        *b_trkTRT_phi_err_wrtBL;   //!
   TBranch        *b_trkTRT_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_z0_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_phi_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_phi_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_phi_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_chi2;   //!
   TBranch        *b_trkTRT_ndof;   //!
   TBranch        *b_trkTRT_nBLHits;   //!
   TBranch        *b_trkTRT_nPixHits;   //!
   TBranch        *b_trkTRT_nSCTHits;   //!
   TBranch        *b_trkTRT_nTRTHits;   //!
   TBranch        *b_trkTRT_nTRTHighTHits;   //!
   TBranch        *b_trkTRT_nTRTXenonHits;   //!
   TBranch        *b_trkTRT_nPixHoles;   //!
   TBranch        *b_trkTRT_nSCTHoles;   //!
   TBranch        *b_trkTRT_nTRTHoles;   //!
   TBranch        *b_trkTRT_nPixelDeadSensors;   //!
   TBranch        *b_trkTRT_nSCTDeadSensors;   //!
   TBranch        *b_trkTRT_nBLSharedHits;   //!
   TBranch        *b_trkTRT_nPixSharedHits;   //!
   TBranch        *b_trkTRT_nSCTSharedHits;   //!
   TBranch        *b_trkTRT_nBLayerSplitHits;   //!
   TBranch        *b_trkTRT_nPixSplitHits;   //!
   TBranch        *b_trkTRT_nBLayerOutliers;   //!
   TBranch        *b_trkTRT_nPixelOutliers;   //!
   TBranch        *b_trkTRT_nSCTOutliers;   //!
   TBranch        *b_trkTRT_nTRTOutliers;   //!
   TBranch        *b_trkTRT_nTRTHighTOutliers;   //!
   TBranch        *b_trkTRT_expectBLayerHit;   //!
   TBranch        *b_trkTRT_nHits;   //!
   TBranch        *b_trkTRT_nHoles;   //!
   TBranch        *b_trkTRT_hitPattern;   //!
   TBranch        *b_trkTRT_fitter;   //!
   TBranch        *b_trkTRT_patternReco1;   //!
   TBranch        *b_trkTRT_patternReco2;   //!
   TBranch        *b_trkTRT_trackProperties;   //!
   TBranch        *b_trkTRT_particleHypothesis;   //!
   TBranch        *b_trkTRT_blayerPrediction_x;   //!
   TBranch        *b_trkTRT_blayerPrediction_y;   //!
   TBranch        *b_trkTRT_blayerPrediction_z;   //!
   TBranch        *b_trkTRT_blayerPrediction_locX;   //!
   TBranch        *b_trkTRT_blayerPrediction_locY;   //!
   TBranch        *b_trkTRT_blayerPrediction_err_locX;   //!
   TBranch        *b_trkTRT_blayerPrediction_err_locY;   //!
   TBranch        *b_trkTRT_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trkTRT_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trkTRT_blayerPrediction_detElementId;   //!
   TBranch        *b_trkTRT_blayerPrediction_row;   //!
   TBranch        *b_trkTRT_blayerPrediction_col;   //!
   TBranch        *b_trkTRT_blayerPrediction_type;   //!
   TBranch        *b_trkTRT_Pixel_hit_n;   //!
   TBranch        *b_trkTRT_Pixel_hit_id;   //!
   TBranch        *b_trkTRT_Pixel_hit_detElementId;   //!
   TBranch        *b_trkTRT_Pixel_hit_detType;   //!
   TBranch        *b_trkTRT_Pixel_hit_bec;   //!
   TBranch        *b_trkTRT_Pixel_hit_layer;   //!
   TBranch        *b_trkTRT_Pixel_hit_charge;   //!
   TBranch        *b_trkTRT_Pixel_hit_sizePhi;   //!
   TBranch        *b_trkTRT_Pixel_hit_sizeZ;   //!
   TBranch        *b_trkTRT_Pixel_hit_size;   //!
   TBranch        *b_trkTRT_Pixel_hit_isFake;   //!
   TBranch        *b_trkTRT_Pixel_hit_isGanged;   //!
   TBranch        *b_trkTRT_Pixel_hit_isSplit;   //!
   TBranch        *b_trkTRT_Pixel_hit_splitProb1;   //!
   TBranch        *b_trkTRT_Pixel_hit_splitProb2;   //!
   TBranch        *b_trkTRT_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trkTRT_Pixel_hit_locX;   //!
   TBranch        *b_trkTRT_Pixel_hit_locY;   //!
   TBranch        *b_trkTRT_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trkTRT_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_locX;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_locY;   //!
   TBranch        *b_trkTRT_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trkTRT_Pixel_hit_x;   //!
   TBranch        *b_trkTRT_Pixel_hit_y;   //!
   TBranch        *b_trkTRT_Pixel_hit_z;   //!
   TBranch        *b_trkTRT_Pixel_hit_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hit_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_Pixel_hit_chi2;   //!
   TBranch        *b_trkTRT_Pixel_hit_ndof;   //!
   TBranch        *b_trkTRT_SCT_hit_n;   //!
   TBranch        *b_trkTRT_SCT_hit_id;   //!
   TBranch        *b_trkTRT_SCT_hit_detElementId;   //!
   TBranch        *b_trkTRT_SCT_hit_detType;   //!
   TBranch        *b_trkTRT_SCT_hit_bec;   //!
   TBranch        *b_trkTRT_SCT_hit_layer;   //!
   TBranch        *b_trkTRT_SCT_hit_sizePhi;   //!
   TBranch        *b_trkTRT_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trkTRT_SCT_hit_locX;   //!
   TBranch        *b_trkTRT_SCT_hit_locY;   //!
   TBranch        *b_trkTRT_SCT_hit_incidencePhi;   //!
   TBranch        *b_trkTRT_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trkTRT_SCT_hit_err_locX;   //!
   TBranch        *b_trkTRT_SCT_hit_err_locY;   //!
   TBranch        *b_trkTRT_SCT_hit_cov_locXY;   //!
   TBranch        *b_trkTRT_SCT_hit_x;   //!
   TBranch        *b_trkTRT_SCT_hit_y;   //!
   TBranch        *b_trkTRT_SCT_hit_z;   //!
   TBranch        *b_trkTRT_SCT_hit_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hit_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_SCT_hit_chi2;   //!
   TBranch        *b_trkTRT_SCT_hit_ndof;   //!
   TBranch        *b_trkTRT_TRT_hit_n;   //!
   TBranch        *b_trkTRT_TRT_hit_id;   //!
   TBranch        *b_trkTRT_TRT_hit_detElementId;   //!
   TBranch        *b_trkTRT_TRT_hit_detType;   //!
   TBranch        *b_trkTRT_TRT_hit_bec;   //!
   TBranch        *b_trkTRT_TRT_hit_layer;   //!
   TBranch        *b_trkTRT_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trkTRT_TRT_hit_locR;   //!
   TBranch        *b_trkTRT_TRT_hit_err_locR;   //!
   TBranch        *b_trkTRT_TRT_hit_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trkTRT_TRT_hit_TOT;   //!
   TBranch        *b_trkTRT_TRT_hit_highLevel;   //!
   TBranch        *b_trkTRT_TRT_hit_trailingEdge;   //!
   TBranch        *b_trkTRT_TRT_hit_chi2;   //!
   TBranch        *b_trkTRT_TRT_hit_ndof;   //!
   TBranch        *b_trkTRT_Pixel_outlier_n;   //!
   TBranch        *b_trkTRT_Pixel_outlier_id;   //!
   TBranch        *b_trkTRT_Pixel_outlier_detElementId;   //!
   TBranch        *b_trkTRT_Pixel_outlier_detType;   //!
   TBranch        *b_trkTRT_Pixel_outlier_bec;   //!
   TBranch        *b_trkTRT_Pixel_outlier_layer;   //!
   TBranch        *b_trkTRT_Pixel_outlier_charge;   //!
   TBranch        *b_trkTRT_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trkTRT_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trkTRT_Pixel_outlier_size;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isFake;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isGanged;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isSplit;   //!
   TBranch        *b_trkTRT_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trkTRT_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trkTRT_Pixel_outlier_locX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_locY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trkTRT_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_locX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_locY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_x;   //!
   TBranch        *b_trkTRT_Pixel_outlier_y;   //!
   TBranch        *b_trkTRT_Pixel_outlier_z;   //!
   TBranch        *b_trkTRT_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_chi2;   //!
   TBranch        *b_trkTRT_Pixel_outlier_ndof;   //!
   TBranch        *b_trkTRT_SCT_outlier_n;   //!
   TBranch        *b_trkTRT_SCT_outlier_id;   //!
   TBranch        *b_trkTRT_SCT_outlier_detElementId;   //!
   TBranch        *b_trkTRT_SCT_outlier_detType;   //!
   TBranch        *b_trkTRT_SCT_outlier_bec;   //!
   TBranch        *b_trkTRT_SCT_outlier_layer;   //!
   TBranch        *b_trkTRT_SCT_outlier_sizePhi;   //!
   TBranch        *b_trkTRT_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkTRT_SCT_outlier_locX;   //!
   TBranch        *b_trkTRT_SCT_outlier_locY;   //!
   TBranch        *b_trkTRT_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trkTRT_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_locX;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_locY;   //!
   TBranch        *b_trkTRT_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trkTRT_SCT_outlier_x;   //!
   TBranch        *b_trkTRT_SCT_outlier_y;   //!
   TBranch        *b_trkTRT_SCT_outlier_z;   //!
   TBranch        *b_trkTRT_SCT_outlier_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_outlier_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_SCT_outlier_chi2;   //!
   TBranch        *b_trkTRT_SCT_outlier_ndof;   //!
   TBranch        *b_trkTRT_TRT_outlier_n;   //!
   TBranch        *b_trkTRT_TRT_outlier_id;   //!
   TBranch        *b_trkTRT_TRT_outlier_detElementId;   //!
   TBranch        *b_trkTRT_TRT_outlier_detType;   //!
   TBranch        *b_trkTRT_TRT_outlier_bec;   //!
   TBranch        *b_trkTRT_TRT_outlier_layer;   //!
   TBranch        *b_trkTRT_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkTRT_TRT_outlier_locR;   //!
   TBranch        *b_trkTRT_TRT_outlier_err_locR;   //!
   TBranch        *b_trkTRT_TRT_outlier_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trkTRT_TRT_outlier_TOT;   //!
   TBranch        *b_trkTRT_TRT_outlier_highLevel;   //!
   TBranch        *b_trkTRT_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trkTRT_TRT_outlier_chi2;   //!
   TBranch        *b_trkTRT_TRT_outlier_ndof;   //!
   TBranch        *b_trkTRT_Pixel_hole_n;   //!
   TBranch        *b_trkTRT_Pixel_hole_detElementId;   //!
   TBranch        *b_trkTRT_Pixel_hole_bec;   //!
   TBranch        *b_trkTRT_Pixel_hole_layer;   //!
   TBranch        *b_trkTRT_Pixel_hole_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hole_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_SCT_hole_n;   //!
   TBranch        *b_trkTRT_SCT_hole_detElementId;   //!
   TBranch        *b_trkTRT_SCT_hole_bec;   //!
   TBranch        *b_trkTRT_SCT_hole_layer;   //!
   TBranch        *b_trkTRT_SCT_hole_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hole_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_TRT_hole_n;   //!
   TBranch        *b_trkTRT_TRT_hole_detElementId;   //!
   TBranch        *b_trkTRT_TRT_hole_bec;   //!
   TBranch        *b_trkTRT_TRT_hole_layer;   //!
   TBranch        *b_trkTRT_TRT_hole_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hole_cov_trkLocRPhi;   //!
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
   TBranch        *b_AntiKt4LCTopo_n;   //!
   TBranch        *b_AntiKt4LCTopo_E;   //!
   TBranch        *b_AntiKt4LCTopo_pt;   //!
   TBranch        *b_AntiKt4LCTopo_m;   //!
   TBranch        *b_AntiKt4LCTopo_eta;   //!
   TBranch        *b_AntiKt4LCTopo_phi;   //!
   TBranch        *b_AntiKt4LCTopo_EtaOrigin;   //!
   TBranch        *b_AntiKt4LCTopo_PhiOrigin;   //!
   TBranch        *b_AntiKt4LCTopo_MOrigin;   //!
   TBranch        *b_AntiKt4LCTopo_EtaOriginEM;   //!
   TBranch        *b_AntiKt4LCTopo_PhiOriginEM;   //!
   TBranch        *b_AntiKt4LCTopo_MOriginEM;   //!
   TBranch        *b_AntiKt4LCTopo_WIDTH;   //!
   TBranch        *b_AntiKt4LCTopo_n90;   //!
   TBranch        *b_AntiKt4LCTopo_Timing;   //!
   TBranch        *b_AntiKt4LCTopo_LArQuality;   //!
   TBranch        *b_AntiKt4LCTopo_nTrk;   //!
   TBranch        *b_AntiKt4LCTopo_sumPtTrk;   //!
   TBranch        *b_AntiKt4LCTopo_OriginIndex;   //!
   TBranch        *b_AntiKt4LCTopo_HECQuality;   //!
   TBranch        *b_AntiKt4LCTopo_NegativeE;   //!
   TBranch        *b_AntiKt4LCTopo_AverageLArQF;   //!
   TBranch        *b_AntiKt4LCTopo_YFlip12;   //!
   TBranch        *b_AntiKt4LCTopo_YFlip23;   //!
   TBranch        *b_AntiKt4LCTopo_BCH_CORR_CELL;   //!
   TBranch        *b_AntiKt4LCTopo_BCH_CORR_DOTX;   //!
   TBranch        *b_AntiKt4LCTopo_BCH_CORR_JET;   //!
   TBranch        *b_AntiKt4LCTopo_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_AntiKt4LCTopo_ENG_BAD_CELLS;   //!
   TBranch        *b_AntiKt4LCTopo_N_BAD_CELLS;   //!
   TBranch        *b_AntiKt4LCTopo_N_BAD_CELLS_CORR;   //!
   TBranch        *b_AntiKt4LCTopo_BAD_CELLS_CORR_E;   //!
   TBranch        *b_AntiKt4LCTopo_NumTowers;   //!
   TBranch        *b_AntiKt4LCTopo_ootFracCells5;   //!
   TBranch        *b_AntiKt4LCTopo_ootFracCells10;   //!
   TBranch        *b_AntiKt4LCTopo_ootFracClusters5;   //!
   TBranch        *b_AntiKt4LCTopo_ootFracClusters10;   //!
   TBranch        *b_AntiKt4LCTopo_SamplingMax;   //!
   TBranch        *b_AntiKt4LCTopo_fracSamplingMax;   //!
   TBranch        *b_AntiKt4LCTopo_hecf;   //!
   TBranch        *b_AntiKt4LCTopo_tgap3f;   //!
   TBranch        *b_AntiKt4LCTopo_isUgly;   //!
   TBranch        *b_AntiKt4LCTopo_isBadLooseMinus;   //!
   TBranch        *b_AntiKt4LCTopo_isBadLoose;   //!
   TBranch        *b_AntiKt4LCTopo_isBadMedium;   //!
   TBranch        *b_AntiKt4LCTopo_isBadTight;   //!
   TBranch        *b_AntiKt4LCTopo_emfrac;   //!
   TBranch        *b_AntiKt4LCTopo_Offset;   //!
   TBranch        *b_AntiKt4LCTopo_EMJES;   //!
   TBranch        *b_AntiKt4LCTopo_EMJES_EtaCorr;   //!
   TBranch        *b_AntiKt4LCTopo_EMJESnooffset;   //!
   TBranch        *b_AntiKt4LCTopo_GCWJES;   //!
   TBranch        *b_AntiKt4LCTopo_GCWJES_EtaCorr;   //!
   TBranch        *b_AntiKt4LCTopo_CB;   //!
   TBranch        *b_AntiKt4LCTopo_LCJES;   //!
   TBranch        *b_AntiKt4LCTopo_emscale_E;   //!
   TBranch        *b_AntiKt4LCTopo_emscale_pt;   //!
   TBranch        *b_AntiKt4LCTopo_emscale_m;   //!
   TBranch        *b_AntiKt4LCTopo_emscale_eta;   //!
   TBranch        *b_AntiKt4LCTopo_emscale_phi;   //!
   TBranch        *b_AntiKt4LCTopo_jvtx_x;   //!
   TBranch        *b_AntiKt4LCTopo_jvtx_y;   //!
   TBranch        *b_AntiKt4LCTopo_jvtx_z;   //!
   TBranch        *b_AntiKt4LCTopo_jvtxf;   //!
   TBranch        *b_AntiKt4LCTopo_GSCFactorF;   //!
   TBranch        *b_AntiKt4LCTopo_WidthFraction;   //!
   TBranch        *b_AntiKt4LCTopo_e_PreSamplerB;   //!
   TBranch        *b_AntiKt4LCTopo_e_EMB1;   //!
   TBranch        *b_AntiKt4LCTopo_e_EMB2;   //!
   TBranch        *b_AntiKt4LCTopo_e_EMB3;   //!
   TBranch        *b_AntiKt4LCTopo_e_PreSamplerE;   //!
   TBranch        *b_AntiKt4LCTopo_e_EME1;   //!
   TBranch        *b_AntiKt4LCTopo_e_EME2;   //!
   TBranch        *b_AntiKt4LCTopo_e_EME3;   //!
   TBranch        *b_AntiKt4LCTopo_e_HEC0;   //!
   TBranch        *b_AntiKt4LCTopo_e_HEC1;   //!
   TBranch        *b_AntiKt4LCTopo_e_HEC2;   //!
   TBranch        *b_AntiKt4LCTopo_e_HEC3;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileBar0;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileBar1;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileBar2;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileGap1;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileGap2;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileGap3;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileExt0;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileExt1;   //!
   TBranch        *b_AntiKt4LCTopo_e_TileExt2;   //!
   TBranch        *b_AntiKt4LCTopo_e_FCAL0;   //!
   TBranch        *b_AntiKt4LCTopo_e_FCAL1;   //!
   TBranch        *b_AntiKt4LCTopo_e_FCAL2;   //!
   TBranch        *b_AntiKt4LCTopo_shapeBins;   //!
   TBranch        *b_AntiKt4LCTopo_Nconst;   //!
   TBranch        *b_AntiKt4LCTopo_ptconst_default;   //!
   TBranch        *b_AntiKt4LCTopo_econst_default;   //!
   TBranch        *b_AntiKt4LCTopo_etaconst_default;   //!
   TBranch        *b_AntiKt4LCTopo_phiconst_default;   //!
   TBranch        *b_AntiKt4LCTopo_weightconst_default;   //!
   TBranch        *b_AntiKt4LCTopo_constscale_E;   //!
   TBranch        *b_AntiKt4LCTopo_constscale_pt;   //!
   TBranch        *b_AntiKt4LCTopo_constscale_m;   //!
   TBranch        *b_AntiKt4LCTopo_constscale_eta;   //!
   TBranch        *b_AntiKt4LCTopo_constscale_phi;   //!
   TBranch        *b_AntiKt4LCTopo_el_dr;   //!
   TBranch        *b_AntiKt4LCTopo_el_matched;   //!
   TBranch        *b_AntiKt4LCTopo_mu_dr;   //!
   TBranch        *b_AntiKt4LCTopo_mu_matched;   //!
   TBranch        *b_AntiKt4LCTopo_L1_dr;   //!
   TBranch        *b_AntiKt4LCTopo_L1_matched;   //!
   TBranch        *b_AntiKt4LCTopo_L2_dr;   //!
   TBranch        *b_AntiKt4LCTopo_L2_matched;   //!
   TBranch        *b_AntiKt4LCTopo_EF_dr;   //!
   TBranch        *b_AntiKt4LCTopo_EF_matched;   //!
   TBranch        *b_AntiKt6Tower_n;   //!
   TBranch        *b_AntiKt6Tower_E;   //!
   TBranch        *b_AntiKt6Tower_pt;   //!
   TBranch        *b_AntiKt6Tower_m;   //!
   TBranch        *b_AntiKt6Tower_eta;   //!
   TBranch        *b_AntiKt6Tower_phi;   //!
   TBranch        *b_AntiKt6Tower_EtaOrigin;   //!
   TBranch        *b_AntiKt6Tower_PhiOrigin;   //!
   TBranch        *b_AntiKt6Tower_MOrigin;   //!
   TBranch        *b_AntiKt6Tower_EtaOriginEM;   //!
   TBranch        *b_AntiKt6Tower_PhiOriginEM;   //!
   TBranch        *b_AntiKt6Tower_MOriginEM;   //!
   TBranch        *b_AntiKt6Tower_WIDTH;   //!
   TBranch        *b_AntiKt6Tower_n90;   //!
   TBranch        *b_AntiKt6Tower_Timing;   //!
   TBranch        *b_AntiKt6Tower_LArQuality;   //!
   TBranch        *b_AntiKt6Tower_nTrk;   //!
   TBranch        *b_AntiKt6Tower_sumPtTrk;   //!
   TBranch        *b_AntiKt6Tower_OriginIndex;   //!
   TBranch        *b_AntiKt6Tower_HECQuality;   //!
   TBranch        *b_AntiKt6Tower_NegativeE;   //!
   TBranch        *b_AntiKt6Tower_AverageLArQF;   //!
   TBranch        *b_AntiKt6Tower_YFlip12;   //!
   TBranch        *b_AntiKt6Tower_YFlip23;   //!
   TBranch        *b_AntiKt6Tower_BCH_CORR_CELL;   //!
   TBranch        *b_AntiKt6Tower_BCH_CORR_DOTX;   //!
   TBranch        *b_AntiKt6Tower_BCH_CORR_JET;   //!
   TBranch        *b_AntiKt6Tower_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_AntiKt6Tower_ENG_BAD_CELLS;   //!
   TBranch        *b_AntiKt6Tower_N_BAD_CELLS;   //!
   TBranch        *b_AntiKt6Tower_N_BAD_CELLS_CORR;   //!
   TBranch        *b_AntiKt6Tower_BAD_CELLS_CORR_E;   //!
   TBranch        *b_AntiKt6Tower_NumTowers;   //!
   TBranch        *b_AntiKt6Tower_ootFracCells5;   //!
   TBranch        *b_AntiKt6Tower_ootFracCells10;   //!
   TBranch        *b_AntiKt6Tower_ootFracClusters5;   //!
   TBranch        *b_AntiKt6Tower_ootFracClusters10;   //!
   TBranch        *b_AntiKt6Tower_SamplingMax;   //!
   TBranch        *b_AntiKt6Tower_fracSamplingMax;   //!
   TBranch        *b_AntiKt6Tower_hecf;   //!
   TBranch        *b_AntiKt6Tower_tgap3f;   //!
   TBranch        *b_AntiKt6Tower_isUgly;   //!
   TBranch        *b_AntiKt6Tower_isBadLooseMinus;   //!
   TBranch        *b_AntiKt6Tower_isBadLoose;   //!
   TBranch        *b_AntiKt6Tower_isBadMedium;   //!
   TBranch        *b_AntiKt6Tower_isBadTight;   //!
   TBranch        *b_AntiKt6Tower_emfrac;   //!
   TBranch        *b_AntiKt6Tower_Offset;   //!
   TBranch        *b_AntiKt6Tower_EMJES;   //!
   TBranch        *b_AntiKt6Tower_EMJES_EtaCorr;   //!
   TBranch        *b_AntiKt6Tower_EMJESnooffset;   //!
   TBranch        *b_AntiKt6Tower_GCWJES;   //!
   TBranch        *b_AntiKt6Tower_GCWJES_EtaCorr;   //!
   TBranch        *b_AntiKt6Tower_CB;   //!
   TBranch        *b_AntiKt6Tower_LCJES;   //!
   TBranch        *b_AntiKt6Tower_emscale_E;   //!
   TBranch        *b_AntiKt6Tower_emscale_pt;   //!
   TBranch        *b_AntiKt6Tower_emscale_m;   //!
   TBranch        *b_AntiKt6Tower_emscale_eta;   //!
   TBranch        *b_AntiKt6Tower_emscale_phi;   //!
   TBranch        *b_AntiKt6Tower_jvtx_x;   //!
   TBranch        *b_AntiKt6Tower_jvtx_y;   //!
   TBranch        *b_AntiKt6Tower_jvtx_z;   //!
   TBranch        *b_AntiKt6Tower_jvtxf;   //!
   TBranch        *b_AntiKt6Tower_GSCFactorF;   //!
   TBranch        *b_AntiKt6Tower_WidthFraction;   //!
   TBranch        *b_AntiKt6Tower_e_PreSamplerB;   //!
   TBranch        *b_AntiKt6Tower_e_EMB1;   //!
   TBranch        *b_AntiKt6Tower_e_EMB2;   //!
   TBranch        *b_AntiKt6Tower_e_EMB3;   //!
   TBranch        *b_AntiKt6Tower_e_PreSamplerE;   //!
   TBranch        *b_AntiKt6Tower_e_EME1;   //!
   TBranch        *b_AntiKt6Tower_e_EME2;   //!
   TBranch        *b_AntiKt6Tower_e_EME3;   //!
   TBranch        *b_AntiKt6Tower_e_HEC0;   //!
   TBranch        *b_AntiKt6Tower_e_HEC1;   //!
   TBranch        *b_AntiKt6Tower_e_HEC2;   //!
   TBranch        *b_AntiKt6Tower_e_HEC3;   //!
   TBranch        *b_AntiKt6Tower_e_TileBar0;   //!
   TBranch        *b_AntiKt6Tower_e_TileBar1;   //!
   TBranch        *b_AntiKt6Tower_e_TileBar2;   //!
   TBranch        *b_AntiKt6Tower_e_TileGap1;   //!
   TBranch        *b_AntiKt6Tower_e_TileGap2;   //!
   TBranch        *b_AntiKt6Tower_e_TileGap3;   //!
   TBranch        *b_AntiKt6Tower_e_TileExt0;   //!
   TBranch        *b_AntiKt6Tower_e_TileExt1;   //!
   TBranch        *b_AntiKt6Tower_e_TileExt2;   //!
   TBranch        *b_AntiKt6Tower_e_FCAL0;   //!
   TBranch        *b_AntiKt6Tower_e_FCAL1;   //!
   TBranch        *b_AntiKt6Tower_e_FCAL2;   //!
   TBranch        *b_AntiKt6Tower_shapeBins;   //!
   TBranch        *b_AntiKt6Tower_Nconst;   //!
   TBranch        *b_AntiKt6Tower_ptconst_default;   //!
   TBranch        *b_AntiKt6Tower_econst_default;   //!
   TBranch        *b_AntiKt6Tower_etaconst_default;   //!
   TBranch        *b_AntiKt6Tower_phiconst_default;   //!
   TBranch        *b_AntiKt6Tower_weightconst_default;   //!
   TBranch        *b_AntiKt6Tower_constscale_E;   //!
   TBranch        *b_AntiKt6Tower_constscale_pt;   //!
   TBranch        *b_AntiKt6Tower_constscale_m;   //!
   TBranch        *b_AntiKt6Tower_constscale_eta;   //!
   TBranch        *b_AntiKt6Tower_constscale_phi;   //!
   TBranch        *b_AntiKt6Tower_el_dr;   //!
   TBranch        *b_AntiKt6Tower_el_matched;   //!
   TBranch        *b_AntiKt6Tower_mu_dr;   //!
   TBranch        *b_AntiKt6Tower_mu_matched;   //!
   TBranch        *b_AntiKt6Tower_L1_dr;   //!
   TBranch        *b_AntiKt6Tower_L1_matched;   //!
   TBranch        *b_AntiKt6Tower_L2_dr;   //!
   TBranch        *b_AntiKt6Tower_L2_matched;   //!
   TBranch        *b_AntiKt6Tower_EF_dr;   //!
   TBranch        *b_AntiKt6Tower_EF_matched;   //!
   TBranch        *b_AntiKt6GhostTower_n;   //!
   TBranch        *b_AntiKt6GhostTower_E;   //!
   TBranch        *b_AntiKt6GhostTower_pt;   //!
   TBranch        *b_AntiKt6GhostTower_m;   //!
   TBranch        *b_AntiKt6GhostTower_eta;   //!
   TBranch        *b_AntiKt6GhostTower_phi;   //!
   TBranch        *b_AntiKt6GhostTower_EtaOrigin;   //!
   TBranch        *b_AntiKt6GhostTower_PhiOrigin;   //!
   TBranch        *b_AntiKt6GhostTower_MOrigin;   //!
   TBranch        *b_AntiKt6GhostTower_EtaOriginEM;   //!
   TBranch        *b_AntiKt6GhostTower_PhiOriginEM;   //!
   TBranch        *b_AntiKt6GhostTower_MOriginEM;   //!
   TBranch        *b_AntiKt6GhostTower_WIDTH;   //!
   TBranch        *b_AntiKt6GhostTower_n90;   //!
   TBranch        *b_AntiKt6GhostTower_Timing;   //!
   TBranch        *b_AntiKt6GhostTower_LArQuality;   //!
   TBranch        *b_AntiKt6GhostTower_nTrk;   //!
   TBranch        *b_AntiKt6GhostTower_sumPtTrk;   //!
   TBranch        *b_AntiKt6GhostTower_OriginIndex;   //!
   TBranch        *b_AntiKt6GhostTower_HECQuality;   //!
   TBranch        *b_AntiKt6GhostTower_NegativeE;   //!
   TBranch        *b_AntiKt6GhostTower_AverageLArQF;   //!
   TBranch        *b_AntiKt6GhostTower_YFlip12;   //!
   TBranch        *b_AntiKt6GhostTower_YFlip23;   //!
   TBranch        *b_AntiKt6GhostTower_BCH_CORR_CELL;   //!
   TBranch        *b_AntiKt6GhostTower_BCH_CORR_DOTX;   //!
   TBranch        *b_AntiKt6GhostTower_BCH_CORR_JET;   //!
   TBranch        *b_AntiKt6GhostTower_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_AntiKt6GhostTower_ENG_BAD_CELLS;   //!
   TBranch        *b_AntiKt6GhostTower_N_BAD_CELLS;   //!
   TBranch        *b_AntiKt6GhostTower_N_BAD_CELLS_CORR;   //!
   TBranch        *b_AntiKt6GhostTower_BAD_CELLS_CORR_E;   //!
   TBranch        *b_AntiKt6GhostTower_NumTowers;   //!
   TBranch        *b_AntiKt6GhostTower_ootFracCells5;   //!
   TBranch        *b_AntiKt6GhostTower_ootFracCells10;   //!
   TBranch        *b_AntiKt6GhostTower_ootFracClusters5;   //!
   TBranch        *b_AntiKt6GhostTower_ootFracClusters10;   //!
   TBranch        *b_AntiKt6GhostTower_SamplingMax;   //!
   TBranch        *b_AntiKt6GhostTower_fracSamplingMax;   //!
   TBranch        *b_AntiKt6GhostTower_hecf;   //!
   TBranch        *b_AntiKt6GhostTower_tgap3f;   //!
   TBranch        *b_AntiKt6GhostTower_isUgly;   //!
   TBranch        *b_AntiKt6GhostTower_isBadLooseMinus;   //!
   TBranch        *b_AntiKt6GhostTower_isBadLoose;   //!
   TBranch        *b_AntiKt6GhostTower_isBadMedium;   //!
   TBranch        *b_AntiKt6GhostTower_isBadTight;   //!
   TBranch        *b_AntiKt6GhostTower_emfrac;   //!
   TBranch        *b_AntiKt6GhostTower_Offset;   //!
   TBranch        *b_AntiKt6GhostTower_EMJES;   //!
   TBranch        *b_AntiKt6GhostTower_EMJES_EtaCorr;   //!
   TBranch        *b_AntiKt6GhostTower_EMJESnooffset;   //!
   TBranch        *b_AntiKt6GhostTower_GCWJES;   //!
   TBranch        *b_AntiKt6GhostTower_GCWJES_EtaCorr;   //!
   TBranch        *b_AntiKt6GhostTower_CB;   //!
   TBranch        *b_AntiKt6GhostTower_LCJES;   //!
   TBranch        *b_AntiKt6GhostTower_emscale_E;   //!
   TBranch        *b_AntiKt6GhostTower_emscale_pt;   //!
   TBranch        *b_AntiKt6GhostTower_emscale_m;   //!
   TBranch        *b_AntiKt6GhostTower_emscale_eta;   //!
   TBranch        *b_AntiKt6GhostTower_emscale_phi;   //!
   TBranch        *b_AntiKt6GhostTower_jvtx_x;   //!
   TBranch        *b_AntiKt6GhostTower_jvtx_y;   //!
   TBranch        *b_AntiKt6GhostTower_jvtx_z;   //!
   TBranch        *b_AntiKt6GhostTower_jvtxf;   //!
   TBranch        *b_AntiKt6GhostTower_GSCFactorF;   //!
   TBranch        *b_AntiKt6GhostTower_WidthFraction;   //!
   TBranch        *b_AntiKt6GhostTower_e_PreSamplerB;   //!
   TBranch        *b_AntiKt6GhostTower_e_EMB1;   //!
   TBranch        *b_AntiKt6GhostTower_e_EMB2;   //!
   TBranch        *b_AntiKt6GhostTower_e_EMB3;   //!
   TBranch        *b_AntiKt6GhostTower_e_PreSamplerE;   //!
   TBranch        *b_AntiKt6GhostTower_e_EME1;   //!
   TBranch        *b_AntiKt6GhostTower_e_EME2;   //!
   TBranch        *b_AntiKt6GhostTower_e_EME3;   //!
   TBranch        *b_AntiKt6GhostTower_e_HEC0;   //!
   TBranch        *b_AntiKt6GhostTower_e_HEC1;   //!
   TBranch        *b_AntiKt6GhostTower_e_HEC2;   //!
   TBranch        *b_AntiKt6GhostTower_e_HEC3;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileBar0;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileBar1;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileBar2;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileGap1;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileGap2;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileGap3;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileExt0;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileExt1;   //!
   TBranch        *b_AntiKt6GhostTower_e_TileExt2;   //!
   TBranch        *b_AntiKt6GhostTower_e_FCAL0;   //!
   TBranch        *b_AntiKt6GhostTower_e_FCAL1;   //!
   TBranch        *b_AntiKt6GhostTower_e_FCAL2;   //!
   TBranch        *b_AntiKt6GhostTower_shapeBins;   //!
   TBranch        *b_AntiKt6GhostTower_Nconst;   //!
   TBranch        *b_AntiKt6GhostTower_ptconst_default;   //!
   TBranch        *b_AntiKt6GhostTower_econst_default;   //!
   TBranch        *b_AntiKt6GhostTower_etaconst_default;   //!
   TBranch        *b_AntiKt6GhostTower_phiconst_default;   //!
   TBranch        *b_AntiKt6GhostTower_weightconst_default;   //!
   TBranch        *b_AntiKt6GhostTower_constscale_E;   //!
   TBranch        *b_AntiKt6GhostTower_constscale_pt;   //!
   TBranch        *b_AntiKt6GhostTower_constscale_m;   //!
   TBranch        *b_AntiKt6GhostTower_constscale_eta;   //!
   TBranch        *b_AntiKt6GhostTower_constscale_phi;   //!
   TBranch        *b_AntiKt6GhostTower_el_dr;   //!
   TBranch        *b_AntiKt6GhostTower_el_matched;   //!
   TBranch        *b_AntiKt6GhostTower_mu_dr;   //!
   TBranch        *b_AntiKt6GhostTower_mu_matched;   //!
   TBranch        *b_AntiKt6GhostTower_L1_dr;   //!
   TBranch        *b_AntiKt6GhostTower_L1_matched;   //!
   TBranch        *b_AntiKt6GhostTower_L2_dr;   //!
   TBranch        *b_AntiKt6GhostTower_L2_matched;   //!
   TBranch        *b_AntiKt6GhostTower_EF_dr;   //!
   TBranch        *b_AntiKt6GhostTower_EF_matched;   //!
   TBranch        *b_AntiKt6LCTopo_n;   //!
   TBranch        *b_AntiKt6LCTopo_E;   //!
   TBranch        *b_AntiKt6LCTopo_pt;   //!
   TBranch        *b_AntiKt6LCTopo_m;   //!
   TBranch        *b_AntiKt6LCTopo_eta;   //!
   TBranch        *b_AntiKt6LCTopo_phi;   //!
   TBranch        *b_AntiKt6LCTopo_EtaOrigin;   //!
   TBranch        *b_AntiKt6LCTopo_PhiOrigin;   //!
   TBranch        *b_AntiKt6LCTopo_MOrigin;   //!
   TBranch        *b_AntiKt6LCTopo_EtaOriginEM;   //!
   TBranch        *b_AntiKt6LCTopo_PhiOriginEM;   //!
   TBranch        *b_AntiKt6LCTopo_MOriginEM;   //!
   TBranch        *b_AntiKt6LCTopo_WIDTH;   //!
   TBranch        *b_AntiKt6LCTopo_n90;   //!
   TBranch        *b_AntiKt6LCTopo_Timing;   //!
   TBranch        *b_AntiKt6LCTopo_LArQuality;   //!
   TBranch        *b_AntiKt6LCTopo_nTrk;   //!
   TBranch        *b_AntiKt6LCTopo_sumPtTrk;   //!
   TBranch        *b_AntiKt6LCTopo_OriginIndex;   //!
   TBranch        *b_AntiKt6LCTopo_HECQuality;   //!
   TBranch        *b_AntiKt6LCTopo_NegativeE;   //!
   TBranch        *b_AntiKt6LCTopo_AverageLArQF;   //!
   TBranch        *b_AntiKt6LCTopo_YFlip12;   //!
   TBranch        *b_AntiKt6LCTopo_YFlip23;   //!
   TBranch        *b_AntiKt6LCTopo_BCH_CORR_CELL;   //!
   TBranch        *b_AntiKt6LCTopo_BCH_CORR_DOTX;   //!
   TBranch        *b_AntiKt6LCTopo_BCH_CORR_JET;   //!
   TBranch        *b_AntiKt6LCTopo_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_AntiKt6LCTopo_ENG_BAD_CELLS;   //!
   TBranch        *b_AntiKt6LCTopo_N_BAD_CELLS;   //!
   TBranch        *b_AntiKt6LCTopo_N_BAD_CELLS_CORR;   //!
   TBranch        *b_AntiKt6LCTopo_BAD_CELLS_CORR_E;   //!
   TBranch        *b_AntiKt6LCTopo_NumTowers;   //!
   TBranch        *b_AntiKt6LCTopo_ootFracCells5;   //!
   TBranch        *b_AntiKt6LCTopo_ootFracCells10;   //!
   TBranch        *b_AntiKt6LCTopo_ootFracClusters5;   //!
   TBranch        *b_AntiKt6LCTopo_ootFracClusters10;   //!
   TBranch        *b_AntiKt6LCTopo_SamplingMax;   //!
   TBranch        *b_AntiKt6LCTopo_fracSamplingMax;   //!
   TBranch        *b_AntiKt6LCTopo_hecf;   //!
   TBranch        *b_AntiKt6LCTopo_tgap3f;   //!
   TBranch        *b_AntiKt6LCTopo_isUgly;   //!
   TBranch        *b_AntiKt6LCTopo_isBadLooseMinus;   //!
   TBranch        *b_AntiKt6LCTopo_isBadLoose;   //!
   TBranch        *b_AntiKt6LCTopo_isBadMedium;   //!
   TBranch        *b_AntiKt6LCTopo_isBadTight;   //!
   TBranch        *b_AntiKt6LCTopo_emfrac;   //!
   TBranch        *b_AntiKt6LCTopo_Offset;   //!
   TBranch        *b_AntiKt6LCTopo_EMJES;   //!
   TBranch        *b_AntiKt6LCTopo_EMJES_EtaCorr;   //!
   TBranch        *b_AntiKt6LCTopo_EMJESnooffset;   //!
   TBranch        *b_AntiKt6LCTopo_GCWJES;   //!
   TBranch        *b_AntiKt6LCTopo_GCWJES_EtaCorr;   //!
   TBranch        *b_AntiKt6LCTopo_CB;   //!
   TBranch        *b_AntiKt6LCTopo_LCJES;   //!
   TBranch        *b_AntiKt6LCTopo_emscale_E;   //!
   TBranch        *b_AntiKt6LCTopo_emscale_pt;   //!
   TBranch        *b_AntiKt6LCTopo_emscale_m;   //!
   TBranch        *b_AntiKt6LCTopo_emscale_eta;   //!
   TBranch        *b_AntiKt6LCTopo_emscale_phi;   //!
   TBranch        *b_AntiKt6LCTopo_jvtx_x;   //!
   TBranch        *b_AntiKt6LCTopo_jvtx_y;   //!
   TBranch        *b_AntiKt6LCTopo_jvtx_z;   //!
   TBranch        *b_AntiKt6LCTopo_jvtxf;   //!
   TBranch        *b_AntiKt6LCTopo_GSCFactorF;   //!
   TBranch        *b_AntiKt6LCTopo_WidthFraction;   //!
   TBranch        *b_AntiKt6LCTopo_e_PreSamplerB;   //!
   TBranch        *b_AntiKt6LCTopo_e_EMB1;   //!
   TBranch        *b_AntiKt6LCTopo_e_EMB2;   //!
   TBranch        *b_AntiKt6LCTopo_e_EMB3;   //!
   TBranch        *b_AntiKt6LCTopo_e_PreSamplerE;   //!
   TBranch        *b_AntiKt6LCTopo_e_EME1;   //!
   TBranch        *b_AntiKt6LCTopo_e_EME2;   //!
   TBranch        *b_AntiKt6LCTopo_e_EME3;   //!
   TBranch        *b_AntiKt6LCTopo_e_HEC0;   //!
   TBranch        *b_AntiKt6LCTopo_e_HEC1;   //!
   TBranch        *b_AntiKt6LCTopo_e_HEC2;   //!
   TBranch        *b_AntiKt6LCTopo_e_HEC3;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileBar0;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileBar1;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileBar2;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileGap1;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileGap2;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileGap3;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileExt0;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileExt1;   //!
   TBranch        *b_AntiKt6LCTopo_e_TileExt2;   //!
   TBranch        *b_AntiKt6LCTopo_e_FCAL0;   //!
   TBranch        *b_AntiKt6LCTopo_e_FCAL1;   //!
   TBranch        *b_AntiKt6LCTopo_e_FCAL2;   //!
   TBranch        *b_AntiKt6LCTopo_shapeBins;   //!
   TBranch        *b_AntiKt6LCTopo_Nconst;   //!
   TBranch        *b_AntiKt6LCTopo_ptconst_default;   //!
   TBranch        *b_AntiKt6LCTopo_econst_default;   //!
   TBranch        *b_AntiKt6LCTopo_etaconst_default;   //!
   TBranch        *b_AntiKt6LCTopo_phiconst_default;   //!
   TBranch        *b_AntiKt6LCTopo_weightconst_default;   //!
   TBranch        *b_AntiKt6LCTopo_constscale_E;   //!
   TBranch        *b_AntiKt6LCTopo_constscale_pt;   //!
   TBranch        *b_AntiKt6LCTopo_constscale_m;   //!
   TBranch        *b_AntiKt6LCTopo_constscale_eta;   //!
   TBranch        *b_AntiKt6LCTopo_constscale_phi;   //!
   TBranch        *b_AntiKt6LCTopo_el_dr;   //!
   TBranch        *b_AntiKt6LCTopo_el_matched;   //!
   TBranch        *b_AntiKt6LCTopo_mu_dr;   //!
   TBranch        *b_AntiKt6LCTopo_mu_matched;   //!
   TBranch        *b_AntiKt6LCTopo_L1_dr;   //!
   TBranch        *b_AntiKt6LCTopo_L1_matched;   //!
   TBranch        *b_AntiKt6LCTopo_L2_dr;   //!
   TBranch        *b_AntiKt6LCTopo_L2_matched;   //!
   TBranch        *b_AntiKt6LCTopo_EF_dr;   //!
   TBranch        *b_AntiKt6LCTopo_EF_matched;   //!
   TBranch        *b_AntiKt6TopoEM_n;   //!
   TBranch        *b_AntiKt6TopoEM_E;   //!
   TBranch        *b_AntiKt6TopoEM_pt;   //!
   TBranch        *b_AntiKt6TopoEM_m;   //!
   TBranch        *b_AntiKt6TopoEM_eta;   //!
   TBranch        *b_AntiKt6TopoEM_phi;   //!
   TBranch        *b_AntiKt6TopoEM_EtaOrigin;   //!
   TBranch        *b_AntiKt6TopoEM_PhiOrigin;   //!
   TBranch        *b_AntiKt6TopoEM_MOrigin;   //!
   TBranch        *b_AntiKt6TopoEM_EtaOriginEM;   //!
   TBranch        *b_AntiKt6TopoEM_PhiOriginEM;   //!
   TBranch        *b_AntiKt6TopoEM_MOriginEM;   //!
   TBranch        *b_AntiKt6TopoEM_WIDTH;   //!
   TBranch        *b_AntiKt6TopoEM_n90;   //!
   TBranch        *b_AntiKt6TopoEM_Timing;   //!
   TBranch        *b_AntiKt6TopoEM_LArQuality;   //!
   TBranch        *b_AntiKt6TopoEM_nTrk;   //!
   TBranch        *b_AntiKt6TopoEM_sumPtTrk;   //!
   TBranch        *b_AntiKt6TopoEM_OriginIndex;   //!
   TBranch        *b_AntiKt6TopoEM_HECQuality;   //!
   TBranch        *b_AntiKt6TopoEM_NegativeE;   //!
   TBranch        *b_AntiKt6TopoEM_AverageLArQF;   //!
   TBranch        *b_AntiKt6TopoEM_YFlip12;   //!
   TBranch        *b_AntiKt6TopoEM_YFlip23;   //!
   TBranch        *b_AntiKt6TopoEM_BCH_CORR_CELL;   //!
   TBranch        *b_AntiKt6TopoEM_BCH_CORR_DOTX;   //!
   TBranch        *b_AntiKt6TopoEM_BCH_CORR_JET;   //!
   TBranch        *b_AntiKt6TopoEM_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_AntiKt6TopoEM_ENG_BAD_CELLS;   //!
   TBranch        *b_AntiKt6TopoEM_N_BAD_CELLS;   //!
   TBranch        *b_AntiKt6TopoEM_N_BAD_CELLS_CORR;   //!
   TBranch        *b_AntiKt6TopoEM_BAD_CELLS_CORR_E;   //!
   TBranch        *b_AntiKt6TopoEM_NumTowers;   //!
   TBranch        *b_AntiKt6TopoEM_ootFracCells5;   //!
   TBranch        *b_AntiKt6TopoEM_ootFracCells10;   //!
   TBranch        *b_AntiKt6TopoEM_ootFracClusters5;   //!
   TBranch        *b_AntiKt6TopoEM_ootFracClusters10;   //!
   TBranch        *b_AntiKt6TopoEM_SamplingMax;   //!
   TBranch        *b_AntiKt6TopoEM_fracSamplingMax;   //!
   TBranch        *b_AntiKt6TopoEM_hecf;   //!
   TBranch        *b_AntiKt6TopoEM_tgap3f;   //!
   TBranch        *b_AntiKt6TopoEM_isUgly;   //!
   TBranch        *b_AntiKt6TopoEM_isBadLooseMinus;   //!
   TBranch        *b_AntiKt6TopoEM_isBadLoose;   //!
   TBranch        *b_AntiKt6TopoEM_isBadMedium;   //!
   TBranch        *b_AntiKt6TopoEM_isBadTight;   //!
   TBranch        *b_AntiKt6TopoEM_emfrac;   //!
   TBranch        *b_AntiKt6TopoEM_Offset;   //!
   TBranch        *b_AntiKt6TopoEM_EMJES;   //!
   TBranch        *b_AntiKt6TopoEM_EMJES_EtaCorr;   //!
   TBranch        *b_AntiKt6TopoEM_EMJESnooffset;   //!
   TBranch        *b_AntiKt6TopoEM_GCWJES;   //!
   TBranch        *b_AntiKt6TopoEM_GCWJES_EtaCorr;   //!
   TBranch        *b_AntiKt6TopoEM_CB;   //!
   TBranch        *b_AntiKt6TopoEM_LCJES;   //!
   TBranch        *b_AntiKt6TopoEM_emscale_E;   //!
   TBranch        *b_AntiKt6TopoEM_emscale_pt;   //!
   TBranch        *b_AntiKt6TopoEM_emscale_m;   //!
   TBranch        *b_AntiKt6TopoEM_emscale_eta;   //!
   TBranch        *b_AntiKt6TopoEM_emscale_phi;   //!
   TBranch        *b_AntiKt6TopoEM_jvtx_x;   //!
   TBranch        *b_AntiKt6TopoEM_jvtx_y;   //!
   TBranch        *b_AntiKt6TopoEM_jvtx_z;   //!
   TBranch        *b_AntiKt6TopoEM_jvtxf;   //!
   TBranch        *b_AntiKt6TopoEM_GSCFactorF;   //!
   TBranch        *b_AntiKt6TopoEM_WidthFraction;   //!
   TBranch        *b_AntiKt6TopoEM_e_PreSamplerB;   //!
   TBranch        *b_AntiKt6TopoEM_e_EMB1;   //!
   TBranch        *b_AntiKt6TopoEM_e_EMB2;   //!
   TBranch        *b_AntiKt6TopoEM_e_EMB3;   //!
   TBranch        *b_AntiKt6TopoEM_e_PreSamplerE;   //!
   TBranch        *b_AntiKt6TopoEM_e_EME1;   //!
   TBranch        *b_AntiKt6TopoEM_e_EME2;   //!
   TBranch        *b_AntiKt6TopoEM_e_EME3;   //!
   TBranch        *b_AntiKt6TopoEM_e_HEC0;   //!
   TBranch        *b_AntiKt6TopoEM_e_HEC1;   //!
   TBranch        *b_AntiKt6TopoEM_e_HEC2;   //!
   TBranch        *b_AntiKt6TopoEM_e_HEC3;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileBar0;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileBar1;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileBar2;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileGap1;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileGap2;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileGap3;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileExt0;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileExt1;   //!
   TBranch        *b_AntiKt6TopoEM_e_TileExt2;   //!
   TBranch        *b_AntiKt6TopoEM_e_FCAL0;   //!
   TBranch        *b_AntiKt6TopoEM_e_FCAL1;   //!
   TBranch        *b_AntiKt6TopoEM_e_FCAL2;   //!
   TBranch        *b_AntiKt6TopoEM_shapeBins;   //!
   TBranch        *b_AntiKt6TopoEM_Nconst;   //!
   TBranch        *b_AntiKt6TopoEM_ptconst_default;   //!
   TBranch        *b_AntiKt6TopoEM_econst_default;   //!
   TBranch        *b_AntiKt6TopoEM_etaconst_default;   //!
   TBranch        *b_AntiKt6TopoEM_phiconst_default;   //!
   TBranch        *b_AntiKt6TopoEM_weightconst_default;   //!
   TBranch        *b_AntiKt6TopoEM_constscale_E;   //!
   TBranch        *b_AntiKt6TopoEM_constscale_pt;   //!
   TBranch        *b_AntiKt6TopoEM_constscale_m;   //!
   TBranch        *b_AntiKt6TopoEM_constscale_eta;   //!
   TBranch        *b_AntiKt6TopoEM_constscale_phi;   //!
   TBranch        *b_AntiKt6TopoEM_el_dr;   //!
   TBranch        *b_AntiKt6TopoEM_el_matched;   //!
   TBranch        *b_AntiKt6TopoEM_mu_dr;   //!
   TBranch        *b_AntiKt6TopoEM_mu_matched;   //!
   TBranch        *b_AntiKt6TopoEM_L1_dr;   //!
   TBranch        *b_AntiKt6TopoEM_L1_matched;   //!
   TBranch        *b_AntiKt6TopoEM_L2_dr;   //!
   TBranch        *b_AntiKt6TopoEM_L2_matched;   //!
   TBranch        *b_AntiKt6TopoEM_EF_dr;   //!
   TBranch        *b_AntiKt6TopoEM_EF_matched;   //!
   TBranch        *b_cl_emTopo_n;   //!
   TBranch        *b_cl_emTopo_pt;   //!
   TBranch        *b_cl_emTopo_eta;   //!
   TBranch        *b_cl_emTopo_phi;   //!
   TBranch        *b_cl_emTopo_E_em;   //!
   TBranch        *b_cl_emTopo_E_had;   //!
   TBranch        *b_cl_emTopo_firstEdens;   //!
   TBranch        *b_cl_emTopo_cellmaxfrac;   //!
   TBranch        *b_cl_emTopo_longitudinal;   //!
   TBranch        *b_cl_emTopo_secondlambda;   //!
   TBranch        *b_cl_emTopo_lateral;   //!
   TBranch        *b_cl_emTopo_secondR;   //!
   TBranch        *b_cl_emTopo_centerlambda;   //!
   TBranch        *b_cl_emTopo_deltaTheta;   //!
   TBranch        *b_cl_emTopo_deltaPhi;   //!
   TBranch        *b_cl_emTopo_centermag;   //!
   TBranch        *b_cl_emTopo_time;   //!
   TBranch        *b_cl_emTopo_E_PreSamplerB;   //!
   TBranch        *b_cl_emTopo_E_EMB1;   //!
   TBranch        *b_cl_emTopo_E_EMB2;   //!
   TBranch        *b_cl_emTopo_E_EMB3;   //!
   TBranch        *b_cl_emTopo_E_PreSamplerE;   //!
   TBranch        *b_cl_emTopo_E_EME1;   //!
   TBranch        *b_cl_emTopo_E_EME2;   //!
   TBranch        *b_cl_emTopo_E_EME3;   //!
   TBranch        *b_cl_emTopo_E_HEC0;   //!
   TBranch        *b_cl_emTopo_E_HEC1;   //!
   TBranch        *b_cl_emTopo_E_HEC2;   //!
   TBranch        *b_cl_emTopo_E_HEC3;   //!
   TBranch        *b_cl_emTopo_E_TileBar0;   //!
   TBranch        *b_cl_emTopo_E_TileBar1;   //!
   TBranch        *b_cl_emTopo_E_TileBar2;   //!
   TBranch        *b_cl_emTopo_E_TileGap1;   //!
   TBranch        *b_cl_emTopo_E_TileGap2;   //!
   TBranch        *b_cl_emTopo_E_TileGap3;   //!
   TBranch        *b_cl_emTopo_E_TileExt0;   //!
   TBranch        *b_cl_emTopo_E_TileExt1;   //!
   TBranch        *b_cl_emTopo_E_TileExt2;   //!
   TBranch        *b_cl_emTopo_E_FCAL0;   //!
   TBranch        *b_cl_emTopo_E_FCAL1;   //!
   TBranch        *b_cl_emTopo_E_FCAL2;   //!
   TBranch        *b_cl_hadTopo_n;   //!
   TBranch        *b_cl_hadTopo_pt;   //!
   TBranch        *b_cl_hadTopo_eta;   //!
   TBranch        *b_cl_hadTopo_phi;   //!
   TBranch        *b_cl_hadTopo_E_em;   //!
   TBranch        *b_cl_hadTopo_E_had;   //!
   TBranch        *b_cl_hadTopo_firstEdens;   //!
   TBranch        *b_cl_hadTopo_cellmaxfrac;   //!
   TBranch        *b_cl_hadTopo_longitudinal;   //!
   TBranch        *b_cl_hadTopo_secondlambda;   //!
   TBranch        *b_cl_hadTopo_lateral;   //!
   TBranch        *b_cl_hadTopo_secondR;   //!
   TBranch        *b_cl_hadTopo_centerlambda;   //!
   TBranch        *b_cl_hadTopo_deltaTheta;   //!
   TBranch        *b_cl_hadTopo_deltaPhi;   //!
   TBranch        *b_cl_hadTopo_centermag;   //!
   TBranch        *b_cl_hadTopo_time;   //!
   TBranch        *b_cl_hadTopo_E_PreSamplerB;   //!
   TBranch        *b_cl_hadTopo_E_EMB1;   //!
   TBranch        *b_cl_hadTopo_E_EMB2;   //!
   TBranch        *b_cl_hadTopo_E_EMB3;   //!
   TBranch        *b_cl_hadTopo_E_PreSamplerE;   //!
   TBranch        *b_cl_hadTopo_E_EME1;   //!
   TBranch        *b_cl_hadTopo_E_EME2;   //!
   TBranch        *b_cl_hadTopo_E_EME3;   //!
   TBranch        *b_cl_hadTopo_E_HEC0;   //!
   TBranch        *b_cl_hadTopo_E_HEC1;   //!
   TBranch        *b_cl_hadTopo_E_HEC2;   //!
   TBranch        *b_cl_hadTopo_E_HEC3;   //!
   TBranch        *b_cl_hadTopo_E_TileBar0;   //!
   TBranch        *b_cl_hadTopo_E_TileBar1;   //!
   TBranch        *b_cl_hadTopo_E_TileBar2;   //!
   TBranch        *b_cl_hadTopo_E_TileGap1;   //!
   TBranch        *b_cl_hadTopo_E_TileGap2;   //!
   TBranch        *b_cl_hadTopo_E_TileGap3;   //!
   TBranch        *b_cl_hadTopo_E_TileExt0;   //!
   TBranch        *b_cl_hadTopo_E_TileExt1;   //!
   TBranch        *b_cl_hadTopo_E_TileExt2;   //!
   TBranch        *b_cl_hadTopo_E_FCAL0;   //!
   TBranch        *b_cl_hadTopo_E_FCAL1;   //!
   TBranch        *b_cl_hadTopo_E_FCAL2;   //!
   TBranch        *b_emcl_n;   //!
   TBranch        *b_emcl_E;   //!
   TBranch        *b_emcl_pt;   //!
   TBranch        *b_emcl_m;   //!
   TBranch        *b_emcl_eta;   //!
   TBranch        *b_emcl_phi;   //!
   TBranch        *b_emcl_E_em;   //!
   TBranch        *b_emcl_E_had;   //!
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
   TBranch        *b_mu_staco_etconeNoEm10;   //!
   TBranch        *b_mu_staco_etconeNoEm20;   //!
   TBranch        *b_mu_staco_etconeNoEm30;   //!
   TBranch        *b_mu_staco_etconeNoEm40;   //!
   TBranch        *b_mu_staco_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_staco_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_staco_momentumBalanceSignificance;   //!
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
   TBranch        *b_mu_staco_isSiliconAssociatedForwardMuon;   //!
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
   TBranch        *b_mu_staco_nCSCUnspoiledEtaHits;   //!
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
   TBranch        *b_mu_staco_nprecisionLayers;   //!
   TBranch        *b_mu_staco_nprecisionHoleLayers;   //!
   TBranch        *b_mu_staco_nphiLayers;   //!
   TBranch        *b_mu_staco_ntrigEtaLayers;   //!
   TBranch        *b_mu_staco_nphiHoleLayers;   //!
   TBranch        *b_mu_staco_ntrigEtaHoleLayers;   //!
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
   TBranch        *b_mu_muid_etconeNoEm10;   //!
   TBranch        *b_mu_muid_etconeNoEm20;   //!
   TBranch        *b_mu_muid_etconeNoEm30;   //!
   TBranch        *b_mu_muid_etconeNoEm40;   //!
   TBranch        *b_mu_muid_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_muid_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_muid_momentumBalanceSignificance;   //!
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
   TBranch        *b_mu_muid_isSiliconAssociatedForwardMuon;   //!
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
   TBranch        *b_mu_muid_nCSCUnspoiledEtaHits;   //!
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
   TBranch        *b_mu_muid_nprecisionLayers;   //!
   TBranch        *b_mu_muid_nprecisionHoleLayers;   //!
   TBranch        *b_mu_muid_nphiLayers;   //!
   TBranch        *b_mu_muid_ntrigEtaLayers;   //!
   TBranch        *b_mu_muid_nphiHoleLayers;   //!
   TBranch        *b_mu_muid_ntrigEtaHoleLayers;   //!
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
   TBranch        *b_L1_FJ3;   //!
   TBranch        *b_L1_J10;   //!
   TBranch        *b_L1_J15;   //!
   TBranch        *b_L1_J30;   //!
   TBranch        *b_L1_J5;   //!
   TBranch        *b_L1_J75;   //!
   TBranch        *b_trig_L1_jet_n;   //!
   TBranch        *b_trig_L1_jet_eta;   //!
   TBranch        *b_trig_L1_jet_phi;   //!
   TBranch        *b_trig_L1_jet_thrNames;   //!
   TBranch        *b_trig_L1_jet_thrValues;   //!
   TBranch        *b_trig_L1_jet_thrPattern;   //!
   TBranch        *b_trig_L1_jet_RoIWord;   //!
   TBranch        *b_trig_L1_jet_et4x4;   //!
   TBranch        *b_trig_L1_jet_et6x6;   //!
   TBranch        *b_trig_L1_jet_et8x8;   //!
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
   TBranch        *b_trig_EF_jet_EF_j10_u0uchad_LArNoiseBurst;   //!
   TBranch        *b_trig_EF_jet_EF_j10_u0uchad_empty_LArNoiseBurst;   //!
   TBranch        *b_trig_EF_jet_EF_j10_u0uchad_firstempty_LArNoiseBurst;   //!
   TBranch        *b_trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j75_a4hi_EFFS_L1J10;   //!
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
   TBranch        *b_trig_EF_ph_n;   //!
   TBranch        *b_trig_EF_ph_E;   //!
   TBranch        *b_trig_EF_ph_Et;   //!
   TBranch        *b_trig_EF_ph_pt;   //!
   TBranch        *b_trig_EF_ph_m;   //!
   TBranch        *b_trig_EF_ph_eta;   //!
   TBranch        *b_trig_EF_ph_phi;   //!
   TBranch        *b_trig_EF_ph_px;   //!
   TBranch        *b_trig_EF_ph_py;   //!
   TBranch        *b_trig_EF_ph_pz;   //!
   TBranch        *b_trig_EF_ph_author;   //!
   TBranch        *b_trig_EF_ph_isRecovered;   //!
   TBranch        *b_trig_EF_ph_isEM;   //!
   TBranch        *b_trig_EF_ph_isEMLoose;   //!
   TBranch        *b_trig_EF_ph_isEMMedium;   //!
   TBranch        *b_trig_EF_ph_isEMTight;   //!
   TBranch        *b_trig_EF_ph_convFlag;   //!
   TBranch        *b_trig_EF_ph_isConv;   //!
   TBranch        *b_trig_EF_ph_nConv;   //!
   TBranch        *b_trig_EF_ph_nSingleTrackConv;   //!
   TBranch        *b_trig_EF_ph_nDoubleTrackConv;   //!
   TBranch        *b_trig_EF_ph_loose;   //!
   TBranch        *b_trig_EF_ph_looseIso;   //!
   TBranch        *b_trig_EF_ph_tight;   //!
   TBranch        *b_trig_EF_ph_tightIso;   //!
   TBranch        *b_trig_EF_ph_looseAR;   //!
   TBranch        *b_trig_EF_ph_looseARIso;   //!
   TBranch        *b_trig_EF_ph_tightAR;   //!
   TBranch        *b_trig_EF_ph_tightARIso;   //!
   TBranch        *b_trig_EF_trigmuonef_n;   //!
   TBranch        *b_trig_EF_trigmuonef_effs15;   //!
   TBranch        *b_trig_EF_trigmuonef_effs18;   //!
   TBranch        *b_trig_EF_trigmuonef_effs24;   //!
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
   TBranch        *b_trtRDO_countRDOhitsInEvent;   //!
   TBranch        *b_trtRDO_countBarrelhitsInEvent;   //!
   TBranch        *b_trtRDO_countEndCaphitsInEvent;   //!
   TBranch        *b_trtRDO_countEndCapAhitsInEvent;   //!
   TBranch        *b_trtRDO_countEndCapChitsInEvent;   //!
   TBranch        *b_trtRDO_countdeadstraws;   //!
   TBranch        *b_vx_n;   //!
   TBranch        *b_vx_x;   //!
   TBranch        *b_vx_y;   //!
   TBranch        *b_vx_z;   //!
   TBranch        *b_vx_err_x;   //!
   TBranch        *b_vx_err_y;   //!
   TBranch        *b_vx_err_z;   //!
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
   TBranch        *b_vx_trk_weight;   //!
   TBranch        *b_vx_trk_n;   //!
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
   TBranch        *b_el_deltaPhiFromLast;   //!
   TBranch        *b_el_deltaPhiRot;   //!
   TBranch        *b_el_expectHitInBLayer;   //!
   TBranch        *b_el_trackd0_physics;   //!
   TBranch        *b_el_etaSampling1;   //!
   TBranch        *b_el_reta;   //!
   TBranch        *b_el_rphi;   //!
   TBranch        *b_el_topoEtcone20;   //!
   TBranch        *b_el_topoEtcone30;   //!
   TBranch        *b_el_topoEtcone40;   //!
   TBranch        *b_el_materialTraversed;   //!
   TBranch        *b_el_EtringnoisedR03sig2;   //!
   TBranch        *b_el_EtringnoisedR03sig3;   //!
   TBranch        *b_el_EtringnoisedR03sig4;   //!
   TBranch        *b_el_ptcone20_zpv05;   //!
   TBranch        *b_el_ptcone30_zpv05;   //!
   TBranch        *b_el_ptcone40_zpv05;   //!
   TBranch        *b_el_nucone20_zpv05;   //!
   TBranch        *b_el_nucone30_zpv05;   //!
   TBranch        *b_el_nucone40_zpv05;   //!
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
   TBranch        *b_el_ringernn;   //!
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
   TBranch        *b_el_refittedTrack_d0_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_wrtBL;   //!
   TBranch        *b_el_refittedTrack_theta_wrtBL;   //!
   TBranch        *b_el_refittedTrack_qoverp_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_z0_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_phi_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_phi_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_theta_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_el_refittedTrack_theta_qoverp_err_wrtBL;   //!
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
   TBranch        *b_el_cl_etaCalo;   //!
   TBranch        *b_el_cl_phiCalo;   //!
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
   TBranch        *b_el_nTRTXenonHits;   //!
   TBranch        *b_el_nPixHoles;   //!
   TBranch        *b_el_nSCTHoles;   //!
   TBranch        *b_el_nTRTHoles;   //!
   TBranch        *b_el_nPixelDeadSensors;   //!
   TBranch        *b_el_nSCTDeadSensors;   //!
   TBranch        *b_el_nBLSharedHits;   //!
   TBranch        *b_el_nPixSharedHits;   //!
   TBranch        *b_el_nSCTSharedHits;   //!
   TBranch        *b_el_nBLayerSplitHits;   //!
   TBranch        *b_el_nPixSplitHits;   //!
   TBranch        *b_el_nBLayerOutliers;   //!
   TBranch        *b_el_nPixelOutliers;   //!
   TBranch        *b_el_nSCTOutliers;   //!
   TBranch        *b_el_nTRTOutliers;   //!
   TBranch        *b_el_nTRTHighTOutliers;   //!
   TBranch        *b_el_nContribPixelLayers;   //!
   TBranch        *b_el_nGangedPixels;   //!
   TBranch        *b_el_nGangedFlaggedFakes;   //!
   TBranch        *b_el_nPixelSpoiltHits;   //!
   TBranch        *b_el_nSCTDoubleHoles;   //!
   TBranch        *b_el_nSCTSpoiltHits;   //!
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
   TBranch        *b_el_Unrefittedtrack_d0;   //!
   TBranch        *b_el_Unrefittedtrack_z0;   //!
   TBranch        *b_el_Unrefittedtrack_phi;   //!
   TBranch        *b_el_Unrefittedtrack_theta;   //!
   TBranch        *b_el_Unrefittedtrack_qoverp;   //!
   TBranch        *b_el_Unrefittedtrack_pt;   //!
   TBranch        *b_el_Unrefittedtrack_eta;   //!
   TBranch        *b_el_theta_LM;   //!
   TBranch        *b_el_qoverp_LM;   //!
   TBranch        *b_el_locX_LM;   //!
   TBranch        *b_el_locY_LM;   //!
   TBranch        *b_el_phi_LM;   //!
   TBranch        *b_el_theta_err_LM;   //!
   TBranch        *b_el_qoverp_err_LM;   //!
   TBranch        *b_el_locX_err_LM;   //!
   TBranch        *b_el_locY_err_LM;   //!
   TBranch        *b_el_phi_err_LM;   //!
   TBranch        *b_el_hastrack;   //!
   TBranch        *b_el_deltaEmax2;   //!
   TBranch        *b_el_calibHitsShowerDepth;   //!
   TBranch        *b_el_isIso;   //!
   TBranch        *b_el_mvaptcone20;   //!
   TBranch        *b_el_mvaptcone30;   //!
   TBranch        *b_el_mvaptcone40;   //!
   TBranch        *b_el_CaloPointing_eta;   //!
   TBranch        *b_el_CaloPointing_sigma_eta;   //!
   TBranch        *b_el_CaloPointing_zvertex;   //!
   TBranch        *b_el_CaloPointing_sigma_zvertex;   //!
   TBranch        *b_el_HPV_eta;   //!
   TBranch        *b_el_HPV_sigma_eta;   //!
   TBranch        *b_el_HPV_zvertex;   //!
   TBranch        *b_el_HPV_sigma_zvertex;   //!
   TBranch        *b_el_topoEtcone60;   //!
   TBranch        *b_el_ES0_real;   //!
   TBranch        *b_el_ES1_real;   //!
   TBranch        *b_el_ES2_real;   //!
   TBranch        *b_el_ES3_real;   //!
   TBranch        *b_el_EcellS0;   //!
   TBranch        *b_el_etacellS0;   //!
   TBranch        *b_el_Etcone40_ED_corrected;   //!
   TBranch        *b_el_Etcone40_corrected;   //!
   TBranch        *b_el_topoEtcone20_corrected;   //!
   TBranch        *b_el_topoEtcone30_corrected;   //!
   TBranch        *b_el_topoEtcone40_corrected;   //!
   TBranch        *b_el_ED_median;   //!
   TBranch        *b_el_ED_sigma;   //!
   TBranch        *b_el_ED_Njets;   //!
   TBranch        *b_el_EF_dr;   //!
   TBranch        *b_el_L2_dr;   //!
   TBranch        *b_el_L1_dr;   //!
   TBranch        *b_el_L1_index;   //!
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
   TBranch        *b_ph_topoEtcone20;   //!
   TBranch        *b_ph_topoEtcone30;   //!
   TBranch        *b_ph_topoEtcone40;   //!
   TBranch        *b_ph_materialTraversed;   //!
   TBranch        *b_ph_EtringnoisedR03sig2;   //!
   TBranch        *b_ph_EtringnoisedR03sig3;   //!
   TBranch        *b_ph_EtringnoisedR03sig4;   //!
   TBranch        *b_ph_ptcone20_zpv05;   //!
   TBranch        *b_ph_ptcone30_zpv05;   //!
   TBranch        *b_ph_ptcone40_zpv05;   //!
   TBranch        *b_ph_nucone20_zpv05;   //!
   TBranch        *b_ph_nucone30_zpv05;   //!
   TBranch        *b_ph_nucone40_zpv05;   //!
   TBranch        *b_ph_isolationlikelihoodjets;   //!
   TBranch        *b_ph_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_ph_loglikelihood;   //!
   TBranch        *b_ph_photonweight;   //!
   TBranch        *b_ph_photonbgweight;   //!
   TBranch        *b_ph_neuralnet;   //!
   TBranch        *b_ph_Hmatrix;   //!
   TBranch        *b_ph_Hmatrix5;   //!
   TBranch        *b_ph_adaboost;   //!
   TBranch        *b_ph_ringernn;   //!
   TBranch        *b_ph_zvertex;   //!
   TBranch        *b_ph_errz;   //!
   TBranch        *b_ph_etap;   //!
   TBranch        *b_ph_depth;   //!
   TBranch        *b_ph_cl_E;   //!
   TBranch        *b_ph_cl_pt;   //!
   TBranch        *b_ph_cl_eta;   //!
   TBranch        *b_ph_cl_phi;   //!
   TBranch        *b_ph_cl_etaCalo;   //!
   TBranch        *b_ph_cl_phiCalo;   //!
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
   TBranch        *b_ph_convMatchDeltaEta1;   //!
   TBranch        *b_ph_convMatchDeltaEta2;   //!
   TBranch        *b_ph_convMatchDeltaPhi1;   //!
   TBranch        *b_ph_convMatchDeltaPhi2;   //!
   TBranch        *b_ph_rings_E;   //!
   TBranch        *b_ph_vx_n;   //!
   TBranch        *b_ph_vx_x;   //!
   TBranch        *b_ph_vx_y;   //!
   TBranch        *b_ph_vx_z;   //!
   TBranch        *b_ph_vx_px;   //!
   TBranch        *b_ph_vx_py;   //!
   TBranch        *b_ph_vx_pz;   //!
   TBranch        *b_ph_vx_E;   //!
   TBranch        *b_ph_vx_m;   //!
   TBranch        *b_ph_vx_nTracks;   //!
   TBranch        *b_ph_vx_sumPt;   //!
   TBranch        *b_ph_vx_convTrk_weight;   //!
   TBranch        *b_ph_vx_convTrk_n;   //!
   TBranch        *b_ph_vx_convTrk_fitter;   //!
   TBranch        *b_ph_vx_convTrk_patternReco1;   //!
   TBranch        *b_ph_vx_convTrk_patternReco2;   //!
   TBranch        *b_ph_vx_convTrk_trackProperties;   //!
   TBranch        *b_ph_vx_convTrk_particleHypothesis;   //!
   TBranch        *b_ph_vx_convTrk_nBLHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixHits;   //!
   TBranch        *b_ph_vx_convTrk_nSCTHits;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHits;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHighTHits;   //!
   TBranch        *b_ph_vx_convTrk_nTRTXenonHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixHoles;   //!
   TBranch        *b_ph_vx_convTrk_nSCTHoles;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHoles;   //!
   TBranch        *b_ph_vx_convTrk_nPixelDeadSensors;   //!
   TBranch        *b_ph_vx_convTrk_nSCTDeadSensors;   //!
   TBranch        *b_ph_vx_convTrk_nBLSharedHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixSharedHits;   //!
   TBranch        *b_ph_vx_convTrk_nSCTSharedHits;   //!
   TBranch        *b_ph_vx_convTrk_nBLayerSplitHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixSplitHits;   //!
   TBranch        *b_ph_vx_convTrk_nBLayerOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nPixelOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nSCTOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nTRTOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHighTOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nContribPixelLayers;   //!
   TBranch        *b_ph_vx_convTrk_nGangedPixels;   //!
   TBranch        *b_ph_vx_convTrk_nGangedFlaggedFakes;   //!
   TBranch        *b_ph_vx_convTrk_nPixelSpoiltHits;   //!
   TBranch        *b_ph_vx_convTrk_nSCTDoubleHoles;   //!
   TBranch        *b_ph_vx_convTrk_nSCTSpoiltHits;   //!
   TBranch        *b_ph_vx_convTrk_nTRTDeadStraws;   //!
   TBranch        *b_ph_vx_convTrk_nTRTTubeHits;   //!
   TBranch        *b_ph_vx_convTrk_nOutliersOnTrack;   //!
   TBranch        *b_ph_vx_convTrk_standardDeviationOfChi2OS;   //!
   TBranch        *b_ph_vx_convTrk_expectBLayerHit;   //!
   TBranch        *b_ph_vx_convTrk_nMDTHits;   //!
   TBranch        *b_ph_vx_convTrk_nCSCEtaHits;   //!
   TBranch        *b_ph_vx_convTrk_nCSCPhiHits;   //!
   TBranch        *b_ph_vx_convTrk_nRPCEtaHits;   //!
   TBranch        *b_ph_vx_convTrk_nRPCPhiHits;   //!
   TBranch        *b_ph_vx_convTrk_nTGCEtaHits;   //!
   TBranch        *b_ph_vx_convTrk_nTGCPhiHits;   //!
   TBranch        *b_ph_vx_convTrk_nMdtHoles;   //!
   TBranch        *b_ph_vx_convTrk_nCscEtaHoles;   //!
   TBranch        *b_ph_vx_convTrk_nCscPhiHoles;   //!
   TBranch        *b_ph_vx_convTrk_nRpcEtaHoles;   //!
   TBranch        *b_ph_vx_convTrk_nRpcPhiHoles;   //!
   TBranch        *b_ph_vx_convTrk_nTgcEtaHoles;   //!
   TBranch        *b_ph_vx_convTrk_nTgcPhiHoles;   //!
   TBranch        *b_ph_vx_convTrk_nHits;   //!
   TBranch        *b_ph_vx_convTrk_nHoles;   //!
   TBranch        *b_ph_vx_convTrk_hitPattern;   //!
   TBranch        *b_ph_vx_convTrk_nSiHits;   //!
   TBranch        *b_ph_vx_convTrk_TRTHighTHitsRatio;   //!
   TBranch        *b_ph_vx_convTrk_TRTHighTOutliersRatio;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityComb;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityHT;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityToT;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityBrem;   //!
   TBranch        *b_ph_vx_convTrk_chi2;   //!
   TBranch        *b_ph_vx_convTrk_ndof;   //!
   TBranch        *b_ph_deltaEmax2;   //!
   TBranch        *b_ph_calibHitsShowerDepth;   //!
   TBranch        *b_ph_isIso;   //!
   TBranch        *b_ph_mvaptcone20;   //!
   TBranch        *b_ph_mvaptcone30;   //!
   TBranch        *b_ph_mvaptcone40;   //!
   TBranch        *b_ph_vx_Chi2;   //!
   TBranch        *b_ph_vx_Dcottheta;   //!
   TBranch        *b_ph_vx_Dphi;   //!
   TBranch        *b_ph_vx_Dist;   //!
   TBranch        *b_ph_vx_DR1R2;   //!
   TBranch        *b_ph_CaloPointing_eta;   //!
   TBranch        *b_ph_CaloPointing_sigma_eta;   //!
   TBranch        *b_ph_CaloPointing_zvertex;   //!
   TBranch        *b_ph_CaloPointing_sigma_zvertex;   //!
   TBranch        *b_ph_HPV_eta;   //!
   TBranch        *b_ph_HPV_sigma_eta;   //!
   TBranch        *b_ph_HPV_zvertex;   //!
   TBranch        *b_ph_HPV_sigma_zvertex;   //!
   TBranch        *b_ph_NN_passes;   //!
   TBranch        *b_ph_NN_discriminant;   //!
   TBranch        *b_ph_ES0_real;   //!
   TBranch        *b_ph_ES1_real;   //!
   TBranch        *b_ph_ES2_real;   //!
   TBranch        *b_ph_ES3_real;   //!
   TBranch        *b_ph_EcellS0;   //!
   TBranch        *b_ph_etacellS0;   //!
   TBranch        *b_ph_Etcone40_ED_corrected;   //!
   TBranch        *b_ph_Etcone40_corrected;   //!
   TBranch        *b_ph_topoEtcone20_corrected;   //!
   TBranch        *b_ph_topoEtcone30_corrected;   //!
   TBranch        *b_ph_topoEtcone40_corrected;   //!
   TBranch        *b_ph_ED_median;   //!
   TBranch        *b_ph_ED_sigma;   //!
   TBranch        *b_ph_ED_Njets;   //!
   TBranch        *b_ph_convIP;   //!
   TBranch        *b_ph_convIPRev;   //!
   TBranch        *b_ph_el_index;   //!
   TBranch        *b_ph_EF_dr;   //!
   TBranch        *b_ph_EF_index;   //!
   TBranch        *b_ph_L2_dr;   //!
   TBranch        *b_ph_L1_dr;   //!
   TBranch        *b_ph_L1_index;   //!

   BranchBase_pPb(TTree *tree=0);
   virtual ~BranchBase_pPb();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef BranchBase_pPb_cxx
BranchBase_pPb::BranchBase_pPb(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data12_hip.00210185.physics_MinBias.merge.NTUP_HI.f477_m1221._0003.1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("data12_hip.00210185.physics_MinBias.merge.NTUP_HI.f477_m1221._0003.1.root");
      }
      f->GetObject("HeavyIonD3PD",tree);

   }
   Init(tree);
}

BranchBase_pPb::~BranchBase_pPb()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t BranchBase_pPb::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t BranchBase_pPb::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void BranchBase_pPb::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1MBTS = 0;
   trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC_OR = 0;
   trig_EF_trigmuonef_EF_2mu4T_MSonly = 0;
   trig_EF_trigmuonef_EF_2mu4_MSonly = 0;
   trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0 = 0;
   trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_2mu6T_MSonly = 0;
   trig_EF_trigmuonef_EF_2mu6_MSonly = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU11 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4_EMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_EMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_EMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_TE50 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_VTE50 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11_EMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU15 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU20 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_EMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_MV_VTE50 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_TE50 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_VTE50 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY = 0;
   trig_EF_trigmuonef_EF_mu10T_MSonly = 0;
   trig_EF_trigmuonef_EF_mu10_MSonly = 0;
   trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_mu13T_MSonly = 0;
   trig_EF_trigmuonef_EF_mu13_MSonly = 0;
   trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_mu4 = 0;
   trig_EF_trigmuonef_EF_mu4T = 0;
   trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut = 0;
   trig_EF_trigmuonef_EF_mu4T_MSonly = 0;
   trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu4T_MSonly_barrel = 0;
   trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic = 0;
   trig_EF_trigmuonef_EF_mu4T_cosmic = 0;
   trig_EF_trigmuonef_EF_mu4_IDTrkNoCut = 0;
   trig_EF_trigmuonef_EF_mu4_L1VTE50 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MBTS = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC_OR = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_barrel = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_barrel_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_cosmic = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched = 0;
   trig_EF_trigmuonef_EF_mu4_barrel_L1VTE50 = 0;
   trig_EF_trigmuonef_EF_mu4_cosmic = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_mu6T_MSonly = 0;
   trig_EF_trigmuonef_EF_mu6_IDTrkNoCut = 0;
   trig_EF_trigmuonef_EF_mu6_L1VTE50 = 0;
   trig_EF_trigmuonef_EF_mu6_MSonly = 0;
   trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50 = 0;
   mb_E = 0;
   mb_eta = 0;
   mb_phi = 0;
   mb_time = 0;
   mb_quality = 0;
   mb_type = 0;
   mb_module = 0;
   mb_channel = 0;
   Zdc_Energy_Vec = 0;
   Zdc_Time_Vec = 0;
   Zdc_Vec_Size = 0;
   Zdc_Energy_LG = 0;
   Zdc_Time_LG = 0;
   Zdc_Energy_HG = 0;
   Zdc_Time_HG = 0;
   Zdc_Id = 0;
   Zdc_Side = 0;
   Zdc_Type = 0;
   Zdc_Module = 0;
   Zdc_Channel = 0;
   Zdc_TimeCalib = 0;
   Zdc_RecMethod = 0;
   ZdcDigits_dig_g0d0 = 0;
   ZdcDigits_dig_g0d1 = 0;
   ZdcDigits_dig_g1d0 = 0;
   ZdcDigits_dig_g1d1 = 0;
   ZdcDigits_Id = 0;
   ZdcDigits_Side = 0;
   ZdcDigits_Type = 0;
   ZdcDigits_Module = 0;
   ZdcDigits_Channel = 0;
   pixClus_id = 0;
   pixClus_bec = 0;
   pixClus_layer = 0;
   pixClus_detElementId = 0;
   pixClus_phi_module = 0;
   pixClus_eta_module = 0;
   pixClus_col = 0;
   pixClus_row = 0;
   pixClus_charge = 0;
   pixClus_LVL1A = 0;
   pixClus_sizePhi = 0;
   pixClus_sizeZ = 0;
   pixClus_size = 0;
   pixClus_locX = 0;
   pixClus_locY = 0;
   pixClus_x = 0;
   pixClus_y = 0;
   pixClus_z = 0;
   pixClus_isFake = 0;
   pixClus_isGanged = 0;
   pixClus_isSplit = 0;
   pixClus_splitProb1 = 0;
   pixClus_splitProb2 = 0;
   cc_fcal_E = 0;
   cc_fcal_pt = 0;
   cc_fcal_eta = 0;
   cc_fcal_phi = 0;
   cc_fcal_QCells = 0;
   cc_fcal_GainCells = 0;
   cc_fcal_DetCells = 0;
   cc_fcal_TimeCells = 0;
   cc_fcal_xCells = 0;
   cc_fcal_yCells = 0;
   cc_fcal_zCells = 0;
   cc_fcal_BadCells = 0;
   cc_fcal_IdCells = 0;
   cc_fcal_Sigma = 0;
   ccc_Eh_PresB = 0;
   ccc_Eh_EMB = 0;
   ccc_Eh_EMEC = 0;
   ccc_Eh_Tile = 0;
   ccc_Eh_TileGap = 0;
   ccc_Eh_HEC = 0;
   ccc_Eh_FCal = 0;
   ccc_Eh_PresE = 0;
   ccc_Eh_Scint = 0;
   cccEt_Et_Eh_PresB = 0;
   cccEt_Et_Eh_EMB = 0;
   cccEt_Et_Eh_EMEC = 0;
   cccEt_Et_Eh_Tile = 0;
   cccEt_Et_Eh_TileGap = 0;
   cccEt_Et_Eh_HEC = 0;
   cccEt_Et_Eh_FCal = 0;
   cccEt_Et_Eh_PresE = 0;
   cccEt_Et_Eh_Scint = 0;
   cccEt_p_Eh_PresB = 0;
   cccEt_p_Eh_EMB = 0;
   cccEt_p_Eh_EMEC = 0;
   cccEt_p_Eh_Tile = 0;
   cccEt_p_Eh_TileGap = 0;
   cccEt_p_Eh_HEC = 0;
   cccEt_p_Eh_FCal = 0;
   cccEt_p_Eh_PresE = 0;
   cccEt_p_Eh_Scint = 0;
   cccEt_n_Eh_PresB = 0;
   cccEt_n_Eh_EMB = 0;
   cccEt_n_Eh_EMEC = 0;
   cccEt_n_Eh_Tile = 0;
   cccEt_n_Eh_TileGap = 0;
   cccEt_n_Eh_HEC = 0;
   cccEt_n_Eh_FCal = 0;
   cccEt_n_Eh_PresE = 0;
   cccEt_n_Eh_Scint = 0;
   TotalEt_layer_eta = 0;
   TotalEt_layer_phi = 0;
   TotalEt_layer_area = 0;
   TotalEt_layer_sampling = 0;
   TotalEt_layer_sampling_calib = 0;
   trk_d0 = 0;
   trk_z0 = 0;
   trk_phi = 0;
   trk_theta = 0;
   trk_qoverp = 0;
   trk_pt = 0;
   trk_eta = 0;
   trk_err_d0 = 0;
   trk_err_z0 = 0;
   trk_err_phi = 0;
   trk_err_theta = 0;
   trk_err_qoverp = 0;
   trk_cov_d0_z0 = 0;
   trk_cov_d0_phi = 0;
   trk_cov_d0_theta = 0;
   trk_cov_d0_qoverp = 0;
   trk_cov_z0_phi = 0;
   trk_cov_z0_theta = 0;
   trk_cov_z0_qoverp = 0;
   trk_cov_phi_theta = 0;
   trk_cov_phi_qoverp = 0;
   trk_cov_theta_qoverp = 0;
   trk_d0_wrtPV = 0;
   trk_z0_wrtPV = 0;
   trk_phi_wrtPV = 0;
   trk_err_d0_wrtPV = 0;
   trk_err_z0_wrtPV = 0;
   trk_err_phi_wrtPV = 0;
   trk_err_theta_wrtPV = 0;
   trk_err_qoverp_wrtPV = 0;
   trk_cov_d0_z0_wrtPV = 0;
   trk_cov_d0_phi_wrtPV = 0;
   trk_cov_d0_theta_wrtPV = 0;
   trk_cov_d0_qoverp_wrtPV = 0;
   trk_cov_z0_phi_wrtPV = 0;
   trk_cov_z0_theta_wrtPV = 0;
   trk_cov_z0_qoverp_wrtPV = 0;
   trk_cov_phi_theta_wrtPV = 0;
   trk_cov_phi_qoverp_wrtPV = 0;
   trk_cov_theta_qoverp_wrtPV = 0;
   trk_d0_wrtBS = 0;
   trk_z0_wrtBS = 0;
   trk_phi_wrtBS = 0;
   trk_err_d0_wrtBS = 0;
   trk_err_z0_wrtBS = 0;
   trk_err_phi_wrtBS = 0;
   trk_err_theta_wrtBS = 0;
   trk_err_qoverp_wrtBS = 0;
   trk_cov_d0_z0_wrtBS = 0;
   trk_cov_d0_phi_wrtBS = 0;
   trk_cov_d0_theta_wrtBS = 0;
   trk_cov_d0_qoverp_wrtBS = 0;
   trk_cov_z0_phi_wrtBS = 0;
   trk_cov_z0_theta_wrtBS = 0;
   trk_cov_z0_qoverp_wrtBS = 0;
   trk_cov_phi_theta_wrtBS = 0;
   trk_cov_phi_qoverp_wrtBS = 0;
   trk_cov_theta_qoverp_wrtBS = 0;
   trk_d0_wrtBL = 0;
   trk_z0_wrtBL = 0;
   trk_phi_wrtBL = 0;
   trk_d0_err_wrtBL = 0;
   trk_z0_err_wrtBL = 0;
   trk_phi_err_wrtBL = 0;
   trk_theta_err_wrtBL = 0;
   trk_qoverp_err_wrtBL = 0;
   trk_d0_z0_err_wrtBL = 0;
   trk_d0_phi_err_wrtBL = 0;
   trk_d0_theta_err_wrtBL = 0;
   trk_d0_qoverp_err_wrtBL = 0;
   trk_z0_phi_err_wrtBL = 0;
   trk_z0_theta_err_wrtBL = 0;
   trk_z0_qoverp_err_wrtBL = 0;
   trk_phi_theta_err_wrtBL = 0;
   trk_phi_qoverp_err_wrtBL = 0;
   trk_theta_qoverp_err_wrtBL = 0;
   trk_chi2 = 0;
   trk_ndof = 0;
   trk_nBLHits = 0;
   trk_nPixHits = 0;
   trk_nSCTHits = 0;
   trk_nTRTHits = 0;
   trk_nTRTHighTHits = 0;
   trk_nTRTXenonHits = 0;
   trk_nPixHoles = 0;
   trk_nSCTHoles = 0;
   trk_nTRTHoles = 0;
   trk_nPixelDeadSensors = 0;
   trk_nSCTDeadSensors = 0;
   trk_nBLSharedHits = 0;
   trk_nPixSharedHits = 0;
   trk_nSCTSharedHits = 0;
   trk_nBLayerSplitHits = 0;
   trk_nPixSplitHits = 0;
   trk_nBLayerOutliers = 0;
   trk_nPixelOutliers = 0;
   trk_nSCTOutliers = 0;
   trk_nTRTOutliers = 0;
   trk_nTRTHighTOutliers = 0;
   trk_expectBLayerHit = 0;
   trk_nHits = 0;
   trk_nHoles = 0;
   trk_hitPattern = 0;
   trk_fitter = 0;
   trk_patternReco1 = 0;
   trk_patternReco2 = 0;
   trk_trackProperties = 0;
   trk_particleHypothesis = 0;
   trk_blayerPrediction_x = 0;
   trk_blayerPrediction_y = 0;
   trk_blayerPrediction_z = 0;
   trk_blayerPrediction_locX = 0;
   trk_blayerPrediction_locY = 0;
   trk_blayerPrediction_err_locX = 0;
   trk_blayerPrediction_err_locY = 0;
   trk_blayerPrediction_etaDistToEdge = 0;
   trk_blayerPrediction_phiDistToEdge = 0;
   trk_blayerPrediction_detElementId = 0;
   trk_blayerPrediction_row = 0;
   trk_blayerPrediction_col = 0;
   trk_blayerPrediction_type = 0;
   trk_Pixel_hit_n = 0;
   trk_Pixel_hit_id = 0;
   trk_Pixel_hit_detElementId = 0;
   trk_Pixel_hit_detType = 0;
   trk_Pixel_hit_bec = 0;
   trk_Pixel_hit_layer = 0;
   trk_Pixel_hit_charge = 0;
   trk_Pixel_hit_sizePhi = 0;
   trk_Pixel_hit_sizeZ = 0;
   trk_Pixel_hit_size = 0;
   trk_Pixel_hit_isFake = 0;
   trk_Pixel_hit_isGanged = 0;
   trk_Pixel_hit_isSplit = 0;
   trk_Pixel_hit_splitProb1 = 0;
   trk_Pixel_hit_splitProb2 = 0;
   trk_Pixel_hit_isCompetingRIO = 0;
   trk_Pixel_hit_locX = 0;
   trk_Pixel_hit_locY = 0;
   trk_Pixel_hit_incidencePhi = 0;
   trk_Pixel_hit_incidenceTheta = 0;
   trk_Pixel_hit_err_locX = 0;
   trk_Pixel_hit_err_locY = 0;
   trk_Pixel_hit_cov_locXY = 0;
   trk_Pixel_hit_x = 0;
   trk_Pixel_hit_y = 0;
   trk_Pixel_hit_z = 0;
   trk_Pixel_hit_trkLocX = 0;
   trk_Pixel_hit_trkLocY = 0;
   trk_Pixel_hit_err_trkLocX = 0;
   trk_Pixel_hit_err_trkLocY = 0;
   trk_Pixel_hit_cov_trkLocXY = 0;
   trk_Pixel_hit_chi2 = 0;
   trk_Pixel_hit_ndof = 0;
   trk_SCT_hit_n = 0;
   trk_SCT_hit_id = 0;
   trk_SCT_hit_detElementId = 0;
   trk_SCT_hit_detType = 0;
   trk_SCT_hit_bec = 0;
   trk_SCT_hit_layer = 0;
   trk_SCT_hit_sizePhi = 0;
   trk_SCT_hit_isCompetingRIO = 0;
   trk_SCT_hit_locX = 0;
   trk_SCT_hit_locY = 0;
   trk_SCT_hit_incidencePhi = 0;
   trk_SCT_hit_incidenceTheta = 0;
   trk_SCT_hit_err_locX = 0;
   trk_SCT_hit_err_locY = 0;
   trk_SCT_hit_cov_locXY = 0;
   trk_SCT_hit_x = 0;
   trk_SCT_hit_y = 0;
   trk_SCT_hit_z = 0;
   trk_SCT_hit_trkLocX = 0;
   trk_SCT_hit_trkLocY = 0;
   trk_SCT_hit_err_trkLocX = 0;
   trk_SCT_hit_err_trkLocY = 0;
   trk_SCT_hit_cov_trkLocXY = 0;
   trk_SCT_hit_chi2 = 0;
   trk_SCT_hit_ndof = 0;
   trk_TRT_hit_n = 0;
   trk_TRT_hit_id = 0;
   trk_TRT_hit_detElementId = 0;
   trk_TRT_hit_detType = 0;
   trk_TRT_hit_bec = 0;
   trk_TRT_hit_layer = 0;
   trk_TRT_hit_isCompetingRIO = 0;
   trk_TRT_hit_locR = 0;
   trk_TRT_hit_err_locR = 0;
   trk_TRT_hit_trkLocR = 0;
   trk_TRT_hit_trkLocPhi = 0;
   trk_TRT_hit_err_trkLocR = 0;
   trk_TRT_hit_err_trkLocPhi = 0;
   trk_TRT_hit_cov_trkLocRPhi = 0;
   trk_TRT_hit_TOT = 0;
   trk_TRT_hit_highLevel = 0;
   trk_TRT_hit_trailingEdge = 0;
   trk_TRT_hit_chi2 = 0;
   trk_TRT_hit_ndof = 0;
   trk_Pixel_outlier_n = 0;
   trk_Pixel_outlier_id = 0;
   trk_Pixel_outlier_detElementId = 0;
   trk_Pixel_outlier_detType = 0;
   trk_Pixel_outlier_bec = 0;
   trk_Pixel_outlier_layer = 0;
   trk_Pixel_outlier_charge = 0;
   trk_Pixel_outlier_sizePhi = 0;
   trk_Pixel_outlier_sizeZ = 0;
   trk_Pixel_outlier_size = 0;
   trk_Pixel_outlier_isFake = 0;
   trk_Pixel_outlier_isGanged = 0;
   trk_Pixel_outlier_isSplit = 0;
   trk_Pixel_outlier_splitProb1 = 0;
   trk_Pixel_outlier_splitProb2 = 0;
   trk_Pixel_outlier_isCompetingRIO = 0;
   trk_Pixel_outlier_locX = 0;
   trk_Pixel_outlier_locY = 0;
   trk_Pixel_outlier_incidencePhi = 0;
   trk_Pixel_outlier_incidenceTheta = 0;
   trk_Pixel_outlier_err_locX = 0;
   trk_Pixel_outlier_err_locY = 0;
   trk_Pixel_outlier_cov_locXY = 0;
   trk_Pixel_outlier_x = 0;
   trk_Pixel_outlier_y = 0;
   trk_Pixel_outlier_z = 0;
   trk_Pixel_outlier_trkLocX = 0;
   trk_Pixel_outlier_trkLocY = 0;
   trk_Pixel_outlier_err_trkLocX = 0;
   trk_Pixel_outlier_err_trkLocY = 0;
   trk_Pixel_outlier_cov_trkLocXY = 0;
   trk_Pixel_outlier_chi2 = 0;
   trk_Pixel_outlier_ndof = 0;
   trk_SCT_outlier_n = 0;
   trk_SCT_outlier_id = 0;
   trk_SCT_outlier_detElementId = 0;
   trk_SCT_outlier_detType = 0;
   trk_SCT_outlier_bec = 0;
   trk_SCT_outlier_layer = 0;
   trk_SCT_outlier_sizePhi = 0;
   trk_SCT_outlier_isCompetingRIO = 0;
   trk_SCT_outlier_locX = 0;
   trk_SCT_outlier_locY = 0;
   trk_SCT_outlier_incidencePhi = 0;
   trk_SCT_outlier_incidenceTheta = 0;
   trk_SCT_outlier_err_locX = 0;
   trk_SCT_outlier_err_locY = 0;
   trk_SCT_outlier_cov_locXY = 0;
   trk_SCT_outlier_x = 0;
   trk_SCT_outlier_y = 0;
   trk_SCT_outlier_z = 0;
   trk_SCT_outlier_trkLocX = 0;
   trk_SCT_outlier_trkLocY = 0;
   trk_SCT_outlier_err_trkLocX = 0;
   trk_SCT_outlier_err_trkLocY = 0;
   trk_SCT_outlier_cov_trkLocXY = 0;
   trk_SCT_outlier_chi2 = 0;
   trk_SCT_outlier_ndof = 0;
   trk_TRT_outlier_n = 0;
   trk_TRT_outlier_id = 0;
   trk_TRT_outlier_detElementId = 0;
   trk_TRT_outlier_detType = 0;
   trk_TRT_outlier_bec = 0;
   trk_TRT_outlier_layer = 0;
   trk_TRT_outlier_isCompetingRIO = 0;
   trk_TRT_outlier_locR = 0;
   trk_TRT_outlier_err_locR = 0;
   trk_TRT_outlier_trkLocR = 0;
   trk_TRT_outlier_trkLocPhi = 0;
   trk_TRT_outlier_err_trkLocR = 0;
   trk_TRT_outlier_err_trkLocPhi = 0;
   trk_TRT_outlier_cov_trkLocRPhi = 0;
   trk_TRT_outlier_TOT = 0;
   trk_TRT_outlier_highLevel = 0;
   trk_TRT_outlier_trailingEdge = 0;
   trk_TRT_outlier_chi2 = 0;
   trk_TRT_outlier_ndof = 0;
   trk_Pixel_hole_n = 0;
   trk_Pixel_hole_detElementId = 0;
   trk_Pixel_hole_bec = 0;
   trk_Pixel_hole_layer = 0;
   trk_Pixel_hole_trkLocX = 0;
   trk_Pixel_hole_trkLocY = 0;
   trk_Pixel_hole_err_trkLocX = 0;
   trk_Pixel_hole_err_trkLocY = 0;
   trk_Pixel_hole_cov_trkLocXY = 0;
   trk_SCT_hole_n = 0;
   trk_SCT_hole_detElementId = 0;
   trk_SCT_hole_bec = 0;
   trk_SCT_hole_layer = 0;
   trk_SCT_hole_trkLocX = 0;
   trk_SCT_hole_trkLocY = 0;
   trk_SCT_hole_err_trkLocX = 0;
   trk_SCT_hole_err_trkLocY = 0;
   trk_SCT_hole_cov_trkLocXY = 0;
   trk_TRT_hole_n = 0;
   trk_TRT_hole_detElementId = 0;
   trk_TRT_hole_bec = 0;
   trk_TRT_hole_layer = 0;
   trk_TRT_hole_trkLocR = 0;
   trk_TRT_hole_trkLocPhi = 0;
   trk_TRT_hole_err_trkLocR = 0;
   trk_TRT_hole_err_trkLocPhi = 0;
   trk_TRT_hole_cov_trkLocRPhi = 0;
   pTrklets_nBPixClus = 0;
   pTrklets_n1PixClus = 0;
   pTrklets_n2PixClus = 0;
   pTrklets_layerSum = 0;
   pTrklets_eta = 0;
   pTrklets_phi = 0;
   pTrklets_pt = 0;
   pTrklets_deta = 0;
   pTrklets_dphi = 0;
   pTrklets_etaS = 0;
   pTrklets_phiS = 0;
   pTrklets_energy0 = 0;
   pTrklets_energy1 = 0;
   pTrklets_cSize0 = 0;
   pTrklets_cSize1 = 0;
   pTrklets_cRowSize0 = 0;
   pTrklets_cRowSize1 = 0;
   pTrklets_cColSize0 = 0;
   pTrklets_cColSize1 = 0;
   pTrklets_clusIds = 0;
   trkPix_d0 = 0;
   trkPix_z0 = 0;
   trkPix_phi = 0;
   trkPix_theta = 0;
   trkPix_qoverp = 0;
   trkPix_pt = 0;
   trkPix_eta = 0;
   trkPix_err_d0 = 0;
   trkPix_err_z0 = 0;
   trkPix_err_phi = 0;
   trkPix_err_theta = 0;
   trkPix_err_qoverp = 0;
   trkPix_cov_d0_z0 = 0;
   trkPix_cov_d0_phi = 0;
   trkPix_cov_d0_theta = 0;
   trkPix_cov_d0_qoverp = 0;
   trkPix_cov_z0_phi = 0;
   trkPix_cov_z0_theta = 0;
   trkPix_cov_z0_qoverp = 0;
   trkPix_cov_phi_theta = 0;
   trkPix_cov_phi_qoverp = 0;
   trkPix_cov_theta_qoverp = 0;
   trkPix_d0_wrtPV = 0;
   trkPix_z0_wrtPV = 0;
   trkPix_phi_wrtPV = 0;
   trkPix_err_d0_wrtPV = 0;
   trkPix_err_z0_wrtPV = 0;
   trkPix_err_phi_wrtPV = 0;
   trkPix_err_theta_wrtPV = 0;
   trkPix_err_qoverp_wrtPV = 0;
   trkPix_cov_d0_z0_wrtPV = 0;
   trkPix_cov_d0_phi_wrtPV = 0;
   trkPix_cov_d0_theta_wrtPV = 0;
   trkPix_cov_d0_qoverp_wrtPV = 0;
   trkPix_cov_z0_phi_wrtPV = 0;
   trkPix_cov_z0_theta_wrtPV = 0;
   trkPix_cov_z0_qoverp_wrtPV = 0;
   trkPix_cov_phi_theta_wrtPV = 0;
   trkPix_cov_phi_qoverp_wrtPV = 0;
   trkPix_cov_theta_qoverp_wrtPV = 0;
   trkPix_d0_wrtBS = 0;
   trkPix_z0_wrtBS = 0;
   trkPix_phi_wrtBS = 0;
   trkPix_err_d0_wrtBS = 0;
   trkPix_err_z0_wrtBS = 0;
   trkPix_err_phi_wrtBS = 0;
   trkPix_err_theta_wrtBS = 0;
   trkPix_err_qoverp_wrtBS = 0;
   trkPix_cov_d0_z0_wrtBS = 0;
   trkPix_cov_d0_phi_wrtBS = 0;
   trkPix_cov_d0_theta_wrtBS = 0;
   trkPix_cov_d0_qoverp_wrtBS = 0;
   trkPix_cov_z0_phi_wrtBS = 0;
   trkPix_cov_z0_theta_wrtBS = 0;
   trkPix_cov_z0_qoverp_wrtBS = 0;
   trkPix_cov_phi_theta_wrtBS = 0;
   trkPix_cov_phi_qoverp_wrtBS = 0;
   trkPix_cov_theta_qoverp_wrtBS = 0;
   trkPix_d0_wrtBL = 0;
   trkPix_z0_wrtBL = 0;
   trkPix_phi_wrtBL = 0;
   trkPix_d0_err_wrtBL = 0;
   trkPix_z0_err_wrtBL = 0;
   trkPix_phi_err_wrtBL = 0;
   trkPix_theta_err_wrtBL = 0;
   trkPix_qoverp_err_wrtBL = 0;
   trkPix_d0_z0_err_wrtBL = 0;
   trkPix_d0_phi_err_wrtBL = 0;
   trkPix_d0_theta_err_wrtBL = 0;
   trkPix_d0_qoverp_err_wrtBL = 0;
   trkPix_z0_phi_err_wrtBL = 0;
   trkPix_z0_theta_err_wrtBL = 0;
   trkPix_z0_qoverp_err_wrtBL = 0;
   trkPix_phi_theta_err_wrtBL = 0;
   trkPix_phi_qoverp_err_wrtBL = 0;
   trkPix_theta_qoverp_err_wrtBL = 0;
   trkPix_chi2 = 0;
   trkPix_ndof = 0;
   trkPix_nBLHits = 0;
   trkPix_nPixHits = 0;
   trkPix_nSCTHits = 0;
   trkPix_nTRTHits = 0;
   trkPix_nTRTHighTHits = 0;
   trkPix_nTRTXenonHits = 0;
   trkPix_nPixHoles = 0;
   trkPix_nSCTHoles = 0;
   trkPix_nTRTHoles = 0;
   trkPix_nPixelDeadSensors = 0;
   trkPix_nSCTDeadSensors = 0;
   trkPix_nBLSharedHits = 0;
   trkPix_nPixSharedHits = 0;
   trkPix_nSCTSharedHits = 0;
   trkPix_nBLayerSplitHits = 0;
   trkPix_nPixSplitHits = 0;
   trkPix_nBLayerOutliers = 0;
   trkPix_nPixelOutliers = 0;
   trkPix_nSCTOutliers = 0;
   trkPix_nTRTOutliers = 0;
   trkPix_nTRTHighTOutliers = 0;
   trkPix_expectBLayerHit = 0;
   trkPix_nHits = 0;
   trkPix_nHoles = 0;
   trkPix_hitPattern = 0;
   trkPix_fitter = 0;
   trkPix_patternReco1 = 0;
   trkPix_patternReco2 = 0;
   trkPix_trackProperties = 0;
   trkPix_particleHypothesis = 0;
   trkPix_blayerPrediction_x = 0;
   trkPix_blayerPrediction_y = 0;
   trkPix_blayerPrediction_z = 0;
   trkPix_blayerPrediction_locX = 0;
   trkPix_blayerPrediction_locY = 0;
   trkPix_blayerPrediction_err_locX = 0;
   trkPix_blayerPrediction_err_locY = 0;
   trkPix_blayerPrediction_etaDistToEdge = 0;
   trkPix_blayerPrediction_phiDistToEdge = 0;
   trkPix_blayerPrediction_detElementId = 0;
   trkPix_blayerPrediction_row = 0;
   trkPix_blayerPrediction_col = 0;
   trkPix_blayerPrediction_type = 0;
   trkPix_Pixel_hit_n = 0;
   trkPix_Pixel_hit_id = 0;
   trkPix_Pixel_hit_detElementId = 0;
   trkPix_Pixel_hit_detType = 0;
   trkPix_Pixel_hit_bec = 0;
   trkPix_Pixel_hit_layer = 0;
   trkPix_Pixel_hit_charge = 0;
   trkPix_Pixel_hit_sizePhi = 0;
   trkPix_Pixel_hit_sizeZ = 0;
   trkPix_Pixel_hit_size = 0;
   trkPix_Pixel_hit_isFake = 0;
   trkPix_Pixel_hit_isGanged = 0;
   trkPix_Pixel_hit_isSplit = 0;
   trkPix_Pixel_hit_splitProb1 = 0;
   trkPix_Pixel_hit_splitProb2 = 0;
   trkPix_Pixel_hit_isCompetingRIO = 0;
   trkPix_Pixel_hit_locX = 0;
   trkPix_Pixel_hit_locY = 0;
   trkPix_Pixel_hit_incidencePhi = 0;
   trkPix_Pixel_hit_incidenceTheta = 0;
   trkPix_Pixel_hit_err_locX = 0;
   trkPix_Pixel_hit_err_locY = 0;
   trkPix_Pixel_hit_cov_locXY = 0;
   trkPix_Pixel_hit_x = 0;
   trkPix_Pixel_hit_y = 0;
   trkPix_Pixel_hit_z = 0;
   trkPix_Pixel_hit_trkLocX = 0;
   trkPix_Pixel_hit_trkLocY = 0;
   trkPix_Pixel_hit_err_trkLocX = 0;
   trkPix_Pixel_hit_err_trkLocY = 0;
   trkPix_Pixel_hit_cov_trkLocXY = 0;
   trkPix_Pixel_hit_chi2 = 0;
   trkPix_Pixel_hit_ndof = 0;
   trkPix_SCT_hit_n = 0;
   trkPix_SCT_hit_id = 0;
   trkPix_SCT_hit_detElementId = 0;
   trkPix_SCT_hit_detType = 0;
   trkPix_SCT_hit_bec = 0;
   trkPix_SCT_hit_layer = 0;
   trkPix_SCT_hit_sizePhi = 0;
   trkPix_SCT_hit_isCompetingRIO = 0;
   trkPix_SCT_hit_locX = 0;
   trkPix_SCT_hit_locY = 0;
   trkPix_SCT_hit_incidencePhi = 0;
   trkPix_SCT_hit_incidenceTheta = 0;
   trkPix_SCT_hit_err_locX = 0;
   trkPix_SCT_hit_err_locY = 0;
   trkPix_SCT_hit_cov_locXY = 0;
   trkPix_SCT_hit_x = 0;
   trkPix_SCT_hit_y = 0;
   trkPix_SCT_hit_z = 0;
   trkPix_SCT_hit_trkLocX = 0;
   trkPix_SCT_hit_trkLocY = 0;
   trkPix_SCT_hit_err_trkLocX = 0;
   trkPix_SCT_hit_err_trkLocY = 0;
   trkPix_SCT_hit_cov_trkLocXY = 0;
   trkPix_SCT_hit_chi2 = 0;
   trkPix_SCT_hit_ndof = 0;
   trkPix_TRT_hit_n = 0;
   trkPix_TRT_hit_id = 0;
   trkPix_TRT_hit_detElementId = 0;
   trkPix_TRT_hit_detType = 0;
   trkPix_TRT_hit_bec = 0;
   trkPix_TRT_hit_layer = 0;
   trkPix_TRT_hit_isCompetingRIO = 0;
   trkPix_TRT_hit_locR = 0;
   trkPix_TRT_hit_err_locR = 0;
   trkPix_TRT_hit_trkLocR = 0;
   trkPix_TRT_hit_trkLocPhi = 0;
   trkPix_TRT_hit_err_trkLocR = 0;
   trkPix_TRT_hit_err_trkLocPhi = 0;
   trkPix_TRT_hit_cov_trkLocRPhi = 0;
   trkPix_TRT_hit_TOT = 0;
   trkPix_TRT_hit_highLevel = 0;
   trkPix_TRT_hit_trailingEdge = 0;
   trkPix_TRT_hit_chi2 = 0;
   trkPix_TRT_hit_ndof = 0;
   trkPix_Pixel_outlier_n = 0;
   trkPix_Pixel_outlier_id = 0;
   trkPix_Pixel_outlier_detElementId = 0;
   trkPix_Pixel_outlier_detType = 0;
   trkPix_Pixel_outlier_bec = 0;
   trkPix_Pixel_outlier_layer = 0;
   trkPix_Pixel_outlier_charge = 0;
   trkPix_Pixel_outlier_sizePhi = 0;
   trkPix_Pixel_outlier_sizeZ = 0;
   trkPix_Pixel_outlier_size = 0;
   trkPix_Pixel_outlier_isFake = 0;
   trkPix_Pixel_outlier_isGanged = 0;
   trkPix_Pixel_outlier_isSplit = 0;
   trkPix_Pixel_outlier_splitProb1 = 0;
   trkPix_Pixel_outlier_splitProb2 = 0;
   trkPix_Pixel_outlier_isCompetingRIO = 0;
   trkPix_Pixel_outlier_locX = 0;
   trkPix_Pixel_outlier_locY = 0;
   trkPix_Pixel_outlier_incidencePhi = 0;
   trkPix_Pixel_outlier_incidenceTheta = 0;
   trkPix_Pixel_outlier_err_locX = 0;
   trkPix_Pixel_outlier_err_locY = 0;
   trkPix_Pixel_outlier_cov_locXY = 0;
   trkPix_Pixel_outlier_x = 0;
   trkPix_Pixel_outlier_y = 0;
   trkPix_Pixel_outlier_z = 0;
   trkPix_Pixel_outlier_trkLocX = 0;
   trkPix_Pixel_outlier_trkLocY = 0;
   trkPix_Pixel_outlier_err_trkLocX = 0;
   trkPix_Pixel_outlier_err_trkLocY = 0;
   trkPix_Pixel_outlier_cov_trkLocXY = 0;
   trkPix_Pixel_outlier_chi2 = 0;
   trkPix_Pixel_outlier_ndof = 0;
   trkPix_SCT_outlier_n = 0;
   trkPix_SCT_outlier_id = 0;
   trkPix_SCT_outlier_detElementId = 0;
   trkPix_SCT_outlier_detType = 0;
   trkPix_SCT_outlier_bec = 0;
   trkPix_SCT_outlier_layer = 0;
   trkPix_SCT_outlier_sizePhi = 0;
   trkPix_SCT_outlier_isCompetingRIO = 0;
   trkPix_SCT_outlier_locX = 0;
   trkPix_SCT_outlier_locY = 0;
   trkPix_SCT_outlier_incidencePhi = 0;
   trkPix_SCT_outlier_incidenceTheta = 0;
   trkPix_SCT_outlier_err_locX = 0;
   trkPix_SCT_outlier_err_locY = 0;
   trkPix_SCT_outlier_cov_locXY = 0;
   trkPix_SCT_outlier_x = 0;
   trkPix_SCT_outlier_y = 0;
   trkPix_SCT_outlier_z = 0;
   trkPix_SCT_outlier_trkLocX = 0;
   trkPix_SCT_outlier_trkLocY = 0;
   trkPix_SCT_outlier_err_trkLocX = 0;
   trkPix_SCT_outlier_err_trkLocY = 0;
   trkPix_SCT_outlier_cov_trkLocXY = 0;
   trkPix_SCT_outlier_chi2 = 0;
   trkPix_SCT_outlier_ndof = 0;
   trkPix_TRT_outlier_n = 0;
   trkPix_TRT_outlier_id = 0;
   trkPix_TRT_outlier_detElementId = 0;
   trkPix_TRT_outlier_detType = 0;
   trkPix_TRT_outlier_bec = 0;
   trkPix_TRT_outlier_layer = 0;
   trkPix_TRT_outlier_isCompetingRIO = 0;
   trkPix_TRT_outlier_locR = 0;
   trkPix_TRT_outlier_err_locR = 0;
   trkPix_TRT_outlier_trkLocR = 0;
   trkPix_TRT_outlier_trkLocPhi = 0;
   trkPix_TRT_outlier_err_trkLocR = 0;
   trkPix_TRT_outlier_err_trkLocPhi = 0;
   trkPix_TRT_outlier_cov_trkLocRPhi = 0;
   trkPix_TRT_outlier_TOT = 0;
   trkPix_TRT_outlier_highLevel = 0;
   trkPix_TRT_outlier_trailingEdge = 0;
   trkPix_TRT_outlier_chi2 = 0;
   trkPix_TRT_outlier_ndof = 0;
   trkPix_Pixel_hole_n = 0;
   trkPix_Pixel_hole_detElementId = 0;
   trkPix_Pixel_hole_bec = 0;
   trkPix_Pixel_hole_layer = 0;
   trkPix_Pixel_hole_trkLocX = 0;
   trkPix_Pixel_hole_trkLocY = 0;
   trkPix_Pixel_hole_err_trkLocX = 0;
   trkPix_Pixel_hole_err_trkLocY = 0;
   trkPix_Pixel_hole_cov_trkLocXY = 0;
   trkPix_SCT_hole_n = 0;
   trkPix_SCT_hole_detElementId = 0;
   trkPix_SCT_hole_bec = 0;
   trkPix_SCT_hole_layer = 0;
   trkPix_SCT_hole_trkLocX = 0;
   trkPix_SCT_hole_trkLocY = 0;
   trkPix_SCT_hole_err_trkLocX = 0;
   trkPix_SCT_hole_err_trkLocY = 0;
   trkPix_SCT_hole_cov_trkLocXY = 0;
   trkPix_TRT_hole_n = 0;
   trkPix_TRT_hole_detElementId = 0;
   trkPix_TRT_hole_bec = 0;
   trkPix_TRT_hole_layer = 0;
   trkPix_TRT_hole_trkLocR = 0;
   trkPix_TRT_hole_trkLocPhi = 0;
   trkPix_TRT_hole_err_trkLocR = 0;
   trkPix_TRT_hole_err_trkLocPhi = 0;
   trkPix_TRT_hole_cov_trkLocRPhi = 0;
   trkSCT_d0 = 0;
   trkSCT_z0 = 0;
   trkSCT_phi = 0;
   trkSCT_theta = 0;
   trkSCT_qoverp = 0;
   trkSCT_pt = 0;
   trkSCT_eta = 0;
   trkSCT_err_d0 = 0;
   trkSCT_err_z0 = 0;
   trkSCT_err_phi = 0;
   trkSCT_err_theta = 0;
   trkSCT_err_qoverp = 0;
   trkSCT_cov_d0_z0 = 0;
   trkSCT_cov_d0_phi = 0;
   trkSCT_cov_d0_theta = 0;
   trkSCT_cov_d0_qoverp = 0;
   trkSCT_cov_z0_phi = 0;
   trkSCT_cov_z0_theta = 0;
   trkSCT_cov_z0_qoverp = 0;
   trkSCT_cov_phi_theta = 0;
   trkSCT_cov_phi_qoverp = 0;
   trkSCT_cov_theta_qoverp = 0;
   trkSCT_d0_wrtPV = 0;
   trkSCT_z0_wrtPV = 0;
   trkSCT_phi_wrtPV = 0;
   trkSCT_err_d0_wrtPV = 0;
   trkSCT_err_z0_wrtPV = 0;
   trkSCT_err_phi_wrtPV = 0;
   trkSCT_err_theta_wrtPV = 0;
   trkSCT_err_qoverp_wrtPV = 0;
   trkSCT_cov_d0_z0_wrtPV = 0;
   trkSCT_cov_d0_phi_wrtPV = 0;
   trkSCT_cov_d0_theta_wrtPV = 0;
   trkSCT_cov_d0_qoverp_wrtPV = 0;
   trkSCT_cov_z0_phi_wrtPV = 0;
   trkSCT_cov_z0_theta_wrtPV = 0;
   trkSCT_cov_z0_qoverp_wrtPV = 0;
   trkSCT_cov_phi_theta_wrtPV = 0;
   trkSCT_cov_phi_qoverp_wrtPV = 0;
   trkSCT_cov_theta_qoverp_wrtPV = 0;
   trkSCT_d0_wrtBS = 0;
   trkSCT_z0_wrtBS = 0;
   trkSCT_phi_wrtBS = 0;
   trkSCT_err_d0_wrtBS = 0;
   trkSCT_err_z0_wrtBS = 0;
   trkSCT_err_phi_wrtBS = 0;
   trkSCT_err_theta_wrtBS = 0;
   trkSCT_err_qoverp_wrtBS = 0;
   trkSCT_cov_d0_z0_wrtBS = 0;
   trkSCT_cov_d0_phi_wrtBS = 0;
   trkSCT_cov_d0_theta_wrtBS = 0;
   trkSCT_cov_d0_qoverp_wrtBS = 0;
   trkSCT_cov_z0_phi_wrtBS = 0;
   trkSCT_cov_z0_theta_wrtBS = 0;
   trkSCT_cov_z0_qoverp_wrtBS = 0;
   trkSCT_cov_phi_theta_wrtBS = 0;
   trkSCT_cov_phi_qoverp_wrtBS = 0;
   trkSCT_cov_theta_qoverp_wrtBS = 0;
   trkSCT_d0_wrtBL = 0;
   trkSCT_z0_wrtBL = 0;
   trkSCT_phi_wrtBL = 0;
   trkSCT_d0_err_wrtBL = 0;
   trkSCT_z0_err_wrtBL = 0;
   trkSCT_phi_err_wrtBL = 0;
   trkSCT_theta_err_wrtBL = 0;
   trkSCT_qoverp_err_wrtBL = 0;
   trkSCT_d0_z0_err_wrtBL = 0;
   trkSCT_d0_phi_err_wrtBL = 0;
   trkSCT_d0_theta_err_wrtBL = 0;
   trkSCT_d0_qoverp_err_wrtBL = 0;
   trkSCT_z0_phi_err_wrtBL = 0;
   trkSCT_z0_theta_err_wrtBL = 0;
   trkSCT_z0_qoverp_err_wrtBL = 0;
   trkSCT_phi_theta_err_wrtBL = 0;
   trkSCT_phi_qoverp_err_wrtBL = 0;
   trkSCT_theta_qoverp_err_wrtBL = 0;
   trkSCT_chi2 = 0;
   trkSCT_ndof = 0;
   trkSCT_nBLHits = 0;
   trkSCT_nPixHits = 0;
   trkSCT_nSCTHits = 0;
   trkSCT_nTRTHits = 0;
   trkSCT_nTRTHighTHits = 0;
   trkSCT_nTRTXenonHits = 0;
   trkSCT_nPixHoles = 0;
   trkSCT_nSCTHoles = 0;
   trkSCT_nTRTHoles = 0;
   trkSCT_nPixelDeadSensors = 0;
   trkSCT_nSCTDeadSensors = 0;
   trkSCT_nBLSharedHits = 0;
   trkSCT_nPixSharedHits = 0;
   trkSCT_nSCTSharedHits = 0;
   trkSCT_nBLayerSplitHits = 0;
   trkSCT_nPixSplitHits = 0;
   trkSCT_nBLayerOutliers = 0;
   trkSCT_nPixelOutliers = 0;
   trkSCT_nSCTOutliers = 0;
   trkSCT_nTRTOutliers = 0;
   trkSCT_nTRTHighTOutliers = 0;
   trkSCT_expectBLayerHit = 0;
   trkSCT_nHits = 0;
   trkSCT_nHoles = 0;
   trkSCT_hitPattern = 0;
   trkSCT_fitter = 0;
   trkSCT_patternReco1 = 0;
   trkSCT_patternReco2 = 0;
   trkSCT_trackProperties = 0;
   trkSCT_particleHypothesis = 0;
   trkSCT_blayerPrediction_x = 0;
   trkSCT_blayerPrediction_y = 0;
   trkSCT_blayerPrediction_z = 0;
   trkSCT_blayerPrediction_locX = 0;
   trkSCT_blayerPrediction_locY = 0;
   trkSCT_blayerPrediction_err_locX = 0;
   trkSCT_blayerPrediction_err_locY = 0;
   trkSCT_blayerPrediction_etaDistToEdge = 0;
   trkSCT_blayerPrediction_phiDistToEdge = 0;
   trkSCT_blayerPrediction_detElementId = 0;
   trkSCT_blayerPrediction_row = 0;
   trkSCT_blayerPrediction_col = 0;
   trkSCT_blayerPrediction_type = 0;
   trkSCT_Pixel_hit_n = 0;
   trkSCT_Pixel_hit_id = 0;
   trkSCT_Pixel_hit_detElementId = 0;
   trkSCT_Pixel_hit_detType = 0;
   trkSCT_Pixel_hit_bec = 0;
   trkSCT_Pixel_hit_layer = 0;
   trkSCT_Pixel_hit_charge = 0;
   trkSCT_Pixel_hit_sizePhi = 0;
   trkSCT_Pixel_hit_sizeZ = 0;
   trkSCT_Pixel_hit_size = 0;
   trkSCT_Pixel_hit_isFake = 0;
   trkSCT_Pixel_hit_isGanged = 0;
   trkSCT_Pixel_hit_isSplit = 0;
   trkSCT_Pixel_hit_splitProb1 = 0;
   trkSCT_Pixel_hit_splitProb2 = 0;
   trkSCT_Pixel_hit_isCompetingRIO = 0;
   trkSCT_Pixel_hit_locX = 0;
   trkSCT_Pixel_hit_locY = 0;
   trkSCT_Pixel_hit_incidencePhi = 0;
   trkSCT_Pixel_hit_incidenceTheta = 0;
   trkSCT_Pixel_hit_err_locX = 0;
   trkSCT_Pixel_hit_err_locY = 0;
   trkSCT_Pixel_hit_cov_locXY = 0;
   trkSCT_Pixel_hit_x = 0;
   trkSCT_Pixel_hit_y = 0;
   trkSCT_Pixel_hit_z = 0;
   trkSCT_Pixel_hit_trkLocX = 0;
   trkSCT_Pixel_hit_trkLocY = 0;
   trkSCT_Pixel_hit_err_trkLocX = 0;
   trkSCT_Pixel_hit_err_trkLocY = 0;
   trkSCT_Pixel_hit_cov_trkLocXY = 0;
   trkSCT_Pixel_hit_chi2 = 0;
   trkSCT_Pixel_hit_ndof = 0;
   trkSCT_SCT_hit_n = 0;
   trkSCT_SCT_hit_id = 0;
   trkSCT_SCT_hit_detElementId = 0;
   trkSCT_SCT_hit_detType = 0;
   trkSCT_SCT_hit_bec = 0;
   trkSCT_SCT_hit_layer = 0;
   trkSCT_SCT_hit_sizePhi = 0;
   trkSCT_SCT_hit_isCompetingRIO = 0;
   trkSCT_SCT_hit_locX = 0;
   trkSCT_SCT_hit_locY = 0;
   trkSCT_SCT_hit_incidencePhi = 0;
   trkSCT_SCT_hit_incidenceTheta = 0;
   trkSCT_SCT_hit_err_locX = 0;
   trkSCT_SCT_hit_err_locY = 0;
   trkSCT_SCT_hit_cov_locXY = 0;
   trkSCT_SCT_hit_x = 0;
   trkSCT_SCT_hit_y = 0;
   trkSCT_SCT_hit_z = 0;
   trkSCT_SCT_hit_trkLocX = 0;
   trkSCT_SCT_hit_trkLocY = 0;
   trkSCT_SCT_hit_err_trkLocX = 0;
   trkSCT_SCT_hit_err_trkLocY = 0;
   trkSCT_SCT_hit_cov_trkLocXY = 0;
   trkSCT_SCT_hit_chi2 = 0;
   trkSCT_SCT_hit_ndof = 0;
   trkSCT_TRT_hit_n = 0;
   trkSCT_TRT_hit_id = 0;
   trkSCT_TRT_hit_detElementId = 0;
   trkSCT_TRT_hit_detType = 0;
   trkSCT_TRT_hit_bec = 0;
   trkSCT_TRT_hit_layer = 0;
   trkSCT_TRT_hit_isCompetingRIO = 0;
   trkSCT_TRT_hit_locR = 0;
   trkSCT_TRT_hit_err_locR = 0;
   trkSCT_TRT_hit_trkLocR = 0;
   trkSCT_TRT_hit_trkLocPhi = 0;
   trkSCT_TRT_hit_err_trkLocR = 0;
   trkSCT_TRT_hit_err_trkLocPhi = 0;
   trkSCT_TRT_hit_cov_trkLocRPhi = 0;
   trkSCT_TRT_hit_TOT = 0;
   trkSCT_TRT_hit_highLevel = 0;
   trkSCT_TRT_hit_trailingEdge = 0;
   trkSCT_TRT_hit_chi2 = 0;
   trkSCT_TRT_hit_ndof = 0;
   trkSCT_Pixel_outlier_n = 0;
   trkSCT_Pixel_outlier_id = 0;
   trkSCT_Pixel_outlier_detElementId = 0;
   trkSCT_Pixel_outlier_detType = 0;
   trkSCT_Pixel_outlier_bec = 0;
   trkSCT_Pixel_outlier_layer = 0;
   trkSCT_Pixel_outlier_charge = 0;
   trkSCT_Pixel_outlier_sizePhi = 0;
   trkSCT_Pixel_outlier_sizeZ = 0;
   trkSCT_Pixel_outlier_size = 0;
   trkSCT_Pixel_outlier_isFake = 0;
   trkSCT_Pixel_outlier_isGanged = 0;
   trkSCT_Pixel_outlier_isSplit = 0;
   trkSCT_Pixel_outlier_splitProb1 = 0;
   trkSCT_Pixel_outlier_splitProb2 = 0;
   trkSCT_Pixel_outlier_isCompetingRIO = 0;
   trkSCT_Pixel_outlier_locX = 0;
   trkSCT_Pixel_outlier_locY = 0;
   trkSCT_Pixel_outlier_incidencePhi = 0;
   trkSCT_Pixel_outlier_incidenceTheta = 0;
   trkSCT_Pixel_outlier_err_locX = 0;
   trkSCT_Pixel_outlier_err_locY = 0;
   trkSCT_Pixel_outlier_cov_locXY = 0;
   trkSCT_Pixel_outlier_x = 0;
   trkSCT_Pixel_outlier_y = 0;
   trkSCT_Pixel_outlier_z = 0;
   trkSCT_Pixel_outlier_trkLocX = 0;
   trkSCT_Pixel_outlier_trkLocY = 0;
   trkSCT_Pixel_outlier_err_trkLocX = 0;
   trkSCT_Pixel_outlier_err_trkLocY = 0;
   trkSCT_Pixel_outlier_cov_trkLocXY = 0;
   trkSCT_Pixel_outlier_chi2 = 0;
   trkSCT_Pixel_outlier_ndof = 0;
   trkSCT_SCT_outlier_n = 0;
   trkSCT_SCT_outlier_id = 0;
   trkSCT_SCT_outlier_detElementId = 0;
   trkSCT_SCT_outlier_detType = 0;
   trkSCT_SCT_outlier_bec = 0;
   trkSCT_SCT_outlier_layer = 0;
   trkSCT_SCT_outlier_sizePhi = 0;
   trkSCT_SCT_outlier_isCompetingRIO = 0;
   trkSCT_SCT_outlier_locX = 0;
   trkSCT_SCT_outlier_locY = 0;
   trkSCT_SCT_outlier_incidencePhi = 0;
   trkSCT_SCT_outlier_incidenceTheta = 0;
   trkSCT_SCT_outlier_err_locX = 0;
   trkSCT_SCT_outlier_err_locY = 0;
   trkSCT_SCT_outlier_cov_locXY = 0;
   trkSCT_SCT_outlier_x = 0;
   trkSCT_SCT_outlier_y = 0;
   trkSCT_SCT_outlier_z = 0;
   trkSCT_SCT_outlier_trkLocX = 0;
   trkSCT_SCT_outlier_trkLocY = 0;
   trkSCT_SCT_outlier_err_trkLocX = 0;
   trkSCT_SCT_outlier_err_trkLocY = 0;
   trkSCT_SCT_outlier_cov_trkLocXY = 0;
   trkSCT_SCT_outlier_chi2 = 0;
   trkSCT_SCT_outlier_ndof = 0;
   trkSCT_TRT_outlier_n = 0;
   trkSCT_TRT_outlier_id = 0;
   trkSCT_TRT_outlier_detElementId = 0;
   trkSCT_TRT_outlier_detType = 0;
   trkSCT_TRT_outlier_bec = 0;
   trkSCT_TRT_outlier_layer = 0;
   trkSCT_TRT_outlier_isCompetingRIO = 0;
   trkSCT_TRT_outlier_locR = 0;
   trkSCT_TRT_outlier_err_locR = 0;
   trkSCT_TRT_outlier_trkLocR = 0;
   trkSCT_TRT_outlier_trkLocPhi = 0;
   trkSCT_TRT_outlier_err_trkLocR = 0;
   trkSCT_TRT_outlier_err_trkLocPhi = 0;
   trkSCT_TRT_outlier_cov_trkLocRPhi = 0;
   trkSCT_TRT_outlier_TOT = 0;
   trkSCT_TRT_outlier_highLevel = 0;
   trkSCT_TRT_outlier_trailingEdge = 0;
   trkSCT_TRT_outlier_chi2 = 0;
   trkSCT_TRT_outlier_ndof = 0;
   trkSCT_Pixel_hole_n = 0;
   trkSCT_Pixel_hole_detElementId = 0;
   trkSCT_Pixel_hole_bec = 0;
   trkSCT_Pixel_hole_layer = 0;
   trkSCT_Pixel_hole_trkLocX = 0;
   trkSCT_Pixel_hole_trkLocY = 0;
   trkSCT_Pixel_hole_err_trkLocX = 0;
   trkSCT_Pixel_hole_err_trkLocY = 0;
   trkSCT_Pixel_hole_cov_trkLocXY = 0;
   trkSCT_SCT_hole_n = 0;
   trkSCT_SCT_hole_detElementId = 0;
   trkSCT_SCT_hole_bec = 0;
   trkSCT_SCT_hole_layer = 0;
   trkSCT_SCT_hole_trkLocX = 0;
   trkSCT_SCT_hole_trkLocY = 0;
   trkSCT_SCT_hole_err_trkLocX = 0;
   trkSCT_SCT_hole_err_trkLocY = 0;
   trkSCT_SCT_hole_cov_trkLocXY = 0;
   trkSCT_TRT_hole_n = 0;
   trkSCT_TRT_hole_detElementId = 0;
   trkSCT_TRT_hole_bec = 0;
   trkSCT_TRT_hole_layer = 0;
   trkSCT_TRT_hole_trkLocR = 0;
   trkSCT_TRT_hole_trkLocPhi = 0;
   trkSCT_TRT_hole_err_trkLocR = 0;
   trkSCT_TRT_hole_err_trkLocPhi = 0;
   trkSCT_TRT_hole_cov_trkLocRPhi = 0;
   trkTRT_d0 = 0;
   trkTRT_z0 = 0;
   trkTRT_phi = 0;
   trkTRT_theta = 0;
   trkTRT_qoverp = 0;
   trkTRT_pt = 0;
   trkTRT_eta = 0;
   trkTRT_err_d0 = 0;
   trkTRT_err_z0 = 0;
   trkTRT_err_phi = 0;
   trkTRT_err_theta = 0;
   trkTRT_err_qoverp = 0;
   trkTRT_cov_d0_z0 = 0;
   trkTRT_cov_d0_phi = 0;
   trkTRT_cov_d0_theta = 0;
   trkTRT_cov_d0_qoverp = 0;
   trkTRT_cov_z0_phi = 0;
   trkTRT_cov_z0_theta = 0;
   trkTRT_cov_z0_qoverp = 0;
   trkTRT_cov_phi_theta = 0;
   trkTRT_cov_phi_qoverp = 0;
   trkTRT_cov_theta_qoverp = 0;
   trkTRT_d0_wrtPV = 0;
   trkTRT_z0_wrtPV = 0;
   trkTRT_phi_wrtPV = 0;
   trkTRT_err_d0_wrtPV = 0;
   trkTRT_err_z0_wrtPV = 0;
   trkTRT_err_phi_wrtPV = 0;
   trkTRT_err_theta_wrtPV = 0;
   trkTRT_err_qoverp_wrtPV = 0;
   trkTRT_cov_d0_z0_wrtPV = 0;
   trkTRT_cov_d0_phi_wrtPV = 0;
   trkTRT_cov_d0_theta_wrtPV = 0;
   trkTRT_cov_d0_qoverp_wrtPV = 0;
   trkTRT_cov_z0_phi_wrtPV = 0;
   trkTRT_cov_z0_theta_wrtPV = 0;
   trkTRT_cov_z0_qoverp_wrtPV = 0;
   trkTRT_cov_phi_theta_wrtPV = 0;
   trkTRT_cov_phi_qoverp_wrtPV = 0;
   trkTRT_cov_theta_qoverp_wrtPV = 0;
   trkTRT_d0_wrtBS = 0;
   trkTRT_z0_wrtBS = 0;
   trkTRT_phi_wrtBS = 0;
   trkTRT_err_d0_wrtBS = 0;
   trkTRT_err_z0_wrtBS = 0;
   trkTRT_err_phi_wrtBS = 0;
   trkTRT_err_theta_wrtBS = 0;
   trkTRT_err_qoverp_wrtBS = 0;
   trkTRT_cov_d0_z0_wrtBS = 0;
   trkTRT_cov_d0_phi_wrtBS = 0;
   trkTRT_cov_d0_theta_wrtBS = 0;
   trkTRT_cov_d0_qoverp_wrtBS = 0;
   trkTRT_cov_z0_phi_wrtBS = 0;
   trkTRT_cov_z0_theta_wrtBS = 0;
   trkTRT_cov_z0_qoverp_wrtBS = 0;
   trkTRT_cov_phi_theta_wrtBS = 0;
   trkTRT_cov_phi_qoverp_wrtBS = 0;
   trkTRT_cov_theta_qoverp_wrtBS = 0;
   trkTRT_d0_wrtBL = 0;
   trkTRT_z0_wrtBL = 0;
   trkTRT_phi_wrtBL = 0;
   trkTRT_d0_err_wrtBL = 0;
   trkTRT_z0_err_wrtBL = 0;
   trkTRT_phi_err_wrtBL = 0;
   trkTRT_theta_err_wrtBL = 0;
   trkTRT_qoverp_err_wrtBL = 0;
   trkTRT_d0_z0_err_wrtBL = 0;
   trkTRT_d0_phi_err_wrtBL = 0;
   trkTRT_d0_theta_err_wrtBL = 0;
   trkTRT_d0_qoverp_err_wrtBL = 0;
   trkTRT_z0_phi_err_wrtBL = 0;
   trkTRT_z0_theta_err_wrtBL = 0;
   trkTRT_z0_qoverp_err_wrtBL = 0;
   trkTRT_phi_theta_err_wrtBL = 0;
   trkTRT_phi_qoverp_err_wrtBL = 0;
   trkTRT_theta_qoverp_err_wrtBL = 0;
   trkTRT_chi2 = 0;
   trkTRT_ndof = 0;
   trkTRT_nBLHits = 0;
   trkTRT_nPixHits = 0;
   trkTRT_nSCTHits = 0;
   trkTRT_nTRTHits = 0;
   trkTRT_nTRTHighTHits = 0;
   trkTRT_nTRTXenonHits = 0;
   trkTRT_nPixHoles = 0;
   trkTRT_nSCTHoles = 0;
   trkTRT_nTRTHoles = 0;
   trkTRT_nPixelDeadSensors = 0;
   trkTRT_nSCTDeadSensors = 0;
   trkTRT_nBLSharedHits = 0;
   trkTRT_nPixSharedHits = 0;
   trkTRT_nSCTSharedHits = 0;
   trkTRT_nBLayerSplitHits = 0;
   trkTRT_nPixSplitHits = 0;
   trkTRT_nBLayerOutliers = 0;
   trkTRT_nPixelOutliers = 0;
   trkTRT_nSCTOutliers = 0;
   trkTRT_nTRTOutliers = 0;
   trkTRT_nTRTHighTOutliers = 0;
   trkTRT_expectBLayerHit = 0;
   trkTRT_nHits = 0;
   trkTRT_nHoles = 0;
   trkTRT_hitPattern = 0;
   trkTRT_fitter = 0;
   trkTRT_patternReco1 = 0;
   trkTRT_patternReco2 = 0;
   trkTRT_trackProperties = 0;
   trkTRT_particleHypothesis = 0;
   trkTRT_blayerPrediction_x = 0;
   trkTRT_blayerPrediction_y = 0;
   trkTRT_blayerPrediction_z = 0;
   trkTRT_blayerPrediction_locX = 0;
   trkTRT_blayerPrediction_locY = 0;
   trkTRT_blayerPrediction_err_locX = 0;
   trkTRT_blayerPrediction_err_locY = 0;
   trkTRT_blayerPrediction_etaDistToEdge = 0;
   trkTRT_blayerPrediction_phiDistToEdge = 0;
   trkTRT_blayerPrediction_detElementId = 0;
   trkTRT_blayerPrediction_row = 0;
   trkTRT_blayerPrediction_col = 0;
   trkTRT_blayerPrediction_type = 0;
   trkTRT_Pixel_hit_n = 0;
   trkTRT_Pixel_hit_id = 0;
   trkTRT_Pixel_hit_detElementId = 0;
   trkTRT_Pixel_hit_detType = 0;
   trkTRT_Pixel_hit_bec = 0;
   trkTRT_Pixel_hit_layer = 0;
   trkTRT_Pixel_hit_charge = 0;
   trkTRT_Pixel_hit_sizePhi = 0;
   trkTRT_Pixel_hit_sizeZ = 0;
   trkTRT_Pixel_hit_size = 0;
   trkTRT_Pixel_hit_isFake = 0;
   trkTRT_Pixel_hit_isGanged = 0;
   trkTRT_Pixel_hit_isSplit = 0;
   trkTRT_Pixel_hit_splitProb1 = 0;
   trkTRT_Pixel_hit_splitProb2 = 0;
   trkTRT_Pixel_hit_isCompetingRIO = 0;
   trkTRT_Pixel_hit_locX = 0;
   trkTRT_Pixel_hit_locY = 0;
   trkTRT_Pixel_hit_incidencePhi = 0;
   trkTRT_Pixel_hit_incidenceTheta = 0;
   trkTRT_Pixel_hit_err_locX = 0;
   trkTRT_Pixel_hit_err_locY = 0;
   trkTRT_Pixel_hit_cov_locXY = 0;
   trkTRT_Pixel_hit_x = 0;
   trkTRT_Pixel_hit_y = 0;
   trkTRT_Pixel_hit_z = 0;
   trkTRT_Pixel_hit_trkLocX = 0;
   trkTRT_Pixel_hit_trkLocY = 0;
   trkTRT_Pixel_hit_err_trkLocX = 0;
   trkTRT_Pixel_hit_err_trkLocY = 0;
   trkTRT_Pixel_hit_cov_trkLocXY = 0;
   trkTRT_Pixel_hit_chi2 = 0;
   trkTRT_Pixel_hit_ndof = 0;
   trkTRT_SCT_hit_n = 0;
   trkTRT_SCT_hit_id = 0;
   trkTRT_SCT_hit_detElementId = 0;
   trkTRT_SCT_hit_detType = 0;
   trkTRT_SCT_hit_bec = 0;
   trkTRT_SCT_hit_layer = 0;
   trkTRT_SCT_hit_sizePhi = 0;
   trkTRT_SCT_hit_isCompetingRIO = 0;
   trkTRT_SCT_hit_locX = 0;
   trkTRT_SCT_hit_locY = 0;
   trkTRT_SCT_hit_incidencePhi = 0;
   trkTRT_SCT_hit_incidenceTheta = 0;
   trkTRT_SCT_hit_err_locX = 0;
   trkTRT_SCT_hit_err_locY = 0;
   trkTRT_SCT_hit_cov_locXY = 0;
   trkTRT_SCT_hit_x = 0;
   trkTRT_SCT_hit_y = 0;
   trkTRT_SCT_hit_z = 0;
   trkTRT_SCT_hit_trkLocX = 0;
   trkTRT_SCT_hit_trkLocY = 0;
   trkTRT_SCT_hit_err_trkLocX = 0;
   trkTRT_SCT_hit_err_trkLocY = 0;
   trkTRT_SCT_hit_cov_trkLocXY = 0;
   trkTRT_SCT_hit_chi2 = 0;
   trkTRT_SCT_hit_ndof = 0;
   trkTRT_TRT_hit_n = 0;
   trkTRT_TRT_hit_id = 0;
   trkTRT_TRT_hit_detElementId = 0;
   trkTRT_TRT_hit_detType = 0;
   trkTRT_TRT_hit_bec = 0;
   trkTRT_TRT_hit_layer = 0;
   trkTRT_TRT_hit_isCompetingRIO = 0;
   trkTRT_TRT_hit_locR = 0;
   trkTRT_TRT_hit_err_locR = 0;
   trkTRT_TRT_hit_trkLocR = 0;
   trkTRT_TRT_hit_trkLocPhi = 0;
   trkTRT_TRT_hit_err_trkLocR = 0;
   trkTRT_TRT_hit_err_trkLocPhi = 0;
   trkTRT_TRT_hit_cov_trkLocRPhi = 0;
   trkTRT_TRT_hit_TOT = 0;
   trkTRT_TRT_hit_highLevel = 0;
   trkTRT_TRT_hit_trailingEdge = 0;
   trkTRT_TRT_hit_chi2 = 0;
   trkTRT_TRT_hit_ndof = 0;
   trkTRT_Pixel_outlier_n = 0;
   trkTRT_Pixel_outlier_id = 0;
   trkTRT_Pixel_outlier_detElementId = 0;
   trkTRT_Pixel_outlier_detType = 0;
   trkTRT_Pixel_outlier_bec = 0;
   trkTRT_Pixel_outlier_layer = 0;
   trkTRT_Pixel_outlier_charge = 0;
   trkTRT_Pixel_outlier_sizePhi = 0;
   trkTRT_Pixel_outlier_sizeZ = 0;
   trkTRT_Pixel_outlier_size = 0;
   trkTRT_Pixel_outlier_isFake = 0;
   trkTRT_Pixel_outlier_isGanged = 0;
   trkTRT_Pixel_outlier_isSplit = 0;
   trkTRT_Pixel_outlier_splitProb1 = 0;
   trkTRT_Pixel_outlier_splitProb2 = 0;
   trkTRT_Pixel_outlier_isCompetingRIO = 0;
   trkTRT_Pixel_outlier_locX = 0;
   trkTRT_Pixel_outlier_locY = 0;
   trkTRT_Pixel_outlier_incidencePhi = 0;
   trkTRT_Pixel_outlier_incidenceTheta = 0;
   trkTRT_Pixel_outlier_err_locX = 0;
   trkTRT_Pixel_outlier_err_locY = 0;
   trkTRT_Pixel_outlier_cov_locXY = 0;
   trkTRT_Pixel_outlier_x = 0;
   trkTRT_Pixel_outlier_y = 0;
   trkTRT_Pixel_outlier_z = 0;
   trkTRT_Pixel_outlier_trkLocX = 0;
   trkTRT_Pixel_outlier_trkLocY = 0;
   trkTRT_Pixel_outlier_err_trkLocX = 0;
   trkTRT_Pixel_outlier_err_trkLocY = 0;
   trkTRT_Pixel_outlier_cov_trkLocXY = 0;
   trkTRT_Pixel_outlier_chi2 = 0;
   trkTRT_Pixel_outlier_ndof = 0;
   trkTRT_SCT_outlier_n = 0;
   trkTRT_SCT_outlier_id = 0;
   trkTRT_SCT_outlier_detElementId = 0;
   trkTRT_SCT_outlier_detType = 0;
   trkTRT_SCT_outlier_bec = 0;
   trkTRT_SCT_outlier_layer = 0;
   trkTRT_SCT_outlier_sizePhi = 0;
   trkTRT_SCT_outlier_isCompetingRIO = 0;
   trkTRT_SCT_outlier_locX = 0;
   trkTRT_SCT_outlier_locY = 0;
   trkTRT_SCT_outlier_incidencePhi = 0;
   trkTRT_SCT_outlier_incidenceTheta = 0;
   trkTRT_SCT_outlier_err_locX = 0;
   trkTRT_SCT_outlier_err_locY = 0;
   trkTRT_SCT_outlier_cov_locXY = 0;
   trkTRT_SCT_outlier_x = 0;
   trkTRT_SCT_outlier_y = 0;
   trkTRT_SCT_outlier_z = 0;
   trkTRT_SCT_outlier_trkLocX = 0;
   trkTRT_SCT_outlier_trkLocY = 0;
   trkTRT_SCT_outlier_err_trkLocX = 0;
   trkTRT_SCT_outlier_err_trkLocY = 0;
   trkTRT_SCT_outlier_cov_trkLocXY = 0;
   trkTRT_SCT_outlier_chi2 = 0;
   trkTRT_SCT_outlier_ndof = 0;
   trkTRT_TRT_outlier_n = 0;
   trkTRT_TRT_outlier_id = 0;
   trkTRT_TRT_outlier_detElementId = 0;
   trkTRT_TRT_outlier_detType = 0;
   trkTRT_TRT_outlier_bec = 0;
   trkTRT_TRT_outlier_layer = 0;
   trkTRT_TRT_outlier_isCompetingRIO = 0;
   trkTRT_TRT_outlier_locR = 0;
   trkTRT_TRT_outlier_err_locR = 0;
   trkTRT_TRT_outlier_trkLocR = 0;
   trkTRT_TRT_outlier_trkLocPhi = 0;
   trkTRT_TRT_outlier_err_trkLocR = 0;
   trkTRT_TRT_outlier_err_trkLocPhi = 0;
   trkTRT_TRT_outlier_cov_trkLocRPhi = 0;
   trkTRT_TRT_outlier_TOT = 0;
   trkTRT_TRT_outlier_highLevel = 0;
   trkTRT_TRT_outlier_trailingEdge = 0;
   trkTRT_TRT_outlier_chi2 = 0;
   trkTRT_TRT_outlier_ndof = 0;
   trkTRT_Pixel_hole_n = 0;
   trkTRT_Pixel_hole_detElementId = 0;
   trkTRT_Pixel_hole_bec = 0;
   trkTRT_Pixel_hole_layer = 0;
   trkTRT_Pixel_hole_trkLocX = 0;
   trkTRT_Pixel_hole_trkLocY = 0;
   trkTRT_Pixel_hole_err_trkLocX = 0;
   trkTRT_Pixel_hole_err_trkLocY = 0;
   trkTRT_Pixel_hole_cov_trkLocXY = 0;
   trkTRT_SCT_hole_n = 0;
   trkTRT_SCT_hole_detElementId = 0;
   trkTRT_SCT_hole_bec = 0;
   trkTRT_SCT_hole_layer = 0;
   trkTRT_SCT_hole_trkLocX = 0;
   trkTRT_SCT_hole_trkLocY = 0;
   trkTRT_SCT_hole_err_trkLocX = 0;
   trkTRT_SCT_hole_err_trkLocY = 0;
   trkTRT_SCT_hole_cov_trkLocXY = 0;
   trkTRT_TRT_hole_n = 0;
   trkTRT_TRT_hole_detElementId = 0;
   trkTRT_TRT_hole_bec = 0;
   trkTRT_TRT_hole_layer = 0;
   trkTRT_TRT_hole_trkLocR = 0;
   trkTRT_TRT_hole_trkLocPhi = 0;
   trkTRT_TRT_hole_err_trkLocR = 0;
   trkTRT_TRT_hole_err_trkLocPhi = 0;
   trkTRT_TRT_hole_cov_trkLocRPhi = 0;
   AntiKt4TopoEM_E = 0;
   AntiKt4TopoEM_pt = 0;
   AntiKt4TopoEM_m = 0;
   AntiKt4TopoEM_eta = 0;
   AntiKt4TopoEM_phi = 0;
   AntiKt4TopoEM_EtaOrigin = 0;
   AntiKt4TopoEM_PhiOrigin = 0;
   AntiKt4TopoEM_MOrigin = 0;
   AntiKt4TopoEM_EtaOriginEM = 0;
   AntiKt4TopoEM_PhiOriginEM = 0;
   AntiKt4TopoEM_MOriginEM = 0;
   AntiKt4TopoEM_WIDTH = 0;
   AntiKt4TopoEM_n90 = 0;
   AntiKt4TopoEM_Timing = 0;
   AntiKt4TopoEM_LArQuality = 0;
   AntiKt4TopoEM_nTrk = 0;
   AntiKt4TopoEM_sumPtTrk = 0;
   AntiKt4TopoEM_OriginIndex = 0;
   AntiKt4TopoEM_HECQuality = 0;
   AntiKt4TopoEM_NegativeE = 0;
   AntiKt4TopoEM_AverageLArQF = 0;
   AntiKt4TopoEM_YFlip12 = 0;
   AntiKt4TopoEM_YFlip23 = 0;
   AntiKt4TopoEM_BCH_CORR_CELL = 0;
   AntiKt4TopoEM_BCH_CORR_DOTX = 0;
   AntiKt4TopoEM_BCH_CORR_JET = 0;
   AntiKt4TopoEM_BCH_CORR_JET_FORCELL = 0;
   AntiKt4TopoEM_ENG_BAD_CELLS = 0;
   AntiKt4TopoEM_N_BAD_CELLS = 0;
   AntiKt4TopoEM_N_BAD_CELLS_CORR = 0;
   AntiKt4TopoEM_BAD_CELLS_CORR_E = 0;
   AntiKt4TopoEM_NumTowers = 0;
   AntiKt4TopoEM_ootFracCells5 = 0;
   AntiKt4TopoEM_ootFracCells10 = 0;
   AntiKt4TopoEM_ootFracClusters5 = 0;
   AntiKt4TopoEM_ootFracClusters10 = 0;
   AntiKt4TopoEM_SamplingMax = 0;
   AntiKt4TopoEM_fracSamplingMax = 0;
   AntiKt4TopoEM_hecf = 0;
   AntiKt4TopoEM_tgap3f = 0;
   AntiKt4TopoEM_isUgly = 0;
   AntiKt4TopoEM_isBadLooseMinus = 0;
   AntiKt4TopoEM_isBadLoose = 0;
   AntiKt4TopoEM_isBadMedium = 0;
   AntiKt4TopoEM_isBadTight = 0;
   AntiKt4TopoEM_emfrac = 0;
   AntiKt4TopoEM_Offset = 0;
   AntiKt4TopoEM_EMJES = 0;
   AntiKt4TopoEM_EMJES_EtaCorr = 0;
   AntiKt4TopoEM_EMJESnooffset = 0;
   AntiKt4TopoEM_GCWJES = 0;
   AntiKt4TopoEM_GCWJES_EtaCorr = 0;
   AntiKt4TopoEM_CB = 0;
   AntiKt4TopoEM_LCJES = 0;
   AntiKt4TopoEM_emscale_E = 0;
   AntiKt4TopoEM_emscale_pt = 0;
   AntiKt4TopoEM_emscale_m = 0;
   AntiKt4TopoEM_emscale_eta = 0;
   AntiKt4TopoEM_emscale_phi = 0;
   AntiKt4TopoEM_jvtx_x = 0;
   AntiKt4TopoEM_jvtx_y = 0;
   AntiKt4TopoEM_jvtx_z = 0;
   AntiKt4TopoEM_jvtxf = 0;
   AntiKt4TopoEM_GSCFactorF = 0;
   AntiKt4TopoEM_WidthFraction = 0;
   AntiKt4TopoEM_e_PreSamplerB = 0;
   AntiKt4TopoEM_e_EMB1 = 0;
   AntiKt4TopoEM_e_EMB2 = 0;
   AntiKt4TopoEM_e_EMB3 = 0;
   AntiKt4TopoEM_e_PreSamplerE = 0;
   AntiKt4TopoEM_e_EME1 = 0;
   AntiKt4TopoEM_e_EME2 = 0;
   AntiKt4TopoEM_e_EME3 = 0;
   AntiKt4TopoEM_e_HEC0 = 0;
   AntiKt4TopoEM_e_HEC1 = 0;
   AntiKt4TopoEM_e_HEC2 = 0;
   AntiKt4TopoEM_e_HEC3 = 0;
   AntiKt4TopoEM_e_TileBar0 = 0;
   AntiKt4TopoEM_e_TileBar1 = 0;
   AntiKt4TopoEM_e_TileBar2 = 0;
   AntiKt4TopoEM_e_TileGap1 = 0;
   AntiKt4TopoEM_e_TileGap2 = 0;
   AntiKt4TopoEM_e_TileGap3 = 0;
   AntiKt4TopoEM_e_TileExt0 = 0;
   AntiKt4TopoEM_e_TileExt1 = 0;
   AntiKt4TopoEM_e_TileExt2 = 0;
   AntiKt4TopoEM_e_FCAL0 = 0;
   AntiKt4TopoEM_e_FCAL1 = 0;
   AntiKt4TopoEM_e_FCAL2 = 0;
   AntiKt4TopoEM_shapeBins = 0;
   AntiKt4TopoEM_Nconst = 0;
   AntiKt4TopoEM_ptconst_default = 0;
   AntiKt4TopoEM_econst_default = 0;
   AntiKt4TopoEM_etaconst_default = 0;
   AntiKt4TopoEM_phiconst_default = 0;
   AntiKt4TopoEM_weightconst_default = 0;
   AntiKt4TopoEM_constscale_E = 0;
   AntiKt4TopoEM_constscale_pt = 0;
   AntiKt4TopoEM_constscale_m = 0;
   AntiKt4TopoEM_constscale_eta = 0;
   AntiKt4TopoEM_constscale_phi = 0;
   AntiKt4TopoEM_el_dr = 0;
   AntiKt4TopoEM_el_matched = 0;
   AntiKt4TopoEM_mu_dr = 0;
   AntiKt4TopoEM_mu_matched = 0;
   AntiKt4TopoEM_L1_dr = 0;
   AntiKt4TopoEM_L1_matched = 0;
   AntiKt4TopoEM_L2_dr = 0;
   AntiKt4TopoEM_L2_matched = 0;
   AntiKt4TopoEM_EF_dr = 0;
   AntiKt4TopoEM_EF_matched = 0;
   AntiKt4LCTopo_E = 0;
   AntiKt4LCTopo_pt = 0;
   AntiKt4LCTopo_m = 0;
   AntiKt4LCTopo_eta = 0;
   AntiKt4LCTopo_phi = 0;
   AntiKt4LCTopo_EtaOrigin = 0;
   AntiKt4LCTopo_PhiOrigin = 0;
   AntiKt4LCTopo_MOrigin = 0;
   AntiKt4LCTopo_EtaOriginEM = 0;
   AntiKt4LCTopo_PhiOriginEM = 0;
   AntiKt4LCTopo_MOriginEM = 0;
   AntiKt4LCTopo_WIDTH = 0;
   AntiKt4LCTopo_n90 = 0;
   AntiKt4LCTopo_Timing = 0;
   AntiKt4LCTopo_LArQuality = 0;
   AntiKt4LCTopo_nTrk = 0;
   AntiKt4LCTopo_sumPtTrk = 0;
   AntiKt4LCTopo_OriginIndex = 0;
   AntiKt4LCTopo_HECQuality = 0;
   AntiKt4LCTopo_NegativeE = 0;
   AntiKt4LCTopo_AverageLArQF = 0;
   AntiKt4LCTopo_YFlip12 = 0;
   AntiKt4LCTopo_YFlip23 = 0;
   AntiKt4LCTopo_BCH_CORR_CELL = 0;
   AntiKt4LCTopo_BCH_CORR_DOTX = 0;
   AntiKt4LCTopo_BCH_CORR_JET = 0;
   AntiKt4LCTopo_BCH_CORR_JET_FORCELL = 0;
   AntiKt4LCTopo_ENG_BAD_CELLS = 0;
   AntiKt4LCTopo_N_BAD_CELLS = 0;
   AntiKt4LCTopo_N_BAD_CELLS_CORR = 0;
   AntiKt4LCTopo_BAD_CELLS_CORR_E = 0;
   AntiKt4LCTopo_NumTowers = 0;
   AntiKt4LCTopo_ootFracCells5 = 0;
   AntiKt4LCTopo_ootFracCells10 = 0;
   AntiKt4LCTopo_ootFracClusters5 = 0;
   AntiKt4LCTopo_ootFracClusters10 = 0;
   AntiKt4LCTopo_SamplingMax = 0;
   AntiKt4LCTopo_fracSamplingMax = 0;
   AntiKt4LCTopo_hecf = 0;
   AntiKt4LCTopo_tgap3f = 0;
   AntiKt4LCTopo_isUgly = 0;
   AntiKt4LCTopo_isBadLooseMinus = 0;
   AntiKt4LCTopo_isBadLoose = 0;
   AntiKt4LCTopo_isBadMedium = 0;
   AntiKt4LCTopo_isBadTight = 0;
   AntiKt4LCTopo_emfrac = 0;
   AntiKt4LCTopo_Offset = 0;
   AntiKt4LCTopo_EMJES = 0;
   AntiKt4LCTopo_EMJES_EtaCorr = 0;
   AntiKt4LCTopo_EMJESnooffset = 0;
   AntiKt4LCTopo_GCWJES = 0;
   AntiKt4LCTopo_GCWJES_EtaCorr = 0;
   AntiKt4LCTopo_CB = 0;
   AntiKt4LCTopo_LCJES = 0;
   AntiKt4LCTopo_emscale_E = 0;
   AntiKt4LCTopo_emscale_pt = 0;
   AntiKt4LCTopo_emscale_m = 0;
   AntiKt4LCTopo_emscale_eta = 0;
   AntiKt4LCTopo_emscale_phi = 0;
   AntiKt4LCTopo_jvtx_x = 0;
   AntiKt4LCTopo_jvtx_y = 0;
   AntiKt4LCTopo_jvtx_z = 0;
   AntiKt4LCTopo_jvtxf = 0;
   AntiKt4LCTopo_GSCFactorF = 0;
   AntiKt4LCTopo_WidthFraction = 0;
   AntiKt4LCTopo_e_PreSamplerB = 0;
   AntiKt4LCTopo_e_EMB1 = 0;
   AntiKt4LCTopo_e_EMB2 = 0;
   AntiKt4LCTopo_e_EMB3 = 0;
   AntiKt4LCTopo_e_PreSamplerE = 0;
   AntiKt4LCTopo_e_EME1 = 0;
   AntiKt4LCTopo_e_EME2 = 0;
   AntiKt4LCTopo_e_EME3 = 0;
   AntiKt4LCTopo_e_HEC0 = 0;
   AntiKt4LCTopo_e_HEC1 = 0;
   AntiKt4LCTopo_e_HEC2 = 0;
   AntiKt4LCTopo_e_HEC3 = 0;
   AntiKt4LCTopo_e_TileBar0 = 0;
   AntiKt4LCTopo_e_TileBar1 = 0;
   AntiKt4LCTopo_e_TileBar2 = 0;
   AntiKt4LCTopo_e_TileGap1 = 0;
   AntiKt4LCTopo_e_TileGap2 = 0;
   AntiKt4LCTopo_e_TileGap3 = 0;
   AntiKt4LCTopo_e_TileExt0 = 0;
   AntiKt4LCTopo_e_TileExt1 = 0;
   AntiKt4LCTopo_e_TileExt2 = 0;
   AntiKt4LCTopo_e_FCAL0 = 0;
   AntiKt4LCTopo_e_FCAL1 = 0;
   AntiKt4LCTopo_e_FCAL2 = 0;
   AntiKt4LCTopo_shapeBins = 0;
   AntiKt4LCTopo_Nconst = 0;
   AntiKt4LCTopo_ptconst_default = 0;
   AntiKt4LCTopo_econst_default = 0;
   AntiKt4LCTopo_etaconst_default = 0;
   AntiKt4LCTopo_phiconst_default = 0;
   AntiKt4LCTopo_weightconst_default = 0;
   AntiKt4LCTopo_constscale_E = 0;
   AntiKt4LCTopo_constscale_pt = 0;
   AntiKt4LCTopo_constscale_m = 0;
   AntiKt4LCTopo_constscale_eta = 0;
   AntiKt4LCTopo_constscale_phi = 0;
   AntiKt4LCTopo_el_dr = 0;
   AntiKt4LCTopo_el_matched = 0;
   AntiKt4LCTopo_mu_dr = 0;
   AntiKt4LCTopo_mu_matched = 0;
   AntiKt4LCTopo_L1_dr = 0;
   AntiKt4LCTopo_L1_matched = 0;
   AntiKt4LCTopo_L2_dr = 0;
   AntiKt4LCTopo_L2_matched = 0;
   AntiKt4LCTopo_EF_dr = 0;
   AntiKt4LCTopo_EF_matched = 0;
   AntiKt6Tower_E = 0;
   AntiKt6Tower_pt = 0;
   AntiKt6Tower_m = 0;
   AntiKt6Tower_eta = 0;
   AntiKt6Tower_phi = 0;
   AntiKt6Tower_EtaOrigin = 0;
   AntiKt6Tower_PhiOrigin = 0;
   AntiKt6Tower_MOrigin = 0;
   AntiKt6Tower_EtaOriginEM = 0;
   AntiKt6Tower_PhiOriginEM = 0;
   AntiKt6Tower_MOriginEM = 0;
   AntiKt6Tower_WIDTH = 0;
   AntiKt6Tower_n90 = 0;
   AntiKt6Tower_Timing = 0;
   AntiKt6Tower_LArQuality = 0;
   AntiKt6Tower_nTrk = 0;
   AntiKt6Tower_sumPtTrk = 0;
   AntiKt6Tower_OriginIndex = 0;
   AntiKt6Tower_HECQuality = 0;
   AntiKt6Tower_NegativeE = 0;
   AntiKt6Tower_AverageLArQF = 0;
   AntiKt6Tower_YFlip12 = 0;
   AntiKt6Tower_YFlip23 = 0;
   AntiKt6Tower_BCH_CORR_CELL = 0;
   AntiKt6Tower_BCH_CORR_DOTX = 0;
   AntiKt6Tower_BCH_CORR_JET = 0;
   AntiKt6Tower_BCH_CORR_JET_FORCELL = 0;
   AntiKt6Tower_ENG_BAD_CELLS = 0;
   AntiKt6Tower_N_BAD_CELLS = 0;
   AntiKt6Tower_N_BAD_CELLS_CORR = 0;
   AntiKt6Tower_BAD_CELLS_CORR_E = 0;
   AntiKt6Tower_NumTowers = 0;
   AntiKt6Tower_ootFracCells5 = 0;
   AntiKt6Tower_ootFracCells10 = 0;
   AntiKt6Tower_ootFracClusters5 = 0;
   AntiKt6Tower_ootFracClusters10 = 0;
   AntiKt6Tower_SamplingMax = 0;
   AntiKt6Tower_fracSamplingMax = 0;
   AntiKt6Tower_hecf = 0;
   AntiKt6Tower_tgap3f = 0;
   AntiKt6Tower_isUgly = 0;
   AntiKt6Tower_isBadLooseMinus = 0;
   AntiKt6Tower_isBadLoose = 0;
   AntiKt6Tower_isBadMedium = 0;
   AntiKt6Tower_isBadTight = 0;
   AntiKt6Tower_emfrac = 0;
   AntiKt6Tower_Offset = 0;
   AntiKt6Tower_EMJES = 0;
   AntiKt6Tower_EMJES_EtaCorr = 0;
   AntiKt6Tower_EMJESnooffset = 0;
   AntiKt6Tower_GCWJES = 0;
   AntiKt6Tower_GCWJES_EtaCorr = 0;
   AntiKt6Tower_CB = 0;
   AntiKt6Tower_LCJES = 0;
   AntiKt6Tower_emscale_E = 0;
   AntiKt6Tower_emscale_pt = 0;
   AntiKt6Tower_emscale_m = 0;
   AntiKt6Tower_emscale_eta = 0;
   AntiKt6Tower_emscale_phi = 0;
   AntiKt6Tower_jvtx_x = 0;
   AntiKt6Tower_jvtx_y = 0;
   AntiKt6Tower_jvtx_z = 0;
   AntiKt6Tower_jvtxf = 0;
   AntiKt6Tower_GSCFactorF = 0;
   AntiKt6Tower_WidthFraction = 0;
   AntiKt6Tower_e_PreSamplerB = 0;
   AntiKt6Tower_e_EMB1 = 0;
   AntiKt6Tower_e_EMB2 = 0;
   AntiKt6Tower_e_EMB3 = 0;
   AntiKt6Tower_e_PreSamplerE = 0;
   AntiKt6Tower_e_EME1 = 0;
   AntiKt6Tower_e_EME2 = 0;
   AntiKt6Tower_e_EME3 = 0;
   AntiKt6Tower_e_HEC0 = 0;
   AntiKt6Tower_e_HEC1 = 0;
   AntiKt6Tower_e_HEC2 = 0;
   AntiKt6Tower_e_HEC3 = 0;
   AntiKt6Tower_e_TileBar0 = 0;
   AntiKt6Tower_e_TileBar1 = 0;
   AntiKt6Tower_e_TileBar2 = 0;
   AntiKt6Tower_e_TileGap1 = 0;
   AntiKt6Tower_e_TileGap2 = 0;
   AntiKt6Tower_e_TileGap3 = 0;
   AntiKt6Tower_e_TileExt0 = 0;
   AntiKt6Tower_e_TileExt1 = 0;
   AntiKt6Tower_e_TileExt2 = 0;
   AntiKt6Tower_e_FCAL0 = 0;
   AntiKt6Tower_e_FCAL1 = 0;
   AntiKt6Tower_e_FCAL2 = 0;
   AntiKt6Tower_shapeBins = 0;
   AntiKt6Tower_Nconst = 0;
   AntiKt6Tower_ptconst_default = 0;
   AntiKt6Tower_econst_default = 0;
   AntiKt6Tower_etaconst_default = 0;
   AntiKt6Tower_phiconst_default = 0;
   AntiKt6Tower_weightconst_default = 0;
   AntiKt6Tower_constscale_E = 0;
   AntiKt6Tower_constscale_pt = 0;
   AntiKt6Tower_constscale_m = 0;
   AntiKt6Tower_constscale_eta = 0;
   AntiKt6Tower_constscale_phi = 0;
   AntiKt6Tower_el_dr = 0;
   AntiKt6Tower_el_matched = 0;
   AntiKt6Tower_mu_dr = 0;
   AntiKt6Tower_mu_matched = 0;
   AntiKt6Tower_L1_dr = 0;
   AntiKt6Tower_L1_matched = 0;
   AntiKt6Tower_L2_dr = 0;
   AntiKt6Tower_L2_matched = 0;
   AntiKt6Tower_EF_dr = 0;
   AntiKt6Tower_EF_matched = 0;
   AntiKt6GhostTower_E = 0;
   AntiKt6GhostTower_pt = 0;
   AntiKt6GhostTower_m = 0;
   AntiKt6GhostTower_eta = 0;
   AntiKt6GhostTower_phi = 0;
   AntiKt6GhostTower_EtaOrigin = 0;
   AntiKt6GhostTower_PhiOrigin = 0;
   AntiKt6GhostTower_MOrigin = 0;
   AntiKt6GhostTower_EtaOriginEM = 0;
   AntiKt6GhostTower_PhiOriginEM = 0;
   AntiKt6GhostTower_MOriginEM = 0;
   AntiKt6GhostTower_WIDTH = 0;
   AntiKt6GhostTower_n90 = 0;
   AntiKt6GhostTower_Timing = 0;
   AntiKt6GhostTower_LArQuality = 0;
   AntiKt6GhostTower_nTrk = 0;
   AntiKt6GhostTower_sumPtTrk = 0;
   AntiKt6GhostTower_OriginIndex = 0;
   AntiKt6GhostTower_HECQuality = 0;
   AntiKt6GhostTower_NegativeE = 0;
   AntiKt6GhostTower_AverageLArQF = 0;
   AntiKt6GhostTower_YFlip12 = 0;
   AntiKt6GhostTower_YFlip23 = 0;
   AntiKt6GhostTower_BCH_CORR_CELL = 0;
   AntiKt6GhostTower_BCH_CORR_DOTX = 0;
   AntiKt6GhostTower_BCH_CORR_JET = 0;
   AntiKt6GhostTower_BCH_CORR_JET_FORCELL = 0;
   AntiKt6GhostTower_ENG_BAD_CELLS = 0;
   AntiKt6GhostTower_N_BAD_CELLS = 0;
   AntiKt6GhostTower_N_BAD_CELLS_CORR = 0;
   AntiKt6GhostTower_BAD_CELLS_CORR_E = 0;
   AntiKt6GhostTower_NumTowers = 0;
   AntiKt6GhostTower_ootFracCells5 = 0;
   AntiKt6GhostTower_ootFracCells10 = 0;
   AntiKt6GhostTower_ootFracClusters5 = 0;
   AntiKt6GhostTower_ootFracClusters10 = 0;
   AntiKt6GhostTower_SamplingMax = 0;
   AntiKt6GhostTower_fracSamplingMax = 0;
   AntiKt6GhostTower_hecf = 0;
   AntiKt6GhostTower_tgap3f = 0;
   AntiKt6GhostTower_isUgly = 0;
   AntiKt6GhostTower_isBadLooseMinus = 0;
   AntiKt6GhostTower_isBadLoose = 0;
   AntiKt6GhostTower_isBadMedium = 0;
   AntiKt6GhostTower_isBadTight = 0;
   AntiKt6GhostTower_emfrac = 0;
   AntiKt6GhostTower_Offset = 0;
   AntiKt6GhostTower_EMJES = 0;
   AntiKt6GhostTower_EMJES_EtaCorr = 0;
   AntiKt6GhostTower_EMJESnooffset = 0;
   AntiKt6GhostTower_GCWJES = 0;
   AntiKt6GhostTower_GCWJES_EtaCorr = 0;
   AntiKt6GhostTower_CB = 0;
   AntiKt6GhostTower_LCJES = 0;
   AntiKt6GhostTower_emscale_E = 0;
   AntiKt6GhostTower_emscale_pt = 0;
   AntiKt6GhostTower_emscale_m = 0;
   AntiKt6GhostTower_emscale_eta = 0;
   AntiKt6GhostTower_emscale_phi = 0;
   AntiKt6GhostTower_jvtx_x = 0;
   AntiKt6GhostTower_jvtx_y = 0;
   AntiKt6GhostTower_jvtx_z = 0;
   AntiKt6GhostTower_jvtxf = 0;
   AntiKt6GhostTower_GSCFactorF = 0;
   AntiKt6GhostTower_WidthFraction = 0;
   AntiKt6GhostTower_e_PreSamplerB = 0;
   AntiKt6GhostTower_e_EMB1 = 0;
   AntiKt6GhostTower_e_EMB2 = 0;
   AntiKt6GhostTower_e_EMB3 = 0;
   AntiKt6GhostTower_e_PreSamplerE = 0;
   AntiKt6GhostTower_e_EME1 = 0;
   AntiKt6GhostTower_e_EME2 = 0;
   AntiKt6GhostTower_e_EME3 = 0;
   AntiKt6GhostTower_e_HEC0 = 0;
   AntiKt6GhostTower_e_HEC1 = 0;
   AntiKt6GhostTower_e_HEC2 = 0;
   AntiKt6GhostTower_e_HEC3 = 0;
   AntiKt6GhostTower_e_TileBar0 = 0;
   AntiKt6GhostTower_e_TileBar1 = 0;
   AntiKt6GhostTower_e_TileBar2 = 0;
   AntiKt6GhostTower_e_TileGap1 = 0;
   AntiKt6GhostTower_e_TileGap2 = 0;
   AntiKt6GhostTower_e_TileGap3 = 0;
   AntiKt6GhostTower_e_TileExt0 = 0;
   AntiKt6GhostTower_e_TileExt1 = 0;
   AntiKt6GhostTower_e_TileExt2 = 0;
   AntiKt6GhostTower_e_FCAL0 = 0;
   AntiKt6GhostTower_e_FCAL1 = 0;
   AntiKt6GhostTower_e_FCAL2 = 0;
   AntiKt6GhostTower_shapeBins = 0;
   AntiKt6GhostTower_Nconst = 0;
   AntiKt6GhostTower_ptconst_default = 0;
   AntiKt6GhostTower_econst_default = 0;
   AntiKt6GhostTower_etaconst_default = 0;
   AntiKt6GhostTower_phiconst_default = 0;
   AntiKt6GhostTower_weightconst_default = 0;
   AntiKt6GhostTower_constscale_E = 0;
   AntiKt6GhostTower_constscale_pt = 0;
   AntiKt6GhostTower_constscale_m = 0;
   AntiKt6GhostTower_constscale_eta = 0;
   AntiKt6GhostTower_constscale_phi = 0;
   AntiKt6GhostTower_el_dr = 0;
   AntiKt6GhostTower_el_matched = 0;
   AntiKt6GhostTower_mu_dr = 0;
   AntiKt6GhostTower_mu_matched = 0;
   AntiKt6GhostTower_L1_dr = 0;
   AntiKt6GhostTower_L1_matched = 0;
   AntiKt6GhostTower_L2_dr = 0;
   AntiKt6GhostTower_L2_matched = 0;
   AntiKt6GhostTower_EF_dr = 0;
   AntiKt6GhostTower_EF_matched = 0;
   AntiKt6LCTopo_E = 0;
   AntiKt6LCTopo_pt = 0;
   AntiKt6LCTopo_m = 0;
   AntiKt6LCTopo_eta = 0;
   AntiKt6LCTopo_phi = 0;
   AntiKt6LCTopo_EtaOrigin = 0;
   AntiKt6LCTopo_PhiOrigin = 0;
   AntiKt6LCTopo_MOrigin = 0;
   AntiKt6LCTopo_EtaOriginEM = 0;
   AntiKt6LCTopo_PhiOriginEM = 0;
   AntiKt6LCTopo_MOriginEM = 0;
   AntiKt6LCTopo_WIDTH = 0;
   AntiKt6LCTopo_n90 = 0;
   AntiKt6LCTopo_Timing = 0;
   AntiKt6LCTopo_LArQuality = 0;
   AntiKt6LCTopo_nTrk = 0;
   AntiKt6LCTopo_sumPtTrk = 0;
   AntiKt6LCTopo_OriginIndex = 0;
   AntiKt6LCTopo_HECQuality = 0;
   AntiKt6LCTopo_NegativeE = 0;
   AntiKt6LCTopo_AverageLArQF = 0;
   AntiKt6LCTopo_YFlip12 = 0;
   AntiKt6LCTopo_YFlip23 = 0;
   AntiKt6LCTopo_BCH_CORR_CELL = 0;
   AntiKt6LCTopo_BCH_CORR_DOTX = 0;
   AntiKt6LCTopo_BCH_CORR_JET = 0;
   AntiKt6LCTopo_BCH_CORR_JET_FORCELL = 0;
   AntiKt6LCTopo_ENG_BAD_CELLS = 0;
   AntiKt6LCTopo_N_BAD_CELLS = 0;
   AntiKt6LCTopo_N_BAD_CELLS_CORR = 0;
   AntiKt6LCTopo_BAD_CELLS_CORR_E = 0;
   AntiKt6LCTopo_NumTowers = 0;
   AntiKt6LCTopo_ootFracCells5 = 0;
   AntiKt6LCTopo_ootFracCells10 = 0;
   AntiKt6LCTopo_ootFracClusters5 = 0;
   AntiKt6LCTopo_ootFracClusters10 = 0;
   AntiKt6LCTopo_SamplingMax = 0;
   AntiKt6LCTopo_fracSamplingMax = 0;
   AntiKt6LCTopo_hecf = 0;
   AntiKt6LCTopo_tgap3f = 0;
   AntiKt6LCTopo_isUgly = 0;
   AntiKt6LCTopo_isBadLooseMinus = 0;
   AntiKt6LCTopo_isBadLoose = 0;
   AntiKt6LCTopo_isBadMedium = 0;
   AntiKt6LCTopo_isBadTight = 0;
   AntiKt6LCTopo_emfrac = 0;
   AntiKt6LCTopo_Offset = 0;
   AntiKt6LCTopo_EMJES = 0;
   AntiKt6LCTopo_EMJES_EtaCorr = 0;
   AntiKt6LCTopo_EMJESnooffset = 0;
   AntiKt6LCTopo_GCWJES = 0;
   AntiKt6LCTopo_GCWJES_EtaCorr = 0;
   AntiKt6LCTopo_CB = 0;
   AntiKt6LCTopo_LCJES = 0;
   AntiKt6LCTopo_emscale_E = 0;
   AntiKt6LCTopo_emscale_pt = 0;
   AntiKt6LCTopo_emscale_m = 0;
   AntiKt6LCTopo_emscale_eta = 0;
   AntiKt6LCTopo_emscale_phi = 0;
   AntiKt6LCTopo_jvtx_x = 0;
   AntiKt6LCTopo_jvtx_y = 0;
   AntiKt6LCTopo_jvtx_z = 0;
   AntiKt6LCTopo_jvtxf = 0;
   AntiKt6LCTopo_GSCFactorF = 0;
   AntiKt6LCTopo_WidthFraction = 0;
   AntiKt6LCTopo_e_PreSamplerB = 0;
   AntiKt6LCTopo_e_EMB1 = 0;
   AntiKt6LCTopo_e_EMB2 = 0;
   AntiKt6LCTopo_e_EMB3 = 0;
   AntiKt6LCTopo_e_PreSamplerE = 0;
   AntiKt6LCTopo_e_EME1 = 0;
   AntiKt6LCTopo_e_EME2 = 0;
   AntiKt6LCTopo_e_EME3 = 0;
   AntiKt6LCTopo_e_HEC0 = 0;
   AntiKt6LCTopo_e_HEC1 = 0;
   AntiKt6LCTopo_e_HEC2 = 0;
   AntiKt6LCTopo_e_HEC3 = 0;
   AntiKt6LCTopo_e_TileBar0 = 0;
   AntiKt6LCTopo_e_TileBar1 = 0;
   AntiKt6LCTopo_e_TileBar2 = 0;
   AntiKt6LCTopo_e_TileGap1 = 0;
   AntiKt6LCTopo_e_TileGap2 = 0;
   AntiKt6LCTopo_e_TileGap3 = 0;
   AntiKt6LCTopo_e_TileExt0 = 0;
   AntiKt6LCTopo_e_TileExt1 = 0;
   AntiKt6LCTopo_e_TileExt2 = 0;
   AntiKt6LCTopo_e_FCAL0 = 0;
   AntiKt6LCTopo_e_FCAL1 = 0;
   AntiKt6LCTopo_e_FCAL2 = 0;
   AntiKt6LCTopo_shapeBins = 0;
   AntiKt6LCTopo_Nconst = 0;
   AntiKt6LCTopo_ptconst_default = 0;
   AntiKt6LCTopo_econst_default = 0;
   AntiKt6LCTopo_etaconst_default = 0;
   AntiKt6LCTopo_phiconst_default = 0;
   AntiKt6LCTopo_weightconst_default = 0;
   AntiKt6LCTopo_constscale_E = 0;
   AntiKt6LCTopo_constscale_pt = 0;
   AntiKt6LCTopo_constscale_m = 0;
   AntiKt6LCTopo_constscale_eta = 0;
   AntiKt6LCTopo_constscale_phi = 0;
   AntiKt6LCTopo_el_dr = 0;
   AntiKt6LCTopo_el_matched = 0;
   AntiKt6LCTopo_mu_dr = 0;
   AntiKt6LCTopo_mu_matched = 0;
   AntiKt6LCTopo_L1_dr = 0;
   AntiKt6LCTopo_L1_matched = 0;
   AntiKt6LCTopo_L2_dr = 0;
   AntiKt6LCTopo_L2_matched = 0;
   AntiKt6LCTopo_EF_dr = 0;
   AntiKt6LCTopo_EF_matched = 0;
   AntiKt6TopoEM_E = 0;
   AntiKt6TopoEM_pt = 0;
   AntiKt6TopoEM_m = 0;
   AntiKt6TopoEM_eta = 0;
   AntiKt6TopoEM_phi = 0;
   AntiKt6TopoEM_EtaOrigin = 0;
   AntiKt6TopoEM_PhiOrigin = 0;
   AntiKt6TopoEM_MOrigin = 0;
   AntiKt6TopoEM_EtaOriginEM = 0;
   AntiKt6TopoEM_PhiOriginEM = 0;
   AntiKt6TopoEM_MOriginEM = 0;
   AntiKt6TopoEM_WIDTH = 0;
   AntiKt6TopoEM_n90 = 0;
   AntiKt6TopoEM_Timing = 0;
   AntiKt6TopoEM_LArQuality = 0;
   AntiKt6TopoEM_nTrk = 0;
   AntiKt6TopoEM_sumPtTrk = 0;
   AntiKt6TopoEM_OriginIndex = 0;
   AntiKt6TopoEM_HECQuality = 0;
   AntiKt6TopoEM_NegativeE = 0;
   AntiKt6TopoEM_AverageLArQF = 0;
   AntiKt6TopoEM_YFlip12 = 0;
   AntiKt6TopoEM_YFlip23 = 0;
   AntiKt6TopoEM_BCH_CORR_CELL = 0;
   AntiKt6TopoEM_BCH_CORR_DOTX = 0;
   AntiKt6TopoEM_BCH_CORR_JET = 0;
   AntiKt6TopoEM_BCH_CORR_JET_FORCELL = 0;
   AntiKt6TopoEM_ENG_BAD_CELLS = 0;
   AntiKt6TopoEM_N_BAD_CELLS = 0;
   AntiKt6TopoEM_N_BAD_CELLS_CORR = 0;
   AntiKt6TopoEM_BAD_CELLS_CORR_E = 0;
   AntiKt6TopoEM_NumTowers = 0;
   AntiKt6TopoEM_ootFracCells5 = 0;
   AntiKt6TopoEM_ootFracCells10 = 0;
   AntiKt6TopoEM_ootFracClusters5 = 0;
   AntiKt6TopoEM_ootFracClusters10 = 0;
   AntiKt6TopoEM_SamplingMax = 0;
   AntiKt6TopoEM_fracSamplingMax = 0;
   AntiKt6TopoEM_hecf = 0;
   AntiKt6TopoEM_tgap3f = 0;
   AntiKt6TopoEM_isUgly = 0;
   AntiKt6TopoEM_isBadLooseMinus = 0;
   AntiKt6TopoEM_isBadLoose = 0;
   AntiKt6TopoEM_isBadMedium = 0;
   AntiKt6TopoEM_isBadTight = 0;
   AntiKt6TopoEM_emfrac = 0;
   AntiKt6TopoEM_Offset = 0;
   AntiKt6TopoEM_EMJES = 0;
   AntiKt6TopoEM_EMJES_EtaCorr = 0;
   AntiKt6TopoEM_EMJESnooffset = 0;
   AntiKt6TopoEM_GCWJES = 0;
   AntiKt6TopoEM_GCWJES_EtaCorr = 0;
   AntiKt6TopoEM_CB = 0;
   AntiKt6TopoEM_LCJES = 0;
   AntiKt6TopoEM_emscale_E = 0;
   AntiKt6TopoEM_emscale_pt = 0;
   AntiKt6TopoEM_emscale_m = 0;
   AntiKt6TopoEM_emscale_eta = 0;
   AntiKt6TopoEM_emscale_phi = 0;
   AntiKt6TopoEM_jvtx_x = 0;
   AntiKt6TopoEM_jvtx_y = 0;
   AntiKt6TopoEM_jvtx_z = 0;
   AntiKt6TopoEM_jvtxf = 0;
   AntiKt6TopoEM_GSCFactorF = 0;
   AntiKt6TopoEM_WidthFraction = 0;
   AntiKt6TopoEM_e_PreSamplerB = 0;
   AntiKt6TopoEM_e_EMB1 = 0;
   AntiKt6TopoEM_e_EMB2 = 0;
   AntiKt6TopoEM_e_EMB3 = 0;
   AntiKt6TopoEM_e_PreSamplerE = 0;
   AntiKt6TopoEM_e_EME1 = 0;
   AntiKt6TopoEM_e_EME2 = 0;
   AntiKt6TopoEM_e_EME3 = 0;
   AntiKt6TopoEM_e_HEC0 = 0;
   AntiKt6TopoEM_e_HEC1 = 0;
   AntiKt6TopoEM_e_HEC2 = 0;
   AntiKt6TopoEM_e_HEC3 = 0;
   AntiKt6TopoEM_e_TileBar0 = 0;
   AntiKt6TopoEM_e_TileBar1 = 0;
   AntiKt6TopoEM_e_TileBar2 = 0;
   AntiKt6TopoEM_e_TileGap1 = 0;
   AntiKt6TopoEM_e_TileGap2 = 0;
   AntiKt6TopoEM_e_TileGap3 = 0;
   AntiKt6TopoEM_e_TileExt0 = 0;
   AntiKt6TopoEM_e_TileExt1 = 0;
   AntiKt6TopoEM_e_TileExt2 = 0;
   AntiKt6TopoEM_e_FCAL0 = 0;
   AntiKt6TopoEM_e_FCAL1 = 0;
   AntiKt6TopoEM_e_FCAL2 = 0;
   AntiKt6TopoEM_shapeBins = 0;
   AntiKt6TopoEM_Nconst = 0;
   AntiKt6TopoEM_ptconst_default = 0;
   AntiKt6TopoEM_econst_default = 0;
   AntiKt6TopoEM_etaconst_default = 0;
   AntiKt6TopoEM_phiconst_default = 0;
   AntiKt6TopoEM_weightconst_default = 0;
   AntiKt6TopoEM_constscale_E = 0;
   AntiKt6TopoEM_constscale_pt = 0;
   AntiKt6TopoEM_constscale_m = 0;
   AntiKt6TopoEM_constscale_eta = 0;
   AntiKt6TopoEM_constscale_phi = 0;
   AntiKt6TopoEM_el_dr = 0;
   AntiKt6TopoEM_el_matched = 0;
   AntiKt6TopoEM_mu_dr = 0;
   AntiKt6TopoEM_mu_matched = 0;
   AntiKt6TopoEM_L1_dr = 0;
   AntiKt6TopoEM_L1_matched = 0;
   AntiKt6TopoEM_L2_dr = 0;
   AntiKt6TopoEM_L2_matched = 0;
   AntiKt6TopoEM_EF_dr = 0;
   AntiKt6TopoEM_EF_matched = 0;
   cl_emTopo_pt = 0;
   cl_emTopo_eta = 0;
   cl_emTopo_phi = 0;
   cl_emTopo_E_em = 0;
   cl_emTopo_E_had = 0;
   cl_emTopo_firstEdens = 0;
   cl_emTopo_cellmaxfrac = 0;
   cl_emTopo_longitudinal = 0;
   cl_emTopo_secondlambda = 0;
   cl_emTopo_lateral = 0;
   cl_emTopo_secondR = 0;
   cl_emTopo_centerlambda = 0;
   cl_emTopo_deltaTheta = 0;
   cl_emTopo_deltaPhi = 0;
   cl_emTopo_centermag = 0;
   cl_emTopo_time = 0;
   cl_emTopo_E_PreSamplerB = 0;
   cl_emTopo_E_EMB1 = 0;
   cl_emTopo_E_EMB2 = 0;
   cl_emTopo_E_EMB3 = 0;
   cl_emTopo_E_PreSamplerE = 0;
   cl_emTopo_E_EME1 = 0;
   cl_emTopo_E_EME2 = 0;
   cl_emTopo_E_EME3 = 0;
   cl_emTopo_E_HEC0 = 0;
   cl_emTopo_E_HEC1 = 0;
   cl_emTopo_E_HEC2 = 0;
   cl_emTopo_E_HEC3 = 0;
   cl_emTopo_E_TileBar0 = 0;
   cl_emTopo_E_TileBar1 = 0;
   cl_emTopo_E_TileBar2 = 0;
   cl_emTopo_E_TileGap1 = 0;
   cl_emTopo_E_TileGap2 = 0;
   cl_emTopo_E_TileGap3 = 0;
   cl_emTopo_E_TileExt0 = 0;
   cl_emTopo_E_TileExt1 = 0;
   cl_emTopo_E_TileExt2 = 0;
   cl_emTopo_E_FCAL0 = 0;
   cl_emTopo_E_FCAL1 = 0;
   cl_emTopo_E_FCAL2 = 0;
   cl_hadTopo_pt = 0;
   cl_hadTopo_eta = 0;
   cl_hadTopo_phi = 0;
   cl_hadTopo_E_em = 0;
   cl_hadTopo_E_had = 0;
   cl_hadTopo_firstEdens = 0;
   cl_hadTopo_cellmaxfrac = 0;
   cl_hadTopo_longitudinal = 0;
   cl_hadTopo_secondlambda = 0;
   cl_hadTopo_lateral = 0;
   cl_hadTopo_secondR = 0;
   cl_hadTopo_centerlambda = 0;
   cl_hadTopo_deltaTheta = 0;
   cl_hadTopo_deltaPhi = 0;
   cl_hadTopo_centermag = 0;
   cl_hadTopo_time = 0;
   cl_hadTopo_E_PreSamplerB = 0;
   cl_hadTopo_E_EMB1 = 0;
   cl_hadTopo_E_EMB2 = 0;
   cl_hadTopo_E_EMB3 = 0;
   cl_hadTopo_E_PreSamplerE = 0;
   cl_hadTopo_E_EME1 = 0;
   cl_hadTopo_E_EME2 = 0;
   cl_hadTopo_E_EME3 = 0;
   cl_hadTopo_E_HEC0 = 0;
   cl_hadTopo_E_HEC1 = 0;
   cl_hadTopo_E_HEC2 = 0;
   cl_hadTopo_E_HEC3 = 0;
   cl_hadTopo_E_TileBar0 = 0;
   cl_hadTopo_E_TileBar1 = 0;
   cl_hadTopo_E_TileBar2 = 0;
   cl_hadTopo_E_TileGap1 = 0;
   cl_hadTopo_E_TileGap2 = 0;
   cl_hadTopo_E_TileGap3 = 0;
   cl_hadTopo_E_TileExt0 = 0;
   cl_hadTopo_E_TileExt1 = 0;
   cl_hadTopo_E_TileExt2 = 0;
   cl_hadTopo_E_FCAL0 = 0;
   cl_hadTopo_E_FCAL1 = 0;
   cl_hadTopo_E_FCAL2 = 0;
   emcl_E = 0;
   emcl_pt = 0;
   emcl_m = 0;
   emcl_eta = 0;
   emcl_phi = 0;
   emcl_E_em = 0;
   emcl_E_had = 0;
   mu_staco_E = 0;
   mu_staco_pt = 0;
   mu_staco_m = 0;
   mu_staco_eta = 0;
   mu_staco_phi = 0;
   mu_staco_px = 0;
   mu_staco_py = 0;
   mu_staco_pz = 0;
   mu_staco_charge = 0;
   mu_staco_allauthor = 0;
   mu_staco_author = 0;
   mu_staco_beta = 0;
   mu_staco_isMuonLikelihood = 0;
   mu_staco_matchchi2 = 0;
   mu_staco_matchndof = 0;
   mu_staco_etcone20 = 0;
   mu_staco_etcone30 = 0;
   mu_staco_etcone40 = 0;
   mu_staco_nucone20 = 0;
   mu_staco_nucone30 = 0;
   mu_staco_nucone40 = 0;
   mu_staco_ptcone20 = 0;
   mu_staco_ptcone30 = 0;
   mu_staco_ptcone40 = 0;
   mu_staco_etconeNoEm10 = 0;
   mu_staco_etconeNoEm20 = 0;
   mu_staco_etconeNoEm30 = 0;
   mu_staco_etconeNoEm40 = 0;
   mu_staco_scatteringCurvatureSignificance = 0;
   mu_staco_scatteringNeighbourSignificance = 0;
   mu_staco_momentumBalanceSignificance = 0;
   mu_staco_energyLossPar = 0;
   mu_staco_energyLossErr = 0;
   mu_staco_etCore = 0;
   mu_staco_energyLossType = 0;
   mu_staco_caloMuonIdTag = 0;
   mu_staco_caloLRLikelihood = 0;
   mu_staco_bestMatch = 0;
   mu_staco_isStandAloneMuon = 0;
   mu_staco_isCombinedMuon = 0;
   mu_staco_isLowPtReconstructedMuon = 0;
   mu_staco_isSegmentTaggedMuon = 0;
   mu_staco_isCaloMuonId = 0;
   mu_staco_alsoFoundByLowPt = 0;
   mu_staco_alsoFoundByCaloMuonId = 0;
   mu_staco_isSiliconAssociatedForwardMuon = 0;
   mu_staco_loose = 0;
   mu_staco_medium = 0;
   mu_staco_tight = 0;
   mu_staco_d0_exPV = 0;
   mu_staco_z0_exPV = 0;
   mu_staco_phi_exPV = 0;
   mu_staco_theta_exPV = 0;
   mu_staco_qoverp_exPV = 0;
   mu_staco_cb_d0_exPV = 0;
   mu_staco_cb_z0_exPV = 0;
   mu_staco_cb_phi_exPV = 0;
   mu_staco_cb_theta_exPV = 0;
   mu_staco_cb_qoverp_exPV = 0;
   mu_staco_id_d0_exPV = 0;
   mu_staco_id_z0_exPV = 0;
   mu_staco_id_phi_exPV = 0;
   mu_staco_id_theta_exPV = 0;
   mu_staco_id_qoverp_exPV = 0;
   mu_staco_me_d0_exPV = 0;
   mu_staco_me_z0_exPV = 0;
   mu_staco_me_phi_exPV = 0;
   mu_staco_me_theta_exPV = 0;
   mu_staco_me_qoverp_exPV = 0;
   mu_staco_ie_d0_exPV = 0;
   mu_staco_ie_z0_exPV = 0;
   mu_staco_ie_phi_exPV = 0;
   mu_staco_ie_theta_exPV = 0;
   mu_staco_ie_qoverp_exPV = 0;
   mu_staco_SpaceTime_detID = 0;
   mu_staco_SpaceTime_t = 0;
   mu_staco_SpaceTime_tError = 0;
   mu_staco_SpaceTime_weight = 0;
   mu_staco_SpaceTime_x = 0;
   mu_staco_SpaceTime_y = 0;
   mu_staco_SpaceTime_z = 0;
   mu_staco_cov_d0_exPV = 0;
   mu_staco_cov_z0_exPV = 0;
   mu_staco_cov_phi_exPV = 0;
   mu_staco_cov_theta_exPV = 0;
   mu_staco_cov_qoverp_exPV = 0;
   mu_staco_cov_d0_z0_exPV = 0;
   mu_staco_cov_d0_phi_exPV = 0;
   mu_staco_cov_d0_theta_exPV = 0;
   mu_staco_cov_d0_qoverp_exPV = 0;
   mu_staco_cov_z0_phi_exPV = 0;
   mu_staco_cov_z0_theta_exPV = 0;
   mu_staco_cov_z0_qoverp_exPV = 0;
   mu_staco_cov_phi_theta_exPV = 0;
   mu_staco_cov_phi_qoverp_exPV = 0;
   mu_staco_cov_theta_qoverp_exPV = 0;
   mu_staco_id_cov_d0_exPV = 0;
   mu_staco_id_cov_z0_exPV = 0;
   mu_staco_id_cov_phi_exPV = 0;
   mu_staco_id_cov_theta_exPV = 0;
   mu_staco_id_cov_qoverp_exPV = 0;
   mu_staco_me_cov_d0_exPV = 0;
   mu_staco_me_cov_z0_exPV = 0;
   mu_staco_me_cov_phi_exPV = 0;
   mu_staco_me_cov_theta_exPV = 0;
   mu_staco_me_cov_qoverp_exPV = 0;
   mu_staco_ms_d0 = 0;
   mu_staco_ms_z0 = 0;
   mu_staco_ms_phi = 0;
   mu_staco_ms_theta = 0;
   mu_staco_ms_qoverp = 0;
   mu_staco_id_d0 = 0;
   mu_staco_id_z0 = 0;
   mu_staco_id_phi = 0;
   mu_staco_id_theta = 0;
   mu_staco_id_qoverp = 0;
   mu_staco_me_d0 = 0;
   mu_staco_me_z0 = 0;
   mu_staco_me_phi = 0;
   mu_staco_me_theta = 0;
   mu_staco_me_qoverp = 0;
   mu_staco_ie_d0 = 0;
   mu_staco_ie_z0 = 0;
   mu_staco_ie_phi = 0;
   mu_staco_ie_theta = 0;
   mu_staco_ie_qoverp = 0;
   mu_staco_nOutliersOnTrack = 0;
   mu_staco_nBLHits = 0;
   mu_staco_nPixHits = 0;
   mu_staco_nSCTHits = 0;
   mu_staco_nTRTHits = 0;
   mu_staco_nTRTHighTHits = 0;
   mu_staco_nBLSharedHits = 0;
   mu_staco_nPixSharedHits = 0;
   mu_staco_nPixHoles = 0;
   mu_staco_nSCTSharedHits = 0;
   mu_staco_nSCTHoles = 0;
   mu_staco_nTRTOutliers = 0;
   mu_staco_nTRTHighTOutliers = 0;
   mu_staco_nGangedPixels = 0;
   mu_staco_nPixelDeadSensors = 0;
   mu_staco_nSCTDeadSensors = 0;
   mu_staco_nTRTDeadStraws = 0;
   mu_staco_expectBLayerHit = 0;
   mu_staco_nMDTHits = 0;
   mu_staco_nMDTHoles = 0;
   mu_staco_nCSCEtaHits = 0;
   mu_staco_nCSCEtaHoles = 0;
   mu_staco_nCSCUnspoiledEtaHits = 0;
   mu_staco_nCSCPhiHits = 0;
   mu_staco_nCSCPhiHoles = 0;
   mu_staco_nRPCEtaHits = 0;
   mu_staco_nRPCEtaHoles = 0;
   mu_staco_nRPCPhiHits = 0;
   mu_staco_nRPCPhiHoles = 0;
   mu_staco_nTGCEtaHits = 0;
   mu_staco_nTGCEtaHoles = 0;
   mu_staco_nTGCPhiHits = 0;
   mu_staco_nTGCPhiHoles = 0;
   mu_staco_nprecisionLayers = 0;
   mu_staco_nprecisionHoleLayers = 0;
   mu_staco_nphiLayers = 0;
   mu_staco_ntrigEtaLayers = 0;
   mu_staco_nphiHoleLayers = 0;
   mu_staco_ntrigEtaHoleLayers = 0;
   mu_staco_nMDTBIHits = 0;
   mu_staco_nMDTBMHits = 0;
   mu_staco_nMDTBOHits = 0;
   mu_staco_nMDTBEEHits = 0;
   mu_staco_nMDTBIS78Hits = 0;
   mu_staco_nMDTEIHits = 0;
   mu_staco_nMDTEMHits = 0;
   mu_staco_nMDTEOHits = 0;
   mu_staco_nMDTEEHits = 0;
   mu_staco_nRPCLayer1EtaHits = 0;
   mu_staco_nRPCLayer2EtaHits = 0;
   mu_staco_nRPCLayer3EtaHits = 0;
   mu_staco_nRPCLayer1PhiHits = 0;
   mu_staco_nRPCLayer2PhiHits = 0;
   mu_staco_nRPCLayer3PhiHits = 0;
   mu_staco_nTGCLayer1EtaHits = 0;
   mu_staco_nTGCLayer2EtaHits = 0;
   mu_staco_nTGCLayer3EtaHits = 0;
   mu_staco_nTGCLayer4EtaHits = 0;
   mu_staco_nTGCLayer1PhiHits = 0;
   mu_staco_nTGCLayer2PhiHits = 0;
   mu_staco_nTGCLayer3PhiHits = 0;
   mu_staco_nTGCLayer4PhiHits = 0;
   mu_staco_barrelSectors = 0;
   mu_staco_endcapSectors = 0;
   mu_staco_trackd0 = 0;
   mu_staco_trackz0 = 0;
   mu_staco_trackphi = 0;
   mu_staco_tracktheta = 0;
   mu_staco_trackqoverp = 0;
   mu_staco_trackcov_d0 = 0;
   mu_staco_trackcov_z0 = 0;
   mu_staco_trackcov_phi = 0;
   mu_staco_trackcov_theta = 0;
   mu_staco_trackcov_qoverp = 0;
   mu_staco_trackcov_d0_z0 = 0;
   mu_staco_trackcov_d0_phi = 0;
   mu_staco_trackcov_d0_theta = 0;
   mu_staco_trackcov_d0_qoverp = 0;
   mu_staco_trackcov_z0_phi = 0;
   mu_staco_trackcov_z0_theta = 0;
   mu_staco_trackcov_z0_qoverp = 0;
   mu_staco_trackcov_phi_theta = 0;
   mu_staco_trackcov_phi_qoverp = 0;
   mu_staco_trackcov_theta_qoverp = 0;
   mu_staco_trackfitchi2 = 0;
   mu_staco_trackfitndof = 0;
   mu_staco_hastrack = 0;
   mu_staco_trackd0beam = 0;
   mu_staco_trackz0beam = 0;
   mu_staco_tracksigd0beam = 0;
   mu_staco_tracksigz0beam = 0;
   mu_staco_trackd0pv = 0;
   mu_staco_trackz0pv = 0;
   mu_staco_tracksigd0pv = 0;
   mu_staco_tracksigz0pv = 0;
   mu_staco_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_staco_trackd0pvunbiased = 0;
   mu_staco_trackz0pvunbiased = 0;
   mu_staco_tracksigd0pvunbiased = 0;
   mu_staco_tracksigz0pvunbiased = 0;
   mu_staco_EFCB_dr = 0;
   mu_staco_EFCB_n = 0;
   mu_staco_EFCB_MuonType = 0;
   mu_staco_EFCB_pt = 0;
   mu_staco_EFCB_eta = 0;
   mu_staco_EFCB_phi = 0;
   mu_staco_EFCB_hasCB = 0;
   mu_staco_EFCB_matched = 0;
   mu_staco_EFMG_dr = 0;
   mu_staco_EFMG_n = 0;
   mu_staco_EFMG_MuonType = 0;
   mu_staco_EFMG_pt = 0;
   mu_staco_EFMG_eta = 0;
   mu_staco_EFMG_phi = 0;
   mu_staco_EFMG_hasMG = 0;
   mu_staco_EFMG_matched = 0;
   mu_staco_EFME_dr = 0;
   mu_staco_EFME_n = 0;
   mu_staco_EFME_MuonType = 0;
   mu_staco_EFME_pt = 0;
   mu_staco_EFME_eta = 0;
   mu_staco_EFME_phi = 0;
   mu_staco_EFME_hasME = 0;
   mu_staco_EFME_matched = 0;
   mu_staco_L2CB_dr = 0;
   mu_staco_L2CB_pt = 0;
   mu_staco_L2CB_eta = 0;
   mu_staco_L2CB_phi = 0;
   mu_staco_L2CB_id_pt = 0;
   mu_staco_L2CB_ms_pt = 0;
   mu_staco_L2CB_nPixHits = 0;
   mu_staco_L2CB_nSCTHits = 0;
   mu_staco_L2CB_nTRTHits = 0;
   mu_staco_L2CB_nTRTHighTHits = 0;
   mu_staco_L2CB_matched = 0;
   mu_staco_L1_dr = 0;
   mu_staco_L1_pt = 0;
   mu_staco_L1_eta = 0;
   mu_staco_L1_phi = 0;
   mu_staco_L1_thrNumber = 0;
   mu_staco_L1_RoINumber = 0;
   mu_staco_L1_sectorAddress = 0;
   mu_staco_L1_firstCandidate = 0;
   mu_staco_L1_moreCandInRoI = 0;
   mu_staco_L1_moreCandInSector = 0;
   mu_staco_L1_source = 0;
   mu_staco_L1_hemisphere = 0;
   mu_staco_L1_charge = 0;
   mu_staco_L1_vetoed = 0;
   mu_staco_L1_matched = 0;
   mu_muid_E = 0;
   mu_muid_pt = 0;
   mu_muid_m = 0;
   mu_muid_eta = 0;
   mu_muid_phi = 0;
   mu_muid_px = 0;
   mu_muid_py = 0;
   mu_muid_pz = 0;
   mu_muid_charge = 0;
   mu_muid_allauthor = 0;
   mu_muid_author = 0;
   mu_muid_beta = 0;
   mu_muid_isMuonLikelihood = 0;
   mu_muid_matchchi2 = 0;
   mu_muid_matchndof = 0;
   mu_muid_etcone20 = 0;
   mu_muid_etcone30 = 0;
   mu_muid_etcone40 = 0;
   mu_muid_nucone20 = 0;
   mu_muid_nucone30 = 0;
   mu_muid_nucone40 = 0;
   mu_muid_ptcone20 = 0;
   mu_muid_ptcone30 = 0;
   mu_muid_ptcone40 = 0;
   mu_muid_etconeNoEm10 = 0;
   mu_muid_etconeNoEm20 = 0;
   mu_muid_etconeNoEm30 = 0;
   mu_muid_etconeNoEm40 = 0;
   mu_muid_scatteringCurvatureSignificance = 0;
   mu_muid_scatteringNeighbourSignificance = 0;
   mu_muid_momentumBalanceSignificance = 0;
   mu_muid_energyLossPar = 0;
   mu_muid_energyLossErr = 0;
   mu_muid_etCore = 0;
   mu_muid_energyLossType = 0;
   mu_muid_caloMuonIdTag = 0;
   mu_muid_caloLRLikelihood = 0;
   mu_muid_bestMatch = 0;
   mu_muid_isStandAloneMuon = 0;
   mu_muid_isCombinedMuon = 0;
   mu_muid_isLowPtReconstructedMuon = 0;
   mu_muid_isSegmentTaggedMuon = 0;
   mu_muid_isCaloMuonId = 0;
   mu_muid_alsoFoundByLowPt = 0;
   mu_muid_alsoFoundByCaloMuonId = 0;
   mu_muid_isSiliconAssociatedForwardMuon = 0;
   mu_muid_loose = 0;
   mu_muid_medium = 0;
   mu_muid_tight = 0;
   mu_muid_d0_exPV = 0;
   mu_muid_z0_exPV = 0;
   mu_muid_phi_exPV = 0;
   mu_muid_theta_exPV = 0;
   mu_muid_qoverp_exPV = 0;
   mu_muid_cb_d0_exPV = 0;
   mu_muid_cb_z0_exPV = 0;
   mu_muid_cb_phi_exPV = 0;
   mu_muid_cb_theta_exPV = 0;
   mu_muid_cb_qoverp_exPV = 0;
   mu_muid_id_d0_exPV = 0;
   mu_muid_id_z0_exPV = 0;
   mu_muid_id_phi_exPV = 0;
   mu_muid_id_theta_exPV = 0;
   mu_muid_id_qoverp_exPV = 0;
   mu_muid_me_d0_exPV = 0;
   mu_muid_me_z0_exPV = 0;
   mu_muid_me_phi_exPV = 0;
   mu_muid_me_theta_exPV = 0;
   mu_muid_me_qoverp_exPV = 0;
   mu_muid_ie_d0_exPV = 0;
   mu_muid_ie_z0_exPV = 0;
   mu_muid_ie_phi_exPV = 0;
   mu_muid_ie_theta_exPV = 0;
   mu_muid_ie_qoverp_exPV = 0;
   mu_muid_SpaceTime_detID = 0;
   mu_muid_SpaceTime_t = 0;
   mu_muid_SpaceTime_tError = 0;
   mu_muid_SpaceTime_weight = 0;
   mu_muid_SpaceTime_x = 0;
   mu_muid_SpaceTime_y = 0;
   mu_muid_SpaceTime_z = 0;
   mu_muid_cov_d0_exPV = 0;
   mu_muid_cov_z0_exPV = 0;
   mu_muid_cov_phi_exPV = 0;
   mu_muid_cov_theta_exPV = 0;
   mu_muid_cov_qoverp_exPV = 0;
   mu_muid_cov_d0_z0_exPV = 0;
   mu_muid_cov_d0_phi_exPV = 0;
   mu_muid_cov_d0_theta_exPV = 0;
   mu_muid_cov_d0_qoverp_exPV = 0;
   mu_muid_cov_z0_phi_exPV = 0;
   mu_muid_cov_z0_theta_exPV = 0;
   mu_muid_cov_z0_qoverp_exPV = 0;
   mu_muid_cov_phi_theta_exPV = 0;
   mu_muid_cov_phi_qoverp_exPV = 0;
   mu_muid_cov_theta_qoverp_exPV = 0;
   mu_muid_id_cov_d0_exPV = 0;
   mu_muid_id_cov_z0_exPV = 0;
   mu_muid_id_cov_phi_exPV = 0;
   mu_muid_id_cov_theta_exPV = 0;
   mu_muid_id_cov_qoverp_exPV = 0;
   mu_muid_me_cov_d0_exPV = 0;
   mu_muid_me_cov_z0_exPV = 0;
   mu_muid_me_cov_phi_exPV = 0;
   mu_muid_me_cov_theta_exPV = 0;
   mu_muid_me_cov_qoverp_exPV = 0;
   mu_muid_ms_d0 = 0;
   mu_muid_ms_z0 = 0;
   mu_muid_ms_phi = 0;
   mu_muid_ms_theta = 0;
   mu_muid_ms_qoverp = 0;
   mu_muid_id_d0 = 0;
   mu_muid_id_z0 = 0;
   mu_muid_id_phi = 0;
   mu_muid_id_theta = 0;
   mu_muid_id_qoverp = 0;
   mu_muid_me_d0 = 0;
   mu_muid_me_z0 = 0;
   mu_muid_me_phi = 0;
   mu_muid_me_theta = 0;
   mu_muid_me_qoverp = 0;
   mu_muid_ie_d0 = 0;
   mu_muid_ie_z0 = 0;
   mu_muid_ie_phi = 0;
   mu_muid_ie_theta = 0;
   mu_muid_ie_qoverp = 0;
   mu_muid_nOutliersOnTrack = 0;
   mu_muid_nBLHits = 0;
   mu_muid_nPixHits = 0;
   mu_muid_nSCTHits = 0;
   mu_muid_nTRTHits = 0;
   mu_muid_nTRTHighTHits = 0;
   mu_muid_nBLSharedHits = 0;
   mu_muid_nPixSharedHits = 0;
   mu_muid_nPixHoles = 0;
   mu_muid_nSCTSharedHits = 0;
   mu_muid_nSCTHoles = 0;
   mu_muid_nTRTOutliers = 0;
   mu_muid_nTRTHighTOutliers = 0;
   mu_muid_nGangedPixels = 0;
   mu_muid_nPixelDeadSensors = 0;
   mu_muid_nSCTDeadSensors = 0;
   mu_muid_nTRTDeadStraws = 0;
   mu_muid_expectBLayerHit = 0;
   mu_muid_nMDTHits = 0;
   mu_muid_nMDTHoles = 0;
   mu_muid_nCSCEtaHits = 0;
   mu_muid_nCSCEtaHoles = 0;
   mu_muid_nCSCUnspoiledEtaHits = 0;
   mu_muid_nCSCPhiHits = 0;
   mu_muid_nCSCPhiHoles = 0;
   mu_muid_nRPCEtaHits = 0;
   mu_muid_nRPCEtaHoles = 0;
   mu_muid_nRPCPhiHits = 0;
   mu_muid_nRPCPhiHoles = 0;
   mu_muid_nTGCEtaHits = 0;
   mu_muid_nTGCEtaHoles = 0;
   mu_muid_nTGCPhiHits = 0;
   mu_muid_nTGCPhiHoles = 0;
   mu_muid_nprecisionLayers = 0;
   mu_muid_nprecisionHoleLayers = 0;
   mu_muid_nphiLayers = 0;
   mu_muid_ntrigEtaLayers = 0;
   mu_muid_nphiHoleLayers = 0;
   mu_muid_ntrigEtaHoleLayers = 0;
   mu_muid_nMDTBIHits = 0;
   mu_muid_nMDTBMHits = 0;
   mu_muid_nMDTBOHits = 0;
   mu_muid_nMDTBEEHits = 0;
   mu_muid_nMDTBIS78Hits = 0;
   mu_muid_nMDTEIHits = 0;
   mu_muid_nMDTEMHits = 0;
   mu_muid_nMDTEOHits = 0;
   mu_muid_nMDTEEHits = 0;
   mu_muid_nRPCLayer1EtaHits = 0;
   mu_muid_nRPCLayer2EtaHits = 0;
   mu_muid_nRPCLayer3EtaHits = 0;
   mu_muid_nRPCLayer1PhiHits = 0;
   mu_muid_nRPCLayer2PhiHits = 0;
   mu_muid_nRPCLayer3PhiHits = 0;
   mu_muid_nTGCLayer1EtaHits = 0;
   mu_muid_nTGCLayer2EtaHits = 0;
   mu_muid_nTGCLayer3EtaHits = 0;
   mu_muid_nTGCLayer4EtaHits = 0;
   mu_muid_nTGCLayer1PhiHits = 0;
   mu_muid_nTGCLayer2PhiHits = 0;
   mu_muid_nTGCLayer3PhiHits = 0;
   mu_muid_nTGCLayer4PhiHits = 0;
   mu_muid_barrelSectors = 0;
   mu_muid_endcapSectors = 0;
   mu_muid_trackd0 = 0;
   mu_muid_trackz0 = 0;
   mu_muid_trackphi = 0;
   mu_muid_tracktheta = 0;
   mu_muid_trackqoverp = 0;
   mu_muid_trackcov_d0 = 0;
   mu_muid_trackcov_z0 = 0;
   mu_muid_trackcov_phi = 0;
   mu_muid_trackcov_theta = 0;
   mu_muid_trackcov_qoverp = 0;
   mu_muid_trackcov_d0_z0 = 0;
   mu_muid_trackcov_d0_phi = 0;
   mu_muid_trackcov_d0_theta = 0;
   mu_muid_trackcov_d0_qoverp = 0;
   mu_muid_trackcov_z0_phi = 0;
   mu_muid_trackcov_z0_theta = 0;
   mu_muid_trackcov_z0_qoverp = 0;
   mu_muid_trackcov_phi_theta = 0;
   mu_muid_trackcov_phi_qoverp = 0;
   mu_muid_trackcov_theta_qoverp = 0;
   mu_muid_trackfitchi2 = 0;
   mu_muid_trackfitndof = 0;
   mu_muid_hastrack = 0;
   mu_muid_trackd0beam = 0;
   mu_muid_trackz0beam = 0;
   mu_muid_tracksigd0beam = 0;
   mu_muid_tracksigz0beam = 0;
   mu_muid_trackd0pv = 0;
   mu_muid_trackz0pv = 0;
   mu_muid_tracksigd0pv = 0;
   mu_muid_tracksigz0pv = 0;
   mu_muid_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_muid_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_muid_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_muid_trackd0pvunbiased = 0;
   mu_muid_trackz0pvunbiased = 0;
   mu_muid_tracksigd0pvunbiased = 0;
   mu_muid_tracksigz0pvunbiased = 0;
   mu_muid_EFCB_dr = 0;
   mu_muid_EFCB_n = 0;
   mu_muid_EFCB_MuonType = 0;
   mu_muid_EFCB_pt = 0;
   mu_muid_EFCB_eta = 0;
   mu_muid_EFCB_phi = 0;
   mu_muid_EFCB_hasCB = 0;
   mu_muid_EFCB_matched = 0;
   mu_muid_EFMG_dr = 0;
   mu_muid_EFMG_n = 0;
   mu_muid_EFMG_MuonType = 0;
   mu_muid_EFMG_pt = 0;
   mu_muid_EFMG_eta = 0;
   mu_muid_EFMG_phi = 0;
   mu_muid_EFMG_hasMG = 0;
   mu_muid_EFMG_matched = 0;
   mu_muid_EFME_dr = 0;
   mu_muid_EFME_n = 0;
   mu_muid_EFME_MuonType = 0;
   mu_muid_EFME_pt = 0;
   mu_muid_EFME_eta = 0;
   mu_muid_EFME_phi = 0;
   mu_muid_EFME_hasME = 0;
   mu_muid_EFME_matched = 0;
   mu_muid_L2CB_dr = 0;
   mu_muid_L2CB_pt = 0;
   mu_muid_L2CB_eta = 0;
   mu_muid_L2CB_phi = 0;
   mu_muid_L2CB_id_pt = 0;
   mu_muid_L2CB_ms_pt = 0;
   mu_muid_L2CB_nPixHits = 0;
   mu_muid_L2CB_nSCTHits = 0;
   mu_muid_L2CB_nTRTHits = 0;
   mu_muid_L2CB_nTRTHighTHits = 0;
   mu_muid_L2CB_matched = 0;
   mu_muid_L1_dr = 0;
   mu_muid_L1_pt = 0;
   mu_muid_L1_eta = 0;
   mu_muid_L1_phi = 0;
   mu_muid_L1_thrNumber = 0;
   mu_muid_L1_RoINumber = 0;
   mu_muid_L1_sectorAddress = 0;
   mu_muid_L1_firstCandidate = 0;
   mu_muid_L1_moreCandInRoI = 0;
   mu_muid_L1_moreCandInSector = 0;
   mu_muid_L1_source = 0;
   mu_muid_L1_hemisphere = 0;
   mu_muid_L1_charge = 0;
   mu_muid_L1_vetoed = 0;
   mu_muid_L1_matched = 0;
   muid_nScatters = 0;
   muid_scatSignificance = 0;
   muid_neighbourSignificance = 0;
   muid_eta = 0;
   trig_L1_TAV = 0;
   trig_L2_passedPhysics = 0;
   trig_EF_passedPhysics = 0;
   trig_L1_TBP = 0;
   trig_L1_TAP = 0;
   trig_L2_passedRaw = 0;
   trig_EF_passedRaw = 0;
   trig_L2_resurrected = 0;
   trig_EF_resurrected = 0;
   trig_L2_passedThrough = 0;
   trig_EF_passedThrough = 0;
   trig_L2_wasPrescaled = 0;
   trig_L2_wasResurrected = 0;
   trig_EF_wasPrescaled = 0;
   trig_EF_wasResurrected = 0;
   trig_L1_jet_eta = 0;
   trig_L1_jet_phi = 0;
   trig_L1_jet_thrNames = 0;
   trig_L1_jet_thrValues = 0;
   trig_L1_jet_thrPattern = 0;
   trig_L1_jet_RoIWord = 0;
   trig_L1_jet_et4x4 = 0;
   trig_L1_jet_et6x6 = 0;
   trig_L1_jet_et8x8 = 0;
   trig_L1_emtau_eta = 0;
   trig_L1_emtau_phi = 0;
   trig_L1_emtau_thrNames = 0;
   trig_L1_emtau_thrValues = 0;
   trig_L1_emtau_core = 0;
   trig_L1_emtau_EMClus = 0;
   trig_L1_emtau_tauClus = 0;
   trig_L1_emtau_EMIsol = 0;
   trig_L1_emtau_hadIsol = 0;
   trig_L1_emtau_hadCore = 0;
   trig_L1_emtau_thrPattern = 0;
   trig_L1_emtau_RoIWord = 0;
   trig_EF_jet_E = 0;
   trig_EF_jet_pt = 0;
   trig_EF_jet_m = 0;
   trig_EF_jet_eta = 0;
   trig_EF_jet_phi = 0;
   trig_EF_jet_a4 = 0;
   trig_EF_jet_a2 = 0;
   trig_EF_jet_a4hi = 0;
   trig_EF_jet_a2hi = 0;
   trig_EF_jet_RoIword = 0;
   trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j10_u0uchad_LArNoiseBurst = 0;
   trig_EF_jet_EF_j10_u0uchad_empty_LArNoiseBurst = 0;
   trig_EF_jet_EF_j10_u0uchad_firstempty_LArNoiseBurst = 0;
   trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1J10 = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20 = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1J10 = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20 = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1J10 = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20 = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j75_a4hi_EFFS_L1J10 = 0;
   trig_EF_jet_EF_j75_a4hi_EFFS_L1ZDC = 0;
   trig_L1_esum_thrNames = 0;
   trig_EF_met_nameOfComponent = 0;
   trig_EF_met_MExComponent = 0;
   trig_EF_met_MEyComponent = 0;
   trig_EF_met_MEzComponent = 0;
   trig_EF_met_sumEtComponent = 0;
   trig_EF_met_sumEComponent = 0;
   trig_EF_met_componentCalib0 = 0;
   trig_EF_met_componentCalib1 = 0;
   trig_EF_met_sumOfSigns = 0;
   trig_EF_met_usedChannels = 0;
   trig_EF_met_status = 0;
   trig_EF_ph_E = 0;
   trig_EF_ph_Et = 0;
   trig_EF_ph_pt = 0;
   trig_EF_ph_m = 0;
   trig_EF_ph_eta = 0;
   trig_EF_ph_phi = 0;
   trig_EF_ph_px = 0;
   trig_EF_ph_py = 0;
   trig_EF_ph_pz = 0;
   trig_EF_ph_author = 0;
   trig_EF_ph_isRecovered = 0;
   trig_EF_ph_isEM = 0;
   trig_EF_ph_isEMLoose = 0;
   trig_EF_ph_isEMMedium = 0;
   trig_EF_ph_isEMTight = 0;
   trig_EF_ph_convFlag = 0;
   trig_EF_ph_isConv = 0;
   trig_EF_ph_nConv = 0;
   trig_EF_ph_nSingleTrackConv = 0;
   trig_EF_ph_nDoubleTrackConv = 0;
   trig_EF_ph_loose = 0;
   trig_EF_ph_looseIso = 0;
   trig_EF_ph_tight = 0;
   trig_EF_ph_tightIso = 0;
   trig_EF_ph_looseAR = 0;
   trig_EF_ph_looseARIso = 0;
   trig_EF_ph_tightAR = 0;
   trig_EF_ph_tightARIso = 0;
   trig_EF_trigmuonef_effs15 = 0;
   trig_EF_trigmuonef_effs18 = 0;
   trig_EF_trigmuonef_effs24 = 0;
   trig_EF_trigmuonef_RoINum = 0;
   trig_EF_trigmuonef_NSegments = 0;
   trig_EF_trigmuonef_NMdtHits = 0;
   trig_EF_trigmuonef_NRpcHits = 0;
   trig_EF_trigmuonef_NTgcHits = 0;
   trig_EF_trigmuonef_NCscHits = 0;
   trig_EF_trigmuonef_EtaPreviousLevel = 0;
   trig_EF_trigmuonef_PhiPreviousLevel = 0;
   trig_EF_trigmuonef_track_n = 0;
   trig_EF_trigmuonef_track_MuonType = 0;
   trig_EF_trigmuonef_track_MS_pt = 0;
   trig_EF_trigmuonef_track_MS_eta = 0;
   trig_EF_trigmuonef_track_MS_phi = 0;
   trig_EF_trigmuonef_track_MS_charge = 0;
   trig_EF_trigmuonef_track_MS_d0 = 0;
   trig_EF_trigmuonef_track_MS_z0 = 0;
   trig_EF_trigmuonef_track_MS_chi2 = 0;
   trig_EF_trigmuonef_track_MS_chi2prob = 0;
   trig_EF_trigmuonef_track_MS_posX = 0;
   trig_EF_trigmuonef_track_MS_posY = 0;
   trig_EF_trigmuonef_track_MS_posZ = 0;
   trig_EF_trigmuonef_track_MS_NRpcHitsPhi = 0;
   trig_EF_trigmuonef_track_MS_NTgcHitsPhi = 0;
   trig_EF_trigmuonef_track_MS_NCscHitsPhi = 0;
   trig_EF_trigmuonef_track_MS_NRpcHitsEta = 0;
   trig_EF_trigmuonef_track_MS_NTgcHitsEta = 0;
   trig_EF_trigmuonef_track_MS_NCscHitsEta = 0;
   trig_EF_trigmuonef_track_MS_NMdtHits = 0;
   trig_EF_trigmuonef_track_MS_hasMS = 0;
   trig_EF_trigmuonef_track_SA_pt = 0;
   trig_EF_trigmuonef_track_SA_eta = 0;
   trig_EF_trigmuonef_track_SA_phi = 0;
   trig_EF_trigmuonef_track_SA_charge = 0;
   trig_EF_trigmuonef_track_SA_d0 = 0;
   trig_EF_trigmuonef_track_SA_z0 = 0;
   trig_EF_trigmuonef_track_SA_chi2 = 0;
   trig_EF_trigmuonef_track_SA_chi2prob = 0;
   trig_EF_trigmuonef_track_SA_posX = 0;
   trig_EF_trigmuonef_track_SA_posY = 0;
   trig_EF_trigmuonef_track_SA_posZ = 0;
   trig_EF_trigmuonef_track_SA_hasSA = 0;
   trig_EF_trigmuonef_track_CB_pt = 0;
   trig_EF_trigmuonef_track_CB_eta = 0;
   trig_EF_trigmuonef_track_CB_phi = 0;
   trig_EF_trigmuonef_track_CB_charge = 0;
   trig_EF_trigmuonef_track_CB_d0 = 0;
   trig_EF_trigmuonef_track_CB_z0 = 0;
   trig_EF_trigmuonef_track_CB_chi2 = 0;
   trig_EF_trigmuonef_track_CB_chi2prob = 0;
   trig_EF_trigmuonef_track_CB_posX = 0;
   trig_EF_trigmuonef_track_CB_posY = 0;
   trig_EF_trigmuonef_track_CB_posZ = 0;
   trig_EF_trigmuonef_track_CB_matchChi2 = 0;
   trig_EF_trigmuonef_track_CB_NIdSctHits = 0;
   trig_EF_trigmuonef_track_CB_NIdPixelHits = 0;
   trig_EF_trigmuonef_track_CB_NTrtHits = 0;
   trig_EF_trigmuonef_track_CB_hasCB = 0;
   bcmRDO_channel = 0;
   bcmRDO_nhits = 0;
   bcmRDO_pulse1pos = 0;
   bcmRDO_pulse1width = 0;
   bcmRDO_pulse2pos = 0;
   bcmRDO_pulse2width = 0;
   bcmRDO_lvl1a = 0;
   bcmRDO_bcid = 0;
   bcmRDO_lvl1id = 0;
   ctpRDO_pit = 0;
   ctpRDO_tbp = 0;
   ctpRDO_tap = 0;
   ctpRDO_tav = 0;
   ctp_decisionItems = 0;
   ctp_decisionWords = 0;
   mbtsLvl2_energies = 0;
   mbtsLvl2_times = 0;
   lvl2_sp_pixelClusEndcapC_contents = 0;
   lvl2_sp_pixelClusBarrel_contents = 0;
   lvl2_sp_pixelClusEndcapA_contents = 0;
   lvl2_sp_droppedPixelModuleIds = 0;
   lvl2_sp_droppedSctModuleIds = 0;
   lvl2_mbTrt_endcapC_contents = 0;
   lvl2_mbTrt_barrel_contents = 0;
   lvl2_mbTrt_endcapA_contents = 0;
   ef_trk_z0_pt_contents = 0;
   ef_trk_eta_phi_contents = 0;
   vx_x = 0;
   vx_y = 0;
   vx_z = 0;
   vx_err_x = 0;
   vx_err_y = 0;
   vx_err_z = 0;
   vx_cov_xy = 0;
   vx_cov_xz = 0;
   vx_cov_yz = 0;
   vx_type = 0;
   vx_chi2 = 0;
   vx_ndof = 0;
   vx_px = 0;
   vx_py = 0;
   vx_pz = 0;
   vx_E = 0;
   vx_m = 0;
   vx_nTracks = 0;
   vx_sumPt = 0;
   vx_trk_weight = 0;
   vx_trk_n = 0;
   vx_trk_index = 0;
   el_E = 0;
   el_Et = 0;
   el_pt = 0;
   el_m = 0;
   el_eta = 0;
   el_phi = 0;
   el_px = 0;
   el_py = 0;
   el_pz = 0;
   el_charge = 0;
   el_author = 0;
   el_isEM = 0;
   el_isEMLoose = 0;
   el_isEMMedium = 0;
   el_isEMTight = 0;
   el_OQ = 0;
   el_convFlag = 0;
   el_isConv = 0;
   el_nConv = 0;
   el_nSingleTrackConv = 0;
   el_nDoubleTrackConv = 0;
   el_mediumWithoutTrack = 0;
   el_mediumIsoWithoutTrack = 0;
   el_tightWithoutTrack = 0;
   el_tightIsoWithoutTrack = 0;
   el_loose = 0;
   el_looseIso = 0;
   el_medium = 0;
   el_mediumIso = 0;
   el_tight = 0;
   el_tightIso = 0;
   el_loosePP = 0;
   el_loosePPIso = 0;
   el_mediumPP = 0;
   el_mediumPPIso = 0;
   el_tightPP = 0;
   el_tightPPIso = 0;
   el_goodOQ = 0;
   el_Ethad = 0;
   el_Ethad1 = 0;
   el_f1 = 0;
   el_f1core = 0;
   el_Emins1 = 0;
   el_fside = 0;
   el_Emax2 = 0;
   el_ws3 = 0;
   el_wstot = 0;
   el_emaxs1 = 0;
   el_deltaEs = 0;
   el_E233 = 0;
   el_E237 = 0;
   el_E277 = 0;
   el_weta2 = 0;
   el_f3 = 0;
   el_f3core = 0;
   el_rphiallcalo = 0;
   el_Etcone45 = 0;
   el_Etcone15 = 0;
   el_Etcone20 = 0;
   el_Etcone25 = 0;
   el_Etcone30 = 0;
   el_Etcone35 = 0;
   el_Etcone40 = 0;
   el_ptcone20 = 0;
   el_ptcone30 = 0;
   el_ptcone40 = 0;
   el_nucone20 = 0;
   el_nucone30 = 0;
   el_nucone40 = 0;
   el_Etcone15_pt_corrected = 0;
   el_Etcone20_pt_corrected = 0;
   el_Etcone25_pt_corrected = 0;
   el_Etcone30_pt_corrected = 0;
   el_Etcone35_pt_corrected = 0;
   el_Etcone40_pt_corrected = 0;
   el_convanglematch = 0;
   el_convtrackmatch = 0;
   el_pos7 = 0;
   el_etacorrmag = 0;
   el_deltaeta1 = 0;
   el_deltaeta2 = 0;
   el_deltaphi2 = 0;
   el_deltaphiRescaled = 0;
   el_deltaPhiFromLast = 0;
   el_deltaPhiRot = 0;
   el_expectHitInBLayer = 0;
   el_trackd0_physics = 0;
   el_etaSampling1 = 0;
   el_reta = 0;
   el_rphi = 0;
   el_topoEtcone20 = 0;
   el_topoEtcone30 = 0;
   el_topoEtcone40 = 0;
   el_materialTraversed = 0;
   el_EtringnoisedR03sig2 = 0;
   el_EtringnoisedR03sig3 = 0;
   el_EtringnoisedR03sig4 = 0;
   el_ptcone20_zpv05 = 0;
   el_ptcone30_zpv05 = 0;
   el_ptcone40_zpv05 = 0;
   el_nucone20_zpv05 = 0;
   el_nucone30_zpv05 = 0;
   el_nucone40_zpv05 = 0;
   el_isolationlikelihoodjets = 0;
   el_isolationlikelihoodhqelectrons = 0;
   el_electronweight = 0;
   el_electronbgweight = 0;
   el_softeweight = 0;
   el_softebgweight = 0;
   el_neuralnet = 0;
   el_Hmatrix = 0;
   el_Hmatrix5 = 0;
   el_adaboost = 0;
   el_softeneuralnet = 0;
   el_ringernn = 0;
   el_zvertex = 0;
   el_errz = 0;
   el_etap = 0;
   el_depth = 0;
   el_refittedTrack_n = 0;
   el_refittedTrack_author = 0;
   el_refittedTrack_chi2 = 0;
   el_refittedTrack_hasBrem = 0;
   el_refittedTrack_bremRadius = 0;
   el_refittedTrack_bremZ = 0;
   el_refittedTrack_bremRadiusErr = 0;
   el_refittedTrack_bremZErr = 0;
   el_refittedTrack_bremFitStatus = 0;
   el_refittedTrack_qoverp = 0;
   el_refittedTrack_d0 = 0;
   el_refittedTrack_z0 = 0;
   el_refittedTrack_theta = 0;
   el_refittedTrack_phi = 0;
   el_refittedTrack_LMqoverp = 0;
   el_refittedTrack_covd0 = 0;
   el_refittedTrack_covz0 = 0;
   el_refittedTrack_covphi = 0;
   el_refittedTrack_covtheta = 0;
   el_refittedTrack_covqoverp = 0;
   el_refittedTrack_covd0z0 = 0;
   el_refittedTrack_covz0phi = 0;
   el_refittedTrack_covz0theta = 0;
   el_refittedTrack_covz0qoverp = 0;
   el_refittedTrack_covd0phi = 0;
   el_refittedTrack_covd0theta = 0;
   el_refittedTrack_covd0qoverp = 0;
   el_refittedTrack_covphitheta = 0;
   el_refittedTrack_covphiqoverp = 0;
   el_refittedTrack_covthetaqoverp = 0;
   el_refittedTrack_d0_wrtBL = 0;
   el_refittedTrack_z0_wrtBL = 0;
   el_refittedTrack_phi_wrtBL = 0;
   el_refittedTrack_theta_wrtBL = 0;
   el_refittedTrack_qoverp_wrtBL = 0;
   el_refittedTrack_d0_err_wrtBL = 0;
   el_refittedTrack_z0_err_wrtBL = 0;
   el_refittedTrack_phi_err_wrtBL = 0;
   el_refittedTrack_theta_err_wrtBL = 0;
   el_refittedTrack_qoverp_err_wrtBL = 0;
   el_refittedTrack_d0_z0_err_wrtBL = 0;
   el_refittedTrack_d0_phi_err_wrtBL = 0;
   el_refittedTrack_d0_theta_err_wrtBL = 0;
   el_refittedTrack_d0_qoverp_err_wrtBL = 0;
   el_refittedTrack_z0_phi_err_wrtBL = 0;
   el_refittedTrack_z0_theta_err_wrtBL = 0;
   el_refittedTrack_z0_qoverp_err_wrtBL = 0;
   el_refittedTrack_phi_theta_err_wrtBL = 0;
   el_refittedTrack_phi_qoverp_err_wrtBL = 0;
   el_refittedTrack_theta_qoverp_err_wrtBL = 0;
   el_Es0 = 0;
   el_etas0 = 0;
   el_phis0 = 0;
   el_Es1 = 0;
   el_etas1 = 0;
   el_phis1 = 0;
   el_Es2 = 0;
   el_etas2 = 0;
   el_phis2 = 0;
   el_Es3 = 0;
   el_etas3 = 0;
   el_phis3 = 0;
   el_E_PreSamplerB = 0;
   el_E_EMB1 = 0;
   el_E_EMB2 = 0;
   el_E_EMB3 = 0;
   el_E_PreSamplerE = 0;
   el_E_EME1 = 0;
   el_E_EME2 = 0;
   el_E_EME3 = 0;
   el_E_HEC0 = 0;
   el_E_HEC1 = 0;
   el_E_HEC2 = 0;
   el_E_HEC3 = 0;
   el_E_TileBar0 = 0;
   el_E_TileBar1 = 0;
   el_E_TileBar2 = 0;
   el_E_TileGap1 = 0;
   el_E_TileGap2 = 0;
   el_E_TileGap3 = 0;
   el_E_TileExt0 = 0;
   el_E_TileExt1 = 0;
   el_E_TileExt2 = 0;
   el_E_FCAL0 = 0;
   el_E_FCAL1 = 0;
   el_E_FCAL2 = 0;
   el_cl_E = 0;
   el_cl_pt = 0;
   el_cl_eta = 0;
   el_cl_phi = 0;
   el_cl_etaCalo = 0;
   el_cl_phiCalo = 0;
   el_firstEdens = 0;
   el_cellmaxfrac = 0;
   el_longitudinal = 0;
   el_secondlambda = 0;
   el_lateral = 0;
   el_secondR = 0;
   el_centerlambda = 0;
   el_rawcl_Es0 = 0;
   el_rawcl_etas0 = 0;
   el_rawcl_phis0 = 0;
   el_rawcl_Es1 = 0;
   el_rawcl_etas1 = 0;
   el_rawcl_phis1 = 0;
   el_rawcl_Es2 = 0;
   el_rawcl_etas2 = 0;
   el_rawcl_phis2 = 0;
   el_rawcl_Es3 = 0;
   el_rawcl_etas3 = 0;
   el_rawcl_phis3 = 0;
   el_rawcl_E = 0;
   el_rawcl_pt = 0;
   el_rawcl_eta = 0;
   el_rawcl_phi = 0;
   el_trackd0 = 0;
   el_trackz0 = 0;
   el_trackphi = 0;
   el_tracktheta = 0;
   el_trackqoverp = 0;
   el_trackpt = 0;
   el_tracketa = 0;
   el_trackcov_d0 = 0;
   el_trackcov_z0 = 0;
   el_trackcov_phi = 0;
   el_trackcov_theta = 0;
   el_trackcov_qoverp = 0;
   el_trackcov_d0_z0 = 0;
   el_trackcov_d0_phi = 0;
   el_trackcov_d0_theta = 0;
   el_trackcov_d0_qoverp = 0;
   el_trackcov_z0_phi = 0;
   el_trackcov_z0_theta = 0;
   el_trackcov_z0_qoverp = 0;
   el_trackcov_phi_theta = 0;
   el_trackcov_phi_qoverp = 0;
   el_trackcov_theta_qoverp = 0;
   el_trackfitchi2 = 0;
   el_trackfitndof = 0;
   el_nBLHits = 0;
   el_nPixHits = 0;
   el_nSCTHits = 0;
   el_nTRTHits = 0;
   el_nTRTHighTHits = 0;
   el_nTRTXenonHits = 0;
   el_nPixHoles = 0;
   el_nSCTHoles = 0;
   el_nTRTHoles = 0;
   el_nPixelDeadSensors = 0;
   el_nSCTDeadSensors = 0;
   el_nBLSharedHits = 0;
   el_nPixSharedHits = 0;
   el_nSCTSharedHits = 0;
   el_nBLayerSplitHits = 0;
   el_nPixSplitHits = 0;
   el_nBLayerOutliers = 0;
   el_nPixelOutliers = 0;
   el_nSCTOutliers = 0;
   el_nTRTOutliers = 0;
   el_nTRTHighTOutliers = 0;
   el_nContribPixelLayers = 0;
   el_nGangedPixels = 0;
   el_nGangedFlaggedFakes = 0;
   el_nPixelSpoiltHits = 0;
   el_nSCTDoubleHoles = 0;
   el_nSCTSpoiltHits = 0;
   el_expectBLayerHit = 0;
   el_nSiHits = 0;
   el_TRTHighTHitsRatio = 0;
   el_TRTHighTOutliersRatio = 0;
   el_pixeldEdx = 0;
   el_nGoodHitsPixeldEdx = 0;
   el_massPixeldEdx = 0;
   el_likelihoodsPixeldEdx = 0;
   el_eProbabilityComb = 0;
   el_eProbabilityHT = 0;
   el_eProbabilityToT = 0;
   el_eProbabilityBrem = 0;
   el_vertweight = 0;
   el_vertx = 0;
   el_verty = 0;
   el_vertz = 0;
   el_trackd0beam = 0;
   el_trackz0beam = 0;
   el_tracksigd0beam = 0;
   el_tracksigz0beam = 0;
   el_trackd0pv = 0;
   el_trackz0pv = 0;
   el_tracksigd0pv = 0;
   el_tracksigz0pv = 0;
   el_trackIPEstimate_d0_biasedpvunbiased = 0;
   el_trackIPEstimate_z0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   el_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   el_trackd0pvunbiased = 0;
   el_trackz0pvunbiased = 0;
   el_tracksigd0pvunbiased = 0;
   el_tracksigz0pvunbiased = 0;
   el_Unrefittedtrack_d0 = 0;
   el_Unrefittedtrack_z0 = 0;
   el_Unrefittedtrack_phi = 0;
   el_Unrefittedtrack_theta = 0;
   el_Unrefittedtrack_qoverp = 0;
   el_Unrefittedtrack_pt = 0;
   el_Unrefittedtrack_eta = 0;
   el_theta_LM = 0;
   el_qoverp_LM = 0;
   el_locX_LM = 0;
   el_locY_LM = 0;
   el_phi_LM = 0;
   el_theta_err_LM = 0;
   el_qoverp_err_LM = 0;
   el_locX_err_LM = 0;
   el_locY_err_LM = 0;
   el_phi_err_LM = 0;
   el_hastrack = 0;
   el_deltaEmax2 = 0;
   el_calibHitsShowerDepth = 0;
   el_isIso = 0;
   el_mvaptcone20 = 0;
   el_mvaptcone30 = 0;
   el_mvaptcone40 = 0;
   el_CaloPointing_eta = 0;
   el_CaloPointing_sigma_eta = 0;
   el_CaloPointing_zvertex = 0;
   el_CaloPointing_sigma_zvertex = 0;
   el_HPV_eta = 0;
   el_HPV_sigma_eta = 0;
   el_HPV_zvertex = 0;
   el_HPV_sigma_zvertex = 0;
   el_topoEtcone60 = 0;
   el_ES0_real = 0;
   el_ES1_real = 0;
   el_ES2_real = 0;
   el_ES3_real = 0;
   el_EcellS0 = 0;
   el_etacellS0 = 0;
   el_Etcone40_ED_corrected = 0;
   el_Etcone40_corrected = 0;
   el_topoEtcone20_corrected = 0;
   el_topoEtcone30_corrected = 0;
   el_topoEtcone40_corrected = 0;
   el_ED_median = 0;
   el_ED_sigma = 0;
   el_ED_Njets = 0;
   el_EF_dr = 0;
   el_L2_dr = 0;
   el_L1_dr = 0;
   el_L1_index = 0;
   ph_E = 0;
   ph_Et = 0;
   ph_pt = 0;
   ph_m = 0;
   ph_eta = 0;
   ph_phi = 0;
   ph_px = 0;
   ph_py = 0;
   ph_pz = 0;
   ph_author = 0;
   ph_isRecovered = 0;
   ph_isEM = 0;
   ph_isEMLoose = 0;
   ph_isEMMedium = 0;
   ph_isEMTight = 0;
   ph_OQ = 0;
   ph_loose = 0;
   ph_looseIso = 0;
   ph_tight = 0;
   ph_tightIso = 0;
   ph_looseAR = 0;
   ph_looseARIso = 0;
   ph_tightAR = 0;
   ph_tightARIso = 0;
   ph_goodOQ = 0;
   ph_Ethad = 0;
   ph_Ethad1 = 0;
   ph_E033 = 0;
   ph_f1 = 0;
   ph_f1core = 0;
   ph_Emins1 = 0;
   ph_fside = 0;
   ph_Emax2 = 0;
   ph_ws3 = 0;
   ph_wstot = 0;
   ph_E132 = 0;
   ph_E1152 = 0;
   ph_emaxs1 = 0;
   ph_deltaEs = 0;
   ph_E233 = 0;
   ph_E237 = 0;
   ph_E277 = 0;
   ph_weta2 = 0;
   ph_f3 = 0;
   ph_f3core = 0;
   ph_rphiallcalo = 0;
   ph_Etcone45 = 0;
   ph_Etcone15 = 0;
   ph_Etcone20 = 0;
   ph_Etcone25 = 0;
   ph_Etcone30 = 0;
   ph_Etcone35 = 0;
   ph_Etcone40 = 0;
   ph_ptcone20 = 0;
   ph_ptcone30 = 0;
   ph_ptcone40 = 0;
   ph_nucone20 = 0;
   ph_nucone30 = 0;
   ph_nucone40 = 0;
   ph_Etcone15_pt_corrected = 0;
   ph_Etcone20_pt_corrected = 0;
   ph_Etcone25_pt_corrected = 0;
   ph_Etcone30_pt_corrected = 0;
   ph_Etcone35_pt_corrected = 0;
   ph_Etcone40_pt_corrected = 0;
   ph_convanglematch = 0;
   ph_convtrackmatch = 0;
   ph_reta = 0;
   ph_rphi = 0;
   ph_topoEtcone20 = 0;
   ph_topoEtcone30 = 0;
   ph_topoEtcone40 = 0;
   ph_materialTraversed = 0;
   ph_EtringnoisedR03sig2 = 0;
   ph_EtringnoisedR03sig3 = 0;
   ph_EtringnoisedR03sig4 = 0;
   ph_ptcone20_zpv05 = 0;
   ph_ptcone30_zpv05 = 0;
   ph_ptcone40_zpv05 = 0;
   ph_nucone20_zpv05 = 0;
   ph_nucone30_zpv05 = 0;
   ph_nucone40_zpv05 = 0;
   ph_isolationlikelihoodjets = 0;
   ph_isolationlikelihoodhqelectrons = 0;
   ph_loglikelihood = 0;
   ph_photonweight = 0;
   ph_photonbgweight = 0;
   ph_neuralnet = 0;
   ph_Hmatrix = 0;
   ph_Hmatrix5 = 0;
   ph_adaboost = 0;
   ph_ringernn = 0;
   ph_zvertex = 0;
   ph_errz = 0;
   ph_etap = 0;
   ph_depth = 0;
   ph_cl_E = 0;
   ph_cl_pt = 0;
   ph_cl_eta = 0;
   ph_cl_phi = 0;
   ph_cl_etaCalo = 0;
   ph_cl_phiCalo = 0;
   ph_Es0 = 0;
   ph_etas0 = 0;
   ph_phis0 = 0;
   ph_Es1 = 0;
   ph_etas1 = 0;
   ph_phis1 = 0;
   ph_Es2 = 0;
   ph_etas2 = 0;
   ph_phis2 = 0;
   ph_Es3 = 0;
   ph_etas3 = 0;
   ph_phis3 = 0;
   ph_rawcl_Es0 = 0;
   ph_rawcl_etas0 = 0;
   ph_rawcl_phis0 = 0;
   ph_rawcl_Es1 = 0;
   ph_rawcl_etas1 = 0;
   ph_rawcl_phis1 = 0;
   ph_rawcl_Es2 = 0;
   ph_rawcl_etas2 = 0;
   ph_rawcl_phis2 = 0;
   ph_rawcl_Es3 = 0;
   ph_rawcl_etas3 = 0;
   ph_rawcl_phis3 = 0;
   ph_rawcl_E = 0;
   ph_rawcl_pt = 0;
   ph_rawcl_eta = 0;
   ph_rawcl_phi = 0;
   ph_convMatchDeltaEta1 = 0;
   ph_convMatchDeltaEta2 = 0;
   ph_convMatchDeltaPhi1 = 0;
   ph_convMatchDeltaPhi2 = 0;
   ph_rings_E = 0;
   ph_vx_n = 0;
   ph_vx_x = 0;
   ph_vx_y = 0;
   ph_vx_z = 0;
   ph_vx_px = 0;
   ph_vx_py = 0;
   ph_vx_pz = 0;
   ph_vx_E = 0;
   ph_vx_m = 0;
   ph_vx_nTracks = 0;
   ph_vx_sumPt = 0;
   ph_vx_convTrk_weight = 0;
   ph_vx_convTrk_n = 0;
   ph_vx_convTrk_fitter = 0;
   ph_vx_convTrk_patternReco1 = 0;
   ph_vx_convTrk_patternReco2 = 0;
   ph_vx_convTrk_trackProperties = 0;
   ph_vx_convTrk_particleHypothesis = 0;
   ph_vx_convTrk_nBLHits = 0;
   ph_vx_convTrk_nPixHits = 0;
   ph_vx_convTrk_nSCTHits = 0;
   ph_vx_convTrk_nTRTHits = 0;
   ph_vx_convTrk_nTRTHighTHits = 0;
   ph_vx_convTrk_nTRTXenonHits = 0;
   ph_vx_convTrk_nPixHoles = 0;
   ph_vx_convTrk_nSCTHoles = 0;
   ph_vx_convTrk_nTRTHoles = 0;
   ph_vx_convTrk_nPixelDeadSensors = 0;
   ph_vx_convTrk_nSCTDeadSensors = 0;
   ph_vx_convTrk_nBLSharedHits = 0;
   ph_vx_convTrk_nPixSharedHits = 0;
   ph_vx_convTrk_nSCTSharedHits = 0;
   ph_vx_convTrk_nBLayerSplitHits = 0;
   ph_vx_convTrk_nPixSplitHits = 0;
   ph_vx_convTrk_nBLayerOutliers = 0;
   ph_vx_convTrk_nPixelOutliers = 0;
   ph_vx_convTrk_nSCTOutliers = 0;
   ph_vx_convTrk_nTRTOutliers = 0;
   ph_vx_convTrk_nTRTHighTOutliers = 0;
   ph_vx_convTrk_nContribPixelLayers = 0;
   ph_vx_convTrk_nGangedPixels = 0;
   ph_vx_convTrk_nGangedFlaggedFakes = 0;
   ph_vx_convTrk_nPixelSpoiltHits = 0;
   ph_vx_convTrk_nSCTDoubleHoles = 0;
   ph_vx_convTrk_nSCTSpoiltHits = 0;
   ph_vx_convTrk_nTRTDeadStraws = 0;
   ph_vx_convTrk_nTRTTubeHits = 0;
   ph_vx_convTrk_nOutliersOnTrack = 0;
   ph_vx_convTrk_standardDeviationOfChi2OS = 0;
   ph_vx_convTrk_expectBLayerHit = 0;
   ph_vx_convTrk_nMDTHits = 0;
   ph_vx_convTrk_nCSCEtaHits = 0;
   ph_vx_convTrk_nCSCPhiHits = 0;
   ph_vx_convTrk_nRPCEtaHits = 0;
   ph_vx_convTrk_nRPCPhiHits = 0;
   ph_vx_convTrk_nTGCEtaHits = 0;
   ph_vx_convTrk_nTGCPhiHits = 0;
   ph_vx_convTrk_nMdtHoles = 0;
   ph_vx_convTrk_nCscEtaHoles = 0;
   ph_vx_convTrk_nCscPhiHoles = 0;
   ph_vx_convTrk_nRpcEtaHoles = 0;
   ph_vx_convTrk_nRpcPhiHoles = 0;
   ph_vx_convTrk_nTgcEtaHoles = 0;
   ph_vx_convTrk_nTgcPhiHoles = 0;
   ph_vx_convTrk_nHits = 0;
   ph_vx_convTrk_nHoles = 0;
   ph_vx_convTrk_hitPattern = 0;
   ph_vx_convTrk_nSiHits = 0;
   ph_vx_convTrk_TRTHighTHitsRatio = 0;
   ph_vx_convTrk_TRTHighTOutliersRatio = 0;
   ph_vx_convTrk_eProbabilityComb = 0;
   ph_vx_convTrk_eProbabilityHT = 0;
   ph_vx_convTrk_eProbabilityToT = 0;
   ph_vx_convTrk_eProbabilityBrem = 0;
   ph_vx_convTrk_chi2 = 0;
   ph_vx_convTrk_ndof = 0;
   ph_deltaEmax2 = 0;
   ph_calibHitsShowerDepth = 0;
   ph_isIso = 0;
   ph_mvaptcone20 = 0;
   ph_mvaptcone30 = 0;
   ph_mvaptcone40 = 0;
   ph_vx_Chi2 = 0;
   ph_vx_Dcottheta = 0;
   ph_vx_Dphi = 0;
   ph_vx_Dist = 0;
   ph_vx_DR1R2 = 0;
   ph_CaloPointing_eta = 0;
   ph_CaloPointing_sigma_eta = 0;
   ph_CaloPointing_zvertex = 0;
   ph_CaloPointing_sigma_zvertex = 0;
   ph_HPV_eta = 0;
   ph_HPV_sigma_eta = 0;
   ph_HPV_zvertex = 0;
   ph_HPV_sigma_zvertex = 0;
   ph_NN_passes = 0;
   ph_NN_discriminant = 0;
   ph_ES0_real = 0;
   ph_ES1_real = 0;
   ph_ES2_real = 0;
   ph_ES3_real = 0;
   ph_EcellS0 = 0;
   ph_etacellS0 = 0;
   ph_Etcone40_ED_corrected = 0;
   ph_Etcone40_corrected = 0;
   ph_topoEtcone20_corrected = 0;
   ph_topoEtcone30_corrected = 0;
   ph_topoEtcone40_corrected = 0;
   ph_ED_median = 0;
   ph_ED_sigma = 0;
   ph_ED_Njets = 0;
   ph_convIP = 0;
   ph_convIPRev = 0;
   ph_el_index = 0;
   ph_EF_dr = 0;
   ph_EF_index = 0;
   ph_L2_dr = 0;
   ph_L1_dr = 0;
   ph_L1_index = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EF_2g10_loose", &EF_2g10_loose, &b_EF_2g10_loose);
   fChain->SetBranchAddress("EF_2g5_loose", &EF_2g5_loose, &b_EF_2g5_loose);
   fChain->SetBranchAddress("EF_2g7_loose", &EF_2g7_loose, &b_EF_2g7_loose);
   fChain->SetBranchAddress("EF_2mu2_MSonly_EFFS_L1MBTS", &EF_2mu2_MSonly_EFFS_L1MBTS, &b_EF_2mu2_MSonly_EFFS_L1MBTS);
   fChain->SetBranchAddress("EF_2mu2_MSonly_EFFS_L1TE10", &EF_2mu2_MSonly_EFFS_L1TE10, &b_EF_2mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_2mu2_MSonly_EFFS_L1TE20", &EF_2mu2_MSonly_EFFS_L1TE20, &b_EF_2mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_2mu2_MSonly_EFFS_L1TE50", &EF_2mu2_MSonly_EFFS_L1TE50, &b_EF_2mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_2mu2_MSonly_EFFS_L1ZDC", &EF_2mu2_MSonly_EFFS_L1ZDC, &b_EF_2mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_2mu2_MSonly_EFFS_L1ZDC_OR", &EF_2mu2_MSonly_EFFS_L1ZDC_OR, &b_EF_2mu2_MSonly_EFFS_L1ZDC_OR);
   fChain->SetBranchAddress("EF_2mu4T_MSonly", &EF_2mu4T_MSonly, &b_EF_2mu4T_MSonly);
   fChain->SetBranchAddress("EF_2mu4_MSonly", &EF_2mu4_MSonly, &b_EF_2mu4_MSonly);
   fChain->SetBranchAddress("EF_2mu4_MSonly_EFFS_L1MU0", &EF_2mu4_MSonly_EFFS_L1MU0, &b_EF_2mu4_MSonly_EFFS_L1MU0);
   fChain->SetBranchAddress("EF_2mu4_MSonly_EFFS_L1TE10", &EF_2mu4_MSonly_EFFS_L1TE10, &b_EF_2mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_2mu4_MSonly_EFFS_L1TE20", &EF_2mu4_MSonly_EFFS_L1TE20, &b_EF_2mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_2mu4_MSonly_EFFS_L1TE50", &EF_2mu4_MSonly_EFFS_L1TE50, &b_EF_2mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_2mu4_MSonly_EFFS_L1ZDC", &EF_2mu4_MSonly_EFFS_L1ZDC, &b_EF_2mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_2mu6T_MSonly", &EF_2mu6T_MSonly, &b_EF_2mu6T_MSonly);
   fChain->SetBranchAddress("EF_2mu6_MSonly", &EF_2mu6_MSonly, &b_EF_2mu6_MSonly);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0", &EF_L1ItemStreamer_L1_2MU0, &b_EF_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0_EMPTY", &EF_L1ItemStreamer_L1_2MU0_EMPTY, &b_EF_L1ItemStreamer_L1_2MU0_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU11", &EF_L1ItemStreamer_L1_2MU11, &b_EF_L1ItemStreamer_L1_2MU11);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU4", &EF_L1ItemStreamer_L1_2MU4, &b_EF_L1ItemStreamer_L1_2MU4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU4_EMPTY", &EF_L1ItemStreamer_L1_2MU4_EMPTY, &b_EF_L1ItemStreamer_L1_2MU4_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU6", &EF_L1ItemStreamer_L1_2MU6, &b_EF_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU6_EMPTY", &EF_L1ItemStreamer_L1_2MU6_EMPTY, &b_EF_L1ItemStreamer_L1_2MU6_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY", &EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY, &b_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO", &EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO, &b_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO", &EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO, &b_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM10", &EF_L1ItemStreamer_L1_EM10, &b_EF_L1ItemStreamer_L1_EM10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM12", &EF_L1ItemStreamer_L1_EM12, &b_EF_L1ItemStreamer_L1_EM12);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM14", &EF_L1ItemStreamer_L1_EM14, &b_EF_L1ItemStreamer_L1_EM14);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM16", &EF_L1ItemStreamer_L1_EM16, &b_EF_L1ItemStreamer_L1_EM16);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3", &EF_L1ItemStreamer_L1_EM3, &b_EF_L1ItemStreamer_L1_EM3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_EMPTY", &EF_L1ItemStreamer_L1_EM3_EMPTY, &b_EF_L1ItemStreamer_L1_EM3_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_FIRSTEMPTY", &EF_L1ItemStreamer_L1_EM3_FIRSTEMPTY, &b_EF_L1ItemStreamer_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_MV_VTE50", &EF_L1ItemStreamer_L1_EM3_MV_VTE50, &b_EF_L1ItemStreamer_L1_EM3_MV_VTE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_UNPAIRED_ISO", &EF_L1ItemStreamer_L1_EM3_UNPAIRED_ISO, &b_EF_L1ItemStreamer_L1_EM3_UNPAIRED_ISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO", &EF_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO, &b_EF_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_VTE50", &EF_L1ItemStreamer_L1_EM3_VTE50, &b_EF_L1ItemStreamer_L1_EM3_VTE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM4", &EF_L1ItemStreamer_L1_EM4, &b_EF_L1ItemStreamer_L1_EM4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM5", &EF_L1ItemStreamer_L1_EM5, &b_EF_L1ItemStreamer_L1_EM5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM5_EMPTY", &EF_L1ItemStreamer_L1_EM5_EMPTY, &b_EF_L1ItemStreamer_L1_EM5_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM7", &EF_L1ItemStreamer_L1_EM7, &b_EF_L1ItemStreamer_L1_EM7);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0", &EF_L1ItemStreamer_L1_MU0, &b_EF_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_EMPTY", &EF_L1ItemStreamer_L1_MU0_EMPTY, &b_EF_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY", &EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY, &b_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_MV_VTE50", &EF_L1ItemStreamer_L1_MU0_MV_VTE50, &b_EF_L1ItemStreamer_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_TE50", &EF_L1ItemStreamer_L1_MU0_TE50, &b_EF_L1ItemStreamer_L1_MU0_TE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO", &EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO, &b_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO", &EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO, &b_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_VTE50", &EF_L1ItemStreamer_L1_MU0_VTE50, &b_EF_L1ItemStreamer_L1_MU0_VTE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU11", &EF_L1ItemStreamer_L1_MU11, &b_EF_L1ItemStreamer_L1_MU11);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU11_EMPTY", &EF_L1ItemStreamer_L1_MU11_EMPTY, &b_EF_L1ItemStreamer_L1_MU11_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU15", &EF_L1ItemStreamer_L1_MU15, &b_EF_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU20", &EF_L1ItemStreamer_L1_MU20, &b_EF_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4", &EF_L1ItemStreamer_L1_MU4, &b_EF_L1ItemStreamer_L1_MU4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4_EMPTY", &EF_L1ItemStreamer_L1_MU4_EMPTY, &b_EF_L1ItemStreamer_L1_MU4_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY", &EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY, &b_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4_MV_VTE50", &EF_L1ItemStreamer_L1_MU4_MV_VTE50, &b_EF_L1ItemStreamer_L1_MU4_MV_VTE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4_TE50", &EF_L1ItemStreamer_L1_MU4_TE50, &b_EF_L1ItemStreamer_L1_MU4_TE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO", &EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO, &b_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO", &EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO, &b_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU4_VTE50", &EF_L1ItemStreamer_L1_MU4_VTE50, &b_EF_L1ItemStreamer_L1_MU4_VTE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU6", &EF_L1ItemStreamer_L1_MU6, &b_EF_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY", &EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY, &b_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("EF_SeededStreamerL1Calo", &EF_SeededStreamerL1Calo, &b_EF_SeededStreamerL1Calo);
   fChain->SetBranchAddress("EF_e10_loose1", &EF_e10_loose1, &b_EF_e10_loose1);
   fChain->SetBranchAddress("EF_e10_medium1", &EF_e10_medium1, &b_EF_e10_medium1);
   fChain->SetBranchAddress("EF_e5_loose1", &EF_e5_loose1, &b_EF_e5_loose1);
   fChain->SetBranchAddress("EF_e5_medium1", &EF_e5_medium1, &b_EF_e5_medium1);
   fChain->SetBranchAddress("EF_e7_loose1", &EF_e7_loose1, &b_EF_e7_loose1);
   fChain->SetBranchAddress("EF_e7_medium1", &EF_e7_medium1, &b_EF_e7_medium1);
   fChain->SetBranchAddress("EF_g10_loose", &EF_g10_loose, &b_EF_g10_loose);
   fChain->SetBranchAddress("EF_g10_loose_larcalib", &EF_g10_loose_larcalib, &b_EF_g10_loose_larcalib);
   fChain->SetBranchAddress("EF_g10_medium", &EF_g10_medium, &b_EF_g10_medium);
   fChain->SetBranchAddress("EF_g5_NoCut_cosmic", &EF_g5_NoCut_cosmic, &b_EF_g5_NoCut_cosmic);
   fChain->SetBranchAddress("EF_g5_loose", &EF_g5_loose, &b_EF_g5_loose);
   fChain->SetBranchAddress("EF_g5_loose_larcalib", &EF_g5_loose_larcalib, &b_EF_g5_loose_larcalib);
   fChain->SetBranchAddress("EF_g5_medium", &EF_g5_medium, &b_EF_g5_medium);
   fChain->SetBranchAddress("EF_g7_loose", &EF_g7_loose, &b_EF_g7_loose);
   fChain->SetBranchAddress("EF_g7_medium", &EF_g7_medium, &b_EF_g7_medium);
   fChain->SetBranchAddress("EF_mu10T_MSonly", &EF_mu10T_MSonly, &b_EF_mu10T_MSonly);
   fChain->SetBranchAddress("EF_mu10_MSonly", &EF_mu10_MSonly, &b_EF_mu10_MSonly);
   fChain->SetBranchAddress("EF_mu10_MSonly_EFFS_L1TE10", &EF_mu10_MSonly_EFFS_L1TE10, &b_EF_mu10_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_mu10_MSonly_EFFS_L1TE20", &EF_mu10_MSonly_EFFS_L1TE20, &b_EF_mu10_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_mu10_MSonly_EFFS_L1TE50", &EF_mu10_MSonly_EFFS_L1TE50, &b_EF_mu10_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_mu10_MSonly_EFFS_L1ZDC", &EF_mu10_MSonly_EFFS_L1ZDC, &b_EF_mu10_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_mu13T_MSonly", &EF_mu13T_MSonly, &b_EF_mu13T_MSonly);
   fChain->SetBranchAddress("EF_mu13_MSonly", &EF_mu13_MSonly, &b_EF_mu13_MSonly);
   fChain->SetBranchAddress("EF_mu13_MSonly_EFFS_L1TE10", &EF_mu13_MSonly_EFFS_L1TE10, &b_EF_mu13_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_mu13_MSonly_EFFS_L1TE20", &EF_mu13_MSonly_EFFS_L1TE20, &b_EF_mu13_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_mu13_MSonly_EFFS_L1TE50", &EF_mu13_MSonly_EFFS_L1TE50, &b_EF_mu13_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_mu13_MSonly_EFFS_L1ZDC", &EF_mu13_MSonly_EFFS_L1ZDC, &b_EF_mu13_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_mu4", &EF_mu4, &b_EF_mu4);
   fChain->SetBranchAddress("EF_mu4T", &EF_mu4T, &b_EF_mu4T);
   fChain->SetBranchAddress("EF_mu4T_IDTrkNoCut", &EF_mu4T_IDTrkNoCut, &b_EF_mu4T_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu4T_MSonly", &EF_mu4T_MSonly, &b_EF_mu4T_MSonly);
   fChain->SetBranchAddress("EF_mu4T_MSonly_L1TE50", &EF_mu4T_MSonly_L1TE50, &b_EF_mu4T_MSonly_L1TE50);
   fChain->SetBranchAddress("EF_mu4T_MSonly_barrel", &EF_mu4T_MSonly_barrel, &b_EF_mu4T_MSonly_barrel);
   fChain->SetBranchAddress("EF_mu4T_MSonly_cosmic", &EF_mu4T_MSonly_cosmic, &b_EF_mu4T_MSonly_cosmic);
   fChain->SetBranchAddress("EF_mu4T_cosmic", &EF_mu4T_cosmic, &b_EF_mu4T_cosmic);
   fChain->SetBranchAddress("EF_mu4_IDTrkNoCut", &EF_mu4_IDTrkNoCut, &b_EF_mu4_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu4_L1VTE50", &EF_mu4_L1VTE50, &b_EF_mu4_L1VTE50);
   fChain->SetBranchAddress("EF_mu4_MSonly", &EF_mu4_MSonly, &b_EF_mu4_MSonly);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1MBTS", &EF_mu4_MSonly_EFFS_L1MBTS, &b_EF_mu4_MSonly_EFFS_L1MBTS);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1TE10", &EF_mu4_MSonly_EFFS_L1TE10, &b_EF_mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1TE20", &EF_mu4_MSonly_EFFS_L1TE20, &b_EF_mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1TE50", &EF_mu4_MSonly_EFFS_L1TE50, &b_EF_mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1ZDC", &EF_mu4_MSonly_EFFS_L1ZDC, &b_EF_mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1ZDC_OR", &EF_mu4_MSonly_EFFS_L1ZDC_OR, &b_EF_mu4_MSonly_EFFS_L1ZDC_OR);
   fChain->SetBranchAddress("EF_mu4_MSonly_L1TE50", &EF_mu4_MSonly_L1TE50, &b_EF_mu4_MSonly_L1TE50);
   fChain->SetBranchAddress("EF_mu4_MSonly_barrel", &EF_mu4_MSonly_barrel, &b_EF_mu4_MSonly_barrel);
   fChain->SetBranchAddress("EF_mu4_MSonly_barrel_EFFS_L1ZDC", &EF_mu4_MSonly_barrel_EFFS_L1ZDC, &b_EF_mu4_MSonly_barrel_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_mu4_MSonly_barrel_L1TE50", &EF_mu4_MSonly_barrel_L1TE50, &b_EF_mu4_MSonly_barrel_L1TE50);
   fChain->SetBranchAddress("EF_mu4_MSonly_cosmic", &EF_mu4_MSonly_cosmic, &b_EF_mu4_MSonly_cosmic);
   fChain->SetBranchAddress("EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10", &EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10, &b_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_mu4_MSonly_j15_a2hi_EFFS_matched", &EF_mu4_MSonly_j15_a2hi_EFFS_matched, &b_EF_mu4_MSonly_j15_a2hi_EFFS_matched);
   fChain->SetBranchAddress("EF_mu4_barrel_L1VTE50", &EF_mu4_barrel_L1VTE50, &b_EF_mu4_barrel_L1VTE50);
   fChain->SetBranchAddress("EF_mu4_cosmic", &EF_mu4_cosmic, &b_EF_mu4_cosmic);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1TE10", &EF_mu4_mu2_MSonly_EFFS_L1TE10, &b_EF_mu4_mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1TE20", &EF_mu4_mu2_MSonly_EFFS_L1TE20, &b_EF_mu4_mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1TE50", &EF_mu4_mu2_MSonly_EFFS_L1TE50, &b_EF_mu4_mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1ZDC", &EF_mu4_mu2_MSonly_EFFS_L1ZDC, &b_EF_mu4_mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_mu6T_MSonly", &EF_mu6T_MSonly, &b_EF_mu6T_MSonly);
   fChain->SetBranchAddress("EF_mu6_IDTrkNoCut", &EF_mu6_IDTrkNoCut, &b_EF_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu6_L1VTE50", &EF_mu6_L1VTE50, &b_EF_mu6_L1VTE50);
   fChain->SetBranchAddress("EF_mu6_MSonly", &EF_mu6_MSonly, &b_EF_mu6_MSonly);
   fChain->SetBranchAddress("EF_mu6_MSonly_L1TE50", &EF_mu6_MSonly_L1TE50, &b_EF_mu6_MSonly_L1TE50);
   fChain->SetBranchAddress("L1_2EM3", &L1_2EM3, &b_L1_2EM3);
   fChain->SetBranchAddress("L1_2EM5", &L1_2EM5, &b_L1_2EM5);
   fChain->SetBranchAddress("L1_2MU0", &L1_2MU0, &b_L1_2MU0);
   fChain->SetBranchAddress("L1_2MU0_EMPTY", &L1_2MU0_EMPTY, &b_L1_2MU0_EMPTY);
   fChain->SetBranchAddress("L1_2MU11", &L1_2MU11, &b_L1_2MU11);
   fChain->SetBranchAddress("L1_2MU20", &L1_2MU20, &b_L1_2MU20);
   fChain->SetBranchAddress("L1_2MU4", &L1_2MU4, &b_L1_2MU4);
   fChain->SetBranchAddress("L1_2MU4_EMPTY", &L1_2MU4_EMPTY, &b_L1_2MU4_EMPTY);
   fChain->SetBranchAddress("L1_2MU6", &L1_2MU6, &b_L1_2MU6);
   fChain->SetBranchAddress("L1_2MU6_EMPTY", &L1_2MU6_EMPTY, &b_L1_2MU6_EMPTY);
   fChain->SetBranchAddress("L1_2MU6_FIRSTEMPTY", &L1_2MU6_FIRSTEMPTY, &b_L1_2MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_2MU6_UNPAIRED_ISO", &L1_2MU6_UNPAIRED_ISO, &b_L1_2MU6_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_2MU6_UNPAIRED_NONISO", &L1_2MU6_UNPAIRED_NONISO, &b_L1_2MU6_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_EM10", &L1_EM10, &b_L1_EM10);
   fChain->SetBranchAddress("L1_EM12", &L1_EM12, &b_L1_EM12);
   fChain->SetBranchAddress("L1_EM14", &L1_EM14, &b_L1_EM14);
   fChain->SetBranchAddress("L1_EM16", &L1_EM16, &b_L1_EM16);
   fChain->SetBranchAddress("L1_EM3", &L1_EM3, &b_L1_EM3);
   fChain->SetBranchAddress("L1_EM3_EMPTY", &L1_EM3_EMPTY, &b_L1_EM3_EMPTY);
   fChain->SetBranchAddress("L1_EM3_FIRSTEMPTY", &L1_EM3_FIRSTEMPTY, &b_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_EM3_MV_VTE50", &L1_EM3_MV_VTE50, &b_L1_EM3_MV_VTE50);
   fChain->SetBranchAddress("L1_EM3_UNPAIRED_ISO", &L1_EM3_UNPAIRED_ISO, &b_L1_EM3_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_EM3_UNPAIRED_NONISO", &L1_EM3_UNPAIRED_NONISO, &b_L1_EM3_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_EM3_VTE50", &L1_EM3_VTE50, &b_L1_EM3_VTE50);
   fChain->SetBranchAddress("L1_EM4", &L1_EM4, &b_L1_EM4);
   fChain->SetBranchAddress("L1_EM5", &L1_EM5, &b_L1_EM5);
   fChain->SetBranchAddress("L1_EM5_EMPTY", &L1_EM5_EMPTY, &b_L1_EM5_EMPTY);
   fChain->SetBranchAddress("L1_EM7", &L1_EM7, &b_L1_EM7);
   fChain->SetBranchAddress("L1_MU0", &L1_MU0, &b_L1_MU0);
   fChain->SetBranchAddress("L1_MU0_EMPTY", &L1_MU0_EMPTY, &b_L1_MU0_EMPTY);
   fChain->SetBranchAddress("L1_MU0_FIRSTEMPTY", &L1_MU0_FIRSTEMPTY, &b_L1_MU0_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU0_MV_VTE50", &L1_MU0_MV_VTE50, &b_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("L1_MU0_TE50", &L1_MU0_TE50, &b_L1_MU0_TE50);
   fChain->SetBranchAddress("L1_MU0_UNPAIRED_ISO", &L1_MU0_UNPAIRED_ISO, &b_L1_MU0_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MU0_UNPAIRED_NONISO", &L1_MU0_UNPAIRED_NONISO, &b_L1_MU0_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_MU0_VTE50", &L1_MU0_VTE50, &b_L1_MU0_VTE50);
   fChain->SetBranchAddress("L1_MU11", &L1_MU11, &b_L1_MU11);
   fChain->SetBranchAddress("L1_MU11_EMPTY", &L1_MU11_EMPTY, &b_L1_MU11_EMPTY);
   fChain->SetBranchAddress("L1_MU15", &L1_MU15, &b_L1_MU15);
   fChain->SetBranchAddress("L1_MU20", &L1_MU20, &b_L1_MU20);
   fChain->SetBranchAddress("L1_MU4", &L1_MU4, &b_L1_MU4);
   fChain->SetBranchAddress("L1_MU4_EMPTY", &L1_MU4_EMPTY, &b_L1_MU4_EMPTY);
   fChain->SetBranchAddress("L1_MU4_FIRSTEMPTY", &L1_MU4_FIRSTEMPTY, &b_L1_MU4_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU4_MV_VTE50", &L1_MU4_MV_VTE50, &b_L1_MU4_MV_VTE50);
   fChain->SetBranchAddress("L1_MU4_TE50", &L1_MU4_TE50, &b_L1_MU4_TE50);
   fChain->SetBranchAddress("L1_MU4_UNPAIRED_ISO", &L1_MU4_UNPAIRED_ISO, &b_L1_MU4_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MU4_UNPAIRED_NONISO", &L1_MU4_UNPAIRED_NONISO, &b_L1_MU4_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_MU4_VTE50", &L1_MU4_VTE50, &b_L1_MU4_VTE50);
   fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
   fChain->SetBranchAddress("L1_MU6_FIRSTEMPTY", &L1_MU6_FIRSTEMPTY, &b_L1_MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("L2_2g10_loose", &L2_2g10_loose, &b_L2_2g10_loose);
   fChain->SetBranchAddress("L2_2g5_loose", &L2_2g5_loose, &b_L2_2g5_loose);
   fChain->SetBranchAddress("L2_2g7_loose", &L2_2g7_loose, &b_L2_2g7_loose);
   fChain->SetBranchAddress("L2_2mu2_MSonly_EFFS_L1MBTS", &L2_2mu2_MSonly_EFFS_L1MBTS, &b_L2_2mu2_MSonly_EFFS_L1MBTS);
   fChain->SetBranchAddress("L2_2mu2_MSonly_EFFS_L1TE10", &L2_2mu2_MSonly_EFFS_L1TE10, &b_L2_2mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_2mu2_MSonly_EFFS_L1TE20", &L2_2mu2_MSonly_EFFS_L1TE20, &b_L2_2mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_2mu2_MSonly_EFFS_L1TE50", &L2_2mu2_MSonly_EFFS_L1TE50, &b_L2_2mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_2mu2_MSonly_EFFS_L1ZDC", &L2_2mu2_MSonly_EFFS_L1ZDC, &b_L2_2mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_2mu2_MSonly_EFFS_L1ZDC_OR", &L2_2mu2_MSonly_EFFS_L1ZDC_OR, &b_L2_2mu2_MSonly_EFFS_L1ZDC_OR);
   fChain->SetBranchAddress("L2_2mu4T_MSonly", &L2_2mu4T_MSonly, &b_L2_2mu4T_MSonly);
   fChain->SetBranchAddress("L2_2mu4_MSonly", &L2_2mu4_MSonly, &b_L2_2mu4_MSonly);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1MU0", &L2_2mu4_MSonly_EFFS_L1MU0, &b_L2_2mu4_MSonly_EFFS_L1MU0);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1TE10", &L2_2mu4_MSonly_EFFS_L1TE10, &b_L2_2mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1TE20", &L2_2mu4_MSonly_EFFS_L1TE20, &b_L2_2mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1TE50", &L2_2mu4_MSonly_EFFS_L1TE50, &b_L2_2mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1ZDC", &L2_2mu4_MSonly_EFFS_L1ZDC, &b_L2_2mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_2mu6T_MSonly", &L2_2mu6T_MSonly, &b_L2_2mu6T_MSonly);
   fChain->SetBranchAddress("L2_2mu6_MSonly", &L2_2mu6_MSonly, &b_L2_2mu6_MSonly);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM3", &L2_L1ItemStreamer_L1_2EM3, &b_L2_L1ItemStreamer_L1_2EM3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM5", &L2_L1ItemStreamer_L1_2EM5, &b_L2_L1ItemStreamer_L1_2EM5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0", &L2_L1ItemStreamer_L1_2MU0, &b_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0_EMPTY", &L2_L1ItemStreamer_L1_2MU0_EMPTY, &b_L2_L1ItemStreamer_L1_2MU0_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU11", &L2_L1ItemStreamer_L1_2MU11, &b_L2_L1ItemStreamer_L1_2MU11);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU4", &L2_L1ItemStreamer_L1_2MU4, &b_L2_L1ItemStreamer_L1_2MU4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU4_EMPTY", &L2_L1ItemStreamer_L1_2MU4_EMPTY, &b_L2_L1ItemStreamer_L1_2MU4_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU6", &L2_L1ItemStreamer_L1_2MU6, &b_L2_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU6_EMPTY", &L2_L1ItemStreamer_L1_2MU6_EMPTY, &b_L2_L1ItemStreamer_L1_2MU6_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU6_FIRSTEMPTY", &L2_L1ItemStreamer_L1_2MU6_FIRSTEMPTY, &b_L2_L1ItemStreamer_L1_2MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO", &L2_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO, &b_L2_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO", &L2_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO, &b_L2_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM10", &L2_L1ItemStreamer_L1_EM10, &b_L2_L1ItemStreamer_L1_EM10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM12", &L2_L1ItemStreamer_L1_EM12, &b_L2_L1ItemStreamer_L1_EM12);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM14", &L2_L1ItemStreamer_L1_EM14, &b_L2_L1ItemStreamer_L1_EM14);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM16", &L2_L1ItemStreamer_L1_EM16, &b_L2_L1ItemStreamer_L1_EM16);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3", &L2_L1ItemStreamer_L1_EM3, &b_L2_L1ItemStreamer_L1_EM3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_EMPTY", &L2_L1ItemStreamer_L1_EM3_EMPTY, &b_L2_L1ItemStreamer_L1_EM3_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_FIRSTEMPTY", &L2_L1ItemStreamer_L1_EM3_FIRSTEMPTY, &b_L2_L1ItemStreamer_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_MV_VTE50", &L2_L1ItemStreamer_L1_EM3_MV_VTE50, &b_L2_L1ItemStreamer_L1_EM3_MV_VTE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_UNPAIRED_ISO", &L2_L1ItemStreamer_L1_EM3_UNPAIRED_ISO, &b_L2_L1ItemStreamer_L1_EM3_UNPAIRED_ISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO", &L2_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO, &b_L2_L1ItemStreamer_L1_EM3_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_VTE50", &L2_L1ItemStreamer_L1_EM3_VTE50, &b_L2_L1ItemStreamer_L1_EM3_VTE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM4", &L2_L1ItemStreamer_L1_EM4, &b_L2_L1ItemStreamer_L1_EM4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM5", &L2_L1ItemStreamer_L1_EM5, &b_L2_L1ItemStreamer_L1_EM5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM5_EMPTY", &L2_L1ItemStreamer_L1_EM5_EMPTY, &b_L2_L1ItemStreamer_L1_EM5_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM7", &L2_L1ItemStreamer_L1_EM7, &b_L2_L1ItemStreamer_L1_EM7);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0", &L2_L1ItemStreamer_L1_MU0, &b_L2_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_EMPTY", &L2_L1ItemStreamer_L1_MU0_EMPTY, &b_L2_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_FIRSTEMPTY", &L2_L1ItemStreamer_L1_MU0_FIRSTEMPTY, &b_L2_L1ItemStreamer_L1_MU0_FIRSTEMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_MV_VTE50", &L2_L1ItemStreamer_L1_MU0_MV_VTE50, &b_L2_L1ItemStreamer_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_TE50", &L2_L1ItemStreamer_L1_MU0_TE50, &b_L2_L1ItemStreamer_L1_MU0_TE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_UNPAIRED_ISO", &L2_L1ItemStreamer_L1_MU0_UNPAIRED_ISO, &b_L2_L1ItemStreamer_L1_MU0_UNPAIRED_ISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO", &L2_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO, &b_L2_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_VTE50", &L2_L1ItemStreamer_L1_MU0_VTE50, &b_L2_L1ItemStreamer_L1_MU0_VTE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU11", &L2_L1ItemStreamer_L1_MU11, &b_L2_L1ItemStreamer_L1_MU11);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU11_EMPTY", &L2_L1ItemStreamer_L1_MU11_EMPTY, &b_L2_L1ItemStreamer_L1_MU11_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU15", &L2_L1ItemStreamer_L1_MU15, &b_L2_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU20", &L2_L1ItemStreamer_L1_MU20, &b_L2_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4", &L2_L1ItemStreamer_L1_MU4, &b_L2_L1ItemStreamer_L1_MU4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4_EMPTY", &L2_L1ItemStreamer_L1_MU4_EMPTY, &b_L2_L1ItemStreamer_L1_MU4_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4_FIRSTEMPTY", &L2_L1ItemStreamer_L1_MU4_FIRSTEMPTY, &b_L2_L1ItemStreamer_L1_MU4_FIRSTEMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4_MV_VTE50", &L2_L1ItemStreamer_L1_MU4_MV_VTE50, &b_L2_L1ItemStreamer_L1_MU4_MV_VTE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4_TE50", &L2_L1ItemStreamer_L1_MU4_TE50, &b_L2_L1ItemStreamer_L1_MU4_TE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4_UNPAIRED_ISO", &L2_L1ItemStreamer_L1_MU4_UNPAIRED_ISO, &b_L2_L1ItemStreamer_L1_MU4_UNPAIRED_ISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO", &L2_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO, &b_L2_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU4_VTE50", &L2_L1ItemStreamer_L1_MU4_VTE50, &b_L2_L1ItemStreamer_L1_MU4_VTE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU6", &L2_L1ItemStreamer_L1_MU6, &b_L2_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU6_FIRSTEMPTY", &L2_L1ItemStreamer_L1_MU6_FIRSTEMPTY, &b_L2_L1ItemStreamer_L1_MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("L2_SeededStreamerL1Calo", &L2_SeededStreamerL1Calo, &b_L2_SeededStreamerL1Calo);
   fChain->SetBranchAddress("L2_e10_loose1", &L2_e10_loose1, &b_L2_e10_loose1);
   fChain->SetBranchAddress("L2_e10_medium1", &L2_e10_medium1, &b_L2_e10_medium1);
   fChain->SetBranchAddress("L2_e5_loose1", &L2_e5_loose1, &b_L2_e5_loose1);
   fChain->SetBranchAddress("L2_e5_medium1", &L2_e5_medium1, &b_L2_e5_medium1);
   fChain->SetBranchAddress("L2_e7_loose1", &L2_e7_loose1, &b_L2_e7_loose1);
   fChain->SetBranchAddress("L2_e7_medium1", &L2_e7_medium1, &b_L2_e7_medium1);
   fChain->SetBranchAddress("L2_em3_empty_larcalib", &L2_em3_empty_larcalib, &b_L2_em3_empty_larcalib);
   fChain->SetBranchAddress("L2_em5_empty_larcalib", &L2_em5_empty_larcalib, &b_L2_em5_empty_larcalib);
   fChain->SetBranchAddress("L2_g10_loose", &L2_g10_loose, &b_L2_g10_loose);
   fChain->SetBranchAddress("L2_g10_medium", &L2_g10_medium, &b_L2_g10_medium);
   fChain->SetBranchAddress("L2_g5_NoCut_cosmic", &L2_g5_NoCut_cosmic, &b_L2_g5_NoCut_cosmic);
   fChain->SetBranchAddress("L2_g5_loose", &L2_g5_loose, &b_L2_g5_loose);
   fChain->SetBranchAddress("L2_g5_medium", &L2_g5_medium, &b_L2_g5_medium);
   fChain->SetBranchAddress("L2_g7_loose", &L2_g7_loose, &b_L2_g7_loose);
   fChain->SetBranchAddress("L2_g7_medium", &L2_g7_medium, &b_L2_g7_medium);
   fChain->SetBranchAddress("L2_mu10T_MSonly", &L2_mu10T_MSonly, &b_L2_mu10T_MSonly);
   fChain->SetBranchAddress("L2_mu10_MSonly", &L2_mu10_MSonly, &b_L2_mu10_MSonly);
   fChain->SetBranchAddress("L2_mu10_MSonly_EFFS_L1TE10", &L2_mu10_MSonly_EFFS_L1TE10, &b_L2_mu10_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_mu10_MSonly_EFFS_L1TE20", &L2_mu10_MSonly_EFFS_L1TE20, &b_L2_mu10_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_mu10_MSonly_EFFS_L1TE50", &L2_mu10_MSonly_EFFS_L1TE50, &b_L2_mu10_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_mu10_MSonly_EFFS_L1ZDC", &L2_mu10_MSonly_EFFS_L1ZDC, &b_L2_mu10_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu13T_MSonly", &L2_mu13T_MSonly, &b_L2_mu13T_MSonly);
   fChain->SetBranchAddress("L2_mu13_MSonly", &L2_mu13_MSonly, &b_L2_mu13_MSonly);
   fChain->SetBranchAddress("L2_mu13_MSonly_EFFS_L1TE10", &L2_mu13_MSonly_EFFS_L1TE10, &b_L2_mu13_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_mu13_MSonly_EFFS_L1TE20", &L2_mu13_MSonly_EFFS_L1TE20, &b_L2_mu13_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_mu13_MSonly_EFFS_L1TE50", &L2_mu13_MSonly_EFFS_L1TE50, &b_L2_mu13_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_mu13_MSonly_EFFS_L1ZDC", &L2_mu13_MSonly_EFFS_L1ZDC, &b_L2_mu13_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu4", &L2_mu4, &b_L2_mu4);
   fChain->SetBranchAddress("L2_mu4T", &L2_mu4T, &b_L2_mu4T);
   fChain->SetBranchAddress("L2_mu4T_IDTrkNoCut", &L2_mu4T_IDTrkNoCut, &b_L2_mu4T_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu4T_MSonly", &L2_mu4T_MSonly, &b_L2_mu4T_MSonly);
   fChain->SetBranchAddress("L2_mu4T_MSonly_L1TE50", &L2_mu4T_MSonly_L1TE50, &b_L2_mu4T_MSonly_L1TE50);
   fChain->SetBranchAddress("L2_mu4T_MSonly_barrel", &L2_mu4T_MSonly_barrel, &b_L2_mu4T_MSonly_barrel);
   fChain->SetBranchAddress("L2_mu4T_MSonly_cosmic", &L2_mu4T_MSonly_cosmic, &b_L2_mu4T_MSonly_cosmic);
   fChain->SetBranchAddress("L2_mu4T_cosmic", &L2_mu4T_cosmic, &b_L2_mu4T_cosmic);
   fChain->SetBranchAddress("L2_mu4T_l2cal", &L2_mu4T_l2cal, &b_L2_mu4T_l2cal);
   fChain->SetBranchAddress("L2_mu4_IDTrkNoCut", &L2_mu4_IDTrkNoCut, &b_L2_mu4_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu4_L1VTE50", &L2_mu4_L1VTE50, &b_L2_mu4_L1VTE50);
   fChain->SetBranchAddress("L2_mu4_MSonly", &L2_mu4_MSonly, &b_L2_mu4_MSonly);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1MBTS", &L2_mu4_MSonly_EFFS_L1MBTS, &b_L2_mu4_MSonly_EFFS_L1MBTS);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1TE10", &L2_mu4_MSonly_EFFS_L1TE10, &b_L2_mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1TE20", &L2_mu4_MSonly_EFFS_L1TE20, &b_L2_mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1TE50", &L2_mu4_MSonly_EFFS_L1TE50, &b_L2_mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1ZDC", &L2_mu4_MSonly_EFFS_L1ZDC, &b_L2_mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1ZDC_OR", &L2_mu4_MSonly_EFFS_L1ZDC_OR, &b_L2_mu4_MSonly_EFFS_L1ZDC_OR);
   fChain->SetBranchAddress("L2_mu4_MSonly_L1TE50", &L2_mu4_MSonly_L1TE50, &b_L2_mu4_MSonly_L1TE50);
   fChain->SetBranchAddress("L2_mu4_MSonly_barrel", &L2_mu4_MSonly_barrel, &b_L2_mu4_MSonly_barrel);
   fChain->SetBranchAddress("L2_mu4_MSonly_barrel_EFFS_L1ZDC", &L2_mu4_MSonly_barrel_EFFS_L1ZDC, &b_L2_mu4_MSonly_barrel_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu4_MSonly_barrel_L1TE50", &L2_mu4_MSonly_barrel_L1TE50, &b_L2_mu4_MSonly_barrel_L1TE50);
   fChain->SetBranchAddress("L2_mu4_MSonly_cosmic", &L2_mu4_MSonly_cosmic, &b_L2_mu4_MSonly_cosmic);
   fChain->SetBranchAddress("L2_mu4_barrel_L1VTE50", &L2_mu4_barrel_L1VTE50, &b_L2_mu4_barrel_L1VTE50);
   fChain->SetBranchAddress("L2_mu4_cosmic", &L2_mu4_cosmic, &b_L2_mu4_cosmic);
   fChain->SetBranchAddress("L2_mu4_l2cal_empty", &L2_mu4_l2cal_empty, &b_L2_mu4_l2cal_empty);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1TE10", &L2_mu4_mu2_MSonly_EFFS_L1TE10, &b_L2_mu4_mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1TE20", &L2_mu4_mu2_MSonly_EFFS_L1TE20, &b_L2_mu4_mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1TE50", &L2_mu4_mu2_MSonly_EFFS_L1TE50, &b_L2_mu4_mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1ZDC", &L2_mu4_mu2_MSonly_EFFS_L1ZDC, &b_L2_mu4_mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu6T_MSonly", &L2_mu6T_MSonly, &b_L2_mu6T_MSonly);
   fChain->SetBranchAddress("L2_mu6_IDTrkNoCut", &L2_mu6_IDTrkNoCut, &b_L2_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu6_L1VTE50", &L2_mu6_L1VTE50, &b_L2_mu6_L1VTE50);
   fChain->SetBranchAddress("L2_mu6_MSonly", &L2_mu6_MSonly, &b_L2_mu6_MSonly);
   fChain->SetBranchAddress("L2_mu6_MSonly_L1TE50", &L2_mu6_MSonly_L1TE50, &b_L2_mu6_MSonly_L1TE50);
   fChain->SetBranchAddress("L2_mu6_l2cal", &L2_mu6_l2cal, &b_L2_mu6_l2cal);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1MBTS", &trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1MBTS, &b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC_OR", &trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC_OR, &b_trig_EF_trigmuonef_EF_2mu2_MSonly_EFFS_L1ZDC_OR);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu4T_MSonly", &trig_EF_trigmuonef_EF_2mu4T_MSonly, &b_trig_EF_trigmuonef_EF_2mu4T_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu4_MSonly", &trig_EF_trigmuonef_EF_2mu4_MSonly, &b_trig_EF_trigmuonef_EF_2mu4_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0", &trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0, &b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1MU0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_2mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu6T_MSonly", &trig_EF_trigmuonef_EF_2mu6T_MSonly, &b_trig_EF_trigmuonef_EF_2mu6T_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_2mu6_MSonly", &trig_EF_trigmuonef_EF_2mu6_MSonly, &b_trig_EF_trigmuonef_EF_2mu6_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_EMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU11", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU11, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU11);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4_EMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4_EMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU4_EMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_EMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_EMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_EMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_ISO);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU6_UNPAIRED_NONISO);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_EMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_EMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_FIRSTEMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_TE50", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_TE50, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_ISO);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_UNPAIRED_NONISO);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_VTE50", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_VTE50, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11_EMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11_EMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU11_EMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU15", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU15, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU20", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU20, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_EMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_EMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_EMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_FIRSTEMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_MV_VTE50", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_MV_VTE50, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_MV_VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_TE50", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_TE50, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_ISO);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_UNPAIRED_NONISO);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_VTE50", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_VTE50, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU4_VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu10T_MSonly", &trig_EF_trigmuonef_EF_mu10T_MSonly, &b_trig_EF_trigmuonef_EF_mu10T_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly", &trig_EF_trigmuonef_EF_mu10_MSonly, &b_trig_EF_trigmuonef_EF_mu10_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu13T_MSonly", &trig_EF_trigmuonef_EF_mu13T_MSonly, &b_trig_EF_trigmuonef_EF_mu13T_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu13_MSonly", &trig_EF_trigmuonef_EF_mu13_MSonly, &b_trig_EF_trigmuonef_EF_mu13_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_mu13_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4", &trig_EF_trigmuonef_EF_mu4, &b_trig_EF_trigmuonef_EF_mu4);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4T", &trig_EF_trigmuonef_EF_mu4T, &b_trig_EF_trigmuonef_EF_mu4T);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut", &trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut, &b_trig_EF_trigmuonef_EF_mu4T_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4T_MSonly", &trig_EF_trigmuonef_EF_mu4T_MSonly, &b_trig_EF_trigmuonef_EF_mu4T_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50", &trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50, &b_trig_EF_trigmuonef_EF_mu4T_MSonly_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4T_MSonly_barrel", &trig_EF_trigmuonef_EF_mu4T_MSonly_barrel, &b_trig_EF_trigmuonef_EF_mu4T_MSonly_barrel);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic", &trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic, &b_trig_EF_trigmuonef_EF_mu4T_MSonly_cosmic);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4T_cosmic", &trig_EF_trigmuonef_EF_mu4T_cosmic, &b_trig_EF_trigmuonef_EF_mu4T_cosmic);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_IDTrkNoCut", &trig_EF_trigmuonef_EF_mu4_IDTrkNoCut, &b_trig_EF_trigmuonef_EF_mu4_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_L1VTE50", &trig_EF_trigmuonef_EF_mu4_L1VTE50, &b_trig_EF_trigmuonef_EF_mu4_L1VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly", &trig_EF_trigmuonef_EF_mu4_MSonly, &b_trig_EF_trigmuonef_EF_mu4_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MBTS", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MBTS, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC_OR", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC_OR, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1ZDC_OR);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50", &trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50, &b_trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_barrel", &trig_EF_trigmuonef_EF_mu4_MSonly_barrel, &b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_barrel_L1TE50", &trig_EF_trigmuonef_EF_mu4_MSonly_barrel_L1TE50, &b_trig_EF_trigmuonef_EF_mu4_MSonly_barrel_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_cosmic", &trig_EF_trigmuonef_EF_mu4_MSonly_cosmic, &b_trig_EF_trigmuonef_EF_mu4_MSonly_cosmic);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10", &trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched", &trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched, &b_trig_EF_trigmuonef_EF_mu4_MSonly_j15_a2hi_EFFS_matched);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_barrel_L1VTE50", &trig_EF_trigmuonef_EF_mu4_barrel_L1VTE50, &b_trig_EF_trigmuonef_EF_mu4_barrel_L1VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_cosmic", &trig_EF_trigmuonef_EF_mu4_cosmic, &b_trig_EF_trigmuonef_EF_mu4_cosmic);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6T_MSonly", &trig_EF_trigmuonef_EF_mu6T_MSonly, &b_trig_EF_trigmuonef_EF_mu6T_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_IDTrkNoCut", &trig_EF_trigmuonef_EF_mu6_IDTrkNoCut, &b_trig_EF_trigmuonef_EF_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_L1VTE50", &trig_EF_trigmuonef_EF_mu6_L1VTE50, &b_trig_EF_trigmuonef_EF_mu6_L1VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_MSonly", &trig_EF_trigmuonef_EF_mu6_MSonly, &b_trig_EF_trigmuonef_EF_mu6_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50", &trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50, &b_trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("timestamp", &timestamp, &b_timestamp);
   fChain->SetBranchAddress("timestamp_ns", &timestamp_ns, &b_timestamp_ns);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("detmask0", &detmask0, &b_detmask0);
   fChain->SetBranchAddress("detmask1", &detmask1, &b_detmask1);
   fChain->SetBranchAddress("actualIntPerXing", &actualIntPerXing, &b_actualIntPerXing);
   fChain->SetBranchAddress("averageIntPerXing", &averageIntPerXing, &b_averageIntPerXing);
   fChain->SetBranchAddress("pixelFlags", &pixelFlags, &b_pixelFlags);
   fChain->SetBranchAddress("sctFlags", &sctFlags, &b_sctFlags);
   fChain->SetBranchAddress("trtFlags", &trtFlags, &b_trtFlags);
   fChain->SetBranchAddress("larFlags", &larFlags, &b_larFlags);
   fChain->SetBranchAddress("tileFlags", &tileFlags, &b_tileFlags);
   fChain->SetBranchAddress("muonFlags", &muonFlags, &b_muonFlags);
   fChain->SetBranchAddress("fwdFlags", &fwdFlags, &b_fwdFlags);
   fChain->SetBranchAddress("coreFlags", &coreFlags, &b_coreFlags);
   fChain->SetBranchAddress("pixelError", &pixelError, &b_pixelError);
   fChain->SetBranchAddress("sctError", &sctError, &b_sctError);
   fChain->SetBranchAddress("trtError", &trtError, &b_trtError);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("tileError", &tileError, &b_tileError);
   fChain->SetBranchAddress("muonError", &muonError, &b_muonError);
   fChain->SetBranchAddress("fwdError", &fwdError, &b_fwdError);
   fChain->SetBranchAddress("coreError", &coreError, &b_coreError);
   fChain->SetBranchAddress("streamDecision_Egamma", &streamDecision_Egamma, &b_streamDecision_Egamma);
   fChain->SetBranchAddress("streamDecision_Muons", &streamDecision_Muons, &b_streamDecision_Muons);
   fChain->SetBranchAddress("streamDecision_JetTauEtmiss", &streamDecision_JetTauEtmiss, &b_streamDecision_JetTauEtmiss);
   fChain->SetBranchAddress("isSimulation", &isSimulation, &b_isSimulation);
   fChain->SetBranchAddress("isCalibration", &isCalibration, &b_isCalibration);
   fChain->SetBranchAddress("isTestBeam", &isTestBeam, &b_isTestBeam);
   fChain->SetBranchAddress("mb_n", &mb_n, &b_mb_n);
   fChain->SetBranchAddress("mb_E", &mb_E, &b_mb_E);
   fChain->SetBranchAddress("mb_eta", &mb_eta, &b_mb_eta);
   fChain->SetBranchAddress("mb_phi", &mb_phi, &b_mb_phi);
   fChain->SetBranchAddress("mb_time", &mb_time, &b_mb_time);
   fChain->SetBranchAddress("mb_quality", &mb_quality, &b_mb_quality);
   fChain->SetBranchAddress("mb_type", &mb_type, &b_mb_type);
   fChain->SetBranchAddress("mb_module", &mb_module, &b_mb_module);
   fChain->SetBranchAddress("mb_channel", &mb_channel, &b_mb_channel);
   fChain->SetBranchAddress("mbtime_timeDiff", &mbtime_timeDiff, &b_mbtime_timeDiff);
   fChain->SetBranchAddress("mbtime_timeA", &mbtime_timeA, &b_mbtime_timeA);
   fChain->SetBranchAddress("mbtime_timeC", &mbtime_timeC, &b_mbtime_timeC);
   fChain->SetBranchAddress("mbtime_countA", &mbtime_countA, &b_mbtime_countA);
   fChain->SetBranchAddress("mbtime_countC", &mbtime_countC, &b_mbtime_countC);
   fChain->SetBranchAddress("Zdc_n", &Zdc_n, &b_Zdc_n);
   fChain->SetBranchAddress("Zdc_Energy_Vec", &Zdc_Energy_Vec, &b_Zdc_Energy_Vec);
   fChain->SetBranchAddress("Zdc_Time_Vec", &Zdc_Time_Vec, &b_Zdc_Time_Vec);
   fChain->SetBranchAddress("Zdc_Vec_Size", &Zdc_Vec_Size, &b_Zdc_Vec_Size);
   fChain->SetBranchAddress("Zdc_Energy_LG", &Zdc_Energy_LG, &b_Zdc_Energy_LG);
   fChain->SetBranchAddress("Zdc_Time_LG", &Zdc_Time_LG, &b_Zdc_Time_LG);
   fChain->SetBranchAddress("Zdc_Energy_HG", &Zdc_Energy_HG, &b_Zdc_Energy_HG);
   fChain->SetBranchAddress("Zdc_Time_HG", &Zdc_Time_HG, &b_Zdc_Time_HG);
   fChain->SetBranchAddress("Zdc_Id", &Zdc_Id, &b_Zdc_Id);
   fChain->SetBranchAddress("Zdc_Side", &Zdc_Side, &b_Zdc_Side);
   fChain->SetBranchAddress("Zdc_Type", &Zdc_Type, &b_Zdc_Type);
   fChain->SetBranchAddress("Zdc_Module", &Zdc_Module, &b_Zdc_Module);
   fChain->SetBranchAddress("Zdc_Channel", &Zdc_Channel, &b_Zdc_Channel);
   fChain->SetBranchAddress("Zdc_TimeCalib", &Zdc_TimeCalib, &b_Zdc_TimeCalib);
   fChain->SetBranchAddress("Zdc_RecMethod", &Zdc_RecMethod, &b_Zdc_RecMethod);
   fChain->SetBranchAddress("ZdcDigits_n", &ZdcDigits_n, &b_ZdcDigits_n);
   fChain->SetBranchAddress("ZdcDigits_dig_g0d0", &ZdcDigits_dig_g0d0, &b_ZdcDigits_dig_g0d0);
   fChain->SetBranchAddress("ZdcDigits_dig_g0d1", &ZdcDigits_dig_g0d1, &b_ZdcDigits_dig_g0d1);
   fChain->SetBranchAddress("ZdcDigits_dig_g1d0", &ZdcDigits_dig_g1d0, &b_ZdcDigits_dig_g1d0);
   fChain->SetBranchAddress("ZdcDigits_dig_g1d1", &ZdcDigits_dig_g1d1, &b_ZdcDigits_dig_g1d1);
   fChain->SetBranchAddress("ZdcDigits_Id", &ZdcDigits_Id, &b_ZdcDigits_Id);
   fChain->SetBranchAddress("ZdcDigits_Side", &ZdcDigits_Side, &b_ZdcDigits_Side);
   fChain->SetBranchAddress("ZdcDigits_Type", &ZdcDigits_Type, &b_ZdcDigits_Type);
   fChain->SetBranchAddress("ZdcDigits_Module", &ZdcDigits_Module, &b_ZdcDigits_Module);
   fChain->SetBranchAddress("ZdcDigits_Channel", &ZdcDigits_Channel, &b_ZdcDigits_Channel);
   fChain->SetBranchAddress("pixClus_n", &pixClus_n, &b_pixClus_n);
   fChain->SetBranchAddress("pixClus_id", &pixClus_id, &b_pixClus_id);
   fChain->SetBranchAddress("pixClus_bec", &pixClus_bec, &b_pixClus_bec);
   fChain->SetBranchAddress("pixClus_layer", &pixClus_layer, &b_pixClus_layer);
   fChain->SetBranchAddress("pixClus_detElementId", &pixClus_detElementId, &b_pixClus_detElementId);
   fChain->SetBranchAddress("pixClus_phi_module", &pixClus_phi_module, &b_pixClus_phi_module);
   fChain->SetBranchAddress("pixClus_eta_module", &pixClus_eta_module, &b_pixClus_eta_module);
   fChain->SetBranchAddress("pixClus_col", &pixClus_col, &b_pixClus_col);
   fChain->SetBranchAddress("pixClus_row", &pixClus_row, &b_pixClus_row);
   fChain->SetBranchAddress("pixClus_charge", &pixClus_charge, &b_pixClus_charge);
   fChain->SetBranchAddress("pixClus_LVL1A", &pixClus_LVL1A, &b_pixClus_LVL1A);
   fChain->SetBranchAddress("pixClus_sizePhi", &pixClus_sizePhi, &b_pixClus_sizePhi);
   fChain->SetBranchAddress("pixClus_sizeZ", &pixClus_sizeZ, &b_pixClus_sizeZ);
   fChain->SetBranchAddress("pixClus_size", &pixClus_size, &b_pixClus_size);
   fChain->SetBranchAddress("pixClus_locX", &pixClus_locX, &b_pixClus_locX);
   fChain->SetBranchAddress("pixClus_locY", &pixClus_locY, &b_pixClus_locY);
   fChain->SetBranchAddress("pixClus_x", &pixClus_x, &b_pixClus_x);
   fChain->SetBranchAddress("pixClus_y", &pixClus_y, &b_pixClus_y);
   fChain->SetBranchAddress("pixClus_z", &pixClus_z, &b_pixClus_z);
   fChain->SetBranchAddress("pixClus_isFake", &pixClus_isFake, &b_pixClus_isFake);
   fChain->SetBranchAddress("pixClus_isGanged", &pixClus_isGanged, &b_pixClus_isGanged);
   fChain->SetBranchAddress("pixClus_isSplit", &pixClus_isSplit, &b_pixClus_isSplit);
   fChain->SetBranchAddress("pixClus_splitProb1", &pixClus_splitProb1, &b_pixClus_splitProb1);
   fChain->SetBranchAddress("pixClus_splitProb2", &pixClus_splitProb2, &b_pixClus_splitProb2);
   fChain->SetBranchAddress("cc_fcal_n", &cc_fcal_n, &b_cc_fcal_n);
   fChain->SetBranchAddress("cc_fcal_E", &cc_fcal_E, &b_cc_fcal_E);
   fChain->SetBranchAddress("cc_fcal_pt", &cc_fcal_pt, &b_cc_fcal_pt);
   fChain->SetBranchAddress("cc_fcal_eta", &cc_fcal_eta, &b_cc_fcal_eta);
   fChain->SetBranchAddress("cc_fcal_phi", &cc_fcal_phi, &b_cc_fcal_phi);
   fChain->SetBranchAddress("cc_fcal_QCells", &cc_fcal_QCells, &b_cc_fcal_QCells);
   fChain->SetBranchAddress("cc_fcal_GainCells", &cc_fcal_GainCells, &b_cc_fcal_GainCells);
   fChain->SetBranchAddress("cc_fcal_DetCells", &cc_fcal_DetCells, &b_cc_fcal_DetCells);
   fChain->SetBranchAddress("cc_fcal_TimeCells", &cc_fcal_TimeCells, &b_cc_fcal_TimeCells);
   fChain->SetBranchAddress("cc_fcal_xCells", &cc_fcal_xCells, &b_cc_fcal_xCells);
   fChain->SetBranchAddress("cc_fcal_yCells", &cc_fcal_yCells, &b_cc_fcal_yCells);
   fChain->SetBranchAddress("cc_fcal_zCells", &cc_fcal_zCells, &b_cc_fcal_zCells);
   fChain->SetBranchAddress("cc_fcal_BadCells", &cc_fcal_BadCells, &b_cc_fcal_BadCells);
   fChain->SetBranchAddress("cc_fcal_IdCells", &cc_fcal_IdCells, &b_cc_fcal_IdCells);
   fChain->SetBranchAddress("cc_fcal_Sigma", &cc_fcal_Sigma, &b_cc_fcal_Sigma);
   fChain->SetBranchAddress("ccc_Nh_Calo", &ccc_Nh_Calo, &b_ccc_Nh_Calo);
   fChain->SetBranchAddress("ccc_Eh_Calo", &ccc_Eh_Calo, &b_ccc_Eh_Calo);
   fChain->SetBranchAddress("ccc_Nh_EM", &ccc_Nh_EM, &b_ccc_Nh_EM);
   fChain->SetBranchAddress("ccc_Eh_EM", &ccc_Eh_EM, &b_ccc_Eh_EM);
   fChain->SetBranchAddress("ccc_Nh_HAD", &ccc_Nh_HAD, &b_ccc_Nh_HAD);
   fChain->SetBranchAddress("ccc_Eh_HAD", &ccc_Eh_HAD, &b_ccc_Eh_HAD);
   fChain->SetBranchAddress("ccc_Nh_PresB", &ccc_Nh_PresB, &b_ccc_Nh_PresB);
   fChain->SetBranchAddress("ccc_Eh_PresB", &ccc_Eh_PresB, &b_ccc_Eh_PresB);
   fChain->SetBranchAddress("ccc_Nh_EMB", &ccc_Nh_EMB, &b_ccc_Nh_EMB);
   fChain->SetBranchAddress("ccc_Eh_EMB", &ccc_Eh_EMB, &b_ccc_Eh_EMB);
   fChain->SetBranchAddress("ccc_Nh_EMEC", &ccc_Nh_EMEC, &b_ccc_Nh_EMEC);
   fChain->SetBranchAddress("ccc_Eh_EMEC", &ccc_Eh_EMEC, &b_ccc_Eh_EMEC);
   fChain->SetBranchAddress("ccc_Nh_Tile", &ccc_Nh_Tile, &b_ccc_Nh_Tile);
   fChain->SetBranchAddress("ccc_Eh_Tile", &ccc_Eh_Tile, &b_ccc_Eh_Tile);
   fChain->SetBranchAddress("ccc_Nh_TileGap", &ccc_Nh_TileGap, &b_ccc_Nh_TileGap);
   fChain->SetBranchAddress("ccc_Eh_TileGap", &ccc_Eh_TileGap, &b_ccc_Eh_TileGap);
   fChain->SetBranchAddress("ccc_Nh_HEC", &ccc_Nh_HEC, &b_ccc_Nh_HEC);
   fChain->SetBranchAddress("ccc_Eh_HEC", &ccc_Eh_HEC, &b_ccc_Eh_HEC);
   fChain->SetBranchAddress("ccc_Nh_FCal", &ccc_Nh_FCal, &b_ccc_Nh_FCal);
   fChain->SetBranchAddress("ccc_Eh_FCal", &ccc_Eh_FCal, &b_ccc_Eh_FCal);
   fChain->SetBranchAddress("ccc_Nh_PresE", &ccc_Nh_PresE, &b_ccc_Nh_PresE);
   fChain->SetBranchAddress("ccc_Eh_PresE", &ccc_Eh_PresE, &b_ccc_Eh_PresE);
   fChain->SetBranchAddress("ccc_Nh_Scint", &ccc_Nh_Scint, &b_ccc_Nh_Scint);
   fChain->SetBranchAddress("ccc_Eh_Scint", &ccc_Eh_Scint, &b_ccc_Eh_Scint);
   fChain->SetBranchAddress("cccEt_Et_Nh_Calo", &cccEt_Et_Nh_Calo, &b_cccEt_Et_Nh_Calo);
   fChain->SetBranchAddress("cccEt_Et_Eh_Calo", &cccEt_Et_Eh_Calo, &b_cccEt_Et_Eh_Calo);
   fChain->SetBranchAddress("cccEt_Et_Nh_EM", &cccEt_Et_Nh_EM, &b_cccEt_Et_Nh_EM);
   fChain->SetBranchAddress("cccEt_Et_Eh_EM", &cccEt_Et_Eh_EM, &b_cccEt_Et_Eh_EM);
   fChain->SetBranchAddress("cccEt_Et_Nh_HAD", &cccEt_Et_Nh_HAD, &b_cccEt_Et_Nh_HAD);
   fChain->SetBranchAddress("cccEt_Et_Eh_HAD", &cccEt_Et_Eh_HAD, &b_cccEt_Et_Eh_HAD);
   fChain->SetBranchAddress("cccEt_Et_Nh_PresB", &cccEt_Et_Nh_PresB, &b_cccEt_Et_Nh_PresB);
   fChain->SetBranchAddress("cccEt_Et_Eh_PresB", &cccEt_Et_Eh_PresB, &b_cccEt_Et_Eh_PresB);
   fChain->SetBranchAddress("cccEt_Et_Nh_EMB", &cccEt_Et_Nh_EMB, &b_cccEt_Et_Nh_EMB);
   fChain->SetBranchAddress("cccEt_Et_Eh_EMB", &cccEt_Et_Eh_EMB, &b_cccEt_Et_Eh_EMB);
   fChain->SetBranchAddress("cccEt_Et_Nh_EMEC", &cccEt_Et_Nh_EMEC, &b_cccEt_Et_Nh_EMEC);
   fChain->SetBranchAddress("cccEt_Et_Eh_EMEC", &cccEt_Et_Eh_EMEC, &b_cccEt_Et_Eh_EMEC);
   fChain->SetBranchAddress("cccEt_Et_Nh_Tile", &cccEt_Et_Nh_Tile, &b_cccEt_Et_Nh_Tile);
   fChain->SetBranchAddress("cccEt_Et_Eh_Tile", &cccEt_Et_Eh_Tile, &b_cccEt_Et_Eh_Tile);
   fChain->SetBranchAddress("cccEt_Et_Nh_TileGap", &cccEt_Et_Nh_TileGap, &b_cccEt_Et_Nh_TileGap);
   fChain->SetBranchAddress("cccEt_Et_Eh_TileGap", &cccEt_Et_Eh_TileGap, &b_cccEt_Et_Eh_TileGap);
   fChain->SetBranchAddress("cccEt_Et_Nh_HEC", &cccEt_Et_Nh_HEC, &b_cccEt_Et_Nh_HEC);
   fChain->SetBranchAddress("cccEt_Et_Eh_HEC", &cccEt_Et_Eh_HEC, &b_cccEt_Et_Eh_HEC);
   fChain->SetBranchAddress("cccEt_Et_Nh_FCal", &cccEt_Et_Nh_FCal, &b_cccEt_Et_Nh_FCal);
   fChain->SetBranchAddress("cccEt_Et_Eh_FCal", &cccEt_Et_Eh_FCal, &b_cccEt_Et_Eh_FCal);
   fChain->SetBranchAddress("cccEt_Et_Nh_PresE", &cccEt_Et_Nh_PresE, &b_cccEt_Et_Nh_PresE);
   fChain->SetBranchAddress("cccEt_Et_Eh_PresE", &cccEt_Et_Eh_PresE, &b_cccEt_Et_Eh_PresE);
   fChain->SetBranchAddress("cccEt_Et_Nh_Scint", &cccEt_Et_Nh_Scint, &b_cccEt_Et_Nh_Scint);
   fChain->SetBranchAddress("cccEt_Et_Eh_Scint", &cccEt_Et_Eh_Scint, &b_cccEt_Et_Eh_Scint);
   fChain->SetBranchAddress("cccEt_p_Nh_Calo", &cccEt_p_Nh_Calo, &b_cccEt_p_Nh_Calo);
   fChain->SetBranchAddress("cccEt_p_Eh_Calo", &cccEt_p_Eh_Calo, &b_cccEt_p_Eh_Calo);
   fChain->SetBranchAddress("cccEt_p_Nh_EM", &cccEt_p_Nh_EM, &b_cccEt_p_Nh_EM);
   fChain->SetBranchAddress("cccEt_p_Eh_EM", &cccEt_p_Eh_EM, &b_cccEt_p_Eh_EM);
   fChain->SetBranchAddress("cccEt_p_Nh_HAD", &cccEt_p_Nh_HAD, &b_cccEt_p_Nh_HAD);
   fChain->SetBranchAddress("cccEt_p_Eh_HAD", &cccEt_p_Eh_HAD, &b_cccEt_p_Eh_HAD);
   fChain->SetBranchAddress("cccEt_p_Nh_PresB", &cccEt_p_Nh_PresB, &b_cccEt_p_Nh_PresB);
   fChain->SetBranchAddress("cccEt_p_Eh_PresB", &cccEt_p_Eh_PresB, &b_cccEt_p_Eh_PresB);
   fChain->SetBranchAddress("cccEt_p_Nh_EMB", &cccEt_p_Nh_EMB, &b_cccEt_p_Nh_EMB);
   fChain->SetBranchAddress("cccEt_p_Eh_EMB", &cccEt_p_Eh_EMB, &b_cccEt_p_Eh_EMB);
   fChain->SetBranchAddress("cccEt_p_Nh_EMEC", &cccEt_p_Nh_EMEC, &b_cccEt_p_Nh_EMEC);
   fChain->SetBranchAddress("cccEt_p_Eh_EMEC", &cccEt_p_Eh_EMEC, &b_cccEt_p_Eh_EMEC);
   fChain->SetBranchAddress("cccEt_p_Nh_Tile", &cccEt_p_Nh_Tile, &b_cccEt_p_Nh_Tile);
   fChain->SetBranchAddress("cccEt_p_Eh_Tile", &cccEt_p_Eh_Tile, &b_cccEt_p_Eh_Tile);
   fChain->SetBranchAddress("cccEt_p_Nh_TileGap", &cccEt_p_Nh_TileGap, &b_cccEt_p_Nh_TileGap);
   fChain->SetBranchAddress("cccEt_p_Eh_TileGap", &cccEt_p_Eh_TileGap, &b_cccEt_p_Eh_TileGap);
   fChain->SetBranchAddress("cccEt_p_Nh_HEC", &cccEt_p_Nh_HEC, &b_cccEt_p_Nh_HEC);
   fChain->SetBranchAddress("cccEt_p_Eh_HEC", &cccEt_p_Eh_HEC, &b_cccEt_p_Eh_HEC);
   fChain->SetBranchAddress("cccEt_p_Nh_FCal", &cccEt_p_Nh_FCal, &b_cccEt_p_Nh_FCal);
   fChain->SetBranchAddress("cccEt_p_Eh_FCal", &cccEt_p_Eh_FCal, &b_cccEt_p_Eh_FCal);
   fChain->SetBranchAddress("cccEt_p_Nh_PresE", &cccEt_p_Nh_PresE, &b_cccEt_p_Nh_PresE);
   fChain->SetBranchAddress("cccEt_p_Eh_PresE", &cccEt_p_Eh_PresE, &b_cccEt_p_Eh_PresE);
   fChain->SetBranchAddress("cccEt_p_Nh_Scint", &cccEt_p_Nh_Scint, &b_cccEt_p_Nh_Scint);
   fChain->SetBranchAddress("cccEt_p_Eh_Scint", &cccEt_p_Eh_Scint, &b_cccEt_p_Eh_Scint);
   fChain->SetBranchAddress("cccEt_n_Nh_Calo", &cccEt_n_Nh_Calo, &b_cccEt_n_Nh_Calo);
   fChain->SetBranchAddress("cccEt_n_Eh_Calo", &cccEt_n_Eh_Calo, &b_cccEt_n_Eh_Calo);
   fChain->SetBranchAddress("cccEt_n_Nh_EM", &cccEt_n_Nh_EM, &b_cccEt_n_Nh_EM);
   fChain->SetBranchAddress("cccEt_n_Eh_EM", &cccEt_n_Eh_EM, &b_cccEt_n_Eh_EM);
   fChain->SetBranchAddress("cccEt_n_Nh_HAD", &cccEt_n_Nh_HAD, &b_cccEt_n_Nh_HAD);
   fChain->SetBranchAddress("cccEt_n_Eh_HAD", &cccEt_n_Eh_HAD, &b_cccEt_n_Eh_HAD);
   fChain->SetBranchAddress("cccEt_n_Nh_PresB", &cccEt_n_Nh_PresB, &b_cccEt_n_Nh_PresB);
   fChain->SetBranchAddress("cccEt_n_Eh_PresB", &cccEt_n_Eh_PresB, &b_cccEt_n_Eh_PresB);
   fChain->SetBranchAddress("cccEt_n_Nh_EMB", &cccEt_n_Nh_EMB, &b_cccEt_n_Nh_EMB);
   fChain->SetBranchAddress("cccEt_n_Eh_EMB", &cccEt_n_Eh_EMB, &b_cccEt_n_Eh_EMB);
   fChain->SetBranchAddress("cccEt_n_Nh_EMEC", &cccEt_n_Nh_EMEC, &b_cccEt_n_Nh_EMEC);
   fChain->SetBranchAddress("cccEt_n_Eh_EMEC", &cccEt_n_Eh_EMEC, &b_cccEt_n_Eh_EMEC);
   fChain->SetBranchAddress("cccEt_n_Nh_Tile", &cccEt_n_Nh_Tile, &b_cccEt_n_Nh_Tile);
   fChain->SetBranchAddress("cccEt_n_Eh_Tile", &cccEt_n_Eh_Tile, &b_cccEt_n_Eh_Tile);
   fChain->SetBranchAddress("cccEt_n_Nh_TileGap", &cccEt_n_Nh_TileGap, &b_cccEt_n_Nh_TileGap);
   fChain->SetBranchAddress("cccEt_n_Eh_TileGap", &cccEt_n_Eh_TileGap, &b_cccEt_n_Eh_TileGap);
   fChain->SetBranchAddress("cccEt_n_Nh_HEC", &cccEt_n_Nh_HEC, &b_cccEt_n_Nh_HEC);
   fChain->SetBranchAddress("cccEt_n_Eh_HEC", &cccEt_n_Eh_HEC, &b_cccEt_n_Eh_HEC);
   fChain->SetBranchAddress("cccEt_n_Nh_FCal", &cccEt_n_Nh_FCal, &b_cccEt_n_Nh_FCal);
   fChain->SetBranchAddress("cccEt_n_Eh_FCal", &cccEt_n_Eh_FCal, &b_cccEt_n_Eh_FCal);
   fChain->SetBranchAddress("cccEt_n_Nh_PresE", &cccEt_n_Nh_PresE, &b_cccEt_n_Nh_PresE);
   fChain->SetBranchAddress("cccEt_n_Eh_PresE", &cccEt_n_Eh_PresE, &b_cccEt_n_Eh_PresE);
   fChain->SetBranchAddress("cccEt_n_Nh_Scint", &cccEt_n_Nh_Scint, &b_cccEt_n_Nh_Scint);
   fChain->SetBranchAddress("cccEt_n_Eh_Scint", &cccEt_n_Eh_Scint, &b_cccEt_n_Eh_Scint);
   fChain->SetBranchAddress("lar_ncellA", &lar_ncellA, &b_lar_ncellA);
   fChain->SetBranchAddress("lar_ncellC", &lar_ncellC, &b_lar_ncellC);
   fChain->SetBranchAddress("lar_energyA", &lar_energyA, &b_lar_energyA);
   fChain->SetBranchAddress("lar_energyC", &lar_energyC, &b_lar_energyC);
   fChain->SetBranchAddress("lar_timeA", &lar_timeA, &b_lar_timeA);
   fChain->SetBranchAddress("lar_timeC", &lar_timeC, &b_lar_timeC);
   fChain->SetBranchAddress("lar_timeDiff", &lar_timeDiff, &b_lar_timeDiff);
   fChain->SetBranchAddress("TotalEt_n", &TotalEt_n, &b_TotalEt_n);
   fChain->SetBranchAddress("TotalEt_layer_eta", &TotalEt_layer_eta, &b_TotalEt_layer_eta);
   fChain->SetBranchAddress("TotalEt_layer_phi", &TotalEt_layer_phi, &b_TotalEt_layer_phi);
   fChain->SetBranchAddress("TotalEt_layer_area", &TotalEt_layer_area, &b_TotalEt_layer_area);
   fChain->SetBranchAddress("TotalEt_layer_sampling", &TotalEt_layer_sampling, &b_TotalEt_layer_sampling);
   fChain->SetBranchAddress("TotalEt_layer_sampling_calib", &TotalEt_layer_sampling_calib, &b_TotalEt_layer_sampling_calib);
   fChain->SetBranchAddress("trk_n", &trk_n, &b_trk_n);
   fChain->SetBranchAddress("trk_d0", &trk_d0, &b_trk_d0);
   fChain->SetBranchAddress("trk_z0", &trk_z0, &b_trk_z0);
   fChain->SetBranchAddress("trk_phi", &trk_phi, &b_trk_phi);
   fChain->SetBranchAddress("trk_theta", &trk_theta, &b_trk_theta);
   fChain->SetBranchAddress("trk_qoverp", &trk_qoverp, &b_trk_qoverp);
   fChain->SetBranchAddress("trk_pt", &trk_pt, &b_trk_pt);
   fChain->SetBranchAddress("trk_eta", &trk_eta, &b_trk_eta);
   fChain->SetBranchAddress("trk_err_d0", &trk_err_d0, &b_trk_err_d0);
   fChain->SetBranchAddress("trk_err_z0", &trk_err_z0, &b_trk_err_z0);
   fChain->SetBranchAddress("trk_err_phi", &trk_err_phi, &b_trk_err_phi);
   fChain->SetBranchAddress("trk_err_theta", &trk_err_theta, &b_trk_err_theta);
   fChain->SetBranchAddress("trk_err_qoverp", &trk_err_qoverp, &b_trk_err_qoverp);
   fChain->SetBranchAddress("trk_cov_d0_z0", &trk_cov_d0_z0, &b_trk_cov_d0_z0);
   fChain->SetBranchAddress("trk_cov_d0_phi", &trk_cov_d0_phi, &b_trk_cov_d0_phi);
   fChain->SetBranchAddress("trk_cov_d0_theta", &trk_cov_d0_theta, &b_trk_cov_d0_theta);
   fChain->SetBranchAddress("trk_cov_d0_qoverp", &trk_cov_d0_qoverp, &b_trk_cov_d0_qoverp);
   fChain->SetBranchAddress("trk_cov_z0_phi", &trk_cov_z0_phi, &b_trk_cov_z0_phi);
   fChain->SetBranchAddress("trk_cov_z0_theta", &trk_cov_z0_theta, &b_trk_cov_z0_theta);
   fChain->SetBranchAddress("trk_cov_z0_qoverp", &trk_cov_z0_qoverp, &b_trk_cov_z0_qoverp);
   fChain->SetBranchAddress("trk_cov_phi_theta", &trk_cov_phi_theta, &b_trk_cov_phi_theta);
   fChain->SetBranchAddress("trk_cov_phi_qoverp", &trk_cov_phi_qoverp, &b_trk_cov_phi_qoverp);
   fChain->SetBranchAddress("trk_cov_theta_qoverp", &trk_cov_theta_qoverp, &b_trk_cov_theta_qoverp);
   fChain->SetBranchAddress("trk_d0_wrtPV", &trk_d0_wrtPV, &b_trk_d0_wrtPV);
   fChain->SetBranchAddress("trk_z0_wrtPV", &trk_z0_wrtPV, &b_trk_z0_wrtPV);
   fChain->SetBranchAddress("trk_phi_wrtPV", &trk_phi_wrtPV, &b_trk_phi_wrtPV);
   fChain->SetBranchAddress("trk_err_d0_wrtPV", &trk_err_d0_wrtPV, &b_trk_err_d0_wrtPV);
   fChain->SetBranchAddress("trk_err_z0_wrtPV", &trk_err_z0_wrtPV, &b_trk_err_z0_wrtPV);
   fChain->SetBranchAddress("trk_err_phi_wrtPV", &trk_err_phi_wrtPV, &b_trk_err_phi_wrtPV);
   fChain->SetBranchAddress("trk_err_theta_wrtPV", &trk_err_theta_wrtPV, &b_trk_err_theta_wrtPV);
   fChain->SetBranchAddress("trk_err_qoverp_wrtPV", &trk_err_qoverp_wrtPV, &b_trk_err_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_cov_d0_z0_wrtPV", &trk_cov_d0_z0_wrtPV, &b_trk_cov_d0_z0_wrtPV);
   fChain->SetBranchAddress("trk_cov_d0_phi_wrtPV", &trk_cov_d0_phi_wrtPV, &b_trk_cov_d0_phi_wrtPV);
   fChain->SetBranchAddress("trk_cov_d0_theta_wrtPV", &trk_cov_d0_theta_wrtPV, &b_trk_cov_d0_theta_wrtPV);
   fChain->SetBranchAddress("trk_cov_d0_qoverp_wrtPV", &trk_cov_d0_qoverp_wrtPV, &b_trk_cov_d0_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_cov_z0_phi_wrtPV", &trk_cov_z0_phi_wrtPV, &b_trk_cov_z0_phi_wrtPV);
   fChain->SetBranchAddress("trk_cov_z0_theta_wrtPV", &trk_cov_z0_theta_wrtPV, &b_trk_cov_z0_theta_wrtPV);
   fChain->SetBranchAddress("trk_cov_z0_qoverp_wrtPV", &trk_cov_z0_qoverp_wrtPV, &b_trk_cov_z0_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_cov_phi_theta_wrtPV", &trk_cov_phi_theta_wrtPV, &b_trk_cov_phi_theta_wrtPV);
   fChain->SetBranchAddress("trk_cov_phi_qoverp_wrtPV", &trk_cov_phi_qoverp_wrtPV, &b_trk_cov_phi_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_cov_theta_qoverp_wrtPV", &trk_cov_theta_qoverp_wrtPV, &b_trk_cov_theta_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_d0_wrtBS", &trk_d0_wrtBS, &b_trk_d0_wrtBS);
   fChain->SetBranchAddress("trk_z0_wrtBS", &trk_z0_wrtBS, &b_trk_z0_wrtBS);
   fChain->SetBranchAddress("trk_phi_wrtBS", &trk_phi_wrtBS, &b_trk_phi_wrtBS);
   fChain->SetBranchAddress("trk_err_d0_wrtBS", &trk_err_d0_wrtBS, &b_trk_err_d0_wrtBS);
   fChain->SetBranchAddress("trk_err_z0_wrtBS", &trk_err_z0_wrtBS, &b_trk_err_z0_wrtBS);
   fChain->SetBranchAddress("trk_err_phi_wrtBS", &trk_err_phi_wrtBS, &b_trk_err_phi_wrtBS);
   fChain->SetBranchAddress("trk_err_theta_wrtBS", &trk_err_theta_wrtBS, &b_trk_err_theta_wrtBS);
   fChain->SetBranchAddress("trk_err_qoverp_wrtBS", &trk_err_qoverp_wrtBS, &b_trk_err_qoverp_wrtBS);
   fChain->SetBranchAddress("trk_cov_d0_z0_wrtBS", &trk_cov_d0_z0_wrtBS, &b_trk_cov_d0_z0_wrtBS);
   fChain->SetBranchAddress("trk_cov_d0_phi_wrtBS", &trk_cov_d0_phi_wrtBS, &b_trk_cov_d0_phi_wrtBS);
   fChain->SetBranchAddress("trk_cov_d0_theta_wrtBS", &trk_cov_d0_theta_wrtBS, &b_trk_cov_d0_theta_wrtBS);
   fChain->SetBranchAddress("trk_cov_d0_qoverp_wrtBS", &trk_cov_d0_qoverp_wrtBS, &b_trk_cov_d0_qoverp_wrtBS);
   fChain->SetBranchAddress("trk_cov_z0_phi_wrtBS", &trk_cov_z0_phi_wrtBS, &b_trk_cov_z0_phi_wrtBS);
   fChain->SetBranchAddress("trk_cov_z0_theta_wrtBS", &trk_cov_z0_theta_wrtBS, &b_trk_cov_z0_theta_wrtBS);
   fChain->SetBranchAddress("trk_cov_z0_qoverp_wrtBS", &trk_cov_z0_qoverp_wrtBS, &b_trk_cov_z0_qoverp_wrtBS);
   fChain->SetBranchAddress("trk_cov_phi_theta_wrtBS", &trk_cov_phi_theta_wrtBS, &b_trk_cov_phi_theta_wrtBS);
   fChain->SetBranchAddress("trk_cov_phi_qoverp_wrtBS", &trk_cov_phi_qoverp_wrtBS, &b_trk_cov_phi_qoverp_wrtBS);
   fChain->SetBranchAddress("trk_cov_theta_qoverp_wrtBS", &trk_cov_theta_qoverp_wrtBS, &b_trk_cov_theta_qoverp_wrtBS);
   fChain->SetBranchAddress("trk_d0_wrtBL", &trk_d0_wrtBL, &b_trk_d0_wrtBL);
   fChain->SetBranchAddress("trk_z0_wrtBL", &trk_z0_wrtBL, &b_trk_z0_wrtBL);
   fChain->SetBranchAddress("trk_phi_wrtBL", &trk_phi_wrtBL, &b_trk_phi_wrtBL);
   fChain->SetBranchAddress("trk_d0_err_wrtBL", &trk_d0_err_wrtBL, &b_trk_d0_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_err_wrtBL", &trk_z0_err_wrtBL, &b_trk_z0_err_wrtBL);
   fChain->SetBranchAddress("trk_phi_err_wrtBL", &trk_phi_err_wrtBL, &b_trk_phi_err_wrtBL);
   fChain->SetBranchAddress("trk_theta_err_wrtBL", &trk_theta_err_wrtBL, &b_trk_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_qoverp_err_wrtBL", &trk_qoverp_err_wrtBL, &b_trk_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_z0_err_wrtBL", &trk_d0_z0_err_wrtBL, &b_trk_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_phi_err_wrtBL", &trk_d0_phi_err_wrtBL, &b_trk_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_theta_err_wrtBL", &trk_d0_theta_err_wrtBL, &b_trk_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_d0_qoverp_err_wrtBL", &trk_d0_qoverp_err_wrtBL, &b_trk_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_phi_err_wrtBL", &trk_z0_phi_err_wrtBL, &b_trk_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_theta_err_wrtBL", &trk_z0_theta_err_wrtBL, &b_trk_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_z0_qoverp_err_wrtBL", &trk_z0_qoverp_err_wrtBL, &b_trk_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_phi_theta_err_wrtBL", &trk_phi_theta_err_wrtBL, &b_trk_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("trk_phi_qoverp_err_wrtBL", &trk_phi_qoverp_err_wrtBL, &b_trk_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_theta_qoverp_err_wrtBL", &trk_theta_qoverp_err_wrtBL, &b_trk_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trk_chi2", &trk_chi2, &b_trk_chi2);
   fChain->SetBranchAddress("trk_ndof", &trk_ndof, &b_trk_ndof);
   fChain->SetBranchAddress("trk_nBLHits", &trk_nBLHits, &b_trk_nBLHits);
   fChain->SetBranchAddress("trk_nPixHits", &trk_nPixHits, &b_trk_nPixHits);
   fChain->SetBranchAddress("trk_nSCTHits", &trk_nSCTHits, &b_trk_nSCTHits);
   fChain->SetBranchAddress("trk_nTRTHits", &trk_nTRTHits, &b_trk_nTRTHits);
   fChain->SetBranchAddress("trk_nTRTHighTHits", &trk_nTRTHighTHits, &b_trk_nTRTHighTHits);
   fChain->SetBranchAddress("trk_nTRTXenonHits", &trk_nTRTXenonHits, &b_trk_nTRTXenonHits);
   fChain->SetBranchAddress("trk_nPixHoles", &trk_nPixHoles, &b_trk_nPixHoles);
   fChain->SetBranchAddress("trk_nSCTHoles", &trk_nSCTHoles, &b_trk_nSCTHoles);
   fChain->SetBranchAddress("trk_nTRTHoles", &trk_nTRTHoles, &b_trk_nTRTHoles);
   fChain->SetBranchAddress("trk_nPixelDeadSensors", &trk_nPixelDeadSensors, &b_trk_nPixelDeadSensors);
   fChain->SetBranchAddress("trk_nSCTDeadSensors", &trk_nSCTDeadSensors, &b_trk_nSCTDeadSensors);
   fChain->SetBranchAddress("trk_nBLSharedHits", &trk_nBLSharedHits, &b_trk_nBLSharedHits);
   fChain->SetBranchAddress("trk_nPixSharedHits", &trk_nPixSharedHits, &b_trk_nPixSharedHits);
   fChain->SetBranchAddress("trk_nSCTSharedHits", &trk_nSCTSharedHits, &b_trk_nSCTSharedHits);
   fChain->SetBranchAddress("trk_nBLayerSplitHits", &trk_nBLayerSplitHits, &b_trk_nBLayerSplitHits);
   fChain->SetBranchAddress("trk_nPixSplitHits", &trk_nPixSplitHits, &b_trk_nPixSplitHits);
   fChain->SetBranchAddress("trk_nBLayerOutliers", &trk_nBLayerOutliers, &b_trk_nBLayerOutliers);
   fChain->SetBranchAddress("trk_nPixelOutliers", &trk_nPixelOutliers, &b_trk_nPixelOutliers);
   fChain->SetBranchAddress("trk_nSCTOutliers", &trk_nSCTOutliers, &b_trk_nSCTOutliers);
   fChain->SetBranchAddress("trk_nTRTOutliers", &trk_nTRTOutliers, &b_trk_nTRTOutliers);
   fChain->SetBranchAddress("trk_nTRTHighTOutliers", &trk_nTRTHighTOutliers, &b_trk_nTRTHighTOutliers);
   fChain->SetBranchAddress("trk_expectBLayerHit", &trk_expectBLayerHit, &b_trk_expectBLayerHit);
   fChain->SetBranchAddress("trk_nHits", &trk_nHits, &b_trk_nHits);
   fChain->SetBranchAddress("trk_nHoles", &trk_nHoles, &b_trk_nHoles);
   fChain->SetBranchAddress("trk_hitPattern", &trk_hitPattern, &b_trk_hitPattern);
   fChain->SetBranchAddress("trk_fitter", &trk_fitter, &b_trk_fitter);
   fChain->SetBranchAddress("trk_patternReco1", &trk_patternReco1, &b_trk_patternReco1);
   fChain->SetBranchAddress("trk_patternReco2", &trk_patternReco2, &b_trk_patternReco2);
   fChain->SetBranchAddress("trk_trackProperties", &trk_trackProperties, &b_trk_trackProperties);
   fChain->SetBranchAddress("trk_particleHypothesis", &trk_particleHypothesis, &b_trk_particleHypothesis);
   fChain->SetBranchAddress("trk_blayerPrediction_x", &trk_blayerPrediction_x, &b_trk_blayerPrediction_x);
   fChain->SetBranchAddress("trk_blayerPrediction_y", &trk_blayerPrediction_y, &b_trk_blayerPrediction_y);
   fChain->SetBranchAddress("trk_blayerPrediction_z", &trk_blayerPrediction_z, &b_trk_blayerPrediction_z);
   fChain->SetBranchAddress("trk_blayerPrediction_locX", &trk_blayerPrediction_locX, &b_trk_blayerPrediction_locX);
   fChain->SetBranchAddress("trk_blayerPrediction_locY", &trk_blayerPrediction_locY, &b_trk_blayerPrediction_locY);
   fChain->SetBranchAddress("trk_blayerPrediction_err_locX", &trk_blayerPrediction_err_locX, &b_trk_blayerPrediction_err_locX);
   fChain->SetBranchAddress("trk_blayerPrediction_err_locY", &trk_blayerPrediction_err_locY, &b_trk_blayerPrediction_err_locY);
   fChain->SetBranchAddress("trk_blayerPrediction_etaDistToEdge", &trk_blayerPrediction_etaDistToEdge, &b_trk_blayerPrediction_etaDistToEdge);
   fChain->SetBranchAddress("trk_blayerPrediction_phiDistToEdge", &trk_blayerPrediction_phiDistToEdge, &b_trk_blayerPrediction_phiDistToEdge);
   fChain->SetBranchAddress("trk_blayerPrediction_detElementId", &trk_blayerPrediction_detElementId, &b_trk_blayerPrediction_detElementId);
   fChain->SetBranchAddress("trk_blayerPrediction_row", &trk_blayerPrediction_row, &b_trk_blayerPrediction_row);
   fChain->SetBranchAddress("trk_blayerPrediction_col", &trk_blayerPrediction_col, &b_trk_blayerPrediction_col);
   fChain->SetBranchAddress("trk_blayerPrediction_type", &trk_blayerPrediction_type, &b_trk_blayerPrediction_type);
   fChain->SetBranchAddress("trk_Pixel_hit_n", &trk_Pixel_hit_n, &b_trk_Pixel_hit_n);
   fChain->SetBranchAddress("trk_Pixel_hit_id", &trk_Pixel_hit_id, &b_trk_Pixel_hit_id);
   fChain->SetBranchAddress("trk_Pixel_hit_detElementId", &trk_Pixel_hit_detElementId, &b_trk_Pixel_hit_detElementId);
   fChain->SetBranchAddress("trk_Pixel_hit_detType", &trk_Pixel_hit_detType, &b_trk_Pixel_hit_detType);
   fChain->SetBranchAddress("trk_Pixel_hit_bec", &trk_Pixel_hit_bec, &b_trk_Pixel_hit_bec);
   fChain->SetBranchAddress("trk_Pixel_hit_layer", &trk_Pixel_hit_layer, &b_trk_Pixel_hit_layer);
   fChain->SetBranchAddress("trk_Pixel_hit_charge", &trk_Pixel_hit_charge, &b_trk_Pixel_hit_charge);
   fChain->SetBranchAddress("trk_Pixel_hit_sizePhi", &trk_Pixel_hit_sizePhi, &b_trk_Pixel_hit_sizePhi);
   fChain->SetBranchAddress("trk_Pixel_hit_sizeZ", &trk_Pixel_hit_sizeZ, &b_trk_Pixel_hit_sizeZ);
   fChain->SetBranchAddress("trk_Pixel_hit_size", &trk_Pixel_hit_size, &b_trk_Pixel_hit_size);
   fChain->SetBranchAddress("trk_Pixel_hit_isFake", &trk_Pixel_hit_isFake, &b_trk_Pixel_hit_isFake);
   fChain->SetBranchAddress("trk_Pixel_hit_isGanged", &trk_Pixel_hit_isGanged, &b_trk_Pixel_hit_isGanged);
   fChain->SetBranchAddress("trk_Pixel_hit_isSplit", &trk_Pixel_hit_isSplit, &b_trk_Pixel_hit_isSplit);
   fChain->SetBranchAddress("trk_Pixel_hit_splitProb1", &trk_Pixel_hit_splitProb1, &b_trk_Pixel_hit_splitProb1);
   fChain->SetBranchAddress("trk_Pixel_hit_splitProb2", &trk_Pixel_hit_splitProb2, &b_trk_Pixel_hit_splitProb2);
   fChain->SetBranchAddress("trk_Pixel_hit_isCompetingRIO", &trk_Pixel_hit_isCompetingRIO, &b_trk_Pixel_hit_isCompetingRIO);
   fChain->SetBranchAddress("trk_Pixel_hit_locX", &trk_Pixel_hit_locX, &b_trk_Pixel_hit_locX);
   fChain->SetBranchAddress("trk_Pixel_hit_locY", &trk_Pixel_hit_locY, &b_trk_Pixel_hit_locY);
   fChain->SetBranchAddress("trk_Pixel_hit_incidencePhi", &trk_Pixel_hit_incidencePhi, &b_trk_Pixel_hit_incidencePhi);
   fChain->SetBranchAddress("trk_Pixel_hit_incidenceTheta", &trk_Pixel_hit_incidenceTheta, &b_trk_Pixel_hit_incidenceTheta);
   fChain->SetBranchAddress("trk_Pixel_hit_err_locX", &trk_Pixel_hit_err_locX, &b_trk_Pixel_hit_err_locX);
   fChain->SetBranchAddress("trk_Pixel_hit_err_locY", &trk_Pixel_hit_err_locY, &b_trk_Pixel_hit_err_locY);
   fChain->SetBranchAddress("trk_Pixel_hit_cov_locXY", &trk_Pixel_hit_cov_locXY, &b_trk_Pixel_hit_cov_locXY);
   fChain->SetBranchAddress("trk_Pixel_hit_x", &trk_Pixel_hit_x, &b_trk_Pixel_hit_x);
   fChain->SetBranchAddress("trk_Pixel_hit_y", &trk_Pixel_hit_y, &b_trk_Pixel_hit_y);
   fChain->SetBranchAddress("trk_Pixel_hit_z", &trk_Pixel_hit_z, &b_trk_Pixel_hit_z);
   fChain->SetBranchAddress("trk_Pixel_hit_trkLocX", &trk_Pixel_hit_trkLocX, &b_trk_Pixel_hit_trkLocX);
   fChain->SetBranchAddress("trk_Pixel_hit_trkLocY", &trk_Pixel_hit_trkLocY, &b_trk_Pixel_hit_trkLocY);
   fChain->SetBranchAddress("trk_Pixel_hit_err_trkLocX", &trk_Pixel_hit_err_trkLocX, &b_trk_Pixel_hit_err_trkLocX);
   fChain->SetBranchAddress("trk_Pixel_hit_err_trkLocY", &trk_Pixel_hit_err_trkLocY, &b_trk_Pixel_hit_err_trkLocY);
   fChain->SetBranchAddress("trk_Pixel_hit_cov_trkLocXY", &trk_Pixel_hit_cov_trkLocXY, &b_trk_Pixel_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trk_Pixel_hit_chi2", &trk_Pixel_hit_chi2, &b_trk_Pixel_hit_chi2);
   fChain->SetBranchAddress("trk_Pixel_hit_ndof", &trk_Pixel_hit_ndof, &b_trk_Pixel_hit_ndof);
   fChain->SetBranchAddress("trk_SCT_hit_n", &trk_SCT_hit_n, &b_trk_SCT_hit_n);
   fChain->SetBranchAddress("trk_SCT_hit_id", &trk_SCT_hit_id, &b_trk_SCT_hit_id);
   fChain->SetBranchAddress("trk_SCT_hit_detElementId", &trk_SCT_hit_detElementId, &b_trk_SCT_hit_detElementId);
   fChain->SetBranchAddress("trk_SCT_hit_detType", &trk_SCT_hit_detType, &b_trk_SCT_hit_detType);
   fChain->SetBranchAddress("trk_SCT_hit_bec", &trk_SCT_hit_bec, &b_trk_SCT_hit_bec);
   fChain->SetBranchAddress("trk_SCT_hit_layer", &trk_SCT_hit_layer, &b_trk_SCT_hit_layer);
   fChain->SetBranchAddress("trk_SCT_hit_sizePhi", &trk_SCT_hit_sizePhi, &b_trk_SCT_hit_sizePhi);
   fChain->SetBranchAddress("trk_SCT_hit_isCompetingRIO", &trk_SCT_hit_isCompetingRIO, &b_trk_SCT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trk_SCT_hit_locX", &trk_SCT_hit_locX, &b_trk_SCT_hit_locX);
   fChain->SetBranchAddress("trk_SCT_hit_locY", &trk_SCT_hit_locY, &b_trk_SCT_hit_locY);
   fChain->SetBranchAddress("trk_SCT_hit_incidencePhi", &trk_SCT_hit_incidencePhi, &b_trk_SCT_hit_incidencePhi);
   fChain->SetBranchAddress("trk_SCT_hit_incidenceTheta", &trk_SCT_hit_incidenceTheta, &b_trk_SCT_hit_incidenceTheta);
   fChain->SetBranchAddress("trk_SCT_hit_err_locX", &trk_SCT_hit_err_locX, &b_trk_SCT_hit_err_locX);
   fChain->SetBranchAddress("trk_SCT_hit_err_locY", &trk_SCT_hit_err_locY, &b_trk_SCT_hit_err_locY);
   fChain->SetBranchAddress("trk_SCT_hit_cov_locXY", &trk_SCT_hit_cov_locXY, &b_trk_SCT_hit_cov_locXY);
   fChain->SetBranchAddress("trk_SCT_hit_x", &trk_SCT_hit_x, &b_trk_SCT_hit_x);
   fChain->SetBranchAddress("trk_SCT_hit_y", &trk_SCT_hit_y, &b_trk_SCT_hit_y);
   fChain->SetBranchAddress("trk_SCT_hit_z", &trk_SCT_hit_z, &b_trk_SCT_hit_z);
   fChain->SetBranchAddress("trk_SCT_hit_trkLocX", &trk_SCT_hit_trkLocX, &b_trk_SCT_hit_trkLocX);
   fChain->SetBranchAddress("trk_SCT_hit_trkLocY", &trk_SCT_hit_trkLocY, &b_trk_SCT_hit_trkLocY);
   fChain->SetBranchAddress("trk_SCT_hit_err_trkLocX", &trk_SCT_hit_err_trkLocX, &b_trk_SCT_hit_err_trkLocX);
   fChain->SetBranchAddress("trk_SCT_hit_err_trkLocY", &trk_SCT_hit_err_trkLocY, &b_trk_SCT_hit_err_trkLocY);
   fChain->SetBranchAddress("trk_SCT_hit_cov_trkLocXY", &trk_SCT_hit_cov_trkLocXY, &b_trk_SCT_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trk_SCT_hit_chi2", &trk_SCT_hit_chi2, &b_trk_SCT_hit_chi2);
   fChain->SetBranchAddress("trk_SCT_hit_ndof", &trk_SCT_hit_ndof, &b_trk_SCT_hit_ndof);
   fChain->SetBranchAddress("trk_TRT_hit_n", &trk_TRT_hit_n, &b_trk_TRT_hit_n);
   fChain->SetBranchAddress("trk_TRT_hit_id", &trk_TRT_hit_id, &b_trk_TRT_hit_id);
   fChain->SetBranchAddress("trk_TRT_hit_detElementId", &trk_TRT_hit_detElementId, &b_trk_TRT_hit_detElementId);
   fChain->SetBranchAddress("trk_TRT_hit_detType", &trk_TRT_hit_detType, &b_trk_TRT_hit_detType);
   fChain->SetBranchAddress("trk_TRT_hit_bec", &trk_TRT_hit_bec, &b_trk_TRT_hit_bec);
   fChain->SetBranchAddress("trk_TRT_hit_layer", &trk_TRT_hit_layer, &b_trk_TRT_hit_layer);
   fChain->SetBranchAddress("trk_TRT_hit_isCompetingRIO", &trk_TRT_hit_isCompetingRIO, &b_trk_TRT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trk_TRT_hit_locR", &trk_TRT_hit_locR, &b_trk_TRT_hit_locR);
   fChain->SetBranchAddress("trk_TRT_hit_err_locR", &trk_TRT_hit_err_locR, &b_trk_TRT_hit_err_locR);
   fChain->SetBranchAddress("trk_TRT_hit_trkLocR", &trk_TRT_hit_trkLocR, &b_trk_TRT_hit_trkLocR);
   fChain->SetBranchAddress("trk_TRT_hit_trkLocPhi", &trk_TRT_hit_trkLocPhi, &b_trk_TRT_hit_trkLocPhi);
   fChain->SetBranchAddress("trk_TRT_hit_err_trkLocR", &trk_TRT_hit_err_trkLocR, &b_trk_TRT_hit_err_trkLocR);
   fChain->SetBranchAddress("trk_TRT_hit_err_trkLocPhi", &trk_TRT_hit_err_trkLocPhi, &b_trk_TRT_hit_err_trkLocPhi);
   fChain->SetBranchAddress("trk_TRT_hit_cov_trkLocRPhi", &trk_TRT_hit_cov_trkLocRPhi, &b_trk_TRT_hit_cov_trkLocRPhi);
   fChain->SetBranchAddress("trk_TRT_hit_TOT", &trk_TRT_hit_TOT, &b_trk_TRT_hit_TOT);
   fChain->SetBranchAddress("trk_TRT_hit_highLevel", &trk_TRT_hit_highLevel, &b_trk_TRT_hit_highLevel);
   fChain->SetBranchAddress("trk_TRT_hit_trailingEdge", &trk_TRT_hit_trailingEdge, &b_trk_TRT_hit_trailingEdge);
   fChain->SetBranchAddress("trk_TRT_hit_chi2", &trk_TRT_hit_chi2, &b_trk_TRT_hit_chi2);
   fChain->SetBranchAddress("trk_TRT_hit_ndof", &trk_TRT_hit_ndof, &b_trk_TRT_hit_ndof);
   fChain->SetBranchAddress("trk_Pixel_outlier_n", &trk_Pixel_outlier_n, &b_trk_Pixel_outlier_n);
   fChain->SetBranchAddress("trk_Pixel_outlier_id", &trk_Pixel_outlier_id, &b_trk_Pixel_outlier_id);
   fChain->SetBranchAddress("trk_Pixel_outlier_detElementId", &trk_Pixel_outlier_detElementId, &b_trk_Pixel_outlier_detElementId);
   fChain->SetBranchAddress("trk_Pixel_outlier_detType", &trk_Pixel_outlier_detType, &b_trk_Pixel_outlier_detType);
   fChain->SetBranchAddress("trk_Pixel_outlier_bec", &trk_Pixel_outlier_bec, &b_trk_Pixel_outlier_bec);
   fChain->SetBranchAddress("trk_Pixel_outlier_layer", &trk_Pixel_outlier_layer, &b_trk_Pixel_outlier_layer);
   fChain->SetBranchAddress("trk_Pixel_outlier_charge", &trk_Pixel_outlier_charge, &b_trk_Pixel_outlier_charge);
   fChain->SetBranchAddress("trk_Pixel_outlier_sizePhi", &trk_Pixel_outlier_sizePhi, &b_trk_Pixel_outlier_sizePhi);
   fChain->SetBranchAddress("trk_Pixel_outlier_sizeZ", &trk_Pixel_outlier_sizeZ, &b_trk_Pixel_outlier_sizeZ);
   fChain->SetBranchAddress("trk_Pixel_outlier_size", &trk_Pixel_outlier_size, &b_trk_Pixel_outlier_size);
   fChain->SetBranchAddress("trk_Pixel_outlier_isFake", &trk_Pixel_outlier_isFake, &b_trk_Pixel_outlier_isFake);
   fChain->SetBranchAddress("trk_Pixel_outlier_isGanged", &trk_Pixel_outlier_isGanged, &b_trk_Pixel_outlier_isGanged);
   fChain->SetBranchAddress("trk_Pixel_outlier_isSplit", &trk_Pixel_outlier_isSplit, &b_trk_Pixel_outlier_isSplit);
   fChain->SetBranchAddress("trk_Pixel_outlier_splitProb1", &trk_Pixel_outlier_splitProb1, &b_trk_Pixel_outlier_splitProb1);
   fChain->SetBranchAddress("trk_Pixel_outlier_splitProb2", &trk_Pixel_outlier_splitProb2, &b_trk_Pixel_outlier_splitProb2);
   fChain->SetBranchAddress("trk_Pixel_outlier_isCompetingRIO", &trk_Pixel_outlier_isCompetingRIO, &b_trk_Pixel_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trk_Pixel_outlier_locX", &trk_Pixel_outlier_locX, &b_trk_Pixel_outlier_locX);
   fChain->SetBranchAddress("trk_Pixel_outlier_locY", &trk_Pixel_outlier_locY, &b_trk_Pixel_outlier_locY);
   fChain->SetBranchAddress("trk_Pixel_outlier_incidencePhi", &trk_Pixel_outlier_incidencePhi, &b_trk_Pixel_outlier_incidencePhi);
   fChain->SetBranchAddress("trk_Pixel_outlier_incidenceTheta", &trk_Pixel_outlier_incidenceTheta, &b_trk_Pixel_outlier_incidenceTheta);
   fChain->SetBranchAddress("trk_Pixel_outlier_err_locX", &trk_Pixel_outlier_err_locX, &b_trk_Pixel_outlier_err_locX);
   fChain->SetBranchAddress("trk_Pixel_outlier_err_locY", &trk_Pixel_outlier_err_locY, &b_trk_Pixel_outlier_err_locY);
   fChain->SetBranchAddress("trk_Pixel_outlier_cov_locXY", &trk_Pixel_outlier_cov_locXY, &b_trk_Pixel_outlier_cov_locXY);
   fChain->SetBranchAddress("trk_Pixel_outlier_x", &trk_Pixel_outlier_x, &b_trk_Pixel_outlier_x);
   fChain->SetBranchAddress("trk_Pixel_outlier_y", &trk_Pixel_outlier_y, &b_trk_Pixel_outlier_y);
   fChain->SetBranchAddress("trk_Pixel_outlier_z", &trk_Pixel_outlier_z, &b_trk_Pixel_outlier_z);
   fChain->SetBranchAddress("trk_Pixel_outlier_trkLocX", &trk_Pixel_outlier_trkLocX, &b_trk_Pixel_outlier_trkLocX);
   fChain->SetBranchAddress("trk_Pixel_outlier_trkLocY", &trk_Pixel_outlier_trkLocY, &b_trk_Pixel_outlier_trkLocY);
   fChain->SetBranchAddress("trk_Pixel_outlier_err_trkLocX", &trk_Pixel_outlier_err_trkLocX, &b_trk_Pixel_outlier_err_trkLocX);
   fChain->SetBranchAddress("trk_Pixel_outlier_err_trkLocY", &trk_Pixel_outlier_err_trkLocY, &b_trk_Pixel_outlier_err_trkLocY);
   fChain->SetBranchAddress("trk_Pixel_outlier_cov_trkLocXY", &trk_Pixel_outlier_cov_trkLocXY, &b_trk_Pixel_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trk_Pixel_outlier_chi2", &trk_Pixel_outlier_chi2, &b_trk_Pixel_outlier_chi2);
   fChain->SetBranchAddress("trk_Pixel_outlier_ndof", &trk_Pixel_outlier_ndof, &b_trk_Pixel_outlier_ndof);
   fChain->SetBranchAddress("trk_SCT_outlier_n", &trk_SCT_outlier_n, &b_trk_SCT_outlier_n);
   fChain->SetBranchAddress("trk_SCT_outlier_id", &trk_SCT_outlier_id, &b_trk_SCT_outlier_id);
   fChain->SetBranchAddress("trk_SCT_outlier_detElementId", &trk_SCT_outlier_detElementId, &b_trk_SCT_outlier_detElementId);
   fChain->SetBranchAddress("trk_SCT_outlier_detType", &trk_SCT_outlier_detType, &b_trk_SCT_outlier_detType);
   fChain->SetBranchAddress("trk_SCT_outlier_bec", &trk_SCT_outlier_bec, &b_trk_SCT_outlier_bec);
   fChain->SetBranchAddress("trk_SCT_outlier_layer", &trk_SCT_outlier_layer, &b_trk_SCT_outlier_layer);
   fChain->SetBranchAddress("trk_SCT_outlier_sizePhi", &trk_SCT_outlier_sizePhi, &b_trk_SCT_outlier_sizePhi);
   fChain->SetBranchAddress("trk_SCT_outlier_isCompetingRIO", &trk_SCT_outlier_isCompetingRIO, &b_trk_SCT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trk_SCT_outlier_locX", &trk_SCT_outlier_locX, &b_trk_SCT_outlier_locX);
   fChain->SetBranchAddress("trk_SCT_outlier_locY", &trk_SCT_outlier_locY, &b_trk_SCT_outlier_locY);
   fChain->SetBranchAddress("trk_SCT_outlier_incidencePhi", &trk_SCT_outlier_incidencePhi, &b_trk_SCT_outlier_incidencePhi);
   fChain->SetBranchAddress("trk_SCT_outlier_incidenceTheta", &trk_SCT_outlier_incidenceTheta, &b_trk_SCT_outlier_incidenceTheta);
   fChain->SetBranchAddress("trk_SCT_outlier_err_locX", &trk_SCT_outlier_err_locX, &b_trk_SCT_outlier_err_locX);
   fChain->SetBranchAddress("trk_SCT_outlier_err_locY", &trk_SCT_outlier_err_locY, &b_trk_SCT_outlier_err_locY);
   fChain->SetBranchAddress("trk_SCT_outlier_cov_locXY", &trk_SCT_outlier_cov_locXY, &b_trk_SCT_outlier_cov_locXY);
   fChain->SetBranchAddress("trk_SCT_outlier_x", &trk_SCT_outlier_x, &b_trk_SCT_outlier_x);
   fChain->SetBranchAddress("trk_SCT_outlier_y", &trk_SCT_outlier_y, &b_trk_SCT_outlier_y);
   fChain->SetBranchAddress("trk_SCT_outlier_z", &trk_SCT_outlier_z, &b_trk_SCT_outlier_z);
   fChain->SetBranchAddress("trk_SCT_outlier_trkLocX", &trk_SCT_outlier_trkLocX, &b_trk_SCT_outlier_trkLocX);
   fChain->SetBranchAddress("trk_SCT_outlier_trkLocY", &trk_SCT_outlier_trkLocY, &b_trk_SCT_outlier_trkLocY);
   fChain->SetBranchAddress("trk_SCT_outlier_err_trkLocX", &trk_SCT_outlier_err_trkLocX, &b_trk_SCT_outlier_err_trkLocX);
   fChain->SetBranchAddress("trk_SCT_outlier_err_trkLocY", &trk_SCT_outlier_err_trkLocY, &b_trk_SCT_outlier_err_trkLocY);
   fChain->SetBranchAddress("trk_SCT_outlier_cov_trkLocXY", &trk_SCT_outlier_cov_trkLocXY, &b_trk_SCT_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trk_SCT_outlier_chi2", &trk_SCT_outlier_chi2, &b_trk_SCT_outlier_chi2);
   fChain->SetBranchAddress("trk_SCT_outlier_ndof", &trk_SCT_outlier_ndof, &b_trk_SCT_outlier_ndof);
   fChain->SetBranchAddress("trk_TRT_outlier_n", &trk_TRT_outlier_n, &b_trk_TRT_outlier_n);
   fChain->SetBranchAddress("trk_TRT_outlier_id", &trk_TRT_outlier_id, &b_trk_TRT_outlier_id);
   fChain->SetBranchAddress("trk_TRT_outlier_detElementId", &trk_TRT_outlier_detElementId, &b_trk_TRT_outlier_detElementId);
   fChain->SetBranchAddress("trk_TRT_outlier_detType", &trk_TRT_outlier_detType, &b_trk_TRT_outlier_detType);
   fChain->SetBranchAddress("trk_TRT_outlier_bec", &trk_TRT_outlier_bec, &b_trk_TRT_outlier_bec);
   fChain->SetBranchAddress("trk_TRT_outlier_layer", &trk_TRT_outlier_layer, &b_trk_TRT_outlier_layer);
   fChain->SetBranchAddress("trk_TRT_outlier_isCompetingRIO", &trk_TRT_outlier_isCompetingRIO, &b_trk_TRT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trk_TRT_outlier_locR", &trk_TRT_outlier_locR, &b_trk_TRT_outlier_locR);
   fChain->SetBranchAddress("trk_TRT_outlier_err_locR", &trk_TRT_outlier_err_locR, &b_trk_TRT_outlier_err_locR);
   fChain->SetBranchAddress("trk_TRT_outlier_trkLocR", &trk_TRT_outlier_trkLocR, &b_trk_TRT_outlier_trkLocR);
   fChain->SetBranchAddress("trk_TRT_outlier_trkLocPhi", &trk_TRT_outlier_trkLocPhi, &b_trk_TRT_outlier_trkLocPhi);
   fChain->SetBranchAddress("trk_TRT_outlier_err_trkLocR", &trk_TRT_outlier_err_trkLocR, &b_trk_TRT_outlier_err_trkLocR);
   fChain->SetBranchAddress("trk_TRT_outlier_err_trkLocPhi", &trk_TRT_outlier_err_trkLocPhi, &b_trk_TRT_outlier_err_trkLocPhi);
   fChain->SetBranchAddress("trk_TRT_outlier_cov_trkLocRPhi", &trk_TRT_outlier_cov_trkLocRPhi, &b_trk_TRT_outlier_cov_trkLocRPhi);
   fChain->SetBranchAddress("trk_TRT_outlier_TOT", &trk_TRT_outlier_TOT, &b_trk_TRT_outlier_TOT);
   fChain->SetBranchAddress("trk_TRT_outlier_highLevel", &trk_TRT_outlier_highLevel, &b_trk_TRT_outlier_highLevel);
   fChain->SetBranchAddress("trk_TRT_outlier_trailingEdge", &trk_TRT_outlier_trailingEdge, &b_trk_TRT_outlier_trailingEdge);
   fChain->SetBranchAddress("trk_TRT_outlier_chi2", &trk_TRT_outlier_chi2, &b_trk_TRT_outlier_chi2);
   fChain->SetBranchAddress("trk_TRT_outlier_ndof", &trk_TRT_outlier_ndof, &b_trk_TRT_outlier_ndof);
   fChain->SetBranchAddress("trk_Pixel_hole_n", &trk_Pixel_hole_n, &b_trk_Pixel_hole_n);
   fChain->SetBranchAddress("trk_Pixel_hole_detElementId", &trk_Pixel_hole_detElementId, &b_trk_Pixel_hole_detElementId);
   fChain->SetBranchAddress("trk_Pixel_hole_bec", &trk_Pixel_hole_bec, &b_trk_Pixel_hole_bec);
   fChain->SetBranchAddress("trk_Pixel_hole_layer", &trk_Pixel_hole_layer, &b_trk_Pixel_hole_layer);
   fChain->SetBranchAddress("trk_Pixel_hole_trkLocX", &trk_Pixel_hole_trkLocX, &b_trk_Pixel_hole_trkLocX);
   fChain->SetBranchAddress("trk_Pixel_hole_trkLocY", &trk_Pixel_hole_trkLocY, &b_trk_Pixel_hole_trkLocY);
   fChain->SetBranchAddress("trk_Pixel_hole_err_trkLocX", &trk_Pixel_hole_err_trkLocX, &b_trk_Pixel_hole_err_trkLocX);
   fChain->SetBranchAddress("trk_Pixel_hole_err_trkLocY", &trk_Pixel_hole_err_trkLocY, &b_trk_Pixel_hole_err_trkLocY);
   fChain->SetBranchAddress("trk_Pixel_hole_cov_trkLocXY", &trk_Pixel_hole_cov_trkLocXY, &b_trk_Pixel_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trk_SCT_hole_n", &trk_SCT_hole_n, &b_trk_SCT_hole_n);
   fChain->SetBranchAddress("trk_SCT_hole_detElementId", &trk_SCT_hole_detElementId, &b_trk_SCT_hole_detElementId);
   fChain->SetBranchAddress("trk_SCT_hole_bec", &trk_SCT_hole_bec, &b_trk_SCT_hole_bec);
   fChain->SetBranchAddress("trk_SCT_hole_layer", &trk_SCT_hole_layer, &b_trk_SCT_hole_layer);
   fChain->SetBranchAddress("trk_SCT_hole_trkLocX", &trk_SCT_hole_trkLocX, &b_trk_SCT_hole_trkLocX);
   fChain->SetBranchAddress("trk_SCT_hole_trkLocY", &trk_SCT_hole_trkLocY, &b_trk_SCT_hole_trkLocY);
   fChain->SetBranchAddress("trk_SCT_hole_err_trkLocX", &trk_SCT_hole_err_trkLocX, &b_trk_SCT_hole_err_trkLocX);
   fChain->SetBranchAddress("trk_SCT_hole_err_trkLocY", &trk_SCT_hole_err_trkLocY, &b_trk_SCT_hole_err_trkLocY);
   fChain->SetBranchAddress("trk_SCT_hole_cov_trkLocXY", &trk_SCT_hole_cov_trkLocXY, &b_trk_SCT_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trk_TRT_hole_n", &trk_TRT_hole_n, &b_trk_TRT_hole_n);
   fChain->SetBranchAddress("trk_TRT_hole_detElementId", &trk_TRT_hole_detElementId, &b_trk_TRT_hole_detElementId);
   fChain->SetBranchAddress("trk_TRT_hole_bec", &trk_TRT_hole_bec, &b_trk_TRT_hole_bec);
   fChain->SetBranchAddress("trk_TRT_hole_layer", &trk_TRT_hole_layer, &b_trk_TRT_hole_layer);
   fChain->SetBranchAddress("trk_TRT_hole_trkLocR", &trk_TRT_hole_trkLocR, &b_trk_TRT_hole_trkLocR);
   fChain->SetBranchAddress("trk_TRT_hole_trkLocPhi", &trk_TRT_hole_trkLocPhi, &b_trk_TRT_hole_trkLocPhi);
   fChain->SetBranchAddress("trk_TRT_hole_err_trkLocR", &trk_TRT_hole_err_trkLocR, &b_trk_TRT_hole_err_trkLocR);
   fChain->SetBranchAddress("trk_TRT_hole_err_trkLocPhi", &trk_TRT_hole_err_trkLocPhi, &b_trk_TRT_hole_err_trkLocPhi);
   fChain->SetBranchAddress("trk_TRT_hole_cov_trkLocRPhi", &trk_TRT_hole_cov_trkLocRPhi, &b_trk_TRT_hole_cov_trkLocRPhi);
   fChain->SetBranchAddress("pTrklets_n", &pTrklets_n, &b_pTrklets_n);
   fChain->SetBranchAddress("pTrklets_nBPixClus", &pTrklets_nBPixClus, &b_pTrklets_nBPixClus);
   fChain->SetBranchAddress("pTrklets_n1PixClus", &pTrklets_n1PixClus, &b_pTrklets_n1PixClus);
   fChain->SetBranchAddress("pTrklets_n2PixClus", &pTrklets_n2PixClus, &b_pTrklets_n2PixClus);
   fChain->SetBranchAddress("pTrklets_layerSum", &pTrklets_layerSum, &b_pTrklets_layerSum);
   fChain->SetBranchAddress("pTrklets_eta", &pTrklets_eta, &b_pTrklets_eta);
   fChain->SetBranchAddress("pTrklets_phi", &pTrklets_phi, &b_pTrklets_phi);
   fChain->SetBranchAddress("pTrklets_pt", &pTrklets_pt, &b_pTrklets_pt);
   fChain->SetBranchAddress("pTrklets_deta", &pTrklets_deta, &b_pTrklets_deta);
   fChain->SetBranchAddress("pTrklets_dphi", &pTrklets_dphi, &b_pTrklets_dphi);
   fChain->SetBranchAddress("pTrklets_etaS", &pTrklets_etaS, &b_pTrklets_etaS);
   fChain->SetBranchAddress("pTrklets_phiS", &pTrklets_phiS, &b_pTrklets_phiS);
   fChain->SetBranchAddress("pTrklets_energy0", &pTrklets_energy0, &b_pTrklets_energy0);
   fChain->SetBranchAddress("pTrklets_energy1", &pTrklets_energy1, &b_pTrklets_energy1);
   fChain->SetBranchAddress("pTrklets_cSize0", &pTrklets_cSize0, &b_pTrklets_cSize0);
   fChain->SetBranchAddress("pTrklets_cSize1", &pTrklets_cSize1, &b_pTrklets_cSize1);
   fChain->SetBranchAddress("pTrklets_cRowSize0", &pTrklets_cRowSize0, &b_pTrklets_cRowSize0);
   fChain->SetBranchAddress("pTrklets_cRowSize1", &pTrklets_cRowSize1, &b_pTrklets_cRowSize1);
   fChain->SetBranchAddress("pTrklets_cColSize0", &pTrklets_cColSize0, &b_pTrklets_cColSize0);
   fChain->SetBranchAddress("pTrklets_cColSize1", &pTrklets_cColSize1, &b_pTrklets_cColSize1);
   fChain->SetBranchAddress("pTrklets_clusIds", &pTrklets_clusIds, &b_pTrklets_clusIds);
   fChain->SetBranchAddress("trkPix_n", &trkPix_n, &b_trkPix_n);
   fChain->SetBranchAddress("trkPix_d0", &trkPix_d0, &b_trkPix_d0);
   fChain->SetBranchAddress("trkPix_z0", &trkPix_z0, &b_trkPix_z0);
   fChain->SetBranchAddress("trkPix_phi", &trkPix_phi, &b_trkPix_phi);
   fChain->SetBranchAddress("trkPix_theta", &trkPix_theta, &b_trkPix_theta);
   fChain->SetBranchAddress("trkPix_qoverp", &trkPix_qoverp, &b_trkPix_qoverp);
   fChain->SetBranchAddress("trkPix_pt", &trkPix_pt, &b_trkPix_pt);
   fChain->SetBranchAddress("trkPix_eta", &trkPix_eta, &b_trkPix_eta);
   fChain->SetBranchAddress("trkPix_err_d0", &trkPix_err_d0, &b_trkPix_err_d0);
   fChain->SetBranchAddress("trkPix_err_z0", &trkPix_err_z0, &b_trkPix_err_z0);
   fChain->SetBranchAddress("trkPix_err_phi", &trkPix_err_phi, &b_trkPix_err_phi);
   fChain->SetBranchAddress("trkPix_err_theta", &trkPix_err_theta, &b_trkPix_err_theta);
   fChain->SetBranchAddress("trkPix_err_qoverp", &trkPix_err_qoverp, &b_trkPix_err_qoverp);
   fChain->SetBranchAddress("trkPix_cov_d0_z0", &trkPix_cov_d0_z0, &b_trkPix_cov_d0_z0);
   fChain->SetBranchAddress("trkPix_cov_d0_phi", &trkPix_cov_d0_phi, &b_trkPix_cov_d0_phi);
   fChain->SetBranchAddress("trkPix_cov_d0_theta", &trkPix_cov_d0_theta, &b_trkPix_cov_d0_theta);
   fChain->SetBranchAddress("trkPix_cov_d0_qoverp", &trkPix_cov_d0_qoverp, &b_trkPix_cov_d0_qoverp);
   fChain->SetBranchAddress("trkPix_cov_z0_phi", &trkPix_cov_z0_phi, &b_trkPix_cov_z0_phi);
   fChain->SetBranchAddress("trkPix_cov_z0_theta", &trkPix_cov_z0_theta, &b_trkPix_cov_z0_theta);
   fChain->SetBranchAddress("trkPix_cov_z0_qoverp", &trkPix_cov_z0_qoverp, &b_trkPix_cov_z0_qoverp);
   fChain->SetBranchAddress("trkPix_cov_phi_theta", &trkPix_cov_phi_theta, &b_trkPix_cov_phi_theta);
   fChain->SetBranchAddress("trkPix_cov_phi_qoverp", &trkPix_cov_phi_qoverp, &b_trkPix_cov_phi_qoverp);
   fChain->SetBranchAddress("trkPix_cov_theta_qoverp", &trkPix_cov_theta_qoverp, &b_trkPix_cov_theta_qoverp);
   fChain->SetBranchAddress("trkPix_d0_wrtPV", &trkPix_d0_wrtPV, &b_trkPix_d0_wrtPV);
   fChain->SetBranchAddress("trkPix_z0_wrtPV", &trkPix_z0_wrtPV, &b_trkPix_z0_wrtPV);
   fChain->SetBranchAddress("trkPix_phi_wrtPV", &trkPix_phi_wrtPV, &b_trkPix_phi_wrtPV);
   fChain->SetBranchAddress("trkPix_err_d0_wrtPV", &trkPix_err_d0_wrtPV, &b_trkPix_err_d0_wrtPV);
   fChain->SetBranchAddress("trkPix_err_z0_wrtPV", &trkPix_err_z0_wrtPV, &b_trkPix_err_z0_wrtPV);
   fChain->SetBranchAddress("trkPix_err_phi_wrtPV", &trkPix_err_phi_wrtPV, &b_trkPix_err_phi_wrtPV);
   fChain->SetBranchAddress("trkPix_err_theta_wrtPV", &trkPix_err_theta_wrtPV, &b_trkPix_err_theta_wrtPV);
   fChain->SetBranchAddress("trkPix_err_qoverp_wrtPV", &trkPix_err_qoverp_wrtPV, &b_trkPix_err_qoverp_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_d0_z0_wrtPV", &trkPix_cov_d0_z0_wrtPV, &b_trkPix_cov_d0_z0_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_d0_phi_wrtPV", &trkPix_cov_d0_phi_wrtPV, &b_trkPix_cov_d0_phi_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_d0_theta_wrtPV", &trkPix_cov_d0_theta_wrtPV, &b_trkPix_cov_d0_theta_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_d0_qoverp_wrtPV", &trkPix_cov_d0_qoverp_wrtPV, &b_trkPix_cov_d0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_z0_phi_wrtPV", &trkPix_cov_z0_phi_wrtPV, &b_trkPix_cov_z0_phi_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_z0_theta_wrtPV", &trkPix_cov_z0_theta_wrtPV, &b_trkPix_cov_z0_theta_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_z0_qoverp_wrtPV", &trkPix_cov_z0_qoverp_wrtPV, &b_trkPix_cov_z0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_phi_theta_wrtPV", &trkPix_cov_phi_theta_wrtPV, &b_trkPix_cov_phi_theta_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_phi_qoverp_wrtPV", &trkPix_cov_phi_qoverp_wrtPV, &b_trkPix_cov_phi_qoverp_wrtPV);
   fChain->SetBranchAddress("trkPix_cov_theta_qoverp_wrtPV", &trkPix_cov_theta_qoverp_wrtPV, &b_trkPix_cov_theta_qoverp_wrtPV);
   fChain->SetBranchAddress("trkPix_d0_wrtBS", &trkPix_d0_wrtBS, &b_trkPix_d0_wrtBS);
   fChain->SetBranchAddress("trkPix_z0_wrtBS", &trkPix_z0_wrtBS, &b_trkPix_z0_wrtBS);
   fChain->SetBranchAddress("trkPix_phi_wrtBS", &trkPix_phi_wrtBS, &b_trkPix_phi_wrtBS);
   fChain->SetBranchAddress("trkPix_err_d0_wrtBS", &trkPix_err_d0_wrtBS, &b_trkPix_err_d0_wrtBS);
   fChain->SetBranchAddress("trkPix_err_z0_wrtBS", &trkPix_err_z0_wrtBS, &b_trkPix_err_z0_wrtBS);
   fChain->SetBranchAddress("trkPix_err_phi_wrtBS", &trkPix_err_phi_wrtBS, &b_trkPix_err_phi_wrtBS);
   fChain->SetBranchAddress("trkPix_err_theta_wrtBS", &trkPix_err_theta_wrtBS, &b_trkPix_err_theta_wrtBS);
   fChain->SetBranchAddress("trkPix_err_qoverp_wrtBS", &trkPix_err_qoverp_wrtBS, &b_trkPix_err_qoverp_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_d0_z0_wrtBS", &trkPix_cov_d0_z0_wrtBS, &b_trkPix_cov_d0_z0_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_d0_phi_wrtBS", &trkPix_cov_d0_phi_wrtBS, &b_trkPix_cov_d0_phi_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_d0_theta_wrtBS", &trkPix_cov_d0_theta_wrtBS, &b_trkPix_cov_d0_theta_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_d0_qoverp_wrtBS", &trkPix_cov_d0_qoverp_wrtBS, &b_trkPix_cov_d0_qoverp_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_z0_phi_wrtBS", &trkPix_cov_z0_phi_wrtBS, &b_trkPix_cov_z0_phi_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_z0_theta_wrtBS", &trkPix_cov_z0_theta_wrtBS, &b_trkPix_cov_z0_theta_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_z0_qoverp_wrtBS", &trkPix_cov_z0_qoverp_wrtBS, &b_trkPix_cov_z0_qoverp_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_phi_theta_wrtBS", &trkPix_cov_phi_theta_wrtBS, &b_trkPix_cov_phi_theta_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_phi_qoverp_wrtBS", &trkPix_cov_phi_qoverp_wrtBS, &b_trkPix_cov_phi_qoverp_wrtBS);
   fChain->SetBranchAddress("trkPix_cov_theta_qoverp_wrtBS", &trkPix_cov_theta_qoverp_wrtBS, &b_trkPix_cov_theta_qoverp_wrtBS);
   fChain->SetBranchAddress("trkPix_d0_wrtBL", &trkPix_d0_wrtBL, &b_trkPix_d0_wrtBL);
   fChain->SetBranchAddress("trkPix_z0_wrtBL", &trkPix_z0_wrtBL, &b_trkPix_z0_wrtBL);
   fChain->SetBranchAddress("trkPix_phi_wrtBL", &trkPix_phi_wrtBL, &b_trkPix_phi_wrtBL);
   fChain->SetBranchAddress("trkPix_d0_err_wrtBL", &trkPix_d0_err_wrtBL, &b_trkPix_d0_err_wrtBL);
   fChain->SetBranchAddress("trkPix_z0_err_wrtBL", &trkPix_z0_err_wrtBL, &b_trkPix_z0_err_wrtBL);
   fChain->SetBranchAddress("trkPix_phi_err_wrtBL", &trkPix_phi_err_wrtBL, &b_trkPix_phi_err_wrtBL);
   fChain->SetBranchAddress("trkPix_theta_err_wrtBL", &trkPix_theta_err_wrtBL, &b_trkPix_theta_err_wrtBL);
   fChain->SetBranchAddress("trkPix_qoverp_err_wrtBL", &trkPix_qoverp_err_wrtBL, &b_trkPix_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkPix_d0_z0_err_wrtBL", &trkPix_d0_z0_err_wrtBL, &b_trkPix_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("trkPix_d0_phi_err_wrtBL", &trkPix_d0_phi_err_wrtBL, &b_trkPix_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkPix_d0_theta_err_wrtBL", &trkPix_d0_theta_err_wrtBL, &b_trkPix_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkPix_d0_qoverp_err_wrtBL", &trkPix_d0_qoverp_err_wrtBL, &b_trkPix_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkPix_z0_phi_err_wrtBL", &trkPix_z0_phi_err_wrtBL, &b_trkPix_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkPix_z0_theta_err_wrtBL", &trkPix_z0_theta_err_wrtBL, &b_trkPix_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkPix_z0_qoverp_err_wrtBL", &trkPix_z0_qoverp_err_wrtBL, &b_trkPix_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkPix_phi_theta_err_wrtBL", &trkPix_phi_theta_err_wrtBL, &b_trkPix_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("trkPix_phi_qoverp_err_wrtBL", &trkPix_phi_qoverp_err_wrtBL, &b_trkPix_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkPix_theta_qoverp_err_wrtBL", &trkPix_theta_qoverp_err_wrtBL, &b_trkPix_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkPix_chi2", &trkPix_chi2, &b_trkPix_chi2);
   fChain->SetBranchAddress("trkPix_ndof", &trkPix_ndof, &b_trkPix_ndof);
   fChain->SetBranchAddress("trkPix_nBLHits", &trkPix_nBLHits, &b_trkPix_nBLHits);
   fChain->SetBranchAddress("trkPix_nPixHits", &trkPix_nPixHits, &b_trkPix_nPixHits);
   fChain->SetBranchAddress("trkPix_nSCTHits", &trkPix_nSCTHits, &b_trkPix_nSCTHits);
   fChain->SetBranchAddress("trkPix_nTRTHits", &trkPix_nTRTHits, &b_trkPix_nTRTHits);
   fChain->SetBranchAddress("trkPix_nTRTHighTHits", &trkPix_nTRTHighTHits, &b_trkPix_nTRTHighTHits);
   fChain->SetBranchAddress("trkPix_nTRTXenonHits", &trkPix_nTRTXenonHits, &b_trkPix_nTRTXenonHits);
   fChain->SetBranchAddress("trkPix_nPixHoles", &trkPix_nPixHoles, &b_trkPix_nPixHoles);
   fChain->SetBranchAddress("trkPix_nSCTHoles", &trkPix_nSCTHoles, &b_trkPix_nSCTHoles);
   fChain->SetBranchAddress("trkPix_nTRTHoles", &trkPix_nTRTHoles, &b_trkPix_nTRTHoles);
   fChain->SetBranchAddress("trkPix_nPixelDeadSensors", &trkPix_nPixelDeadSensors, &b_trkPix_nPixelDeadSensors);
   fChain->SetBranchAddress("trkPix_nSCTDeadSensors", &trkPix_nSCTDeadSensors, &b_trkPix_nSCTDeadSensors);
   fChain->SetBranchAddress("trkPix_nBLSharedHits", &trkPix_nBLSharedHits, &b_trkPix_nBLSharedHits);
   fChain->SetBranchAddress("trkPix_nPixSharedHits", &trkPix_nPixSharedHits, &b_trkPix_nPixSharedHits);
   fChain->SetBranchAddress("trkPix_nSCTSharedHits", &trkPix_nSCTSharedHits, &b_trkPix_nSCTSharedHits);
   fChain->SetBranchAddress("trkPix_nBLayerSplitHits", &trkPix_nBLayerSplitHits, &b_trkPix_nBLayerSplitHits);
   fChain->SetBranchAddress("trkPix_nPixSplitHits", &trkPix_nPixSplitHits, &b_trkPix_nPixSplitHits);
   fChain->SetBranchAddress("trkPix_nBLayerOutliers", &trkPix_nBLayerOutliers, &b_trkPix_nBLayerOutliers);
   fChain->SetBranchAddress("trkPix_nPixelOutliers", &trkPix_nPixelOutliers, &b_trkPix_nPixelOutliers);
   fChain->SetBranchAddress("trkPix_nSCTOutliers", &trkPix_nSCTOutliers, &b_trkPix_nSCTOutliers);
   fChain->SetBranchAddress("trkPix_nTRTOutliers", &trkPix_nTRTOutliers, &b_trkPix_nTRTOutliers);
   fChain->SetBranchAddress("trkPix_nTRTHighTOutliers", &trkPix_nTRTHighTOutliers, &b_trkPix_nTRTHighTOutliers);
   fChain->SetBranchAddress("trkPix_expectBLayerHit", &trkPix_expectBLayerHit, &b_trkPix_expectBLayerHit);
   fChain->SetBranchAddress("trkPix_nHits", &trkPix_nHits, &b_trkPix_nHits);
   fChain->SetBranchAddress("trkPix_nHoles", &trkPix_nHoles, &b_trkPix_nHoles);
   fChain->SetBranchAddress("trkPix_hitPattern", &trkPix_hitPattern, &b_trkPix_hitPattern);
   fChain->SetBranchAddress("trkPix_fitter", &trkPix_fitter, &b_trkPix_fitter);
   fChain->SetBranchAddress("trkPix_patternReco1", &trkPix_patternReco1, &b_trkPix_patternReco1);
   fChain->SetBranchAddress("trkPix_patternReco2", &trkPix_patternReco2, &b_trkPix_patternReco2);
   fChain->SetBranchAddress("trkPix_trackProperties", &trkPix_trackProperties, &b_trkPix_trackProperties);
   fChain->SetBranchAddress("trkPix_particleHypothesis", &trkPix_particleHypothesis, &b_trkPix_particleHypothesis);
   fChain->SetBranchAddress("trkPix_blayerPrediction_x", &trkPix_blayerPrediction_x, &b_trkPix_blayerPrediction_x);
   fChain->SetBranchAddress("trkPix_blayerPrediction_y", &trkPix_blayerPrediction_y, &b_trkPix_blayerPrediction_y);
   fChain->SetBranchAddress("trkPix_blayerPrediction_z", &trkPix_blayerPrediction_z, &b_trkPix_blayerPrediction_z);
   fChain->SetBranchAddress("trkPix_blayerPrediction_locX", &trkPix_blayerPrediction_locX, &b_trkPix_blayerPrediction_locX);
   fChain->SetBranchAddress("trkPix_blayerPrediction_locY", &trkPix_blayerPrediction_locY, &b_trkPix_blayerPrediction_locY);
   fChain->SetBranchAddress("trkPix_blayerPrediction_err_locX", &trkPix_blayerPrediction_err_locX, &b_trkPix_blayerPrediction_err_locX);
   fChain->SetBranchAddress("trkPix_blayerPrediction_err_locY", &trkPix_blayerPrediction_err_locY, &b_trkPix_blayerPrediction_err_locY);
   fChain->SetBranchAddress("trkPix_blayerPrediction_etaDistToEdge", &trkPix_blayerPrediction_etaDistToEdge, &b_trkPix_blayerPrediction_etaDistToEdge);
   fChain->SetBranchAddress("trkPix_blayerPrediction_phiDistToEdge", &trkPix_blayerPrediction_phiDistToEdge, &b_trkPix_blayerPrediction_phiDistToEdge);
   fChain->SetBranchAddress("trkPix_blayerPrediction_detElementId", &trkPix_blayerPrediction_detElementId, &b_trkPix_blayerPrediction_detElementId);
   fChain->SetBranchAddress("trkPix_blayerPrediction_row", &trkPix_blayerPrediction_row, &b_trkPix_blayerPrediction_row);
   fChain->SetBranchAddress("trkPix_blayerPrediction_col", &trkPix_blayerPrediction_col, &b_trkPix_blayerPrediction_col);
   fChain->SetBranchAddress("trkPix_blayerPrediction_type", &trkPix_blayerPrediction_type, &b_trkPix_blayerPrediction_type);
   fChain->SetBranchAddress("trkPix_Pixel_hit_n", &trkPix_Pixel_hit_n, &b_trkPix_Pixel_hit_n);
   fChain->SetBranchAddress("trkPix_Pixel_hit_id", &trkPix_Pixel_hit_id, &b_trkPix_Pixel_hit_id);
   fChain->SetBranchAddress("trkPix_Pixel_hit_detElementId", &trkPix_Pixel_hit_detElementId, &b_trkPix_Pixel_hit_detElementId);
   fChain->SetBranchAddress("trkPix_Pixel_hit_detType", &trkPix_Pixel_hit_detType, &b_trkPix_Pixel_hit_detType);
   fChain->SetBranchAddress("trkPix_Pixel_hit_bec", &trkPix_Pixel_hit_bec, &b_trkPix_Pixel_hit_bec);
   fChain->SetBranchAddress("trkPix_Pixel_hit_layer", &trkPix_Pixel_hit_layer, &b_trkPix_Pixel_hit_layer);
   fChain->SetBranchAddress("trkPix_Pixel_hit_charge", &trkPix_Pixel_hit_charge, &b_trkPix_Pixel_hit_charge);
   fChain->SetBranchAddress("trkPix_Pixel_hit_sizePhi", &trkPix_Pixel_hit_sizePhi, &b_trkPix_Pixel_hit_sizePhi);
   fChain->SetBranchAddress("trkPix_Pixel_hit_sizeZ", &trkPix_Pixel_hit_sizeZ, &b_trkPix_Pixel_hit_sizeZ);
   fChain->SetBranchAddress("trkPix_Pixel_hit_size", &trkPix_Pixel_hit_size, &b_trkPix_Pixel_hit_size);
   fChain->SetBranchAddress("trkPix_Pixel_hit_isFake", &trkPix_Pixel_hit_isFake, &b_trkPix_Pixel_hit_isFake);
   fChain->SetBranchAddress("trkPix_Pixel_hit_isGanged", &trkPix_Pixel_hit_isGanged, &b_trkPix_Pixel_hit_isGanged);
   fChain->SetBranchAddress("trkPix_Pixel_hit_isSplit", &trkPix_Pixel_hit_isSplit, &b_trkPix_Pixel_hit_isSplit);
   fChain->SetBranchAddress("trkPix_Pixel_hit_splitProb1", &trkPix_Pixel_hit_splitProb1, &b_trkPix_Pixel_hit_splitProb1);
   fChain->SetBranchAddress("trkPix_Pixel_hit_splitProb2", &trkPix_Pixel_hit_splitProb2, &b_trkPix_Pixel_hit_splitProb2);
   fChain->SetBranchAddress("trkPix_Pixel_hit_isCompetingRIO", &trkPix_Pixel_hit_isCompetingRIO, &b_trkPix_Pixel_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkPix_Pixel_hit_locX", &trkPix_Pixel_hit_locX, &b_trkPix_Pixel_hit_locX);
   fChain->SetBranchAddress("trkPix_Pixel_hit_locY", &trkPix_Pixel_hit_locY, &b_trkPix_Pixel_hit_locY);
   fChain->SetBranchAddress("trkPix_Pixel_hit_incidencePhi", &trkPix_Pixel_hit_incidencePhi, &b_trkPix_Pixel_hit_incidencePhi);
   fChain->SetBranchAddress("trkPix_Pixel_hit_incidenceTheta", &trkPix_Pixel_hit_incidenceTheta, &b_trkPix_Pixel_hit_incidenceTheta);
   fChain->SetBranchAddress("trkPix_Pixel_hit_err_locX", &trkPix_Pixel_hit_err_locX, &b_trkPix_Pixel_hit_err_locX);
   fChain->SetBranchAddress("trkPix_Pixel_hit_err_locY", &trkPix_Pixel_hit_err_locY, &b_trkPix_Pixel_hit_err_locY);
   fChain->SetBranchAddress("trkPix_Pixel_hit_cov_locXY", &trkPix_Pixel_hit_cov_locXY, &b_trkPix_Pixel_hit_cov_locXY);
   fChain->SetBranchAddress("trkPix_Pixel_hit_x", &trkPix_Pixel_hit_x, &b_trkPix_Pixel_hit_x);
   fChain->SetBranchAddress("trkPix_Pixel_hit_y", &trkPix_Pixel_hit_y, &b_trkPix_Pixel_hit_y);
   fChain->SetBranchAddress("trkPix_Pixel_hit_z", &trkPix_Pixel_hit_z, &b_trkPix_Pixel_hit_z);
   fChain->SetBranchAddress("trkPix_Pixel_hit_trkLocX", &trkPix_Pixel_hit_trkLocX, &b_trkPix_Pixel_hit_trkLocX);
   fChain->SetBranchAddress("trkPix_Pixel_hit_trkLocY", &trkPix_Pixel_hit_trkLocY, &b_trkPix_Pixel_hit_trkLocY);
   fChain->SetBranchAddress("trkPix_Pixel_hit_err_trkLocX", &trkPix_Pixel_hit_err_trkLocX, &b_trkPix_Pixel_hit_err_trkLocX);
   fChain->SetBranchAddress("trkPix_Pixel_hit_err_trkLocY", &trkPix_Pixel_hit_err_trkLocY, &b_trkPix_Pixel_hit_err_trkLocY);
   fChain->SetBranchAddress("trkPix_Pixel_hit_cov_trkLocXY", &trkPix_Pixel_hit_cov_trkLocXY, &b_trkPix_Pixel_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trkPix_Pixel_hit_chi2", &trkPix_Pixel_hit_chi2, &b_trkPix_Pixel_hit_chi2);
   fChain->SetBranchAddress("trkPix_Pixel_hit_ndof", &trkPix_Pixel_hit_ndof, &b_trkPix_Pixel_hit_ndof);
   fChain->SetBranchAddress("trkPix_SCT_hit_n", &trkPix_SCT_hit_n, &b_trkPix_SCT_hit_n);
   fChain->SetBranchAddress("trkPix_SCT_hit_id", &trkPix_SCT_hit_id, &b_trkPix_SCT_hit_id);
   fChain->SetBranchAddress("trkPix_SCT_hit_detElementId", &trkPix_SCT_hit_detElementId, &b_trkPix_SCT_hit_detElementId);
   fChain->SetBranchAddress("trkPix_SCT_hit_detType", &trkPix_SCT_hit_detType, &b_trkPix_SCT_hit_detType);
   fChain->SetBranchAddress("trkPix_SCT_hit_bec", &trkPix_SCT_hit_bec, &b_trkPix_SCT_hit_bec);
   fChain->SetBranchAddress("trkPix_SCT_hit_layer", &trkPix_SCT_hit_layer, &b_trkPix_SCT_hit_layer);
   fChain->SetBranchAddress("trkPix_SCT_hit_sizePhi", &trkPix_SCT_hit_sizePhi, &b_trkPix_SCT_hit_sizePhi);
   fChain->SetBranchAddress("trkPix_SCT_hit_isCompetingRIO", &trkPix_SCT_hit_isCompetingRIO, &b_trkPix_SCT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkPix_SCT_hit_locX", &trkPix_SCT_hit_locX, &b_trkPix_SCT_hit_locX);
   fChain->SetBranchAddress("trkPix_SCT_hit_locY", &trkPix_SCT_hit_locY, &b_trkPix_SCT_hit_locY);
   fChain->SetBranchAddress("trkPix_SCT_hit_incidencePhi", &trkPix_SCT_hit_incidencePhi, &b_trkPix_SCT_hit_incidencePhi);
   fChain->SetBranchAddress("trkPix_SCT_hit_incidenceTheta", &trkPix_SCT_hit_incidenceTheta, &b_trkPix_SCT_hit_incidenceTheta);
   fChain->SetBranchAddress("trkPix_SCT_hit_err_locX", &trkPix_SCT_hit_err_locX, &b_trkPix_SCT_hit_err_locX);
   fChain->SetBranchAddress("trkPix_SCT_hit_err_locY", &trkPix_SCT_hit_err_locY, &b_trkPix_SCT_hit_err_locY);
   fChain->SetBranchAddress("trkPix_SCT_hit_cov_locXY", &trkPix_SCT_hit_cov_locXY, &b_trkPix_SCT_hit_cov_locXY);
   fChain->SetBranchAddress("trkPix_SCT_hit_x", &trkPix_SCT_hit_x, &b_trkPix_SCT_hit_x);
   fChain->SetBranchAddress("trkPix_SCT_hit_y", &trkPix_SCT_hit_y, &b_trkPix_SCT_hit_y);
   fChain->SetBranchAddress("trkPix_SCT_hit_z", &trkPix_SCT_hit_z, &b_trkPix_SCT_hit_z);
   fChain->SetBranchAddress("trkPix_SCT_hit_trkLocX", &trkPix_SCT_hit_trkLocX, &b_trkPix_SCT_hit_trkLocX);
   fChain->SetBranchAddress("trkPix_SCT_hit_trkLocY", &trkPix_SCT_hit_trkLocY, &b_trkPix_SCT_hit_trkLocY);
   fChain->SetBranchAddress("trkPix_SCT_hit_err_trkLocX", &trkPix_SCT_hit_err_trkLocX, &b_trkPix_SCT_hit_err_trkLocX);
   fChain->SetBranchAddress("trkPix_SCT_hit_err_trkLocY", &trkPix_SCT_hit_err_trkLocY, &b_trkPix_SCT_hit_err_trkLocY);
   fChain->SetBranchAddress("trkPix_SCT_hit_cov_trkLocXY", &trkPix_SCT_hit_cov_trkLocXY, &b_trkPix_SCT_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trkPix_SCT_hit_chi2", &trkPix_SCT_hit_chi2, &b_trkPix_SCT_hit_chi2);
   fChain->SetBranchAddress("trkPix_SCT_hit_ndof", &trkPix_SCT_hit_ndof, &b_trkPix_SCT_hit_ndof);
   fChain->SetBranchAddress("trkPix_TRT_hit_n", &trkPix_TRT_hit_n, &b_trkPix_TRT_hit_n);
   fChain->SetBranchAddress("trkPix_TRT_hit_id", &trkPix_TRT_hit_id, &b_trkPix_TRT_hit_id);
   fChain->SetBranchAddress("trkPix_TRT_hit_detElementId", &trkPix_TRT_hit_detElementId, &b_trkPix_TRT_hit_detElementId);
   fChain->SetBranchAddress("trkPix_TRT_hit_detType", &trkPix_TRT_hit_detType, &b_trkPix_TRT_hit_detType);
   fChain->SetBranchAddress("trkPix_TRT_hit_bec", &trkPix_TRT_hit_bec, &b_trkPix_TRT_hit_bec);
   fChain->SetBranchAddress("trkPix_TRT_hit_layer", &trkPix_TRT_hit_layer, &b_trkPix_TRT_hit_layer);
   fChain->SetBranchAddress("trkPix_TRT_hit_isCompetingRIO", &trkPix_TRT_hit_isCompetingRIO, &b_trkPix_TRT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkPix_TRT_hit_locR", &trkPix_TRT_hit_locR, &b_trkPix_TRT_hit_locR);
   fChain->SetBranchAddress("trkPix_TRT_hit_err_locR", &trkPix_TRT_hit_err_locR, &b_trkPix_TRT_hit_err_locR);
   fChain->SetBranchAddress("trkPix_TRT_hit_trkLocR", &trkPix_TRT_hit_trkLocR, &b_trkPix_TRT_hit_trkLocR);
   fChain->SetBranchAddress("trkPix_TRT_hit_trkLocPhi", &trkPix_TRT_hit_trkLocPhi, &b_trkPix_TRT_hit_trkLocPhi);
   fChain->SetBranchAddress("trkPix_TRT_hit_err_trkLocR", &trkPix_TRT_hit_err_trkLocR, &b_trkPix_TRT_hit_err_trkLocR);
   fChain->SetBranchAddress("trkPix_TRT_hit_err_trkLocPhi", &trkPix_TRT_hit_err_trkLocPhi, &b_trkPix_TRT_hit_err_trkLocPhi);
   fChain->SetBranchAddress("trkPix_TRT_hit_cov_trkLocRPhi", &trkPix_TRT_hit_cov_trkLocRPhi, &b_trkPix_TRT_hit_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkPix_TRT_hit_TOT", &trkPix_TRT_hit_TOT, &b_trkPix_TRT_hit_TOT);
   fChain->SetBranchAddress("trkPix_TRT_hit_highLevel", &trkPix_TRT_hit_highLevel, &b_trkPix_TRT_hit_highLevel);
   fChain->SetBranchAddress("trkPix_TRT_hit_trailingEdge", &trkPix_TRT_hit_trailingEdge, &b_trkPix_TRT_hit_trailingEdge);
   fChain->SetBranchAddress("trkPix_TRT_hit_chi2", &trkPix_TRT_hit_chi2, &b_trkPix_TRT_hit_chi2);
   fChain->SetBranchAddress("trkPix_TRT_hit_ndof", &trkPix_TRT_hit_ndof, &b_trkPix_TRT_hit_ndof);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_n", &trkPix_Pixel_outlier_n, &b_trkPix_Pixel_outlier_n);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_id", &trkPix_Pixel_outlier_id, &b_trkPix_Pixel_outlier_id);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_detElementId", &trkPix_Pixel_outlier_detElementId, &b_trkPix_Pixel_outlier_detElementId);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_detType", &trkPix_Pixel_outlier_detType, &b_trkPix_Pixel_outlier_detType);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_bec", &trkPix_Pixel_outlier_bec, &b_trkPix_Pixel_outlier_bec);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_layer", &trkPix_Pixel_outlier_layer, &b_trkPix_Pixel_outlier_layer);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_charge", &trkPix_Pixel_outlier_charge, &b_trkPix_Pixel_outlier_charge);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_sizePhi", &trkPix_Pixel_outlier_sizePhi, &b_trkPix_Pixel_outlier_sizePhi);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_sizeZ", &trkPix_Pixel_outlier_sizeZ, &b_trkPix_Pixel_outlier_sizeZ);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_size", &trkPix_Pixel_outlier_size, &b_trkPix_Pixel_outlier_size);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_isFake", &trkPix_Pixel_outlier_isFake, &b_trkPix_Pixel_outlier_isFake);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_isGanged", &trkPix_Pixel_outlier_isGanged, &b_trkPix_Pixel_outlier_isGanged);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_isSplit", &trkPix_Pixel_outlier_isSplit, &b_trkPix_Pixel_outlier_isSplit);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_splitProb1", &trkPix_Pixel_outlier_splitProb1, &b_trkPix_Pixel_outlier_splitProb1);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_splitProb2", &trkPix_Pixel_outlier_splitProb2, &b_trkPix_Pixel_outlier_splitProb2);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_isCompetingRIO", &trkPix_Pixel_outlier_isCompetingRIO, &b_trkPix_Pixel_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_locX", &trkPix_Pixel_outlier_locX, &b_trkPix_Pixel_outlier_locX);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_locY", &trkPix_Pixel_outlier_locY, &b_trkPix_Pixel_outlier_locY);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_incidencePhi", &trkPix_Pixel_outlier_incidencePhi, &b_trkPix_Pixel_outlier_incidencePhi);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_incidenceTheta", &trkPix_Pixel_outlier_incidenceTheta, &b_trkPix_Pixel_outlier_incidenceTheta);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_err_locX", &trkPix_Pixel_outlier_err_locX, &b_trkPix_Pixel_outlier_err_locX);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_err_locY", &trkPix_Pixel_outlier_err_locY, &b_trkPix_Pixel_outlier_err_locY);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_cov_locXY", &trkPix_Pixel_outlier_cov_locXY, &b_trkPix_Pixel_outlier_cov_locXY);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_x", &trkPix_Pixel_outlier_x, &b_trkPix_Pixel_outlier_x);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_y", &trkPix_Pixel_outlier_y, &b_trkPix_Pixel_outlier_y);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_z", &trkPix_Pixel_outlier_z, &b_trkPix_Pixel_outlier_z);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_trkLocX", &trkPix_Pixel_outlier_trkLocX, &b_trkPix_Pixel_outlier_trkLocX);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_trkLocY", &trkPix_Pixel_outlier_trkLocY, &b_trkPix_Pixel_outlier_trkLocY);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_err_trkLocX", &trkPix_Pixel_outlier_err_trkLocX, &b_trkPix_Pixel_outlier_err_trkLocX);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_err_trkLocY", &trkPix_Pixel_outlier_err_trkLocY, &b_trkPix_Pixel_outlier_err_trkLocY);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_cov_trkLocXY", &trkPix_Pixel_outlier_cov_trkLocXY, &b_trkPix_Pixel_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_chi2", &trkPix_Pixel_outlier_chi2, &b_trkPix_Pixel_outlier_chi2);
   fChain->SetBranchAddress("trkPix_Pixel_outlier_ndof", &trkPix_Pixel_outlier_ndof, &b_trkPix_Pixel_outlier_ndof);
   fChain->SetBranchAddress("trkPix_SCT_outlier_n", &trkPix_SCT_outlier_n, &b_trkPix_SCT_outlier_n);
   fChain->SetBranchAddress("trkPix_SCT_outlier_id", &trkPix_SCT_outlier_id, &b_trkPix_SCT_outlier_id);
   fChain->SetBranchAddress("trkPix_SCT_outlier_detElementId", &trkPix_SCT_outlier_detElementId, &b_trkPix_SCT_outlier_detElementId);
   fChain->SetBranchAddress("trkPix_SCT_outlier_detType", &trkPix_SCT_outlier_detType, &b_trkPix_SCT_outlier_detType);
   fChain->SetBranchAddress("trkPix_SCT_outlier_bec", &trkPix_SCT_outlier_bec, &b_trkPix_SCT_outlier_bec);
   fChain->SetBranchAddress("trkPix_SCT_outlier_layer", &trkPix_SCT_outlier_layer, &b_trkPix_SCT_outlier_layer);
   fChain->SetBranchAddress("trkPix_SCT_outlier_sizePhi", &trkPix_SCT_outlier_sizePhi, &b_trkPix_SCT_outlier_sizePhi);
   fChain->SetBranchAddress("trkPix_SCT_outlier_isCompetingRIO", &trkPix_SCT_outlier_isCompetingRIO, &b_trkPix_SCT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkPix_SCT_outlier_locX", &trkPix_SCT_outlier_locX, &b_trkPix_SCT_outlier_locX);
   fChain->SetBranchAddress("trkPix_SCT_outlier_locY", &trkPix_SCT_outlier_locY, &b_trkPix_SCT_outlier_locY);
   fChain->SetBranchAddress("trkPix_SCT_outlier_incidencePhi", &trkPix_SCT_outlier_incidencePhi, &b_trkPix_SCT_outlier_incidencePhi);
   fChain->SetBranchAddress("trkPix_SCT_outlier_incidenceTheta", &trkPix_SCT_outlier_incidenceTheta, &b_trkPix_SCT_outlier_incidenceTheta);
   fChain->SetBranchAddress("trkPix_SCT_outlier_err_locX", &trkPix_SCT_outlier_err_locX, &b_trkPix_SCT_outlier_err_locX);
   fChain->SetBranchAddress("trkPix_SCT_outlier_err_locY", &trkPix_SCT_outlier_err_locY, &b_trkPix_SCT_outlier_err_locY);
   fChain->SetBranchAddress("trkPix_SCT_outlier_cov_locXY", &trkPix_SCT_outlier_cov_locXY, &b_trkPix_SCT_outlier_cov_locXY);
   fChain->SetBranchAddress("trkPix_SCT_outlier_x", &trkPix_SCT_outlier_x, &b_trkPix_SCT_outlier_x);
   fChain->SetBranchAddress("trkPix_SCT_outlier_y", &trkPix_SCT_outlier_y, &b_trkPix_SCT_outlier_y);
   fChain->SetBranchAddress("trkPix_SCT_outlier_z", &trkPix_SCT_outlier_z, &b_trkPix_SCT_outlier_z);
   fChain->SetBranchAddress("trkPix_SCT_outlier_trkLocX", &trkPix_SCT_outlier_trkLocX, &b_trkPix_SCT_outlier_trkLocX);
   fChain->SetBranchAddress("trkPix_SCT_outlier_trkLocY", &trkPix_SCT_outlier_trkLocY, &b_trkPix_SCT_outlier_trkLocY);
   fChain->SetBranchAddress("trkPix_SCT_outlier_err_trkLocX", &trkPix_SCT_outlier_err_trkLocX, &b_trkPix_SCT_outlier_err_trkLocX);
   fChain->SetBranchAddress("trkPix_SCT_outlier_err_trkLocY", &trkPix_SCT_outlier_err_trkLocY, &b_trkPix_SCT_outlier_err_trkLocY);
   fChain->SetBranchAddress("trkPix_SCT_outlier_cov_trkLocXY", &trkPix_SCT_outlier_cov_trkLocXY, &b_trkPix_SCT_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trkPix_SCT_outlier_chi2", &trkPix_SCT_outlier_chi2, &b_trkPix_SCT_outlier_chi2);
   fChain->SetBranchAddress("trkPix_SCT_outlier_ndof", &trkPix_SCT_outlier_ndof, &b_trkPix_SCT_outlier_ndof);
   fChain->SetBranchAddress("trkPix_TRT_outlier_n", &trkPix_TRT_outlier_n, &b_trkPix_TRT_outlier_n);
   fChain->SetBranchAddress("trkPix_TRT_outlier_id", &trkPix_TRT_outlier_id, &b_trkPix_TRT_outlier_id);
   fChain->SetBranchAddress("trkPix_TRT_outlier_detElementId", &trkPix_TRT_outlier_detElementId, &b_trkPix_TRT_outlier_detElementId);
   fChain->SetBranchAddress("trkPix_TRT_outlier_detType", &trkPix_TRT_outlier_detType, &b_trkPix_TRT_outlier_detType);
   fChain->SetBranchAddress("trkPix_TRT_outlier_bec", &trkPix_TRT_outlier_bec, &b_trkPix_TRT_outlier_bec);
   fChain->SetBranchAddress("trkPix_TRT_outlier_layer", &trkPix_TRT_outlier_layer, &b_trkPix_TRT_outlier_layer);
   fChain->SetBranchAddress("trkPix_TRT_outlier_isCompetingRIO", &trkPix_TRT_outlier_isCompetingRIO, &b_trkPix_TRT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkPix_TRT_outlier_locR", &trkPix_TRT_outlier_locR, &b_trkPix_TRT_outlier_locR);
   fChain->SetBranchAddress("trkPix_TRT_outlier_err_locR", &trkPix_TRT_outlier_err_locR, &b_trkPix_TRT_outlier_err_locR);
   fChain->SetBranchAddress("trkPix_TRT_outlier_trkLocR", &trkPix_TRT_outlier_trkLocR, &b_trkPix_TRT_outlier_trkLocR);
   fChain->SetBranchAddress("trkPix_TRT_outlier_trkLocPhi", &trkPix_TRT_outlier_trkLocPhi, &b_trkPix_TRT_outlier_trkLocPhi);
   fChain->SetBranchAddress("trkPix_TRT_outlier_err_trkLocR", &trkPix_TRT_outlier_err_trkLocR, &b_trkPix_TRT_outlier_err_trkLocR);
   fChain->SetBranchAddress("trkPix_TRT_outlier_err_trkLocPhi", &trkPix_TRT_outlier_err_trkLocPhi, &b_trkPix_TRT_outlier_err_trkLocPhi);
   fChain->SetBranchAddress("trkPix_TRT_outlier_cov_trkLocRPhi", &trkPix_TRT_outlier_cov_trkLocRPhi, &b_trkPix_TRT_outlier_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkPix_TRT_outlier_TOT", &trkPix_TRT_outlier_TOT, &b_trkPix_TRT_outlier_TOT);
   fChain->SetBranchAddress("trkPix_TRT_outlier_highLevel", &trkPix_TRT_outlier_highLevel, &b_trkPix_TRT_outlier_highLevel);
   fChain->SetBranchAddress("trkPix_TRT_outlier_trailingEdge", &trkPix_TRT_outlier_trailingEdge, &b_trkPix_TRT_outlier_trailingEdge);
   fChain->SetBranchAddress("trkPix_TRT_outlier_chi2", &trkPix_TRT_outlier_chi2, &b_trkPix_TRT_outlier_chi2);
   fChain->SetBranchAddress("trkPix_TRT_outlier_ndof", &trkPix_TRT_outlier_ndof, &b_trkPix_TRT_outlier_ndof);
   fChain->SetBranchAddress("trkPix_Pixel_hole_n", &trkPix_Pixel_hole_n, &b_trkPix_Pixel_hole_n);
   fChain->SetBranchAddress("trkPix_Pixel_hole_detElementId", &trkPix_Pixel_hole_detElementId, &b_trkPix_Pixel_hole_detElementId);
   fChain->SetBranchAddress("trkPix_Pixel_hole_bec", &trkPix_Pixel_hole_bec, &b_trkPix_Pixel_hole_bec);
   fChain->SetBranchAddress("trkPix_Pixel_hole_layer", &trkPix_Pixel_hole_layer, &b_trkPix_Pixel_hole_layer);
   fChain->SetBranchAddress("trkPix_Pixel_hole_trkLocX", &trkPix_Pixel_hole_trkLocX, &b_trkPix_Pixel_hole_trkLocX);
   fChain->SetBranchAddress("trkPix_Pixel_hole_trkLocY", &trkPix_Pixel_hole_trkLocY, &b_trkPix_Pixel_hole_trkLocY);
   fChain->SetBranchAddress("trkPix_Pixel_hole_err_trkLocX", &trkPix_Pixel_hole_err_trkLocX, &b_trkPix_Pixel_hole_err_trkLocX);
   fChain->SetBranchAddress("trkPix_Pixel_hole_err_trkLocY", &trkPix_Pixel_hole_err_trkLocY, &b_trkPix_Pixel_hole_err_trkLocY);
   fChain->SetBranchAddress("trkPix_Pixel_hole_cov_trkLocXY", &trkPix_Pixel_hole_cov_trkLocXY, &b_trkPix_Pixel_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trkPix_SCT_hole_n", &trkPix_SCT_hole_n, &b_trkPix_SCT_hole_n);
   fChain->SetBranchAddress("trkPix_SCT_hole_detElementId", &trkPix_SCT_hole_detElementId, &b_trkPix_SCT_hole_detElementId);
   fChain->SetBranchAddress("trkPix_SCT_hole_bec", &trkPix_SCT_hole_bec, &b_trkPix_SCT_hole_bec);
   fChain->SetBranchAddress("trkPix_SCT_hole_layer", &trkPix_SCT_hole_layer, &b_trkPix_SCT_hole_layer);
   fChain->SetBranchAddress("trkPix_SCT_hole_trkLocX", &trkPix_SCT_hole_trkLocX, &b_trkPix_SCT_hole_trkLocX);
   fChain->SetBranchAddress("trkPix_SCT_hole_trkLocY", &trkPix_SCT_hole_trkLocY, &b_trkPix_SCT_hole_trkLocY);
   fChain->SetBranchAddress("trkPix_SCT_hole_err_trkLocX", &trkPix_SCT_hole_err_trkLocX, &b_trkPix_SCT_hole_err_trkLocX);
   fChain->SetBranchAddress("trkPix_SCT_hole_err_trkLocY", &trkPix_SCT_hole_err_trkLocY, &b_trkPix_SCT_hole_err_trkLocY);
   fChain->SetBranchAddress("trkPix_SCT_hole_cov_trkLocXY", &trkPix_SCT_hole_cov_trkLocXY, &b_trkPix_SCT_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trkPix_TRT_hole_n", &trkPix_TRT_hole_n, &b_trkPix_TRT_hole_n);
   fChain->SetBranchAddress("trkPix_TRT_hole_detElementId", &trkPix_TRT_hole_detElementId, &b_trkPix_TRT_hole_detElementId);
   fChain->SetBranchAddress("trkPix_TRT_hole_bec", &trkPix_TRT_hole_bec, &b_trkPix_TRT_hole_bec);
   fChain->SetBranchAddress("trkPix_TRT_hole_layer", &trkPix_TRT_hole_layer, &b_trkPix_TRT_hole_layer);
   fChain->SetBranchAddress("trkPix_TRT_hole_trkLocR", &trkPix_TRT_hole_trkLocR, &b_trkPix_TRT_hole_trkLocR);
   fChain->SetBranchAddress("trkPix_TRT_hole_trkLocPhi", &trkPix_TRT_hole_trkLocPhi, &b_trkPix_TRT_hole_trkLocPhi);
   fChain->SetBranchAddress("trkPix_TRT_hole_err_trkLocR", &trkPix_TRT_hole_err_trkLocR, &b_trkPix_TRT_hole_err_trkLocR);
   fChain->SetBranchAddress("trkPix_TRT_hole_err_trkLocPhi", &trkPix_TRT_hole_err_trkLocPhi, &b_trkPix_TRT_hole_err_trkLocPhi);
   fChain->SetBranchAddress("trkPix_TRT_hole_cov_trkLocRPhi", &trkPix_TRT_hole_cov_trkLocRPhi, &b_trkPix_TRT_hole_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkSCT_n", &trkSCT_n, &b_trkSCT_n);
   fChain->SetBranchAddress("trkSCT_d0", &trkSCT_d0, &b_trkSCT_d0);
   fChain->SetBranchAddress("trkSCT_z0", &trkSCT_z0, &b_trkSCT_z0);
   fChain->SetBranchAddress("trkSCT_phi", &trkSCT_phi, &b_trkSCT_phi);
   fChain->SetBranchAddress("trkSCT_theta", &trkSCT_theta, &b_trkSCT_theta);
   fChain->SetBranchAddress("trkSCT_qoverp", &trkSCT_qoverp, &b_trkSCT_qoverp);
   fChain->SetBranchAddress("trkSCT_pt", &trkSCT_pt, &b_trkSCT_pt);
   fChain->SetBranchAddress("trkSCT_eta", &trkSCT_eta, &b_trkSCT_eta);
   fChain->SetBranchAddress("trkSCT_err_d0", &trkSCT_err_d0, &b_trkSCT_err_d0);
   fChain->SetBranchAddress("trkSCT_err_z0", &trkSCT_err_z0, &b_trkSCT_err_z0);
   fChain->SetBranchAddress("trkSCT_err_phi", &trkSCT_err_phi, &b_trkSCT_err_phi);
   fChain->SetBranchAddress("trkSCT_err_theta", &trkSCT_err_theta, &b_trkSCT_err_theta);
   fChain->SetBranchAddress("trkSCT_err_qoverp", &trkSCT_err_qoverp, &b_trkSCT_err_qoverp);
   fChain->SetBranchAddress("trkSCT_cov_d0_z0", &trkSCT_cov_d0_z0, &b_trkSCT_cov_d0_z0);
   fChain->SetBranchAddress("trkSCT_cov_d0_phi", &trkSCT_cov_d0_phi, &b_trkSCT_cov_d0_phi);
   fChain->SetBranchAddress("trkSCT_cov_d0_theta", &trkSCT_cov_d0_theta, &b_trkSCT_cov_d0_theta);
   fChain->SetBranchAddress("trkSCT_cov_d0_qoverp", &trkSCT_cov_d0_qoverp, &b_trkSCT_cov_d0_qoverp);
   fChain->SetBranchAddress("trkSCT_cov_z0_phi", &trkSCT_cov_z0_phi, &b_trkSCT_cov_z0_phi);
   fChain->SetBranchAddress("trkSCT_cov_z0_theta", &trkSCT_cov_z0_theta, &b_trkSCT_cov_z0_theta);
   fChain->SetBranchAddress("trkSCT_cov_z0_qoverp", &trkSCT_cov_z0_qoverp, &b_trkSCT_cov_z0_qoverp);
   fChain->SetBranchAddress("trkSCT_cov_phi_theta", &trkSCT_cov_phi_theta, &b_trkSCT_cov_phi_theta);
   fChain->SetBranchAddress("trkSCT_cov_phi_qoverp", &trkSCT_cov_phi_qoverp, &b_trkSCT_cov_phi_qoverp);
   fChain->SetBranchAddress("trkSCT_cov_theta_qoverp", &trkSCT_cov_theta_qoverp, &b_trkSCT_cov_theta_qoverp);
   fChain->SetBranchAddress("trkSCT_d0_wrtPV", &trkSCT_d0_wrtPV, &b_trkSCT_d0_wrtPV);
   fChain->SetBranchAddress("trkSCT_z0_wrtPV", &trkSCT_z0_wrtPV, &b_trkSCT_z0_wrtPV);
   fChain->SetBranchAddress("trkSCT_phi_wrtPV", &trkSCT_phi_wrtPV, &b_trkSCT_phi_wrtPV);
   fChain->SetBranchAddress("trkSCT_err_d0_wrtPV", &trkSCT_err_d0_wrtPV, &b_trkSCT_err_d0_wrtPV);
   fChain->SetBranchAddress("trkSCT_err_z0_wrtPV", &trkSCT_err_z0_wrtPV, &b_trkSCT_err_z0_wrtPV);
   fChain->SetBranchAddress("trkSCT_err_phi_wrtPV", &trkSCT_err_phi_wrtPV, &b_trkSCT_err_phi_wrtPV);
   fChain->SetBranchAddress("trkSCT_err_theta_wrtPV", &trkSCT_err_theta_wrtPV, &b_trkSCT_err_theta_wrtPV);
   fChain->SetBranchAddress("trkSCT_err_qoverp_wrtPV", &trkSCT_err_qoverp_wrtPV, &b_trkSCT_err_qoverp_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_d0_z0_wrtPV", &trkSCT_cov_d0_z0_wrtPV, &b_trkSCT_cov_d0_z0_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_d0_phi_wrtPV", &trkSCT_cov_d0_phi_wrtPV, &b_trkSCT_cov_d0_phi_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_d0_theta_wrtPV", &trkSCT_cov_d0_theta_wrtPV, &b_trkSCT_cov_d0_theta_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_d0_qoverp_wrtPV", &trkSCT_cov_d0_qoverp_wrtPV, &b_trkSCT_cov_d0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_z0_phi_wrtPV", &trkSCT_cov_z0_phi_wrtPV, &b_trkSCT_cov_z0_phi_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_z0_theta_wrtPV", &trkSCT_cov_z0_theta_wrtPV, &b_trkSCT_cov_z0_theta_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_z0_qoverp_wrtPV", &trkSCT_cov_z0_qoverp_wrtPV, &b_trkSCT_cov_z0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_phi_theta_wrtPV", &trkSCT_cov_phi_theta_wrtPV, &b_trkSCT_cov_phi_theta_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_phi_qoverp_wrtPV", &trkSCT_cov_phi_qoverp_wrtPV, &b_trkSCT_cov_phi_qoverp_wrtPV);
   fChain->SetBranchAddress("trkSCT_cov_theta_qoverp_wrtPV", &trkSCT_cov_theta_qoverp_wrtPV, &b_trkSCT_cov_theta_qoverp_wrtPV);
   fChain->SetBranchAddress("trkSCT_d0_wrtBS", &trkSCT_d0_wrtBS, &b_trkSCT_d0_wrtBS);
   fChain->SetBranchAddress("trkSCT_z0_wrtBS", &trkSCT_z0_wrtBS, &b_trkSCT_z0_wrtBS);
   fChain->SetBranchAddress("trkSCT_phi_wrtBS", &trkSCT_phi_wrtBS, &b_trkSCT_phi_wrtBS);
   fChain->SetBranchAddress("trkSCT_err_d0_wrtBS", &trkSCT_err_d0_wrtBS, &b_trkSCT_err_d0_wrtBS);
   fChain->SetBranchAddress("trkSCT_err_z0_wrtBS", &trkSCT_err_z0_wrtBS, &b_trkSCT_err_z0_wrtBS);
   fChain->SetBranchAddress("trkSCT_err_phi_wrtBS", &trkSCT_err_phi_wrtBS, &b_trkSCT_err_phi_wrtBS);
   fChain->SetBranchAddress("trkSCT_err_theta_wrtBS", &trkSCT_err_theta_wrtBS, &b_trkSCT_err_theta_wrtBS);
   fChain->SetBranchAddress("trkSCT_err_qoverp_wrtBS", &trkSCT_err_qoverp_wrtBS, &b_trkSCT_err_qoverp_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_d0_z0_wrtBS", &trkSCT_cov_d0_z0_wrtBS, &b_trkSCT_cov_d0_z0_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_d0_phi_wrtBS", &trkSCT_cov_d0_phi_wrtBS, &b_trkSCT_cov_d0_phi_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_d0_theta_wrtBS", &trkSCT_cov_d0_theta_wrtBS, &b_trkSCT_cov_d0_theta_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_d0_qoverp_wrtBS", &trkSCT_cov_d0_qoverp_wrtBS, &b_trkSCT_cov_d0_qoverp_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_z0_phi_wrtBS", &trkSCT_cov_z0_phi_wrtBS, &b_trkSCT_cov_z0_phi_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_z0_theta_wrtBS", &trkSCT_cov_z0_theta_wrtBS, &b_trkSCT_cov_z0_theta_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_z0_qoverp_wrtBS", &trkSCT_cov_z0_qoverp_wrtBS, &b_trkSCT_cov_z0_qoverp_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_phi_theta_wrtBS", &trkSCT_cov_phi_theta_wrtBS, &b_trkSCT_cov_phi_theta_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_phi_qoverp_wrtBS", &trkSCT_cov_phi_qoverp_wrtBS, &b_trkSCT_cov_phi_qoverp_wrtBS);
   fChain->SetBranchAddress("trkSCT_cov_theta_qoverp_wrtBS", &trkSCT_cov_theta_qoverp_wrtBS, &b_trkSCT_cov_theta_qoverp_wrtBS);
   fChain->SetBranchAddress("trkSCT_d0_wrtBL", &trkSCT_d0_wrtBL, &b_trkSCT_d0_wrtBL);
   fChain->SetBranchAddress("trkSCT_z0_wrtBL", &trkSCT_z0_wrtBL, &b_trkSCT_z0_wrtBL);
   fChain->SetBranchAddress("trkSCT_phi_wrtBL", &trkSCT_phi_wrtBL, &b_trkSCT_phi_wrtBL);
   fChain->SetBranchAddress("trkSCT_d0_err_wrtBL", &trkSCT_d0_err_wrtBL, &b_trkSCT_d0_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_z0_err_wrtBL", &trkSCT_z0_err_wrtBL, &b_trkSCT_z0_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_phi_err_wrtBL", &trkSCT_phi_err_wrtBL, &b_trkSCT_phi_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_theta_err_wrtBL", &trkSCT_theta_err_wrtBL, &b_trkSCT_theta_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_qoverp_err_wrtBL", &trkSCT_qoverp_err_wrtBL, &b_trkSCT_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_d0_z0_err_wrtBL", &trkSCT_d0_z0_err_wrtBL, &b_trkSCT_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_d0_phi_err_wrtBL", &trkSCT_d0_phi_err_wrtBL, &b_trkSCT_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_d0_theta_err_wrtBL", &trkSCT_d0_theta_err_wrtBL, &b_trkSCT_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_d0_qoverp_err_wrtBL", &trkSCT_d0_qoverp_err_wrtBL, &b_trkSCT_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_z0_phi_err_wrtBL", &trkSCT_z0_phi_err_wrtBL, &b_trkSCT_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_z0_theta_err_wrtBL", &trkSCT_z0_theta_err_wrtBL, &b_trkSCT_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_z0_qoverp_err_wrtBL", &trkSCT_z0_qoverp_err_wrtBL, &b_trkSCT_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_phi_theta_err_wrtBL", &trkSCT_phi_theta_err_wrtBL, &b_trkSCT_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_phi_qoverp_err_wrtBL", &trkSCT_phi_qoverp_err_wrtBL, &b_trkSCT_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_theta_qoverp_err_wrtBL", &trkSCT_theta_qoverp_err_wrtBL, &b_trkSCT_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkSCT_chi2", &trkSCT_chi2, &b_trkSCT_chi2);
   fChain->SetBranchAddress("trkSCT_ndof", &trkSCT_ndof, &b_trkSCT_ndof);
   fChain->SetBranchAddress("trkSCT_nBLHits", &trkSCT_nBLHits, &b_trkSCT_nBLHits);
   fChain->SetBranchAddress("trkSCT_nPixHits", &trkSCT_nPixHits, &b_trkSCT_nPixHits);
   fChain->SetBranchAddress("trkSCT_nSCTHits", &trkSCT_nSCTHits, &b_trkSCT_nSCTHits);
   fChain->SetBranchAddress("trkSCT_nTRTHits", &trkSCT_nTRTHits, &b_trkSCT_nTRTHits);
   fChain->SetBranchAddress("trkSCT_nTRTHighTHits", &trkSCT_nTRTHighTHits, &b_trkSCT_nTRTHighTHits);
   fChain->SetBranchAddress("trkSCT_nTRTXenonHits", &trkSCT_nTRTXenonHits, &b_trkSCT_nTRTXenonHits);
   fChain->SetBranchAddress("trkSCT_nPixHoles", &trkSCT_nPixHoles, &b_trkSCT_nPixHoles);
   fChain->SetBranchAddress("trkSCT_nSCTHoles", &trkSCT_nSCTHoles, &b_trkSCT_nSCTHoles);
   fChain->SetBranchAddress("trkSCT_nTRTHoles", &trkSCT_nTRTHoles, &b_trkSCT_nTRTHoles);
   fChain->SetBranchAddress("trkSCT_nPixelDeadSensors", &trkSCT_nPixelDeadSensors, &b_trkSCT_nPixelDeadSensors);
   fChain->SetBranchAddress("trkSCT_nSCTDeadSensors", &trkSCT_nSCTDeadSensors, &b_trkSCT_nSCTDeadSensors);
   fChain->SetBranchAddress("trkSCT_nBLSharedHits", &trkSCT_nBLSharedHits, &b_trkSCT_nBLSharedHits);
   fChain->SetBranchAddress("trkSCT_nPixSharedHits", &trkSCT_nPixSharedHits, &b_trkSCT_nPixSharedHits);
   fChain->SetBranchAddress("trkSCT_nSCTSharedHits", &trkSCT_nSCTSharedHits, &b_trkSCT_nSCTSharedHits);
   fChain->SetBranchAddress("trkSCT_nBLayerSplitHits", &trkSCT_nBLayerSplitHits, &b_trkSCT_nBLayerSplitHits);
   fChain->SetBranchAddress("trkSCT_nPixSplitHits", &trkSCT_nPixSplitHits, &b_trkSCT_nPixSplitHits);
   fChain->SetBranchAddress("trkSCT_nBLayerOutliers", &trkSCT_nBLayerOutliers, &b_trkSCT_nBLayerOutliers);
   fChain->SetBranchAddress("trkSCT_nPixelOutliers", &trkSCT_nPixelOutliers, &b_trkSCT_nPixelOutliers);
   fChain->SetBranchAddress("trkSCT_nSCTOutliers", &trkSCT_nSCTOutliers, &b_trkSCT_nSCTOutliers);
   fChain->SetBranchAddress("trkSCT_nTRTOutliers", &trkSCT_nTRTOutliers, &b_trkSCT_nTRTOutliers);
   fChain->SetBranchAddress("trkSCT_nTRTHighTOutliers", &trkSCT_nTRTHighTOutliers, &b_trkSCT_nTRTHighTOutliers);
   fChain->SetBranchAddress("trkSCT_expectBLayerHit", &trkSCT_expectBLayerHit, &b_trkSCT_expectBLayerHit);
   fChain->SetBranchAddress("trkSCT_nHits", &trkSCT_nHits, &b_trkSCT_nHits);
   fChain->SetBranchAddress("trkSCT_nHoles", &trkSCT_nHoles, &b_trkSCT_nHoles);
   fChain->SetBranchAddress("trkSCT_hitPattern", &trkSCT_hitPattern, &b_trkSCT_hitPattern);
   fChain->SetBranchAddress("trkSCT_fitter", &trkSCT_fitter, &b_trkSCT_fitter);
   fChain->SetBranchAddress("trkSCT_patternReco1", &trkSCT_patternReco1, &b_trkSCT_patternReco1);
   fChain->SetBranchAddress("trkSCT_patternReco2", &trkSCT_patternReco2, &b_trkSCT_patternReco2);
   fChain->SetBranchAddress("trkSCT_trackProperties", &trkSCT_trackProperties, &b_trkSCT_trackProperties);
   fChain->SetBranchAddress("trkSCT_particleHypothesis", &trkSCT_particleHypothesis, &b_trkSCT_particleHypothesis);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_x", &trkSCT_blayerPrediction_x, &b_trkSCT_blayerPrediction_x);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_y", &trkSCT_blayerPrediction_y, &b_trkSCT_blayerPrediction_y);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_z", &trkSCT_blayerPrediction_z, &b_trkSCT_blayerPrediction_z);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_locX", &trkSCT_blayerPrediction_locX, &b_trkSCT_blayerPrediction_locX);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_locY", &trkSCT_blayerPrediction_locY, &b_trkSCT_blayerPrediction_locY);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_err_locX", &trkSCT_blayerPrediction_err_locX, &b_trkSCT_blayerPrediction_err_locX);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_err_locY", &trkSCT_blayerPrediction_err_locY, &b_trkSCT_blayerPrediction_err_locY);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_etaDistToEdge", &trkSCT_blayerPrediction_etaDistToEdge, &b_trkSCT_blayerPrediction_etaDistToEdge);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_phiDistToEdge", &trkSCT_blayerPrediction_phiDistToEdge, &b_trkSCT_blayerPrediction_phiDistToEdge);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_detElementId", &trkSCT_blayerPrediction_detElementId, &b_trkSCT_blayerPrediction_detElementId);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_row", &trkSCT_blayerPrediction_row, &b_trkSCT_blayerPrediction_row);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_col", &trkSCT_blayerPrediction_col, &b_trkSCT_blayerPrediction_col);
   fChain->SetBranchAddress("trkSCT_blayerPrediction_type", &trkSCT_blayerPrediction_type, &b_trkSCT_blayerPrediction_type);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_n", &trkSCT_Pixel_hit_n, &b_trkSCT_Pixel_hit_n);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_id", &trkSCT_Pixel_hit_id, &b_trkSCT_Pixel_hit_id);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_detElementId", &trkSCT_Pixel_hit_detElementId, &b_trkSCT_Pixel_hit_detElementId);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_detType", &trkSCT_Pixel_hit_detType, &b_trkSCT_Pixel_hit_detType);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_bec", &trkSCT_Pixel_hit_bec, &b_trkSCT_Pixel_hit_bec);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_layer", &trkSCT_Pixel_hit_layer, &b_trkSCT_Pixel_hit_layer);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_charge", &trkSCT_Pixel_hit_charge, &b_trkSCT_Pixel_hit_charge);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_sizePhi", &trkSCT_Pixel_hit_sizePhi, &b_trkSCT_Pixel_hit_sizePhi);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_sizeZ", &trkSCT_Pixel_hit_sizeZ, &b_trkSCT_Pixel_hit_sizeZ);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_size", &trkSCT_Pixel_hit_size, &b_trkSCT_Pixel_hit_size);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_isFake", &trkSCT_Pixel_hit_isFake, &b_trkSCT_Pixel_hit_isFake);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_isGanged", &trkSCT_Pixel_hit_isGanged, &b_trkSCT_Pixel_hit_isGanged);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_isSplit", &trkSCT_Pixel_hit_isSplit, &b_trkSCT_Pixel_hit_isSplit);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_splitProb1", &trkSCT_Pixel_hit_splitProb1, &b_trkSCT_Pixel_hit_splitProb1);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_splitProb2", &trkSCT_Pixel_hit_splitProb2, &b_trkSCT_Pixel_hit_splitProb2);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_isCompetingRIO", &trkSCT_Pixel_hit_isCompetingRIO, &b_trkSCT_Pixel_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_locX", &trkSCT_Pixel_hit_locX, &b_trkSCT_Pixel_hit_locX);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_locY", &trkSCT_Pixel_hit_locY, &b_trkSCT_Pixel_hit_locY);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_incidencePhi", &trkSCT_Pixel_hit_incidencePhi, &b_trkSCT_Pixel_hit_incidencePhi);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_incidenceTheta", &trkSCT_Pixel_hit_incidenceTheta, &b_trkSCT_Pixel_hit_incidenceTheta);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_err_locX", &trkSCT_Pixel_hit_err_locX, &b_trkSCT_Pixel_hit_err_locX);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_err_locY", &trkSCT_Pixel_hit_err_locY, &b_trkSCT_Pixel_hit_err_locY);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_cov_locXY", &trkSCT_Pixel_hit_cov_locXY, &b_trkSCT_Pixel_hit_cov_locXY);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_x", &trkSCT_Pixel_hit_x, &b_trkSCT_Pixel_hit_x);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_y", &trkSCT_Pixel_hit_y, &b_trkSCT_Pixel_hit_y);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_z", &trkSCT_Pixel_hit_z, &b_trkSCT_Pixel_hit_z);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_trkLocX", &trkSCT_Pixel_hit_trkLocX, &b_trkSCT_Pixel_hit_trkLocX);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_trkLocY", &trkSCT_Pixel_hit_trkLocY, &b_trkSCT_Pixel_hit_trkLocY);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_err_trkLocX", &trkSCT_Pixel_hit_err_trkLocX, &b_trkSCT_Pixel_hit_err_trkLocX);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_err_trkLocY", &trkSCT_Pixel_hit_err_trkLocY, &b_trkSCT_Pixel_hit_err_trkLocY);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_cov_trkLocXY", &trkSCT_Pixel_hit_cov_trkLocXY, &b_trkSCT_Pixel_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_chi2", &trkSCT_Pixel_hit_chi2, &b_trkSCT_Pixel_hit_chi2);
   fChain->SetBranchAddress("trkSCT_Pixel_hit_ndof", &trkSCT_Pixel_hit_ndof, &b_trkSCT_Pixel_hit_ndof);
   fChain->SetBranchAddress("trkSCT_SCT_hit_n", &trkSCT_SCT_hit_n, &b_trkSCT_SCT_hit_n);
   fChain->SetBranchAddress("trkSCT_SCT_hit_id", &trkSCT_SCT_hit_id, &b_trkSCT_SCT_hit_id);
   fChain->SetBranchAddress("trkSCT_SCT_hit_detElementId", &trkSCT_SCT_hit_detElementId, &b_trkSCT_SCT_hit_detElementId);
   fChain->SetBranchAddress("trkSCT_SCT_hit_detType", &trkSCT_SCT_hit_detType, &b_trkSCT_SCT_hit_detType);
   fChain->SetBranchAddress("trkSCT_SCT_hit_bec", &trkSCT_SCT_hit_bec, &b_trkSCT_SCT_hit_bec);
   fChain->SetBranchAddress("trkSCT_SCT_hit_layer", &trkSCT_SCT_hit_layer, &b_trkSCT_SCT_hit_layer);
   fChain->SetBranchAddress("trkSCT_SCT_hit_sizePhi", &trkSCT_SCT_hit_sizePhi, &b_trkSCT_SCT_hit_sizePhi);
   fChain->SetBranchAddress("trkSCT_SCT_hit_isCompetingRIO", &trkSCT_SCT_hit_isCompetingRIO, &b_trkSCT_SCT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkSCT_SCT_hit_locX", &trkSCT_SCT_hit_locX, &b_trkSCT_SCT_hit_locX);
   fChain->SetBranchAddress("trkSCT_SCT_hit_locY", &trkSCT_SCT_hit_locY, &b_trkSCT_SCT_hit_locY);
   fChain->SetBranchAddress("trkSCT_SCT_hit_incidencePhi", &trkSCT_SCT_hit_incidencePhi, &b_trkSCT_SCT_hit_incidencePhi);
   fChain->SetBranchAddress("trkSCT_SCT_hit_incidenceTheta", &trkSCT_SCT_hit_incidenceTheta, &b_trkSCT_SCT_hit_incidenceTheta);
   fChain->SetBranchAddress("trkSCT_SCT_hit_err_locX", &trkSCT_SCT_hit_err_locX, &b_trkSCT_SCT_hit_err_locX);
   fChain->SetBranchAddress("trkSCT_SCT_hit_err_locY", &trkSCT_SCT_hit_err_locY, &b_trkSCT_SCT_hit_err_locY);
   fChain->SetBranchAddress("trkSCT_SCT_hit_cov_locXY", &trkSCT_SCT_hit_cov_locXY, &b_trkSCT_SCT_hit_cov_locXY);
   fChain->SetBranchAddress("trkSCT_SCT_hit_x", &trkSCT_SCT_hit_x, &b_trkSCT_SCT_hit_x);
   fChain->SetBranchAddress("trkSCT_SCT_hit_y", &trkSCT_SCT_hit_y, &b_trkSCT_SCT_hit_y);
   fChain->SetBranchAddress("trkSCT_SCT_hit_z", &trkSCT_SCT_hit_z, &b_trkSCT_SCT_hit_z);
   fChain->SetBranchAddress("trkSCT_SCT_hit_trkLocX", &trkSCT_SCT_hit_trkLocX, &b_trkSCT_SCT_hit_trkLocX);
   fChain->SetBranchAddress("trkSCT_SCT_hit_trkLocY", &trkSCT_SCT_hit_trkLocY, &b_trkSCT_SCT_hit_trkLocY);
   fChain->SetBranchAddress("trkSCT_SCT_hit_err_trkLocX", &trkSCT_SCT_hit_err_trkLocX, &b_trkSCT_SCT_hit_err_trkLocX);
   fChain->SetBranchAddress("trkSCT_SCT_hit_err_trkLocY", &trkSCT_SCT_hit_err_trkLocY, &b_trkSCT_SCT_hit_err_trkLocY);
   fChain->SetBranchAddress("trkSCT_SCT_hit_cov_trkLocXY", &trkSCT_SCT_hit_cov_trkLocXY, &b_trkSCT_SCT_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trkSCT_SCT_hit_chi2", &trkSCT_SCT_hit_chi2, &b_trkSCT_SCT_hit_chi2);
   fChain->SetBranchAddress("trkSCT_SCT_hit_ndof", &trkSCT_SCT_hit_ndof, &b_trkSCT_SCT_hit_ndof);
   fChain->SetBranchAddress("trkSCT_TRT_hit_n", &trkSCT_TRT_hit_n, &b_trkSCT_TRT_hit_n);
   fChain->SetBranchAddress("trkSCT_TRT_hit_id", &trkSCT_TRT_hit_id, &b_trkSCT_TRT_hit_id);
   fChain->SetBranchAddress("trkSCT_TRT_hit_detElementId", &trkSCT_TRT_hit_detElementId, &b_trkSCT_TRT_hit_detElementId);
   fChain->SetBranchAddress("trkSCT_TRT_hit_detType", &trkSCT_TRT_hit_detType, &b_trkSCT_TRT_hit_detType);
   fChain->SetBranchAddress("trkSCT_TRT_hit_bec", &trkSCT_TRT_hit_bec, &b_trkSCT_TRT_hit_bec);
   fChain->SetBranchAddress("trkSCT_TRT_hit_layer", &trkSCT_TRT_hit_layer, &b_trkSCT_TRT_hit_layer);
   fChain->SetBranchAddress("trkSCT_TRT_hit_isCompetingRIO", &trkSCT_TRT_hit_isCompetingRIO, &b_trkSCT_TRT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkSCT_TRT_hit_locR", &trkSCT_TRT_hit_locR, &b_trkSCT_TRT_hit_locR);
   fChain->SetBranchAddress("trkSCT_TRT_hit_err_locR", &trkSCT_TRT_hit_err_locR, &b_trkSCT_TRT_hit_err_locR);
   fChain->SetBranchAddress("trkSCT_TRT_hit_trkLocR", &trkSCT_TRT_hit_trkLocR, &b_trkSCT_TRT_hit_trkLocR);
   fChain->SetBranchAddress("trkSCT_TRT_hit_trkLocPhi", &trkSCT_TRT_hit_trkLocPhi, &b_trkSCT_TRT_hit_trkLocPhi);
   fChain->SetBranchAddress("trkSCT_TRT_hit_err_trkLocR", &trkSCT_TRT_hit_err_trkLocR, &b_trkSCT_TRT_hit_err_trkLocR);
   fChain->SetBranchAddress("trkSCT_TRT_hit_err_trkLocPhi", &trkSCT_TRT_hit_err_trkLocPhi, &b_trkSCT_TRT_hit_err_trkLocPhi);
   fChain->SetBranchAddress("trkSCT_TRT_hit_cov_trkLocRPhi", &trkSCT_TRT_hit_cov_trkLocRPhi, &b_trkSCT_TRT_hit_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkSCT_TRT_hit_TOT", &trkSCT_TRT_hit_TOT, &b_trkSCT_TRT_hit_TOT);
   fChain->SetBranchAddress("trkSCT_TRT_hit_highLevel", &trkSCT_TRT_hit_highLevel, &b_trkSCT_TRT_hit_highLevel);
   fChain->SetBranchAddress("trkSCT_TRT_hit_trailingEdge", &trkSCT_TRT_hit_trailingEdge, &b_trkSCT_TRT_hit_trailingEdge);
   fChain->SetBranchAddress("trkSCT_TRT_hit_chi2", &trkSCT_TRT_hit_chi2, &b_trkSCT_TRT_hit_chi2);
   fChain->SetBranchAddress("trkSCT_TRT_hit_ndof", &trkSCT_TRT_hit_ndof, &b_trkSCT_TRT_hit_ndof);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_n", &trkSCT_Pixel_outlier_n, &b_trkSCT_Pixel_outlier_n);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_id", &trkSCT_Pixel_outlier_id, &b_trkSCT_Pixel_outlier_id);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_detElementId", &trkSCT_Pixel_outlier_detElementId, &b_trkSCT_Pixel_outlier_detElementId);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_detType", &trkSCT_Pixel_outlier_detType, &b_trkSCT_Pixel_outlier_detType);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_bec", &trkSCT_Pixel_outlier_bec, &b_trkSCT_Pixel_outlier_bec);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_layer", &trkSCT_Pixel_outlier_layer, &b_trkSCT_Pixel_outlier_layer);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_charge", &trkSCT_Pixel_outlier_charge, &b_trkSCT_Pixel_outlier_charge);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_sizePhi", &trkSCT_Pixel_outlier_sizePhi, &b_trkSCT_Pixel_outlier_sizePhi);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_sizeZ", &trkSCT_Pixel_outlier_sizeZ, &b_trkSCT_Pixel_outlier_sizeZ);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_size", &trkSCT_Pixel_outlier_size, &b_trkSCT_Pixel_outlier_size);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_isFake", &trkSCT_Pixel_outlier_isFake, &b_trkSCT_Pixel_outlier_isFake);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_isGanged", &trkSCT_Pixel_outlier_isGanged, &b_trkSCT_Pixel_outlier_isGanged);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_isSplit", &trkSCT_Pixel_outlier_isSplit, &b_trkSCT_Pixel_outlier_isSplit);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_splitProb1", &trkSCT_Pixel_outlier_splitProb1, &b_trkSCT_Pixel_outlier_splitProb1);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_splitProb2", &trkSCT_Pixel_outlier_splitProb2, &b_trkSCT_Pixel_outlier_splitProb2);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_isCompetingRIO", &trkSCT_Pixel_outlier_isCompetingRIO, &b_trkSCT_Pixel_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_locX", &trkSCT_Pixel_outlier_locX, &b_trkSCT_Pixel_outlier_locX);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_locY", &trkSCT_Pixel_outlier_locY, &b_trkSCT_Pixel_outlier_locY);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_incidencePhi", &trkSCT_Pixel_outlier_incidencePhi, &b_trkSCT_Pixel_outlier_incidencePhi);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_incidenceTheta", &trkSCT_Pixel_outlier_incidenceTheta, &b_trkSCT_Pixel_outlier_incidenceTheta);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_err_locX", &trkSCT_Pixel_outlier_err_locX, &b_trkSCT_Pixel_outlier_err_locX);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_err_locY", &trkSCT_Pixel_outlier_err_locY, &b_trkSCT_Pixel_outlier_err_locY);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_cov_locXY", &trkSCT_Pixel_outlier_cov_locXY, &b_trkSCT_Pixel_outlier_cov_locXY);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_x", &trkSCT_Pixel_outlier_x, &b_trkSCT_Pixel_outlier_x);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_y", &trkSCT_Pixel_outlier_y, &b_trkSCT_Pixel_outlier_y);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_z", &trkSCT_Pixel_outlier_z, &b_trkSCT_Pixel_outlier_z);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_trkLocX", &trkSCT_Pixel_outlier_trkLocX, &b_trkSCT_Pixel_outlier_trkLocX);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_trkLocY", &trkSCT_Pixel_outlier_trkLocY, &b_trkSCT_Pixel_outlier_trkLocY);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_err_trkLocX", &trkSCT_Pixel_outlier_err_trkLocX, &b_trkSCT_Pixel_outlier_err_trkLocX);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_err_trkLocY", &trkSCT_Pixel_outlier_err_trkLocY, &b_trkSCT_Pixel_outlier_err_trkLocY);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_cov_trkLocXY", &trkSCT_Pixel_outlier_cov_trkLocXY, &b_trkSCT_Pixel_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_chi2", &trkSCT_Pixel_outlier_chi2, &b_trkSCT_Pixel_outlier_chi2);
   fChain->SetBranchAddress("trkSCT_Pixel_outlier_ndof", &trkSCT_Pixel_outlier_ndof, &b_trkSCT_Pixel_outlier_ndof);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_n", &trkSCT_SCT_outlier_n, &b_trkSCT_SCT_outlier_n);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_id", &trkSCT_SCT_outlier_id, &b_trkSCT_SCT_outlier_id);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_detElementId", &trkSCT_SCT_outlier_detElementId, &b_trkSCT_SCT_outlier_detElementId);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_detType", &trkSCT_SCT_outlier_detType, &b_trkSCT_SCT_outlier_detType);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_bec", &trkSCT_SCT_outlier_bec, &b_trkSCT_SCT_outlier_bec);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_layer", &trkSCT_SCT_outlier_layer, &b_trkSCT_SCT_outlier_layer);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_sizePhi", &trkSCT_SCT_outlier_sizePhi, &b_trkSCT_SCT_outlier_sizePhi);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_isCompetingRIO", &trkSCT_SCT_outlier_isCompetingRIO, &b_trkSCT_SCT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_locX", &trkSCT_SCT_outlier_locX, &b_trkSCT_SCT_outlier_locX);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_locY", &trkSCT_SCT_outlier_locY, &b_trkSCT_SCT_outlier_locY);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_incidencePhi", &trkSCT_SCT_outlier_incidencePhi, &b_trkSCT_SCT_outlier_incidencePhi);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_incidenceTheta", &trkSCT_SCT_outlier_incidenceTheta, &b_trkSCT_SCT_outlier_incidenceTheta);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_err_locX", &trkSCT_SCT_outlier_err_locX, &b_trkSCT_SCT_outlier_err_locX);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_err_locY", &trkSCT_SCT_outlier_err_locY, &b_trkSCT_SCT_outlier_err_locY);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_cov_locXY", &trkSCT_SCT_outlier_cov_locXY, &b_trkSCT_SCT_outlier_cov_locXY);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_x", &trkSCT_SCT_outlier_x, &b_trkSCT_SCT_outlier_x);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_y", &trkSCT_SCT_outlier_y, &b_trkSCT_SCT_outlier_y);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_z", &trkSCT_SCT_outlier_z, &b_trkSCT_SCT_outlier_z);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_trkLocX", &trkSCT_SCT_outlier_trkLocX, &b_trkSCT_SCT_outlier_trkLocX);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_trkLocY", &trkSCT_SCT_outlier_trkLocY, &b_trkSCT_SCT_outlier_trkLocY);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_err_trkLocX", &trkSCT_SCT_outlier_err_trkLocX, &b_trkSCT_SCT_outlier_err_trkLocX);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_err_trkLocY", &trkSCT_SCT_outlier_err_trkLocY, &b_trkSCT_SCT_outlier_err_trkLocY);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_cov_trkLocXY", &trkSCT_SCT_outlier_cov_trkLocXY, &b_trkSCT_SCT_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_chi2", &trkSCT_SCT_outlier_chi2, &b_trkSCT_SCT_outlier_chi2);
   fChain->SetBranchAddress("trkSCT_SCT_outlier_ndof", &trkSCT_SCT_outlier_ndof, &b_trkSCT_SCT_outlier_ndof);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_n", &trkSCT_TRT_outlier_n, &b_trkSCT_TRT_outlier_n);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_id", &trkSCT_TRT_outlier_id, &b_trkSCT_TRT_outlier_id);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_detElementId", &trkSCT_TRT_outlier_detElementId, &b_trkSCT_TRT_outlier_detElementId);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_detType", &trkSCT_TRT_outlier_detType, &b_trkSCT_TRT_outlier_detType);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_bec", &trkSCT_TRT_outlier_bec, &b_trkSCT_TRT_outlier_bec);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_layer", &trkSCT_TRT_outlier_layer, &b_trkSCT_TRT_outlier_layer);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_isCompetingRIO", &trkSCT_TRT_outlier_isCompetingRIO, &b_trkSCT_TRT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_locR", &trkSCT_TRT_outlier_locR, &b_trkSCT_TRT_outlier_locR);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_err_locR", &trkSCT_TRT_outlier_err_locR, &b_trkSCT_TRT_outlier_err_locR);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_trkLocR", &trkSCT_TRT_outlier_trkLocR, &b_trkSCT_TRT_outlier_trkLocR);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_trkLocPhi", &trkSCT_TRT_outlier_trkLocPhi, &b_trkSCT_TRT_outlier_trkLocPhi);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_err_trkLocR", &trkSCT_TRT_outlier_err_trkLocR, &b_trkSCT_TRT_outlier_err_trkLocR);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_err_trkLocPhi", &trkSCT_TRT_outlier_err_trkLocPhi, &b_trkSCT_TRT_outlier_err_trkLocPhi);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_cov_trkLocRPhi", &trkSCT_TRT_outlier_cov_trkLocRPhi, &b_trkSCT_TRT_outlier_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_TOT", &trkSCT_TRT_outlier_TOT, &b_trkSCT_TRT_outlier_TOT);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_highLevel", &trkSCT_TRT_outlier_highLevel, &b_trkSCT_TRT_outlier_highLevel);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_trailingEdge", &trkSCT_TRT_outlier_trailingEdge, &b_trkSCT_TRT_outlier_trailingEdge);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_chi2", &trkSCT_TRT_outlier_chi2, &b_trkSCT_TRT_outlier_chi2);
   fChain->SetBranchAddress("trkSCT_TRT_outlier_ndof", &trkSCT_TRT_outlier_ndof, &b_trkSCT_TRT_outlier_ndof);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_n", &trkSCT_Pixel_hole_n, &b_trkSCT_Pixel_hole_n);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_detElementId", &trkSCT_Pixel_hole_detElementId, &b_trkSCT_Pixel_hole_detElementId);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_bec", &trkSCT_Pixel_hole_bec, &b_trkSCT_Pixel_hole_bec);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_layer", &trkSCT_Pixel_hole_layer, &b_trkSCT_Pixel_hole_layer);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_trkLocX", &trkSCT_Pixel_hole_trkLocX, &b_trkSCT_Pixel_hole_trkLocX);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_trkLocY", &trkSCT_Pixel_hole_trkLocY, &b_trkSCT_Pixel_hole_trkLocY);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_err_trkLocX", &trkSCT_Pixel_hole_err_trkLocX, &b_trkSCT_Pixel_hole_err_trkLocX);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_err_trkLocY", &trkSCT_Pixel_hole_err_trkLocY, &b_trkSCT_Pixel_hole_err_trkLocY);
   fChain->SetBranchAddress("trkSCT_Pixel_hole_cov_trkLocXY", &trkSCT_Pixel_hole_cov_trkLocXY, &b_trkSCT_Pixel_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trkSCT_SCT_hole_n", &trkSCT_SCT_hole_n, &b_trkSCT_SCT_hole_n);
   fChain->SetBranchAddress("trkSCT_SCT_hole_detElementId", &trkSCT_SCT_hole_detElementId, &b_trkSCT_SCT_hole_detElementId);
   fChain->SetBranchAddress("trkSCT_SCT_hole_bec", &trkSCT_SCT_hole_bec, &b_trkSCT_SCT_hole_bec);
   fChain->SetBranchAddress("trkSCT_SCT_hole_layer", &trkSCT_SCT_hole_layer, &b_trkSCT_SCT_hole_layer);
   fChain->SetBranchAddress("trkSCT_SCT_hole_trkLocX", &trkSCT_SCT_hole_trkLocX, &b_trkSCT_SCT_hole_trkLocX);
   fChain->SetBranchAddress("trkSCT_SCT_hole_trkLocY", &trkSCT_SCT_hole_trkLocY, &b_trkSCT_SCT_hole_trkLocY);
   fChain->SetBranchAddress("trkSCT_SCT_hole_err_trkLocX", &trkSCT_SCT_hole_err_trkLocX, &b_trkSCT_SCT_hole_err_trkLocX);
   fChain->SetBranchAddress("trkSCT_SCT_hole_err_trkLocY", &trkSCT_SCT_hole_err_trkLocY, &b_trkSCT_SCT_hole_err_trkLocY);
   fChain->SetBranchAddress("trkSCT_SCT_hole_cov_trkLocXY", &trkSCT_SCT_hole_cov_trkLocXY, &b_trkSCT_SCT_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trkSCT_TRT_hole_n", &trkSCT_TRT_hole_n, &b_trkSCT_TRT_hole_n);
   fChain->SetBranchAddress("trkSCT_TRT_hole_detElementId", &trkSCT_TRT_hole_detElementId, &b_trkSCT_TRT_hole_detElementId);
   fChain->SetBranchAddress("trkSCT_TRT_hole_bec", &trkSCT_TRT_hole_bec, &b_trkSCT_TRT_hole_bec);
   fChain->SetBranchAddress("trkSCT_TRT_hole_layer", &trkSCT_TRT_hole_layer, &b_trkSCT_TRT_hole_layer);
   fChain->SetBranchAddress("trkSCT_TRT_hole_trkLocR", &trkSCT_TRT_hole_trkLocR, &b_trkSCT_TRT_hole_trkLocR);
   fChain->SetBranchAddress("trkSCT_TRT_hole_trkLocPhi", &trkSCT_TRT_hole_trkLocPhi, &b_trkSCT_TRT_hole_trkLocPhi);
   fChain->SetBranchAddress("trkSCT_TRT_hole_err_trkLocR", &trkSCT_TRT_hole_err_trkLocR, &b_trkSCT_TRT_hole_err_trkLocR);
   fChain->SetBranchAddress("trkSCT_TRT_hole_err_trkLocPhi", &trkSCT_TRT_hole_err_trkLocPhi, &b_trkSCT_TRT_hole_err_trkLocPhi);
   fChain->SetBranchAddress("trkSCT_TRT_hole_cov_trkLocRPhi", &trkSCT_TRT_hole_cov_trkLocRPhi, &b_trkSCT_TRT_hole_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkTRT_n", &trkTRT_n, &b_trkTRT_n);
   fChain->SetBranchAddress("trkTRT_d0", &trkTRT_d0, &b_trkTRT_d0);
   fChain->SetBranchAddress("trkTRT_z0", &trkTRT_z0, &b_trkTRT_z0);
   fChain->SetBranchAddress("trkTRT_phi", &trkTRT_phi, &b_trkTRT_phi);
   fChain->SetBranchAddress("trkTRT_theta", &trkTRT_theta, &b_trkTRT_theta);
   fChain->SetBranchAddress("trkTRT_qoverp", &trkTRT_qoverp, &b_trkTRT_qoverp);
   fChain->SetBranchAddress("trkTRT_pt", &trkTRT_pt, &b_trkTRT_pt);
   fChain->SetBranchAddress("trkTRT_eta", &trkTRT_eta, &b_trkTRT_eta);
   fChain->SetBranchAddress("trkTRT_err_d0", &trkTRT_err_d0, &b_trkTRT_err_d0);
   fChain->SetBranchAddress("trkTRT_err_z0", &trkTRT_err_z0, &b_trkTRT_err_z0);
   fChain->SetBranchAddress("trkTRT_err_phi", &trkTRT_err_phi, &b_trkTRT_err_phi);
   fChain->SetBranchAddress("trkTRT_err_theta", &trkTRT_err_theta, &b_trkTRT_err_theta);
   fChain->SetBranchAddress("trkTRT_err_qoverp", &trkTRT_err_qoverp, &b_trkTRT_err_qoverp);
   fChain->SetBranchAddress("trkTRT_cov_d0_z0", &trkTRT_cov_d0_z0, &b_trkTRT_cov_d0_z0);
   fChain->SetBranchAddress("trkTRT_cov_d0_phi", &trkTRT_cov_d0_phi, &b_trkTRT_cov_d0_phi);
   fChain->SetBranchAddress("trkTRT_cov_d0_theta", &trkTRT_cov_d0_theta, &b_trkTRT_cov_d0_theta);
   fChain->SetBranchAddress("trkTRT_cov_d0_qoverp", &trkTRT_cov_d0_qoverp, &b_trkTRT_cov_d0_qoverp);
   fChain->SetBranchAddress("trkTRT_cov_z0_phi", &trkTRT_cov_z0_phi, &b_trkTRT_cov_z0_phi);
   fChain->SetBranchAddress("trkTRT_cov_z0_theta", &trkTRT_cov_z0_theta, &b_trkTRT_cov_z0_theta);
   fChain->SetBranchAddress("trkTRT_cov_z0_qoverp", &trkTRT_cov_z0_qoverp, &b_trkTRT_cov_z0_qoverp);
   fChain->SetBranchAddress("trkTRT_cov_phi_theta", &trkTRT_cov_phi_theta, &b_trkTRT_cov_phi_theta);
   fChain->SetBranchAddress("trkTRT_cov_phi_qoverp", &trkTRT_cov_phi_qoverp, &b_trkTRT_cov_phi_qoverp);
   fChain->SetBranchAddress("trkTRT_cov_theta_qoverp", &trkTRT_cov_theta_qoverp, &b_trkTRT_cov_theta_qoverp);
   fChain->SetBranchAddress("trkTRT_d0_wrtPV", &trkTRT_d0_wrtPV, &b_trkTRT_d0_wrtPV);
   fChain->SetBranchAddress("trkTRT_z0_wrtPV", &trkTRT_z0_wrtPV, &b_trkTRT_z0_wrtPV);
   fChain->SetBranchAddress("trkTRT_phi_wrtPV", &trkTRT_phi_wrtPV, &b_trkTRT_phi_wrtPV);
   fChain->SetBranchAddress("trkTRT_err_d0_wrtPV", &trkTRT_err_d0_wrtPV, &b_trkTRT_err_d0_wrtPV);
   fChain->SetBranchAddress("trkTRT_err_z0_wrtPV", &trkTRT_err_z0_wrtPV, &b_trkTRT_err_z0_wrtPV);
   fChain->SetBranchAddress("trkTRT_err_phi_wrtPV", &trkTRT_err_phi_wrtPV, &b_trkTRT_err_phi_wrtPV);
   fChain->SetBranchAddress("trkTRT_err_theta_wrtPV", &trkTRT_err_theta_wrtPV, &b_trkTRT_err_theta_wrtPV);
   fChain->SetBranchAddress("trkTRT_err_qoverp_wrtPV", &trkTRT_err_qoverp_wrtPV, &b_trkTRT_err_qoverp_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_d0_z0_wrtPV", &trkTRT_cov_d0_z0_wrtPV, &b_trkTRT_cov_d0_z0_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_d0_phi_wrtPV", &trkTRT_cov_d0_phi_wrtPV, &b_trkTRT_cov_d0_phi_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_d0_theta_wrtPV", &trkTRT_cov_d0_theta_wrtPV, &b_trkTRT_cov_d0_theta_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_d0_qoverp_wrtPV", &trkTRT_cov_d0_qoverp_wrtPV, &b_trkTRT_cov_d0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_z0_phi_wrtPV", &trkTRT_cov_z0_phi_wrtPV, &b_trkTRT_cov_z0_phi_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_z0_theta_wrtPV", &trkTRT_cov_z0_theta_wrtPV, &b_trkTRT_cov_z0_theta_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_z0_qoverp_wrtPV", &trkTRT_cov_z0_qoverp_wrtPV, &b_trkTRT_cov_z0_qoverp_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_phi_theta_wrtPV", &trkTRT_cov_phi_theta_wrtPV, &b_trkTRT_cov_phi_theta_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_phi_qoverp_wrtPV", &trkTRT_cov_phi_qoverp_wrtPV, &b_trkTRT_cov_phi_qoverp_wrtPV);
   fChain->SetBranchAddress("trkTRT_cov_theta_qoverp_wrtPV", &trkTRT_cov_theta_qoverp_wrtPV, &b_trkTRT_cov_theta_qoverp_wrtPV);
   fChain->SetBranchAddress("trkTRT_d0_wrtBS", &trkTRT_d0_wrtBS, &b_trkTRT_d0_wrtBS);
   fChain->SetBranchAddress("trkTRT_z0_wrtBS", &trkTRT_z0_wrtBS, &b_trkTRT_z0_wrtBS);
   fChain->SetBranchAddress("trkTRT_phi_wrtBS", &trkTRT_phi_wrtBS, &b_trkTRT_phi_wrtBS);
   fChain->SetBranchAddress("trkTRT_err_d0_wrtBS", &trkTRT_err_d0_wrtBS, &b_trkTRT_err_d0_wrtBS);
   fChain->SetBranchAddress("trkTRT_err_z0_wrtBS", &trkTRT_err_z0_wrtBS, &b_trkTRT_err_z0_wrtBS);
   fChain->SetBranchAddress("trkTRT_err_phi_wrtBS", &trkTRT_err_phi_wrtBS, &b_trkTRT_err_phi_wrtBS);
   fChain->SetBranchAddress("trkTRT_err_theta_wrtBS", &trkTRT_err_theta_wrtBS, &b_trkTRT_err_theta_wrtBS);
   fChain->SetBranchAddress("trkTRT_err_qoverp_wrtBS", &trkTRT_err_qoverp_wrtBS, &b_trkTRT_err_qoverp_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_d0_z0_wrtBS", &trkTRT_cov_d0_z0_wrtBS, &b_trkTRT_cov_d0_z0_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_d0_phi_wrtBS", &trkTRT_cov_d0_phi_wrtBS, &b_trkTRT_cov_d0_phi_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_d0_theta_wrtBS", &trkTRT_cov_d0_theta_wrtBS, &b_trkTRT_cov_d0_theta_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_d0_qoverp_wrtBS", &trkTRT_cov_d0_qoverp_wrtBS, &b_trkTRT_cov_d0_qoverp_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_z0_phi_wrtBS", &trkTRT_cov_z0_phi_wrtBS, &b_trkTRT_cov_z0_phi_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_z0_theta_wrtBS", &trkTRT_cov_z0_theta_wrtBS, &b_trkTRT_cov_z0_theta_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_z0_qoverp_wrtBS", &trkTRT_cov_z0_qoverp_wrtBS, &b_trkTRT_cov_z0_qoverp_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_phi_theta_wrtBS", &trkTRT_cov_phi_theta_wrtBS, &b_trkTRT_cov_phi_theta_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_phi_qoverp_wrtBS", &trkTRT_cov_phi_qoverp_wrtBS, &b_trkTRT_cov_phi_qoverp_wrtBS);
   fChain->SetBranchAddress("trkTRT_cov_theta_qoverp_wrtBS", &trkTRT_cov_theta_qoverp_wrtBS, &b_trkTRT_cov_theta_qoverp_wrtBS);
   fChain->SetBranchAddress("trkTRT_d0_wrtBL", &trkTRT_d0_wrtBL, &b_trkTRT_d0_wrtBL);
   fChain->SetBranchAddress("trkTRT_z0_wrtBL", &trkTRT_z0_wrtBL, &b_trkTRT_z0_wrtBL);
   fChain->SetBranchAddress("trkTRT_phi_wrtBL", &trkTRT_phi_wrtBL, &b_trkTRT_phi_wrtBL);
   fChain->SetBranchAddress("trkTRT_d0_err_wrtBL", &trkTRT_d0_err_wrtBL, &b_trkTRT_d0_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_z0_err_wrtBL", &trkTRT_z0_err_wrtBL, &b_trkTRT_z0_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_phi_err_wrtBL", &trkTRT_phi_err_wrtBL, &b_trkTRT_phi_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_theta_err_wrtBL", &trkTRT_theta_err_wrtBL, &b_trkTRT_theta_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_qoverp_err_wrtBL", &trkTRT_qoverp_err_wrtBL, &b_trkTRT_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_d0_z0_err_wrtBL", &trkTRT_d0_z0_err_wrtBL, &b_trkTRT_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_d0_phi_err_wrtBL", &trkTRT_d0_phi_err_wrtBL, &b_trkTRT_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_d0_theta_err_wrtBL", &trkTRT_d0_theta_err_wrtBL, &b_trkTRT_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_d0_qoverp_err_wrtBL", &trkTRT_d0_qoverp_err_wrtBL, &b_trkTRT_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_z0_phi_err_wrtBL", &trkTRT_z0_phi_err_wrtBL, &b_trkTRT_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_z0_theta_err_wrtBL", &trkTRT_z0_theta_err_wrtBL, &b_trkTRT_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_z0_qoverp_err_wrtBL", &trkTRT_z0_qoverp_err_wrtBL, &b_trkTRT_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_phi_theta_err_wrtBL", &trkTRT_phi_theta_err_wrtBL, &b_trkTRT_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_phi_qoverp_err_wrtBL", &trkTRT_phi_qoverp_err_wrtBL, &b_trkTRT_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_theta_qoverp_err_wrtBL", &trkTRT_theta_qoverp_err_wrtBL, &b_trkTRT_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("trkTRT_chi2", &trkTRT_chi2, &b_trkTRT_chi2);
   fChain->SetBranchAddress("trkTRT_ndof", &trkTRT_ndof, &b_trkTRT_ndof);
   fChain->SetBranchAddress("trkTRT_nBLHits", &trkTRT_nBLHits, &b_trkTRT_nBLHits);
   fChain->SetBranchAddress("trkTRT_nPixHits", &trkTRT_nPixHits, &b_trkTRT_nPixHits);
   fChain->SetBranchAddress("trkTRT_nSCTHits", &trkTRT_nSCTHits, &b_trkTRT_nSCTHits);
   fChain->SetBranchAddress("trkTRT_nTRTHits", &trkTRT_nTRTHits, &b_trkTRT_nTRTHits);
   fChain->SetBranchAddress("trkTRT_nTRTHighTHits", &trkTRT_nTRTHighTHits, &b_trkTRT_nTRTHighTHits);
   fChain->SetBranchAddress("trkTRT_nTRTXenonHits", &trkTRT_nTRTXenonHits, &b_trkTRT_nTRTXenonHits);
   fChain->SetBranchAddress("trkTRT_nPixHoles", &trkTRT_nPixHoles, &b_trkTRT_nPixHoles);
   fChain->SetBranchAddress("trkTRT_nSCTHoles", &trkTRT_nSCTHoles, &b_trkTRT_nSCTHoles);
   fChain->SetBranchAddress("trkTRT_nTRTHoles", &trkTRT_nTRTHoles, &b_trkTRT_nTRTHoles);
   fChain->SetBranchAddress("trkTRT_nPixelDeadSensors", &trkTRT_nPixelDeadSensors, &b_trkTRT_nPixelDeadSensors);
   fChain->SetBranchAddress("trkTRT_nSCTDeadSensors", &trkTRT_nSCTDeadSensors, &b_trkTRT_nSCTDeadSensors);
   fChain->SetBranchAddress("trkTRT_nBLSharedHits", &trkTRT_nBLSharedHits, &b_trkTRT_nBLSharedHits);
   fChain->SetBranchAddress("trkTRT_nPixSharedHits", &trkTRT_nPixSharedHits, &b_trkTRT_nPixSharedHits);
   fChain->SetBranchAddress("trkTRT_nSCTSharedHits", &trkTRT_nSCTSharedHits, &b_trkTRT_nSCTSharedHits);
   fChain->SetBranchAddress("trkTRT_nBLayerSplitHits", &trkTRT_nBLayerSplitHits, &b_trkTRT_nBLayerSplitHits);
   fChain->SetBranchAddress("trkTRT_nPixSplitHits", &trkTRT_nPixSplitHits, &b_trkTRT_nPixSplitHits);
   fChain->SetBranchAddress("trkTRT_nBLayerOutliers", &trkTRT_nBLayerOutliers, &b_trkTRT_nBLayerOutliers);
   fChain->SetBranchAddress("trkTRT_nPixelOutliers", &trkTRT_nPixelOutliers, &b_trkTRT_nPixelOutliers);
   fChain->SetBranchAddress("trkTRT_nSCTOutliers", &trkTRT_nSCTOutliers, &b_trkTRT_nSCTOutliers);
   fChain->SetBranchAddress("trkTRT_nTRTOutliers", &trkTRT_nTRTOutliers, &b_trkTRT_nTRTOutliers);
   fChain->SetBranchAddress("trkTRT_nTRTHighTOutliers", &trkTRT_nTRTHighTOutliers, &b_trkTRT_nTRTHighTOutliers);
   fChain->SetBranchAddress("trkTRT_expectBLayerHit", &trkTRT_expectBLayerHit, &b_trkTRT_expectBLayerHit);
   fChain->SetBranchAddress("trkTRT_nHits", &trkTRT_nHits, &b_trkTRT_nHits);
   fChain->SetBranchAddress("trkTRT_nHoles", &trkTRT_nHoles, &b_trkTRT_nHoles);
   fChain->SetBranchAddress("trkTRT_hitPattern", &trkTRT_hitPattern, &b_trkTRT_hitPattern);
   fChain->SetBranchAddress("trkTRT_fitter", &trkTRT_fitter, &b_trkTRT_fitter);
   fChain->SetBranchAddress("trkTRT_patternReco1", &trkTRT_patternReco1, &b_trkTRT_patternReco1);
   fChain->SetBranchAddress("trkTRT_patternReco2", &trkTRT_patternReco2, &b_trkTRT_patternReco2);
   fChain->SetBranchAddress("trkTRT_trackProperties", &trkTRT_trackProperties, &b_trkTRT_trackProperties);
   fChain->SetBranchAddress("trkTRT_particleHypothesis", &trkTRT_particleHypothesis, &b_trkTRT_particleHypothesis);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_x", &trkTRT_blayerPrediction_x, &b_trkTRT_blayerPrediction_x);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_y", &trkTRT_blayerPrediction_y, &b_trkTRT_blayerPrediction_y);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_z", &trkTRT_blayerPrediction_z, &b_trkTRT_blayerPrediction_z);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_locX", &trkTRT_blayerPrediction_locX, &b_trkTRT_blayerPrediction_locX);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_locY", &trkTRT_blayerPrediction_locY, &b_trkTRT_blayerPrediction_locY);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_err_locX", &trkTRT_blayerPrediction_err_locX, &b_trkTRT_blayerPrediction_err_locX);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_err_locY", &trkTRT_blayerPrediction_err_locY, &b_trkTRT_blayerPrediction_err_locY);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_etaDistToEdge", &trkTRT_blayerPrediction_etaDistToEdge, &b_trkTRT_blayerPrediction_etaDistToEdge);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_phiDistToEdge", &trkTRT_blayerPrediction_phiDistToEdge, &b_trkTRT_blayerPrediction_phiDistToEdge);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_detElementId", &trkTRT_blayerPrediction_detElementId, &b_trkTRT_blayerPrediction_detElementId);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_row", &trkTRT_blayerPrediction_row, &b_trkTRT_blayerPrediction_row);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_col", &trkTRT_blayerPrediction_col, &b_trkTRT_blayerPrediction_col);
   fChain->SetBranchAddress("trkTRT_blayerPrediction_type", &trkTRT_blayerPrediction_type, &b_trkTRT_blayerPrediction_type);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_n", &trkTRT_Pixel_hit_n, &b_trkTRT_Pixel_hit_n);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_id", &trkTRT_Pixel_hit_id, &b_trkTRT_Pixel_hit_id);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_detElementId", &trkTRT_Pixel_hit_detElementId, &b_trkTRT_Pixel_hit_detElementId);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_detType", &trkTRT_Pixel_hit_detType, &b_trkTRT_Pixel_hit_detType);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_bec", &trkTRT_Pixel_hit_bec, &b_trkTRT_Pixel_hit_bec);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_layer", &trkTRT_Pixel_hit_layer, &b_trkTRT_Pixel_hit_layer);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_charge", &trkTRT_Pixel_hit_charge, &b_trkTRT_Pixel_hit_charge);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_sizePhi", &trkTRT_Pixel_hit_sizePhi, &b_trkTRT_Pixel_hit_sizePhi);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_sizeZ", &trkTRT_Pixel_hit_sizeZ, &b_trkTRT_Pixel_hit_sizeZ);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_size", &trkTRT_Pixel_hit_size, &b_trkTRT_Pixel_hit_size);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_isFake", &trkTRT_Pixel_hit_isFake, &b_trkTRT_Pixel_hit_isFake);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_isGanged", &trkTRT_Pixel_hit_isGanged, &b_trkTRT_Pixel_hit_isGanged);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_isSplit", &trkTRT_Pixel_hit_isSplit, &b_trkTRT_Pixel_hit_isSplit);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_splitProb1", &trkTRT_Pixel_hit_splitProb1, &b_trkTRT_Pixel_hit_splitProb1);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_splitProb2", &trkTRT_Pixel_hit_splitProb2, &b_trkTRT_Pixel_hit_splitProb2);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_isCompetingRIO", &trkTRT_Pixel_hit_isCompetingRIO, &b_trkTRT_Pixel_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_locX", &trkTRT_Pixel_hit_locX, &b_trkTRT_Pixel_hit_locX);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_locY", &trkTRT_Pixel_hit_locY, &b_trkTRT_Pixel_hit_locY);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_incidencePhi", &trkTRT_Pixel_hit_incidencePhi, &b_trkTRT_Pixel_hit_incidencePhi);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_incidenceTheta", &trkTRT_Pixel_hit_incidenceTheta, &b_trkTRT_Pixel_hit_incidenceTheta);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_err_locX", &trkTRT_Pixel_hit_err_locX, &b_trkTRT_Pixel_hit_err_locX);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_err_locY", &trkTRT_Pixel_hit_err_locY, &b_trkTRT_Pixel_hit_err_locY);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_cov_locXY", &trkTRT_Pixel_hit_cov_locXY, &b_trkTRT_Pixel_hit_cov_locXY);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_x", &trkTRT_Pixel_hit_x, &b_trkTRT_Pixel_hit_x);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_y", &trkTRT_Pixel_hit_y, &b_trkTRT_Pixel_hit_y);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_z", &trkTRT_Pixel_hit_z, &b_trkTRT_Pixel_hit_z);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_trkLocX", &trkTRT_Pixel_hit_trkLocX, &b_trkTRT_Pixel_hit_trkLocX);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_trkLocY", &trkTRT_Pixel_hit_trkLocY, &b_trkTRT_Pixel_hit_trkLocY);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_err_trkLocX", &trkTRT_Pixel_hit_err_trkLocX, &b_trkTRT_Pixel_hit_err_trkLocX);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_err_trkLocY", &trkTRT_Pixel_hit_err_trkLocY, &b_trkTRT_Pixel_hit_err_trkLocY);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_cov_trkLocXY", &trkTRT_Pixel_hit_cov_trkLocXY, &b_trkTRT_Pixel_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_chi2", &trkTRT_Pixel_hit_chi2, &b_trkTRT_Pixel_hit_chi2);
   fChain->SetBranchAddress("trkTRT_Pixel_hit_ndof", &trkTRT_Pixel_hit_ndof, &b_trkTRT_Pixel_hit_ndof);
   fChain->SetBranchAddress("trkTRT_SCT_hit_n", &trkTRT_SCT_hit_n, &b_trkTRT_SCT_hit_n);
   fChain->SetBranchAddress("trkTRT_SCT_hit_id", &trkTRT_SCT_hit_id, &b_trkTRT_SCT_hit_id);
   fChain->SetBranchAddress("trkTRT_SCT_hit_detElementId", &trkTRT_SCT_hit_detElementId, &b_trkTRT_SCT_hit_detElementId);
   fChain->SetBranchAddress("trkTRT_SCT_hit_detType", &trkTRT_SCT_hit_detType, &b_trkTRT_SCT_hit_detType);
   fChain->SetBranchAddress("trkTRT_SCT_hit_bec", &trkTRT_SCT_hit_bec, &b_trkTRT_SCT_hit_bec);
   fChain->SetBranchAddress("trkTRT_SCT_hit_layer", &trkTRT_SCT_hit_layer, &b_trkTRT_SCT_hit_layer);
   fChain->SetBranchAddress("trkTRT_SCT_hit_sizePhi", &trkTRT_SCT_hit_sizePhi, &b_trkTRT_SCT_hit_sizePhi);
   fChain->SetBranchAddress("trkTRT_SCT_hit_isCompetingRIO", &trkTRT_SCT_hit_isCompetingRIO, &b_trkTRT_SCT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkTRT_SCT_hit_locX", &trkTRT_SCT_hit_locX, &b_trkTRT_SCT_hit_locX);
   fChain->SetBranchAddress("trkTRT_SCT_hit_locY", &trkTRT_SCT_hit_locY, &b_trkTRT_SCT_hit_locY);
   fChain->SetBranchAddress("trkTRT_SCT_hit_incidencePhi", &trkTRT_SCT_hit_incidencePhi, &b_trkTRT_SCT_hit_incidencePhi);
   fChain->SetBranchAddress("trkTRT_SCT_hit_incidenceTheta", &trkTRT_SCT_hit_incidenceTheta, &b_trkTRT_SCT_hit_incidenceTheta);
   fChain->SetBranchAddress("trkTRT_SCT_hit_err_locX", &trkTRT_SCT_hit_err_locX, &b_trkTRT_SCT_hit_err_locX);
   fChain->SetBranchAddress("trkTRT_SCT_hit_err_locY", &trkTRT_SCT_hit_err_locY, &b_trkTRT_SCT_hit_err_locY);
   fChain->SetBranchAddress("trkTRT_SCT_hit_cov_locXY", &trkTRT_SCT_hit_cov_locXY, &b_trkTRT_SCT_hit_cov_locXY);
   fChain->SetBranchAddress("trkTRT_SCT_hit_x", &trkTRT_SCT_hit_x, &b_trkTRT_SCT_hit_x);
   fChain->SetBranchAddress("trkTRT_SCT_hit_y", &trkTRT_SCT_hit_y, &b_trkTRT_SCT_hit_y);
   fChain->SetBranchAddress("trkTRT_SCT_hit_z", &trkTRT_SCT_hit_z, &b_trkTRT_SCT_hit_z);
   fChain->SetBranchAddress("trkTRT_SCT_hit_trkLocX", &trkTRT_SCT_hit_trkLocX, &b_trkTRT_SCT_hit_trkLocX);
   fChain->SetBranchAddress("trkTRT_SCT_hit_trkLocY", &trkTRT_SCT_hit_trkLocY, &b_trkTRT_SCT_hit_trkLocY);
   fChain->SetBranchAddress("trkTRT_SCT_hit_err_trkLocX", &trkTRT_SCT_hit_err_trkLocX, &b_trkTRT_SCT_hit_err_trkLocX);
   fChain->SetBranchAddress("trkTRT_SCT_hit_err_trkLocY", &trkTRT_SCT_hit_err_trkLocY, &b_trkTRT_SCT_hit_err_trkLocY);
   fChain->SetBranchAddress("trkTRT_SCT_hit_cov_trkLocXY", &trkTRT_SCT_hit_cov_trkLocXY, &b_trkTRT_SCT_hit_cov_trkLocXY);
   fChain->SetBranchAddress("trkTRT_SCT_hit_chi2", &trkTRT_SCT_hit_chi2, &b_trkTRT_SCT_hit_chi2);
   fChain->SetBranchAddress("trkTRT_SCT_hit_ndof", &trkTRT_SCT_hit_ndof, &b_trkTRT_SCT_hit_ndof);
   fChain->SetBranchAddress("trkTRT_TRT_hit_n", &trkTRT_TRT_hit_n, &b_trkTRT_TRT_hit_n);
   fChain->SetBranchAddress("trkTRT_TRT_hit_id", &trkTRT_TRT_hit_id, &b_trkTRT_TRT_hit_id);
   fChain->SetBranchAddress("trkTRT_TRT_hit_detElementId", &trkTRT_TRT_hit_detElementId, &b_trkTRT_TRT_hit_detElementId);
   fChain->SetBranchAddress("trkTRT_TRT_hit_detType", &trkTRT_TRT_hit_detType, &b_trkTRT_TRT_hit_detType);
   fChain->SetBranchAddress("trkTRT_TRT_hit_bec", &trkTRT_TRT_hit_bec, &b_trkTRT_TRT_hit_bec);
   fChain->SetBranchAddress("trkTRT_TRT_hit_layer", &trkTRT_TRT_hit_layer, &b_trkTRT_TRT_hit_layer);
   fChain->SetBranchAddress("trkTRT_TRT_hit_isCompetingRIO", &trkTRT_TRT_hit_isCompetingRIO, &b_trkTRT_TRT_hit_isCompetingRIO);
   fChain->SetBranchAddress("trkTRT_TRT_hit_locR", &trkTRT_TRT_hit_locR, &b_trkTRT_TRT_hit_locR);
   fChain->SetBranchAddress("trkTRT_TRT_hit_err_locR", &trkTRT_TRT_hit_err_locR, &b_trkTRT_TRT_hit_err_locR);
   fChain->SetBranchAddress("trkTRT_TRT_hit_trkLocR", &trkTRT_TRT_hit_trkLocR, &b_trkTRT_TRT_hit_trkLocR);
   fChain->SetBranchAddress("trkTRT_TRT_hit_trkLocPhi", &trkTRT_TRT_hit_trkLocPhi, &b_trkTRT_TRT_hit_trkLocPhi);
   fChain->SetBranchAddress("trkTRT_TRT_hit_err_trkLocR", &trkTRT_TRT_hit_err_trkLocR, &b_trkTRT_TRT_hit_err_trkLocR);
   fChain->SetBranchAddress("trkTRT_TRT_hit_err_trkLocPhi", &trkTRT_TRT_hit_err_trkLocPhi, &b_trkTRT_TRT_hit_err_trkLocPhi);
   fChain->SetBranchAddress("trkTRT_TRT_hit_cov_trkLocRPhi", &trkTRT_TRT_hit_cov_trkLocRPhi, &b_trkTRT_TRT_hit_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkTRT_TRT_hit_TOT", &trkTRT_TRT_hit_TOT, &b_trkTRT_TRT_hit_TOT);
   fChain->SetBranchAddress("trkTRT_TRT_hit_highLevel", &trkTRT_TRT_hit_highLevel, &b_trkTRT_TRT_hit_highLevel);
   fChain->SetBranchAddress("trkTRT_TRT_hit_trailingEdge", &trkTRT_TRT_hit_trailingEdge, &b_trkTRT_TRT_hit_trailingEdge);
   fChain->SetBranchAddress("trkTRT_TRT_hit_chi2", &trkTRT_TRT_hit_chi2, &b_trkTRT_TRT_hit_chi2);
   fChain->SetBranchAddress("trkTRT_TRT_hit_ndof", &trkTRT_TRT_hit_ndof, &b_trkTRT_TRT_hit_ndof);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_n", &trkTRT_Pixel_outlier_n, &b_trkTRT_Pixel_outlier_n);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_id", &trkTRT_Pixel_outlier_id, &b_trkTRT_Pixel_outlier_id);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_detElementId", &trkTRT_Pixel_outlier_detElementId, &b_trkTRT_Pixel_outlier_detElementId);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_detType", &trkTRT_Pixel_outlier_detType, &b_trkTRT_Pixel_outlier_detType);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_bec", &trkTRT_Pixel_outlier_bec, &b_trkTRT_Pixel_outlier_bec);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_layer", &trkTRT_Pixel_outlier_layer, &b_trkTRT_Pixel_outlier_layer);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_charge", &trkTRT_Pixel_outlier_charge, &b_trkTRT_Pixel_outlier_charge);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_sizePhi", &trkTRT_Pixel_outlier_sizePhi, &b_trkTRT_Pixel_outlier_sizePhi);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_sizeZ", &trkTRT_Pixel_outlier_sizeZ, &b_trkTRT_Pixel_outlier_sizeZ);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_size", &trkTRT_Pixel_outlier_size, &b_trkTRT_Pixel_outlier_size);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_isFake", &trkTRT_Pixel_outlier_isFake, &b_trkTRT_Pixel_outlier_isFake);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_isGanged", &trkTRT_Pixel_outlier_isGanged, &b_trkTRT_Pixel_outlier_isGanged);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_isSplit", &trkTRT_Pixel_outlier_isSplit, &b_trkTRT_Pixel_outlier_isSplit);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_splitProb1", &trkTRT_Pixel_outlier_splitProb1, &b_trkTRT_Pixel_outlier_splitProb1);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_splitProb2", &trkTRT_Pixel_outlier_splitProb2, &b_trkTRT_Pixel_outlier_splitProb2);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_isCompetingRIO", &trkTRT_Pixel_outlier_isCompetingRIO, &b_trkTRT_Pixel_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_locX", &trkTRT_Pixel_outlier_locX, &b_trkTRT_Pixel_outlier_locX);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_locY", &trkTRT_Pixel_outlier_locY, &b_trkTRT_Pixel_outlier_locY);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_incidencePhi", &trkTRT_Pixel_outlier_incidencePhi, &b_trkTRT_Pixel_outlier_incidencePhi);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_incidenceTheta", &trkTRT_Pixel_outlier_incidenceTheta, &b_trkTRT_Pixel_outlier_incidenceTheta);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_err_locX", &trkTRT_Pixel_outlier_err_locX, &b_trkTRT_Pixel_outlier_err_locX);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_err_locY", &trkTRT_Pixel_outlier_err_locY, &b_trkTRT_Pixel_outlier_err_locY);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_cov_locXY", &trkTRT_Pixel_outlier_cov_locXY, &b_trkTRT_Pixel_outlier_cov_locXY);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_x", &trkTRT_Pixel_outlier_x, &b_trkTRT_Pixel_outlier_x);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_y", &trkTRT_Pixel_outlier_y, &b_trkTRT_Pixel_outlier_y);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_z", &trkTRT_Pixel_outlier_z, &b_trkTRT_Pixel_outlier_z);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_trkLocX", &trkTRT_Pixel_outlier_trkLocX, &b_trkTRT_Pixel_outlier_trkLocX);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_trkLocY", &trkTRT_Pixel_outlier_trkLocY, &b_trkTRT_Pixel_outlier_trkLocY);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_err_trkLocX", &trkTRT_Pixel_outlier_err_trkLocX, &b_trkTRT_Pixel_outlier_err_trkLocX);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_err_trkLocY", &trkTRT_Pixel_outlier_err_trkLocY, &b_trkTRT_Pixel_outlier_err_trkLocY);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_cov_trkLocXY", &trkTRT_Pixel_outlier_cov_trkLocXY, &b_trkTRT_Pixel_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_chi2", &trkTRT_Pixel_outlier_chi2, &b_trkTRT_Pixel_outlier_chi2);
   fChain->SetBranchAddress("trkTRT_Pixel_outlier_ndof", &trkTRT_Pixel_outlier_ndof, &b_trkTRT_Pixel_outlier_ndof);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_n", &trkTRT_SCT_outlier_n, &b_trkTRT_SCT_outlier_n);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_id", &trkTRT_SCT_outlier_id, &b_trkTRT_SCT_outlier_id);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_detElementId", &trkTRT_SCT_outlier_detElementId, &b_trkTRT_SCT_outlier_detElementId);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_detType", &trkTRT_SCT_outlier_detType, &b_trkTRT_SCT_outlier_detType);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_bec", &trkTRT_SCT_outlier_bec, &b_trkTRT_SCT_outlier_bec);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_layer", &trkTRT_SCT_outlier_layer, &b_trkTRT_SCT_outlier_layer);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_sizePhi", &trkTRT_SCT_outlier_sizePhi, &b_trkTRT_SCT_outlier_sizePhi);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_isCompetingRIO", &trkTRT_SCT_outlier_isCompetingRIO, &b_trkTRT_SCT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_locX", &trkTRT_SCT_outlier_locX, &b_trkTRT_SCT_outlier_locX);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_locY", &trkTRT_SCT_outlier_locY, &b_trkTRT_SCT_outlier_locY);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_incidencePhi", &trkTRT_SCT_outlier_incidencePhi, &b_trkTRT_SCT_outlier_incidencePhi);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_incidenceTheta", &trkTRT_SCT_outlier_incidenceTheta, &b_trkTRT_SCT_outlier_incidenceTheta);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_err_locX", &trkTRT_SCT_outlier_err_locX, &b_trkTRT_SCT_outlier_err_locX);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_err_locY", &trkTRT_SCT_outlier_err_locY, &b_trkTRT_SCT_outlier_err_locY);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_cov_locXY", &trkTRT_SCT_outlier_cov_locXY, &b_trkTRT_SCT_outlier_cov_locXY);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_x", &trkTRT_SCT_outlier_x, &b_trkTRT_SCT_outlier_x);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_y", &trkTRT_SCT_outlier_y, &b_trkTRT_SCT_outlier_y);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_z", &trkTRT_SCT_outlier_z, &b_trkTRT_SCT_outlier_z);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_trkLocX", &trkTRT_SCT_outlier_trkLocX, &b_trkTRT_SCT_outlier_trkLocX);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_trkLocY", &trkTRT_SCT_outlier_trkLocY, &b_trkTRT_SCT_outlier_trkLocY);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_err_trkLocX", &trkTRT_SCT_outlier_err_trkLocX, &b_trkTRT_SCT_outlier_err_trkLocX);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_err_trkLocY", &trkTRT_SCT_outlier_err_trkLocY, &b_trkTRT_SCT_outlier_err_trkLocY);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_cov_trkLocXY", &trkTRT_SCT_outlier_cov_trkLocXY, &b_trkTRT_SCT_outlier_cov_trkLocXY);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_chi2", &trkTRT_SCT_outlier_chi2, &b_trkTRT_SCT_outlier_chi2);
   fChain->SetBranchAddress("trkTRT_SCT_outlier_ndof", &trkTRT_SCT_outlier_ndof, &b_trkTRT_SCT_outlier_ndof);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_n", &trkTRT_TRT_outlier_n, &b_trkTRT_TRT_outlier_n);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_id", &trkTRT_TRT_outlier_id, &b_trkTRT_TRT_outlier_id);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_detElementId", &trkTRT_TRT_outlier_detElementId, &b_trkTRT_TRT_outlier_detElementId);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_detType", &trkTRT_TRT_outlier_detType, &b_trkTRT_TRT_outlier_detType);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_bec", &trkTRT_TRT_outlier_bec, &b_trkTRT_TRT_outlier_bec);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_layer", &trkTRT_TRT_outlier_layer, &b_trkTRT_TRT_outlier_layer);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_isCompetingRIO", &trkTRT_TRT_outlier_isCompetingRIO, &b_trkTRT_TRT_outlier_isCompetingRIO);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_locR", &trkTRT_TRT_outlier_locR, &b_trkTRT_TRT_outlier_locR);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_err_locR", &trkTRT_TRT_outlier_err_locR, &b_trkTRT_TRT_outlier_err_locR);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_trkLocR", &trkTRT_TRT_outlier_trkLocR, &b_trkTRT_TRT_outlier_trkLocR);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_trkLocPhi", &trkTRT_TRT_outlier_trkLocPhi, &b_trkTRT_TRT_outlier_trkLocPhi);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_err_trkLocR", &trkTRT_TRT_outlier_err_trkLocR, &b_trkTRT_TRT_outlier_err_trkLocR);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_err_trkLocPhi", &trkTRT_TRT_outlier_err_trkLocPhi, &b_trkTRT_TRT_outlier_err_trkLocPhi);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_cov_trkLocRPhi", &trkTRT_TRT_outlier_cov_trkLocRPhi, &b_trkTRT_TRT_outlier_cov_trkLocRPhi);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_TOT", &trkTRT_TRT_outlier_TOT, &b_trkTRT_TRT_outlier_TOT);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_highLevel", &trkTRT_TRT_outlier_highLevel, &b_trkTRT_TRT_outlier_highLevel);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_trailingEdge", &trkTRT_TRT_outlier_trailingEdge, &b_trkTRT_TRT_outlier_trailingEdge);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_chi2", &trkTRT_TRT_outlier_chi2, &b_trkTRT_TRT_outlier_chi2);
   fChain->SetBranchAddress("trkTRT_TRT_outlier_ndof", &trkTRT_TRT_outlier_ndof, &b_trkTRT_TRT_outlier_ndof);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_n", &trkTRT_Pixel_hole_n, &b_trkTRT_Pixel_hole_n);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_detElementId", &trkTRT_Pixel_hole_detElementId, &b_trkTRT_Pixel_hole_detElementId);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_bec", &trkTRT_Pixel_hole_bec, &b_trkTRT_Pixel_hole_bec);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_layer", &trkTRT_Pixel_hole_layer, &b_trkTRT_Pixel_hole_layer);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_trkLocX", &trkTRT_Pixel_hole_trkLocX, &b_trkTRT_Pixel_hole_trkLocX);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_trkLocY", &trkTRT_Pixel_hole_trkLocY, &b_trkTRT_Pixel_hole_trkLocY);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_err_trkLocX", &trkTRT_Pixel_hole_err_trkLocX, &b_trkTRT_Pixel_hole_err_trkLocX);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_err_trkLocY", &trkTRT_Pixel_hole_err_trkLocY, &b_trkTRT_Pixel_hole_err_trkLocY);
   fChain->SetBranchAddress("trkTRT_Pixel_hole_cov_trkLocXY", &trkTRT_Pixel_hole_cov_trkLocXY, &b_trkTRT_Pixel_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trkTRT_SCT_hole_n", &trkTRT_SCT_hole_n, &b_trkTRT_SCT_hole_n);
   fChain->SetBranchAddress("trkTRT_SCT_hole_detElementId", &trkTRT_SCT_hole_detElementId, &b_trkTRT_SCT_hole_detElementId);
   fChain->SetBranchAddress("trkTRT_SCT_hole_bec", &trkTRT_SCT_hole_bec, &b_trkTRT_SCT_hole_bec);
   fChain->SetBranchAddress("trkTRT_SCT_hole_layer", &trkTRT_SCT_hole_layer, &b_trkTRT_SCT_hole_layer);
   fChain->SetBranchAddress("trkTRT_SCT_hole_trkLocX", &trkTRT_SCT_hole_trkLocX, &b_trkTRT_SCT_hole_trkLocX);
   fChain->SetBranchAddress("trkTRT_SCT_hole_trkLocY", &trkTRT_SCT_hole_trkLocY, &b_trkTRT_SCT_hole_trkLocY);
   fChain->SetBranchAddress("trkTRT_SCT_hole_err_trkLocX", &trkTRT_SCT_hole_err_trkLocX, &b_trkTRT_SCT_hole_err_trkLocX);
   fChain->SetBranchAddress("trkTRT_SCT_hole_err_trkLocY", &trkTRT_SCT_hole_err_trkLocY, &b_trkTRT_SCT_hole_err_trkLocY);
   fChain->SetBranchAddress("trkTRT_SCT_hole_cov_trkLocXY", &trkTRT_SCT_hole_cov_trkLocXY, &b_trkTRT_SCT_hole_cov_trkLocXY);
   fChain->SetBranchAddress("trkTRT_TRT_hole_n", &trkTRT_TRT_hole_n, &b_trkTRT_TRT_hole_n);
   fChain->SetBranchAddress("trkTRT_TRT_hole_detElementId", &trkTRT_TRT_hole_detElementId, &b_trkTRT_TRT_hole_detElementId);
   fChain->SetBranchAddress("trkTRT_TRT_hole_bec", &trkTRT_TRT_hole_bec, &b_trkTRT_TRT_hole_bec);
   fChain->SetBranchAddress("trkTRT_TRT_hole_layer", &trkTRT_TRT_hole_layer, &b_trkTRT_TRT_hole_layer);
   fChain->SetBranchAddress("trkTRT_TRT_hole_trkLocR", &trkTRT_TRT_hole_trkLocR, &b_trkTRT_TRT_hole_trkLocR);
   fChain->SetBranchAddress("trkTRT_TRT_hole_trkLocPhi", &trkTRT_TRT_hole_trkLocPhi, &b_trkTRT_TRT_hole_trkLocPhi);
   fChain->SetBranchAddress("trkTRT_TRT_hole_err_trkLocR", &trkTRT_TRT_hole_err_trkLocR, &b_trkTRT_TRT_hole_err_trkLocR);
   fChain->SetBranchAddress("trkTRT_TRT_hole_err_trkLocPhi", &trkTRT_TRT_hole_err_trkLocPhi, &b_trkTRT_TRT_hole_err_trkLocPhi);
   fChain->SetBranchAddress("trkTRT_TRT_hole_cov_trkLocRPhi", &trkTRT_TRT_hole_cov_trkLocRPhi, &b_trkTRT_TRT_hole_cov_trkLocRPhi);
   fChain->SetBranchAddress("AntiKt4TopoEM_n", &AntiKt4TopoEM_n, &b_AntiKt4TopoEM_n);
   fChain->SetBranchAddress("AntiKt4TopoEM_E", &AntiKt4TopoEM_E, &b_AntiKt4TopoEM_E);
   fChain->SetBranchAddress("AntiKt4TopoEM_pt", &AntiKt4TopoEM_pt, &b_AntiKt4TopoEM_pt);
   fChain->SetBranchAddress("AntiKt4TopoEM_m", &AntiKt4TopoEM_m, &b_AntiKt4TopoEM_m);
   fChain->SetBranchAddress("AntiKt4TopoEM_eta", &AntiKt4TopoEM_eta, &b_AntiKt4TopoEM_eta);
   fChain->SetBranchAddress("AntiKt4TopoEM_phi", &AntiKt4TopoEM_phi, &b_AntiKt4TopoEM_phi);
   fChain->SetBranchAddress("AntiKt4TopoEM_EtaOrigin", &AntiKt4TopoEM_EtaOrigin, &b_AntiKt4TopoEM_EtaOrigin);
   fChain->SetBranchAddress("AntiKt4TopoEM_PhiOrigin", &AntiKt4TopoEM_PhiOrigin, &b_AntiKt4TopoEM_PhiOrigin);
   fChain->SetBranchAddress("AntiKt4TopoEM_MOrigin", &AntiKt4TopoEM_MOrigin, &b_AntiKt4TopoEM_MOrigin);
   fChain->SetBranchAddress("AntiKt4TopoEM_EtaOriginEM", &AntiKt4TopoEM_EtaOriginEM, &b_AntiKt4TopoEM_EtaOriginEM);
   fChain->SetBranchAddress("AntiKt4TopoEM_PhiOriginEM", &AntiKt4TopoEM_PhiOriginEM, &b_AntiKt4TopoEM_PhiOriginEM);
   fChain->SetBranchAddress("AntiKt4TopoEM_MOriginEM", &AntiKt4TopoEM_MOriginEM, &b_AntiKt4TopoEM_MOriginEM);
   fChain->SetBranchAddress("AntiKt4TopoEM_WIDTH", &AntiKt4TopoEM_WIDTH, &b_AntiKt4TopoEM_WIDTH);
   fChain->SetBranchAddress("AntiKt4TopoEM_n90", &AntiKt4TopoEM_n90, &b_AntiKt4TopoEM_n90);
   fChain->SetBranchAddress("AntiKt4TopoEM_Timing", &AntiKt4TopoEM_Timing, &b_AntiKt4TopoEM_Timing);
   fChain->SetBranchAddress("AntiKt4TopoEM_LArQuality", &AntiKt4TopoEM_LArQuality, &b_AntiKt4TopoEM_LArQuality);
   fChain->SetBranchAddress("AntiKt4TopoEM_nTrk", &AntiKt4TopoEM_nTrk, &b_AntiKt4TopoEM_nTrk);
   fChain->SetBranchAddress("AntiKt4TopoEM_sumPtTrk", &AntiKt4TopoEM_sumPtTrk, &b_AntiKt4TopoEM_sumPtTrk);
   fChain->SetBranchAddress("AntiKt4TopoEM_OriginIndex", &AntiKt4TopoEM_OriginIndex, &b_AntiKt4TopoEM_OriginIndex);
   fChain->SetBranchAddress("AntiKt4TopoEM_HECQuality", &AntiKt4TopoEM_HECQuality, &b_AntiKt4TopoEM_HECQuality);
   fChain->SetBranchAddress("AntiKt4TopoEM_NegativeE", &AntiKt4TopoEM_NegativeE, &b_AntiKt4TopoEM_NegativeE);
   fChain->SetBranchAddress("AntiKt4TopoEM_AverageLArQF", &AntiKt4TopoEM_AverageLArQF, &b_AntiKt4TopoEM_AverageLArQF);
   fChain->SetBranchAddress("AntiKt4TopoEM_YFlip12", &AntiKt4TopoEM_YFlip12, &b_AntiKt4TopoEM_YFlip12);
   fChain->SetBranchAddress("AntiKt4TopoEM_YFlip23", &AntiKt4TopoEM_YFlip23, &b_AntiKt4TopoEM_YFlip23);
   fChain->SetBranchAddress("AntiKt4TopoEM_BCH_CORR_CELL", &AntiKt4TopoEM_BCH_CORR_CELL, &b_AntiKt4TopoEM_BCH_CORR_CELL);
   fChain->SetBranchAddress("AntiKt4TopoEM_BCH_CORR_DOTX", &AntiKt4TopoEM_BCH_CORR_DOTX, &b_AntiKt4TopoEM_BCH_CORR_DOTX);
   fChain->SetBranchAddress("AntiKt4TopoEM_BCH_CORR_JET", &AntiKt4TopoEM_BCH_CORR_JET, &b_AntiKt4TopoEM_BCH_CORR_JET);
   fChain->SetBranchAddress("AntiKt4TopoEM_BCH_CORR_JET_FORCELL", &AntiKt4TopoEM_BCH_CORR_JET_FORCELL, &b_AntiKt4TopoEM_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("AntiKt4TopoEM_ENG_BAD_CELLS", &AntiKt4TopoEM_ENG_BAD_CELLS, &b_AntiKt4TopoEM_ENG_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt4TopoEM_N_BAD_CELLS", &AntiKt4TopoEM_N_BAD_CELLS, &b_AntiKt4TopoEM_N_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt4TopoEM_N_BAD_CELLS_CORR", &AntiKt4TopoEM_N_BAD_CELLS_CORR, &b_AntiKt4TopoEM_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("AntiKt4TopoEM_BAD_CELLS_CORR_E", &AntiKt4TopoEM_BAD_CELLS_CORR_E, &b_AntiKt4TopoEM_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("AntiKt4TopoEM_NumTowers", &AntiKt4TopoEM_NumTowers, &b_AntiKt4TopoEM_NumTowers);
   fChain->SetBranchAddress("AntiKt4TopoEM_ootFracCells5", &AntiKt4TopoEM_ootFracCells5, &b_AntiKt4TopoEM_ootFracCells5);
   fChain->SetBranchAddress("AntiKt4TopoEM_ootFracCells10", &AntiKt4TopoEM_ootFracCells10, &b_AntiKt4TopoEM_ootFracCells10);
   fChain->SetBranchAddress("AntiKt4TopoEM_ootFracClusters5", &AntiKt4TopoEM_ootFracClusters5, &b_AntiKt4TopoEM_ootFracClusters5);
   fChain->SetBranchAddress("AntiKt4TopoEM_ootFracClusters10", &AntiKt4TopoEM_ootFracClusters10, &b_AntiKt4TopoEM_ootFracClusters10);
   fChain->SetBranchAddress("AntiKt4TopoEM_SamplingMax", &AntiKt4TopoEM_SamplingMax, &b_AntiKt4TopoEM_SamplingMax);
   fChain->SetBranchAddress("AntiKt4TopoEM_fracSamplingMax", &AntiKt4TopoEM_fracSamplingMax, &b_AntiKt4TopoEM_fracSamplingMax);
   fChain->SetBranchAddress("AntiKt4TopoEM_hecf", &AntiKt4TopoEM_hecf, &b_AntiKt4TopoEM_hecf);
   fChain->SetBranchAddress("AntiKt4TopoEM_tgap3f", &AntiKt4TopoEM_tgap3f, &b_AntiKt4TopoEM_tgap3f);
   fChain->SetBranchAddress("AntiKt4TopoEM_isUgly", &AntiKt4TopoEM_isUgly, &b_AntiKt4TopoEM_isUgly);
   fChain->SetBranchAddress("AntiKt4TopoEM_isBadLooseMinus", &AntiKt4TopoEM_isBadLooseMinus, &b_AntiKt4TopoEM_isBadLooseMinus);
   fChain->SetBranchAddress("AntiKt4TopoEM_isBadLoose", &AntiKt4TopoEM_isBadLoose, &b_AntiKt4TopoEM_isBadLoose);
   fChain->SetBranchAddress("AntiKt4TopoEM_isBadMedium", &AntiKt4TopoEM_isBadMedium, &b_AntiKt4TopoEM_isBadMedium);
   fChain->SetBranchAddress("AntiKt4TopoEM_isBadTight", &AntiKt4TopoEM_isBadTight, &b_AntiKt4TopoEM_isBadTight);
   fChain->SetBranchAddress("AntiKt4TopoEM_emfrac", &AntiKt4TopoEM_emfrac, &b_AntiKt4TopoEM_emfrac);
   fChain->SetBranchAddress("AntiKt4TopoEM_Offset", &AntiKt4TopoEM_Offset, &b_AntiKt4TopoEM_Offset);
   fChain->SetBranchAddress("AntiKt4TopoEM_EMJES", &AntiKt4TopoEM_EMJES, &b_AntiKt4TopoEM_EMJES);
   fChain->SetBranchAddress("AntiKt4TopoEM_EMJES_EtaCorr", &AntiKt4TopoEM_EMJES_EtaCorr, &b_AntiKt4TopoEM_EMJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt4TopoEM_EMJESnooffset", &AntiKt4TopoEM_EMJESnooffset, &b_AntiKt4TopoEM_EMJESnooffset);
   fChain->SetBranchAddress("AntiKt4TopoEM_GCWJES", &AntiKt4TopoEM_GCWJES, &b_AntiKt4TopoEM_GCWJES);
   fChain->SetBranchAddress("AntiKt4TopoEM_GCWJES_EtaCorr", &AntiKt4TopoEM_GCWJES_EtaCorr, &b_AntiKt4TopoEM_GCWJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt4TopoEM_CB", &AntiKt4TopoEM_CB, &b_AntiKt4TopoEM_CB);
   fChain->SetBranchAddress("AntiKt4TopoEM_LCJES", &AntiKt4TopoEM_LCJES, &b_AntiKt4TopoEM_LCJES);
   fChain->SetBranchAddress("AntiKt4TopoEM_emscale_E", &AntiKt4TopoEM_emscale_E, &b_AntiKt4TopoEM_emscale_E);
   fChain->SetBranchAddress("AntiKt4TopoEM_emscale_pt", &AntiKt4TopoEM_emscale_pt, &b_AntiKt4TopoEM_emscale_pt);
   fChain->SetBranchAddress("AntiKt4TopoEM_emscale_m", &AntiKt4TopoEM_emscale_m, &b_AntiKt4TopoEM_emscale_m);
   fChain->SetBranchAddress("AntiKt4TopoEM_emscale_eta", &AntiKt4TopoEM_emscale_eta, &b_AntiKt4TopoEM_emscale_eta);
   fChain->SetBranchAddress("AntiKt4TopoEM_emscale_phi", &AntiKt4TopoEM_emscale_phi, &b_AntiKt4TopoEM_emscale_phi);
   fChain->SetBranchAddress("AntiKt4TopoEM_jvtx_x", &AntiKt4TopoEM_jvtx_x, &b_AntiKt4TopoEM_jvtx_x);
   fChain->SetBranchAddress("AntiKt4TopoEM_jvtx_y", &AntiKt4TopoEM_jvtx_y, &b_AntiKt4TopoEM_jvtx_y);
   fChain->SetBranchAddress("AntiKt4TopoEM_jvtx_z", &AntiKt4TopoEM_jvtx_z, &b_AntiKt4TopoEM_jvtx_z);
   fChain->SetBranchAddress("AntiKt4TopoEM_jvtxf", &AntiKt4TopoEM_jvtxf, &b_AntiKt4TopoEM_jvtxf);
   fChain->SetBranchAddress("AntiKt4TopoEM_GSCFactorF", &AntiKt4TopoEM_GSCFactorF, &b_AntiKt4TopoEM_GSCFactorF);
   fChain->SetBranchAddress("AntiKt4TopoEM_WidthFraction", &AntiKt4TopoEM_WidthFraction, &b_AntiKt4TopoEM_WidthFraction);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_PreSamplerB", &AntiKt4TopoEM_e_PreSamplerB, &b_AntiKt4TopoEM_e_PreSamplerB);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_EMB1", &AntiKt4TopoEM_e_EMB1, &b_AntiKt4TopoEM_e_EMB1);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_EMB2", &AntiKt4TopoEM_e_EMB2, &b_AntiKt4TopoEM_e_EMB2);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_EMB3", &AntiKt4TopoEM_e_EMB3, &b_AntiKt4TopoEM_e_EMB3);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_PreSamplerE", &AntiKt4TopoEM_e_PreSamplerE, &b_AntiKt4TopoEM_e_PreSamplerE);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_EME1", &AntiKt4TopoEM_e_EME1, &b_AntiKt4TopoEM_e_EME1);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_EME2", &AntiKt4TopoEM_e_EME2, &b_AntiKt4TopoEM_e_EME2);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_EME3", &AntiKt4TopoEM_e_EME3, &b_AntiKt4TopoEM_e_EME3);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_HEC0", &AntiKt4TopoEM_e_HEC0, &b_AntiKt4TopoEM_e_HEC0);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_HEC1", &AntiKt4TopoEM_e_HEC1, &b_AntiKt4TopoEM_e_HEC1);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_HEC2", &AntiKt4TopoEM_e_HEC2, &b_AntiKt4TopoEM_e_HEC2);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_HEC3", &AntiKt4TopoEM_e_HEC3, &b_AntiKt4TopoEM_e_HEC3);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileBar0", &AntiKt4TopoEM_e_TileBar0, &b_AntiKt4TopoEM_e_TileBar0);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileBar1", &AntiKt4TopoEM_e_TileBar1, &b_AntiKt4TopoEM_e_TileBar1);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileBar2", &AntiKt4TopoEM_e_TileBar2, &b_AntiKt4TopoEM_e_TileBar2);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileGap1", &AntiKt4TopoEM_e_TileGap1, &b_AntiKt4TopoEM_e_TileGap1);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileGap2", &AntiKt4TopoEM_e_TileGap2, &b_AntiKt4TopoEM_e_TileGap2);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileGap3", &AntiKt4TopoEM_e_TileGap3, &b_AntiKt4TopoEM_e_TileGap3);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileExt0", &AntiKt4TopoEM_e_TileExt0, &b_AntiKt4TopoEM_e_TileExt0);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileExt1", &AntiKt4TopoEM_e_TileExt1, &b_AntiKt4TopoEM_e_TileExt1);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_TileExt2", &AntiKt4TopoEM_e_TileExt2, &b_AntiKt4TopoEM_e_TileExt2);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_FCAL0", &AntiKt4TopoEM_e_FCAL0, &b_AntiKt4TopoEM_e_FCAL0);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_FCAL1", &AntiKt4TopoEM_e_FCAL1, &b_AntiKt4TopoEM_e_FCAL1);
   fChain->SetBranchAddress("AntiKt4TopoEM_e_FCAL2", &AntiKt4TopoEM_e_FCAL2, &b_AntiKt4TopoEM_e_FCAL2);
   fChain->SetBranchAddress("AntiKt4TopoEM_shapeBins", &AntiKt4TopoEM_shapeBins, &b_AntiKt4TopoEM_shapeBins);
   fChain->SetBranchAddress("AntiKt4TopoEM_Nconst", &AntiKt4TopoEM_Nconst, &b_AntiKt4TopoEM_Nconst);
   fChain->SetBranchAddress("AntiKt4TopoEM_ptconst_default", &AntiKt4TopoEM_ptconst_default, &b_AntiKt4TopoEM_ptconst_default);
   fChain->SetBranchAddress("AntiKt4TopoEM_econst_default", &AntiKt4TopoEM_econst_default, &b_AntiKt4TopoEM_econst_default);
   fChain->SetBranchAddress("AntiKt4TopoEM_etaconst_default", &AntiKt4TopoEM_etaconst_default, &b_AntiKt4TopoEM_etaconst_default);
   fChain->SetBranchAddress("AntiKt4TopoEM_phiconst_default", &AntiKt4TopoEM_phiconst_default, &b_AntiKt4TopoEM_phiconst_default);
   fChain->SetBranchAddress("AntiKt4TopoEM_weightconst_default", &AntiKt4TopoEM_weightconst_default, &b_AntiKt4TopoEM_weightconst_default);
   fChain->SetBranchAddress("AntiKt4TopoEM_constscale_E", &AntiKt4TopoEM_constscale_E, &b_AntiKt4TopoEM_constscale_E);
   fChain->SetBranchAddress("AntiKt4TopoEM_constscale_pt", &AntiKt4TopoEM_constscale_pt, &b_AntiKt4TopoEM_constscale_pt);
   fChain->SetBranchAddress("AntiKt4TopoEM_constscale_m", &AntiKt4TopoEM_constscale_m, &b_AntiKt4TopoEM_constscale_m);
   fChain->SetBranchAddress("AntiKt4TopoEM_constscale_eta", &AntiKt4TopoEM_constscale_eta, &b_AntiKt4TopoEM_constscale_eta);
   fChain->SetBranchAddress("AntiKt4TopoEM_constscale_phi", &AntiKt4TopoEM_constscale_phi, &b_AntiKt4TopoEM_constscale_phi);
   fChain->SetBranchAddress("AntiKt4TopoEM_el_dr", &AntiKt4TopoEM_el_dr, &b_AntiKt4TopoEM_el_dr);
   fChain->SetBranchAddress("AntiKt4TopoEM_el_matched", &AntiKt4TopoEM_el_matched, &b_AntiKt4TopoEM_el_matched);
   fChain->SetBranchAddress("AntiKt4TopoEM_mu_dr", &AntiKt4TopoEM_mu_dr, &b_AntiKt4TopoEM_mu_dr);
   fChain->SetBranchAddress("AntiKt4TopoEM_mu_matched", &AntiKt4TopoEM_mu_matched, &b_AntiKt4TopoEM_mu_matched);
   fChain->SetBranchAddress("AntiKt4TopoEM_L1_dr", &AntiKt4TopoEM_L1_dr, &b_AntiKt4TopoEM_L1_dr);
   fChain->SetBranchAddress("AntiKt4TopoEM_L1_matched", &AntiKt4TopoEM_L1_matched, &b_AntiKt4TopoEM_L1_matched);
   fChain->SetBranchAddress("AntiKt4TopoEM_L2_dr", &AntiKt4TopoEM_L2_dr, &b_AntiKt4TopoEM_L2_dr);
   fChain->SetBranchAddress("AntiKt4TopoEM_L2_matched", &AntiKt4TopoEM_L2_matched, &b_AntiKt4TopoEM_L2_matched);
   fChain->SetBranchAddress("AntiKt4TopoEM_EF_dr", &AntiKt4TopoEM_EF_dr, &b_AntiKt4TopoEM_EF_dr);
   fChain->SetBranchAddress("AntiKt4TopoEM_EF_matched", &AntiKt4TopoEM_EF_matched, &b_AntiKt4TopoEM_EF_matched);
   fChain->SetBranchAddress("AntiKt4LCTopo_n", &AntiKt4LCTopo_n, &b_AntiKt4LCTopo_n);
   fChain->SetBranchAddress("AntiKt4LCTopo_E", &AntiKt4LCTopo_E, &b_AntiKt4LCTopo_E);
   fChain->SetBranchAddress("AntiKt4LCTopo_pt", &AntiKt4LCTopo_pt, &b_AntiKt4LCTopo_pt);
   fChain->SetBranchAddress("AntiKt4LCTopo_m", &AntiKt4LCTopo_m, &b_AntiKt4LCTopo_m);
   fChain->SetBranchAddress("AntiKt4LCTopo_eta", &AntiKt4LCTopo_eta, &b_AntiKt4LCTopo_eta);
   fChain->SetBranchAddress("AntiKt4LCTopo_phi", &AntiKt4LCTopo_phi, &b_AntiKt4LCTopo_phi);
   fChain->SetBranchAddress("AntiKt4LCTopo_EtaOrigin", &AntiKt4LCTopo_EtaOrigin, &b_AntiKt4LCTopo_EtaOrigin);
   fChain->SetBranchAddress("AntiKt4LCTopo_PhiOrigin", &AntiKt4LCTopo_PhiOrigin, &b_AntiKt4LCTopo_PhiOrigin);
   fChain->SetBranchAddress("AntiKt4LCTopo_MOrigin", &AntiKt4LCTopo_MOrigin, &b_AntiKt4LCTopo_MOrigin);
   fChain->SetBranchAddress("AntiKt4LCTopo_EtaOriginEM", &AntiKt4LCTopo_EtaOriginEM, &b_AntiKt4LCTopo_EtaOriginEM);
   fChain->SetBranchAddress("AntiKt4LCTopo_PhiOriginEM", &AntiKt4LCTopo_PhiOriginEM, &b_AntiKt4LCTopo_PhiOriginEM);
   fChain->SetBranchAddress("AntiKt4LCTopo_MOriginEM", &AntiKt4LCTopo_MOriginEM, &b_AntiKt4LCTopo_MOriginEM);
   fChain->SetBranchAddress("AntiKt4LCTopo_WIDTH", &AntiKt4LCTopo_WIDTH, &b_AntiKt4LCTopo_WIDTH);
   fChain->SetBranchAddress("AntiKt4LCTopo_n90", &AntiKt4LCTopo_n90, &b_AntiKt4LCTopo_n90);
   fChain->SetBranchAddress("AntiKt4LCTopo_Timing", &AntiKt4LCTopo_Timing, &b_AntiKt4LCTopo_Timing);
   fChain->SetBranchAddress("AntiKt4LCTopo_LArQuality", &AntiKt4LCTopo_LArQuality, &b_AntiKt4LCTopo_LArQuality);
   fChain->SetBranchAddress("AntiKt4LCTopo_nTrk", &AntiKt4LCTopo_nTrk, &b_AntiKt4LCTopo_nTrk);
   fChain->SetBranchAddress("AntiKt4LCTopo_sumPtTrk", &AntiKt4LCTopo_sumPtTrk, &b_AntiKt4LCTopo_sumPtTrk);
   fChain->SetBranchAddress("AntiKt4LCTopo_OriginIndex", &AntiKt4LCTopo_OriginIndex, &b_AntiKt4LCTopo_OriginIndex);
   fChain->SetBranchAddress("AntiKt4LCTopo_HECQuality", &AntiKt4LCTopo_HECQuality, &b_AntiKt4LCTopo_HECQuality);
   fChain->SetBranchAddress("AntiKt4LCTopo_NegativeE", &AntiKt4LCTopo_NegativeE, &b_AntiKt4LCTopo_NegativeE);
   fChain->SetBranchAddress("AntiKt4LCTopo_AverageLArQF", &AntiKt4LCTopo_AverageLArQF, &b_AntiKt4LCTopo_AverageLArQF);
   fChain->SetBranchAddress("AntiKt4LCTopo_YFlip12", &AntiKt4LCTopo_YFlip12, &b_AntiKt4LCTopo_YFlip12);
   fChain->SetBranchAddress("AntiKt4LCTopo_YFlip23", &AntiKt4LCTopo_YFlip23, &b_AntiKt4LCTopo_YFlip23);
   fChain->SetBranchAddress("AntiKt4LCTopo_BCH_CORR_CELL", &AntiKt4LCTopo_BCH_CORR_CELL, &b_AntiKt4LCTopo_BCH_CORR_CELL);
   fChain->SetBranchAddress("AntiKt4LCTopo_BCH_CORR_DOTX", &AntiKt4LCTopo_BCH_CORR_DOTX, &b_AntiKt4LCTopo_BCH_CORR_DOTX);
   fChain->SetBranchAddress("AntiKt4LCTopo_BCH_CORR_JET", &AntiKt4LCTopo_BCH_CORR_JET, &b_AntiKt4LCTopo_BCH_CORR_JET);
   fChain->SetBranchAddress("AntiKt4LCTopo_BCH_CORR_JET_FORCELL", &AntiKt4LCTopo_BCH_CORR_JET_FORCELL, &b_AntiKt4LCTopo_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("AntiKt4LCTopo_ENG_BAD_CELLS", &AntiKt4LCTopo_ENG_BAD_CELLS, &b_AntiKt4LCTopo_ENG_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt4LCTopo_N_BAD_CELLS", &AntiKt4LCTopo_N_BAD_CELLS, &b_AntiKt4LCTopo_N_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt4LCTopo_N_BAD_CELLS_CORR", &AntiKt4LCTopo_N_BAD_CELLS_CORR, &b_AntiKt4LCTopo_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("AntiKt4LCTopo_BAD_CELLS_CORR_E", &AntiKt4LCTopo_BAD_CELLS_CORR_E, &b_AntiKt4LCTopo_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("AntiKt4LCTopo_NumTowers", &AntiKt4LCTopo_NumTowers, &b_AntiKt4LCTopo_NumTowers);
   fChain->SetBranchAddress("AntiKt4LCTopo_ootFracCells5", &AntiKt4LCTopo_ootFracCells5, &b_AntiKt4LCTopo_ootFracCells5);
   fChain->SetBranchAddress("AntiKt4LCTopo_ootFracCells10", &AntiKt4LCTopo_ootFracCells10, &b_AntiKt4LCTopo_ootFracCells10);
   fChain->SetBranchAddress("AntiKt4LCTopo_ootFracClusters5", &AntiKt4LCTopo_ootFracClusters5, &b_AntiKt4LCTopo_ootFracClusters5);
   fChain->SetBranchAddress("AntiKt4LCTopo_ootFracClusters10", &AntiKt4LCTopo_ootFracClusters10, &b_AntiKt4LCTopo_ootFracClusters10);
   fChain->SetBranchAddress("AntiKt4LCTopo_SamplingMax", &AntiKt4LCTopo_SamplingMax, &b_AntiKt4LCTopo_SamplingMax);
   fChain->SetBranchAddress("AntiKt4LCTopo_fracSamplingMax", &AntiKt4LCTopo_fracSamplingMax, &b_AntiKt4LCTopo_fracSamplingMax);
   fChain->SetBranchAddress("AntiKt4LCTopo_hecf", &AntiKt4LCTopo_hecf, &b_AntiKt4LCTopo_hecf);
   fChain->SetBranchAddress("AntiKt4LCTopo_tgap3f", &AntiKt4LCTopo_tgap3f, &b_AntiKt4LCTopo_tgap3f);
   fChain->SetBranchAddress("AntiKt4LCTopo_isUgly", &AntiKt4LCTopo_isUgly, &b_AntiKt4LCTopo_isUgly);
   fChain->SetBranchAddress("AntiKt4LCTopo_isBadLooseMinus", &AntiKt4LCTopo_isBadLooseMinus, &b_AntiKt4LCTopo_isBadLooseMinus);
   fChain->SetBranchAddress("AntiKt4LCTopo_isBadLoose", &AntiKt4LCTopo_isBadLoose, &b_AntiKt4LCTopo_isBadLoose);
   fChain->SetBranchAddress("AntiKt4LCTopo_isBadMedium", &AntiKt4LCTopo_isBadMedium, &b_AntiKt4LCTopo_isBadMedium);
   fChain->SetBranchAddress("AntiKt4LCTopo_isBadTight", &AntiKt4LCTopo_isBadTight, &b_AntiKt4LCTopo_isBadTight);
   fChain->SetBranchAddress("AntiKt4LCTopo_emfrac", &AntiKt4LCTopo_emfrac, &b_AntiKt4LCTopo_emfrac);
   fChain->SetBranchAddress("AntiKt4LCTopo_Offset", &AntiKt4LCTopo_Offset, &b_AntiKt4LCTopo_Offset);
   fChain->SetBranchAddress("AntiKt4LCTopo_EMJES", &AntiKt4LCTopo_EMJES, &b_AntiKt4LCTopo_EMJES);
   fChain->SetBranchAddress("AntiKt4LCTopo_EMJES_EtaCorr", &AntiKt4LCTopo_EMJES_EtaCorr, &b_AntiKt4LCTopo_EMJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt4LCTopo_EMJESnooffset", &AntiKt4LCTopo_EMJESnooffset, &b_AntiKt4LCTopo_EMJESnooffset);
   fChain->SetBranchAddress("AntiKt4LCTopo_GCWJES", &AntiKt4LCTopo_GCWJES, &b_AntiKt4LCTopo_GCWJES);
   fChain->SetBranchAddress("AntiKt4LCTopo_GCWJES_EtaCorr", &AntiKt4LCTopo_GCWJES_EtaCorr, &b_AntiKt4LCTopo_GCWJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt4LCTopo_CB", &AntiKt4LCTopo_CB, &b_AntiKt4LCTopo_CB);
   fChain->SetBranchAddress("AntiKt4LCTopo_LCJES", &AntiKt4LCTopo_LCJES, &b_AntiKt4LCTopo_LCJES);
   fChain->SetBranchAddress("AntiKt4LCTopo_emscale_E", &AntiKt4LCTopo_emscale_E, &b_AntiKt4LCTopo_emscale_E);
   fChain->SetBranchAddress("AntiKt4LCTopo_emscale_pt", &AntiKt4LCTopo_emscale_pt, &b_AntiKt4LCTopo_emscale_pt);
   fChain->SetBranchAddress("AntiKt4LCTopo_emscale_m", &AntiKt4LCTopo_emscale_m, &b_AntiKt4LCTopo_emscale_m);
   fChain->SetBranchAddress("AntiKt4LCTopo_emscale_eta", &AntiKt4LCTopo_emscale_eta, &b_AntiKt4LCTopo_emscale_eta);
   fChain->SetBranchAddress("AntiKt4LCTopo_emscale_phi", &AntiKt4LCTopo_emscale_phi, &b_AntiKt4LCTopo_emscale_phi);
   fChain->SetBranchAddress("AntiKt4LCTopo_jvtx_x", &AntiKt4LCTopo_jvtx_x, &b_AntiKt4LCTopo_jvtx_x);
   fChain->SetBranchAddress("AntiKt4LCTopo_jvtx_y", &AntiKt4LCTopo_jvtx_y, &b_AntiKt4LCTopo_jvtx_y);
   fChain->SetBranchAddress("AntiKt4LCTopo_jvtx_z", &AntiKt4LCTopo_jvtx_z, &b_AntiKt4LCTopo_jvtx_z);
   fChain->SetBranchAddress("AntiKt4LCTopo_jvtxf", &AntiKt4LCTopo_jvtxf, &b_AntiKt4LCTopo_jvtxf);
   fChain->SetBranchAddress("AntiKt4LCTopo_GSCFactorF", &AntiKt4LCTopo_GSCFactorF, &b_AntiKt4LCTopo_GSCFactorF);
   fChain->SetBranchAddress("AntiKt4LCTopo_WidthFraction", &AntiKt4LCTopo_WidthFraction, &b_AntiKt4LCTopo_WidthFraction);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_PreSamplerB", &AntiKt4LCTopo_e_PreSamplerB, &b_AntiKt4LCTopo_e_PreSamplerB);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_EMB1", &AntiKt4LCTopo_e_EMB1, &b_AntiKt4LCTopo_e_EMB1);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_EMB2", &AntiKt4LCTopo_e_EMB2, &b_AntiKt4LCTopo_e_EMB2);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_EMB3", &AntiKt4LCTopo_e_EMB3, &b_AntiKt4LCTopo_e_EMB3);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_PreSamplerE", &AntiKt4LCTopo_e_PreSamplerE, &b_AntiKt4LCTopo_e_PreSamplerE);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_EME1", &AntiKt4LCTopo_e_EME1, &b_AntiKt4LCTopo_e_EME1);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_EME2", &AntiKt4LCTopo_e_EME2, &b_AntiKt4LCTopo_e_EME2);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_EME3", &AntiKt4LCTopo_e_EME3, &b_AntiKt4LCTopo_e_EME3);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_HEC0", &AntiKt4LCTopo_e_HEC0, &b_AntiKt4LCTopo_e_HEC0);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_HEC1", &AntiKt4LCTopo_e_HEC1, &b_AntiKt4LCTopo_e_HEC1);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_HEC2", &AntiKt4LCTopo_e_HEC2, &b_AntiKt4LCTopo_e_HEC2);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_HEC3", &AntiKt4LCTopo_e_HEC3, &b_AntiKt4LCTopo_e_HEC3);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileBar0", &AntiKt4LCTopo_e_TileBar0, &b_AntiKt4LCTopo_e_TileBar0);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileBar1", &AntiKt4LCTopo_e_TileBar1, &b_AntiKt4LCTopo_e_TileBar1);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileBar2", &AntiKt4LCTopo_e_TileBar2, &b_AntiKt4LCTopo_e_TileBar2);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileGap1", &AntiKt4LCTopo_e_TileGap1, &b_AntiKt4LCTopo_e_TileGap1);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileGap2", &AntiKt4LCTopo_e_TileGap2, &b_AntiKt4LCTopo_e_TileGap2);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileGap3", &AntiKt4LCTopo_e_TileGap3, &b_AntiKt4LCTopo_e_TileGap3);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileExt0", &AntiKt4LCTopo_e_TileExt0, &b_AntiKt4LCTopo_e_TileExt0);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileExt1", &AntiKt4LCTopo_e_TileExt1, &b_AntiKt4LCTopo_e_TileExt1);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_TileExt2", &AntiKt4LCTopo_e_TileExt2, &b_AntiKt4LCTopo_e_TileExt2);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_FCAL0", &AntiKt4LCTopo_e_FCAL0, &b_AntiKt4LCTopo_e_FCAL0);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_FCAL1", &AntiKt4LCTopo_e_FCAL1, &b_AntiKt4LCTopo_e_FCAL1);
   fChain->SetBranchAddress("AntiKt4LCTopo_e_FCAL2", &AntiKt4LCTopo_e_FCAL2, &b_AntiKt4LCTopo_e_FCAL2);
   fChain->SetBranchAddress("AntiKt4LCTopo_shapeBins", &AntiKt4LCTopo_shapeBins, &b_AntiKt4LCTopo_shapeBins);
   fChain->SetBranchAddress("AntiKt4LCTopo_Nconst", &AntiKt4LCTopo_Nconst, &b_AntiKt4LCTopo_Nconst);
   fChain->SetBranchAddress("AntiKt4LCTopo_ptconst_default", &AntiKt4LCTopo_ptconst_default, &b_AntiKt4LCTopo_ptconst_default);
   fChain->SetBranchAddress("AntiKt4LCTopo_econst_default", &AntiKt4LCTopo_econst_default, &b_AntiKt4LCTopo_econst_default);
   fChain->SetBranchAddress("AntiKt4LCTopo_etaconst_default", &AntiKt4LCTopo_etaconst_default, &b_AntiKt4LCTopo_etaconst_default);
   fChain->SetBranchAddress("AntiKt4LCTopo_phiconst_default", &AntiKt4LCTopo_phiconst_default, &b_AntiKt4LCTopo_phiconst_default);
   fChain->SetBranchAddress("AntiKt4LCTopo_weightconst_default", &AntiKt4LCTopo_weightconst_default, &b_AntiKt4LCTopo_weightconst_default);
   fChain->SetBranchAddress("AntiKt4LCTopo_constscale_E", &AntiKt4LCTopo_constscale_E, &b_AntiKt4LCTopo_constscale_E);
   fChain->SetBranchAddress("AntiKt4LCTopo_constscale_pt", &AntiKt4LCTopo_constscale_pt, &b_AntiKt4LCTopo_constscale_pt);
   fChain->SetBranchAddress("AntiKt4LCTopo_constscale_m", &AntiKt4LCTopo_constscale_m, &b_AntiKt4LCTopo_constscale_m);
   fChain->SetBranchAddress("AntiKt4LCTopo_constscale_eta", &AntiKt4LCTopo_constscale_eta, &b_AntiKt4LCTopo_constscale_eta);
   fChain->SetBranchAddress("AntiKt4LCTopo_constscale_phi", &AntiKt4LCTopo_constscale_phi, &b_AntiKt4LCTopo_constscale_phi);
   fChain->SetBranchAddress("AntiKt4LCTopo_el_dr", &AntiKt4LCTopo_el_dr, &b_AntiKt4LCTopo_el_dr);
   fChain->SetBranchAddress("AntiKt4LCTopo_el_matched", &AntiKt4LCTopo_el_matched, &b_AntiKt4LCTopo_el_matched);
   fChain->SetBranchAddress("AntiKt4LCTopo_mu_dr", &AntiKt4LCTopo_mu_dr, &b_AntiKt4LCTopo_mu_dr);
   fChain->SetBranchAddress("AntiKt4LCTopo_mu_matched", &AntiKt4LCTopo_mu_matched, &b_AntiKt4LCTopo_mu_matched);
   fChain->SetBranchAddress("AntiKt4LCTopo_L1_dr", &AntiKt4LCTopo_L1_dr, &b_AntiKt4LCTopo_L1_dr);
   fChain->SetBranchAddress("AntiKt4LCTopo_L1_matched", &AntiKt4LCTopo_L1_matched, &b_AntiKt4LCTopo_L1_matched);
   fChain->SetBranchAddress("AntiKt4LCTopo_L2_dr", &AntiKt4LCTopo_L2_dr, &b_AntiKt4LCTopo_L2_dr);
   fChain->SetBranchAddress("AntiKt4LCTopo_L2_matched", &AntiKt4LCTopo_L2_matched, &b_AntiKt4LCTopo_L2_matched);
   fChain->SetBranchAddress("AntiKt4LCTopo_EF_dr", &AntiKt4LCTopo_EF_dr, &b_AntiKt4LCTopo_EF_dr);
   fChain->SetBranchAddress("AntiKt4LCTopo_EF_matched", &AntiKt4LCTopo_EF_matched, &b_AntiKt4LCTopo_EF_matched);
   fChain->SetBranchAddress("AntiKt6Tower_n", &AntiKt6Tower_n, &b_AntiKt6Tower_n);
   fChain->SetBranchAddress("AntiKt6Tower_E", &AntiKt6Tower_E, &b_AntiKt6Tower_E);
   fChain->SetBranchAddress("AntiKt6Tower_pt", &AntiKt6Tower_pt, &b_AntiKt6Tower_pt);
   fChain->SetBranchAddress("AntiKt6Tower_m", &AntiKt6Tower_m, &b_AntiKt6Tower_m);
   fChain->SetBranchAddress("AntiKt6Tower_eta", &AntiKt6Tower_eta, &b_AntiKt6Tower_eta);
   fChain->SetBranchAddress("AntiKt6Tower_phi", &AntiKt6Tower_phi, &b_AntiKt6Tower_phi);
   fChain->SetBranchAddress("AntiKt6Tower_EtaOrigin", &AntiKt6Tower_EtaOrigin, &b_AntiKt6Tower_EtaOrigin);
   fChain->SetBranchAddress("AntiKt6Tower_PhiOrigin", &AntiKt6Tower_PhiOrigin, &b_AntiKt6Tower_PhiOrigin);
   fChain->SetBranchAddress("AntiKt6Tower_MOrigin", &AntiKt6Tower_MOrigin, &b_AntiKt6Tower_MOrigin);
   fChain->SetBranchAddress("AntiKt6Tower_EtaOriginEM", &AntiKt6Tower_EtaOriginEM, &b_AntiKt6Tower_EtaOriginEM);
   fChain->SetBranchAddress("AntiKt6Tower_PhiOriginEM", &AntiKt6Tower_PhiOriginEM, &b_AntiKt6Tower_PhiOriginEM);
   fChain->SetBranchAddress("AntiKt6Tower_MOriginEM", &AntiKt6Tower_MOriginEM, &b_AntiKt6Tower_MOriginEM);
   fChain->SetBranchAddress("AntiKt6Tower_WIDTH", &AntiKt6Tower_WIDTH, &b_AntiKt6Tower_WIDTH);
   fChain->SetBranchAddress("AntiKt6Tower_n90", &AntiKt6Tower_n90, &b_AntiKt6Tower_n90);
   fChain->SetBranchAddress("AntiKt6Tower_Timing", &AntiKt6Tower_Timing, &b_AntiKt6Tower_Timing);
   fChain->SetBranchAddress("AntiKt6Tower_LArQuality", &AntiKt6Tower_LArQuality, &b_AntiKt6Tower_LArQuality);
   fChain->SetBranchAddress("AntiKt6Tower_nTrk", &AntiKt6Tower_nTrk, &b_AntiKt6Tower_nTrk);
   fChain->SetBranchAddress("AntiKt6Tower_sumPtTrk", &AntiKt6Tower_sumPtTrk, &b_AntiKt6Tower_sumPtTrk);
   fChain->SetBranchAddress("AntiKt6Tower_OriginIndex", &AntiKt6Tower_OriginIndex, &b_AntiKt6Tower_OriginIndex);
   fChain->SetBranchAddress("AntiKt6Tower_HECQuality", &AntiKt6Tower_HECQuality, &b_AntiKt6Tower_HECQuality);
   fChain->SetBranchAddress("AntiKt6Tower_NegativeE", &AntiKt6Tower_NegativeE, &b_AntiKt6Tower_NegativeE);
   fChain->SetBranchAddress("AntiKt6Tower_AverageLArQF", &AntiKt6Tower_AverageLArQF, &b_AntiKt6Tower_AverageLArQF);
   fChain->SetBranchAddress("AntiKt6Tower_YFlip12", &AntiKt6Tower_YFlip12, &b_AntiKt6Tower_YFlip12);
   fChain->SetBranchAddress("AntiKt6Tower_YFlip23", &AntiKt6Tower_YFlip23, &b_AntiKt6Tower_YFlip23);
   fChain->SetBranchAddress("AntiKt6Tower_BCH_CORR_CELL", &AntiKt6Tower_BCH_CORR_CELL, &b_AntiKt6Tower_BCH_CORR_CELL);
   fChain->SetBranchAddress("AntiKt6Tower_BCH_CORR_DOTX", &AntiKt6Tower_BCH_CORR_DOTX, &b_AntiKt6Tower_BCH_CORR_DOTX);
   fChain->SetBranchAddress("AntiKt6Tower_BCH_CORR_JET", &AntiKt6Tower_BCH_CORR_JET, &b_AntiKt6Tower_BCH_CORR_JET);
   fChain->SetBranchAddress("AntiKt6Tower_BCH_CORR_JET_FORCELL", &AntiKt6Tower_BCH_CORR_JET_FORCELL, &b_AntiKt6Tower_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("AntiKt6Tower_ENG_BAD_CELLS", &AntiKt6Tower_ENG_BAD_CELLS, &b_AntiKt6Tower_ENG_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6Tower_N_BAD_CELLS", &AntiKt6Tower_N_BAD_CELLS, &b_AntiKt6Tower_N_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6Tower_N_BAD_CELLS_CORR", &AntiKt6Tower_N_BAD_CELLS_CORR, &b_AntiKt6Tower_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("AntiKt6Tower_BAD_CELLS_CORR_E", &AntiKt6Tower_BAD_CELLS_CORR_E, &b_AntiKt6Tower_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("AntiKt6Tower_NumTowers", &AntiKt6Tower_NumTowers, &b_AntiKt6Tower_NumTowers);
   fChain->SetBranchAddress("AntiKt6Tower_ootFracCells5", &AntiKt6Tower_ootFracCells5, &b_AntiKt6Tower_ootFracCells5);
   fChain->SetBranchAddress("AntiKt6Tower_ootFracCells10", &AntiKt6Tower_ootFracCells10, &b_AntiKt6Tower_ootFracCells10);
   fChain->SetBranchAddress("AntiKt6Tower_ootFracClusters5", &AntiKt6Tower_ootFracClusters5, &b_AntiKt6Tower_ootFracClusters5);
   fChain->SetBranchAddress("AntiKt6Tower_ootFracClusters10", &AntiKt6Tower_ootFracClusters10, &b_AntiKt6Tower_ootFracClusters10);
   fChain->SetBranchAddress("AntiKt6Tower_SamplingMax", &AntiKt6Tower_SamplingMax, &b_AntiKt6Tower_SamplingMax);
   fChain->SetBranchAddress("AntiKt6Tower_fracSamplingMax", &AntiKt6Tower_fracSamplingMax, &b_AntiKt6Tower_fracSamplingMax);
   fChain->SetBranchAddress("AntiKt6Tower_hecf", &AntiKt6Tower_hecf, &b_AntiKt6Tower_hecf);
   fChain->SetBranchAddress("AntiKt6Tower_tgap3f", &AntiKt6Tower_tgap3f, &b_AntiKt6Tower_tgap3f);
   fChain->SetBranchAddress("AntiKt6Tower_isUgly", &AntiKt6Tower_isUgly, &b_AntiKt6Tower_isUgly);
   fChain->SetBranchAddress("AntiKt6Tower_isBadLooseMinus", &AntiKt6Tower_isBadLooseMinus, &b_AntiKt6Tower_isBadLooseMinus);
   fChain->SetBranchAddress("AntiKt6Tower_isBadLoose", &AntiKt6Tower_isBadLoose, &b_AntiKt6Tower_isBadLoose);
   fChain->SetBranchAddress("AntiKt6Tower_isBadMedium", &AntiKt6Tower_isBadMedium, &b_AntiKt6Tower_isBadMedium);
   fChain->SetBranchAddress("AntiKt6Tower_isBadTight", &AntiKt6Tower_isBadTight, &b_AntiKt6Tower_isBadTight);
   fChain->SetBranchAddress("AntiKt6Tower_emfrac", &AntiKt6Tower_emfrac, &b_AntiKt6Tower_emfrac);
   fChain->SetBranchAddress("AntiKt6Tower_Offset", &AntiKt6Tower_Offset, &b_AntiKt6Tower_Offset);
   fChain->SetBranchAddress("AntiKt6Tower_EMJES", &AntiKt6Tower_EMJES, &b_AntiKt6Tower_EMJES);
   fChain->SetBranchAddress("AntiKt6Tower_EMJES_EtaCorr", &AntiKt6Tower_EMJES_EtaCorr, &b_AntiKt6Tower_EMJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6Tower_EMJESnooffset", &AntiKt6Tower_EMJESnooffset, &b_AntiKt6Tower_EMJESnooffset);
   fChain->SetBranchAddress("AntiKt6Tower_GCWJES", &AntiKt6Tower_GCWJES, &b_AntiKt6Tower_GCWJES);
   fChain->SetBranchAddress("AntiKt6Tower_GCWJES_EtaCorr", &AntiKt6Tower_GCWJES_EtaCorr, &b_AntiKt6Tower_GCWJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6Tower_CB", &AntiKt6Tower_CB, &b_AntiKt6Tower_CB);
   fChain->SetBranchAddress("AntiKt6Tower_LCJES", &AntiKt6Tower_LCJES, &b_AntiKt6Tower_LCJES);
   fChain->SetBranchAddress("AntiKt6Tower_emscale_E", &AntiKt6Tower_emscale_E, &b_AntiKt6Tower_emscale_E);
   fChain->SetBranchAddress("AntiKt6Tower_emscale_pt", &AntiKt6Tower_emscale_pt, &b_AntiKt6Tower_emscale_pt);
   fChain->SetBranchAddress("AntiKt6Tower_emscale_m", &AntiKt6Tower_emscale_m, &b_AntiKt6Tower_emscale_m);
   fChain->SetBranchAddress("AntiKt6Tower_emscale_eta", &AntiKt6Tower_emscale_eta, &b_AntiKt6Tower_emscale_eta);
   fChain->SetBranchAddress("AntiKt6Tower_emscale_phi", &AntiKt6Tower_emscale_phi, &b_AntiKt6Tower_emscale_phi);
   fChain->SetBranchAddress("AntiKt6Tower_jvtx_x", &AntiKt6Tower_jvtx_x, &b_AntiKt6Tower_jvtx_x);
   fChain->SetBranchAddress("AntiKt6Tower_jvtx_y", &AntiKt6Tower_jvtx_y, &b_AntiKt6Tower_jvtx_y);
   fChain->SetBranchAddress("AntiKt6Tower_jvtx_z", &AntiKt6Tower_jvtx_z, &b_AntiKt6Tower_jvtx_z);
   fChain->SetBranchAddress("AntiKt6Tower_jvtxf", &AntiKt6Tower_jvtxf, &b_AntiKt6Tower_jvtxf);
   fChain->SetBranchAddress("AntiKt6Tower_GSCFactorF", &AntiKt6Tower_GSCFactorF, &b_AntiKt6Tower_GSCFactorF);
   fChain->SetBranchAddress("AntiKt6Tower_WidthFraction", &AntiKt6Tower_WidthFraction, &b_AntiKt6Tower_WidthFraction);
   fChain->SetBranchAddress("AntiKt6Tower_e_PreSamplerB", &AntiKt6Tower_e_PreSamplerB, &b_AntiKt6Tower_e_PreSamplerB);
   fChain->SetBranchAddress("AntiKt6Tower_e_EMB1", &AntiKt6Tower_e_EMB1, &b_AntiKt6Tower_e_EMB1);
   fChain->SetBranchAddress("AntiKt6Tower_e_EMB2", &AntiKt6Tower_e_EMB2, &b_AntiKt6Tower_e_EMB2);
   fChain->SetBranchAddress("AntiKt6Tower_e_EMB3", &AntiKt6Tower_e_EMB3, &b_AntiKt6Tower_e_EMB3);
   fChain->SetBranchAddress("AntiKt6Tower_e_PreSamplerE", &AntiKt6Tower_e_PreSamplerE, &b_AntiKt6Tower_e_PreSamplerE);
   fChain->SetBranchAddress("AntiKt6Tower_e_EME1", &AntiKt6Tower_e_EME1, &b_AntiKt6Tower_e_EME1);
   fChain->SetBranchAddress("AntiKt6Tower_e_EME2", &AntiKt6Tower_e_EME2, &b_AntiKt6Tower_e_EME2);
   fChain->SetBranchAddress("AntiKt6Tower_e_EME3", &AntiKt6Tower_e_EME3, &b_AntiKt6Tower_e_EME3);
   fChain->SetBranchAddress("AntiKt6Tower_e_HEC0", &AntiKt6Tower_e_HEC0, &b_AntiKt6Tower_e_HEC0);
   fChain->SetBranchAddress("AntiKt6Tower_e_HEC1", &AntiKt6Tower_e_HEC1, &b_AntiKt6Tower_e_HEC1);
   fChain->SetBranchAddress("AntiKt6Tower_e_HEC2", &AntiKt6Tower_e_HEC2, &b_AntiKt6Tower_e_HEC2);
   fChain->SetBranchAddress("AntiKt6Tower_e_HEC3", &AntiKt6Tower_e_HEC3, &b_AntiKt6Tower_e_HEC3);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileBar0", &AntiKt6Tower_e_TileBar0, &b_AntiKt6Tower_e_TileBar0);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileBar1", &AntiKt6Tower_e_TileBar1, &b_AntiKt6Tower_e_TileBar1);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileBar2", &AntiKt6Tower_e_TileBar2, &b_AntiKt6Tower_e_TileBar2);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileGap1", &AntiKt6Tower_e_TileGap1, &b_AntiKt6Tower_e_TileGap1);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileGap2", &AntiKt6Tower_e_TileGap2, &b_AntiKt6Tower_e_TileGap2);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileGap3", &AntiKt6Tower_e_TileGap3, &b_AntiKt6Tower_e_TileGap3);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileExt0", &AntiKt6Tower_e_TileExt0, &b_AntiKt6Tower_e_TileExt0);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileExt1", &AntiKt6Tower_e_TileExt1, &b_AntiKt6Tower_e_TileExt1);
   fChain->SetBranchAddress("AntiKt6Tower_e_TileExt2", &AntiKt6Tower_e_TileExt2, &b_AntiKt6Tower_e_TileExt2);
   fChain->SetBranchAddress("AntiKt6Tower_e_FCAL0", &AntiKt6Tower_e_FCAL0, &b_AntiKt6Tower_e_FCAL0);
   fChain->SetBranchAddress("AntiKt6Tower_e_FCAL1", &AntiKt6Tower_e_FCAL1, &b_AntiKt6Tower_e_FCAL1);
   fChain->SetBranchAddress("AntiKt6Tower_e_FCAL2", &AntiKt6Tower_e_FCAL2, &b_AntiKt6Tower_e_FCAL2);
   fChain->SetBranchAddress("AntiKt6Tower_shapeBins", &AntiKt6Tower_shapeBins, &b_AntiKt6Tower_shapeBins);
   fChain->SetBranchAddress("AntiKt6Tower_Nconst", &AntiKt6Tower_Nconst, &b_AntiKt6Tower_Nconst);
   fChain->SetBranchAddress("AntiKt6Tower_ptconst_default", &AntiKt6Tower_ptconst_default, &b_AntiKt6Tower_ptconst_default);
   fChain->SetBranchAddress("AntiKt6Tower_econst_default", &AntiKt6Tower_econst_default, &b_AntiKt6Tower_econst_default);
   fChain->SetBranchAddress("AntiKt6Tower_etaconst_default", &AntiKt6Tower_etaconst_default, &b_AntiKt6Tower_etaconst_default);
   fChain->SetBranchAddress("AntiKt6Tower_phiconst_default", &AntiKt6Tower_phiconst_default, &b_AntiKt6Tower_phiconst_default);
   fChain->SetBranchAddress("AntiKt6Tower_weightconst_default", &AntiKt6Tower_weightconst_default, &b_AntiKt6Tower_weightconst_default);
   fChain->SetBranchAddress("AntiKt6Tower_constscale_E", &AntiKt6Tower_constscale_E, &b_AntiKt6Tower_constscale_E);
   fChain->SetBranchAddress("AntiKt6Tower_constscale_pt", &AntiKt6Tower_constscale_pt, &b_AntiKt6Tower_constscale_pt);
   fChain->SetBranchAddress("AntiKt6Tower_constscale_m", &AntiKt6Tower_constscale_m, &b_AntiKt6Tower_constscale_m);
   fChain->SetBranchAddress("AntiKt6Tower_constscale_eta", &AntiKt6Tower_constscale_eta, &b_AntiKt6Tower_constscale_eta);
   fChain->SetBranchAddress("AntiKt6Tower_constscale_phi", &AntiKt6Tower_constscale_phi, &b_AntiKt6Tower_constscale_phi);
   fChain->SetBranchAddress("AntiKt6Tower_el_dr", &AntiKt6Tower_el_dr, &b_AntiKt6Tower_el_dr);
   fChain->SetBranchAddress("AntiKt6Tower_el_matched", &AntiKt6Tower_el_matched, &b_AntiKt6Tower_el_matched);
   fChain->SetBranchAddress("AntiKt6Tower_mu_dr", &AntiKt6Tower_mu_dr, &b_AntiKt6Tower_mu_dr);
   fChain->SetBranchAddress("AntiKt6Tower_mu_matched", &AntiKt6Tower_mu_matched, &b_AntiKt6Tower_mu_matched);
   fChain->SetBranchAddress("AntiKt6Tower_L1_dr", &AntiKt6Tower_L1_dr, &b_AntiKt6Tower_L1_dr);
   fChain->SetBranchAddress("AntiKt6Tower_L1_matched", &AntiKt6Tower_L1_matched, &b_AntiKt6Tower_L1_matched);
   fChain->SetBranchAddress("AntiKt6Tower_L2_dr", &AntiKt6Tower_L2_dr, &b_AntiKt6Tower_L2_dr);
   fChain->SetBranchAddress("AntiKt6Tower_L2_matched", &AntiKt6Tower_L2_matched, &b_AntiKt6Tower_L2_matched);
   fChain->SetBranchAddress("AntiKt6Tower_EF_dr", &AntiKt6Tower_EF_dr, &b_AntiKt6Tower_EF_dr);
   fChain->SetBranchAddress("AntiKt6Tower_EF_matched", &AntiKt6Tower_EF_matched, &b_AntiKt6Tower_EF_matched);
   fChain->SetBranchAddress("AntiKt6GhostTower_n", &AntiKt6GhostTower_n, &b_AntiKt6GhostTower_n);
   fChain->SetBranchAddress("AntiKt6GhostTower_E", &AntiKt6GhostTower_E, &b_AntiKt6GhostTower_E);
   fChain->SetBranchAddress("AntiKt6GhostTower_pt", &AntiKt6GhostTower_pt, &b_AntiKt6GhostTower_pt);
   fChain->SetBranchAddress("AntiKt6GhostTower_m", &AntiKt6GhostTower_m, &b_AntiKt6GhostTower_m);
   fChain->SetBranchAddress("AntiKt6GhostTower_eta", &AntiKt6GhostTower_eta, &b_AntiKt6GhostTower_eta);
   fChain->SetBranchAddress("AntiKt6GhostTower_phi", &AntiKt6GhostTower_phi, &b_AntiKt6GhostTower_phi);
   fChain->SetBranchAddress("AntiKt6GhostTower_EtaOrigin", &AntiKt6GhostTower_EtaOrigin, &b_AntiKt6GhostTower_EtaOrigin);
   fChain->SetBranchAddress("AntiKt6GhostTower_PhiOrigin", &AntiKt6GhostTower_PhiOrigin, &b_AntiKt6GhostTower_PhiOrigin);
   fChain->SetBranchAddress("AntiKt6GhostTower_MOrigin", &AntiKt6GhostTower_MOrigin, &b_AntiKt6GhostTower_MOrigin);
   fChain->SetBranchAddress("AntiKt6GhostTower_EtaOriginEM", &AntiKt6GhostTower_EtaOriginEM, &b_AntiKt6GhostTower_EtaOriginEM);
   fChain->SetBranchAddress("AntiKt6GhostTower_PhiOriginEM", &AntiKt6GhostTower_PhiOriginEM, &b_AntiKt6GhostTower_PhiOriginEM);
   fChain->SetBranchAddress("AntiKt6GhostTower_MOriginEM", &AntiKt6GhostTower_MOriginEM, &b_AntiKt6GhostTower_MOriginEM);
   fChain->SetBranchAddress("AntiKt6GhostTower_WIDTH", &AntiKt6GhostTower_WIDTH, &b_AntiKt6GhostTower_WIDTH);
   fChain->SetBranchAddress("AntiKt6GhostTower_n90", &AntiKt6GhostTower_n90, &b_AntiKt6GhostTower_n90);
   fChain->SetBranchAddress("AntiKt6GhostTower_Timing", &AntiKt6GhostTower_Timing, &b_AntiKt6GhostTower_Timing);
   fChain->SetBranchAddress("AntiKt6GhostTower_LArQuality", &AntiKt6GhostTower_LArQuality, &b_AntiKt6GhostTower_LArQuality);
   fChain->SetBranchAddress("AntiKt6GhostTower_nTrk", &AntiKt6GhostTower_nTrk, &b_AntiKt6GhostTower_nTrk);
   fChain->SetBranchAddress("AntiKt6GhostTower_sumPtTrk", &AntiKt6GhostTower_sumPtTrk, &b_AntiKt6GhostTower_sumPtTrk);
   fChain->SetBranchAddress("AntiKt6GhostTower_OriginIndex", &AntiKt6GhostTower_OriginIndex, &b_AntiKt6GhostTower_OriginIndex);
   fChain->SetBranchAddress("AntiKt6GhostTower_HECQuality", &AntiKt6GhostTower_HECQuality, &b_AntiKt6GhostTower_HECQuality);
   fChain->SetBranchAddress("AntiKt6GhostTower_NegativeE", &AntiKt6GhostTower_NegativeE, &b_AntiKt6GhostTower_NegativeE);
   fChain->SetBranchAddress("AntiKt6GhostTower_AverageLArQF", &AntiKt6GhostTower_AverageLArQF, &b_AntiKt6GhostTower_AverageLArQF);
   fChain->SetBranchAddress("AntiKt6GhostTower_YFlip12", &AntiKt6GhostTower_YFlip12, &b_AntiKt6GhostTower_YFlip12);
   fChain->SetBranchAddress("AntiKt6GhostTower_YFlip23", &AntiKt6GhostTower_YFlip23, &b_AntiKt6GhostTower_YFlip23);
   fChain->SetBranchAddress("AntiKt6GhostTower_BCH_CORR_CELL", &AntiKt6GhostTower_BCH_CORR_CELL, &b_AntiKt6GhostTower_BCH_CORR_CELL);
   fChain->SetBranchAddress("AntiKt6GhostTower_BCH_CORR_DOTX", &AntiKt6GhostTower_BCH_CORR_DOTX, &b_AntiKt6GhostTower_BCH_CORR_DOTX);
   fChain->SetBranchAddress("AntiKt6GhostTower_BCH_CORR_JET", &AntiKt6GhostTower_BCH_CORR_JET, &b_AntiKt6GhostTower_BCH_CORR_JET);
   fChain->SetBranchAddress("AntiKt6GhostTower_BCH_CORR_JET_FORCELL", &AntiKt6GhostTower_BCH_CORR_JET_FORCELL, &b_AntiKt6GhostTower_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("AntiKt6GhostTower_ENG_BAD_CELLS", &AntiKt6GhostTower_ENG_BAD_CELLS, &b_AntiKt6GhostTower_ENG_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6GhostTower_N_BAD_CELLS", &AntiKt6GhostTower_N_BAD_CELLS, &b_AntiKt6GhostTower_N_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6GhostTower_N_BAD_CELLS_CORR", &AntiKt6GhostTower_N_BAD_CELLS_CORR, &b_AntiKt6GhostTower_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("AntiKt6GhostTower_BAD_CELLS_CORR_E", &AntiKt6GhostTower_BAD_CELLS_CORR_E, &b_AntiKt6GhostTower_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("AntiKt6GhostTower_NumTowers", &AntiKt6GhostTower_NumTowers, &b_AntiKt6GhostTower_NumTowers);
   fChain->SetBranchAddress("AntiKt6GhostTower_ootFracCells5", &AntiKt6GhostTower_ootFracCells5, &b_AntiKt6GhostTower_ootFracCells5);
   fChain->SetBranchAddress("AntiKt6GhostTower_ootFracCells10", &AntiKt6GhostTower_ootFracCells10, &b_AntiKt6GhostTower_ootFracCells10);
   fChain->SetBranchAddress("AntiKt6GhostTower_ootFracClusters5", &AntiKt6GhostTower_ootFracClusters5, &b_AntiKt6GhostTower_ootFracClusters5);
   fChain->SetBranchAddress("AntiKt6GhostTower_ootFracClusters10", &AntiKt6GhostTower_ootFracClusters10, &b_AntiKt6GhostTower_ootFracClusters10);
   fChain->SetBranchAddress("AntiKt6GhostTower_SamplingMax", &AntiKt6GhostTower_SamplingMax, &b_AntiKt6GhostTower_SamplingMax);
   fChain->SetBranchAddress("AntiKt6GhostTower_fracSamplingMax", &AntiKt6GhostTower_fracSamplingMax, &b_AntiKt6GhostTower_fracSamplingMax);
   fChain->SetBranchAddress("AntiKt6GhostTower_hecf", &AntiKt6GhostTower_hecf, &b_AntiKt6GhostTower_hecf);
   fChain->SetBranchAddress("AntiKt6GhostTower_tgap3f", &AntiKt6GhostTower_tgap3f, &b_AntiKt6GhostTower_tgap3f);
   fChain->SetBranchAddress("AntiKt6GhostTower_isUgly", &AntiKt6GhostTower_isUgly, &b_AntiKt6GhostTower_isUgly);
   fChain->SetBranchAddress("AntiKt6GhostTower_isBadLooseMinus", &AntiKt6GhostTower_isBadLooseMinus, &b_AntiKt6GhostTower_isBadLooseMinus);
   fChain->SetBranchAddress("AntiKt6GhostTower_isBadLoose", &AntiKt6GhostTower_isBadLoose, &b_AntiKt6GhostTower_isBadLoose);
   fChain->SetBranchAddress("AntiKt6GhostTower_isBadMedium", &AntiKt6GhostTower_isBadMedium, &b_AntiKt6GhostTower_isBadMedium);
   fChain->SetBranchAddress("AntiKt6GhostTower_isBadTight", &AntiKt6GhostTower_isBadTight, &b_AntiKt6GhostTower_isBadTight);
   fChain->SetBranchAddress("AntiKt6GhostTower_emfrac", &AntiKt6GhostTower_emfrac, &b_AntiKt6GhostTower_emfrac);
   fChain->SetBranchAddress("AntiKt6GhostTower_Offset", &AntiKt6GhostTower_Offset, &b_AntiKt6GhostTower_Offset);
   fChain->SetBranchAddress("AntiKt6GhostTower_EMJES", &AntiKt6GhostTower_EMJES, &b_AntiKt6GhostTower_EMJES);
   fChain->SetBranchAddress("AntiKt6GhostTower_EMJES_EtaCorr", &AntiKt6GhostTower_EMJES_EtaCorr, &b_AntiKt6GhostTower_EMJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6GhostTower_EMJESnooffset", &AntiKt6GhostTower_EMJESnooffset, &b_AntiKt6GhostTower_EMJESnooffset);
   fChain->SetBranchAddress("AntiKt6GhostTower_GCWJES", &AntiKt6GhostTower_GCWJES, &b_AntiKt6GhostTower_GCWJES);
   fChain->SetBranchAddress("AntiKt6GhostTower_GCWJES_EtaCorr", &AntiKt6GhostTower_GCWJES_EtaCorr, &b_AntiKt6GhostTower_GCWJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6GhostTower_CB", &AntiKt6GhostTower_CB, &b_AntiKt6GhostTower_CB);
   fChain->SetBranchAddress("AntiKt6GhostTower_LCJES", &AntiKt6GhostTower_LCJES, &b_AntiKt6GhostTower_LCJES);
   fChain->SetBranchAddress("AntiKt6GhostTower_emscale_E", &AntiKt6GhostTower_emscale_E, &b_AntiKt6GhostTower_emscale_E);
   fChain->SetBranchAddress("AntiKt6GhostTower_emscale_pt", &AntiKt6GhostTower_emscale_pt, &b_AntiKt6GhostTower_emscale_pt);
   fChain->SetBranchAddress("AntiKt6GhostTower_emscale_m", &AntiKt6GhostTower_emscale_m, &b_AntiKt6GhostTower_emscale_m);
   fChain->SetBranchAddress("AntiKt6GhostTower_emscale_eta", &AntiKt6GhostTower_emscale_eta, &b_AntiKt6GhostTower_emscale_eta);
   fChain->SetBranchAddress("AntiKt6GhostTower_emscale_phi", &AntiKt6GhostTower_emscale_phi, &b_AntiKt6GhostTower_emscale_phi);
   fChain->SetBranchAddress("AntiKt6GhostTower_jvtx_x", &AntiKt6GhostTower_jvtx_x, &b_AntiKt6GhostTower_jvtx_x);
   fChain->SetBranchAddress("AntiKt6GhostTower_jvtx_y", &AntiKt6GhostTower_jvtx_y, &b_AntiKt6GhostTower_jvtx_y);
   fChain->SetBranchAddress("AntiKt6GhostTower_jvtx_z", &AntiKt6GhostTower_jvtx_z, &b_AntiKt6GhostTower_jvtx_z);
   fChain->SetBranchAddress("AntiKt6GhostTower_jvtxf", &AntiKt6GhostTower_jvtxf, &b_AntiKt6GhostTower_jvtxf);
   fChain->SetBranchAddress("AntiKt6GhostTower_GSCFactorF", &AntiKt6GhostTower_GSCFactorF, &b_AntiKt6GhostTower_GSCFactorF);
   fChain->SetBranchAddress("AntiKt6GhostTower_WidthFraction", &AntiKt6GhostTower_WidthFraction, &b_AntiKt6GhostTower_WidthFraction);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_PreSamplerB", &AntiKt6GhostTower_e_PreSamplerB, &b_AntiKt6GhostTower_e_PreSamplerB);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_EMB1", &AntiKt6GhostTower_e_EMB1, &b_AntiKt6GhostTower_e_EMB1);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_EMB2", &AntiKt6GhostTower_e_EMB2, &b_AntiKt6GhostTower_e_EMB2);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_EMB3", &AntiKt6GhostTower_e_EMB3, &b_AntiKt6GhostTower_e_EMB3);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_PreSamplerE", &AntiKt6GhostTower_e_PreSamplerE, &b_AntiKt6GhostTower_e_PreSamplerE);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_EME1", &AntiKt6GhostTower_e_EME1, &b_AntiKt6GhostTower_e_EME1);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_EME2", &AntiKt6GhostTower_e_EME2, &b_AntiKt6GhostTower_e_EME2);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_EME3", &AntiKt6GhostTower_e_EME3, &b_AntiKt6GhostTower_e_EME3);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_HEC0", &AntiKt6GhostTower_e_HEC0, &b_AntiKt6GhostTower_e_HEC0);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_HEC1", &AntiKt6GhostTower_e_HEC1, &b_AntiKt6GhostTower_e_HEC1);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_HEC2", &AntiKt6GhostTower_e_HEC2, &b_AntiKt6GhostTower_e_HEC2);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_HEC3", &AntiKt6GhostTower_e_HEC3, &b_AntiKt6GhostTower_e_HEC3);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileBar0", &AntiKt6GhostTower_e_TileBar0, &b_AntiKt6GhostTower_e_TileBar0);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileBar1", &AntiKt6GhostTower_e_TileBar1, &b_AntiKt6GhostTower_e_TileBar1);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileBar2", &AntiKt6GhostTower_e_TileBar2, &b_AntiKt6GhostTower_e_TileBar2);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileGap1", &AntiKt6GhostTower_e_TileGap1, &b_AntiKt6GhostTower_e_TileGap1);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileGap2", &AntiKt6GhostTower_e_TileGap2, &b_AntiKt6GhostTower_e_TileGap2);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileGap3", &AntiKt6GhostTower_e_TileGap3, &b_AntiKt6GhostTower_e_TileGap3);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileExt0", &AntiKt6GhostTower_e_TileExt0, &b_AntiKt6GhostTower_e_TileExt0);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileExt1", &AntiKt6GhostTower_e_TileExt1, &b_AntiKt6GhostTower_e_TileExt1);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_TileExt2", &AntiKt6GhostTower_e_TileExt2, &b_AntiKt6GhostTower_e_TileExt2);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_FCAL0", &AntiKt6GhostTower_e_FCAL0, &b_AntiKt6GhostTower_e_FCAL0);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_FCAL1", &AntiKt6GhostTower_e_FCAL1, &b_AntiKt6GhostTower_e_FCAL1);
   fChain->SetBranchAddress("AntiKt6GhostTower_e_FCAL2", &AntiKt6GhostTower_e_FCAL2, &b_AntiKt6GhostTower_e_FCAL2);
   fChain->SetBranchAddress("AntiKt6GhostTower_shapeBins", &AntiKt6GhostTower_shapeBins, &b_AntiKt6GhostTower_shapeBins);
   fChain->SetBranchAddress("AntiKt6GhostTower_Nconst", &AntiKt6GhostTower_Nconst, &b_AntiKt6GhostTower_Nconst);
   fChain->SetBranchAddress("AntiKt6GhostTower_ptconst_default", &AntiKt6GhostTower_ptconst_default, &b_AntiKt6GhostTower_ptconst_default);
   fChain->SetBranchAddress("AntiKt6GhostTower_econst_default", &AntiKt6GhostTower_econst_default, &b_AntiKt6GhostTower_econst_default);
   fChain->SetBranchAddress("AntiKt6GhostTower_etaconst_default", &AntiKt6GhostTower_etaconst_default, &b_AntiKt6GhostTower_etaconst_default);
   fChain->SetBranchAddress("AntiKt6GhostTower_phiconst_default", &AntiKt6GhostTower_phiconst_default, &b_AntiKt6GhostTower_phiconst_default);
   fChain->SetBranchAddress("AntiKt6GhostTower_weightconst_default", &AntiKt6GhostTower_weightconst_default, &b_AntiKt6GhostTower_weightconst_default);
   fChain->SetBranchAddress("AntiKt6GhostTower_constscale_E", &AntiKt6GhostTower_constscale_E, &b_AntiKt6GhostTower_constscale_E);
   fChain->SetBranchAddress("AntiKt6GhostTower_constscale_pt", &AntiKt6GhostTower_constscale_pt, &b_AntiKt6GhostTower_constscale_pt);
   fChain->SetBranchAddress("AntiKt6GhostTower_constscale_m", &AntiKt6GhostTower_constscale_m, &b_AntiKt6GhostTower_constscale_m);
   fChain->SetBranchAddress("AntiKt6GhostTower_constscale_eta", &AntiKt6GhostTower_constscale_eta, &b_AntiKt6GhostTower_constscale_eta);
   fChain->SetBranchAddress("AntiKt6GhostTower_constscale_phi", &AntiKt6GhostTower_constscale_phi, &b_AntiKt6GhostTower_constscale_phi);
   fChain->SetBranchAddress("AntiKt6GhostTower_el_dr", &AntiKt6GhostTower_el_dr, &b_AntiKt6GhostTower_el_dr);
   fChain->SetBranchAddress("AntiKt6GhostTower_el_matched", &AntiKt6GhostTower_el_matched, &b_AntiKt6GhostTower_el_matched);
   fChain->SetBranchAddress("AntiKt6GhostTower_mu_dr", &AntiKt6GhostTower_mu_dr, &b_AntiKt6GhostTower_mu_dr);
   fChain->SetBranchAddress("AntiKt6GhostTower_mu_matched", &AntiKt6GhostTower_mu_matched, &b_AntiKt6GhostTower_mu_matched);
   fChain->SetBranchAddress("AntiKt6GhostTower_L1_dr", &AntiKt6GhostTower_L1_dr, &b_AntiKt6GhostTower_L1_dr);
   fChain->SetBranchAddress("AntiKt6GhostTower_L1_matched", &AntiKt6GhostTower_L1_matched, &b_AntiKt6GhostTower_L1_matched);
   fChain->SetBranchAddress("AntiKt6GhostTower_L2_dr", &AntiKt6GhostTower_L2_dr, &b_AntiKt6GhostTower_L2_dr);
   fChain->SetBranchAddress("AntiKt6GhostTower_L2_matched", &AntiKt6GhostTower_L2_matched, &b_AntiKt6GhostTower_L2_matched);
   fChain->SetBranchAddress("AntiKt6GhostTower_EF_dr", &AntiKt6GhostTower_EF_dr, &b_AntiKt6GhostTower_EF_dr);
   fChain->SetBranchAddress("AntiKt6GhostTower_EF_matched", &AntiKt6GhostTower_EF_matched, &b_AntiKt6GhostTower_EF_matched);
   fChain->SetBranchAddress("AntiKt6LCTopo_n", &AntiKt6LCTopo_n, &b_AntiKt6LCTopo_n);
   fChain->SetBranchAddress("AntiKt6LCTopo_E", &AntiKt6LCTopo_E, &b_AntiKt6LCTopo_E);
   fChain->SetBranchAddress("AntiKt6LCTopo_pt", &AntiKt6LCTopo_pt, &b_AntiKt6LCTopo_pt);
   fChain->SetBranchAddress("AntiKt6LCTopo_m", &AntiKt6LCTopo_m, &b_AntiKt6LCTopo_m);
   fChain->SetBranchAddress("AntiKt6LCTopo_eta", &AntiKt6LCTopo_eta, &b_AntiKt6LCTopo_eta);
   fChain->SetBranchAddress("AntiKt6LCTopo_phi", &AntiKt6LCTopo_phi, &b_AntiKt6LCTopo_phi);
   fChain->SetBranchAddress("AntiKt6LCTopo_EtaOrigin", &AntiKt6LCTopo_EtaOrigin, &b_AntiKt6LCTopo_EtaOrigin);
   fChain->SetBranchAddress("AntiKt6LCTopo_PhiOrigin", &AntiKt6LCTopo_PhiOrigin, &b_AntiKt6LCTopo_PhiOrigin);
   fChain->SetBranchAddress("AntiKt6LCTopo_MOrigin", &AntiKt6LCTopo_MOrigin, &b_AntiKt6LCTopo_MOrigin);
   fChain->SetBranchAddress("AntiKt6LCTopo_EtaOriginEM", &AntiKt6LCTopo_EtaOriginEM, &b_AntiKt6LCTopo_EtaOriginEM);
   fChain->SetBranchAddress("AntiKt6LCTopo_PhiOriginEM", &AntiKt6LCTopo_PhiOriginEM, &b_AntiKt6LCTopo_PhiOriginEM);
   fChain->SetBranchAddress("AntiKt6LCTopo_MOriginEM", &AntiKt6LCTopo_MOriginEM, &b_AntiKt6LCTopo_MOriginEM);
   fChain->SetBranchAddress("AntiKt6LCTopo_WIDTH", &AntiKt6LCTopo_WIDTH, &b_AntiKt6LCTopo_WIDTH);
   fChain->SetBranchAddress("AntiKt6LCTopo_n90", &AntiKt6LCTopo_n90, &b_AntiKt6LCTopo_n90);
   fChain->SetBranchAddress("AntiKt6LCTopo_Timing", &AntiKt6LCTopo_Timing, &b_AntiKt6LCTopo_Timing);
   fChain->SetBranchAddress("AntiKt6LCTopo_LArQuality", &AntiKt6LCTopo_LArQuality, &b_AntiKt6LCTopo_LArQuality);
   fChain->SetBranchAddress("AntiKt6LCTopo_nTrk", &AntiKt6LCTopo_nTrk, &b_AntiKt6LCTopo_nTrk);
   fChain->SetBranchAddress("AntiKt6LCTopo_sumPtTrk", &AntiKt6LCTopo_sumPtTrk, &b_AntiKt6LCTopo_sumPtTrk);
   fChain->SetBranchAddress("AntiKt6LCTopo_OriginIndex", &AntiKt6LCTopo_OriginIndex, &b_AntiKt6LCTopo_OriginIndex);
   fChain->SetBranchAddress("AntiKt6LCTopo_HECQuality", &AntiKt6LCTopo_HECQuality, &b_AntiKt6LCTopo_HECQuality);
   fChain->SetBranchAddress("AntiKt6LCTopo_NegativeE", &AntiKt6LCTopo_NegativeE, &b_AntiKt6LCTopo_NegativeE);
   fChain->SetBranchAddress("AntiKt6LCTopo_AverageLArQF", &AntiKt6LCTopo_AverageLArQF, &b_AntiKt6LCTopo_AverageLArQF);
   fChain->SetBranchAddress("AntiKt6LCTopo_YFlip12", &AntiKt6LCTopo_YFlip12, &b_AntiKt6LCTopo_YFlip12);
   fChain->SetBranchAddress("AntiKt6LCTopo_YFlip23", &AntiKt6LCTopo_YFlip23, &b_AntiKt6LCTopo_YFlip23);
   fChain->SetBranchAddress("AntiKt6LCTopo_BCH_CORR_CELL", &AntiKt6LCTopo_BCH_CORR_CELL, &b_AntiKt6LCTopo_BCH_CORR_CELL);
   fChain->SetBranchAddress("AntiKt6LCTopo_BCH_CORR_DOTX", &AntiKt6LCTopo_BCH_CORR_DOTX, &b_AntiKt6LCTopo_BCH_CORR_DOTX);
   fChain->SetBranchAddress("AntiKt6LCTopo_BCH_CORR_JET", &AntiKt6LCTopo_BCH_CORR_JET, &b_AntiKt6LCTopo_BCH_CORR_JET);
   fChain->SetBranchAddress("AntiKt6LCTopo_BCH_CORR_JET_FORCELL", &AntiKt6LCTopo_BCH_CORR_JET_FORCELL, &b_AntiKt6LCTopo_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("AntiKt6LCTopo_ENG_BAD_CELLS", &AntiKt6LCTopo_ENG_BAD_CELLS, &b_AntiKt6LCTopo_ENG_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6LCTopo_N_BAD_CELLS", &AntiKt6LCTopo_N_BAD_CELLS, &b_AntiKt6LCTopo_N_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6LCTopo_N_BAD_CELLS_CORR", &AntiKt6LCTopo_N_BAD_CELLS_CORR, &b_AntiKt6LCTopo_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("AntiKt6LCTopo_BAD_CELLS_CORR_E", &AntiKt6LCTopo_BAD_CELLS_CORR_E, &b_AntiKt6LCTopo_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("AntiKt6LCTopo_NumTowers", &AntiKt6LCTopo_NumTowers, &b_AntiKt6LCTopo_NumTowers);
   fChain->SetBranchAddress("AntiKt6LCTopo_ootFracCells5", &AntiKt6LCTopo_ootFracCells5, &b_AntiKt6LCTopo_ootFracCells5);
   fChain->SetBranchAddress("AntiKt6LCTopo_ootFracCells10", &AntiKt6LCTopo_ootFracCells10, &b_AntiKt6LCTopo_ootFracCells10);
   fChain->SetBranchAddress("AntiKt6LCTopo_ootFracClusters5", &AntiKt6LCTopo_ootFracClusters5, &b_AntiKt6LCTopo_ootFracClusters5);
   fChain->SetBranchAddress("AntiKt6LCTopo_ootFracClusters10", &AntiKt6LCTopo_ootFracClusters10, &b_AntiKt6LCTopo_ootFracClusters10);
   fChain->SetBranchAddress("AntiKt6LCTopo_SamplingMax", &AntiKt6LCTopo_SamplingMax, &b_AntiKt6LCTopo_SamplingMax);
   fChain->SetBranchAddress("AntiKt6LCTopo_fracSamplingMax", &AntiKt6LCTopo_fracSamplingMax, &b_AntiKt6LCTopo_fracSamplingMax);
   fChain->SetBranchAddress("AntiKt6LCTopo_hecf", &AntiKt6LCTopo_hecf, &b_AntiKt6LCTopo_hecf);
   fChain->SetBranchAddress("AntiKt6LCTopo_tgap3f", &AntiKt6LCTopo_tgap3f, &b_AntiKt6LCTopo_tgap3f);
   fChain->SetBranchAddress("AntiKt6LCTopo_isUgly", &AntiKt6LCTopo_isUgly, &b_AntiKt6LCTopo_isUgly);
   fChain->SetBranchAddress("AntiKt6LCTopo_isBadLooseMinus", &AntiKt6LCTopo_isBadLooseMinus, &b_AntiKt6LCTopo_isBadLooseMinus);
   fChain->SetBranchAddress("AntiKt6LCTopo_isBadLoose", &AntiKt6LCTopo_isBadLoose, &b_AntiKt6LCTopo_isBadLoose);
   fChain->SetBranchAddress("AntiKt6LCTopo_isBadMedium", &AntiKt6LCTopo_isBadMedium, &b_AntiKt6LCTopo_isBadMedium);
   fChain->SetBranchAddress("AntiKt6LCTopo_isBadTight", &AntiKt6LCTopo_isBadTight, &b_AntiKt6LCTopo_isBadTight);
   fChain->SetBranchAddress("AntiKt6LCTopo_emfrac", &AntiKt6LCTopo_emfrac, &b_AntiKt6LCTopo_emfrac);
   fChain->SetBranchAddress("AntiKt6LCTopo_Offset", &AntiKt6LCTopo_Offset, &b_AntiKt6LCTopo_Offset);
   fChain->SetBranchAddress("AntiKt6LCTopo_EMJES", &AntiKt6LCTopo_EMJES, &b_AntiKt6LCTopo_EMJES);
   fChain->SetBranchAddress("AntiKt6LCTopo_EMJES_EtaCorr", &AntiKt6LCTopo_EMJES_EtaCorr, &b_AntiKt6LCTopo_EMJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6LCTopo_EMJESnooffset", &AntiKt6LCTopo_EMJESnooffset, &b_AntiKt6LCTopo_EMJESnooffset);
   fChain->SetBranchAddress("AntiKt6LCTopo_GCWJES", &AntiKt6LCTopo_GCWJES, &b_AntiKt6LCTopo_GCWJES);
   fChain->SetBranchAddress("AntiKt6LCTopo_GCWJES_EtaCorr", &AntiKt6LCTopo_GCWJES_EtaCorr, &b_AntiKt6LCTopo_GCWJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6LCTopo_CB", &AntiKt6LCTopo_CB, &b_AntiKt6LCTopo_CB);
   fChain->SetBranchAddress("AntiKt6LCTopo_LCJES", &AntiKt6LCTopo_LCJES, &b_AntiKt6LCTopo_LCJES);
   fChain->SetBranchAddress("AntiKt6LCTopo_emscale_E", &AntiKt6LCTopo_emscale_E, &b_AntiKt6LCTopo_emscale_E);
   fChain->SetBranchAddress("AntiKt6LCTopo_emscale_pt", &AntiKt6LCTopo_emscale_pt, &b_AntiKt6LCTopo_emscale_pt);
   fChain->SetBranchAddress("AntiKt6LCTopo_emscale_m", &AntiKt6LCTopo_emscale_m, &b_AntiKt6LCTopo_emscale_m);
   fChain->SetBranchAddress("AntiKt6LCTopo_emscale_eta", &AntiKt6LCTopo_emscale_eta, &b_AntiKt6LCTopo_emscale_eta);
   fChain->SetBranchAddress("AntiKt6LCTopo_emscale_phi", &AntiKt6LCTopo_emscale_phi, &b_AntiKt6LCTopo_emscale_phi);
   fChain->SetBranchAddress("AntiKt6LCTopo_jvtx_x", &AntiKt6LCTopo_jvtx_x, &b_AntiKt6LCTopo_jvtx_x);
   fChain->SetBranchAddress("AntiKt6LCTopo_jvtx_y", &AntiKt6LCTopo_jvtx_y, &b_AntiKt6LCTopo_jvtx_y);
   fChain->SetBranchAddress("AntiKt6LCTopo_jvtx_z", &AntiKt6LCTopo_jvtx_z, &b_AntiKt6LCTopo_jvtx_z);
   fChain->SetBranchAddress("AntiKt6LCTopo_jvtxf", &AntiKt6LCTopo_jvtxf, &b_AntiKt6LCTopo_jvtxf);
   fChain->SetBranchAddress("AntiKt6LCTopo_GSCFactorF", &AntiKt6LCTopo_GSCFactorF, &b_AntiKt6LCTopo_GSCFactorF);
   fChain->SetBranchAddress("AntiKt6LCTopo_WidthFraction", &AntiKt6LCTopo_WidthFraction, &b_AntiKt6LCTopo_WidthFraction);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_PreSamplerB", &AntiKt6LCTopo_e_PreSamplerB, &b_AntiKt6LCTopo_e_PreSamplerB);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_EMB1", &AntiKt6LCTopo_e_EMB1, &b_AntiKt6LCTopo_e_EMB1);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_EMB2", &AntiKt6LCTopo_e_EMB2, &b_AntiKt6LCTopo_e_EMB2);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_EMB3", &AntiKt6LCTopo_e_EMB3, &b_AntiKt6LCTopo_e_EMB3);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_PreSamplerE", &AntiKt6LCTopo_e_PreSamplerE, &b_AntiKt6LCTopo_e_PreSamplerE);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_EME1", &AntiKt6LCTopo_e_EME1, &b_AntiKt6LCTopo_e_EME1);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_EME2", &AntiKt6LCTopo_e_EME2, &b_AntiKt6LCTopo_e_EME2);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_EME3", &AntiKt6LCTopo_e_EME3, &b_AntiKt6LCTopo_e_EME3);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_HEC0", &AntiKt6LCTopo_e_HEC0, &b_AntiKt6LCTopo_e_HEC0);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_HEC1", &AntiKt6LCTopo_e_HEC1, &b_AntiKt6LCTopo_e_HEC1);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_HEC2", &AntiKt6LCTopo_e_HEC2, &b_AntiKt6LCTopo_e_HEC2);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_HEC3", &AntiKt6LCTopo_e_HEC3, &b_AntiKt6LCTopo_e_HEC3);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileBar0", &AntiKt6LCTopo_e_TileBar0, &b_AntiKt6LCTopo_e_TileBar0);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileBar1", &AntiKt6LCTopo_e_TileBar1, &b_AntiKt6LCTopo_e_TileBar1);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileBar2", &AntiKt6LCTopo_e_TileBar2, &b_AntiKt6LCTopo_e_TileBar2);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileGap1", &AntiKt6LCTopo_e_TileGap1, &b_AntiKt6LCTopo_e_TileGap1);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileGap2", &AntiKt6LCTopo_e_TileGap2, &b_AntiKt6LCTopo_e_TileGap2);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileGap3", &AntiKt6LCTopo_e_TileGap3, &b_AntiKt6LCTopo_e_TileGap3);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileExt0", &AntiKt6LCTopo_e_TileExt0, &b_AntiKt6LCTopo_e_TileExt0);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileExt1", &AntiKt6LCTopo_e_TileExt1, &b_AntiKt6LCTopo_e_TileExt1);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_TileExt2", &AntiKt6LCTopo_e_TileExt2, &b_AntiKt6LCTopo_e_TileExt2);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_FCAL0", &AntiKt6LCTopo_e_FCAL0, &b_AntiKt6LCTopo_e_FCAL0);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_FCAL1", &AntiKt6LCTopo_e_FCAL1, &b_AntiKt6LCTopo_e_FCAL1);
   fChain->SetBranchAddress("AntiKt6LCTopo_e_FCAL2", &AntiKt6LCTopo_e_FCAL2, &b_AntiKt6LCTopo_e_FCAL2);
   fChain->SetBranchAddress("AntiKt6LCTopo_shapeBins", &AntiKt6LCTopo_shapeBins, &b_AntiKt6LCTopo_shapeBins);
   fChain->SetBranchAddress("AntiKt6LCTopo_Nconst", &AntiKt6LCTopo_Nconst, &b_AntiKt6LCTopo_Nconst);
   fChain->SetBranchAddress("AntiKt6LCTopo_ptconst_default", &AntiKt6LCTopo_ptconst_default, &b_AntiKt6LCTopo_ptconst_default);
   fChain->SetBranchAddress("AntiKt6LCTopo_econst_default", &AntiKt6LCTopo_econst_default, &b_AntiKt6LCTopo_econst_default);
   fChain->SetBranchAddress("AntiKt6LCTopo_etaconst_default", &AntiKt6LCTopo_etaconst_default, &b_AntiKt6LCTopo_etaconst_default);
   fChain->SetBranchAddress("AntiKt6LCTopo_phiconst_default", &AntiKt6LCTopo_phiconst_default, &b_AntiKt6LCTopo_phiconst_default);
   fChain->SetBranchAddress("AntiKt6LCTopo_weightconst_default", &AntiKt6LCTopo_weightconst_default, &b_AntiKt6LCTopo_weightconst_default);
   fChain->SetBranchAddress("AntiKt6LCTopo_constscale_E", &AntiKt6LCTopo_constscale_E, &b_AntiKt6LCTopo_constscale_E);
   fChain->SetBranchAddress("AntiKt6LCTopo_constscale_pt", &AntiKt6LCTopo_constscale_pt, &b_AntiKt6LCTopo_constscale_pt);
   fChain->SetBranchAddress("AntiKt6LCTopo_constscale_m", &AntiKt6LCTopo_constscale_m, &b_AntiKt6LCTopo_constscale_m);
   fChain->SetBranchAddress("AntiKt6LCTopo_constscale_eta", &AntiKt6LCTopo_constscale_eta, &b_AntiKt6LCTopo_constscale_eta);
   fChain->SetBranchAddress("AntiKt6LCTopo_constscale_phi", &AntiKt6LCTopo_constscale_phi, &b_AntiKt6LCTopo_constscale_phi);
   fChain->SetBranchAddress("AntiKt6LCTopo_el_dr", &AntiKt6LCTopo_el_dr, &b_AntiKt6LCTopo_el_dr);
   fChain->SetBranchAddress("AntiKt6LCTopo_el_matched", &AntiKt6LCTopo_el_matched, &b_AntiKt6LCTopo_el_matched);
   fChain->SetBranchAddress("AntiKt6LCTopo_mu_dr", &AntiKt6LCTopo_mu_dr, &b_AntiKt6LCTopo_mu_dr);
   fChain->SetBranchAddress("AntiKt6LCTopo_mu_matched", &AntiKt6LCTopo_mu_matched, &b_AntiKt6LCTopo_mu_matched);
   fChain->SetBranchAddress("AntiKt6LCTopo_L1_dr", &AntiKt6LCTopo_L1_dr, &b_AntiKt6LCTopo_L1_dr);
   fChain->SetBranchAddress("AntiKt6LCTopo_L1_matched", &AntiKt6LCTopo_L1_matched, &b_AntiKt6LCTopo_L1_matched);
   fChain->SetBranchAddress("AntiKt6LCTopo_L2_dr", &AntiKt6LCTopo_L2_dr, &b_AntiKt6LCTopo_L2_dr);
   fChain->SetBranchAddress("AntiKt6LCTopo_L2_matched", &AntiKt6LCTopo_L2_matched, &b_AntiKt6LCTopo_L2_matched);
   fChain->SetBranchAddress("AntiKt6LCTopo_EF_dr", &AntiKt6LCTopo_EF_dr, &b_AntiKt6LCTopo_EF_dr);
   fChain->SetBranchAddress("AntiKt6LCTopo_EF_matched", &AntiKt6LCTopo_EF_matched, &b_AntiKt6LCTopo_EF_matched);
   fChain->SetBranchAddress("AntiKt6TopoEM_n", &AntiKt6TopoEM_n, &b_AntiKt6TopoEM_n);
   fChain->SetBranchAddress("AntiKt6TopoEM_E", &AntiKt6TopoEM_E, &b_AntiKt6TopoEM_E);
   fChain->SetBranchAddress("AntiKt6TopoEM_pt", &AntiKt6TopoEM_pt, &b_AntiKt6TopoEM_pt);
   fChain->SetBranchAddress("AntiKt6TopoEM_m", &AntiKt6TopoEM_m, &b_AntiKt6TopoEM_m);
   fChain->SetBranchAddress("AntiKt6TopoEM_eta", &AntiKt6TopoEM_eta, &b_AntiKt6TopoEM_eta);
   fChain->SetBranchAddress("AntiKt6TopoEM_phi", &AntiKt6TopoEM_phi, &b_AntiKt6TopoEM_phi);
   fChain->SetBranchAddress("AntiKt6TopoEM_EtaOrigin", &AntiKt6TopoEM_EtaOrigin, &b_AntiKt6TopoEM_EtaOrigin);
   fChain->SetBranchAddress("AntiKt6TopoEM_PhiOrigin", &AntiKt6TopoEM_PhiOrigin, &b_AntiKt6TopoEM_PhiOrigin);
   fChain->SetBranchAddress("AntiKt6TopoEM_MOrigin", &AntiKt6TopoEM_MOrigin, &b_AntiKt6TopoEM_MOrigin);
   fChain->SetBranchAddress("AntiKt6TopoEM_EtaOriginEM", &AntiKt6TopoEM_EtaOriginEM, &b_AntiKt6TopoEM_EtaOriginEM);
   fChain->SetBranchAddress("AntiKt6TopoEM_PhiOriginEM", &AntiKt6TopoEM_PhiOriginEM, &b_AntiKt6TopoEM_PhiOriginEM);
   fChain->SetBranchAddress("AntiKt6TopoEM_MOriginEM", &AntiKt6TopoEM_MOriginEM, &b_AntiKt6TopoEM_MOriginEM);
   fChain->SetBranchAddress("AntiKt6TopoEM_WIDTH", &AntiKt6TopoEM_WIDTH, &b_AntiKt6TopoEM_WIDTH);
   fChain->SetBranchAddress("AntiKt6TopoEM_n90", &AntiKt6TopoEM_n90, &b_AntiKt6TopoEM_n90);
   fChain->SetBranchAddress("AntiKt6TopoEM_Timing", &AntiKt6TopoEM_Timing, &b_AntiKt6TopoEM_Timing);
   fChain->SetBranchAddress("AntiKt6TopoEM_LArQuality", &AntiKt6TopoEM_LArQuality, &b_AntiKt6TopoEM_LArQuality);
   fChain->SetBranchAddress("AntiKt6TopoEM_nTrk", &AntiKt6TopoEM_nTrk, &b_AntiKt6TopoEM_nTrk);
   fChain->SetBranchAddress("AntiKt6TopoEM_sumPtTrk", &AntiKt6TopoEM_sumPtTrk, &b_AntiKt6TopoEM_sumPtTrk);
   fChain->SetBranchAddress("AntiKt6TopoEM_OriginIndex", &AntiKt6TopoEM_OriginIndex, &b_AntiKt6TopoEM_OriginIndex);
   fChain->SetBranchAddress("AntiKt6TopoEM_HECQuality", &AntiKt6TopoEM_HECQuality, &b_AntiKt6TopoEM_HECQuality);
   fChain->SetBranchAddress("AntiKt6TopoEM_NegativeE", &AntiKt6TopoEM_NegativeE, &b_AntiKt6TopoEM_NegativeE);
   fChain->SetBranchAddress("AntiKt6TopoEM_AverageLArQF", &AntiKt6TopoEM_AverageLArQF, &b_AntiKt6TopoEM_AverageLArQF);
   fChain->SetBranchAddress("AntiKt6TopoEM_YFlip12", &AntiKt6TopoEM_YFlip12, &b_AntiKt6TopoEM_YFlip12);
   fChain->SetBranchAddress("AntiKt6TopoEM_YFlip23", &AntiKt6TopoEM_YFlip23, &b_AntiKt6TopoEM_YFlip23);
   fChain->SetBranchAddress("AntiKt6TopoEM_BCH_CORR_CELL", &AntiKt6TopoEM_BCH_CORR_CELL, &b_AntiKt6TopoEM_BCH_CORR_CELL);
   fChain->SetBranchAddress("AntiKt6TopoEM_BCH_CORR_DOTX", &AntiKt6TopoEM_BCH_CORR_DOTX, &b_AntiKt6TopoEM_BCH_CORR_DOTX);
   fChain->SetBranchAddress("AntiKt6TopoEM_BCH_CORR_JET", &AntiKt6TopoEM_BCH_CORR_JET, &b_AntiKt6TopoEM_BCH_CORR_JET);
   fChain->SetBranchAddress("AntiKt6TopoEM_BCH_CORR_JET_FORCELL", &AntiKt6TopoEM_BCH_CORR_JET_FORCELL, &b_AntiKt6TopoEM_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("AntiKt6TopoEM_ENG_BAD_CELLS", &AntiKt6TopoEM_ENG_BAD_CELLS, &b_AntiKt6TopoEM_ENG_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6TopoEM_N_BAD_CELLS", &AntiKt6TopoEM_N_BAD_CELLS, &b_AntiKt6TopoEM_N_BAD_CELLS);
   fChain->SetBranchAddress("AntiKt6TopoEM_N_BAD_CELLS_CORR", &AntiKt6TopoEM_N_BAD_CELLS_CORR, &b_AntiKt6TopoEM_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("AntiKt6TopoEM_BAD_CELLS_CORR_E", &AntiKt6TopoEM_BAD_CELLS_CORR_E, &b_AntiKt6TopoEM_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("AntiKt6TopoEM_NumTowers", &AntiKt6TopoEM_NumTowers, &b_AntiKt6TopoEM_NumTowers);
   fChain->SetBranchAddress("AntiKt6TopoEM_ootFracCells5", &AntiKt6TopoEM_ootFracCells5, &b_AntiKt6TopoEM_ootFracCells5);
   fChain->SetBranchAddress("AntiKt6TopoEM_ootFracCells10", &AntiKt6TopoEM_ootFracCells10, &b_AntiKt6TopoEM_ootFracCells10);
   fChain->SetBranchAddress("AntiKt6TopoEM_ootFracClusters5", &AntiKt6TopoEM_ootFracClusters5, &b_AntiKt6TopoEM_ootFracClusters5);
   fChain->SetBranchAddress("AntiKt6TopoEM_ootFracClusters10", &AntiKt6TopoEM_ootFracClusters10, &b_AntiKt6TopoEM_ootFracClusters10);
   fChain->SetBranchAddress("AntiKt6TopoEM_SamplingMax", &AntiKt6TopoEM_SamplingMax, &b_AntiKt6TopoEM_SamplingMax);
   fChain->SetBranchAddress("AntiKt6TopoEM_fracSamplingMax", &AntiKt6TopoEM_fracSamplingMax, &b_AntiKt6TopoEM_fracSamplingMax);
   fChain->SetBranchAddress("AntiKt6TopoEM_hecf", &AntiKt6TopoEM_hecf, &b_AntiKt6TopoEM_hecf);
   fChain->SetBranchAddress("AntiKt6TopoEM_tgap3f", &AntiKt6TopoEM_tgap3f, &b_AntiKt6TopoEM_tgap3f);
   fChain->SetBranchAddress("AntiKt6TopoEM_isUgly", &AntiKt6TopoEM_isUgly, &b_AntiKt6TopoEM_isUgly);
   fChain->SetBranchAddress("AntiKt6TopoEM_isBadLooseMinus", &AntiKt6TopoEM_isBadLooseMinus, &b_AntiKt6TopoEM_isBadLooseMinus);
   fChain->SetBranchAddress("AntiKt6TopoEM_isBadLoose", &AntiKt6TopoEM_isBadLoose, &b_AntiKt6TopoEM_isBadLoose);
   fChain->SetBranchAddress("AntiKt6TopoEM_isBadMedium", &AntiKt6TopoEM_isBadMedium, &b_AntiKt6TopoEM_isBadMedium);
   fChain->SetBranchAddress("AntiKt6TopoEM_isBadTight", &AntiKt6TopoEM_isBadTight, &b_AntiKt6TopoEM_isBadTight);
   fChain->SetBranchAddress("AntiKt6TopoEM_emfrac", &AntiKt6TopoEM_emfrac, &b_AntiKt6TopoEM_emfrac);
   fChain->SetBranchAddress("AntiKt6TopoEM_Offset", &AntiKt6TopoEM_Offset, &b_AntiKt6TopoEM_Offset);
   fChain->SetBranchAddress("AntiKt6TopoEM_EMJES", &AntiKt6TopoEM_EMJES, &b_AntiKt6TopoEM_EMJES);
   fChain->SetBranchAddress("AntiKt6TopoEM_EMJES_EtaCorr", &AntiKt6TopoEM_EMJES_EtaCorr, &b_AntiKt6TopoEM_EMJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6TopoEM_EMJESnooffset", &AntiKt6TopoEM_EMJESnooffset, &b_AntiKt6TopoEM_EMJESnooffset);
   fChain->SetBranchAddress("AntiKt6TopoEM_GCWJES", &AntiKt6TopoEM_GCWJES, &b_AntiKt6TopoEM_GCWJES);
   fChain->SetBranchAddress("AntiKt6TopoEM_GCWJES_EtaCorr", &AntiKt6TopoEM_GCWJES_EtaCorr, &b_AntiKt6TopoEM_GCWJES_EtaCorr);
   fChain->SetBranchAddress("AntiKt6TopoEM_CB", &AntiKt6TopoEM_CB, &b_AntiKt6TopoEM_CB);
   fChain->SetBranchAddress("AntiKt6TopoEM_LCJES", &AntiKt6TopoEM_LCJES, &b_AntiKt6TopoEM_LCJES);
   fChain->SetBranchAddress("AntiKt6TopoEM_emscale_E", &AntiKt6TopoEM_emscale_E, &b_AntiKt6TopoEM_emscale_E);
   fChain->SetBranchAddress("AntiKt6TopoEM_emscale_pt", &AntiKt6TopoEM_emscale_pt, &b_AntiKt6TopoEM_emscale_pt);
   fChain->SetBranchAddress("AntiKt6TopoEM_emscale_m", &AntiKt6TopoEM_emscale_m, &b_AntiKt6TopoEM_emscale_m);
   fChain->SetBranchAddress("AntiKt6TopoEM_emscale_eta", &AntiKt6TopoEM_emscale_eta, &b_AntiKt6TopoEM_emscale_eta);
   fChain->SetBranchAddress("AntiKt6TopoEM_emscale_phi", &AntiKt6TopoEM_emscale_phi, &b_AntiKt6TopoEM_emscale_phi);
   fChain->SetBranchAddress("AntiKt6TopoEM_jvtx_x", &AntiKt6TopoEM_jvtx_x, &b_AntiKt6TopoEM_jvtx_x);
   fChain->SetBranchAddress("AntiKt6TopoEM_jvtx_y", &AntiKt6TopoEM_jvtx_y, &b_AntiKt6TopoEM_jvtx_y);
   fChain->SetBranchAddress("AntiKt6TopoEM_jvtx_z", &AntiKt6TopoEM_jvtx_z, &b_AntiKt6TopoEM_jvtx_z);
   fChain->SetBranchAddress("AntiKt6TopoEM_jvtxf", &AntiKt6TopoEM_jvtxf, &b_AntiKt6TopoEM_jvtxf);
   fChain->SetBranchAddress("AntiKt6TopoEM_GSCFactorF", &AntiKt6TopoEM_GSCFactorF, &b_AntiKt6TopoEM_GSCFactorF);
   fChain->SetBranchAddress("AntiKt6TopoEM_WidthFraction", &AntiKt6TopoEM_WidthFraction, &b_AntiKt6TopoEM_WidthFraction);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_PreSamplerB", &AntiKt6TopoEM_e_PreSamplerB, &b_AntiKt6TopoEM_e_PreSamplerB);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_EMB1", &AntiKt6TopoEM_e_EMB1, &b_AntiKt6TopoEM_e_EMB1);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_EMB2", &AntiKt6TopoEM_e_EMB2, &b_AntiKt6TopoEM_e_EMB2);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_EMB3", &AntiKt6TopoEM_e_EMB3, &b_AntiKt6TopoEM_e_EMB3);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_PreSamplerE", &AntiKt6TopoEM_e_PreSamplerE, &b_AntiKt6TopoEM_e_PreSamplerE);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_EME1", &AntiKt6TopoEM_e_EME1, &b_AntiKt6TopoEM_e_EME1);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_EME2", &AntiKt6TopoEM_e_EME2, &b_AntiKt6TopoEM_e_EME2);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_EME3", &AntiKt6TopoEM_e_EME3, &b_AntiKt6TopoEM_e_EME3);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_HEC0", &AntiKt6TopoEM_e_HEC0, &b_AntiKt6TopoEM_e_HEC0);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_HEC1", &AntiKt6TopoEM_e_HEC1, &b_AntiKt6TopoEM_e_HEC1);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_HEC2", &AntiKt6TopoEM_e_HEC2, &b_AntiKt6TopoEM_e_HEC2);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_HEC3", &AntiKt6TopoEM_e_HEC3, &b_AntiKt6TopoEM_e_HEC3);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileBar0", &AntiKt6TopoEM_e_TileBar0, &b_AntiKt6TopoEM_e_TileBar0);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileBar1", &AntiKt6TopoEM_e_TileBar1, &b_AntiKt6TopoEM_e_TileBar1);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileBar2", &AntiKt6TopoEM_e_TileBar2, &b_AntiKt6TopoEM_e_TileBar2);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileGap1", &AntiKt6TopoEM_e_TileGap1, &b_AntiKt6TopoEM_e_TileGap1);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileGap2", &AntiKt6TopoEM_e_TileGap2, &b_AntiKt6TopoEM_e_TileGap2);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileGap3", &AntiKt6TopoEM_e_TileGap3, &b_AntiKt6TopoEM_e_TileGap3);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileExt0", &AntiKt6TopoEM_e_TileExt0, &b_AntiKt6TopoEM_e_TileExt0);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileExt1", &AntiKt6TopoEM_e_TileExt1, &b_AntiKt6TopoEM_e_TileExt1);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_TileExt2", &AntiKt6TopoEM_e_TileExt2, &b_AntiKt6TopoEM_e_TileExt2);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_FCAL0", &AntiKt6TopoEM_e_FCAL0, &b_AntiKt6TopoEM_e_FCAL0);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_FCAL1", &AntiKt6TopoEM_e_FCAL1, &b_AntiKt6TopoEM_e_FCAL1);
   fChain->SetBranchAddress("AntiKt6TopoEM_e_FCAL2", &AntiKt6TopoEM_e_FCAL2, &b_AntiKt6TopoEM_e_FCAL2);
   fChain->SetBranchAddress("AntiKt6TopoEM_shapeBins", &AntiKt6TopoEM_shapeBins, &b_AntiKt6TopoEM_shapeBins);
   fChain->SetBranchAddress("AntiKt6TopoEM_Nconst", &AntiKt6TopoEM_Nconst, &b_AntiKt6TopoEM_Nconst);
   fChain->SetBranchAddress("AntiKt6TopoEM_ptconst_default", &AntiKt6TopoEM_ptconst_default, &b_AntiKt6TopoEM_ptconst_default);
   fChain->SetBranchAddress("AntiKt6TopoEM_econst_default", &AntiKt6TopoEM_econst_default, &b_AntiKt6TopoEM_econst_default);
   fChain->SetBranchAddress("AntiKt6TopoEM_etaconst_default", &AntiKt6TopoEM_etaconst_default, &b_AntiKt6TopoEM_etaconst_default);
   fChain->SetBranchAddress("AntiKt6TopoEM_phiconst_default", &AntiKt6TopoEM_phiconst_default, &b_AntiKt6TopoEM_phiconst_default);
   fChain->SetBranchAddress("AntiKt6TopoEM_weightconst_default", &AntiKt6TopoEM_weightconst_default, &b_AntiKt6TopoEM_weightconst_default);
   fChain->SetBranchAddress("AntiKt6TopoEM_constscale_E", &AntiKt6TopoEM_constscale_E, &b_AntiKt6TopoEM_constscale_E);
   fChain->SetBranchAddress("AntiKt6TopoEM_constscale_pt", &AntiKt6TopoEM_constscale_pt, &b_AntiKt6TopoEM_constscale_pt);
   fChain->SetBranchAddress("AntiKt6TopoEM_constscale_m", &AntiKt6TopoEM_constscale_m, &b_AntiKt6TopoEM_constscale_m);
   fChain->SetBranchAddress("AntiKt6TopoEM_constscale_eta", &AntiKt6TopoEM_constscale_eta, &b_AntiKt6TopoEM_constscale_eta);
   fChain->SetBranchAddress("AntiKt6TopoEM_constscale_phi", &AntiKt6TopoEM_constscale_phi, &b_AntiKt6TopoEM_constscale_phi);
   fChain->SetBranchAddress("AntiKt6TopoEM_el_dr", &AntiKt6TopoEM_el_dr, &b_AntiKt6TopoEM_el_dr);
   fChain->SetBranchAddress("AntiKt6TopoEM_el_matched", &AntiKt6TopoEM_el_matched, &b_AntiKt6TopoEM_el_matched);
   fChain->SetBranchAddress("AntiKt6TopoEM_mu_dr", &AntiKt6TopoEM_mu_dr, &b_AntiKt6TopoEM_mu_dr);
   fChain->SetBranchAddress("AntiKt6TopoEM_mu_matched", &AntiKt6TopoEM_mu_matched, &b_AntiKt6TopoEM_mu_matched);
   fChain->SetBranchAddress("AntiKt6TopoEM_L1_dr", &AntiKt6TopoEM_L1_dr, &b_AntiKt6TopoEM_L1_dr);
   fChain->SetBranchAddress("AntiKt6TopoEM_L1_matched", &AntiKt6TopoEM_L1_matched, &b_AntiKt6TopoEM_L1_matched);
   fChain->SetBranchAddress("AntiKt6TopoEM_L2_dr", &AntiKt6TopoEM_L2_dr, &b_AntiKt6TopoEM_L2_dr);
   fChain->SetBranchAddress("AntiKt6TopoEM_L2_matched", &AntiKt6TopoEM_L2_matched, &b_AntiKt6TopoEM_L2_matched);
   fChain->SetBranchAddress("AntiKt6TopoEM_EF_dr", &AntiKt6TopoEM_EF_dr, &b_AntiKt6TopoEM_EF_dr);
   fChain->SetBranchAddress("AntiKt6TopoEM_EF_matched", &AntiKt6TopoEM_EF_matched, &b_AntiKt6TopoEM_EF_matched);
   fChain->SetBranchAddress("cl_emTopo_n", &cl_emTopo_n, &b_cl_emTopo_n);
   fChain->SetBranchAddress("cl_emTopo_pt", &cl_emTopo_pt, &b_cl_emTopo_pt);
   fChain->SetBranchAddress("cl_emTopo_eta", &cl_emTopo_eta, &b_cl_emTopo_eta);
   fChain->SetBranchAddress("cl_emTopo_phi", &cl_emTopo_phi, &b_cl_emTopo_phi);
   fChain->SetBranchAddress("cl_emTopo_E_em", &cl_emTopo_E_em, &b_cl_emTopo_E_em);
   fChain->SetBranchAddress("cl_emTopo_E_had", &cl_emTopo_E_had, &b_cl_emTopo_E_had);
   fChain->SetBranchAddress("cl_emTopo_firstEdens", &cl_emTopo_firstEdens, &b_cl_emTopo_firstEdens);
   fChain->SetBranchAddress("cl_emTopo_cellmaxfrac", &cl_emTopo_cellmaxfrac, &b_cl_emTopo_cellmaxfrac);
   fChain->SetBranchAddress("cl_emTopo_longitudinal", &cl_emTopo_longitudinal, &b_cl_emTopo_longitudinal);
   fChain->SetBranchAddress("cl_emTopo_secondlambda", &cl_emTopo_secondlambda, &b_cl_emTopo_secondlambda);
   fChain->SetBranchAddress("cl_emTopo_lateral", &cl_emTopo_lateral, &b_cl_emTopo_lateral);
   fChain->SetBranchAddress("cl_emTopo_secondR", &cl_emTopo_secondR, &b_cl_emTopo_secondR);
   fChain->SetBranchAddress("cl_emTopo_centerlambda", &cl_emTopo_centerlambda, &b_cl_emTopo_centerlambda);
   fChain->SetBranchAddress("cl_emTopo_deltaTheta", &cl_emTopo_deltaTheta, &b_cl_emTopo_deltaTheta);
   fChain->SetBranchAddress("cl_emTopo_deltaPhi", &cl_emTopo_deltaPhi, &b_cl_emTopo_deltaPhi);
   fChain->SetBranchAddress("cl_emTopo_centermag", &cl_emTopo_centermag, &b_cl_emTopo_centermag);
   fChain->SetBranchAddress("cl_emTopo_time", &cl_emTopo_time, &b_cl_emTopo_time);
   fChain->SetBranchAddress("cl_emTopo_E_PreSamplerB", &cl_emTopo_E_PreSamplerB, &b_cl_emTopo_E_PreSamplerB);
   fChain->SetBranchAddress("cl_emTopo_E_EMB1", &cl_emTopo_E_EMB1, &b_cl_emTopo_E_EMB1);
   fChain->SetBranchAddress("cl_emTopo_E_EMB2", &cl_emTopo_E_EMB2, &b_cl_emTopo_E_EMB2);
   fChain->SetBranchAddress("cl_emTopo_E_EMB3", &cl_emTopo_E_EMB3, &b_cl_emTopo_E_EMB3);
   fChain->SetBranchAddress("cl_emTopo_E_PreSamplerE", &cl_emTopo_E_PreSamplerE, &b_cl_emTopo_E_PreSamplerE);
   fChain->SetBranchAddress("cl_emTopo_E_EME1", &cl_emTopo_E_EME1, &b_cl_emTopo_E_EME1);
   fChain->SetBranchAddress("cl_emTopo_E_EME2", &cl_emTopo_E_EME2, &b_cl_emTopo_E_EME2);
   fChain->SetBranchAddress("cl_emTopo_E_EME3", &cl_emTopo_E_EME3, &b_cl_emTopo_E_EME3);
   fChain->SetBranchAddress("cl_emTopo_E_HEC0", &cl_emTopo_E_HEC0, &b_cl_emTopo_E_HEC0);
   fChain->SetBranchAddress("cl_emTopo_E_HEC1", &cl_emTopo_E_HEC1, &b_cl_emTopo_E_HEC1);
   fChain->SetBranchAddress("cl_emTopo_E_HEC2", &cl_emTopo_E_HEC2, &b_cl_emTopo_E_HEC2);
   fChain->SetBranchAddress("cl_emTopo_E_HEC3", &cl_emTopo_E_HEC3, &b_cl_emTopo_E_HEC3);
   fChain->SetBranchAddress("cl_emTopo_E_TileBar0", &cl_emTopo_E_TileBar0, &b_cl_emTopo_E_TileBar0);
   fChain->SetBranchAddress("cl_emTopo_E_TileBar1", &cl_emTopo_E_TileBar1, &b_cl_emTopo_E_TileBar1);
   fChain->SetBranchAddress("cl_emTopo_E_TileBar2", &cl_emTopo_E_TileBar2, &b_cl_emTopo_E_TileBar2);
   fChain->SetBranchAddress("cl_emTopo_E_TileGap1", &cl_emTopo_E_TileGap1, &b_cl_emTopo_E_TileGap1);
   fChain->SetBranchAddress("cl_emTopo_E_TileGap2", &cl_emTopo_E_TileGap2, &b_cl_emTopo_E_TileGap2);
   fChain->SetBranchAddress("cl_emTopo_E_TileGap3", &cl_emTopo_E_TileGap3, &b_cl_emTopo_E_TileGap3);
   fChain->SetBranchAddress("cl_emTopo_E_TileExt0", &cl_emTopo_E_TileExt0, &b_cl_emTopo_E_TileExt0);
   fChain->SetBranchAddress("cl_emTopo_E_TileExt1", &cl_emTopo_E_TileExt1, &b_cl_emTopo_E_TileExt1);
   fChain->SetBranchAddress("cl_emTopo_E_TileExt2", &cl_emTopo_E_TileExt2, &b_cl_emTopo_E_TileExt2);
   fChain->SetBranchAddress("cl_emTopo_E_FCAL0", &cl_emTopo_E_FCAL0, &b_cl_emTopo_E_FCAL0);
   fChain->SetBranchAddress("cl_emTopo_E_FCAL1", &cl_emTopo_E_FCAL1, &b_cl_emTopo_E_FCAL1);
   fChain->SetBranchAddress("cl_emTopo_E_FCAL2", &cl_emTopo_E_FCAL2, &b_cl_emTopo_E_FCAL2);
   fChain->SetBranchAddress("cl_hadTopo_n", &cl_hadTopo_n, &b_cl_hadTopo_n);
   fChain->SetBranchAddress("cl_hadTopo_pt", &cl_hadTopo_pt, &b_cl_hadTopo_pt);
   fChain->SetBranchAddress("cl_hadTopo_eta", &cl_hadTopo_eta, &b_cl_hadTopo_eta);
   fChain->SetBranchAddress("cl_hadTopo_phi", &cl_hadTopo_phi, &b_cl_hadTopo_phi);
   fChain->SetBranchAddress("cl_hadTopo_E_em", &cl_hadTopo_E_em, &b_cl_hadTopo_E_em);
   fChain->SetBranchAddress("cl_hadTopo_E_had", &cl_hadTopo_E_had, &b_cl_hadTopo_E_had);
   fChain->SetBranchAddress("cl_hadTopo_firstEdens", &cl_hadTopo_firstEdens, &b_cl_hadTopo_firstEdens);
   fChain->SetBranchAddress("cl_hadTopo_cellmaxfrac", &cl_hadTopo_cellmaxfrac, &b_cl_hadTopo_cellmaxfrac);
   fChain->SetBranchAddress("cl_hadTopo_longitudinal", &cl_hadTopo_longitudinal, &b_cl_hadTopo_longitudinal);
   fChain->SetBranchAddress("cl_hadTopo_secondlambda", &cl_hadTopo_secondlambda, &b_cl_hadTopo_secondlambda);
   fChain->SetBranchAddress("cl_hadTopo_lateral", &cl_hadTopo_lateral, &b_cl_hadTopo_lateral);
   fChain->SetBranchAddress("cl_hadTopo_secondR", &cl_hadTopo_secondR, &b_cl_hadTopo_secondR);
   fChain->SetBranchAddress("cl_hadTopo_centerlambda", &cl_hadTopo_centerlambda, &b_cl_hadTopo_centerlambda);
   fChain->SetBranchAddress("cl_hadTopo_deltaTheta", &cl_hadTopo_deltaTheta, &b_cl_hadTopo_deltaTheta);
   fChain->SetBranchAddress("cl_hadTopo_deltaPhi", &cl_hadTopo_deltaPhi, &b_cl_hadTopo_deltaPhi);
   fChain->SetBranchAddress("cl_hadTopo_centermag", &cl_hadTopo_centermag, &b_cl_hadTopo_centermag);
   fChain->SetBranchAddress("cl_hadTopo_time", &cl_hadTopo_time, &b_cl_hadTopo_time);
   fChain->SetBranchAddress("cl_hadTopo_E_PreSamplerB", &cl_hadTopo_E_PreSamplerB, &b_cl_hadTopo_E_PreSamplerB);
   fChain->SetBranchAddress("cl_hadTopo_E_EMB1", &cl_hadTopo_E_EMB1, &b_cl_hadTopo_E_EMB1);
   fChain->SetBranchAddress("cl_hadTopo_E_EMB2", &cl_hadTopo_E_EMB2, &b_cl_hadTopo_E_EMB2);
   fChain->SetBranchAddress("cl_hadTopo_E_EMB3", &cl_hadTopo_E_EMB3, &b_cl_hadTopo_E_EMB3);
   fChain->SetBranchAddress("cl_hadTopo_E_PreSamplerE", &cl_hadTopo_E_PreSamplerE, &b_cl_hadTopo_E_PreSamplerE);
   fChain->SetBranchAddress("cl_hadTopo_E_EME1", &cl_hadTopo_E_EME1, &b_cl_hadTopo_E_EME1);
   fChain->SetBranchAddress("cl_hadTopo_E_EME2", &cl_hadTopo_E_EME2, &b_cl_hadTopo_E_EME2);
   fChain->SetBranchAddress("cl_hadTopo_E_EME3", &cl_hadTopo_E_EME3, &b_cl_hadTopo_E_EME3);
   fChain->SetBranchAddress("cl_hadTopo_E_HEC0", &cl_hadTopo_E_HEC0, &b_cl_hadTopo_E_HEC0);
   fChain->SetBranchAddress("cl_hadTopo_E_HEC1", &cl_hadTopo_E_HEC1, &b_cl_hadTopo_E_HEC1);
   fChain->SetBranchAddress("cl_hadTopo_E_HEC2", &cl_hadTopo_E_HEC2, &b_cl_hadTopo_E_HEC2);
   fChain->SetBranchAddress("cl_hadTopo_E_HEC3", &cl_hadTopo_E_HEC3, &b_cl_hadTopo_E_HEC3);
   fChain->SetBranchAddress("cl_hadTopo_E_TileBar0", &cl_hadTopo_E_TileBar0, &b_cl_hadTopo_E_TileBar0);
   fChain->SetBranchAddress("cl_hadTopo_E_TileBar1", &cl_hadTopo_E_TileBar1, &b_cl_hadTopo_E_TileBar1);
   fChain->SetBranchAddress("cl_hadTopo_E_TileBar2", &cl_hadTopo_E_TileBar2, &b_cl_hadTopo_E_TileBar2);
   fChain->SetBranchAddress("cl_hadTopo_E_TileGap1", &cl_hadTopo_E_TileGap1, &b_cl_hadTopo_E_TileGap1);
   fChain->SetBranchAddress("cl_hadTopo_E_TileGap2", &cl_hadTopo_E_TileGap2, &b_cl_hadTopo_E_TileGap2);
   fChain->SetBranchAddress("cl_hadTopo_E_TileGap3", &cl_hadTopo_E_TileGap3, &b_cl_hadTopo_E_TileGap3);
   fChain->SetBranchAddress("cl_hadTopo_E_TileExt0", &cl_hadTopo_E_TileExt0, &b_cl_hadTopo_E_TileExt0);
   fChain->SetBranchAddress("cl_hadTopo_E_TileExt1", &cl_hadTopo_E_TileExt1, &b_cl_hadTopo_E_TileExt1);
   fChain->SetBranchAddress("cl_hadTopo_E_TileExt2", &cl_hadTopo_E_TileExt2, &b_cl_hadTopo_E_TileExt2);
   fChain->SetBranchAddress("cl_hadTopo_E_FCAL0", &cl_hadTopo_E_FCAL0, &b_cl_hadTopo_E_FCAL0);
   fChain->SetBranchAddress("cl_hadTopo_E_FCAL1", &cl_hadTopo_E_FCAL1, &b_cl_hadTopo_E_FCAL1);
   fChain->SetBranchAddress("cl_hadTopo_E_FCAL2", &cl_hadTopo_E_FCAL2, &b_cl_hadTopo_E_FCAL2);
   fChain->SetBranchAddress("emcl_n", &emcl_n, &b_emcl_n);
   fChain->SetBranchAddress("emcl_E", &emcl_E, &b_emcl_E);
   fChain->SetBranchAddress("emcl_pt", &emcl_pt, &b_emcl_pt);
   fChain->SetBranchAddress("emcl_m", &emcl_m, &b_emcl_m);
   fChain->SetBranchAddress("emcl_eta", &emcl_eta, &b_emcl_eta);
   fChain->SetBranchAddress("emcl_phi", &emcl_phi, &b_emcl_phi);
   fChain->SetBranchAddress("emcl_E_em", &emcl_E_em, &b_emcl_E_em);
   fChain->SetBranchAddress("emcl_E_had", &emcl_E_had, &b_emcl_E_had);
   fChain->SetBranchAddress("mu_staco_n", &mu_staco_n, &b_mu_staco_n);
   fChain->SetBranchAddress("mu_staco_E", &mu_staco_E, &b_mu_staco_E);
   fChain->SetBranchAddress("mu_staco_pt", &mu_staco_pt, &b_mu_staco_pt);
   fChain->SetBranchAddress("mu_staco_m", &mu_staco_m, &b_mu_staco_m);
   fChain->SetBranchAddress("mu_staco_eta", &mu_staco_eta, &b_mu_staco_eta);
   fChain->SetBranchAddress("mu_staco_phi", &mu_staco_phi, &b_mu_staco_phi);
   fChain->SetBranchAddress("mu_staco_px", &mu_staco_px, &b_mu_staco_px);
   fChain->SetBranchAddress("mu_staco_py", &mu_staco_py, &b_mu_staco_py);
   fChain->SetBranchAddress("mu_staco_pz", &mu_staco_pz, &b_mu_staco_pz);
   fChain->SetBranchAddress("mu_staco_charge", &mu_staco_charge, &b_mu_staco_charge);
   fChain->SetBranchAddress("mu_staco_allauthor", &mu_staco_allauthor, &b_mu_staco_allauthor);
   fChain->SetBranchAddress("mu_staco_author", &mu_staco_author, &b_mu_staco_author);
   fChain->SetBranchAddress("mu_staco_beta", &mu_staco_beta, &b_mu_staco_beta);
   fChain->SetBranchAddress("mu_staco_isMuonLikelihood", &mu_staco_isMuonLikelihood, &b_mu_staco_isMuonLikelihood);
   fChain->SetBranchAddress("mu_staco_matchchi2", &mu_staco_matchchi2, &b_mu_staco_matchchi2);
   fChain->SetBranchAddress("mu_staco_matchndof", &mu_staco_matchndof, &b_mu_staco_matchndof);
   fChain->SetBranchAddress("mu_staco_etcone20", &mu_staco_etcone20, &b_mu_staco_etcone20);
   fChain->SetBranchAddress("mu_staco_etcone30", &mu_staco_etcone30, &b_mu_staco_etcone30);
   fChain->SetBranchAddress("mu_staco_etcone40", &mu_staco_etcone40, &b_mu_staco_etcone40);
   fChain->SetBranchAddress("mu_staco_nucone20", &mu_staco_nucone20, &b_mu_staco_nucone20);
   fChain->SetBranchAddress("mu_staco_nucone30", &mu_staco_nucone30, &b_mu_staco_nucone30);
   fChain->SetBranchAddress("mu_staco_nucone40", &mu_staco_nucone40, &b_mu_staco_nucone40);
   fChain->SetBranchAddress("mu_staco_ptcone20", &mu_staco_ptcone20, &b_mu_staco_ptcone20);
   fChain->SetBranchAddress("mu_staco_ptcone30", &mu_staco_ptcone30, &b_mu_staco_ptcone30);
   fChain->SetBranchAddress("mu_staco_ptcone40", &mu_staco_ptcone40, &b_mu_staco_ptcone40);
   fChain->SetBranchAddress("mu_staco_etconeNoEm10", &mu_staco_etconeNoEm10, &b_mu_staco_etconeNoEm10);
   fChain->SetBranchAddress("mu_staco_etconeNoEm20", &mu_staco_etconeNoEm20, &b_mu_staco_etconeNoEm20);
   fChain->SetBranchAddress("mu_staco_etconeNoEm30", &mu_staco_etconeNoEm30, &b_mu_staco_etconeNoEm30);
   fChain->SetBranchAddress("mu_staco_etconeNoEm40", &mu_staco_etconeNoEm40, &b_mu_staco_etconeNoEm40);
   fChain->SetBranchAddress("mu_staco_scatteringCurvatureSignificance", &mu_staco_scatteringCurvatureSignificance, &b_mu_staco_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_staco_scatteringNeighbourSignificance", &mu_staco_scatteringNeighbourSignificance, &b_mu_staco_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_staco_momentumBalanceSignificance", &mu_staco_momentumBalanceSignificance, &b_mu_staco_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_staco_energyLossPar", &mu_staco_energyLossPar, &b_mu_staco_energyLossPar);
   fChain->SetBranchAddress("mu_staco_energyLossErr", &mu_staco_energyLossErr, &b_mu_staco_energyLossErr);
   fChain->SetBranchAddress("mu_staco_etCore", &mu_staco_etCore, &b_mu_staco_etCore);
   fChain->SetBranchAddress("mu_staco_energyLossType", &mu_staco_energyLossType, &b_mu_staco_energyLossType);
   fChain->SetBranchAddress("mu_staco_caloMuonIdTag", &mu_staco_caloMuonIdTag, &b_mu_staco_caloMuonIdTag);
   fChain->SetBranchAddress("mu_staco_caloLRLikelihood", &mu_staco_caloLRLikelihood, &b_mu_staco_caloLRLikelihood);
   fChain->SetBranchAddress("mu_staco_bestMatch", &mu_staco_bestMatch, &b_mu_staco_bestMatch);
   fChain->SetBranchAddress("mu_staco_isStandAloneMuon", &mu_staco_isStandAloneMuon, &b_mu_staco_isStandAloneMuon);
   fChain->SetBranchAddress("mu_staco_isCombinedMuon", &mu_staco_isCombinedMuon, &b_mu_staco_isCombinedMuon);
   fChain->SetBranchAddress("mu_staco_isLowPtReconstructedMuon", &mu_staco_isLowPtReconstructedMuon, &b_mu_staco_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_staco_isSegmentTaggedMuon", &mu_staco_isSegmentTaggedMuon, &b_mu_staco_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_staco_isCaloMuonId", &mu_staco_isCaloMuonId, &b_mu_staco_isCaloMuonId);
   fChain->SetBranchAddress("mu_staco_alsoFoundByLowPt", &mu_staco_alsoFoundByLowPt, &b_mu_staco_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_staco_alsoFoundByCaloMuonId", &mu_staco_alsoFoundByCaloMuonId, &b_mu_staco_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_staco_isSiliconAssociatedForwardMuon", &mu_staco_isSiliconAssociatedForwardMuon, &b_mu_staco_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_staco_loose", &mu_staco_loose, &b_mu_staco_loose);
   fChain->SetBranchAddress("mu_staco_medium", &mu_staco_medium, &b_mu_staco_medium);
   fChain->SetBranchAddress("mu_staco_tight", &mu_staco_tight, &b_mu_staco_tight);
   fChain->SetBranchAddress("mu_staco_d0_exPV", &mu_staco_d0_exPV, &b_mu_staco_d0_exPV);
   fChain->SetBranchAddress("mu_staco_z0_exPV", &mu_staco_z0_exPV, &b_mu_staco_z0_exPV);
   fChain->SetBranchAddress("mu_staco_phi_exPV", &mu_staco_phi_exPV, &b_mu_staco_phi_exPV);
   fChain->SetBranchAddress("mu_staco_theta_exPV", &mu_staco_theta_exPV, &b_mu_staco_theta_exPV);
   fChain->SetBranchAddress("mu_staco_qoverp_exPV", &mu_staco_qoverp_exPV, &b_mu_staco_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cb_d0_exPV", &mu_staco_cb_d0_exPV, &b_mu_staco_cb_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_z0_exPV", &mu_staco_cb_z0_exPV, &b_mu_staco_cb_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_phi_exPV", &mu_staco_cb_phi_exPV, &b_mu_staco_cb_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cb_theta_exPV", &mu_staco_cb_theta_exPV, &b_mu_staco_cb_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cb_qoverp_exPV", &mu_staco_cb_qoverp_exPV, &b_mu_staco_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_d0_exPV", &mu_staco_id_d0_exPV, &b_mu_staco_id_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_z0_exPV", &mu_staco_id_z0_exPV, &b_mu_staco_id_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_phi_exPV", &mu_staco_id_phi_exPV, &b_mu_staco_id_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_theta_exPV", &mu_staco_id_theta_exPV, &b_mu_staco_id_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_qoverp_exPV", &mu_staco_id_qoverp_exPV, &b_mu_staco_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_d0_exPV", &mu_staco_me_d0_exPV, &b_mu_staco_me_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_z0_exPV", &mu_staco_me_z0_exPV, &b_mu_staco_me_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_phi_exPV", &mu_staco_me_phi_exPV, &b_mu_staco_me_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_theta_exPV", &mu_staco_me_theta_exPV, &b_mu_staco_me_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_qoverp_exPV", &mu_staco_me_qoverp_exPV, &b_mu_staco_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ie_d0_exPV", &mu_staco_ie_d0_exPV, &b_mu_staco_ie_d0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_z0_exPV", &mu_staco_ie_z0_exPV, &b_mu_staco_ie_z0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_phi_exPV", &mu_staco_ie_phi_exPV, &b_mu_staco_ie_phi_exPV);
   fChain->SetBranchAddress("mu_staco_ie_theta_exPV", &mu_staco_ie_theta_exPV, &b_mu_staco_ie_theta_exPV);
   fChain->SetBranchAddress("mu_staco_ie_qoverp_exPV", &mu_staco_ie_qoverp_exPV, &b_mu_staco_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_SpaceTime_detID", &mu_staco_SpaceTime_detID, &b_mu_staco_SpaceTime_detID);
   fChain->SetBranchAddress("mu_staco_SpaceTime_t", &mu_staco_SpaceTime_t, &b_mu_staco_SpaceTime_t);
   fChain->SetBranchAddress("mu_staco_SpaceTime_tError", &mu_staco_SpaceTime_tError, &b_mu_staco_SpaceTime_tError);
   fChain->SetBranchAddress("mu_staco_SpaceTime_weight", &mu_staco_SpaceTime_weight, &b_mu_staco_SpaceTime_weight);
   fChain->SetBranchAddress("mu_staco_SpaceTime_x", &mu_staco_SpaceTime_x, &b_mu_staco_SpaceTime_x);
   fChain->SetBranchAddress("mu_staco_SpaceTime_y", &mu_staco_SpaceTime_y, &b_mu_staco_SpaceTime_y);
   fChain->SetBranchAddress("mu_staco_SpaceTime_z", &mu_staco_SpaceTime_z, &b_mu_staco_SpaceTime_z);
   fChain->SetBranchAddress("mu_staco_cov_d0_exPV", &mu_staco_cov_d0_exPV, &b_mu_staco_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_exPV", &mu_staco_cov_z0_exPV, &b_mu_staco_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_exPV", &mu_staco_cov_phi_exPV, &b_mu_staco_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_exPV", &mu_staco_cov_theta_exPV, &b_mu_staco_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_qoverp_exPV", &mu_staco_cov_qoverp_exPV, &b_mu_staco_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_z0_exPV", &mu_staco_cov_d0_z0_exPV, &b_mu_staco_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_phi_exPV", &mu_staco_cov_d0_phi_exPV, &b_mu_staco_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_theta_exPV", &mu_staco_cov_d0_theta_exPV, &b_mu_staco_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_qoverp_exPV", &mu_staco_cov_d0_qoverp_exPV, &b_mu_staco_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_phi_exPV", &mu_staco_cov_z0_phi_exPV, &b_mu_staco_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_theta_exPV", &mu_staco_cov_z0_theta_exPV, &b_mu_staco_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_qoverp_exPV", &mu_staco_cov_z0_qoverp_exPV, &b_mu_staco_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_theta_exPV", &mu_staco_cov_phi_theta_exPV, &b_mu_staco_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_qoverp_exPV", &mu_staco_cov_phi_qoverp_exPV, &b_mu_staco_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_qoverp_exPV", &mu_staco_cov_theta_qoverp_exPV, &b_mu_staco_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_exPV", &mu_staco_id_cov_d0_exPV, &b_mu_staco_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_exPV", &mu_staco_id_cov_z0_exPV, &b_mu_staco_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_phi_exPV", &mu_staco_id_cov_phi_exPV, &b_mu_staco_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_theta_exPV", &mu_staco_id_cov_theta_exPV, &b_mu_staco_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_qoverp_exPV", &mu_staco_id_cov_qoverp_exPV, &b_mu_staco_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_exPV", &mu_staco_me_cov_d0_exPV, &b_mu_staco_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_exPV", &mu_staco_me_cov_z0_exPV, &b_mu_staco_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_phi_exPV", &mu_staco_me_cov_phi_exPV, &b_mu_staco_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_theta_exPV", &mu_staco_me_cov_theta_exPV, &b_mu_staco_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_qoverp_exPV", &mu_staco_me_cov_qoverp_exPV, &b_mu_staco_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ms_d0", &mu_staco_ms_d0, &b_mu_staco_ms_d0);
   fChain->SetBranchAddress("mu_staco_ms_z0", &mu_staco_ms_z0, &b_mu_staco_ms_z0);
   fChain->SetBranchAddress("mu_staco_ms_phi", &mu_staco_ms_phi, &b_mu_staco_ms_phi);
   fChain->SetBranchAddress("mu_staco_ms_theta", &mu_staco_ms_theta, &b_mu_staco_ms_theta);
   fChain->SetBranchAddress("mu_staco_ms_qoverp", &mu_staco_ms_qoverp, &b_mu_staco_ms_qoverp);
   fChain->SetBranchAddress("mu_staco_id_d0", &mu_staco_id_d0, &b_mu_staco_id_d0);
   fChain->SetBranchAddress("mu_staco_id_z0", &mu_staco_id_z0, &b_mu_staco_id_z0);
   fChain->SetBranchAddress("mu_staco_id_phi", &mu_staco_id_phi, &b_mu_staco_id_phi);
   fChain->SetBranchAddress("mu_staco_id_theta", &mu_staco_id_theta, &b_mu_staco_id_theta);
   fChain->SetBranchAddress("mu_staco_id_qoverp", &mu_staco_id_qoverp, &b_mu_staco_id_qoverp);
   fChain->SetBranchAddress("mu_staco_me_d0", &mu_staco_me_d0, &b_mu_staco_me_d0);
   fChain->SetBranchAddress("mu_staco_me_z0", &mu_staco_me_z0, &b_mu_staco_me_z0);
   fChain->SetBranchAddress("mu_staco_me_phi", &mu_staco_me_phi, &b_mu_staco_me_phi);
   fChain->SetBranchAddress("mu_staco_me_theta", &mu_staco_me_theta, &b_mu_staco_me_theta);
   fChain->SetBranchAddress("mu_staco_me_qoverp", &mu_staco_me_qoverp, &b_mu_staco_me_qoverp);
   fChain->SetBranchAddress("mu_staco_ie_d0", &mu_staco_ie_d0, &b_mu_staco_ie_d0);
   fChain->SetBranchAddress("mu_staco_ie_z0", &mu_staco_ie_z0, &b_mu_staco_ie_z0);
   fChain->SetBranchAddress("mu_staco_ie_phi", &mu_staco_ie_phi, &b_mu_staco_ie_phi);
   fChain->SetBranchAddress("mu_staco_ie_theta", &mu_staco_ie_theta, &b_mu_staco_ie_theta);
   fChain->SetBranchAddress("mu_staco_ie_qoverp", &mu_staco_ie_qoverp, &b_mu_staco_ie_qoverp);
   fChain->SetBranchAddress("mu_staco_nOutliersOnTrack", &mu_staco_nOutliersOnTrack, &b_mu_staco_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_staco_nBLHits", &mu_staco_nBLHits, &b_mu_staco_nBLHits);
   fChain->SetBranchAddress("mu_staco_nPixHits", &mu_staco_nPixHits, &b_mu_staco_nPixHits);
   fChain->SetBranchAddress("mu_staco_nSCTHits", &mu_staco_nSCTHits, &b_mu_staco_nSCTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHits", &mu_staco_nTRTHits, &b_mu_staco_nTRTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHighTHits", &mu_staco_nTRTHighTHits, &b_mu_staco_nTRTHighTHits);
   fChain->SetBranchAddress("mu_staco_nBLSharedHits", &mu_staco_nBLSharedHits, &b_mu_staco_nBLSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixSharedHits", &mu_staco_nPixSharedHits, &b_mu_staco_nPixSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixHoles", &mu_staco_nPixHoles, &b_mu_staco_nPixHoles);
   fChain->SetBranchAddress("mu_staco_nSCTSharedHits", &mu_staco_nSCTSharedHits, &b_mu_staco_nSCTSharedHits);
   fChain->SetBranchAddress("mu_staco_nSCTHoles", &mu_staco_nSCTHoles, &b_mu_staco_nSCTHoles);
   fChain->SetBranchAddress("mu_staco_nTRTOutliers", &mu_staco_nTRTOutliers, &b_mu_staco_nTRTOutliers);
   fChain->SetBranchAddress("mu_staco_nTRTHighTOutliers", &mu_staco_nTRTHighTOutliers, &b_mu_staco_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_staco_nGangedPixels", &mu_staco_nGangedPixels, &b_mu_staco_nGangedPixels);
   fChain->SetBranchAddress("mu_staco_nPixelDeadSensors", &mu_staco_nPixelDeadSensors, &b_mu_staco_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_staco_nSCTDeadSensors", &mu_staco_nSCTDeadSensors, &b_mu_staco_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_staco_nTRTDeadStraws", &mu_staco_nTRTDeadStraws, &b_mu_staco_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_staco_expectBLayerHit", &mu_staco_expectBLayerHit, &b_mu_staco_expectBLayerHit);
   fChain->SetBranchAddress("mu_staco_nMDTHits", &mu_staco_nMDTHits, &b_mu_staco_nMDTHits);
   fChain->SetBranchAddress("mu_staco_nMDTHoles", &mu_staco_nMDTHoles, &b_mu_staco_nMDTHoles);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHits", &mu_staco_nCSCEtaHits, &b_mu_staco_nCSCEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHoles", &mu_staco_nCSCEtaHoles, &b_mu_staco_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nCSCUnspoiledEtaHits", &mu_staco_nCSCUnspoiledEtaHits, &b_mu_staco_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHits", &mu_staco_nCSCPhiHits, &b_mu_staco_nCSCPhiHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHoles", &mu_staco_nCSCPhiHoles, &b_mu_staco_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHits", &mu_staco_nRPCEtaHits, &b_mu_staco_nRPCEtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHoles", &mu_staco_nRPCEtaHoles, &b_mu_staco_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHits", &mu_staco_nRPCPhiHits, &b_mu_staco_nRPCPhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHoles", &mu_staco_nRPCPhiHoles, &b_mu_staco_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHits", &mu_staco_nTGCEtaHits, &b_mu_staco_nTGCEtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHoles", &mu_staco_nTGCEtaHoles, &b_mu_staco_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHits", &mu_staco_nTGCPhiHits, &b_mu_staco_nTGCPhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHoles", &mu_staco_nTGCPhiHoles, &b_mu_staco_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nprecisionLayers", &mu_staco_nprecisionLayers, &b_mu_staco_nprecisionLayers);
   fChain->SetBranchAddress("mu_staco_nprecisionHoleLayers", &mu_staco_nprecisionHoleLayers, &b_mu_staco_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_staco_nphiLayers", &mu_staco_nphiLayers, &b_mu_staco_nphiLayers);
   fChain->SetBranchAddress("mu_staco_ntrigEtaLayers", &mu_staco_ntrigEtaLayers, &b_mu_staco_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_staco_nphiHoleLayers", &mu_staco_nphiHoleLayers, &b_mu_staco_nphiHoleLayers);
   fChain->SetBranchAddress("mu_staco_ntrigEtaHoleLayers", &mu_staco_ntrigEtaHoleLayers, &b_mu_staco_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_staco_nMDTBIHits", &mu_staco_nMDTBIHits, &b_mu_staco_nMDTBIHits);
   fChain->SetBranchAddress("mu_staco_nMDTBMHits", &mu_staco_nMDTBMHits, &b_mu_staco_nMDTBMHits);
   fChain->SetBranchAddress("mu_staco_nMDTBOHits", &mu_staco_nMDTBOHits, &b_mu_staco_nMDTBOHits);
   fChain->SetBranchAddress("mu_staco_nMDTBEEHits", &mu_staco_nMDTBEEHits, &b_mu_staco_nMDTBEEHits);
   fChain->SetBranchAddress("mu_staco_nMDTBIS78Hits", &mu_staco_nMDTBIS78Hits, &b_mu_staco_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_staco_nMDTEIHits", &mu_staco_nMDTEIHits, &b_mu_staco_nMDTEIHits);
   fChain->SetBranchAddress("mu_staco_nMDTEMHits", &mu_staco_nMDTEMHits, &b_mu_staco_nMDTEMHits);
   fChain->SetBranchAddress("mu_staco_nMDTEOHits", &mu_staco_nMDTEOHits, &b_mu_staco_nMDTEOHits);
   fChain->SetBranchAddress("mu_staco_nMDTEEHits", &mu_staco_nMDTEEHits, &b_mu_staco_nMDTEEHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1EtaHits", &mu_staco_nRPCLayer1EtaHits, &b_mu_staco_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2EtaHits", &mu_staco_nRPCLayer2EtaHits, &b_mu_staco_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3EtaHits", &mu_staco_nRPCLayer3EtaHits, &b_mu_staco_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1PhiHits", &mu_staco_nRPCLayer1PhiHits, &b_mu_staco_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2PhiHits", &mu_staco_nRPCLayer2PhiHits, &b_mu_staco_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3PhiHits", &mu_staco_nRPCLayer3PhiHits, &b_mu_staco_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1EtaHits", &mu_staco_nTGCLayer1EtaHits, &b_mu_staco_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2EtaHits", &mu_staco_nTGCLayer2EtaHits, &b_mu_staco_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3EtaHits", &mu_staco_nTGCLayer3EtaHits, &b_mu_staco_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4EtaHits", &mu_staco_nTGCLayer4EtaHits, &b_mu_staco_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1PhiHits", &mu_staco_nTGCLayer1PhiHits, &b_mu_staco_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2PhiHits", &mu_staco_nTGCLayer2PhiHits, &b_mu_staco_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3PhiHits", &mu_staco_nTGCLayer3PhiHits, &b_mu_staco_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4PhiHits", &mu_staco_nTGCLayer4PhiHits, &b_mu_staco_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_staco_barrelSectors", &mu_staco_barrelSectors, &b_mu_staco_barrelSectors);
   fChain->SetBranchAddress("mu_staco_endcapSectors", &mu_staco_endcapSectors, &b_mu_staco_endcapSectors);
   fChain->SetBranchAddress("mu_staco_trackd0", &mu_staco_trackd0, &b_mu_staco_trackd0);
   fChain->SetBranchAddress("mu_staco_trackz0", &mu_staco_trackz0, &b_mu_staco_trackz0);
   fChain->SetBranchAddress("mu_staco_trackphi", &mu_staco_trackphi, &b_mu_staco_trackphi);
   fChain->SetBranchAddress("mu_staco_tracktheta", &mu_staco_tracktheta, &b_mu_staco_tracktheta);
   fChain->SetBranchAddress("mu_staco_trackqoverp", &mu_staco_trackqoverp, &b_mu_staco_trackqoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0", &mu_staco_trackcov_d0, &b_mu_staco_trackcov_d0);
   fChain->SetBranchAddress("mu_staco_trackcov_z0", &mu_staco_trackcov_z0, &b_mu_staco_trackcov_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_phi", &mu_staco_trackcov_phi, &b_mu_staco_trackcov_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_theta", &mu_staco_trackcov_theta, &b_mu_staco_trackcov_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_qoverp", &mu_staco_trackcov_qoverp, &b_mu_staco_trackcov_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_z0", &mu_staco_trackcov_d0_z0, &b_mu_staco_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_phi", &mu_staco_trackcov_d0_phi, &b_mu_staco_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_theta", &mu_staco_trackcov_d0_theta, &b_mu_staco_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_qoverp", &mu_staco_trackcov_d0_qoverp, &b_mu_staco_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_phi", &mu_staco_trackcov_z0_phi, &b_mu_staco_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_theta", &mu_staco_trackcov_z0_theta, &b_mu_staco_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_qoverp", &mu_staco_trackcov_z0_qoverp, &b_mu_staco_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_theta", &mu_staco_trackcov_phi_theta, &b_mu_staco_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_qoverp", &mu_staco_trackcov_phi_qoverp, &b_mu_staco_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_theta_qoverp", &mu_staco_trackcov_theta_qoverp, &b_mu_staco_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_staco_trackfitchi2", &mu_staco_trackfitchi2, &b_mu_staco_trackfitchi2);
   fChain->SetBranchAddress("mu_staco_trackfitndof", &mu_staco_trackfitndof, &b_mu_staco_trackfitndof);
   fChain->SetBranchAddress("mu_staco_hastrack", &mu_staco_hastrack, &b_mu_staco_hastrack);
   fChain->SetBranchAddress("mu_staco_trackd0beam", &mu_staco_trackd0beam, &b_mu_staco_trackd0beam);
   fChain->SetBranchAddress("mu_staco_trackz0beam", &mu_staco_trackz0beam, &b_mu_staco_trackz0beam);
   fChain->SetBranchAddress("mu_staco_tracksigd0beam", &mu_staco_tracksigd0beam, &b_mu_staco_tracksigd0beam);
   fChain->SetBranchAddress("mu_staco_tracksigz0beam", &mu_staco_tracksigz0beam, &b_mu_staco_tracksigz0beam);
   fChain->SetBranchAddress("mu_staco_trackd0pv", &mu_staco_trackd0pv, &b_mu_staco_trackd0pv);
   fChain->SetBranchAddress("mu_staco_trackz0pv", &mu_staco_trackz0pv, &b_mu_staco_trackz0pv);
   fChain->SetBranchAddress("mu_staco_tracksigd0pv", &mu_staco_tracksigd0pv, &b_mu_staco_tracksigd0pv);
   fChain->SetBranchAddress("mu_staco_tracksigz0pv", &mu_staco_tracksigz0pv, &b_mu_staco_tracksigz0pv);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_d0_biasedpvunbiased", &mu_staco_trackIPEstimate_d0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_z0_biasedpvunbiased", &mu_staco_trackIPEstimate_z0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigd0_biasedpvunbiased", &mu_staco_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigz0_biasedpvunbiased", &mu_staco_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_d0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_z0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackd0pvunbiased", &mu_staco_trackd0pvunbiased, &b_mu_staco_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_staco_trackz0pvunbiased", &mu_staco_trackz0pvunbiased, &b_mu_staco_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_staco_tracksigd0pvunbiased", &mu_staco_tracksigd0pvunbiased, &b_mu_staco_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_staco_tracksigz0pvunbiased", &mu_staco_tracksigz0pvunbiased, &b_mu_staco_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_staco_EFCB_dr", &mu_staco_EFCB_dr, &b_mu_staco_EFCB_dr);
   fChain->SetBranchAddress("mu_staco_EFCB_n", &mu_staco_EFCB_n, &b_mu_staco_EFCB_n);
   fChain->SetBranchAddress("mu_staco_EFCB_MuonType", &mu_staco_EFCB_MuonType, &b_mu_staco_EFCB_MuonType);
   fChain->SetBranchAddress("mu_staco_EFCB_pt", &mu_staco_EFCB_pt, &b_mu_staco_EFCB_pt);
   fChain->SetBranchAddress("mu_staco_EFCB_eta", &mu_staco_EFCB_eta, &b_mu_staco_EFCB_eta);
   fChain->SetBranchAddress("mu_staco_EFCB_phi", &mu_staco_EFCB_phi, &b_mu_staco_EFCB_phi);
   fChain->SetBranchAddress("mu_staco_EFCB_hasCB", &mu_staco_EFCB_hasCB, &b_mu_staco_EFCB_hasCB);
   fChain->SetBranchAddress("mu_staco_EFCB_matched", &mu_staco_EFCB_matched, &b_mu_staco_EFCB_matched);
   fChain->SetBranchAddress("mu_staco_EFMG_dr", &mu_staco_EFMG_dr, &b_mu_staco_EFMG_dr);
   fChain->SetBranchAddress("mu_staco_EFMG_n", &mu_staco_EFMG_n, &b_mu_staco_EFMG_n);
   fChain->SetBranchAddress("mu_staco_EFMG_MuonType", &mu_staco_EFMG_MuonType, &b_mu_staco_EFMG_MuonType);
   fChain->SetBranchAddress("mu_staco_EFMG_pt", &mu_staco_EFMG_pt, &b_mu_staco_EFMG_pt);
   fChain->SetBranchAddress("mu_staco_EFMG_eta", &mu_staco_EFMG_eta, &b_mu_staco_EFMG_eta);
   fChain->SetBranchAddress("mu_staco_EFMG_phi", &mu_staco_EFMG_phi, &b_mu_staco_EFMG_phi);
   fChain->SetBranchAddress("mu_staco_EFMG_hasMG", &mu_staco_EFMG_hasMG, &b_mu_staco_EFMG_hasMG);
   fChain->SetBranchAddress("mu_staco_EFMG_matched", &mu_staco_EFMG_matched, &b_mu_staco_EFMG_matched);
   fChain->SetBranchAddress("mu_staco_EFME_dr", &mu_staco_EFME_dr, &b_mu_staco_EFME_dr);
   fChain->SetBranchAddress("mu_staco_EFME_n", &mu_staco_EFME_n, &b_mu_staco_EFME_n);
   fChain->SetBranchAddress("mu_staco_EFME_MuonType", &mu_staco_EFME_MuonType, &b_mu_staco_EFME_MuonType);
   fChain->SetBranchAddress("mu_staco_EFME_pt", &mu_staco_EFME_pt, &b_mu_staco_EFME_pt);
   fChain->SetBranchAddress("mu_staco_EFME_eta", &mu_staco_EFME_eta, &b_mu_staco_EFME_eta);
   fChain->SetBranchAddress("mu_staco_EFME_phi", &mu_staco_EFME_phi, &b_mu_staco_EFME_phi);
   fChain->SetBranchAddress("mu_staco_EFME_hasME", &mu_staco_EFME_hasME, &b_mu_staco_EFME_hasME);
   fChain->SetBranchAddress("mu_staco_EFME_matched", &mu_staco_EFME_matched, &b_mu_staco_EFME_matched);
   fChain->SetBranchAddress("mu_staco_L2CB_dr", &mu_staco_L2CB_dr, &b_mu_staco_L2CB_dr);
   fChain->SetBranchAddress("mu_staco_L2CB_pt", &mu_staco_L2CB_pt, &b_mu_staco_L2CB_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_eta", &mu_staco_L2CB_eta, &b_mu_staco_L2CB_eta);
   fChain->SetBranchAddress("mu_staco_L2CB_phi", &mu_staco_L2CB_phi, &b_mu_staco_L2CB_phi);
   fChain->SetBranchAddress("mu_staco_L2CB_id_pt", &mu_staco_L2CB_id_pt, &b_mu_staco_L2CB_id_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_ms_pt", &mu_staco_L2CB_ms_pt, &b_mu_staco_L2CB_ms_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_nPixHits", &mu_staco_L2CB_nPixHits, &b_mu_staco_L2CB_nPixHits);
   fChain->SetBranchAddress("mu_staco_L2CB_nSCTHits", &mu_staco_L2CB_nSCTHits, &b_mu_staco_L2CB_nSCTHits);
   fChain->SetBranchAddress("mu_staco_L2CB_nTRTHits", &mu_staco_L2CB_nTRTHits, &b_mu_staco_L2CB_nTRTHits);
   fChain->SetBranchAddress("mu_staco_L2CB_nTRTHighTHits", &mu_staco_L2CB_nTRTHighTHits, &b_mu_staco_L2CB_nTRTHighTHits);
   fChain->SetBranchAddress("mu_staco_L2CB_matched", &mu_staco_L2CB_matched, &b_mu_staco_L2CB_matched);
   fChain->SetBranchAddress("mu_staco_L1_dr", &mu_staco_L1_dr, &b_mu_staco_L1_dr);
   fChain->SetBranchAddress("mu_staco_L1_pt", &mu_staco_L1_pt, &b_mu_staco_L1_pt);
   fChain->SetBranchAddress("mu_staco_L1_eta", &mu_staco_L1_eta, &b_mu_staco_L1_eta);
   fChain->SetBranchAddress("mu_staco_L1_phi", &mu_staco_L1_phi, &b_mu_staco_L1_phi);
   fChain->SetBranchAddress("mu_staco_L1_thrNumber", &mu_staco_L1_thrNumber, &b_mu_staco_L1_thrNumber);
   fChain->SetBranchAddress("mu_staco_L1_RoINumber", &mu_staco_L1_RoINumber, &b_mu_staco_L1_RoINumber);
   fChain->SetBranchAddress("mu_staco_L1_sectorAddress", &mu_staco_L1_sectorAddress, &b_mu_staco_L1_sectorAddress);
   fChain->SetBranchAddress("mu_staco_L1_firstCandidate", &mu_staco_L1_firstCandidate, &b_mu_staco_L1_firstCandidate);
   fChain->SetBranchAddress("mu_staco_L1_moreCandInRoI", &mu_staco_L1_moreCandInRoI, &b_mu_staco_L1_moreCandInRoI);
   fChain->SetBranchAddress("mu_staco_L1_moreCandInSector", &mu_staco_L1_moreCandInSector, &b_mu_staco_L1_moreCandInSector);
   fChain->SetBranchAddress("mu_staco_L1_source", &mu_staco_L1_source, &b_mu_staco_L1_source);
   fChain->SetBranchAddress("mu_staco_L1_hemisphere", &mu_staco_L1_hemisphere, &b_mu_staco_L1_hemisphere);
   fChain->SetBranchAddress("mu_staco_L1_charge", &mu_staco_L1_charge, &b_mu_staco_L1_charge);
   fChain->SetBranchAddress("mu_staco_L1_vetoed", &mu_staco_L1_vetoed, &b_mu_staco_L1_vetoed);
   fChain->SetBranchAddress("mu_staco_L1_matched", &mu_staco_L1_matched, &b_mu_staco_L1_matched);
   fChain->SetBranchAddress("mu_muid_n", &mu_muid_n, &b_mu_muid_n);
   fChain->SetBranchAddress("mu_muid_E", &mu_muid_E, &b_mu_muid_E);
   fChain->SetBranchAddress("mu_muid_pt", &mu_muid_pt, &b_mu_muid_pt);
   fChain->SetBranchAddress("mu_muid_m", &mu_muid_m, &b_mu_muid_m);
   fChain->SetBranchAddress("mu_muid_eta", &mu_muid_eta, &b_mu_muid_eta);
   fChain->SetBranchAddress("mu_muid_phi", &mu_muid_phi, &b_mu_muid_phi);
   fChain->SetBranchAddress("mu_muid_px", &mu_muid_px, &b_mu_muid_px);
   fChain->SetBranchAddress("mu_muid_py", &mu_muid_py, &b_mu_muid_py);
   fChain->SetBranchAddress("mu_muid_pz", &mu_muid_pz, &b_mu_muid_pz);
   fChain->SetBranchAddress("mu_muid_charge", &mu_muid_charge, &b_mu_muid_charge);
   fChain->SetBranchAddress("mu_muid_allauthor", &mu_muid_allauthor, &b_mu_muid_allauthor);
   fChain->SetBranchAddress("mu_muid_author", &mu_muid_author, &b_mu_muid_author);
   fChain->SetBranchAddress("mu_muid_beta", &mu_muid_beta, &b_mu_muid_beta);
   fChain->SetBranchAddress("mu_muid_isMuonLikelihood", &mu_muid_isMuonLikelihood, &b_mu_muid_isMuonLikelihood);
   fChain->SetBranchAddress("mu_muid_matchchi2", &mu_muid_matchchi2, &b_mu_muid_matchchi2);
   fChain->SetBranchAddress("mu_muid_matchndof", &mu_muid_matchndof, &b_mu_muid_matchndof);
   fChain->SetBranchAddress("mu_muid_etcone20", &mu_muid_etcone20, &b_mu_muid_etcone20);
   fChain->SetBranchAddress("mu_muid_etcone30", &mu_muid_etcone30, &b_mu_muid_etcone30);
   fChain->SetBranchAddress("mu_muid_etcone40", &mu_muid_etcone40, &b_mu_muid_etcone40);
   fChain->SetBranchAddress("mu_muid_nucone20", &mu_muid_nucone20, &b_mu_muid_nucone20);
   fChain->SetBranchAddress("mu_muid_nucone30", &mu_muid_nucone30, &b_mu_muid_nucone30);
   fChain->SetBranchAddress("mu_muid_nucone40", &mu_muid_nucone40, &b_mu_muid_nucone40);
   fChain->SetBranchAddress("mu_muid_ptcone20", &mu_muid_ptcone20, &b_mu_muid_ptcone20);
   fChain->SetBranchAddress("mu_muid_ptcone30", &mu_muid_ptcone30, &b_mu_muid_ptcone30);
   fChain->SetBranchAddress("mu_muid_ptcone40", &mu_muid_ptcone40, &b_mu_muid_ptcone40);
   fChain->SetBranchAddress("mu_muid_etconeNoEm10", &mu_muid_etconeNoEm10, &b_mu_muid_etconeNoEm10);
   fChain->SetBranchAddress("mu_muid_etconeNoEm20", &mu_muid_etconeNoEm20, &b_mu_muid_etconeNoEm20);
   fChain->SetBranchAddress("mu_muid_etconeNoEm30", &mu_muid_etconeNoEm30, &b_mu_muid_etconeNoEm30);
   fChain->SetBranchAddress("mu_muid_etconeNoEm40", &mu_muid_etconeNoEm40, &b_mu_muid_etconeNoEm40);
   fChain->SetBranchAddress("mu_muid_scatteringCurvatureSignificance", &mu_muid_scatteringCurvatureSignificance, &b_mu_muid_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_muid_scatteringNeighbourSignificance", &mu_muid_scatteringNeighbourSignificance, &b_mu_muid_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_muid_momentumBalanceSignificance", &mu_muid_momentumBalanceSignificance, &b_mu_muid_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_muid_energyLossPar", &mu_muid_energyLossPar, &b_mu_muid_energyLossPar);
   fChain->SetBranchAddress("mu_muid_energyLossErr", &mu_muid_energyLossErr, &b_mu_muid_energyLossErr);
   fChain->SetBranchAddress("mu_muid_etCore", &mu_muid_etCore, &b_mu_muid_etCore);
   fChain->SetBranchAddress("mu_muid_energyLossType", &mu_muid_energyLossType, &b_mu_muid_energyLossType);
   fChain->SetBranchAddress("mu_muid_caloMuonIdTag", &mu_muid_caloMuonIdTag, &b_mu_muid_caloMuonIdTag);
   fChain->SetBranchAddress("mu_muid_caloLRLikelihood", &mu_muid_caloLRLikelihood, &b_mu_muid_caloLRLikelihood);
   fChain->SetBranchAddress("mu_muid_bestMatch", &mu_muid_bestMatch, &b_mu_muid_bestMatch);
   fChain->SetBranchAddress("mu_muid_isStandAloneMuon", &mu_muid_isStandAloneMuon, &b_mu_muid_isStandAloneMuon);
   fChain->SetBranchAddress("mu_muid_isCombinedMuon", &mu_muid_isCombinedMuon, &b_mu_muid_isCombinedMuon);
   fChain->SetBranchAddress("mu_muid_isLowPtReconstructedMuon", &mu_muid_isLowPtReconstructedMuon, &b_mu_muid_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_muid_isSegmentTaggedMuon", &mu_muid_isSegmentTaggedMuon, &b_mu_muid_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_muid_isCaloMuonId", &mu_muid_isCaloMuonId, &b_mu_muid_isCaloMuonId);
   fChain->SetBranchAddress("mu_muid_alsoFoundByLowPt", &mu_muid_alsoFoundByLowPt, &b_mu_muid_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_muid_alsoFoundByCaloMuonId", &mu_muid_alsoFoundByCaloMuonId, &b_mu_muid_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_muid_isSiliconAssociatedForwardMuon", &mu_muid_isSiliconAssociatedForwardMuon, &b_mu_muid_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_muid_loose", &mu_muid_loose, &b_mu_muid_loose);
   fChain->SetBranchAddress("mu_muid_medium", &mu_muid_medium, &b_mu_muid_medium);
   fChain->SetBranchAddress("mu_muid_tight", &mu_muid_tight, &b_mu_muid_tight);
   fChain->SetBranchAddress("mu_muid_d0_exPV", &mu_muid_d0_exPV, &b_mu_muid_d0_exPV);
   fChain->SetBranchAddress("mu_muid_z0_exPV", &mu_muid_z0_exPV, &b_mu_muid_z0_exPV);
   fChain->SetBranchAddress("mu_muid_phi_exPV", &mu_muid_phi_exPV, &b_mu_muid_phi_exPV);
   fChain->SetBranchAddress("mu_muid_theta_exPV", &mu_muid_theta_exPV, &b_mu_muid_theta_exPV);
   fChain->SetBranchAddress("mu_muid_qoverp_exPV", &mu_muid_qoverp_exPV, &b_mu_muid_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cb_d0_exPV", &mu_muid_cb_d0_exPV, &b_mu_muid_cb_d0_exPV);
   fChain->SetBranchAddress("mu_muid_cb_z0_exPV", &mu_muid_cb_z0_exPV, &b_mu_muid_cb_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cb_phi_exPV", &mu_muid_cb_phi_exPV, &b_mu_muid_cb_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cb_theta_exPV", &mu_muid_cb_theta_exPV, &b_mu_muid_cb_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cb_qoverp_exPV", &mu_muid_cb_qoverp_exPV, &b_mu_muid_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_d0_exPV", &mu_muid_id_d0_exPV, &b_mu_muid_id_d0_exPV);
   fChain->SetBranchAddress("mu_muid_id_z0_exPV", &mu_muid_id_z0_exPV, &b_mu_muid_id_z0_exPV);
   fChain->SetBranchAddress("mu_muid_id_phi_exPV", &mu_muid_id_phi_exPV, &b_mu_muid_id_phi_exPV);
   fChain->SetBranchAddress("mu_muid_id_theta_exPV", &mu_muid_id_theta_exPV, &b_mu_muid_id_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_qoverp_exPV", &mu_muid_id_qoverp_exPV, &b_mu_muid_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_d0_exPV", &mu_muid_me_d0_exPV, &b_mu_muid_me_d0_exPV);
   fChain->SetBranchAddress("mu_muid_me_z0_exPV", &mu_muid_me_z0_exPV, &b_mu_muid_me_z0_exPV);
   fChain->SetBranchAddress("mu_muid_me_phi_exPV", &mu_muid_me_phi_exPV, &b_mu_muid_me_phi_exPV);
   fChain->SetBranchAddress("mu_muid_me_theta_exPV", &mu_muid_me_theta_exPV, &b_mu_muid_me_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_qoverp_exPV", &mu_muid_me_qoverp_exPV, &b_mu_muid_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_ie_d0_exPV", &mu_muid_ie_d0_exPV, &b_mu_muid_ie_d0_exPV);
   fChain->SetBranchAddress("mu_muid_ie_z0_exPV", &mu_muid_ie_z0_exPV, &b_mu_muid_ie_z0_exPV);
   fChain->SetBranchAddress("mu_muid_ie_phi_exPV", &mu_muid_ie_phi_exPV, &b_mu_muid_ie_phi_exPV);
   fChain->SetBranchAddress("mu_muid_ie_theta_exPV", &mu_muid_ie_theta_exPV, &b_mu_muid_ie_theta_exPV);
   fChain->SetBranchAddress("mu_muid_ie_qoverp_exPV", &mu_muid_ie_qoverp_exPV, &b_mu_muid_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_SpaceTime_detID", &mu_muid_SpaceTime_detID, &b_mu_muid_SpaceTime_detID);
   fChain->SetBranchAddress("mu_muid_SpaceTime_t", &mu_muid_SpaceTime_t, &b_mu_muid_SpaceTime_t);
   fChain->SetBranchAddress("mu_muid_SpaceTime_tError", &mu_muid_SpaceTime_tError, &b_mu_muid_SpaceTime_tError);
   fChain->SetBranchAddress("mu_muid_SpaceTime_weight", &mu_muid_SpaceTime_weight, &b_mu_muid_SpaceTime_weight);
   fChain->SetBranchAddress("mu_muid_SpaceTime_x", &mu_muid_SpaceTime_x, &b_mu_muid_SpaceTime_x);
   fChain->SetBranchAddress("mu_muid_SpaceTime_y", &mu_muid_SpaceTime_y, &b_mu_muid_SpaceTime_y);
   fChain->SetBranchAddress("mu_muid_SpaceTime_z", &mu_muid_SpaceTime_z, &b_mu_muid_SpaceTime_z);
   fChain->SetBranchAddress("mu_muid_cov_d0_exPV", &mu_muid_cov_d0_exPV, &b_mu_muid_cov_d0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_exPV", &mu_muid_cov_z0_exPV, &b_mu_muid_cov_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_exPV", &mu_muid_cov_phi_exPV, &b_mu_muid_cov_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_theta_exPV", &mu_muid_cov_theta_exPV, &b_mu_muid_cov_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_qoverp_exPV", &mu_muid_cov_qoverp_exPV, &b_mu_muid_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_z0_exPV", &mu_muid_cov_d0_z0_exPV, &b_mu_muid_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_phi_exPV", &mu_muid_cov_d0_phi_exPV, &b_mu_muid_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_theta_exPV", &mu_muid_cov_d0_theta_exPV, &b_mu_muid_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_qoverp_exPV", &mu_muid_cov_d0_qoverp_exPV, &b_mu_muid_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_phi_exPV", &mu_muid_cov_z0_phi_exPV, &b_mu_muid_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_theta_exPV", &mu_muid_cov_z0_theta_exPV, &b_mu_muid_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_qoverp_exPV", &mu_muid_cov_z0_qoverp_exPV, &b_mu_muid_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_theta_exPV", &mu_muid_cov_phi_theta_exPV, &b_mu_muid_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_qoverp_exPV", &mu_muid_cov_phi_qoverp_exPV, &b_mu_muid_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_theta_qoverp_exPV", &mu_muid_cov_theta_qoverp_exPV, &b_mu_muid_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_d0_exPV", &mu_muid_id_cov_d0_exPV, &b_mu_muid_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_z0_exPV", &mu_muid_id_cov_z0_exPV, &b_mu_muid_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_phi_exPV", &mu_muid_id_cov_phi_exPV, &b_mu_muid_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_theta_exPV", &mu_muid_id_cov_theta_exPV, &b_mu_muid_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_cov_qoverp_exPV", &mu_muid_id_cov_qoverp_exPV, &b_mu_muid_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_d0_exPV", &mu_muid_me_cov_d0_exPV, &b_mu_muid_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_z0_exPV", &mu_muid_me_cov_z0_exPV, &b_mu_muid_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_phi_exPV", &mu_muid_me_cov_phi_exPV, &b_mu_muid_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_theta_exPV", &mu_muid_me_cov_theta_exPV, &b_mu_muid_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_cov_qoverp_exPV", &mu_muid_me_cov_qoverp_exPV, &b_mu_muid_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_ms_d0", &mu_muid_ms_d0, &b_mu_muid_ms_d0);
   fChain->SetBranchAddress("mu_muid_ms_z0", &mu_muid_ms_z0, &b_mu_muid_ms_z0);
   fChain->SetBranchAddress("mu_muid_ms_phi", &mu_muid_ms_phi, &b_mu_muid_ms_phi);
   fChain->SetBranchAddress("mu_muid_ms_theta", &mu_muid_ms_theta, &b_mu_muid_ms_theta);
   fChain->SetBranchAddress("mu_muid_ms_qoverp", &mu_muid_ms_qoverp, &b_mu_muid_ms_qoverp);
   fChain->SetBranchAddress("mu_muid_id_d0", &mu_muid_id_d0, &b_mu_muid_id_d0);
   fChain->SetBranchAddress("mu_muid_id_z0", &mu_muid_id_z0, &b_mu_muid_id_z0);
   fChain->SetBranchAddress("mu_muid_id_phi", &mu_muid_id_phi, &b_mu_muid_id_phi);
   fChain->SetBranchAddress("mu_muid_id_theta", &mu_muid_id_theta, &b_mu_muid_id_theta);
   fChain->SetBranchAddress("mu_muid_id_qoverp", &mu_muid_id_qoverp, &b_mu_muid_id_qoverp);
   fChain->SetBranchAddress("mu_muid_me_d0", &mu_muid_me_d0, &b_mu_muid_me_d0);
   fChain->SetBranchAddress("mu_muid_me_z0", &mu_muid_me_z0, &b_mu_muid_me_z0);
   fChain->SetBranchAddress("mu_muid_me_phi", &mu_muid_me_phi, &b_mu_muid_me_phi);
   fChain->SetBranchAddress("mu_muid_me_theta", &mu_muid_me_theta, &b_mu_muid_me_theta);
   fChain->SetBranchAddress("mu_muid_me_qoverp", &mu_muid_me_qoverp, &b_mu_muid_me_qoverp);
   fChain->SetBranchAddress("mu_muid_ie_d0", &mu_muid_ie_d0, &b_mu_muid_ie_d0);
   fChain->SetBranchAddress("mu_muid_ie_z0", &mu_muid_ie_z0, &b_mu_muid_ie_z0);
   fChain->SetBranchAddress("mu_muid_ie_phi", &mu_muid_ie_phi, &b_mu_muid_ie_phi);
   fChain->SetBranchAddress("mu_muid_ie_theta", &mu_muid_ie_theta, &b_mu_muid_ie_theta);
   fChain->SetBranchAddress("mu_muid_ie_qoverp", &mu_muid_ie_qoverp, &b_mu_muid_ie_qoverp);
   fChain->SetBranchAddress("mu_muid_nOutliersOnTrack", &mu_muid_nOutliersOnTrack, &b_mu_muid_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_muid_nBLHits", &mu_muid_nBLHits, &b_mu_muid_nBLHits);
   fChain->SetBranchAddress("mu_muid_nPixHits", &mu_muid_nPixHits, &b_mu_muid_nPixHits);
   fChain->SetBranchAddress("mu_muid_nSCTHits", &mu_muid_nSCTHits, &b_mu_muid_nSCTHits);
   fChain->SetBranchAddress("mu_muid_nTRTHits", &mu_muid_nTRTHits, &b_mu_muid_nTRTHits);
   fChain->SetBranchAddress("mu_muid_nTRTHighTHits", &mu_muid_nTRTHighTHits, &b_mu_muid_nTRTHighTHits);
   fChain->SetBranchAddress("mu_muid_nBLSharedHits", &mu_muid_nBLSharedHits, &b_mu_muid_nBLSharedHits);
   fChain->SetBranchAddress("mu_muid_nPixSharedHits", &mu_muid_nPixSharedHits, &b_mu_muid_nPixSharedHits);
   fChain->SetBranchAddress("mu_muid_nPixHoles", &mu_muid_nPixHoles, &b_mu_muid_nPixHoles);
   fChain->SetBranchAddress("mu_muid_nSCTSharedHits", &mu_muid_nSCTSharedHits, &b_mu_muid_nSCTSharedHits);
   fChain->SetBranchAddress("mu_muid_nSCTHoles", &mu_muid_nSCTHoles, &b_mu_muid_nSCTHoles);
   fChain->SetBranchAddress("mu_muid_nTRTOutliers", &mu_muid_nTRTOutliers, &b_mu_muid_nTRTOutliers);
   fChain->SetBranchAddress("mu_muid_nTRTHighTOutliers", &mu_muid_nTRTHighTOutliers, &b_mu_muid_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_muid_nGangedPixels", &mu_muid_nGangedPixels, &b_mu_muid_nGangedPixels);
   fChain->SetBranchAddress("mu_muid_nPixelDeadSensors", &mu_muid_nPixelDeadSensors, &b_mu_muid_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_muid_nSCTDeadSensors", &mu_muid_nSCTDeadSensors, &b_mu_muid_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_muid_nTRTDeadStraws", &mu_muid_nTRTDeadStraws, &b_mu_muid_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_muid_expectBLayerHit", &mu_muid_expectBLayerHit, &b_mu_muid_expectBLayerHit);
   fChain->SetBranchAddress("mu_muid_nMDTHits", &mu_muid_nMDTHits, &b_mu_muid_nMDTHits);
   fChain->SetBranchAddress("mu_muid_nMDTHoles", &mu_muid_nMDTHoles, &b_mu_muid_nMDTHoles);
   fChain->SetBranchAddress("mu_muid_nCSCEtaHits", &mu_muid_nCSCEtaHits, &b_mu_muid_nCSCEtaHits);
   fChain->SetBranchAddress("mu_muid_nCSCEtaHoles", &mu_muid_nCSCEtaHoles, &b_mu_muid_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nCSCUnspoiledEtaHits", &mu_muid_nCSCUnspoiledEtaHits, &b_mu_muid_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_muid_nCSCPhiHits", &mu_muid_nCSCPhiHits, &b_mu_muid_nCSCPhiHits);
   fChain->SetBranchAddress("mu_muid_nCSCPhiHoles", &mu_muid_nCSCPhiHoles, &b_mu_muid_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nRPCEtaHits", &mu_muid_nRPCEtaHits, &b_mu_muid_nRPCEtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCEtaHoles", &mu_muid_nRPCEtaHoles, &b_mu_muid_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nRPCPhiHits", &mu_muid_nRPCPhiHits, &b_mu_muid_nRPCPhiHits);
   fChain->SetBranchAddress("mu_muid_nRPCPhiHoles", &mu_muid_nRPCPhiHoles, &b_mu_muid_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nTGCEtaHits", &mu_muid_nTGCEtaHits, &b_mu_muid_nTGCEtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCEtaHoles", &mu_muid_nTGCEtaHoles, &b_mu_muid_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nTGCPhiHits", &mu_muid_nTGCPhiHits, &b_mu_muid_nTGCPhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCPhiHoles", &mu_muid_nTGCPhiHoles, &b_mu_muid_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nprecisionLayers", &mu_muid_nprecisionLayers, &b_mu_muid_nprecisionLayers);
   fChain->SetBranchAddress("mu_muid_nprecisionHoleLayers", &mu_muid_nprecisionHoleLayers, &b_mu_muid_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_muid_nphiLayers", &mu_muid_nphiLayers, &b_mu_muid_nphiLayers);
   fChain->SetBranchAddress("mu_muid_ntrigEtaLayers", &mu_muid_ntrigEtaLayers, &b_mu_muid_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_muid_nphiHoleLayers", &mu_muid_nphiHoleLayers, &b_mu_muid_nphiHoleLayers);
   fChain->SetBranchAddress("mu_muid_ntrigEtaHoleLayers", &mu_muid_ntrigEtaHoleLayers, &b_mu_muid_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_muid_nMDTBIHits", &mu_muid_nMDTBIHits, &b_mu_muid_nMDTBIHits);
   fChain->SetBranchAddress("mu_muid_nMDTBMHits", &mu_muid_nMDTBMHits, &b_mu_muid_nMDTBMHits);
   fChain->SetBranchAddress("mu_muid_nMDTBOHits", &mu_muid_nMDTBOHits, &b_mu_muid_nMDTBOHits);
   fChain->SetBranchAddress("mu_muid_nMDTBEEHits", &mu_muid_nMDTBEEHits, &b_mu_muid_nMDTBEEHits);
   fChain->SetBranchAddress("mu_muid_nMDTBIS78Hits", &mu_muid_nMDTBIS78Hits, &b_mu_muid_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_muid_nMDTEIHits", &mu_muid_nMDTEIHits, &b_mu_muid_nMDTEIHits);
   fChain->SetBranchAddress("mu_muid_nMDTEMHits", &mu_muid_nMDTEMHits, &b_mu_muid_nMDTEMHits);
   fChain->SetBranchAddress("mu_muid_nMDTEOHits", &mu_muid_nMDTEOHits, &b_mu_muid_nMDTEOHits);
   fChain->SetBranchAddress("mu_muid_nMDTEEHits", &mu_muid_nMDTEEHits, &b_mu_muid_nMDTEEHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer1EtaHits", &mu_muid_nRPCLayer1EtaHits, &b_mu_muid_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer2EtaHits", &mu_muid_nRPCLayer2EtaHits, &b_mu_muid_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer3EtaHits", &mu_muid_nRPCLayer3EtaHits, &b_mu_muid_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer1PhiHits", &mu_muid_nRPCLayer1PhiHits, &b_mu_muid_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer2PhiHits", &mu_muid_nRPCLayer2PhiHits, &b_mu_muid_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_muid_nRPCLayer3PhiHits", &mu_muid_nRPCLayer3PhiHits, &b_mu_muid_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer1EtaHits", &mu_muid_nTGCLayer1EtaHits, &b_mu_muid_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer2EtaHits", &mu_muid_nTGCLayer2EtaHits, &b_mu_muid_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer3EtaHits", &mu_muid_nTGCLayer3EtaHits, &b_mu_muid_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer4EtaHits", &mu_muid_nTGCLayer4EtaHits, &b_mu_muid_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer1PhiHits", &mu_muid_nTGCLayer1PhiHits, &b_mu_muid_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer2PhiHits", &mu_muid_nTGCLayer2PhiHits, &b_mu_muid_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer3PhiHits", &mu_muid_nTGCLayer3PhiHits, &b_mu_muid_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCLayer4PhiHits", &mu_muid_nTGCLayer4PhiHits, &b_mu_muid_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_muid_barrelSectors", &mu_muid_barrelSectors, &b_mu_muid_barrelSectors);
   fChain->SetBranchAddress("mu_muid_endcapSectors", &mu_muid_endcapSectors, &b_mu_muid_endcapSectors);
   fChain->SetBranchAddress("mu_muid_trackd0", &mu_muid_trackd0, &b_mu_muid_trackd0);
   fChain->SetBranchAddress("mu_muid_trackz0", &mu_muid_trackz0, &b_mu_muid_trackz0);
   fChain->SetBranchAddress("mu_muid_trackphi", &mu_muid_trackphi, &b_mu_muid_trackphi);
   fChain->SetBranchAddress("mu_muid_tracktheta", &mu_muid_tracktheta, &b_mu_muid_tracktheta);
   fChain->SetBranchAddress("mu_muid_trackqoverp", &mu_muid_trackqoverp, &b_mu_muid_trackqoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_d0", &mu_muid_trackcov_d0, &b_mu_muid_trackcov_d0);
   fChain->SetBranchAddress("mu_muid_trackcov_z0", &mu_muid_trackcov_z0, &b_mu_muid_trackcov_z0);
   fChain->SetBranchAddress("mu_muid_trackcov_phi", &mu_muid_trackcov_phi, &b_mu_muid_trackcov_phi);
   fChain->SetBranchAddress("mu_muid_trackcov_theta", &mu_muid_trackcov_theta, &b_mu_muid_trackcov_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_qoverp", &mu_muid_trackcov_qoverp, &b_mu_muid_trackcov_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_z0", &mu_muid_trackcov_d0_z0, &b_mu_muid_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_phi", &mu_muid_trackcov_d0_phi, &b_mu_muid_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_theta", &mu_muid_trackcov_d0_theta, &b_mu_muid_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_d0_qoverp", &mu_muid_trackcov_d0_qoverp, &b_mu_muid_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_z0_phi", &mu_muid_trackcov_z0_phi, &b_mu_muid_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_muid_trackcov_z0_theta", &mu_muid_trackcov_z0_theta, &b_mu_muid_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_z0_qoverp", &mu_muid_trackcov_z0_qoverp, &b_mu_muid_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_phi_theta", &mu_muid_trackcov_phi_theta, &b_mu_muid_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_phi_qoverp", &mu_muid_trackcov_phi_qoverp, &b_mu_muid_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_theta_qoverp", &mu_muid_trackcov_theta_qoverp, &b_mu_muid_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_muid_trackfitchi2", &mu_muid_trackfitchi2, &b_mu_muid_trackfitchi2);
   fChain->SetBranchAddress("mu_muid_trackfitndof", &mu_muid_trackfitndof, &b_mu_muid_trackfitndof);
   fChain->SetBranchAddress("mu_muid_hastrack", &mu_muid_hastrack, &b_mu_muid_hastrack);
   fChain->SetBranchAddress("mu_muid_trackd0beam", &mu_muid_trackd0beam, &b_mu_muid_trackd0beam);
   fChain->SetBranchAddress("mu_muid_trackz0beam", &mu_muid_trackz0beam, &b_mu_muid_trackz0beam);
   fChain->SetBranchAddress("mu_muid_tracksigd0beam", &mu_muid_tracksigd0beam, &b_mu_muid_tracksigd0beam);
   fChain->SetBranchAddress("mu_muid_tracksigz0beam", &mu_muid_tracksigz0beam, &b_mu_muid_tracksigz0beam);
   fChain->SetBranchAddress("mu_muid_trackd0pv", &mu_muid_trackd0pv, &b_mu_muid_trackd0pv);
   fChain->SetBranchAddress("mu_muid_trackz0pv", &mu_muid_trackz0pv, &b_mu_muid_trackz0pv);
   fChain->SetBranchAddress("mu_muid_tracksigd0pv", &mu_muid_tracksigd0pv, &b_mu_muid_tracksigd0pv);
   fChain->SetBranchAddress("mu_muid_tracksigz0pv", &mu_muid_tracksigz0pv, &b_mu_muid_tracksigz0pv);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_d0_biasedpvunbiased", &mu_muid_trackIPEstimate_d0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_z0_biasedpvunbiased", &mu_muid_trackIPEstimate_z0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigd0_biasedpvunbiased", &mu_muid_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigz0_biasedpvunbiased", &mu_muid_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_muid_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_d0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_z0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_muid_trackd0pvunbiased", &mu_muid_trackd0pvunbiased, &b_mu_muid_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_muid_trackz0pvunbiased", &mu_muid_trackz0pvunbiased, &b_mu_muid_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_muid_tracksigd0pvunbiased", &mu_muid_tracksigd0pvunbiased, &b_mu_muid_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_muid_tracksigz0pvunbiased", &mu_muid_tracksigz0pvunbiased, &b_mu_muid_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_muid_EFCB_dr", &mu_muid_EFCB_dr, &b_mu_muid_EFCB_dr);
   fChain->SetBranchAddress("mu_muid_EFCB_n", &mu_muid_EFCB_n, &b_mu_muid_EFCB_n);
   fChain->SetBranchAddress("mu_muid_EFCB_MuonType", &mu_muid_EFCB_MuonType, &b_mu_muid_EFCB_MuonType);
   fChain->SetBranchAddress("mu_muid_EFCB_pt", &mu_muid_EFCB_pt, &b_mu_muid_EFCB_pt);
   fChain->SetBranchAddress("mu_muid_EFCB_eta", &mu_muid_EFCB_eta, &b_mu_muid_EFCB_eta);
   fChain->SetBranchAddress("mu_muid_EFCB_phi", &mu_muid_EFCB_phi, &b_mu_muid_EFCB_phi);
   fChain->SetBranchAddress("mu_muid_EFCB_hasCB", &mu_muid_EFCB_hasCB, &b_mu_muid_EFCB_hasCB);
   fChain->SetBranchAddress("mu_muid_EFCB_matched", &mu_muid_EFCB_matched, &b_mu_muid_EFCB_matched);
   fChain->SetBranchAddress("mu_muid_EFMG_dr", &mu_muid_EFMG_dr, &b_mu_muid_EFMG_dr);
   fChain->SetBranchAddress("mu_muid_EFMG_n", &mu_muid_EFMG_n, &b_mu_muid_EFMG_n);
   fChain->SetBranchAddress("mu_muid_EFMG_MuonType", &mu_muid_EFMG_MuonType, &b_mu_muid_EFMG_MuonType);
   fChain->SetBranchAddress("mu_muid_EFMG_pt", &mu_muid_EFMG_pt, &b_mu_muid_EFMG_pt);
   fChain->SetBranchAddress("mu_muid_EFMG_eta", &mu_muid_EFMG_eta, &b_mu_muid_EFMG_eta);
   fChain->SetBranchAddress("mu_muid_EFMG_phi", &mu_muid_EFMG_phi, &b_mu_muid_EFMG_phi);
   fChain->SetBranchAddress("mu_muid_EFMG_hasMG", &mu_muid_EFMG_hasMG, &b_mu_muid_EFMG_hasMG);
   fChain->SetBranchAddress("mu_muid_EFMG_matched", &mu_muid_EFMG_matched, &b_mu_muid_EFMG_matched);
   fChain->SetBranchAddress("mu_muid_EFME_dr", &mu_muid_EFME_dr, &b_mu_muid_EFME_dr);
   fChain->SetBranchAddress("mu_muid_EFME_n", &mu_muid_EFME_n, &b_mu_muid_EFME_n);
   fChain->SetBranchAddress("mu_muid_EFME_MuonType", &mu_muid_EFME_MuonType, &b_mu_muid_EFME_MuonType);
   fChain->SetBranchAddress("mu_muid_EFME_pt", &mu_muid_EFME_pt, &b_mu_muid_EFME_pt);
   fChain->SetBranchAddress("mu_muid_EFME_eta", &mu_muid_EFME_eta, &b_mu_muid_EFME_eta);
   fChain->SetBranchAddress("mu_muid_EFME_phi", &mu_muid_EFME_phi, &b_mu_muid_EFME_phi);
   fChain->SetBranchAddress("mu_muid_EFME_hasME", &mu_muid_EFME_hasME, &b_mu_muid_EFME_hasME);
   fChain->SetBranchAddress("mu_muid_EFME_matched", &mu_muid_EFME_matched, &b_mu_muid_EFME_matched);
   fChain->SetBranchAddress("mu_muid_L2CB_dr", &mu_muid_L2CB_dr, &b_mu_muid_L2CB_dr);
   fChain->SetBranchAddress("mu_muid_L2CB_pt", &mu_muid_L2CB_pt, &b_mu_muid_L2CB_pt);
   fChain->SetBranchAddress("mu_muid_L2CB_eta", &mu_muid_L2CB_eta, &b_mu_muid_L2CB_eta);
   fChain->SetBranchAddress("mu_muid_L2CB_phi", &mu_muid_L2CB_phi, &b_mu_muid_L2CB_phi);
   fChain->SetBranchAddress("mu_muid_L2CB_id_pt", &mu_muid_L2CB_id_pt, &b_mu_muid_L2CB_id_pt);
   fChain->SetBranchAddress("mu_muid_L2CB_ms_pt", &mu_muid_L2CB_ms_pt, &b_mu_muid_L2CB_ms_pt);
   fChain->SetBranchAddress("mu_muid_L2CB_nPixHits", &mu_muid_L2CB_nPixHits, &b_mu_muid_L2CB_nPixHits);
   fChain->SetBranchAddress("mu_muid_L2CB_nSCTHits", &mu_muid_L2CB_nSCTHits, &b_mu_muid_L2CB_nSCTHits);
   fChain->SetBranchAddress("mu_muid_L2CB_nTRTHits", &mu_muid_L2CB_nTRTHits, &b_mu_muid_L2CB_nTRTHits);
   fChain->SetBranchAddress("mu_muid_L2CB_nTRTHighTHits", &mu_muid_L2CB_nTRTHighTHits, &b_mu_muid_L2CB_nTRTHighTHits);
   fChain->SetBranchAddress("mu_muid_L2CB_matched", &mu_muid_L2CB_matched, &b_mu_muid_L2CB_matched);
   fChain->SetBranchAddress("mu_muid_L1_dr", &mu_muid_L1_dr, &b_mu_muid_L1_dr);
   fChain->SetBranchAddress("mu_muid_L1_pt", &mu_muid_L1_pt, &b_mu_muid_L1_pt);
   fChain->SetBranchAddress("mu_muid_L1_eta", &mu_muid_L1_eta, &b_mu_muid_L1_eta);
   fChain->SetBranchAddress("mu_muid_L1_phi", &mu_muid_L1_phi, &b_mu_muid_L1_phi);
   fChain->SetBranchAddress("mu_muid_L1_thrNumber", &mu_muid_L1_thrNumber, &b_mu_muid_L1_thrNumber);
   fChain->SetBranchAddress("mu_muid_L1_RoINumber", &mu_muid_L1_RoINumber, &b_mu_muid_L1_RoINumber);
   fChain->SetBranchAddress("mu_muid_L1_sectorAddress", &mu_muid_L1_sectorAddress, &b_mu_muid_L1_sectorAddress);
   fChain->SetBranchAddress("mu_muid_L1_firstCandidate", &mu_muid_L1_firstCandidate, &b_mu_muid_L1_firstCandidate);
   fChain->SetBranchAddress("mu_muid_L1_moreCandInRoI", &mu_muid_L1_moreCandInRoI, &b_mu_muid_L1_moreCandInRoI);
   fChain->SetBranchAddress("mu_muid_L1_moreCandInSector", &mu_muid_L1_moreCandInSector, &b_mu_muid_L1_moreCandInSector);
   fChain->SetBranchAddress("mu_muid_L1_source", &mu_muid_L1_source, &b_mu_muid_L1_source);
   fChain->SetBranchAddress("mu_muid_L1_hemisphere", &mu_muid_L1_hemisphere, &b_mu_muid_L1_hemisphere);
   fChain->SetBranchAddress("mu_muid_L1_charge", &mu_muid_L1_charge, &b_mu_muid_L1_charge);
   fChain->SetBranchAddress("mu_muid_L1_vetoed", &mu_muid_L1_vetoed, &b_mu_muid_L1_vetoed);
   fChain->SetBranchAddress("mu_muid_L1_matched", &mu_muid_L1_matched, &b_mu_muid_L1_matched);
   fChain->SetBranchAddress("muid_n", &muid_n, &b_muid_n);
   fChain->SetBranchAddress("muid_nScatters", &muid_nScatters, &b_muid_nScatters);
   fChain->SetBranchAddress("muid_scatSignificance", &muid_scatSignificance, &b_muid_scatSignificance);
   fChain->SetBranchAddress("muid_neighbourSignificance", &muid_neighbourSignificance, &b_muid_neighbourSignificance);
   fChain->SetBranchAddress("muid_eta", &muid_eta, &b_muid_eta);
   fChain->SetBranchAddress("trig_DB_SMK", &trig_DB_SMK, &b_trig_DB_SMK);
   fChain->SetBranchAddress("trig_DB_L1PSK", &trig_DB_L1PSK, &b_trig_DB_L1PSK);
   fChain->SetBranchAddress("trig_DB_HLTPSK", &trig_DB_HLTPSK, &b_trig_DB_HLTPSK);
   fChain->SetBranchAddress("trig_L1_TAV", &trig_L1_TAV, &b_trig_L1_TAV);
   fChain->SetBranchAddress("trig_L2_passedPhysics", &trig_L2_passedPhysics, &b_trig_L2_passedPhysics);
   fChain->SetBranchAddress("trig_EF_passedPhysics", &trig_EF_passedPhysics, &b_trig_EF_passedPhysics);
   fChain->SetBranchAddress("trig_L1_TBP", &trig_L1_TBP, &b_trig_L1_TBP);
   fChain->SetBranchAddress("trig_L1_TAP", &trig_L1_TAP, &b_trig_L1_TAP);
   fChain->SetBranchAddress("trig_L2_passedRaw", &trig_L2_passedRaw, &b_trig_L2_passedRaw);
   fChain->SetBranchAddress("trig_EF_passedRaw", &trig_EF_passedRaw, &b_trig_EF_passedRaw);
   fChain->SetBranchAddress("trig_L2_truncated", &trig_L2_truncated, &b_trig_L2_truncated);
   fChain->SetBranchAddress("trig_EF_truncated", &trig_EF_truncated, &b_trig_EF_truncated);
   fChain->SetBranchAddress("trig_L2_resurrected", &trig_L2_resurrected, &b_trig_L2_resurrected);
   fChain->SetBranchAddress("trig_EF_resurrected", &trig_EF_resurrected, &b_trig_EF_resurrected);
   fChain->SetBranchAddress("trig_L2_passedThrough", &trig_L2_passedThrough, &b_trig_L2_passedThrough);
   fChain->SetBranchAddress("trig_EF_passedThrough", &trig_EF_passedThrough, &b_trig_EF_passedThrough);
   fChain->SetBranchAddress("trig_L2_wasPrescaled", &trig_L2_wasPrescaled, &b_trig_L2_wasPrescaled);
   fChain->SetBranchAddress("trig_L2_wasResurrected", &trig_L2_wasResurrected, &b_trig_L2_wasResurrected);
   fChain->SetBranchAddress("trig_EF_wasPrescaled", &trig_EF_wasPrescaled, &b_trig_EF_wasPrescaled);
   fChain->SetBranchAddress("trig_EF_wasResurrected", &trig_EF_wasResurrected, &b_trig_EF_wasResurrected);
   fChain->SetBranchAddress("L1_FJ3", &L1_FJ3, &b_L1_FJ3);
   fChain->SetBranchAddress("L1_J10", &L1_J10, &b_L1_J10);
   fChain->SetBranchAddress("L1_J15", &L1_J15, &b_L1_J15);
   fChain->SetBranchAddress("L1_J30", &L1_J30, &b_L1_J30);
   fChain->SetBranchAddress("L1_J5", &L1_J5, &b_L1_J5);
   fChain->SetBranchAddress("L1_J75", &L1_J75, &b_L1_J75);
   fChain->SetBranchAddress("trig_L1_jet_n", &trig_L1_jet_n, &b_trig_L1_jet_n);
   fChain->SetBranchAddress("trig_L1_jet_eta", &trig_L1_jet_eta, &b_trig_L1_jet_eta);
   fChain->SetBranchAddress("trig_L1_jet_phi", &trig_L1_jet_phi, &b_trig_L1_jet_phi);
   fChain->SetBranchAddress("trig_L1_jet_thrNames", &trig_L1_jet_thrNames, &b_trig_L1_jet_thrNames);
   fChain->SetBranchAddress("trig_L1_jet_thrValues", &trig_L1_jet_thrValues, &b_trig_L1_jet_thrValues);
   fChain->SetBranchAddress("trig_L1_jet_thrPattern", &trig_L1_jet_thrPattern, &b_trig_L1_jet_thrPattern);
   fChain->SetBranchAddress("trig_L1_jet_RoIWord", &trig_L1_jet_RoIWord, &b_trig_L1_jet_RoIWord);
   fChain->SetBranchAddress("trig_L1_jet_et4x4", &trig_L1_jet_et4x4, &b_trig_L1_jet_et4x4);
   fChain->SetBranchAddress("trig_L1_jet_et6x6", &trig_L1_jet_et6x6, &b_trig_L1_jet_et6x6);
   fChain->SetBranchAddress("trig_L1_jet_et8x8", &trig_L1_jet_et8x8, &b_trig_L1_jet_et8x8);
   fChain->SetBranchAddress("trig_L1_emtau_n", &trig_L1_emtau_n, &b_trig_L1_emtau_n);
   fChain->SetBranchAddress("trig_L1_emtau_eta", &trig_L1_emtau_eta, &b_trig_L1_emtau_eta);
   fChain->SetBranchAddress("trig_L1_emtau_phi", &trig_L1_emtau_phi, &b_trig_L1_emtau_phi);
   fChain->SetBranchAddress("trig_L1_emtau_thrNames", &trig_L1_emtau_thrNames, &b_trig_L1_emtau_thrNames);
   fChain->SetBranchAddress("trig_L1_emtau_thrValues", &trig_L1_emtau_thrValues, &b_trig_L1_emtau_thrValues);
   fChain->SetBranchAddress("trig_L1_emtau_core", &trig_L1_emtau_core, &b_trig_L1_emtau_core);
   fChain->SetBranchAddress("trig_L1_emtau_EMClus", &trig_L1_emtau_EMClus, &b_trig_L1_emtau_EMClus);
   fChain->SetBranchAddress("trig_L1_emtau_tauClus", &trig_L1_emtau_tauClus, &b_trig_L1_emtau_tauClus);
   fChain->SetBranchAddress("trig_L1_emtau_EMIsol", &trig_L1_emtau_EMIsol, &b_trig_L1_emtau_EMIsol);
   fChain->SetBranchAddress("trig_L1_emtau_hadIsol", &trig_L1_emtau_hadIsol, &b_trig_L1_emtau_hadIsol);
   fChain->SetBranchAddress("trig_L1_emtau_hadCore", &trig_L1_emtau_hadCore, &b_trig_L1_emtau_hadCore);
   fChain->SetBranchAddress("trig_L1_emtau_thrPattern", &trig_L1_emtau_thrPattern, &b_trig_L1_emtau_thrPattern);
   fChain->SetBranchAddress("trig_L1_emtau_RoIWord", &trig_L1_emtau_RoIWord, &b_trig_L1_emtau_RoIWord);
   fChain->SetBranchAddress("trig_EF_jet_n", &trig_EF_jet_n, &b_trig_EF_jet_n);
   fChain->SetBranchAddress("trig_EF_jet_E", &trig_EF_jet_E, &b_trig_EF_jet_E);
   fChain->SetBranchAddress("trig_EF_jet_pt", &trig_EF_jet_pt, &b_trig_EF_jet_pt);
   fChain->SetBranchAddress("trig_EF_jet_m", &trig_EF_jet_m, &b_trig_EF_jet_m);
   fChain->SetBranchAddress("trig_EF_jet_eta", &trig_EF_jet_eta, &b_trig_EF_jet_eta);
   fChain->SetBranchAddress("trig_EF_jet_phi", &trig_EF_jet_phi, &b_trig_EF_jet_phi);
   fChain->SetBranchAddress("trig_EF_jet_a4", &trig_EF_jet_a4, &b_trig_EF_jet_a4);
   fChain->SetBranchAddress("trig_EF_jet_a2", &trig_EF_jet_a2, &b_trig_EF_jet_a2);
   fChain->SetBranchAddress("trig_EF_jet_a4hi", &trig_EF_jet_a4hi, &b_trig_EF_jet_a4hi);
   fChain->SetBranchAddress("trig_EF_jet_a2hi", &trig_EF_jet_a2hi, &b_trig_EF_jet_a2hi);
   fChain->SetBranchAddress("trig_EF_jet_RoIword", &trig_EF_jet_RoIword, &b_trig_EF_jet_RoIword);
   fChain->SetBranchAddress("trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j10_u0uchad_LArNoiseBurst", &trig_EF_jet_EF_j10_u0uchad_LArNoiseBurst, &b_trig_EF_jet_EF_j10_u0uchad_LArNoiseBurst);
   fChain->SetBranchAddress("trig_EF_jet_EF_j10_u0uchad_empty_LArNoiseBurst", &trig_EF_jet_EF_j10_u0uchad_empty_LArNoiseBurst, &b_trig_EF_jet_EF_j10_u0uchad_empty_LArNoiseBurst);
   fChain->SetBranchAddress("trig_EF_jet_EF_j10_u0uchad_firstempty_LArNoiseBurst", &trig_EF_jet_EF_j10_u0uchad_firstempty_LArNoiseBurst, &b_trig_EF_jet_EF_j10_u0uchad_firstempty_LArNoiseBurst);
   fChain->SetBranchAddress("trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1J10", &trig_EF_jet_EF_j15_a2hi_EFFS_L1J10, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1J10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS", &trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10", &trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20", &trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS", &trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10", &trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1J10", &trig_EF_jet_EF_j20_a2hi_EFFS_L1J10, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1J10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS", &trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10", &trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20", &trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS", &trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10", &trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1J10", &trig_EF_jet_EF_j25_a2hi_EFFS_L1J10, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1J10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10", &trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20", &trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j75_a4hi_EFFS_L1J10", &trig_EF_jet_EF_j75_a4hi_EFFS_L1J10, &b_trig_EF_jet_EF_j75_a4hi_EFFS_L1J10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j75_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j75_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j75_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_L1_esum_thrNames", &trig_L1_esum_thrNames, &b_trig_L1_esum_thrNames);
   fChain->SetBranchAddress("trig_L1_esum_ExMiss", &trig_L1_esum_ExMiss, &b_trig_L1_esum_ExMiss);
   fChain->SetBranchAddress("trig_L1_esum_EyMiss", &trig_L1_esum_EyMiss, &b_trig_L1_esum_EyMiss);
   fChain->SetBranchAddress("trig_L1_esum_energyT", &trig_L1_esum_energyT, &b_trig_L1_esum_energyT);
   fChain->SetBranchAddress("trig_L1_esum_overflowX", &trig_L1_esum_overflowX, &b_trig_L1_esum_overflowX);
   fChain->SetBranchAddress("trig_L1_esum_overflowY", &trig_L1_esum_overflowY, &b_trig_L1_esum_overflowY);
   fChain->SetBranchAddress("trig_L1_esum_overflowT", &trig_L1_esum_overflowT, &b_trig_L1_esum_overflowT);
   fChain->SetBranchAddress("trig_L1_esum_RoIWord0", &trig_L1_esum_RoIWord0, &b_trig_L1_esum_RoIWord0);
   fChain->SetBranchAddress("trig_L1_esum_RoIWord1", &trig_L1_esum_RoIWord1, &b_trig_L1_esum_RoIWord1);
   fChain->SetBranchAddress("trig_L1_esum_RoIWord2", &trig_L1_esum_RoIWord2, &b_trig_L1_esum_RoIWord2);
   fChain->SetBranchAddress("trig_EF_met_MEx", &trig_EF_met_MEx, &b_trig_EF_met_MEx);
   fChain->SetBranchAddress("trig_EF_met_MEy", &trig_EF_met_MEy, &b_trig_EF_met_MEy);
   fChain->SetBranchAddress("trig_EF_met_MEz", &trig_EF_met_MEz, &b_trig_EF_met_MEz);
   fChain->SetBranchAddress("trig_EF_met_sumEt", &trig_EF_met_sumEt, &b_trig_EF_met_sumEt);
   fChain->SetBranchAddress("trig_EF_met_sumE", &trig_EF_met_sumE, &b_trig_EF_met_sumE);
   fChain->SetBranchAddress("trig_EF_met_flag", &trig_EF_met_flag, &b_trig_EF_met_flag);
   fChain->SetBranchAddress("trig_EF_met_nameOfComponent", &trig_EF_met_nameOfComponent, &b_trig_EF_met_nameOfComponent);
   fChain->SetBranchAddress("trig_EF_met_MExComponent", &trig_EF_met_MExComponent, &b_trig_EF_met_MExComponent);
   fChain->SetBranchAddress("trig_EF_met_MEyComponent", &trig_EF_met_MEyComponent, &b_trig_EF_met_MEyComponent);
   fChain->SetBranchAddress("trig_EF_met_MEzComponent", &trig_EF_met_MEzComponent, &b_trig_EF_met_MEzComponent);
   fChain->SetBranchAddress("trig_EF_met_sumEtComponent", &trig_EF_met_sumEtComponent, &b_trig_EF_met_sumEtComponent);
   fChain->SetBranchAddress("trig_EF_met_sumEComponent", &trig_EF_met_sumEComponent, &b_trig_EF_met_sumEComponent);
   fChain->SetBranchAddress("trig_EF_met_componentCalib0", &trig_EF_met_componentCalib0, &b_trig_EF_met_componentCalib0);
   fChain->SetBranchAddress("trig_EF_met_componentCalib1", &trig_EF_met_componentCalib1, &b_trig_EF_met_componentCalib1);
   fChain->SetBranchAddress("trig_EF_met_sumOfSigns", &trig_EF_met_sumOfSigns, &b_trig_EF_met_sumOfSigns);
   fChain->SetBranchAddress("trig_EF_met_usedChannels", &trig_EF_met_usedChannels, &b_trig_EF_met_usedChannels);
   fChain->SetBranchAddress("trig_EF_met_status", &trig_EF_met_status, &b_trig_EF_met_status);
   fChain->SetBranchAddress("trig_EF_ph_n", &trig_EF_ph_n, &b_trig_EF_ph_n);
   fChain->SetBranchAddress("trig_EF_ph_E", &trig_EF_ph_E, &b_trig_EF_ph_E);
   fChain->SetBranchAddress("trig_EF_ph_Et", &trig_EF_ph_Et, &b_trig_EF_ph_Et);
   fChain->SetBranchAddress("trig_EF_ph_pt", &trig_EF_ph_pt, &b_trig_EF_ph_pt);
   fChain->SetBranchAddress("trig_EF_ph_m", &trig_EF_ph_m, &b_trig_EF_ph_m);
   fChain->SetBranchAddress("trig_EF_ph_eta", &trig_EF_ph_eta, &b_trig_EF_ph_eta);
   fChain->SetBranchAddress("trig_EF_ph_phi", &trig_EF_ph_phi, &b_trig_EF_ph_phi);
   fChain->SetBranchAddress("trig_EF_ph_px", &trig_EF_ph_px, &b_trig_EF_ph_px);
   fChain->SetBranchAddress("trig_EF_ph_py", &trig_EF_ph_py, &b_trig_EF_ph_py);
   fChain->SetBranchAddress("trig_EF_ph_pz", &trig_EF_ph_pz, &b_trig_EF_ph_pz);
   fChain->SetBranchAddress("trig_EF_ph_author", &trig_EF_ph_author, &b_trig_EF_ph_author);
   fChain->SetBranchAddress("trig_EF_ph_isRecovered", &trig_EF_ph_isRecovered, &b_trig_EF_ph_isRecovered);
   fChain->SetBranchAddress("trig_EF_ph_isEM", &trig_EF_ph_isEM, &b_trig_EF_ph_isEM);
   fChain->SetBranchAddress("trig_EF_ph_isEMLoose", &trig_EF_ph_isEMLoose, &b_trig_EF_ph_isEMLoose);
   fChain->SetBranchAddress("trig_EF_ph_isEMMedium", &trig_EF_ph_isEMMedium, &b_trig_EF_ph_isEMMedium);
   fChain->SetBranchAddress("trig_EF_ph_isEMTight", &trig_EF_ph_isEMTight, &b_trig_EF_ph_isEMTight);
   fChain->SetBranchAddress("trig_EF_ph_convFlag", &trig_EF_ph_convFlag, &b_trig_EF_ph_convFlag);
   fChain->SetBranchAddress("trig_EF_ph_isConv", &trig_EF_ph_isConv, &b_trig_EF_ph_isConv);
   fChain->SetBranchAddress("trig_EF_ph_nConv", &trig_EF_ph_nConv, &b_trig_EF_ph_nConv);
   fChain->SetBranchAddress("trig_EF_ph_nSingleTrackConv", &trig_EF_ph_nSingleTrackConv, &b_trig_EF_ph_nSingleTrackConv);
   fChain->SetBranchAddress("trig_EF_ph_nDoubleTrackConv", &trig_EF_ph_nDoubleTrackConv, &b_trig_EF_ph_nDoubleTrackConv);
   fChain->SetBranchAddress("trig_EF_ph_loose", &trig_EF_ph_loose, &b_trig_EF_ph_loose);
   fChain->SetBranchAddress("trig_EF_ph_looseIso", &trig_EF_ph_looseIso, &b_trig_EF_ph_looseIso);
   fChain->SetBranchAddress("trig_EF_ph_tight", &trig_EF_ph_tight, &b_trig_EF_ph_tight);
   fChain->SetBranchAddress("trig_EF_ph_tightIso", &trig_EF_ph_tightIso, &b_trig_EF_ph_tightIso);
   fChain->SetBranchAddress("trig_EF_ph_looseAR", &trig_EF_ph_looseAR, &b_trig_EF_ph_looseAR);
   fChain->SetBranchAddress("trig_EF_ph_looseARIso", &trig_EF_ph_looseARIso, &b_trig_EF_ph_looseARIso);
   fChain->SetBranchAddress("trig_EF_ph_tightAR", &trig_EF_ph_tightAR, &b_trig_EF_ph_tightAR);
   fChain->SetBranchAddress("trig_EF_ph_tightARIso", &trig_EF_ph_tightARIso, &b_trig_EF_ph_tightARIso);
   fChain->SetBranchAddress("trig_EF_trigmuonef_n", &trig_EF_trigmuonef_n, &b_trig_EF_trigmuonef_n);
   fChain->SetBranchAddress("trig_EF_trigmuonef_effs15", &trig_EF_trigmuonef_effs15, &b_trig_EF_trigmuonef_effs15);
   fChain->SetBranchAddress("trig_EF_trigmuonef_effs18", &trig_EF_trigmuonef_effs18, &b_trig_EF_trigmuonef_effs18);
   fChain->SetBranchAddress("trig_EF_trigmuonef_effs24", &trig_EF_trigmuonef_effs24, &b_trig_EF_trigmuonef_effs24);
   fChain->SetBranchAddress("trig_EF_trigmuonef_RoINum", &trig_EF_trigmuonef_RoINum, &b_trig_EF_trigmuonef_RoINum);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NSegments", &trig_EF_trigmuonef_NSegments, &b_trig_EF_trigmuonef_NSegments);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NMdtHits", &trig_EF_trigmuonef_NMdtHits, &b_trig_EF_trigmuonef_NMdtHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NRpcHits", &trig_EF_trigmuonef_NRpcHits, &b_trig_EF_trigmuonef_NRpcHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NTgcHits", &trig_EF_trigmuonef_NTgcHits, &b_trig_EF_trigmuonef_NTgcHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NCscHits", &trig_EF_trigmuonef_NCscHits, &b_trig_EF_trigmuonef_NCscHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EtaPreviousLevel", &trig_EF_trigmuonef_EtaPreviousLevel, &b_trig_EF_trigmuonef_EtaPreviousLevel);
   fChain->SetBranchAddress("trig_EF_trigmuonef_PhiPreviousLevel", &trig_EF_trigmuonef_PhiPreviousLevel, &b_trig_EF_trigmuonef_PhiPreviousLevel);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_n", &trig_EF_trigmuonef_track_n, &b_trig_EF_trigmuonef_track_n);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MuonType", &trig_EF_trigmuonef_track_MuonType, &b_trig_EF_trigmuonef_track_MuonType);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_pt", &trig_EF_trigmuonef_track_MS_pt, &b_trig_EF_trigmuonef_track_MS_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_eta", &trig_EF_trigmuonef_track_MS_eta, &b_trig_EF_trigmuonef_track_MS_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_phi", &trig_EF_trigmuonef_track_MS_phi, &b_trig_EF_trigmuonef_track_MS_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_charge", &trig_EF_trigmuonef_track_MS_charge, &b_trig_EF_trigmuonef_track_MS_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_d0", &trig_EF_trigmuonef_track_MS_d0, &b_trig_EF_trigmuonef_track_MS_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_z0", &trig_EF_trigmuonef_track_MS_z0, &b_trig_EF_trigmuonef_track_MS_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_chi2", &trig_EF_trigmuonef_track_MS_chi2, &b_trig_EF_trigmuonef_track_MS_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_chi2prob", &trig_EF_trigmuonef_track_MS_chi2prob, &b_trig_EF_trigmuonef_track_MS_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posX", &trig_EF_trigmuonef_track_MS_posX, &b_trig_EF_trigmuonef_track_MS_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posY", &trig_EF_trigmuonef_track_MS_posY, &b_trig_EF_trigmuonef_track_MS_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posZ", &trig_EF_trigmuonef_track_MS_posZ, &b_trig_EF_trigmuonef_track_MS_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NRpcHitsPhi", &trig_EF_trigmuonef_track_MS_NRpcHitsPhi, &b_trig_EF_trigmuonef_track_MS_NRpcHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NTgcHitsPhi", &trig_EF_trigmuonef_track_MS_NTgcHitsPhi, &b_trig_EF_trigmuonef_track_MS_NTgcHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NCscHitsPhi", &trig_EF_trigmuonef_track_MS_NCscHitsPhi, &b_trig_EF_trigmuonef_track_MS_NCscHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NRpcHitsEta", &trig_EF_trigmuonef_track_MS_NRpcHitsEta, &b_trig_EF_trigmuonef_track_MS_NRpcHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NTgcHitsEta", &trig_EF_trigmuonef_track_MS_NTgcHitsEta, &b_trig_EF_trigmuonef_track_MS_NTgcHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NCscHitsEta", &trig_EF_trigmuonef_track_MS_NCscHitsEta, &b_trig_EF_trigmuonef_track_MS_NCscHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NMdtHits", &trig_EF_trigmuonef_track_MS_NMdtHits, &b_trig_EF_trigmuonef_track_MS_NMdtHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_hasMS", &trig_EF_trigmuonef_track_MS_hasMS, &b_trig_EF_trigmuonef_track_MS_hasMS);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_pt", &trig_EF_trigmuonef_track_SA_pt, &b_trig_EF_trigmuonef_track_SA_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_eta", &trig_EF_trigmuonef_track_SA_eta, &b_trig_EF_trigmuonef_track_SA_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_phi", &trig_EF_trigmuonef_track_SA_phi, &b_trig_EF_trigmuonef_track_SA_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_charge", &trig_EF_trigmuonef_track_SA_charge, &b_trig_EF_trigmuonef_track_SA_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_d0", &trig_EF_trigmuonef_track_SA_d0, &b_trig_EF_trigmuonef_track_SA_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_z0", &trig_EF_trigmuonef_track_SA_z0, &b_trig_EF_trigmuonef_track_SA_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_chi2", &trig_EF_trigmuonef_track_SA_chi2, &b_trig_EF_trigmuonef_track_SA_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_chi2prob", &trig_EF_trigmuonef_track_SA_chi2prob, &b_trig_EF_trigmuonef_track_SA_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posX", &trig_EF_trigmuonef_track_SA_posX, &b_trig_EF_trigmuonef_track_SA_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posY", &trig_EF_trigmuonef_track_SA_posY, &b_trig_EF_trigmuonef_track_SA_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posZ", &trig_EF_trigmuonef_track_SA_posZ, &b_trig_EF_trigmuonef_track_SA_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_hasSA", &trig_EF_trigmuonef_track_SA_hasSA, &b_trig_EF_trigmuonef_track_SA_hasSA);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_pt", &trig_EF_trigmuonef_track_CB_pt, &b_trig_EF_trigmuonef_track_CB_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_eta", &trig_EF_trigmuonef_track_CB_eta, &b_trig_EF_trigmuonef_track_CB_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_phi", &trig_EF_trigmuonef_track_CB_phi, &b_trig_EF_trigmuonef_track_CB_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_charge", &trig_EF_trigmuonef_track_CB_charge, &b_trig_EF_trigmuonef_track_CB_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_d0", &trig_EF_trigmuonef_track_CB_d0, &b_trig_EF_trigmuonef_track_CB_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_z0", &trig_EF_trigmuonef_track_CB_z0, &b_trig_EF_trigmuonef_track_CB_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_chi2", &trig_EF_trigmuonef_track_CB_chi2, &b_trig_EF_trigmuonef_track_CB_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_chi2prob", &trig_EF_trigmuonef_track_CB_chi2prob, &b_trig_EF_trigmuonef_track_CB_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posX", &trig_EF_trigmuonef_track_CB_posX, &b_trig_EF_trigmuonef_track_CB_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posY", &trig_EF_trigmuonef_track_CB_posY, &b_trig_EF_trigmuonef_track_CB_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posZ", &trig_EF_trigmuonef_track_CB_posZ, &b_trig_EF_trigmuonef_track_CB_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_matchChi2", &trig_EF_trigmuonef_track_CB_matchChi2, &b_trig_EF_trigmuonef_track_CB_matchChi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_NIdSctHits", &trig_EF_trigmuonef_track_CB_NIdSctHits, &b_trig_EF_trigmuonef_track_CB_NIdSctHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_NIdPixelHits", &trig_EF_trigmuonef_track_CB_NIdPixelHits, &b_trig_EF_trigmuonef_track_CB_NIdPixelHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_NTrtHits", &trig_EF_trigmuonef_track_CB_NTrtHits, &b_trig_EF_trigmuonef_track_CB_NTrtHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_hasCB", &trig_EF_trigmuonef_track_CB_hasCB, &b_trig_EF_trigmuonef_track_CB_hasCB);
   fChain->SetBranchAddress("bcmRDO_n", &bcmRDO_n, &b_bcmRDO_n);
   fChain->SetBranchAddress("bcmRDO_channel", &bcmRDO_channel, &b_bcmRDO_channel);
   fChain->SetBranchAddress("bcmRDO_nhits", &bcmRDO_nhits, &b_bcmRDO_nhits);
   fChain->SetBranchAddress("bcmRDO_pulse1pos", &bcmRDO_pulse1pos, &b_bcmRDO_pulse1pos);
   fChain->SetBranchAddress("bcmRDO_pulse1width", &bcmRDO_pulse1width, &b_bcmRDO_pulse1width);
   fChain->SetBranchAddress("bcmRDO_pulse2pos", &bcmRDO_pulse2pos, &b_bcmRDO_pulse2pos);
   fChain->SetBranchAddress("bcmRDO_pulse2width", &bcmRDO_pulse2width, &b_bcmRDO_pulse2width);
   fChain->SetBranchAddress("bcmRDO_lvl1a", &bcmRDO_lvl1a, &b_bcmRDO_lvl1a);
   fChain->SetBranchAddress("bcmRDO_bcid", &bcmRDO_bcid, &b_bcmRDO_bcid);
   fChain->SetBranchAddress("bcmRDO_lvl1id", &bcmRDO_lvl1id, &b_bcmRDO_lvl1id);
   fChain->SetBranchAddress("ctpRDO_nBC", &ctpRDO_nBC, &b_ctpRDO_nBC);
   fChain->SetBranchAddress("ctpRDO_lvl1aBC", &ctpRDO_lvl1aBC, &b_ctpRDO_lvl1aBC);
   fChain->SetBranchAddress("ctpRDO_time_s", &ctpRDO_time_s, &b_ctpRDO_time_s);
   fChain->SetBranchAddress("ctpRDO_time_ns", &ctpRDO_time_ns, &b_ctpRDO_time_ns);
   fChain->SetBranchAddress("ctpRDO_pit", &ctpRDO_pit, &b_ctpRDO_pit);
   fChain->SetBranchAddress("ctpRDO_tbp", &ctpRDO_tbp, &b_ctpRDO_tbp);
   fChain->SetBranchAddress("ctpRDO_tap", &ctpRDO_tap, &b_ctpRDO_tap);
   fChain->SetBranchAddress("ctpRDO_tav", &ctpRDO_tav, &b_ctpRDO_tav);
   fChain->SetBranchAddress("ctp_decisionTypeWord", &ctp_decisionTypeWord, &b_ctp_decisionTypeWord);
   fChain->SetBranchAddress("ctp_decisionItems", &ctp_decisionItems, &b_ctp_decisionItems);
   fChain->SetBranchAddress("ctp_decisionWords", &ctp_decisionWords, &b_ctp_decisionWords);
   fChain->SetBranchAddress("ctp_nDecisionItems", &ctp_nDecisionItems, &b_ctp_nDecisionItems);
   fChain->SetBranchAddress("mbtsLvl2_nElements", &mbtsLvl2_nElements, &b_mbtsLvl2_nElements);
   fChain->SetBranchAddress("mbtsLvl2_energies", &mbtsLvl2_energies, &b_mbtsLvl2_energies);
   fChain->SetBranchAddress("mbtsLvl2_ntimes", &mbtsLvl2_ntimes, &b_mbtsLvl2_ntimes);
   fChain->SetBranchAddress("mbtsLvl2_times", &mbtsLvl2_times, &b_mbtsLvl2_times);
   fChain->SetBranchAddress("lvl2_sp_nElements", &lvl2_sp_nElements, &b_lvl2_sp_nElements);
   fChain->SetBranchAddress("lvl2_sp_hPixelClusTotBins", &lvl2_sp_hPixelClusTotBins, &b_lvl2_sp_hPixelClusTotBins);
   fChain->SetBranchAddress("lvl2_sp_hPixelClusTotMin", &lvl2_sp_hPixelClusTotMin, &b_lvl2_sp_hPixelClusTotMin);
   fChain->SetBranchAddress("lvl2_sp_hPixelClusTotMax", &lvl2_sp_hPixelClusTotMax, &b_lvl2_sp_hPixelClusTotMax);
   fChain->SetBranchAddress("lvl2_sp_hPixelClusSizeBins", &lvl2_sp_hPixelClusSizeBins, &b_lvl2_sp_hPixelClusSizeBins);
   fChain->SetBranchAddress("lvl2_sp_hPixelClusSizeMin", &lvl2_sp_hPixelClusSizeMin, &b_lvl2_sp_hPixelClusSizeMin);
   fChain->SetBranchAddress("lvl2_sp_hPixelClusSizeMax", &lvl2_sp_hPixelClusSizeMax, &b_lvl2_sp_hPixelClusSizeMax);
   fChain->SetBranchAddress("lvl2_sp_pixelClusEndcapC_contents", &lvl2_sp_pixelClusEndcapC_contents, &b_lvl2_sp_pixelClusEndcapC_contents);
   fChain->SetBranchAddress("lvl2_sp_pixelClusBarrel_contents", &lvl2_sp_pixelClusBarrel_contents, &b_lvl2_sp_pixelClusBarrel_contents);
   fChain->SetBranchAddress("lvl2_sp_pixelClusEndcapA_contents", &lvl2_sp_pixelClusEndcapA_contents, &b_lvl2_sp_pixelClusEndcapA_contents);
   fChain->SetBranchAddress("lvl2_sp_droppedPixelModuleIds", &lvl2_sp_droppedPixelModuleIds, &b_lvl2_sp_droppedPixelModuleIds);
   fChain->SetBranchAddress("lvl2_sp_sctSpEndcapC", &lvl2_sp_sctSpEndcapC, &b_lvl2_sp_sctSpEndcapC);
   fChain->SetBranchAddress("lvl2_sp_sctSpBarrel", &lvl2_sp_sctSpBarrel, &b_lvl2_sp_sctSpBarrel);
   fChain->SetBranchAddress("lvl2_sp_sctSpEndcapA", &lvl2_sp_sctSpEndcapA, &b_lvl2_sp_sctSpEndcapA);
   fChain->SetBranchAddress("lvl2_sp_droppedSctModuleIds", &lvl2_sp_droppedSctModuleIds, &b_lvl2_sp_droppedSctModuleIds);
   fChain->SetBranchAddress("lvl2_mbTrt_nElements", &lvl2_mbTrt_nElements, &b_lvl2_mbTrt_nElements);
   fChain->SetBranchAddress("lvl2_mbTrt_hTotBins", &lvl2_mbTrt_hTotBins, &b_lvl2_mbTrt_hTotBins);
   fChain->SetBranchAddress("lvl2_mbTrt_hTotMin", &lvl2_mbTrt_hTotMin, &b_lvl2_mbTrt_hTotMin);
   fChain->SetBranchAddress("lvl2_mbTrt_hTotMax", &lvl2_mbTrt_hTotMax, &b_lvl2_mbTrt_hTotMax);
   fChain->SetBranchAddress("lvl2_mbTrt_endcapC_contents", &lvl2_mbTrt_endcapC_contents, &b_lvl2_mbTrt_endcapC_contents);
   fChain->SetBranchAddress("lvl2_mbTrt_barrel_contents", &lvl2_mbTrt_barrel_contents, &b_lvl2_mbTrt_barrel_contents);
   fChain->SetBranchAddress("lvl2_mbTrt_endcapA_contents", &lvl2_mbTrt_endcapA_contents, &b_lvl2_mbTrt_endcapA_contents);
   fChain->SetBranchAddress("ef_trk_nElements", &ef_trk_nElements, &b_ef_trk_nElements);
   fChain->SetBranchAddress("ef_trk_hZ0Bins", &ef_trk_hZ0Bins, &b_ef_trk_hZ0Bins);
   fChain->SetBranchAddress("ef_trk_hZ0Min", &ef_trk_hZ0Min, &b_ef_trk_hZ0Min);
   fChain->SetBranchAddress("ef_trk_hZ0Max", &ef_trk_hZ0Max, &b_ef_trk_hZ0Max);
   fChain->SetBranchAddress("ef_trk_hPtBins", &ef_trk_hPtBins, &b_ef_trk_hPtBins);
   fChain->SetBranchAddress("ef_trk_hPtMin", &ef_trk_hPtMin, &b_ef_trk_hPtMin);
   fChain->SetBranchAddress("ef_trk_hPtMax", &ef_trk_hPtMax, &b_ef_trk_hPtMax);
   fChain->SetBranchAddress("ef_trk_hEtaBins", &ef_trk_hEtaBins, &b_ef_trk_hEtaBins);
   fChain->SetBranchAddress("ef_trk_hEtaMin", &ef_trk_hEtaMin, &b_ef_trk_hEtaMin);
   fChain->SetBranchAddress("ef_trk_hEtaMax", &ef_trk_hEtaMax, &b_ef_trk_hEtaMax);
   fChain->SetBranchAddress("ef_trk_hPhiBins", &ef_trk_hPhiBins, &b_ef_trk_hPhiBins);
   fChain->SetBranchAddress("ef_trk_hPhiMin", &ef_trk_hPhiMin, &b_ef_trk_hPhiMin);
   fChain->SetBranchAddress("ef_trk_hPhiMax", &ef_trk_hPhiMax, &b_ef_trk_hPhiMax);
   fChain->SetBranchAddress("ef_trk_z0_pt_contents", &ef_trk_z0_pt_contents, &b_ef_trk_z0_pt_contents);
   fChain->SetBranchAddress("ef_trk_eta_phi_contents", &ef_trk_eta_phi_contents, &b_ef_trk_eta_phi_contents);
   fChain->SetBranchAddress("trtRDO_countRDOhitsInEvent", &trtRDO_countRDOhitsInEvent, &b_trtRDO_countRDOhitsInEvent);
   fChain->SetBranchAddress("trtRDO_countBarrelhitsInEvent", &trtRDO_countBarrelhitsInEvent, &b_trtRDO_countBarrelhitsInEvent);
   fChain->SetBranchAddress("trtRDO_countEndCaphitsInEvent", &trtRDO_countEndCaphitsInEvent, &b_trtRDO_countEndCaphitsInEvent);
   fChain->SetBranchAddress("trtRDO_countEndCapAhitsInEvent", &trtRDO_countEndCapAhitsInEvent, &b_trtRDO_countEndCapAhitsInEvent);
   fChain->SetBranchAddress("trtRDO_countEndCapChitsInEvent", &trtRDO_countEndCapChitsInEvent, &b_trtRDO_countEndCapChitsInEvent);
   fChain->SetBranchAddress("trtRDO_countdeadstraws", &trtRDO_countdeadstraws, &b_trtRDO_countdeadstraws);
   fChain->SetBranchAddress("vx_n", &vx_n, &b_vx_n);
   fChain->SetBranchAddress("vx_x", &vx_x, &b_vx_x);
   fChain->SetBranchAddress("vx_y", &vx_y, &b_vx_y);
   fChain->SetBranchAddress("vx_z", &vx_z, &b_vx_z);
   fChain->SetBranchAddress("vx_err_x", &vx_err_x, &b_vx_err_x);
   fChain->SetBranchAddress("vx_err_y", &vx_err_y, &b_vx_err_y);
   fChain->SetBranchAddress("vx_err_z", &vx_err_z, &b_vx_err_z);
   fChain->SetBranchAddress("vx_cov_xy", &vx_cov_xy, &b_vx_cov_xy);
   fChain->SetBranchAddress("vx_cov_xz", &vx_cov_xz, &b_vx_cov_xz);
   fChain->SetBranchAddress("vx_cov_yz", &vx_cov_yz, &b_vx_cov_yz);
   fChain->SetBranchAddress("vx_type", &vx_type, &b_vx_type);
   fChain->SetBranchAddress("vx_chi2", &vx_chi2, &b_vx_chi2);
   fChain->SetBranchAddress("vx_ndof", &vx_ndof, &b_vx_ndof);
   fChain->SetBranchAddress("vx_px", &vx_px, &b_vx_px);
   fChain->SetBranchAddress("vx_py", &vx_py, &b_vx_py);
   fChain->SetBranchAddress("vx_pz", &vx_pz, &b_vx_pz);
   fChain->SetBranchAddress("vx_E", &vx_E, &b_vx_E);
   fChain->SetBranchAddress("vx_m", &vx_m, &b_vx_m);
   fChain->SetBranchAddress("vx_nTracks", &vx_nTracks, &b_vx_nTracks);
   fChain->SetBranchAddress("vx_sumPt", &vx_sumPt, &b_vx_sumPt);
   fChain->SetBranchAddress("vx_trk_weight", &vx_trk_weight, &b_vx_trk_weight);
   fChain->SetBranchAddress("vx_trk_n", &vx_trk_n, &b_vx_trk_n);
   fChain->SetBranchAddress("vx_trk_index", &vx_trk_index, &b_vx_trk_index);
   fChain->SetBranchAddress("el_n", &el_n, &b_el_n);
   fChain->SetBranchAddress("el_E", &el_E, &b_el_E);
   fChain->SetBranchAddress("el_Et", &el_Et, &b_el_Et);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_m", &el_m, &b_el_m);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_px", &el_px, &b_el_px);
   fChain->SetBranchAddress("el_py", &el_py, &b_el_py);
   fChain->SetBranchAddress("el_pz", &el_pz, &b_el_pz);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_author", &el_author, &b_el_author);
   fChain->SetBranchAddress("el_isEM", &el_isEM, &b_el_isEM);
   fChain->SetBranchAddress("el_isEMLoose", &el_isEMLoose, &b_el_isEMLoose);
   fChain->SetBranchAddress("el_isEMMedium", &el_isEMMedium, &b_el_isEMMedium);
   fChain->SetBranchAddress("el_isEMTight", &el_isEMTight, &b_el_isEMTight);
   fChain->SetBranchAddress("el_OQ", &el_OQ, &b_el_OQ);
   fChain->SetBranchAddress("el_convFlag", &el_convFlag, &b_el_convFlag);
   fChain->SetBranchAddress("el_isConv", &el_isConv, &b_el_isConv);
   fChain->SetBranchAddress("el_nConv", &el_nConv, &b_el_nConv);
   fChain->SetBranchAddress("el_nSingleTrackConv", &el_nSingleTrackConv, &b_el_nSingleTrackConv);
   fChain->SetBranchAddress("el_nDoubleTrackConv", &el_nDoubleTrackConv, &b_el_nDoubleTrackConv);
   fChain->SetBranchAddress("el_mediumWithoutTrack", &el_mediumWithoutTrack, &b_el_mediumWithoutTrack);
   fChain->SetBranchAddress("el_mediumIsoWithoutTrack", &el_mediumIsoWithoutTrack, &b_el_mediumIsoWithoutTrack);
   fChain->SetBranchAddress("el_tightWithoutTrack", &el_tightWithoutTrack, &b_el_tightWithoutTrack);
   fChain->SetBranchAddress("el_tightIsoWithoutTrack", &el_tightIsoWithoutTrack, &b_el_tightIsoWithoutTrack);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_looseIso", &el_looseIso, &b_el_looseIso);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_mediumIso", &el_mediumIso, &b_el_mediumIso);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_tightIso", &el_tightIso, &b_el_tightIso);
   fChain->SetBranchAddress("el_loosePP", &el_loosePP, &b_el_loosePP);
   fChain->SetBranchAddress("el_loosePPIso", &el_loosePPIso, &b_el_loosePPIso);
   fChain->SetBranchAddress("el_mediumPP", &el_mediumPP, &b_el_mediumPP);
   fChain->SetBranchAddress("el_mediumPPIso", &el_mediumPPIso, &b_el_mediumPPIso);
   fChain->SetBranchAddress("el_tightPP", &el_tightPP, &b_el_tightPP);
   fChain->SetBranchAddress("el_tightPPIso", &el_tightPPIso, &b_el_tightPPIso);
   fChain->SetBranchAddress("el_goodOQ", &el_goodOQ, &b_el_goodOQ);
   fChain->SetBranchAddress("el_Ethad", &el_Ethad, &b_el_Ethad);
   fChain->SetBranchAddress("el_Ethad1", &el_Ethad1, &b_el_Ethad1);
   fChain->SetBranchAddress("el_f1", &el_f1, &b_el_f1);
   fChain->SetBranchAddress("el_f1core", &el_f1core, &b_el_f1core);
   fChain->SetBranchAddress("el_Emins1", &el_Emins1, &b_el_Emins1);
   fChain->SetBranchAddress("el_fside", &el_fside, &b_el_fside);
   fChain->SetBranchAddress("el_Emax2", &el_Emax2, &b_el_Emax2);
   fChain->SetBranchAddress("el_ws3", &el_ws3, &b_el_ws3);
   fChain->SetBranchAddress("el_wstot", &el_wstot, &b_el_wstot);
   fChain->SetBranchAddress("el_emaxs1", &el_emaxs1, &b_el_emaxs1);
   fChain->SetBranchAddress("el_deltaEs", &el_deltaEs, &b_el_deltaEs);
   fChain->SetBranchAddress("el_E233", &el_E233, &b_el_E233);
   fChain->SetBranchAddress("el_E237", &el_E237, &b_el_E237);
   fChain->SetBranchAddress("el_E277", &el_E277, &b_el_E277);
   fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
   fChain->SetBranchAddress("el_f3", &el_f3, &b_el_f3);
   fChain->SetBranchAddress("el_f3core", &el_f3core, &b_el_f3core);
   fChain->SetBranchAddress("el_rphiallcalo", &el_rphiallcalo, &b_el_rphiallcalo);
   fChain->SetBranchAddress("el_Etcone45", &el_Etcone45, &b_el_Etcone45);
   fChain->SetBranchAddress("el_Etcone15", &el_Etcone15, &b_el_Etcone15);
   fChain->SetBranchAddress("el_Etcone20", &el_Etcone20, &b_el_Etcone20);
   fChain->SetBranchAddress("el_Etcone25", &el_Etcone25, &b_el_Etcone25);
   fChain->SetBranchAddress("el_Etcone30", &el_Etcone30, &b_el_Etcone30);
   fChain->SetBranchAddress("el_Etcone35", &el_Etcone35, &b_el_Etcone35);
   fChain->SetBranchAddress("el_Etcone40", &el_Etcone40, &b_el_Etcone40);
   fChain->SetBranchAddress("el_ptcone20", &el_ptcone20, &b_el_ptcone20);
   fChain->SetBranchAddress("el_ptcone30", &el_ptcone30, &b_el_ptcone30);
   fChain->SetBranchAddress("el_ptcone40", &el_ptcone40, &b_el_ptcone40);
   fChain->SetBranchAddress("el_nucone20", &el_nucone20, &b_el_nucone20);
   fChain->SetBranchAddress("el_nucone30", &el_nucone30, &b_el_nucone30);
   fChain->SetBranchAddress("el_nucone40", &el_nucone40, &b_el_nucone40);
   fChain->SetBranchAddress("el_Etcone15_pt_corrected", &el_Etcone15_pt_corrected, &b_el_Etcone15_pt_corrected);
   fChain->SetBranchAddress("el_Etcone20_pt_corrected", &el_Etcone20_pt_corrected, &b_el_Etcone20_pt_corrected);
   fChain->SetBranchAddress("el_Etcone25_pt_corrected", &el_Etcone25_pt_corrected, &b_el_Etcone25_pt_corrected);
   fChain->SetBranchAddress("el_Etcone30_pt_corrected", &el_Etcone30_pt_corrected, &b_el_Etcone30_pt_corrected);
   fChain->SetBranchAddress("el_Etcone35_pt_corrected", &el_Etcone35_pt_corrected, &b_el_Etcone35_pt_corrected);
   fChain->SetBranchAddress("el_Etcone40_pt_corrected", &el_Etcone40_pt_corrected, &b_el_Etcone40_pt_corrected);
   fChain->SetBranchAddress("el_convanglematch", &el_convanglematch, &b_el_convanglematch);
   fChain->SetBranchAddress("el_convtrackmatch", &el_convtrackmatch, &b_el_convtrackmatch);
   fChain->SetBranchAddress("el_pos7", &el_pos7, &b_el_pos7);
   fChain->SetBranchAddress("el_etacorrmag", &el_etacorrmag, &b_el_etacorrmag);
   fChain->SetBranchAddress("el_deltaeta1", &el_deltaeta1, &b_el_deltaeta1);
   fChain->SetBranchAddress("el_deltaeta2", &el_deltaeta2, &b_el_deltaeta2);
   fChain->SetBranchAddress("el_deltaphi2", &el_deltaphi2, &b_el_deltaphi2);
   fChain->SetBranchAddress("el_deltaphiRescaled", &el_deltaphiRescaled, &b_el_deltaphiRescaled);
   fChain->SetBranchAddress("el_deltaPhiFromLast", &el_deltaPhiFromLast, &b_el_deltaPhiFromLast);
   fChain->SetBranchAddress("el_deltaPhiRot", &el_deltaPhiRot, &b_el_deltaPhiRot);
   fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
   fChain->SetBranchAddress("el_trackd0_physics", &el_trackd0_physics, &b_el_trackd0_physics);
   fChain->SetBranchAddress("el_etaSampling1", &el_etaSampling1, &b_el_etaSampling1);
   fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
   fChain->SetBranchAddress("el_rphi", &el_rphi, &b_el_rphi);
   fChain->SetBranchAddress("el_topoEtcone20", &el_topoEtcone20, &b_el_topoEtcone20);
   fChain->SetBranchAddress("el_topoEtcone30", &el_topoEtcone30, &b_el_topoEtcone30);
   fChain->SetBranchAddress("el_topoEtcone40", &el_topoEtcone40, &b_el_topoEtcone40);
   fChain->SetBranchAddress("el_materialTraversed", &el_materialTraversed, &b_el_materialTraversed);
   fChain->SetBranchAddress("el_EtringnoisedR03sig2", &el_EtringnoisedR03sig2, &b_el_EtringnoisedR03sig2);
   fChain->SetBranchAddress("el_EtringnoisedR03sig3", &el_EtringnoisedR03sig3, &b_el_EtringnoisedR03sig3);
   fChain->SetBranchAddress("el_EtringnoisedR03sig4", &el_EtringnoisedR03sig4, &b_el_EtringnoisedR03sig4);
   fChain->SetBranchAddress("el_ptcone20_zpv05", &el_ptcone20_zpv05, &b_el_ptcone20_zpv05);
   fChain->SetBranchAddress("el_ptcone30_zpv05", &el_ptcone30_zpv05, &b_el_ptcone30_zpv05);
   fChain->SetBranchAddress("el_ptcone40_zpv05", &el_ptcone40_zpv05, &b_el_ptcone40_zpv05);
   fChain->SetBranchAddress("el_nucone20_zpv05", &el_nucone20_zpv05, &b_el_nucone20_zpv05);
   fChain->SetBranchAddress("el_nucone30_zpv05", &el_nucone30_zpv05, &b_el_nucone30_zpv05);
   fChain->SetBranchAddress("el_nucone40_zpv05", &el_nucone40_zpv05, &b_el_nucone40_zpv05);
   fChain->SetBranchAddress("el_isolationlikelihoodjets", &el_isolationlikelihoodjets, &b_el_isolationlikelihoodjets);
   fChain->SetBranchAddress("el_isolationlikelihoodhqelectrons", &el_isolationlikelihoodhqelectrons, &b_el_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("el_electronweight", &el_electronweight, &b_el_electronweight);
   fChain->SetBranchAddress("el_electronbgweight", &el_electronbgweight, &b_el_electronbgweight);
   fChain->SetBranchAddress("el_softeweight", &el_softeweight, &b_el_softeweight);
   fChain->SetBranchAddress("el_softebgweight", &el_softebgweight, &b_el_softebgweight);
   fChain->SetBranchAddress("el_neuralnet", &el_neuralnet, &b_el_neuralnet);
   fChain->SetBranchAddress("el_Hmatrix", &el_Hmatrix, &b_el_Hmatrix);
   fChain->SetBranchAddress("el_Hmatrix5", &el_Hmatrix5, &b_el_Hmatrix5);
   fChain->SetBranchAddress("el_adaboost", &el_adaboost, &b_el_adaboost);
   fChain->SetBranchAddress("el_softeneuralnet", &el_softeneuralnet, &b_el_softeneuralnet);
   fChain->SetBranchAddress("el_ringernn", &el_ringernn, &b_el_ringernn);
   fChain->SetBranchAddress("el_zvertex", &el_zvertex, &b_el_zvertex);
   fChain->SetBranchAddress("el_errz", &el_errz, &b_el_errz);
   fChain->SetBranchAddress("el_etap", &el_etap, &b_el_etap);
   fChain->SetBranchAddress("el_depth", &el_depth, &b_el_depth);
   fChain->SetBranchAddress("el_refittedTrack_n", &el_refittedTrack_n, &b_el_refittedTrack_n);
   fChain->SetBranchAddress("el_refittedTrack_author", &el_refittedTrack_author, &b_el_refittedTrack_author);
   fChain->SetBranchAddress("el_refittedTrack_chi2", &el_refittedTrack_chi2, &b_el_refittedTrack_chi2);
   fChain->SetBranchAddress("el_refittedTrack_hasBrem", &el_refittedTrack_hasBrem, &b_el_refittedTrack_hasBrem);
   fChain->SetBranchAddress("el_refittedTrack_bremRadius", &el_refittedTrack_bremRadius, &b_el_refittedTrack_bremRadius);
   fChain->SetBranchAddress("el_refittedTrack_bremZ", &el_refittedTrack_bremZ, &b_el_refittedTrack_bremZ);
   fChain->SetBranchAddress("el_refittedTrack_bremRadiusErr", &el_refittedTrack_bremRadiusErr, &b_el_refittedTrack_bremRadiusErr);
   fChain->SetBranchAddress("el_refittedTrack_bremZErr", &el_refittedTrack_bremZErr, &b_el_refittedTrack_bremZErr);
   fChain->SetBranchAddress("el_refittedTrack_bremFitStatus", &el_refittedTrack_bremFitStatus, &b_el_refittedTrack_bremFitStatus);
   fChain->SetBranchAddress("el_refittedTrack_qoverp", &el_refittedTrack_qoverp, &b_el_refittedTrack_qoverp);
   fChain->SetBranchAddress("el_refittedTrack_d0", &el_refittedTrack_d0, &b_el_refittedTrack_d0);
   fChain->SetBranchAddress("el_refittedTrack_z0", &el_refittedTrack_z0, &b_el_refittedTrack_z0);
   fChain->SetBranchAddress("el_refittedTrack_theta", &el_refittedTrack_theta, &b_el_refittedTrack_theta);
   fChain->SetBranchAddress("el_refittedTrack_phi", &el_refittedTrack_phi, &b_el_refittedTrack_phi);
   fChain->SetBranchAddress("el_refittedTrack_LMqoverp", &el_refittedTrack_LMqoverp, &b_el_refittedTrack_LMqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0", &el_refittedTrack_covd0, &b_el_refittedTrack_covd0);
   fChain->SetBranchAddress("el_refittedTrack_covz0", &el_refittedTrack_covz0, &b_el_refittedTrack_covz0);
   fChain->SetBranchAddress("el_refittedTrack_covphi", &el_refittedTrack_covphi, &b_el_refittedTrack_covphi);
   fChain->SetBranchAddress("el_refittedTrack_covtheta", &el_refittedTrack_covtheta, &b_el_refittedTrack_covtheta);
   fChain->SetBranchAddress("el_refittedTrack_covqoverp", &el_refittedTrack_covqoverp, &b_el_refittedTrack_covqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0z0", &el_refittedTrack_covd0z0, &b_el_refittedTrack_covd0z0);
   fChain->SetBranchAddress("el_refittedTrack_covz0phi", &el_refittedTrack_covz0phi, &b_el_refittedTrack_covz0phi);
   fChain->SetBranchAddress("el_refittedTrack_covz0theta", &el_refittedTrack_covz0theta, &b_el_refittedTrack_covz0theta);
   fChain->SetBranchAddress("el_refittedTrack_covz0qoverp", &el_refittedTrack_covz0qoverp, &b_el_refittedTrack_covz0qoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0phi", &el_refittedTrack_covd0phi, &b_el_refittedTrack_covd0phi);
   fChain->SetBranchAddress("el_refittedTrack_covd0theta", &el_refittedTrack_covd0theta, &b_el_refittedTrack_covd0theta);
   fChain->SetBranchAddress("el_refittedTrack_covd0qoverp", &el_refittedTrack_covd0qoverp, &b_el_refittedTrack_covd0qoverp);
   fChain->SetBranchAddress("el_refittedTrack_covphitheta", &el_refittedTrack_covphitheta, &b_el_refittedTrack_covphitheta);
   fChain->SetBranchAddress("el_refittedTrack_covphiqoverp", &el_refittedTrack_covphiqoverp, &b_el_refittedTrack_covphiqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covthetaqoverp", &el_refittedTrack_covthetaqoverp, &b_el_refittedTrack_covthetaqoverp);
   fChain->SetBranchAddress("el_refittedTrack_d0_wrtBL", &el_refittedTrack_d0_wrtBL, &b_el_refittedTrack_d0_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_wrtBL", &el_refittedTrack_z0_wrtBL, &b_el_refittedTrack_z0_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_wrtBL", &el_refittedTrack_phi_wrtBL, &b_el_refittedTrack_phi_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_theta_wrtBL", &el_refittedTrack_theta_wrtBL, &b_el_refittedTrack_theta_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_qoverp_wrtBL", &el_refittedTrack_qoverp_wrtBL, &b_el_refittedTrack_qoverp_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_err_wrtBL", &el_refittedTrack_d0_err_wrtBL, &b_el_refittedTrack_d0_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_err_wrtBL", &el_refittedTrack_z0_err_wrtBL, &b_el_refittedTrack_z0_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_err_wrtBL", &el_refittedTrack_phi_err_wrtBL, &b_el_refittedTrack_phi_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_theta_err_wrtBL", &el_refittedTrack_theta_err_wrtBL, &b_el_refittedTrack_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_qoverp_err_wrtBL", &el_refittedTrack_qoverp_err_wrtBL, &b_el_refittedTrack_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_z0_err_wrtBL", &el_refittedTrack_d0_z0_err_wrtBL, &b_el_refittedTrack_d0_z0_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_phi_err_wrtBL", &el_refittedTrack_d0_phi_err_wrtBL, &b_el_refittedTrack_d0_phi_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_theta_err_wrtBL", &el_refittedTrack_d0_theta_err_wrtBL, &b_el_refittedTrack_d0_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_d0_qoverp_err_wrtBL", &el_refittedTrack_d0_qoverp_err_wrtBL, &b_el_refittedTrack_d0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_phi_err_wrtBL", &el_refittedTrack_z0_phi_err_wrtBL, &b_el_refittedTrack_z0_phi_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_theta_err_wrtBL", &el_refittedTrack_z0_theta_err_wrtBL, &b_el_refittedTrack_z0_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_z0_qoverp_err_wrtBL", &el_refittedTrack_z0_qoverp_err_wrtBL, &b_el_refittedTrack_z0_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_theta_err_wrtBL", &el_refittedTrack_phi_theta_err_wrtBL, &b_el_refittedTrack_phi_theta_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_phi_qoverp_err_wrtBL", &el_refittedTrack_phi_qoverp_err_wrtBL, &b_el_refittedTrack_phi_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_refittedTrack_theta_qoverp_err_wrtBL", &el_refittedTrack_theta_qoverp_err_wrtBL, &b_el_refittedTrack_theta_qoverp_err_wrtBL);
   fChain->SetBranchAddress("el_Es0", &el_Es0, &b_el_Es0);
   fChain->SetBranchAddress("el_etas0", &el_etas0, &b_el_etas0);
   fChain->SetBranchAddress("el_phis0", &el_phis0, &b_el_phis0);
   fChain->SetBranchAddress("el_Es1", &el_Es1, &b_el_Es1);
   fChain->SetBranchAddress("el_etas1", &el_etas1, &b_el_etas1);
   fChain->SetBranchAddress("el_phis1", &el_phis1, &b_el_phis1);
   fChain->SetBranchAddress("el_Es2", &el_Es2, &b_el_Es2);
   fChain->SetBranchAddress("el_etas2", &el_etas2, &b_el_etas2);
   fChain->SetBranchAddress("el_phis2", &el_phis2, &b_el_phis2);
   fChain->SetBranchAddress("el_Es3", &el_Es3, &b_el_Es3);
   fChain->SetBranchAddress("el_etas3", &el_etas3, &b_el_etas3);
   fChain->SetBranchAddress("el_phis3", &el_phis3, &b_el_phis3);
   fChain->SetBranchAddress("el_E_PreSamplerB", &el_E_PreSamplerB, &b_el_E_PreSamplerB);
   fChain->SetBranchAddress("el_E_EMB1", &el_E_EMB1, &b_el_E_EMB1);
   fChain->SetBranchAddress("el_E_EMB2", &el_E_EMB2, &b_el_E_EMB2);
   fChain->SetBranchAddress("el_E_EMB3", &el_E_EMB3, &b_el_E_EMB3);
   fChain->SetBranchAddress("el_E_PreSamplerE", &el_E_PreSamplerE, &b_el_E_PreSamplerE);
   fChain->SetBranchAddress("el_E_EME1", &el_E_EME1, &b_el_E_EME1);
   fChain->SetBranchAddress("el_E_EME2", &el_E_EME2, &b_el_E_EME2);
   fChain->SetBranchAddress("el_E_EME3", &el_E_EME3, &b_el_E_EME3);
   fChain->SetBranchAddress("el_E_HEC0", &el_E_HEC0, &b_el_E_HEC0);
   fChain->SetBranchAddress("el_E_HEC1", &el_E_HEC1, &b_el_E_HEC1);
   fChain->SetBranchAddress("el_E_HEC2", &el_E_HEC2, &b_el_E_HEC2);
   fChain->SetBranchAddress("el_E_HEC3", &el_E_HEC3, &b_el_E_HEC3);
   fChain->SetBranchAddress("el_E_TileBar0", &el_E_TileBar0, &b_el_E_TileBar0);
   fChain->SetBranchAddress("el_E_TileBar1", &el_E_TileBar1, &b_el_E_TileBar1);
   fChain->SetBranchAddress("el_E_TileBar2", &el_E_TileBar2, &b_el_E_TileBar2);
   fChain->SetBranchAddress("el_E_TileGap1", &el_E_TileGap1, &b_el_E_TileGap1);
   fChain->SetBranchAddress("el_E_TileGap2", &el_E_TileGap2, &b_el_E_TileGap2);
   fChain->SetBranchAddress("el_E_TileGap3", &el_E_TileGap3, &b_el_E_TileGap3);
   fChain->SetBranchAddress("el_E_TileExt0", &el_E_TileExt0, &b_el_E_TileExt0);
   fChain->SetBranchAddress("el_E_TileExt1", &el_E_TileExt1, &b_el_E_TileExt1);
   fChain->SetBranchAddress("el_E_TileExt2", &el_E_TileExt2, &b_el_E_TileExt2);
   fChain->SetBranchAddress("el_E_FCAL0", &el_E_FCAL0, &b_el_E_FCAL0);
   fChain->SetBranchAddress("el_E_FCAL1", &el_E_FCAL1, &b_el_E_FCAL1);
   fChain->SetBranchAddress("el_E_FCAL2", &el_E_FCAL2, &b_el_E_FCAL2);
   fChain->SetBranchAddress("el_cl_E", &el_cl_E, &b_el_cl_E);
   fChain->SetBranchAddress("el_cl_pt", &el_cl_pt, &b_el_cl_pt);
   fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("el_cl_phi", &el_cl_phi, &b_el_cl_phi);
   fChain->SetBranchAddress("el_cl_etaCalo", &el_cl_etaCalo, &b_el_cl_etaCalo);
   fChain->SetBranchAddress("el_cl_phiCalo", &el_cl_phiCalo, &b_el_cl_phiCalo);
   fChain->SetBranchAddress("el_firstEdens", &el_firstEdens, &b_el_firstEdens);
   fChain->SetBranchAddress("el_cellmaxfrac", &el_cellmaxfrac, &b_el_cellmaxfrac);
   fChain->SetBranchAddress("el_longitudinal", &el_longitudinal, &b_el_longitudinal);
   fChain->SetBranchAddress("el_secondlambda", &el_secondlambda, &b_el_secondlambda);
   fChain->SetBranchAddress("el_lateral", &el_lateral, &b_el_lateral);
   fChain->SetBranchAddress("el_secondR", &el_secondR, &b_el_secondR);
   fChain->SetBranchAddress("el_centerlambda", &el_centerlambda, &b_el_centerlambda);
   fChain->SetBranchAddress("el_rawcl_Es0", &el_rawcl_Es0, &b_el_rawcl_Es0);
   fChain->SetBranchAddress("el_rawcl_etas0", &el_rawcl_etas0, &b_el_rawcl_etas0);
   fChain->SetBranchAddress("el_rawcl_phis0", &el_rawcl_phis0, &b_el_rawcl_phis0);
   fChain->SetBranchAddress("el_rawcl_Es1", &el_rawcl_Es1, &b_el_rawcl_Es1);
   fChain->SetBranchAddress("el_rawcl_etas1", &el_rawcl_etas1, &b_el_rawcl_etas1);
   fChain->SetBranchAddress("el_rawcl_phis1", &el_rawcl_phis1, &b_el_rawcl_phis1);
   fChain->SetBranchAddress("el_rawcl_Es2", &el_rawcl_Es2, &b_el_rawcl_Es2);
   fChain->SetBranchAddress("el_rawcl_etas2", &el_rawcl_etas2, &b_el_rawcl_etas2);
   fChain->SetBranchAddress("el_rawcl_phis2", &el_rawcl_phis2, &b_el_rawcl_phis2);
   fChain->SetBranchAddress("el_rawcl_Es3", &el_rawcl_Es3, &b_el_rawcl_Es3);
   fChain->SetBranchAddress("el_rawcl_etas3", &el_rawcl_etas3, &b_el_rawcl_etas3);
   fChain->SetBranchAddress("el_rawcl_phis3", &el_rawcl_phis3, &b_el_rawcl_phis3);
   fChain->SetBranchAddress("el_rawcl_E", &el_rawcl_E, &b_el_rawcl_E);
   fChain->SetBranchAddress("el_rawcl_pt", &el_rawcl_pt, &b_el_rawcl_pt);
   fChain->SetBranchAddress("el_rawcl_eta", &el_rawcl_eta, &b_el_rawcl_eta);
   fChain->SetBranchAddress("el_rawcl_phi", &el_rawcl_phi, &b_el_rawcl_phi);
   fChain->SetBranchAddress("el_trackd0", &el_trackd0, &b_el_trackd0);
   fChain->SetBranchAddress("el_trackz0", &el_trackz0, &b_el_trackz0);
   fChain->SetBranchAddress("el_trackphi", &el_trackphi, &b_el_trackphi);
   fChain->SetBranchAddress("el_tracktheta", &el_tracktheta, &b_el_tracktheta);
   fChain->SetBranchAddress("el_trackqoverp", &el_trackqoverp, &b_el_trackqoverp);
   fChain->SetBranchAddress("el_trackpt", &el_trackpt, &b_el_trackpt);
   fChain->SetBranchAddress("el_tracketa", &el_tracketa, &b_el_tracketa);
   fChain->SetBranchAddress("el_trackcov_d0", &el_trackcov_d0, &b_el_trackcov_d0);
   fChain->SetBranchAddress("el_trackcov_z0", &el_trackcov_z0, &b_el_trackcov_z0);
   fChain->SetBranchAddress("el_trackcov_phi", &el_trackcov_phi, &b_el_trackcov_phi);
   fChain->SetBranchAddress("el_trackcov_theta", &el_trackcov_theta, &b_el_trackcov_theta);
   fChain->SetBranchAddress("el_trackcov_qoverp", &el_trackcov_qoverp, &b_el_trackcov_qoverp);
   fChain->SetBranchAddress("el_trackcov_d0_z0", &el_trackcov_d0_z0, &b_el_trackcov_d0_z0);
   fChain->SetBranchAddress("el_trackcov_d0_phi", &el_trackcov_d0_phi, &b_el_trackcov_d0_phi);
   fChain->SetBranchAddress("el_trackcov_d0_theta", &el_trackcov_d0_theta, &b_el_trackcov_d0_theta);
   fChain->SetBranchAddress("el_trackcov_d0_qoverp", &el_trackcov_d0_qoverp, &b_el_trackcov_d0_qoverp);
   fChain->SetBranchAddress("el_trackcov_z0_phi", &el_trackcov_z0_phi, &b_el_trackcov_z0_phi);
   fChain->SetBranchAddress("el_trackcov_z0_theta", &el_trackcov_z0_theta, &b_el_trackcov_z0_theta);
   fChain->SetBranchAddress("el_trackcov_z0_qoverp", &el_trackcov_z0_qoverp, &b_el_trackcov_z0_qoverp);
   fChain->SetBranchAddress("el_trackcov_phi_theta", &el_trackcov_phi_theta, &b_el_trackcov_phi_theta);
   fChain->SetBranchAddress("el_trackcov_phi_qoverp", &el_trackcov_phi_qoverp, &b_el_trackcov_phi_qoverp);
   fChain->SetBranchAddress("el_trackcov_theta_qoverp", &el_trackcov_theta_qoverp, &b_el_trackcov_theta_qoverp);
   fChain->SetBranchAddress("el_trackfitchi2", &el_trackfitchi2, &b_el_trackfitchi2);
   fChain->SetBranchAddress("el_trackfitndof", &el_trackfitndof, &b_el_trackfitndof);
   fChain->SetBranchAddress("el_nBLHits", &el_nBLHits, &b_el_nBLHits);
   fChain->SetBranchAddress("el_nPixHits", &el_nPixHits, &b_el_nPixHits);
   fChain->SetBranchAddress("el_nSCTHits", &el_nSCTHits, &b_el_nSCTHits);
   fChain->SetBranchAddress("el_nTRTHits", &el_nTRTHits, &b_el_nTRTHits);
   fChain->SetBranchAddress("el_nTRTHighTHits", &el_nTRTHighTHits, &b_el_nTRTHighTHits);
   fChain->SetBranchAddress("el_nTRTXenonHits", &el_nTRTXenonHits, &b_el_nTRTXenonHits);
   fChain->SetBranchAddress("el_nPixHoles", &el_nPixHoles, &b_el_nPixHoles);
   fChain->SetBranchAddress("el_nSCTHoles", &el_nSCTHoles, &b_el_nSCTHoles);
   fChain->SetBranchAddress("el_nTRTHoles", &el_nTRTHoles, &b_el_nTRTHoles);
   fChain->SetBranchAddress("el_nPixelDeadSensors", &el_nPixelDeadSensors, &b_el_nPixelDeadSensors);
   fChain->SetBranchAddress("el_nSCTDeadSensors", &el_nSCTDeadSensors, &b_el_nSCTDeadSensors);
   fChain->SetBranchAddress("el_nBLSharedHits", &el_nBLSharedHits, &b_el_nBLSharedHits);
   fChain->SetBranchAddress("el_nPixSharedHits", &el_nPixSharedHits, &b_el_nPixSharedHits);
   fChain->SetBranchAddress("el_nSCTSharedHits", &el_nSCTSharedHits, &b_el_nSCTSharedHits);
   fChain->SetBranchAddress("el_nBLayerSplitHits", &el_nBLayerSplitHits, &b_el_nBLayerSplitHits);
   fChain->SetBranchAddress("el_nPixSplitHits", &el_nPixSplitHits, &b_el_nPixSplitHits);
   fChain->SetBranchAddress("el_nBLayerOutliers", &el_nBLayerOutliers, &b_el_nBLayerOutliers);
   fChain->SetBranchAddress("el_nPixelOutliers", &el_nPixelOutliers, &b_el_nPixelOutliers);
   fChain->SetBranchAddress("el_nSCTOutliers", &el_nSCTOutliers, &b_el_nSCTOutliers);
   fChain->SetBranchAddress("el_nTRTOutliers", &el_nTRTOutliers, &b_el_nTRTOutliers);
   fChain->SetBranchAddress("el_nTRTHighTOutliers", &el_nTRTHighTOutliers, &b_el_nTRTHighTOutliers);
   fChain->SetBranchAddress("el_nContribPixelLayers", &el_nContribPixelLayers, &b_el_nContribPixelLayers);
   fChain->SetBranchAddress("el_nGangedPixels", &el_nGangedPixels, &b_el_nGangedPixels);
   fChain->SetBranchAddress("el_nGangedFlaggedFakes", &el_nGangedFlaggedFakes, &b_el_nGangedFlaggedFakes);
   fChain->SetBranchAddress("el_nPixelSpoiltHits", &el_nPixelSpoiltHits, &b_el_nPixelSpoiltHits);
   fChain->SetBranchAddress("el_nSCTDoubleHoles", &el_nSCTDoubleHoles, &b_el_nSCTDoubleHoles);
   fChain->SetBranchAddress("el_nSCTSpoiltHits", &el_nSCTSpoiltHits, &b_el_nSCTSpoiltHits);
   fChain->SetBranchAddress("el_expectBLayerHit", &el_expectBLayerHit, &b_el_expectBLayerHit);
   fChain->SetBranchAddress("el_nSiHits", &el_nSiHits, &b_el_nSiHits);
   fChain->SetBranchAddress("el_TRTHighTHitsRatio", &el_TRTHighTHitsRatio, &b_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("el_TRTHighTOutliersRatio", &el_TRTHighTOutliersRatio, &b_el_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("el_pixeldEdx", &el_pixeldEdx, &b_el_pixeldEdx);
   fChain->SetBranchAddress("el_nGoodHitsPixeldEdx", &el_nGoodHitsPixeldEdx, &b_el_nGoodHitsPixeldEdx);
   fChain->SetBranchAddress("el_massPixeldEdx", &el_massPixeldEdx, &b_el_massPixeldEdx);
   fChain->SetBranchAddress("el_likelihoodsPixeldEdx", &el_likelihoodsPixeldEdx, &b_el_likelihoodsPixeldEdx);
   fChain->SetBranchAddress("el_eProbabilityComb", &el_eProbabilityComb, &b_el_eProbabilityComb);
   fChain->SetBranchAddress("el_eProbabilityHT", &el_eProbabilityHT, &b_el_eProbabilityHT);
   fChain->SetBranchAddress("el_eProbabilityToT", &el_eProbabilityToT, &b_el_eProbabilityToT);
   fChain->SetBranchAddress("el_eProbabilityBrem", &el_eProbabilityBrem, &b_el_eProbabilityBrem);
   fChain->SetBranchAddress("el_vertweight", &el_vertweight, &b_el_vertweight);
   fChain->SetBranchAddress("el_vertx", &el_vertx, &b_el_vertx);
   fChain->SetBranchAddress("el_verty", &el_verty, &b_el_verty);
   fChain->SetBranchAddress("el_vertz", &el_vertz, &b_el_vertz);
   fChain->SetBranchAddress("el_trackd0beam", &el_trackd0beam, &b_el_trackd0beam);
   fChain->SetBranchAddress("el_trackz0beam", &el_trackz0beam, &b_el_trackz0beam);
   fChain->SetBranchAddress("el_tracksigd0beam", &el_tracksigd0beam, &b_el_tracksigd0beam);
   fChain->SetBranchAddress("el_tracksigz0beam", &el_tracksigz0beam, &b_el_tracksigz0beam);
   fChain->SetBranchAddress("el_trackd0pv", &el_trackd0pv, &b_el_trackd0pv);
   fChain->SetBranchAddress("el_trackz0pv", &el_trackz0pv, &b_el_trackz0pv);
   fChain->SetBranchAddress("el_tracksigd0pv", &el_tracksigd0pv, &b_el_tracksigd0pv);
   fChain->SetBranchAddress("el_tracksigz0pv", &el_tracksigz0pv, &b_el_tracksigz0pv);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_biasedpvunbiased", &el_trackIPEstimate_d0_biasedpvunbiased, &b_el_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_biasedpvunbiased", &el_trackIPEstimate_z0_biasedpvunbiased, &b_el_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_biasedpvunbiased", &el_trackIPEstimate_sigd0_biasedpvunbiased, &b_el_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_biasedpvunbiased", &el_trackIPEstimate_sigz0_biasedpvunbiased, &b_el_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_unbiasedpvunbiased", &el_trackIPEstimate_d0_unbiasedpvunbiased, &b_el_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_unbiasedpvunbiased", &el_trackIPEstimate_z0_unbiasedpvunbiased, &b_el_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_unbiasedpvunbiased", &el_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_unbiasedpvunbiased", &el_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackd0pvunbiased", &el_trackd0pvunbiased, &b_el_trackd0pvunbiased);
   fChain->SetBranchAddress("el_trackz0pvunbiased", &el_trackz0pvunbiased, &b_el_trackz0pvunbiased);
   fChain->SetBranchAddress("el_tracksigd0pvunbiased", &el_tracksigd0pvunbiased, &b_el_tracksigd0pvunbiased);
   fChain->SetBranchAddress("el_tracksigz0pvunbiased", &el_tracksigz0pvunbiased, &b_el_tracksigz0pvunbiased);
   fChain->SetBranchAddress("el_Unrefittedtrack_d0", &el_Unrefittedtrack_d0, &b_el_Unrefittedtrack_d0);
   fChain->SetBranchAddress("el_Unrefittedtrack_z0", &el_Unrefittedtrack_z0, &b_el_Unrefittedtrack_z0);
   fChain->SetBranchAddress("el_Unrefittedtrack_phi", &el_Unrefittedtrack_phi, &b_el_Unrefittedtrack_phi);
   fChain->SetBranchAddress("el_Unrefittedtrack_theta", &el_Unrefittedtrack_theta, &b_el_Unrefittedtrack_theta);
   fChain->SetBranchAddress("el_Unrefittedtrack_qoverp", &el_Unrefittedtrack_qoverp, &b_el_Unrefittedtrack_qoverp);
   fChain->SetBranchAddress("el_Unrefittedtrack_pt", &el_Unrefittedtrack_pt, &b_el_Unrefittedtrack_pt);
   fChain->SetBranchAddress("el_Unrefittedtrack_eta", &el_Unrefittedtrack_eta, &b_el_Unrefittedtrack_eta);
   fChain->SetBranchAddress("el_theta_LM", &el_theta_LM, &b_el_theta_LM);
   fChain->SetBranchAddress("el_qoverp_LM", &el_qoverp_LM, &b_el_qoverp_LM);
   fChain->SetBranchAddress("el_locX_LM", &el_locX_LM, &b_el_locX_LM);
   fChain->SetBranchAddress("el_locY_LM", &el_locY_LM, &b_el_locY_LM);
   fChain->SetBranchAddress("el_phi_LM", &el_phi_LM, &b_el_phi_LM);
   fChain->SetBranchAddress("el_theta_err_LM", &el_theta_err_LM, &b_el_theta_err_LM);
   fChain->SetBranchAddress("el_qoverp_err_LM", &el_qoverp_err_LM, &b_el_qoverp_err_LM);
   fChain->SetBranchAddress("el_locX_err_LM", &el_locX_err_LM, &b_el_locX_err_LM);
   fChain->SetBranchAddress("el_locY_err_LM", &el_locY_err_LM, &b_el_locY_err_LM);
   fChain->SetBranchAddress("el_phi_err_LM", &el_phi_err_LM, &b_el_phi_err_LM);
   fChain->SetBranchAddress("el_hastrack", &el_hastrack, &b_el_hastrack);
   fChain->SetBranchAddress("el_deltaEmax2", &el_deltaEmax2, &b_el_deltaEmax2);
   fChain->SetBranchAddress("el_calibHitsShowerDepth", &el_calibHitsShowerDepth, &b_el_calibHitsShowerDepth);
   fChain->SetBranchAddress("el_isIso", &el_isIso, &b_el_isIso);
   fChain->SetBranchAddress("el_mvaptcone20", &el_mvaptcone20, &b_el_mvaptcone20);
   fChain->SetBranchAddress("el_mvaptcone30", &el_mvaptcone30, &b_el_mvaptcone30);
   fChain->SetBranchAddress("el_mvaptcone40", &el_mvaptcone40, &b_el_mvaptcone40);
   fChain->SetBranchAddress("el_CaloPointing_eta", &el_CaloPointing_eta, &b_el_CaloPointing_eta);
   fChain->SetBranchAddress("el_CaloPointing_sigma_eta", &el_CaloPointing_sigma_eta, &b_el_CaloPointing_sigma_eta);
   fChain->SetBranchAddress("el_CaloPointing_zvertex", &el_CaloPointing_zvertex, &b_el_CaloPointing_zvertex);
   fChain->SetBranchAddress("el_CaloPointing_sigma_zvertex", &el_CaloPointing_sigma_zvertex, &b_el_CaloPointing_sigma_zvertex);
   fChain->SetBranchAddress("el_HPV_eta", &el_HPV_eta, &b_el_HPV_eta);
   fChain->SetBranchAddress("el_HPV_sigma_eta", &el_HPV_sigma_eta, &b_el_HPV_sigma_eta);
   fChain->SetBranchAddress("el_HPV_zvertex", &el_HPV_zvertex, &b_el_HPV_zvertex);
   fChain->SetBranchAddress("el_HPV_sigma_zvertex", &el_HPV_sigma_zvertex, &b_el_HPV_sigma_zvertex);
   fChain->SetBranchAddress("el_topoEtcone60", &el_topoEtcone60, &b_el_topoEtcone60);
   fChain->SetBranchAddress("el_ES0_real", &el_ES0_real, &b_el_ES0_real);
   fChain->SetBranchAddress("el_ES1_real", &el_ES1_real, &b_el_ES1_real);
   fChain->SetBranchAddress("el_ES2_real", &el_ES2_real, &b_el_ES2_real);
   fChain->SetBranchAddress("el_ES3_real", &el_ES3_real, &b_el_ES3_real);
   fChain->SetBranchAddress("el_EcellS0", &el_EcellS0, &b_el_EcellS0);
   fChain->SetBranchAddress("el_etacellS0", &el_etacellS0, &b_el_etacellS0);
   fChain->SetBranchAddress("el_Etcone40_ED_corrected", &el_Etcone40_ED_corrected, &b_el_Etcone40_ED_corrected);
   fChain->SetBranchAddress("el_Etcone40_corrected", &el_Etcone40_corrected, &b_el_Etcone40_corrected);
   fChain->SetBranchAddress("el_topoEtcone20_corrected", &el_topoEtcone20_corrected, &b_el_topoEtcone20_corrected);
   fChain->SetBranchAddress("el_topoEtcone30_corrected", &el_topoEtcone30_corrected, &b_el_topoEtcone30_corrected);
   fChain->SetBranchAddress("el_topoEtcone40_corrected", &el_topoEtcone40_corrected, &b_el_topoEtcone40_corrected);
   fChain->SetBranchAddress("el_ED_median", &el_ED_median, &b_el_ED_median);
   fChain->SetBranchAddress("el_ED_sigma", &el_ED_sigma, &b_el_ED_sigma);
   fChain->SetBranchAddress("el_ED_Njets", &el_ED_Njets, &b_el_ED_Njets);
   fChain->SetBranchAddress("el_EF_dr", &el_EF_dr, &b_el_EF_dr);
   fChain->SetBranchAddress("el_L2_dr", &el_L2_dr, &b_el_L2_dr);
   fChain->SetBranchAddress("el_L1_dr", &el_L1_dr, &b_el_L1_dr);
   fChain->SetBranchAddress("el_L1_index", &el_L1_index, &b_el_L1_index);
   fChain->SetBranchAddress("ph_n", &ph_n, &b_ph_n);
   fChain->SetBranchAddress("ph_E", &ph_E, &b_ph_E);
   fChain->SetBranchAddress("ph_Et", &ph_Et, &b_ph_Et);
   fChain->SetBranchAddress("ph_pt", &ph_pt, &b_ph_pt);
   fChain->SetBranchAddress("ph_m", &ph_m, &b_ph_m);
   fChain->SetBranchAddress("ph_eta", &ph_eta, &b_ph_eta);
   fChain->SetBranchAddress("ph_phi", &ph_phi, &b_ph_phi);
   fChain->SetBranchAddress("ph_px", &ph_px, &b_ph_px);
   fChain->SetBranchAddress("ph_py", &ph_py, &b_ph_py);
   fChain->SetBranchAddress("ph_pz", &ph_pz, &b_ph_pz);
   fChain->SetBranchAddress("ph_author", &ph_author, &b_ph_author);
   fChain->SetBranchAddress("ph_isRecovered", &ph_isRecovered, &b_ph_isRecovered);
   fChain->SetBranchAddress("ph_isEM", &ph_isEM, &b_ph_isEM);
   fChain->SetBranchAddress("ph_isEMLoose", &ph_isEMLoose, &b_ph_isEMLoose);
   fChain->SetBranchAddress("ph_isEMMedium", &ph_isEMMedium, &b_ph_isEMMedium);
   fChain->SetBranchAddress("ph_isEMTight", &ph_isEMTight, &b_ph_isEMTight);
   fChain->SetBranchAddress("ph_OQ", &ph_OQ, &b_ph_OQ);
   fChain->SetBranchAddress("ph_loose", &ph_loose, &b_ph_loose);
   fChain->SetBranchAddress("ph_looseIso", &ph_looseIso, &b_ph_looseIso);
   fChain->SetBranchAddress("ph_tight", &ph_tight, &b_ph_tight);
   fChain->SetBranchAddress("ph_tightIso", &ph_tightIso, &b_ph_tightIso);
   fChain->SetBranchAddress("ph_looseAR", &ph_looseAR, &b_ph_looseAR);
   fChain->SetBranchAddress("ph_looseARIso", &ph_looseARIso, &b_ph_looseARIso);
   fChain->SetBranchAddress("ph_tightAR", &ph_tightAR, &b_ph_tightAR);
   fChain->SetBranchAddress("ph_tightARIso", &ph_tightARIso, &b_ph_tightARIso);
   fChain->SetBranchAddress("ph_goodOQ", &ph_goodOQ, &b_ph_goodOQ);
   fChain->SetBranchAddress("ph_Ethad", &ph_Ethad, &b_ph_Ethad);
   fChain->SetBranchAddress("ph_Ethad1", &ph_Ethad1, &b_ph_Ethad1);
   fChain->SetBranchAddress("ph_E033", &ph_E033, &b_ph_E033);
   fChain->SetBranchAddress("ph_f1", &ph_f1, &b_ph_f1);
   fChain->SetBranchAddress("ph_f1core", &ph_f1core, &b_ph_f1core);
   fChain->SetBranchAddress("ph_Emins1", &ph_Emins1, &b_ph_Emins1);
   fChain->SetBranchAddress("ph_fside", &ph_fside, &b_ph_fside);
   fChain->SetBranchAddress("ph_Emax2", &ph_Emax2, &b_ph_Emax2);
   fChain->SetBranchAddress("ph_ws3", &ph_ws3, &b_ph_ws3);
   fChain->SetBranchAddress("ph_wstot", &ph_wstot, &b_ph_wstot);
   fChain->SetBranchAddress("ph_E132", &ph_E132, &b_ph_E132);
   fChain->SetBranchAddress("ph_E1152", &ph_E1152, &b_ph_E1152);
   fChain->SetBranchAddress("ph_emaxs1", &ph_emaxs1, &b_ph_emaxs1);
   fChain->SetBranchAddress("ph_deltaEs", &ph_deltaEs, &b_ph_deltaEs);
   fChain->SetBranchAddress("ph_E233", &ph_E233, &b_ph_E233);
   fChain->SetBranchAddress("ph_E237", &ph_E237, &b_ph_E237);
   fChain->SetBranchAddress("ph_E277", &ph_E277, &b_ph_E277);
   fChain->SetBranchAddress("ph_weta2", &ph_weta2, &b_ph_weta2);
   fChain->SetBranchAddress("ph_f3", &ph_f3, &b_ph_f3);
   fChain->SetBranchAddress("ph_f3core", &ph_f3core, &b_ph_f3core);
   fChain->SetBranchAddress("ph_rphiallcalo", &ph_rphiallcalo, &b_ph_rphiallcalo);
   fChain->SetBranchAddress("ph_Etcone45", &ph_Etcone45, &b_ph_Etcone45);
   fChain->SetBranchAddress("ph_Etcone15", &ph_Etcone15, &b_ph_Etcone15);
   fChain->SetBranchAddress("ph_Etcone20", &ph_Etcone20, &b_ph_Etcone20);
   fChain->SetBranchAddress("ph_Etcone25", &ph_Etcone25, &b_ph_Etcone25);
   fChain->SetBranchAddress("ph_Etcone30", &ph_Etcone30, &b_ph_Etcone30);
   fChain->SetBranchAddress("ph_Etcone35", &ph_Etcone35, &b_ph_Etcone35);
   fChain->SetBranchAddress("ph_Etcone40", &ph_Etcone40, &b_ph_Etcone40);
   fChain->SetBranchAddress("ph_ptcone20", &ph_ptcone20, &b_ph_ptcone20);
   fChain->SetBranchAddress("ph_ptcone30", &ph_ptcone30, &b_ph_ptcone30);
   fChain->SetBranchAddress("ph_ptcone40", &ph_ptcone40, &b_ph_ptcone40);
   fChain->SetBranchAddress("ph_nucone20", &ph_nucone20, &b_ph_nucone20);
   fChain->SetBranchAddress("ph_nucone30", &ph_nucone30, &b_ph_nucone30);
   fChain->SetBranchAddress("ph_nucone40", &ph_nucone40, &b_ph_nucone40);
   fChain->SetBranchAddress("ph_Etcone15_pt_corrected", &ph_Etcone15_pt_corrected, &b_ph_Etcone15_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone20_pt_corrected", &ph_Etcone20_pt_corrected, &b_ph_Etcone20_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone25_pt_corrected", &ph_Etcone25_pt_corrected, &b_ph_Etcone25_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone30_pt_corrected", &ph_Etcone30_pt_corrected, &b_ph_Etcone30_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone35_pt_corrected", &ph_Etcone35_pt_corrected, &b_ph_Etcone35_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone40_pt_corrected", &ph_Etcone40_pt_corrected, &b_ph_Etcone40_pt_corrected);
   fChain->SetBranchAddress("ph_convanglematch", &ph_convanglematch, &b_ph_convanglematch);
   fChain->SetBranchAddress("ph_convtrackmatch", &ph_convtrackmatch, &b_ph_convtrackmatch);
   fChain->SetBranchAddress("ph_reta", &ph_reta, &b_ph_reta);
   fChain->SetBranchAddress("ph_rphi", &ph_rphi, &b_ph_rphi);
   fChain->SetBranchAddress("ph_topoEtcone20", &ph_topoEtcone20, &b_ph_topoEtcone20);
   fChain->SetBranchAddress("ph_topoEtcone30", &ph_topoEtcone30, &b_ph_topoEtcone30);
   fChain->SetBranchAddress("ph_topoEtcone40", &ph_topoEtcone40, &b_ph_topoEtcone40);
   fChain->SetBranchAddress("ph_materialTraversed", &ph_materialTraversed, &b_ph_materialTraversed);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig2", &ph_EtringnoisedR03sig2, &b_ph_EtringnoisedR03sig2);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig3", &ph_EtringnoisedR03sig3, &b_ph_EtringnoisedR03sig3);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig4", &ph_EtringnoisedR03sig4, &b_ph_EtringnoisedR03sig4);
   fChain->SetBranchAddress("ph_ptcone20_zpv05", &ph_ptcone20_zpv05, &b_ph_ptcone20_zpv05);
   fChain->SetBranchAddress("ph_ptcone30_zpv05", &ph_ptcone30_zpv05, &b_ph_ptcone30_zpv05);
   fChain->SetBranchAddress("ph_ptcone40_zpv05", &ph_ptcone40_zpv05, &b_ph_ptcone40_zpv05);
   fChain->SetBranchAddress("ph_nucone20_zpv05", &ph_nucone20_zpv05, &b_ph_nucone20_zpv05);
   fChain->SetBranchAddress("ph_nucone30_zpv05", &ph_nucone30_zpv05, &b_ph_nucone30_zpv05);
   fChain->SetBranchAddress("ph_nucone40_zpv05", &ph_nucone40_zpv05, &b_ph_nucone40_zpv05);
   fChain->SetBranchAddress("ph_isolationlikelihoodjets", &ph_isolationlikelihoodjets, &b_ph_isolationlikelihoodjets);
   fChain->SetBranchAddress("ph_isolationlikelihoodhqelectrons", &ph_isolationlikelihoodhqelectrons, &b_ph_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("ph_loglikelihood", &ph_loglikelihood, &b_ph_loglikelihood);
   fChain->SetBranchAddress("ph_photonweight", &ph_photonweight, &b_ph_photonweight);
   fChain->SetBranchAddress("ph_photonbgweight", &ph_photonbgweight, &b_ph_photonbgweight);
   fChain->SetBranchAddress("ph_neuralnet", &ph_neuralnet, &b_ph_neuralnet);
   fChain->SetBranchAddress("ph_Hmatrix", &ph_Hmatrix, &b_ph_Hmatrix);
   fChain->SetBranchAddress("ph_Hmatrix5", &ph_Hmatrix5, &b_ph_Hmatrix5);
   fChain->SetBranchAddress("ph_adaboost", &ph_adaboost, &b_ph_adaboost);
   fChain->SetBranchAddress("ph_ringernn", &ph_ringernn, &b_ph_ringernn);
   fChain->SetBranchAddress("ph_zvertex", &ph_zvertex, &b_ph_zvertex);
   fChain->SetBranchAddress("ph_errz", &ph_errz, &b_ph_errz);
   fChain->SetBranchAddress("ph_etap", &ph_etap, &b_ph_etap);
   fChain->SetBranchAddress("ph_depth", &ph_depth, &b_ph_depth);
   fChain->SetBranchAddress("ph_cl_E", &ph_cl_E, &b_ph_cl_E);
   fChain->SetBranchAddress("ph_cl_pt", &ph_cl_pt, &b_ph_cl_pt);
   fChain->SetBranchAddress("ph_cl_eta", &ph_cl_eta, &b_ph_cl_eta);
   fChain->SetBranchAddress("ph_cl_phi", &ph_cl_phi, &b_ph_cl_phi);
   fChain->SetBranchAddress("ph_cl_etaCalo", &ph_cl_etaCalo, &b_ph_cl_etaCalo);
   fChain->SetBranchAddress("ph_cl_phiCalo", &ph_cl_phiCalo, &b_ph_cl_phiCalo);
   fChain->SetBranchAddress("ph_Es0", &ph_Es0, &b_ph_Es0);
   fChain->SetBranchAddress("ph_etas0", &ph_etas0, &b_ph_etas0);
   fChain->SetBranchAddress("ph_phis0", &ph_phis0, &b_ph_phis0);
   fChain->SetBranchAddress("ph_Es1", &ph_Es1, &b_ph_Es1);
   fChain->SetBranchAddress("ph_etas1", &ph_etas1, &b_ph_etas1);
   fChain->SetBranchAddress("ph_phis1", &ph_phis1, &b_ph_phis1);
   fChain->SetBranchAddress("ph_Es2", &ph_Es2, &b_ph_Es2);
   fChain->SetBranchAddress("ph_etas2", &ph_etas2, &b_ph_etas2);
   fChain->SetBranchAddress("ph_phis2", &ph_phis2, &b_ph_phis2);
   fChain->SetBranchAddress("ph_Es3", &ph_Es3, &b_ph_Es3);
   fChain->SetBranchAddress("ph_etas3", &ph_etas3, &b_ph_etas3);
   fChain->SetBranchAddress("ph_phis3", &ph_phis3, &b_ph_phis3);
   fChain->SetBranchAddress("ph_rawcl_Es0", &ph_rawcl_Es0, &b_ph_rawcl_Es0);
   fChain->SetBranchAddress("ph_rawcl_etas0", &ph_rawcl_etas0, &b_ph_rawcl_etas0);
   fChain->SetBranchAddress("ph_rawcl_phis0", &ph_rawcl_phis0, &b_ph_rawcl_phis0);
   fChain->SetBranchAddress("ph_rawcl_Es1", &ph_rawcl_Es1, &b_ph_rawcl_Es1);
   fChain->SetBranchAddress("ph_rawcl_etas1", &ph_rawcl_etas1, &b_ph_rawcl_etas1);
   fChain->SetBranchAddress("ph_rawcl_phis1", &ph_rawcl_phis1, &b_ph_rawcl_phis1);
   fChain->SetBranchAddress("ph_rawcl_Es2", &ph_rawcl_Es2, &b_ph_rawcl_Es2);
   fChain->SetBranchAddress("ph_rawcl_etas2", &ph_rawcl_etas2, &b_ph_rawcl_etas2);
   fChain->SetBranchAddress("ph_rawcl_phis2", &ph_rawcl_phis2, &b_ph_rawcl_phis2);
   fChain->SetBranchAddress("ph_rawcl_Es3", &ph_rawcl_Es3, &b_ph_rawcl_Es3);
   fChain->SetBranchAddress("ph_rawcl_etas3", &ph_rawcl_etas3, &b_ph_rawcl_etas3);
   fChain->SetBranchAddress("ph_rawcl_phis3", &ph_rawcl_phis3, &b_ph_rawcl_phis3);
   fChain->SetBranchAddress("ph_rawcl_E", &ph_rawcl_E, &b_ph_rawcl_E);
   fChain->SetBranchAddress("ph_rawcl_pt", &ph_rawcl_pt, &b_ph_rawcl_pt);
   fChain->SetBranchAddress("ph_rawcl_eta", &ph_rawcl_eta, &b_ph_rawcl_eta);
   fChain->SetBranchAddress("ph_rawcl_phi", &ph_rawcl_phi, &b_ph_rawcl_phi);
   fChain->SetBranchAddress("ph_convMatchDeltaEta1", &ph_convMatchDeltaEta1, &b_ph_convMatchDeltaEta1);
   fChain->SetBranchAddress("ph_convMatchDeltaEta2", &ph_convMatchDeltaEta2, &b_ph_convMatchDeltaEta2);
   fChain->SetBranchAddress("ph_convMatchDeltaPhi1", &ph_convMatchDeltaPhi1, &b_ph_convMatchDeltaPhi1);
   fChain->SetBranchAddress("ph_convMatchDeltaPhi2", &ph_convMatchDeltaPhi2, &b_ph_convMatchDeltaPhi2);
   fChain->SetBranchAddress("ph_rings_E", &ph_rings_E, &b_ph_rings_E);
   fChain->SetBranchAddress("ph_vx_n", &ph_vx_n, &b_ph_vx_n);
   fChain->SetBranchAddress("ph_vx_x", &ph_vx_x, &b_ph_vx_x);
   fChain->SetBranchAddress("ph_vx_y", &ph_vx_y, &b_ph_vx_y);
   fChain->SetBranchAddress("ph_vx_z", &ph_vx_z, &b_ph_vx_z);
   fChain->SetBranchAddress("ph_vx_px", &ph_vx_px, &b_ph_vx_px);
   fChain->SetBranchAddress("ph_vx_py", &ph_vx_py, &b_ph_vx_py);
   fChain->SetBranchAddress("ph_vx_pz", &ph_vx_pz, &b_ph_vx_pz);
   fChain->SetBranchAddress("ph_vx_E", &ph_vx_E, &b_ph_vx_E);
   fChain->SetBranchAddress("ph_vx_m", &ph_vx_m, &b_ph_vx_m);
   fChain->SetBranchAddress("ph_vx_nTracks", &ph_vx_nTracks, &b_ph_vx_nTracks);
   fChain->SetBranchAddress("ph_vx_sumPt", &ph_vx_sumPt, &b_ph_vx_sumPt);
   fChain->SetBranchAddress("ph_vx_convTrk_weight", &ph_vx_convTrk_weight, &b_ph_vx_convTrk_weight);
   fChain->SetBranchAddress("ph_vx_convTrk_n", &ph_vx_convTrk_n, &b_ph_vx_convTrk_n);
   fChain->SetBranchAddress("ph_vx_convTrk_fitter", &ph_vx_convTrk_fitter, &b_ph_vx_convTrk_fitter);
   fChain->SetBranchAddress("ph_vx_convTrk_patternReco1", &ph_vx_convTrk_patternReco1, &b_ph_vx_convTrk_patternReco1);
   fChain->SetBranchAddress("ph_vx_convTrk_patternReco2", &ph_vx_convTrk_patternReco2, &b_ph_vx_convTrk_patternReco2);
   fChain->SetBranchAddress("ph_vx_convTrk_trackProperties", &ph_vx_convTrk_trackProperties, &b_ph_vx_convTrk_trackProperties);
   fChain->SetBranchAddress("ph_vx_convTrk_particleHypothesis", &ph_vx_convTrk_particleHypothesis, &b_ph_vx_convTrk_particleHypothesis);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLHits", &ph_vx_convTrk_nBLHits, &b_ph_vx_convTrk_nBLHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixHits", &ph_vx_convTrk_nPixHits, &b_ph_vx_convTrk_nPixHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTHits", &ph_vx_convTrk_nSCTHits, &b_ph_vx_convTrk_nSCTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHits", &ph_vx_convTrk_nTRTHits, &b_ph_vx_convTrk_nTRTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHighTHits", &ph_vx_convTrk_nTRTHighTHits, &b_ph_vx_convTrk_nTRTHighTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTXenonHits", &ph_vx_convTrk_nTRTXenonHits, &b_ph_vx_convTrk_nTRTXenonHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixHoles", &ph_vx_convTrk_nPixHoles, &b_ph_vx_convTrk_nPixHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTHoles", &ph_vx_convTrk_nSCTHoles, &b_ph_vx_convTrk_nSCTHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHoles", &ph_vx_convTrk_nTRTHoles, &b_ph_vx_convTrk_nTRTHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixelDeadSensors", &ph_vx_convTrk_nPixelDeadSensors, &b_ph_vx_convTrk_nPixelDeadSensors);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTDeadSensors", &ph_vx_convTrk_nSCTDeadSensors, &b_ph_vx_convTrk_nSCTDeadSensors);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLSharedHits", &ph_vx_convTrk_nBLSharedHits, &b_ph_vx_convTrk_nBLSharedHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixSharedHits", &ph_vx_convTrk_nPixSharedHits, &b_ph_vx_convTrk_nPixSharedHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTSharedHits", &ph_vx_convTrk_nSCTSharedHits, &b_ph_vx_convTrk_nSCTSharedHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLayerSplitHits", &ph_vx_convTrk_nBLayerSplitHits, &b_ph_vx_convTrk_nBLayerSplitHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixSplitHits", &ph_vx_convTrk_nPixSplitHits, &b_ph_vx_convTrk_nPixSplitHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLayerOutliers", &ph_vx_convTrk_nBLayerOutliers, &b_ph_vx_convTrk_nBLayerOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixelOutliers", &ph_vx_convTrk_nPixelOutliers, &b_ph_vx_convTrk_nPixelOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTOutliers", &ph_vx_convTrk_nSCTOutliers, &b_ph_vx_convTrk_nSCTOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTOutliers", &ph_vx_convTrk_nTRTOutliers, &b_ph_vx_convTrk_nTRTOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHighTOutliers", &ph_vx_convTrk_nTRTHighTOutliers, &b_ph_vx_convTrk_nTRTHighTOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nContribPixelLayers", &ph_vx_convTrk_nContribPixelLayers, &b_ph_vx_convTrk_nContribPixelLayers);
   fChain->SetBranchAddress("ph_vx_convTrk_nGangedPixels", &ph_vx_convTrk_nGangedPixels, &b_ph_vx_convTrk_nGangedPixels);
   fChain->SetBranchAddress("ph_vx_convTrk_nGangedFlaggedFakes", &ph_vx_convTrk_nGangedFlaggedFakes, &b_ph_vx_convTrk_nGangedFlaggedFakes);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixelSpoiltHits", &ph_vx_convTrk_nPixelSpoiltHits, &b_ph_vx_convTrk_nPixelSpoiltHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTDoubleHoles", &ph_vx_convTrk_nSCTDoubleHoles, &b_ph_vx_convTrk_nSCTDoubleHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTSpoiltHits", &ph_vx_convTrk_nSCTSpoiltHits, &b_ph_vx_convTrk_nSCTSpoiltHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTDeadStraws", &ph_vx_convTrk_nTRTDeadStraws, &b_ph_vx_convTrk_nTRTDeadStraws);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTTubeHits", &ph_vx_convTrk_nTRTTubeHits, &b_ph_vx_convTrk_nTRTTubeHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nOutliersOnTrack", &ph_vx_convTrk_nOutliersOnTrack, &b_ph_vx_convTrk_nOutliersOnTrack);
   fChain->SetBranchAddress("ph_vx_convTrk_standardDeviationOfChi2OS", &ph_vx_convTrk_standardDeviationOfChi2OS, &b_ph_vx_convTrk_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("ph_vx_convTrk_expectBLayerHit", &ph_vx_convTrk_expectBLayerHit, &b_ph_vx_convTrk_expectBLayerHit);
   fChain->SetBranchAddress("ph_vx_convTrk_nMDTHits", &ph_vx_convTrk_nMDTHits, &b_ph_vx_convTrk_nMDTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nCSCEtaHits", &ph_vx_convTrk_nCSCEtaHits, &b_ph_vx_convTrk_nCSCEtaHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nCSCPhiHits", &ph_vx_convTrk_nCSCPhiHits, &b_ph_vx_convTrk_nCSCPhiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nRPCEtaHits", &ph_vx_convTrk_nRPCEtaHits, &b_ph_vx_convTrk_nRPCEtaHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nRPCPhiHits", &ph_vx_convTrk_nRPCPhiHits, &b_ph_vx_convTrk_nRPCPhiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTGCEtaHits", &ph_vx_convTrk_nTGCEtaHits, &b_ph_vx_convTrk_nTGCEtaHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTGCPhiHits", &ph_vx_convTrk_nTGCPhiHits, &b_ph_vx_convTrk_nTGCPhiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nMdtHoles", &ph_vx_convTrk_nMdtHoles, &b_ph_vx_convTrk_nMdtHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nCscEtaHoles", &ph_vx_convTrk_nCscEtaHoles, &b_ph_vx_convTrk_nCscEtaHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nCscPhiHoles", &ph_vx_convTrk_nCscPhiHoles, &b_ph_vx_convTrk_nCscPhiHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nRpcEtaHoles", &ph_vx_convTrk_nRpcEtaHoles, &b_ph_vx_convTrk_nRpcEtaHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nRpcPhiHoles", &ph_vx_convTrk_nRpcPhiHoles, &b_ph_vx_convTrk_nRpcPhiHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nTgcEtaHoles", &ph_vx_convTrk_nTgcEtaHoles, &b_ph_vx_convTrk_nTgcEtaHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nTgcPhiHoles", &ph_vx_convTrk_nTgcPhiHoles, &b_ph_vx_convTrk_nTgcPhiHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nHits", &ph_vx_convTrk_nHits, &b_ph_vx_convTrk_nHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nHoles", &ph_vx_convTrk_nHoles, &b_ph_vx_convTrk_nHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_hitPattern", &ph_vx_convTrk_hitPattern, &b_ph_vx_convTrk_hitPattern);
   fChain->SetBranchAddress("ph_vx_convTrk_nSiHits", &ph_vx_convTrk_nSiHits, &b_ph_vx_convTrk_nSiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_TRTHighTHitsRatio", &ph_vx_convTrk_TRTHighTHitsRatio, &b_ph_vx_convTrk_TRTHighTHitsRatio);
   fChain->SetBranchAddress("ph_vx_convTrk_TRTHighTOutliersRatio", &ph_vx_convTrk_TRTHighTOutliersRatio, &b_ph_vx_convTrk_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityComb", &ph_vx_convTrk_eProbabilityComb, &b_ph_vx_convTrk_eProbabilityComb);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityHT", &ph_vx_convTrk_eProbabilityHT, &b_ph_vx_convTrk_eProbabilityHT);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityToT", &ph_vx_convTrk_eProbabilityToT, &b_ph_vx_convTrk_eProbabilityToT);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityBrem", &ph_vx_convTrk_eProbabilityBrem, &b_ph_vx_convTrk_eProbabilityBrem);
   fChain->SetBranchAddress("ph_vx_convTrk_chi2", &ph_vx_convTrk_chi2, &b_ph_vx_convTrk_chi2);
   fChain->SetBranchAddress("ph_vx_convTrk_ndof", &ph_vx_convTrk_ndof, &b_ph_vx_convTrk_ndof);
   fChain->SetBranchAddress("ph_deltaEmax2", &ph_deltaEmax2, &b_ph_deltaEmax2);
   fChain->SetBranchAddress("ph_calibHitsShowerDepth", &ph_calibHitsShowerDepth, &b_ph_calibHitsShowerDepth);
   fChain->SetBranchAddress("ph_isIso", &ph_isIso, &b_ph_isIso);
   fChain->SetBranchAddress("ph_mvaptcone20", &ph_mvaptcone20, &b_ph_mvaptcone20);
   fChain->SetBranchAddress("ph_mvaptcone30", &ph_mvaptcone30, &b_ph_mvaptcone30);
   fChain->SetBranchAddress("ph_mvaptcone40", &ph_mvaptcone40, &b_ph_mvaptcone40);
   fChain->SetBranchAddress("ph_vx_Chi2", &ph_vx_Chi2, &b_ph_vx_Chi2);
   fChain->SetBranchAddress("ph_vx_Dcottheta", &ph_vx_Dcottheta, &b_ph_vx_Dcottheta);
   fChain->SetBranchAddress("ph_vx_Dphi", &ph_vx_Dphi, &b_ph_vx_Dphi);
   fChain->SetBranchAddress("ph_vx_Dist", &ph_vx_Dist, &b_ph_vx_Dist);
   fChain->SetBranchAddress("ph_vx_DR1R2", &ph_vx_DR1R2, &b_ph_vx_DR1R2);
   fChain->SetBranchAddress("ph_CaloPointing_eta", &ph_CaloPointing_eta, &b_ph_CaloPointing_eta);
   fChain->SetBranchAddress("ph_CaloPointing_sigma_eta", &ph_CaloPointing_sigma_eta, &b_ph_CaloPointing_sigma_eta);
   fChain->SetBranchAddress("ph_CaloPointing_zvertex", &ph_CaloPointing_zvertex, &b_ph_CaloPointing_zvertex);
   fChain->SetBranchAddress("ph_CaloPointing_sigma_zvertex", &ph_CaloPointing_sigma_zvertex, &b_ph_CaloPointing_sigma_zvertex);
   fChain->SetBranchAddress("ph_HPV_eta", &ph_HPV_eta, &b_ph_HPV_eta);
   fChain->SetBranchAddress("ph_HPV_sigma_eta", &ph_HPV_sigma_eta, &b_ph_HPV_sigma_eta);
   fChain->SetBranchAddress("ph_HPV_zvertex", &ph_HPV_zvertex, &b_ph_HPV_zvertex);
   fChain->SetBranchAddress("ph_HPV_sigma_zvertex", &ph_HPV_sigma_zvertex, &b_ph_HPV_sigma_zvertex);
   fChain->SetBranchAddress("ph_NN_passes", &ph_NN_passes, &b_ph_NN_passes);
   fChain->SetBranchAddress("ph_NN_discriminant", &ph_NN_discriminant, &b_ph_NN_discriminant);
   fChain->SetBranchAddress("ph_ES0_real", &ph_ES0_real, &b_ph_ES0_real);
   fChain->SetBranchAddress("ph_ES1_real", &ph_ES1_real, &b_ph_ES1_real);
   fChain->SetBranchAddress("ph_ES2_real", &ph_ES2_real, &b_ph_ES2_real);
   fChain->SetBranchAddress("ph_ES3_real", &ph_ES3_real, &b_ph_ES3_real);
   fChain->SetBranchAddress("ph_EcellS0", &ph_EcellS0, &b_ph_EcellS0);
   fChain->SetBranchAddress("ph_etacellS0", &ph_etacellS0, &b_ph_etacellS0);
   fChain->SetBranchAddress("ph_Etcone40_ED_corrected", &ph_Etcone40_ED_corrected, &b_ph_Etcone40_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone40_corrected", &ph_Etcone40_corrected, &b_ph_Etcone40_corrected);
   fChain->SetBranchAddress("ph_topoEtcone20_corrected", &ph_topoEtcone20_corrected, &b_ph_topoEtcone20_corrected);
   fChain->SetBranchAddress("ph_topoEtcone30_corrected", &ph_topoEtcone30_corrected, &b_ph_topoEtcone30_corrected);
   fChain->SetBranchAddress("ph_topoEtcone40_corrected", &ph_topoEtcone40_corrected, &b_ph_topoEtcone40_corrected);
   fChain->SetBranchAddress("ph_ED_median", &ph_ED_median, &b_ph_ED_median);
   fChain->SetBranchAddress("ph_ED_sigma", &ph_ED_sigma, &b_ph_ED_sigma);
   fChain->SetBranchAddress("ph_ED_Njets", &ph_ED_Njets, &b_ph_ED_Njets);
   fChain->SetBranchAddress("ph_convIP", &ph_convIP, &b_ph_convIP);
   fChain->SetBranchAddress("ph_convIPRev", &ph_convIPRev, &b_ph_convIPRev);
   fChain->SetBranchAddress("ph_el_index", &ph_el_index, &b_ph_el_index);
   fChain->SetBranchAddress("ph_EF_dr", &ph_EF_dr, &b_ph_EF_dr);
   fChain->SetBranchAddress("ph_EF_index", &ph_EF_index, &b_ph_EF_index);
   fChain->SetBranchAddress("ph_L2_dr", &ph_L2_dr, &b_ph_L2_dr);
   fChain->SetBranchAddress("ph_L1_dr", &ph_L1_dr, &b_ph_L1_dr);
   fChain->SetBranchAddress("ph_L1_index", &ph_L1_index, &b_ph_L1_index);
   Notify();
}

Bool_t BranchBase_pPb::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void BranchBase_pPb::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t BranchBase_pPb::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef BranchBase_pPb_cxx
