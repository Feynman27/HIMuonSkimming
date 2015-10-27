#ifndef reader_h
#define reader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class reader {
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
   Bool_t          EF_L1ItemStreamer_L1_2MU0_MU6;
   Bool_t          EF_L1ItemStreamer_L1_2MU0_MV;
   Bool_t          EF_L1ItemStreamer_L1_2MU0_NL;
   Bool_t          EF_L1ItemStreamer_L1_2MU0_NZ;
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
   Bool_t          EF_L1ItemStreamer_L1_EM3_NL;
   Bool_t          EF_L1ItemStreamer_L1_EM3_NZ;
   Bool_t          EF_L1ItemStreamer_L1_EM3_TE50;
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
   Bool_t          EF_L1ItemStreamer_L1_MU0_MV;
   Bool_t          EF_L1ItemStreamer_L1_MU0_MV_VTE50;
   Bool_t          EF_L1ItemStreamer_L1_MU0_NL;
   Bool_t          EF_L1ItemStreamer_L1_MU0_NZ;
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
   Bool_t          EF_e5_loose_L1VTE50;
   Bool_t          EF_g10_loose;
   Bool_t          EF_g10_loose_larcalib;
   Bool_t          EF_g5_NoCut_cosmic;
   Bool_t          EF_g5_loose;
   Bool_t          EF_g5_loose_EFFS_L1ZDC;
   Bool_t          EF_g5_loose_L1TE50;
   Bool_t          EF_g5_loose_larcalib;
   Bool_t          EF_g7_loose;
   Bool_t          EF_g9_etcut;
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
   Bool_t          EF_mu4_MSonly_EFFS_L1MU0_NZ;
   Bool_t          EF_mu4_MSonly_EFFS_L1TE10;
   Bool_t          EF_mu4_MSonly_EFFS_L1TE20;
   Bool_t          EF_mu4_MSonly_EFFS_L1TE50;
   Bool_t          EF_mu4_MSonly_EFFS_L1TE5_NZ;
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
   Bool_t          EF_mu4_loose;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1TE10;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1TE20;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1TE50;
   Bool_t          EF_mu4_mu2_MSonly_EFFS_L1ZDC;
   Bool_t          EF_mu6;
   Bool_t          EF_mu6T;
   Bool_t          EF_mu6T_IDTrkNoCut;
   Bool_t          EF_mu6T_MSonly;
   Bool_t          EF_mu6_IDTrkNoCut;
   Bool_t          EF_mu6_L1VTE50;
   Bool_t          EF_mu6_MSonly;
   Bool_t          EF_mu6_MSonly_L1TE50;
   Bool_t          L1_2EM3;
   Bool_t          L1_2EM3_NL;
   Bool_t          L1_2EM3_NZ;
   Bool_t          L1_2EM5;
   Bool_t          L1_2MU0;
   Bool_t          L1_2MU0_EMPTY;
   Bool_t          L1_2MU0_MU6;
   Bool_t          L1_2MU0_MV;
   Bool_t          L1_2MU0_NL;
   Bool_t          L1_2MU0_NZ;
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
   Bool_t          L1_EM3_NL;
   Bool_t          L1_EM3_NZ;
   Bool_t          L1_EM3_TE50;
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
   Bool_t          L1_MU0_MV;
   Bool_t          L1_MU0_MV_VTE50;
   Bool_t          L1_MU0_NL;
   Bool_t          L1_MU0_NZ;
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
   Bool_t          L2_2mu4_MSonly_EFFS_L1TE10;
   Bool_t          L2_2mu4_MSonly_EFFS_L1TE20;
   Bool_t          L2_2mu4_MSonly_EFFS_L1TE50;
   Bool_t          L2_2mu4_MSonly_EFFS_L1ZDC;
   Bool_t          L2_2mu6T_MSonly;
   Bool_t          L2_2mu6_MSonly;
   Bool_t          L2_L1ItemStreamer_L1_2EM3;
   Bool_t          L2_L1ItemStreamer_L1_2EM3_NL;
   Bool_t          L2_L1ItemStreamer_L1_2EM3_NZ;
   Bool_t          L2_L1ItemStreamer_L1_2EM5;
   Bool_t          L2_L1ItemStreamer_L1_2MU0;
   Bool_t          L2_L1ItemStreamer_L1_2MU0_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_2MU0_MU6;
   Bool_t          L2_L1ItemStreamer_L1_2MU0_MV;
   Bool_t          L2_L1ItemStreamer_L1_2MU0_NL;
   Bool_t          L2_L1ItemStreamer_L1_2MU0_NZ;
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
   Bool_t          L2_L1ItemStreamer_L1_EM3_NL;
   Bool_t          L2_L1ItemStreamer_L1_EM3_NZ;
   Bool_t          L2_L1ItemStreamer_L1_EM3_TE50;
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
   Bool_t          L2_L1ItemStreamer_L1_MU0_MV;
   Bool_t          L2_L1ItemStreamer_L1_MU0_MV_VTE50;
   Bool_t          L2_L1ItemStreamer_L1_MU0_NL;
   Bool_t          L2_L1ItemStreamer_L1_MU0_NZ;
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
   Bool_t          L2_e5_loose_L1VTE50;
   Bool_t          L2_em3_empty_larcalib;
   Bool_t          L2_em5_empty_larcalib;
   Bool_t          L2_g10_loose;
   Bool_t          L2_g5_NoCut_cosmic;
   Bool_t          L2_g5_loose;
   Bool_t          L2_g5_loose_EFFS_L1ZDC;
   Bool_t          L2_g5_loose_L1TE50;
   Bool_t          L2_g7_loose;
   Bool_t          L2_g9_etcut;
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
   Bool_t          L2_mu4T_cal;
   Bool_t          L2_mu4T_cosmic;
   Bool_t          L2_mu4_IDTrkNoCut;
   Bool_t          L2_mu4_L1VTE50;
   Bool_t          L2_mu4_MSonly;
   Bool_t          L2_mu4_MSonly_EFFS_L1MBTS;
   Bool_t          L2_mu4_MSonly_EFFS_L1MU0_NZ;
   Bool_t          L2_mu4_MSonly_EFFS_L1TE10;
   Bool_t          L2_mu4_MSonly_EFFS_L1TE20;
   Bool_t          L2_mu4_MSonly_EFFS_L1TE50;
   Bool_t          L2_mu4_MSonly_EFFS_L1TE5_NZ;
   Bool_t          L2_mu4_MSonly_EFFS_L1ZDC;
   Bool_t          L2_mu4_MSonly_EFFS_L1ZDC_OR;
   Bool_t          L2_mu4_MSonly_L1TE50;
   Bool_t          L2_mu4_MSonly_barrel;
   Bool_t          L2_mu4_MSonly_barrel_EFFS_L1ZDC;
   Bool_t          L2_mu4_MSonly_barrel_L1TE50;
   Bool_t          L2_mu4_MSonly_cosmic;
   Bool_t          L2_mu4_barrel_L1VTE50;
   Bool_t          L2_mu4_cal_empty;
   Bool_t          L2_mu4_cosmic;
   Bool_t          L2_mu4_loose;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1TE10;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1TE20;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1TE50;
   Bool_t          L2_mu4_mu2_MSonly_EFFS_L1ZDC;
   Bool_t          L2_mu6;
   Bool_t          L2_mu6T;
   Bool_t          L2_mu6T_IDTrkNoCut;
   Bool_t          L2_mu6T_MSonly;
   Bool_t          L2_mu6_IDTrkNoCut;
   Bool_t          L2_mu6_L1VTE50;
   Bool_t          L2_mu6_MSonly;
   Bool_t          L2_mu6_MSonly_L1TE50;
   Bool_t          L2_mu6_cal;
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
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MU6;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MV;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NL;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NZ;
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
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NL;
   vector<int>     *trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NZ;
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
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MU0_NZ;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE5_NZ;
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
   vector<int>     *trig_EF_trigmuonef_EF_mu4_loose;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC;
   vector<int>     *trig_EF_trigmuonef_EF_mu6;
   vector<int>     *trig_EF_trigmuonef_EF_mu6T;
   vector<int>     *trig_EF_trigmuonef_EF_mu6T_IDTrkNoCut;
   vector<int>     *trig_EF_trigmuonef_EF_mu6T_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_IDTrkNoCut;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_L1VTE50;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_MSonly;
   vector<int>     *trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50;
   vector<int>     *trig_L2_jet_L2_fj10_empty_larcalib;
   vector<int>     *trig_L2_jet_L2_fj20_Ecorr;
   vector<int>     *trig_L2_jet_L2_fj20_Ecorr_larcalib;
   vector<int>     *trig_L2_jet_L2_fj25_larcalib;
   vector<int>     *trig_L2_jet_L2_j10_empty_larcalib;
   vector<int>     *trig_L2_jet_L2_j15_Ecorr;
   vector<int>     *trig_L2_jet_L2_j15_Ecorr_larcalib;
   vector<int>     *trig_L2_jet_L2_j200_larcalib;
   vector<int>     *trig_L2_jet_L2_j20_Ecorr;
   vector<int>     *trig_L2_jet_L2_j20_Ecorr_larcalib;
   vector<int>     *trig_L2_jet_L2_j25_larcalib;
   vector<int>     *trig_L2_jet_L2_j50_larcalib;
   vector<int>     *trig_L2_jet_L2_j95_larcalib;
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
   UInt_t          mc_channel_number;
   UInt_t          mc_event_number;
   Float_t         mc_event_weight;
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
   vector<float>   *trk_pt;
   vector<float>   *trk_eta;
   vector<float>   *trk_d0_wrtPV;
   vector<float>   *trk_z0_wrtPV;
   vector<float>   *trk_phi_wrtPV;
   vector<float>   *trk_theta_wrtPV;
   vector<float>   *trk_qoverp_wrtPV;
   vector<float>   *trk_cov_d0_wrtPV;
   vector<float>   *trk_cov_z0_wrtPV;
   vector<float>   *trk_cov_phi_wrtPV;
   vector<float>   *trk_cov_theta_wrtPV;
   vector<float>   *trk_cov_qoverp_wrtPV;
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
   vector<float>   *trk_chi2;
   vector<int>     *trk_ndof;
   vector<int>     *trk_nBLHits;
   vector<int>     *trk_nPixHits;
   vector<int>     *trk_nSCTHits;
   vector<int>     *trk_nTRTHits;
   vector<int>     *trk_nTRTHighTHits;
   vector<int>     *trk_nPixHoles;
   vector<int>     *trk_nSCTHoles;
   vector<int>     *trk_nTRTHoles;
   vector<int>     *trk_expectBLayerHit;
   vector<int>     *trk_nMDTHits;
   vector<int>     *trk_nCSCEtaHits;
   vector<int>     *trk_nCSCPhiHits;
   vector<int>     *trk_nRPCEtaHits;
   vector<int>     *trk_nRPCPhiHits;
   vector<int>     *trk_nTGCEtaHits;
   vector<int>     *trk_nTGCPhiHits;
   vector<int>     *trk_nHits;
   vector<int>     *trk_nHoles;
   vector<int>     *trk_hitPattern;
   vector<float>   *trk_TRTHighTHitsRatio;
   vector<float>   *trk_TRTHighTOutliersRatio;
   vector<int>     *trk_fitter;
   vector<int>     *trk_patternReco1;
   vector<int>     *trk_patternReco2;
   vector<int>     *trk_seedFinder;
   vector<float>   *trk_mc_probability;
   vector<int>     *trk_mc_barcode;
   vector<int>     *trk_mc_index;
   Int_t           trt_RDO_countRDOhitsInEvent;
   Int_t           trt_RDO_countBarrelhitsInEvent;
   Int_t           trt_RDO_countEndCaphitsInEvent;
   Int_t           trt_RDO_countEndCapAhitsInEvent;
   Int_t           trt_RDO_countEndCapChitsInEvent;
   Int_t           trt_RDO_countdeadstraws;
   vector<vector<float> > *ItrEMNoFRBkgrtower_CaloBkgrEt;
   vector<vector<float> > *ItrEMNoFRBkgrtower_CaloBkgrRMS;
   vector<vector<int> > *ItrEMNoFRBkgrtower_CaloBkgrCounts;
   vector<float>   *ItrEMNoFRBkgrtower_CaloBkgrEta;
   vector<vector<float> > *ItrEMNoFRBkgrlayer_CaloBkgrEt;
   vector<vector<float> > *ItrEMNoFRBkgrlayer_CaloBkgrRMS;
   vector<vector<int> > *ItrEMNoFRBkgrlayer_CaloBkgrCounts;
   vector<float>   *ItrEMNoFRBkgrlayer_CaloBkgrEta;
   Int_t           antikt2HINoItr_n;
   vector<float>   *antikt2HINoItr_E;
   vector<float>   *antikt2HINoItr_Et;
   vector<float>   *antikt2HINoItr_pt;
   vector<float>   *antikt2HINoItr_m;
   vector<float>   *antikt2HINoItr_eta;
   vector<float>   *antikt2HINoItr_phi;
   Int_t           antikt2HIItrNoFR_n;
   vector<float>   *antikt2HIItrNoFR_E;
   vector<float>   *antikt2HIItrNoFR_Et;
   vector<float>   *antikt2HIItrNoFR_pt;
   vector<float>   *antikt2HIItrNoFR_m;
   vector<float>   *antikt2HIItrNoFR_eta;
   vector<float>   *antikt2HIItrNoFR_phi;
   vector<float>   *antikt2HIItrNoFR_SubtractedEt;
   vector<float>   *antikt2HIItrNoFR_CryoCorr;
   vector<float>   *antikt2HIItrNoFR_NoFlow;
   vector<float>   *antikt2HIItrNoFR_UncalibEt;
   vector<float>   *antikt2HIItrNoFR_PassedFR;
   vector<int>     *antikt2HIItrNoFR_const_n;
   vector<vector<float> > *antikt2HIItrNoFR_const_et;
   vector<vector<float> > *antikt2HIItrNoFR_const_eta;
   vector<vector<float> > *antikt2HIItrNoFR_const_phi;
   vector<vector<float> > *antikt2HIItrNoFR_sampling_et;
   vector<vector<float> > *antikt2HIItrNoFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt2HIItrNoFR_bad_cell_n;
   vector<vector<float> > *antikt2HIItrNoFR_bad_cell_et;
   vector<vector<float> > *antikt2HIItrNoFR_bad_cell_area;
   vector<vector<int> > *antikt2HIItrNoFR_empty_cell_n;
   vector<vector<float> > *antikt2HIItrNoFR_empty_cell_et;
   vector<vector<float> > *antikt2HIItrNoFR_empty_cell_area;
   vector<vector<int> > *antikt2HIItrNoFR_total_cell_n;
   vector<vector<float> > *antikt2HIItrNoFR_total_cell_et;
   vector<vector<float> > *antikt2HIItrNoFR_total_cell_area;
   vector<float>   *antikt2HIItrNoFR_n90;
   vector<float>   *antikt2HIItrNoFR_fracSamplingMax;
   vector<float>   *antikt2HIItrNoFR_SamplingMax;
   vector<float>   *antikt2HIItrNoFR_n90constituents;
   vector<float>   *antikt2HIItrNoFR_Timing;
   vector<float>   *antikt2HIItrNoFR_LArQuality;
   vector<float>   *antikt2HIItrNoFR_HECQuality;
   vector<float>   *antikt2HIItrNoFR_TileQuality;
   Int_t           antikt4HIItrNoFR_n;
   vector<float>   *antikt4HIItrNoFR_E;
   vector<float>   *antikt4HIItrNoFR_Et;
   vector<float>   *antikt4HIItrNoFR_pt;
   vector<float>   *antikt4HIItrNoFR_m;
   vector<float>   *antikt4HIItrNoFR_eta;
   vector<float>   *antikt4HIItrNoFR_phi;
   vector<float>   *antikt4HIItrNoFR_SubtractedEt;
   vector<float>   *antikt4HIItrNoFR_CryoCorr;
   vector<float>   *antikt4HIItrNoFR_NoFlow;
   vector<float>   *antikt4HIItrNoFR_UncalibEt;
   vector<float>   *antikt4HIItrNoFR_PassedFR;
   vector<int>     *antikt4HIItrNoFR_const_n;
   vector<vector<float> > *antikt4HIItrNoFR_const_et;
   vector<vector<float> > *antikt4HIItrNoFR_const_eta;
   vector<vector<float> > *antikt4HIItrNoFR_const_phi;
   vector<vector<float> > *antikt4HIItrNoFR_sampling_et;
   vector<vector<float> > *antikt4HIItrNoFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt4HIItrNoFR_bad_cell_n;
   vector<vector<float> > *antikt4HIItrNoFR_bad_cell_et;
   vector<vector<float> > *antikt4HIItrNoFR_bad_cell_area;
   vector<vector<int> > *antikt4HIItrNoFR_empty_cell_n;
   vector<vector<float> > *antikt4HIItrNoFR_empty_cell_et;
   vector<vector<float> > *antikt4HIItrNoFR_empty_cell_area;
   vector<vector<int> > *antikt4HIItrNoFR_total_cell_n;
   vector<vector<float> > *antikt4HIItrNoFR_total_cell_et;
   vector<vector<float> > *antikt4HIItrNoFR_total_cell_area;
   vector<float>   *antikt4HIItrNoFR_n90;
   vector<float>   *antikt4HIItrNoFR_fracSamplingMax;
   vector<float>   *antikt4HIItrNoFR_SamplingMax;
   vector<float>   *antikt4HIItrNoFR_n90constituents;
   vector<float>   *antikt4HIItrNoFR_Timing;
   vector<float>   *antikt4HIItrNoFR_LArQuality;
   vector<float>   *antikt4HIItrNoFR_HECQuality;
   vector<float>   *antikt4HIItrNoFR_TileQuality;
   Int_t           EMClusterJets_n;
   vector<float>   *EMClusterJets_E;
   vector<float>   *EMClusterJets_Et;
   vector<float>   *EMClusterJets_pt;
   vector<float>   *EMClusterJets_m;
   vector<float>   *EMClusterJets_eta;
   vector<float>   *EMClusterJets_phi;
   Int_t           antikt2HIItrEM_n;
   vector<float>   *antikt2HIItrEM_E;
   vector<float>   *antikt2HIItrEM_Et;
   vector<float>   *antikt2HIItrEM_pt;
   vector<float>   *antikt2HIItrEM_m;
   vector<float>   *antikt2HIItrEM_eta;
   vector<float>   *antikt2HIItrEM_phi;
   vector<float>   *antikt2HIItrEM_SubtractedEt;
   vector<float>   *antikt2HIItrEM_CryoCorr;
   vector<float>   *antikt2HIItrEM_NoFlow;
   vector<float>   *antikt2HIItrEM_UncalibEt;
   vector<float>   *antikt2HIItrEM_PassedFR;
   vector<int>     *antikt2HIItrEM_const_n;
   vector<vector<float> > *antikt2HIItrEM_const_et;
   vector<vector<float> > *antikt2HIItrEM_const_eta;
   vector<vector<float> > *antikt2HIItrEM_const_phi;
   vector<vector<float> > *antikt2HIItrEM_sampling_et;
   vector<vector<float> > *antikt2HIItrEM_sampling_et_unsubtr;
   vector<vector<int> > *antikt2HIItrEM_bad_cell_n;
   vector<vector<float> > *antikt2HIItrEM_bad_cell_et;
   vector<vector<float> > *antikt2HIItrEM_bad_cell_area;
   vector<vector<int> > *antikt2HIItrEM_empty_cell_n;
   vector<vector<float> > *antikt2HIItrEM_empty_cell_et;
   vector<vector<float> > *antikt2HIItrEM_empty_cell_area;
   vector<vector<int> > *antikt2HIItrEM_total_cell_n;
   vector<vector<float> > *antikt2HIItrEM_total_cell_et;
   vector<vector<float> > *antikt2HIItrEM_total_cell_area;
   vector<float>   *antikt2HIItrEM_n90;
   vector<float>   *antikt2HIItrEM_fracSamplingMax;
   vector<float>   *antikt2HIItrEM_SamplingMax;
   vector<float>   *antikt2HIItrEM_n90constituents;
   vector<float>   *antikt2HIItrEM_Timing;
   vector<float>   *antikt2HIItrEM_LArQuality;
   vector<float>   *antikt2HIItrEM_HECQuality;
   vector<float>   *antikt2HIItrEM_TileQuality;
   Int_t           antikt2HIItrEMFR_n;
   vector<float>   *antikt2HIItrEMFR_E;
   vector<float>   *antikt2HIItrEMFR_Et;
   vector<float>   *antikt2HIItrEMFR_pt;
   vector<float>   *antikt2HIItrEMFR_m;
   vector<float>   *antikt2HIItrEMFR_eta;
   vector<float>   *antikt2HIItrEMFR_phi;
   vector<float>   *antikt2HIItrEMFR_SubtractedEt;
   vector<float>   *antikt2HIItrEMFR_CryoCorr;
   vector<float>   *antikt2HIItrEMFR_NoFlow;
   vector<float>   *antikt2HIItrEMFR_UncalibEt;
   vector<float>   *antikt2HIItrEMFR_PassedFR;
   vector<int>     *antikt2HIItrEMFR_const_n;
   vector<vector<float> > *antikt2HIItrEMFR_const_et;
   vector<vector<float> > *antikt2HIItrEMFR_const_eta;
   vector<vector<float> > *antikt2HIItrEMFR_const_phi;
   vector<vector<float> > *antikt2HIItrEMFR_sampling_et;
   vector<vector<float> > *antikt2HIItrEMFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt2HIItrEMFR_bad_cell_n;
   vector<vector<float> > *antikt2HIItrEMFR_bad_cell_et;
   vector<vector<float> > *antikt2HIItrEMFR_bad_cell_area;
   vector<vector<int> > *antikt2HIItrEMFR_empty_cell_n;
   vector<vector<float> > *antikt2HIItrEMFR_empty_cell_et;
   vector<vector<float> > *antikt2HIItrEMFR_empty_cell_area;
   vector<vector<int> > *antikt2HIItrEMFR_total_cell_n;
   vector<vector<float> > *antikt2HIItrEMFR_total_cell_et;
   vector<vector<float> > *antikt2HIItrEMFR_total_cell_area;
   vector<float>   *antikt2HIItrEMFR_n90;
   vector<float>   *antikt2HIItrEMFR_fracSamplingMax;
   vector<float>   *antikt2HIItrEMFR_SamplingMax;
   vector<float>   *antikt2HIItrEMFR_n90constituents;
   vector<float>   *antikt2HIItrEMFR_Timing;
   vector<float>   *antikt2HIItrEMFR_LArQuality;
   vector<float>   *antikt2HIItrEMFR_HECQuality;
   vector<float>   *antikt2HIItrEMFR_TileQuality;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_Comb;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_IP2D;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_IP3D;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_SV0;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_SV1;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_SV2;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_JetProb;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_SoftMuonTag;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_JetFitterTagNN;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_JetFitterCOMBNN;
   vector<float>   *antikt2HIItrEMFR_flavor_weight_GbbNN;
   vector<int>     *antikt2HIItrEMFR_flavor_truth_label;
   vector<float>   *antikt2HIItrEMFR_flavor_truth_dRminToB;
   vector<float>   *antikt2HIItrEMFR_flavor_truth_dRminToC;
   vector<float>   *antikt2HIItrEMFR_flavor_truth_dRminToT;
   vector<int>     *antikt2HIItrEMFR_flavor_truth_BHadronpdg;
   vector<float>   *antikt2HIItrEMFR_flavor_truth_vx_x;
   vector<float>   *antikt2HIItrEMFR_flavor_truth_vx_y;
   vector<float>   *antikt2HIItrEMFR_flavor_truth_vx_z;
   vector<vector<int> > *antikt2HIItrEMFR_flavor_component_assoctrk_signOfIP;
   vector<vector<int> > *antikt2HIItrEMFR_flavor_component_assoctrk_signOfZIP;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx;
   vector<vector<short> > *antikt2HIItrEMFR_flavor_component_gentruthlepton_origin;
   vector<vector<int> > *antikt2HIItrEMFR_flavor_component_gentruthlepton_slbarcode;
   vector<float>   *antikt2HIItrEMFR_flavor_component_ip2d_pu;
   vector<float>   *antikt2HIItrEMFR_flavor_component_ip2d_pb;
   vector<int>     *antikt2HIItrEMFR_flavor_component_ip2d_isValid;
   vector<int>     *antikt2HIItrEMFR_flavor_component_ip2d_ntrk;
   vector<float>   *antikt2HIItrEMFR_flavor_component_ip3d_pu;
   vector<float>   *antikt2HIItrEMFR_flavor_component_ip3d_pb;
   vector<int>     *antikt2HIItrEMFR_flavor_component_ip3d_isValid;
   vector<int>     *antikt2HIItrEMFR_flavor_component_ip3d_ntrk;
   vector<int>     *antikt2HIItrEMFR_flavor_component_jetprob_ntrk;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv1_pu;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv1_pb;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv1_isValid;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv2_pu;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv2_pb;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv2_isValid;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_pu;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_pb;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_pc;
   vector<int>     *antikt2HIItrEMFR_flavor_component_jfit_isValid;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfitcomb_pu;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfitcomb_pb;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfitcomb_pc;
   vector<int>     *antikt2HIItrEMFR_flavor_component_jfitcomb_isValid;
   vector<int>     *antikt2HIItrEMFR_flavor_component_gbbnn_nMatchingTracks;
   vector<double>  *antikt2HIItrEMFR_flavor_component_gbbnn_trkJetWidth;
   vector<double>  *antikt2HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR;
   vector<int>     *antikt2HIItrEMFR_flavor_component_jfit_nvtx;
   vector<int>     *antikt2HIItrEMFR_flavor_component_jfit_nvtx1t;
   vector<int>     *antikt2HIItrEMFR_flavor_component_jfit_ntrkAtVx;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_efrc;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_mass;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_sig3d;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_deltaPhi;
   vector<float>   *antikt2HIItrEMFR_flavor_component_jfit_deltaEta;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_d0val;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_d0sig;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_z0val;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_z0sig;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_w2D;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_w3D;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_pJP;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_pJPneg;
   vector<vector<int> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_grade;
   vector<vector<int> > *antikt2HIItrEMFR_flavor_component_ipplus_trk_isFromV0;
   vector<int>     *antikt2HIItrEMFR_flavor_component_svp_isValid;
   vector<int>     *antikt2HIItrEMFR_flavor_component_svp_ntrkv;
   vector<int>     *antikt2HIItrEMFR_flavor_component_svp_ntrkj;
   vector<int>     *antikt2HIItrEMFR_flavor_component_svp_n2t;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_mass;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_efrc;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_x;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_y;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_z;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_err_x;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_err_y;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_err_z;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_cov_xy;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_cov_xz;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_cov_yz;
   vector<float>   *antikt2HIItrEMFR_flavor_component_svp_chi2;
   vector<int>     *antikt2HIItrEMFR_flavor_component_svp_ndof;
   vector<int>     *antikt2HIItrEMFR_flavor_component_svp_ntrk;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv0p_isValid;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv0p_ntrkv;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv0p_ntrkj;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv0p_n2t;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_mass;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_efrc;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_x;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_y;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_z;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_err_x;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_err_y;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_err_z;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_cov_xy;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_cov_xz;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_cov_yz;
   vector<float>   *antikt2HIItrEMFR_flavor_component_sv0p_chi2;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv0p_ndof;
   vector<int>     *antikt2HIItrEMFR_flavor_component_sv0p_ntrk;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_w;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel;
   vector<vector<float> > *antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet;
   vector<int>     *antikt2HIItrEMFR_flavor_component_msvp_isValid;
   vector<int>     *antikt2HIItrEMFR_flavor_component_msvp_ntrkv;
   vector<int>     *antikt2HIItrEMFR_flavor_component_msvp_ntrkj;
   vector<int>     *antikt2HIItrEMFR_flavor_component_msvp_n2t;
   vector<int>     *antikt2HIItrEMFR_flavor_component_msvp_nVtx;
   vector<float>   *antikt2HIItrEMFR_flavor_component_msvp_normWeightedDist;
   Int_t           antikt3HIItrEM_n;
   vector<float>   *antikt3HIItrEM_E;
   vector<float>   *antikt3HIItrEM_Et;
   vector<float>   *antikt3HIItrEM_pt;
   vector<float>   *antikt3HIItrEM_m;
   vector<float>   *antikt3HIItrEM_eta;
   vector<float>   *antikt3HIItrEM_phi;
   vector<float>   *antikt3HIItrEM_SubtractedEt;
   vector<float>   *antikt3HIItrEM_CryoCorr;
   vector<float>   *antikt3HIItrEM_NoFlow;
   vector<float>   *antikt3HIItrEM_UncalibEt;
   vector<float>   *antikt3HIItrEM_PassedFR;
   vector<int>     *antikt3HIItrEM_const_n;
   vector<vector<float> > *antikt3HIItrEM_const_et;
   vector<vector<float> > *antikt3HIItrEM_const_eta;
   vector<vector<float> > *antikt3HIItrEM_const_phi;
   vector<vector<float> > *antikt3HIItrEM_sampling_et;
   vector<vector<float> > *antikt3HIItrEM_sampling_et_unsubtr;
   vector<vector<int> > *antikt3HIItrEM_bad_cell_n;
   vector<vector<float> > *antikt3HIItrEM_bad_cell_et;
   vector<vector<float> > *antikt3HIItrEM_bad_cell_area;
   vector<vector<int> > *antikt3HIItrEM_empty_cell_n;
   vector<vector<float> > *antikt3HIItrEM_empty_cell_et;
   vector<vector<float> > *antikt3HIItrEM_empty_cell_area;
   vector<vector<int> > *antikt3HIItrEM_total_cell_n;
   vector<vector<float> > *antikt3HIItrEM_total_cell_et;
   vector<vector<float> > *antikt3HIItrEM_total_cell_area;
   vector<float>   *antikt3HIItrEM_n90;
   vector<float>   *antikt3HIItrEM_fracSamplingMax;
   vector<float>   *antikt3HIItrEM_SamplingMax;
   vector<float>   *antikt3HIItrEM_n90constituents;
   vector<float>   *antikt3HIItrEM_Timing;
   vector<float>   *antikt3HIItrEM_LArQuality;
   vector<float>   *antikt3HIItrEM_HECQuality;
   vector<float>   *antikt3HIItrEM_TileQuality;
   Int_t           antikt3HIItrEMFR_n;
   vector<float>   *antikt3HIItrEMFR_E;
   vector<float>   *antikt3HIItrEMFR_Et;
   vector<float>   *antikt3HIItrEMFR_pt;
   vector<float>   *antikt3HIItrEMFR_m;
   vector<float>   *antikt3HIItrEMFR_eta;
   vector<float>   *antikt3HIItrEMFR_phi;
   vector<float>   *antikt3HIItrEMFR_SubtractedEt;
   vector<float>   *antikt3HIItrEMFR_CryoCorr;
   vector<float>   *antikt3HIItrEMFR_NoFlow;
   vector<float>   *antikt3HIItrEMFR_UncalibEt;
   vector<float>   *antikt3HIItrEMFR_PassedFR;
   vector<int>     *antikt3HIItrEMFR_const_n;
   vector<vector<float> > *antikt3HIItrEMFR_const_et;
   vector<vector<float> > *antikt3HIItrEMFR_const_eta;
   vector<vector<float> > *antikt3HIItrEMFR_const_phi;
   vector<vector<float> > *antikt3HIItrEMFR_sampling_et;
   vector<vector<float> > *antikt3HIItrEMFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt3HIItrEMFR_bad_cell_n;
   vector<vector<float> > *antikt3HIItrEMFR_bad_cell_et;
   vector<vector<float> > *antikt3HIItrEMFR_bad_cell_area;
   vector<vector<int> > *antikt3HIItrEMFR_empty_cell_n;
   vector<vector<float> > *antikt3HIItrEMFR_empty_cell_et;
   vector<vector<float> > *antikt3HIItrEMFR_empty_cell_area;
   vector<vector<int> > *antikt3HIItrEMFR_total_cell_n;
   vector<vector<float> > *antikt3HIItrEMFR_total_cell_et;
   vector<vector<float> > *antikt3HIItrEMFR_total_cell_area;
   vector<float>   *antikt3HIItrEMFR_n90;
   vector<float>   *antikt3HIItrEMFR_fracSamplingMax;
   vector<float>   *antikt3HIItrEMFR_SamplingMax;
   vector<float>   *antikt3HIItrEMFR_n90constituents;
   vector<float>   *antikt3HIItrEMFR_Timing;
   vector<float>   *antikt3HIItrEMFR_LArQuality;
   vector<float>   *antikt3HIItrEMFR_HECQuality;
   vector<float>   *antikt3HIItrEMFR_TileQuality;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_Comb;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_IP2D;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_IP3D;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_SV0;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_SV1;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_SV2;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_JetProb;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_SoftMuonTag;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_JetFitterTagNN;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_JetFitterCOMBNN;
   vector<float>   *antikt3HIItrEMFR_flavor_weight_GbbNN;
   vector<int>     *antikt3HIItrEMFR_flavor_truth_label;
   vector<float>   *antikt3HIItrEMFR_flavor_truth_dRminToB;
   vector<float>   *antikt3HIItrEMFR_flavor_truth_dRminToC;
   vector<float>   *antikt3HIItrEMFR_flavor_truth_dRminToT;
   vector<int>     *antikt3HIItrEMFR_flavor_truth_BHadronpdg;
   vector<float>   *antikt3HIItrEMFR_flavor_truth_vx_x;
   vector<float>   *antikt3HIItrEMFR_flavor_truth_vx_y;
   vector<float>   *antikt3HIItrEMFR_flavor_truth_vx_z;
   vector<vector<int> > *antikt3HIItrEMFR_flavor_component_assoctrk_signOfIP;
   vector<vector<int> > *antikt3HIItrEMFR_flavor_component_assoctrk_signOfZIP;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx;
   vector<vector<short> > *antikt3HIItrEMFR_flavor_component_gentruthlepton_origin;
   vector<vector<int> > *antikt3HIItrEMFR_flavor_component_gentruthlepton_slbarcode;
   vector<float>   *antikt3HIItrEMFR_flavor_component_ip2d_pu;
   vector<float>   *antikt3HIItrEMFR_flavor_component_ip2d_pb;
   vector<int>     *antikt3HIItrEMFR_flavor_component_ip2d_isValid;
   vector<int>     *antikt3HIItrEMFR_flavor_component_ip2d_ntrk;
   vector<float>   *antikt3HIItrEMFR_flavor_component_ip3d_pu;
   vector<float>   *antikt3HIItrEMFR_flavor_component_ip3d_pb;
   vector<int>     *antikt3HIItrEMFR_flavor_component_ip3d_isValid;
   vector<int>     *antikt3HIItrEMFR_flavor_component_ip3d_ntrk;
   vector<int>     *antikt3HIItrEMFR_flavor_component_jetprob_ntrk;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv1_pu;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv1_pb;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv1_isValid;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv2_pu;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv2_pb;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv2_isValid;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_pu;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_pb;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_pc;
   vector<int>     *antikt3HIItrEMFR_flavor_component_jfit_isValid;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfitcomb_pu;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfitcomb_pb;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfitcomb_pc;
   vector<int>     *antikt3HIItrEMFR_flavor_component_jfitcomb_isValid;
   vector<int>     *antikt3HIItrEMFR_flavor_component_gbbnn_nMatchingTracks;
   vector<double>  *antikt3HIItrEMFR_flavor_component_gbbnn_trkJetWidth;
   vector<double>  *antikt3HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR;
   vector<int>     *antikt3HIItrEMFR_flavor_component_jfit_nvtx;
   vector<int>     *antikt3HIItrEMFR_flavor_component_jfit_nvtx1t;
   vector<int>     *antikt3HIItrEMFR_flavor_component_jfit_ntrkAtVx;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_efrc;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_mass;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_sig3d;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_deltaPhi;
   vector<float>   *antikt3HIItrEMFR_flavor_component_jfit_deltaEta;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_d0val;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_d0sig;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_z0val;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_z0sig;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_w2D;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_w3D;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_pJP;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_pJPneg;
   vector<vector<int> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_grade;
   vector<vector<int> > *antikt3HIItrEMFR_flavor_component_ipplus_trk_isFromV0;
   vector<int>     *antikt3HIItrEMFR_flavor_component_svp_isValid;
   vector<int>     *antikt3HIItrEMFR_flavor_component_svp_ntrkv;
   vector<int>     *antikt3HIItrEMFR_flavor_component_svp_ntrkj;
   vector<int>     *antikt3HIItrEMFR_flavor_component_svp_n2t;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_mass;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_efrc;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_x;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_y;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_z;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_err_x;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_err_y;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_err_z;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_cov_xy;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_cov_xz;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_cov_yz;
   vector<float>   *antikt3HIItrEMFR_flavor_component_svp_chi2;
   vector<int>     *antikt3HIItrEMFR_flavor_component_svp_ndof;
   vector<int>     *antikt3HIItrEMFR_flavor_component_svp_ntrk;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv0p_isValid;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv0p_ntrkv;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv0p_ntrkj;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv0p_n2t;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_mass;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_efrc;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_x;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_y;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_z;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_err_x;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_err_y;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_err_z;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_cov_xy;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_cov_xz;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_cov_yz;
   vector<float>   *antikt3HIItrEMFR_flavor_component_sv0p_chi2;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv0p_ndof;
   vector<int>     *antikt3HIItrEMFR_flavor_component_sv0p_ntrk;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_w;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel;
   vector<vector<float> > *antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet;
   vector<int>     *antikt3HIItrEMFR_flavor_component_msvp_isValid;
   vector<int>     *antikt3HIItrEMFR_flavor_component_msvp_ntrkv;
   vector<int>     *antikt3HIItrEMFR_flavor_component_msvp_ntrkj;
   vector<int>     *antikt3HIItrEMFR_flavor_component_msvp_n2t;
   vector<int>     *antikt3HIItrEMFR_flavor_component_msvp_nVtx;
   vector<float>   *antikt3HIItrEMFR_flavor_component_msvp_normWeightedDist;
   Int_t           antikt4HIItrEM_n;
   vector<float>   *antikt4HIItrEM_E;
   vector<float>   *antikt4HIItrEM_Et;
   vector<float>   *antikt4HIItrEM_pt;
   vector<float>   *antikt4HIItrEM_m;
   vector<float>   *antikt4HIItrEM_eta;
   vector<float>   *antikt4HIItrEM_phi;
   vector<float>   *antikt4HIItrEM_SubtractedEt;
   vector<float>   *antikt4HIItrEM_CryoCorr;
   vector<float>   *antikt4HIItrEM_NoFlow;
   vector<float>   *antikt4HIItrEM_UncalibEt;
   vector<float>   *antikt4HIItrEM_PassedFR;
   vector<int>     *antikt4HIItrEM_const_n;
   vector<vector<float> > *antikt4HIItrEM_const_et;
   vector<vector<float> > *antikt4HIItrEM_const_eta;
   vector<vector<float> > *antikt4HIItrEM_const_phi;
   vector<vector<float> > *antikt4HIItrEM_sampling_et;
   vector<vector<float> > *antikt4HIItrEM_sampling_et_unsubtr;
   vector<vector<int> > *antikt4HIItrEM_bad_cell_n;
   vector<vector<float> > *antikt4HIItrEM_bad_cell_et;
   vector<vector<float> > *antikt4HIItrEM_bad_cell_area;
   vector<vector<int> > *antikt4HIItrEM_empty_cell_n;
   vector<vector<float> > *antikt4HIItrEM_empty_cell_et;
   vector<vector<float> > *antikt4HIItrEM_empty_cell_area;
   vector<vector<int> > *antikt4HIItrEM_total_cell_n;
   vector<vector<float> > *antikt4HIItrEM_total_cell_et;
   vector<vector<float> > *antikt4HIItrEM_total_cell_area;
   vector<float>   *antikt4HIItrEM_n90;
   vector<float>   *antikt4HIItrEM_fracSamplingMax;
   vector<float>   *antikt4HIItrEM_SamplingMax;
   vector<float>   *antikt4HIItrEM_n90constituents;
   vector<float>   *antikt4HIItrEM_Timing;
   vector<float>   *antikt4HIItrEM_LArQuality;
   vector<float>   *antikt4HIItrEM_HECQuality;
   vector<float>   *antikt4HIItrEM_TileQuality;
   Int_t           antikt4HIItrEMFR_n;
   vector<float>   *antikt4HIItrEMFR_E;
   vector<float>   *antikt4HIItrEMFR_Et;
   vector<float>   *antikt4HIItrEMFR_pt;
   vector<float>   *antikt4HIItrEMFR_m;
   vector<float>   *antikt4HIItrEMFR_eta;
   vector<float>   *antikt4HIItrEMFR_phi;
   vector<float>   *antikt4HIItrEMFR_SubtractedEt;
   vector<float>   *antikt4HIItrEMFR_CryoCorr;
   vector<float>   *antikt4HIItrEMFR_NoFlow;
   vector<float>   *antikt4HIItrEMFR_UncalibEt;
   vector<float>   *antikt4HIItrEMFR_PassedFR;
   vector<int>     *antikt4HIItrEMFR_const_n;
   vector<vector<float> > *antikt4HIItrEMFR_const_et;
   vector<vector<float> > *antikt4HIItrEMFR_const_eta;
   vector<vector<float> > *antikt4HIItrEMFR_const_phi;
   vector<vector<float> > *antikt4HIItrEMFR_sampling_et;
   vector<vector<float> > *antikt4HIItrEMFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt4HIItrEMFR_bad_cell_n;
   vector<vector<float> > *antikt4HIItrEMFR_bad_cell_et;
   vector<vector<float> > *antikt4HIItrEMFR_bad_cell_area;
   vector<vector<int> > *antikt4HIItrEMFR_empty_cell_n;
   vector<vector<float> > *antikt4HIItrEMFR_empty_cell_et;
   vector<vector<float> > *antikt4HIItrEMFR_empty_cell_area;
   vector<vector<int> > *antikt4HIItrEMFR_total_cell_n;
   vector<vector<float> > *antikt4HIItrEMFR_total_cell_et;
   vector<vector<float> > *antikt4HIItrEMFR_total_cell_area;
   vector<float>   *antikt4HIItrEMFR_n90;
   vector<float>   *antikt4HIItrEMFR_fracSamplingMax;
   vector<float>   *antikt4HIItrEMFR_SamplingMax;
   vector<float>   *antikt4HIItrEMFR_n90constituents;
   vector<float>   *antikt4HIItrEMFR_Timing;
   vector<float>   *antikt4HIItrEMFR_LArQuality;
   vector<float>   *antikt4HIItrEMFR_HECQuality;
   vector<float>   *antikt4HIItrEMFR_TileQuality;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_Comb;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_IP2D;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_IP3D;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_SV0;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_SV1;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_SV2;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_JetProb;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_SoftMuonTag;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_JetFitterTagNN;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_JetFitterCOMBNN;
   vector<float>   *antikt4HIItrEMFR_flavor_weight_GbbNN;
   vector<int>     *antikt4HIItrEMFR_flavor_truth_label;
   vector<float>   *antikt4HIItrEMFR_flavor_truth_dRminToB;
   vector<float>   *antikt4HIItrEMFR_flavor_truth_dRminToC;
   vector<float>   *antikt4HIItrEMFR_flavor_truth_dRminToT;
   vector<int>     *antikt4HIItrEMFR_flavor_truth_BHadronpdg;
   vector<float>   *antikt4HIItrEMFR_flavor_truth_vx_x;
   vector<float>   *antikt4HIItrEMFR_flavor_truth_vx_y;
   vector<float>   *antikt4HIItrEMFR_flavor_truth_vx_z;
   vector<vector<int> > *antikt4HIItrEMFR_flavor_component_assoctrk_signOfIP;
   vector<vector<int> > *antikt4HIItrEMFR_flavor_component_assoctrk_signOfZIP;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx;
   vector<vector<short> > *antikt4HIItrEMFR_flavor_component_gentruthlepton_origin;
   vector<vector<int> > *antikt4HIItrEMFR_flavor_component_gentruthlepton_slbarcode;
   vector<float>   *antikt4HIItrEMFR_flavor_component_ip2d_pu;
   vector<float>   *antikt4HIItrEMFR_flavor_component_ip2d_pb;
   vector<int>     *antikt4HIItrEMFR_flavor_component_ip2d_isValid;
   vector<int>     *antikt4HIItrEMFR_flavor_component_ip2d_ntrk;
   vector<float>   *antikt4HIItrEMFR_flavor_component_ip3d_pu;
   vector<float>   *antikt4HIItrEMFR_flavor_component_ip3d_pb;
   vector<int>     *antikt4HIItrEMFR_flavor_component_ip3d_isValid;
   vector<int>     *antikt4HIItrEMFR_flavor_component_ip3d_ntrk;
   vector<int>     *antikt4HIItrEMFR_flavor_component_jetprob_ntrk;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv1_pu;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv1_pb;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv1_isValid;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv2_pu;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv2_pb;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv2_isValid;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_pu;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_pb;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_pc;
   vector<int>     *antikt4HIItrEMFR_flavor_component_jfit_isValid;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfitcomb_pu;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfitcomb_pb;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfitcomb_pc;
   vector<int>     *antikt4HIItrEMFR_flavor_component_jfitcomb_isValid;
   vector<int>     *antikt4HIItrEMFR_flavor_component_gbbnn_nMatchingTracks;
   vector<double>  *antikt4HIItrEMFR_flavor_component_gbbnn_trkJetWidth;
   vector<double>  *antikt4HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR;
   vector<int>     *antikt4HIItrEMFR_flavor_component_jfit_nvtx;
   vector<int>     *antikt4HIItrEMFR_flavor_component_jfit_nvtx1t;
   vector<int>     *antikt4HIItrEMFR_flavor_component_jfit_ntrkAtVx;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_efrc;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_mass;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_sig3d;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_deltaPhi;
   vector<float>   *antikt4HIItrEMFR_flavor_component_jfit_deltaEta;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_d0val;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_d0sig;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_z0val;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_z0sig;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_w2D;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_w3D;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_pJP;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_pJPneg;
   vector<vector<int> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_grade;
   vector<vector<int> > *antikt4HIItrEMFR_flavor_component_ipplus_trk_isFromV0;
   vector<int>     *antikt4HIItrEMFR_flavor_component_svp_isValid;
   vector<int>     *antikt4HIItrEMFR_flavor_component_svp_ntrkv;
   vector<int>     *antikt4HIItrEMFR_flavor_component_svp_ntrkj;
   vector<int>     *antikt4HIItrEMFR_flavor_component_svp_n2t;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_mass;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_efrc;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_x;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_y;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_z;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_err_x;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_err_y;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_err_z;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_cov_xy;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_cov_xz;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_cov_yz;
   vector<float>   *antikt4HIItrEMFR_flavor_component_svp_chi2;
   vector<int>     *antikt4HIItrEMFR_flavor_component_svp_ndof;
   vector<int>     *antikt4HIItrEMFR_flavor_component_svp_ntrk;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv0p_isValid;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv0p_ntrkv;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv0p_ntrkj;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv0p_n2t;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_mass;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_efrc;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_x;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_y;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_z;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_err_x;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_err_y;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_err_z;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_cov_xy;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_cov_xz;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_cov_yz;
   vector<float>   *antikt4HIItrEMFR_flavor_component_sv0p_chi2;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv0p_ndof;
   vector<int>     *antikt4HIItrEMFR_flavor_component_sv0p_ntrk;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_w;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel;
   vector<vector<float> > *antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet;
   vector<int>     *antikt4HIItrEMFR_flavor_component_msvp_isValid;
   vector<int>     *antikt4HIItrEMFR_flavor_component_msvp_ntrkv;
   vector<int>     *antikt4HIItrEMFR_flavor_component_msvp_ntrkj;
   vector<int>     *antikt4HIItrEMFR_flavor_component_msvp_n2t;
   vector<int>     *antikt4HIItrEMFR_flavor_component_msvp_nVtx;
   vector<float>   *antikt4HIItrEMFR_flavor_component_msvp_normWeightedDist;
   Int_t           antikt5HIItrEM_n;
   vector<float>   *antikt5HIItrEM_E;
   vector<float>   *antikt5HIItrEM_Et;
   vector<float>   *antikt5HIItrEM_pt;
   vector<float>   *antikt5HIItrEM_m;
   vector<float>   *antikt5HIItrEM_eta;
   vector<float>   *antikt5HIItrEM_phi;
   vector<float>   *antikt5HIItrEM_SubtractedEt;
   vector<float>   *antikt5HIItrEM_CryoCorr;
   vector<float>   *antikt5HIItrEM_NoFlow;
   vector<float>   *antikt5HIItrEM_UncalibEt;
   vector<float>   *antikt5HIItrEM_PassedFR;
   vector<int>     *antikt5HIItrEM_const_n;
   vector<vector<float> > *antikt5HIItrEM_const_et;
   vector<vector<float> > *antikt5HIItrEM_const_eta;
   vector<vector<float> > *antikt5HIItrEM_const_phi;
   vector<vector<float> > *antikt5HIItrEM_sampling_et;
   vector<vector<float> > *antikt5HIItrEM_sampling_et_unsubtr;
   vector<vector<int> > *antikt5HIItrEM_bad_cell_n;
   vector<vector<float> > *antikt5HIItrEM_bad_cell_et;
   vector<vector<float> > *antikt5HIItrEM_bad_cell_area;
   vector<vector<int> > *antikt5HIItrEM_empty_cell_n;
   vector<vector<float> > *antikt5HIItrEM_empty_cell_et;
   vector<vector<float> > *antikt5HIItrEM_empty_cell_area;
   vector<vector<int> > *antikt5HIItrEM_total_cell_n;
   vector<vector<float> > *antikt5HIItrEM_total_cell_et;
   vector<vector<float> > *antikt5HIItrEM_total_cell_area;
   vector<float>   *antikt5HIItrEM_n90;
   vector<float>   *antikt5HIItrEM_fracSamplingMax;
   vector<float>   *antikt5HIItrEM_SamplingMax;
   vector<float>   *antikt5HIItrEM_n90constituents;
   vector<float>   *antikt5HIItrEM_Timing;
   vector<float>   *antikt5HIItrEM_LArQuality;
   vector<float>   *antikt5HIItrEM_HECQuality;
   vector<float>   *antikt5HIItrEM_TileQuality;
   Int_t           antikt5HIItrEMFR_n;
   vector<float>   *antikt5HIItrEMFR_E;
   vector<float>   *antikt5HIItrEMFR_Et;
   vector<float>   *antikt5HIItrEMFR_pt;
   vector<float>   *antikt5HIItrEMFR_m;
   vector<float>   *antikt5HIItrEMFR_eta;
   vector<float>   *antikt5HIItrEMFR_phi;
   vector<float>   *antikt5HIItrEMFR_SubtractedEt;
   vector<float>   *antikt5HIItrEMFR_CryoCorr;
   vector<float>   *antikt5HIItrEMFR_NoFlow;
   vector<float>   *antikt5HIItrEMFR_UncalibEt;
   vector<float>   *antikt5HIItrEMFR_PassedFR;
   vector<int>     *antikt5HIItrEMFR_const_n;
   vector<vector<float> > *antikt5HIItrEMFR_const_et;
   vector<vector<float> > *antikt5HIItrEMFR_const_eta;
   vector<vector<float> > *antikt5HIItrEMFR_const_phi;
   vector<vector<float> > *antikt5HIItrEMFR_sampling_et;
   vector<vector<float> > *antikt5HIItrEMFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt5HIItrEMFR_bad_cell_n;
   vector<vector<float> > *antikt5HIItrEMFR_bad_cell_et;
   vector<vector<float> > *antikt5HIItrEMFR_bad_cell_area;
   vector<vector<int> > *antikt5HIItrEMFR_empty_cell_n;
   vector<vector<float> > *antikt5HIItrEMFR_empty_cell_et;
   vector<vector<float> > *antikt5HIItrEMFR_empty_cell_area;
   vector<vector<int> > *antikt5HIItrEMFR_total_cell_n;
   vector<vector<float> > *antikt5HIItrEMFR_total_cell_et;
   vector<vector<float> > *antikt5HIItrEMFR_total_cell_area;
   vector<float>   *antikt5HIItrEMFR_n90;
   vector<float>   *antikt5HIItrEMFR_fracSamplingMax;
   vector<float>   *antikt5HIItrEMFR_SamplingMax;
   vector<float>   *antikt5HIItrEMFR_n90constituents;
   vector<float>   *antikt5HIItrEMFR_Timing;
   vector<float>   *antikt5HIItrEMFR_LArQuality;
   vector<float>   *antikt5HIItrEMFR_HECQuality;
   vector<float>   *antikt5HIItrEMFR_TileQuality;
   Int_t           antikt6HIItrEM_n;
   vector<float>   *antikt6HIItrEM_E;
   vector<float>   *antikt6HIItrEM_Et;
   vector<float>   *antikt6HIItrEM_pt;
   vector<float>   *antikt6HIItrEM_m;
   vector<float>   *antikt6HIItrEM_eta;
   vector<float>   *antikt6HIItrEM_phi;
   vector<float>   *antikt6HIItrEM_SubtractedEt;
   vector<float>   *antikt6HIItrEM_CryoCorr;
   vector<float>   *antikt6HIItrEM_NoFlow;
   vector<float>   *antikt6HIItrEM_UncalibEt;
   vector<float>   *antikt6HIItrEM_PassedFR;
   vector<int>     *antikt6HIItrEM_const_n;
   vector<vector<float> > *antikt6HIItrEM_const_et;
   vector<vector<float> > *antikt6HIItrEM_const_eta;
   vector<vector<float> > *antikt6HIItrEM_const_phi;
   vector<vector<float> > *antikt6HIItrEM_sampling_et;
   vector<vector<float> > *antikt6HIItrEM_sampling_et_unsubtr;
   vector<vector<int> > *antikt6HIItrEM_bad_cell_n;
   vector<vector<float> > *antikt6HIItrEM_bad_cell_et;
   vector<vector<float> > *antikt6HIItrEM_bad_cell_area;
   vector<vector<int> > *antikt6HIItrEM_empty_cell_n;
   vector<vector<float> > *antikt6HIItrEM_empty_cell_et;
   vector<vector<float> > *antikt6HIItrEM_empty_cell_area;
   vector<vector<int> > *antikt6HIItrEM_total_cell_n;
   vector<vector<float> > *antikt6HIItrEM_total_cell_et;
   vector<vector<float> > *antikt6HIItrEM_total_cell_area;
   vector<float>   *antikt6HIItrEM_n90;
   vector<float>   *antikt6HIItrEM_fracSamplingMax;
   vector<float>   *antikt6HIItrEM_SamplingMax;
   vector<float>   *antikt6HIItrEM_n90constituents;
   vector<float>   *antikt6HIItrEM_Timing;
   vector<float>   *antikt6HIItrEM_LArQuality;
   vector<float>   *antikt6HIItrEM_HECQuality;
   vector<float>   *antikt6HIItrEM_TileQuality;
   Int_t           antikt6HIItrEMFR_n;
   vector<float>   *antikt6HIItrEMFR_E;
   vector<float>   *antikt6HIItrEMFR_Et;
   vector<float>   *antikt6HIItrEMFR_pt;
   vector<float>   *antikt6HIItrEMFR_m;
   vector<float>   *antikt6HIItrEMFR_eta;
   vector<float>   *antikt6HIItrEMFR_phi;
   vector<float>   *antikt6HIItrEMFR_SubtractedEt;
   vector<float>   *antikt6HIItrEMFR_CryoCorr;
   vector<float>   *antikt6HIItrEMFR_NoFlow;
   vector<float>   *antikt6HIItrEMFR_UncalibEt;
   vector<float>   *antikt6HIItrEMFR_PassedFR;
   vector<int>     *antikt6HIItrEMFR_const_n;
   vector<vector<float> > *antikt6HIItrEMFR_const_et;
   vector<vector<float> > *antikt6HIItrEMFR_const_eta;
   vector<vector<float> > *antikt6HIItrEMFR_const_phi;
   vector<vector<float> > *antikt6HIItrEMFR_sampling_et;
   vector<vector<float> > *antikt6HIItrEMFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt6HIItrEMFR_bad_cell_n;
   vector<vector<float> > *antikt6HIItrEMFR_bad_cell_et;
   vector<vector<float> > *antikt6HIItrEMFR_bad_cell_area;
   vector<vector<int> > *antikt6HIItrEMFR_empty_cell_n;
   vector<vector<float> > *antikt6HIItrEMFR_empty_cell_et;
   vector<vector<float> > *antikt6HIItrEMFR_empty_cell_area;
   vector<vector<int> > *antikt6HIItrEMFR_total_cell_n;
   vector<vector<float> > *antikt6HIItrEMFR_total_cell_et;
   vector<vector<float> > *antikt6HIItrEMFR_total_cell_area;
   vector<float>   *antikt6HIItrEMFR_n90;
   vector<float>   *antikt6HIItrEMFR_fracSamplingMax;
   vector<float>   *antikt6HIItrEMFR_SamplingMax;
   vector<float>   *antikt6HIItrEMFR_n90constituents;
   vector<float>   *antikt6HIItrEMFR_Timing;
   vector<float>   *antikt6HIItrEMFR_LArQuality;
   vector<float>   *antikt6HIItrEMFR_HECQuality;
   vector<float>   *antikt6HIItrEMFR_TileQuality;
   Int_t           antikt8HIItrEM_n;
   vector<float>   *antikt8HIItrEM_E;
   vector<float>   *antikt8HIItrEM_Et;
   vector<float>   *antikt8HIItrEM_pt;
   vector<float>   *antikt8HIItrEM_m;
   vector<float>   *antikt8HIItrEM_eta;
   vector<float>   *antikt8HIItrEM_phi;
   vector<float>   *antikt8HIItrEM_SubtractedEt;
   vector<float>   *antikt8HIItrEM_CryoCorr;
   vector<float>   *antikt8HIItrEM_NoFlow;
   vector<float>   *antikt8HIItrEM_UncalibEt;
   vector<float>   *antikt8HIItrEM_PassedFR;
   vector<int>     *antikt8HIItrEM_const_n;
   vector<vector<float> > *antikt8HIItrEM_const_et;
   vector<vector<float> > *antikt8HIItrEM_const_eta;
   vector<vector<float> > *antikt8HIItrEM_const_phi;
   vector<vector<float> > *antikt8HIItrEM_sampling_et;
   vector<vector<float> > *antikt8HIItrEM_sampling_et_unsubtr;
   vector<vector<int> > *antikt8HIItrEM_bad_cell_n;
   vector<vector<float> > *antikt8HIItrEM_bad_cell_et;
   vector<vector<float> > *antikt8HIItrEM_bad_cell_area;
   vector<vector<int> > *antikt8HIItrEM_empty_cell_n;
   vector<vector<float> > *antikt8HIItrEM_empty_cell_et;
   vector<vector<float> > *antikt8HIItrEM_empty_cell_area;
   vector<vector<int> > *antikt8HIItrEM_total_cell_n;
   vector<vector<float> > *antikt8HIItrEM_total_cell_et;
   vector<vector<float> > *antikt8HIItrEM_total_cell_area;
   vector<float>   *antikt8HIItrEM_n90;
   vector<float>   *antikt8HIItrEM_fracSamplingMax;
   vector<float>   *antikt8HIItrEM_SamplingMax;
   vector<float>   *antikt8HIItrEM_n90constituents;
   vector<float>   *antikt8HIItrEM_Timing;
   vector<float>   *antikt8HIItrEM_LArQuality;
   vector<float>   *antikt8HIItrEM_HECQuality;
   vector<float>   *antikt8HIItrEM_TileQuality;
   Int_t           antikt8HIItrEMFR_n;
   vector<float>   *antikt8HIItrEMFR_E;
   vector<float>   *antikt8HIItrEMFR_Et;
   vector<float>   *antikt8HIItrEMFR_pt;
   vector<float>   *antikt8HIItrEMFR_m;
   vector<float>   *antikt8HIItrEMFR_eta;
   vector<float>   *antikt8HIItrEMFR_phi;
   vector<float>   *antikt8HIItrEMFR_SubtractedEt;
   vector<float>   *antikt8HIItrEMFR_CryoCorr;
   vector<float>   *antikt8HIItrEMFR_NoFlow;
   vector<float>   *antikt8HIItrEMFR_UncalibEt;
   vector<float>   *antikt8HIItrEMFR_PassedFR;
   vector<int>     *antikt8HIItrEMFR_const_n;
   vector<vector<float> > *antikt8HIItrEMFR_const_et;
   vector<vector<float> > *antikt8HIItrEMFR_const_eta;
   vector<vector<float> > *antikt8HIItrEMFR_const_phi;
   vector<vector<float> > *antikt8HIItrEMFR_sampling_et;
   vector<vector<float> > *antikt8HIItrEMFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt8HIItrEMFR_bad_cell_n;
   vector<vector<float> > *antikt8HIItrEMFR_bad_cell_et;
   vector<vector<float> > *antikt8HIItrEMFR_bad_cell_area;
   vector<vector<int> > *antikt8HIItrEMFR_empty_cell_n;
   vector<vector<float> > *antikt8HIItrEMFR_empty_cell_et;
   vector<vector<float> > *antikt8HIItrEMFR_empty_cell_area;
   vector<vector<int> > *antikt8HIItrEMFR_total_cell_n;
   vector<vector<float> > *antikt8HIItrEMFR_total_cell_et;
   vector<vector<float> > *antikt8HIItrEMFR_total_cell_area;
   vector<float>   *antikt8HIItrEMFR_n90;
   vector<float>   *antikt8HIItrEMFR_fracSamplingMax;
   vector<float>   *antikt8HIItrEMFR_SamplingMax;
   vector<float>   *antikt8HIItrEMFR_n90constituents;
   vector<float>   *antikt8HIItrEMFR_Timing;
   vector<float>   *antikt8HIItrEMFR_LArQuality;
   vector<float>   *antikt8HIItrEMFR_HECQuality;
   vector<float>   *antikt8HIItrEMFR_TileQuality;
   Int_t           antikt10HIItrEM_n;
   vector<float>   *antikt10HIItrEM_E;
   vector<float>   *antikt10HIItrEM_Et;
   vector<float>   *antikt10HIItrEM_pt;
   vector<float>   *antikt10HIItrEM_m;
   vector<float>   *antikt10HIItrEM_eta;
   vector<float>   *antikt10HIItrEM_phi;
   vector<float>   *antikt10HIItrEM_SubtractedEt;
   vector<float>   *antikt10HIItrEM_CryoCorr;
   vector<float>   *antikt10HIItrEM_NoFlow;
   vector<float>   *antikt10HIItrEM_UncalibEt;
   vector<float>   *antikt10HIItrEM_PassedFR;
   vector<int>     *antikt10HIItrEM_const_n;
   vector<vector<float> > *antikt10HIItrEM_const_et;
   vector<vector<float> > *antikt10HIItrEM_const_eta;
   vector<vector<float> > *antikt10HIItrEM_const_phi;
   vector<vector<float> > *antikt10HIItrEM_sampling_et;
   vector<vector<float> > *antikt10HIItrEM_sampling_et_unsubtr;
   vector<vector<int> > *antikt10HIItrEM_bad_cell_n;
   vector<vector<float> > *antikt10HIItrEM_bad_cell_et;
   vector<vector<float> > *antikt10HIItrEM_bad_cell_area;
   vector<vector<int> > *antikt10HIItrEM_empty_cell_n;
   vector<vector<float> > *antikt10HIItrEM_empty_cell_et;
   vector<vector<float> > *antikt10HIItrEM_empty_cell_area;
   vector<vector<int> > *antikt10HIItrEM_total_cell_n;
   vector<vector<float> > *antikt10HIItrEM_total_cell_et;
   vector<vector<float> > *antikt10HIItrEM_total_cell_area;
   vector<float>   *antikt10HIItrEM_n90;
   vector<float>   *antikt10HIItrEM_fracSamplingMax;
   vector<float>   *antikt10HIItrEM_SamplingMax;
   vector<float>   *antikt10HIItrEM_n90constituents;
   vector<float>   *antikt10HIItrEM_Timing;
   vector<float>   *antikt10HIItrEM_LArQuality;
   vector<float>   *antikt10HIItrEM_HECQuality;
   vector<float>   *antikt10HIItrEM_TileQuality;
   Int_t           antikt10HIItrEMFR_n;
   vector<float>   *antikt10HIItrEMFR_E;
   vector<float>   *antikt10HIItrEMFR_Et;
   vector<float>   *antikt10HIItrEMFR_pt;
   vector<float>   *antikt10HIItrEMFR_m;
   vector<float>   *antikt10HIItrEMFR_eta;
   vector<float>   *antikt10HIItrEMFR_phi;
   vector<float>   *antikt10HIItrEMFR_SubtractedEt;
   vector<float>   *antikt10HIItrEMFR_CryoCorr;
   vector<float>   *antikt10HIItrEMFR_NoFlow;
   vector<float>   *antikt10HIItrEMFR_UncalibEt;
   vector<float>   *antikt10HIItrEMFR_PassedFR;
   vector<int>     *antikt10HIItrEMFR_const_n;
   vector<vector<float> > *antikt10HIItrEMFR_const_et;
   vector<vector<float> > *antikt10HIItrEMFR_const_eta;
   vector<vector<float> > *antikt10HIItrEMFR_const_phi;
   vector<vector<float> > *antikt10HIItrEMFR_sampling_et;
   vector<vector<float> > *antikt10HIItrEMFR_sampling_et_unsubtr;
   vector<vector<int> > *antikt10HIItrEMFR_bad_cell_n;
   vector<vector<float> > *antikt10HIItrEMFR_bad_cell_et;
   vector<vector<float> > *antikt10HIItrEMFR_bad_cell_area;
   vector<vector<int> > *antikt10HIItrEMFR_empty_cell_n;
   vector<vector<float> > *antikt10HIItrEMFR_empty_cell_et;
   vector<vector<float> > *antikt10HIItrEMFR_empty_cell_area;
   vector<vector<int> > *antikt10HIItrEMFR_total_cell_n;
   vector<vector<float> > *antikt10HIItrEMFR_total_cell_et;
   vector<vector<float> > *antikt10HIItrEMFR_total_cell_area;
   vector<float>   *antikt10HIItrEMFR_n90;
   vector<float>   *antikt10HIItrEMFR_fracSamplingMax;
   vector<float>   *antikt10HIItrEMFR_SamplingMax;
   vector<float>   *antikt10HIItrEMFR_n90constituents;
   vector<float>   *antikt10HIItrEMFR_Timing;
   vector<float>   *antikt10HIItrEMFR_LArQuality;
   vector<float>   *antikt10HIItrEMFR_HECQuality;
   vector<float>   *antikt10HIItrEMFR_TileQuality;
   Int_t           antikt4Track_n;
   vector<float>   *antikt4Track_E;
   vector<float>   *antikt4Track_pt;
   vector<float>   *antikt4Track_m;
   vector<float>   *antikt4Track_eta;
   vector<float>   *antikt4Track_phi;
   vector<int>     *antikt4Track_const_n;
   vector<vector<float> > *antikt4Track_const_pt;
   vector<vector<float> > *antikt4Track_const_eta;
   vector<vector<float> > *antikt4Track_const_phi;
   vector<vector<float> > *antikt4Track_const_chi2;
   vector<vector<float> > *antikt4Track_const_d0_wrtPV;
   vector<vector<float> > *antikt4Track_const_z0_wrtPV;
   vector<vector<float> > *antikt4Track_const_phi0_wrtPV;
   vector<vector<float> > *antikt4Track_const_theta_wrtPV;
   vector<vector<float> > *antikt4Track_const_qop;
   vector<vector<int> > *antikt4Track_const_ndof;
   vector<vector<int> > *antikt4Track_const_nBLayerHits;
   vector<vector<int> > *antikt4Track_const_nPixelHits;
   vector<vector<int> > *antikt4Track_const_nSCTHits;
   vector<vector<int> > *antikt4Track_const_nTRTHits;
   Int_t           antikt6Track_n;
   vector<float>   *antikt6Track_E;
   vector<float>   *antikt6Track_pt;
   vector<float>   *antikt6Track_m;
   vector<float>   *antikt6Track_eta;
   vector<float>   *antikt6Track_phi;
   vector<int>     *antikt6Track_const_n;
   vector<vector<float> > *antikt6Track_const_pt;
   vector<vector<float> > *antikt6Track_const_eta;
   vector<vector<float> > *antikt6Track_const_phi;
   vector<vector<float> > *antikt6Track_const_chi2;
   vector<vector<float> > *antikt6Track_const_d0_wrtPV;
   vector<vector<float> > *antikt6Track_const_z0_wrtPV;
   vector<vector<float> > *antikt6Track_const_phi0_wrtPV;
   vector<vector<float> > *antikt6Track_const_theta_wrtPV;
   vector<vector<float> > *antikt6Track_const_qop;
   vector<vector<int> > *antikt6Track_const_ndof;
   vector<vector<int> > *antikt6Track_const_nBLayerHits;
   vector<vector<int> > *antikt6Track_const_nPixelHits;
   vector<vector<int> > *antikt6Track_const_nSCTHits;
   vector<vector<int> > *antikt6Track_const_nTRTHits;
   Int_t           antikt2Truth_n;
   vector<float>   *antikt2Truth_E;
   vector<float>   *antikt2Truth_Et;
   vector<float>   *antikt2Truth_pt;
   vector<float>   *antikt2Truth_m;
   vector<float>   *antikt2Truth_eta;
   vector<float>   *antikt2Truth_phi;
   Int_t           antikt3Truth_n;
   vector<float>   *antikt3Truth_E;
   vector<float>   *antikt3Truth_Et;
   vector<float>   *antikt3Truth_pt;
   vector<float>   *antikt3Truth_m;
   vector<float>   *antikt3Truth_eta;
   vector<float>   *antikt3Truth_phi;
   Int_t           antikt4Truth_n;
   vector<float>   *antikt4Truth_E;
   vector<float>   *antikt4Truth_Et;
   vector<float>   *antikt4Truth_pt;
   vector<float>   *antikt4Truth_m;
   vector<float>   *antikt4Truth_eta;
   vector<float>   *antikt4Truth_phi;
   Int_t           antikt5Truth_n;
   vector<float>   *antikt5Truth_E;
   vector<float>   *antikt5Truth_Et;
   vector<float>   *antikt5Truth_pt;
   vector<float>   *antikt5Truth_m;
   vector<float>   *antikt5Truth_eta;
   vector<float>   *antikt5Truth_phi;
   Int_t           antikt6Truth_n;
   vector<float>   *antikt6Truth_E;
   vector<float>   *antikt6Truth_Et;
   vector<float>   *antikt6Truth_pt;
   vector<float>   *antikt6Truth_m;
   vector<float>   *antikt6Truth_eta;
   vector<float>   *antikt6Truth_phi;
   Int_t           antikt8Truth_n;
   vector<float>   *antikt8Truth_E;
   vector<float>   *antikt8Truth_Et;
   vector<float>   *antikt8Truth_pt;
   vector<float>   *antikt8Truth_m;
   vector<float>   *antikt8Truth_eta;
   vector<float>   *antikt8Truth_phi;
   Int_t           antikt10Truth_n;
   vector<float>   *antikt10Truth_E;
   vector<float>   *antikt10Truth_Et;
   vector<float>   *antikt10Truth_pt;
   vector<float>   *antikt10Truth_m;
   vector<float>   *antikt10Truth_eta;
   vector<float>   *antikt10Truth_phi;
   Float_t         JetFlow_PsiFCAL0_w;
   Float_t         JetFlow_PsiPFCAL0_w;
   Float_t         JetFlow_PsiNFCAL0_w;
   vector<float>   *JetFlow_EtInLayer;
   vector<float>   *JetFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
   Float_t         JetFlow_AvgV2fromCalo;
   Float_t         HIFlow_v1_PsiFCAL0_w;
   Float_t         HIFlow_v1_PsiPFCAL0_w;
   Float_t         HIFlow_v1_PsiNFCAL0_w;
   vector<float>   *HIFlow_v1_EtInLayer;
   vector<float>   *HIFlow_v1_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
   Float_t         HIFlow_v1_AvgV2fromCalo;
   Float_t         HIFlow_v2_PsiFCAL0_w;
   Float_t         HIFlow_v2_PsiPFCAL0_w;
   Float_t         HIFlow_v2_PsiNFCAL0_w;
   vector<float>   *HIFlow_v2_EtInLayer;
   vector<float>   *HIFlow_v2_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
   Float_t         HIFlow_v2_AvgV2fromCalo;
   vector<float>   *HIFlow_v2_PsiHICaloUtilLayers;
   vector<float>   *HIFlow_v2_PsiEtHICaloUtilLayers;
   Float_t         HIFlow_v2_PsiPtrack;
   Float_t         HIFlow_v2_PsiNtrack;
   Float_t         HIFlow_v2_v2EMB1sil;
   Float_t         HIFlow_v2_v2FCAL0sil;
   Float_t         HIFlow_v2_v2track;
   vector<float>   *HIFlow_v2_Meanv2_Psi_From_EMB1CaloCel_IDLayers;
   vector<float>   *HIFlow_v2_Meanv2_Psi_From_FCAL0CaloCel_IDLayers;
   vector<float>   *HIFlow_v2_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_EMBN1;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_EMBP1;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_FCALN0;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_FCALP0;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_EMBN1;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_EMBP1;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_FCALN0;
   vector<float>   *HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_FCALP0;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0;
   vector<float>   *HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0;
   vector<float>   *HIFlow_v2_EtaEMBN1;
   vector<float>   *HIFlow_v2_EtaEMBP1;
   vector<float>   *HIFlow_v2_EtaFCALN0;
   vector<float>   *HIFlow_v2_EtaFCALP0;
   Float_t         HIFlow_v3_PsiFCAL0_w;
   Float_t         HIFlow_v3_PsiPFCAL0_w;
   Float_t         HIFlow_v3_PsiNFCAL0_w;
   vector<float>   *HIFlow_v3_EtInLayer;
   vector<float>   *HIFlow_v3_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
   Float_t         HIFlow_v3_AvgV2fromCalo;
   Float_t         HIFlow_v4_PsiFCAL0_w;
   Float_t         HIFlow_v4_PsiPFCAL0_w;
   Float_t         HIFlow_v4_PsiNFCAL0_w;
   vector<float>   *HIFlow_v4_EtInLayer;
   vector<float>   *HIFlow_v4_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
   Float_t         HIFlow_v4_AvgV2fromCalo;
   Float_t         HIFlow_v5_PsiFCAL0_w;
   Float_t         HIFlow_v5_PsiPFCAL0_w;
   Float_t         HIFlow_v5_PsiNFCAL0_w;
   vector<float>   *HIFlow_v5_EtInLayer;
   vector<float>   *HIFlow_v5_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
   Float_t         HIFlow_v5_AvgV2fromCalo;
   Float_t         HIFlow_v6_PsiFCAL0_w;
   Float_t         HIFlow_v6_PsiPFCAL0_w;
   Float_t         HIFlow_v6_PsiNFCAL0_w;
   vector<float>   *HIFlow_v6_EtInLayer;
   vector<float>   *HIFlow_v6_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;
   Float_t         HIFlow_v6_AvgV2fromCalo;
   Int_t           cl_eg_n;
   vector<float>   *cl_eg_pt;
   vector<float>   *cl_eg_eta;
   vector<float>   *cl_eg_phi;
   vector<float>   *cl_eg_E_em;
   vector<float>   *cl_eg_E_had;
   vector<float>   *cl_eg_firstEdens;
   vector<float>   *cl_eg_cellmaxfrac;
   vector<float>   *cl_eg_longitudinal;
   vector<float>   *cl_eg_secondlambda;
   vector<float>   *cl_eg_lateral;
   vector<float>   *cl_eg_secondR;
   vector<float>   *cl_eg_centerlambda;
   vector<float>   *cl_eg_deltaTheta;
   vector<float>   *cl_eg_deltaPhi;
   vector<float>   *cl_eg_centermag;
   vector<float>   *cl_eg_time;
   vector<float>   *cl_eg_E_PreSamplerB;
   vector<float>   *cl_eg_E_EMB1;
   vector<float>   *cl_eg_E_EMB2;
   vector<float>   *cl_eg_E_EMB3;
   vector<float>   *cl_eg_E_PreSamplerE;
   vector<float>   *cl_eg_E_EME1;
   vector<float>   *cl_eg_E_EME2;
   vector<float>   *cl_eg_E_EME3;
   vector<float>   *cl_eg_E_HEC0;
   vector<float>   *cl_eg_E_HEC1;
   vector<float>   *cl_eg_E_HEC2;
   vector<float>   *cl_eg_E_HEC3;
   vector<float>   *cl_eg_E_TileBar0;
   vector<float>   *cl_eg_E_TileBar1;
   vector<float>   *cl_eg_E_TileBar2;
   vector<float>   *cl_eg_E_TileGap1;
   vector<float>   *cl_eg_E_TileGap2;
   vector<float>   *cl_eg_E_TileGap3;
   vector<float>   *cl_eg_E_TileExt0;
   vector<float>   *cl_eg_E_TileExt1;
   vector<float>   *cl_eg_E_TileExt2;
   vector<float>   *cl_eg_E_FCAL0;
   vector<float>   *cl_eg_E_FCAL1;
   vector<float>   *cl_eg_E_FCAL2;
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
   vector<float>   *mu_staco_truth_dr;
   vector<float>   *mu_staco_truth_E;
   vector<float>   *mu_staco_truth_pt;
   vector<float>   *mu_staco_truth_eta;
   vector<float>   *mu_staco_truth_phi;
   vector<int>     *mu_staco_truth_type;
   vector<int>     *mu_staco_truth_status;
   vector<int>     *mu_staco_truth_barcode;
   vector<int>     *mu_staco_truth_mothertype;
   vector<int>     *mu_staco_truth_motherbarcode;
   vector<int>     *mu_staco_truth_matched;
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
   vector<float>   *mu_muid_truth_dr;
   vector<float>   *mu_muid_truth_E;
   vector<float>   *mu_muid_truth_pt;
   vector<float>   *mu_muid_truth_eta;
   vector<float>   *mu_muid_truth_phi;
   vector<int>     *mu_muid_truth_type;
   vector<int>     *mu_muid_truth_status;
   vector<int>     *mu_muid_truth_barcode;
   vector<int>     *mu_muid_truth_mothertype;
   vector<int>     *mu_muid_truth_motherbarcode;
   vector<int>     *mu_muid_truth_matched;
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
   Bool_t          L1_2J15;
   Bool_t          L1_J10;
   Bool_t          L1_J15;
   Bool_t          L1_J30;
   Bool_t          L1_J75;
   Int_t           trig_L1_jet_n;
   vector<float>   *trig_L1_jet_eta;
   vector<float>   *trig_L1_jet_phi;
   vector<vector<string> > *trig_L1_jet_thrNames;
   vector<vector<float> > *trig_L1_jet_thrValues;
   vector<unsigned int> *trig_L1_jet_thrPattern;
   vector<float>   *trig_L1_jet_et4x4;
   vector<float>   *trig_L1_jet_et6x6;
   vector<float>   *trig_L1_jet_et8x8;
   vector<unsigned int> *trig_L1_jet_RoIWord;
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
   vector<int>     *trig_L1_emtau_L1_2EM3;
   vector<int>     *trig_L1_emtau_L1_2EM3_NL;
   vector<int>     *trig_L1_emtau_L1_2EM3_NZ;
   vector<int>     *trig_L1_emtau_L1_2EM5;
   vector<int>     *trig_L1_emtau_L1_EM10;
   vector<int>     *trig_L1_emtau_L1_EM12;
   vector<int>     *trig_L1_emtau_L1_EM14;
   vector<int>     *trig_L1_emtau_L1_EM16;
   vector<int>     *trig_L1_emtau_L1_EM3;
   vector<int>     *trig_L1_emtau_L1_EM3_EMPTY;
   vector<int>     *trig_L1_emtau_L1_EM3_FIRSTEMPTY;
   vector<int>     *trig_L1_emtau_L1_EM3_MV_VTE50;
   vector<int>     *trig_L1_emtau_L1_EM3_NL;
   vector<int>     *trig_L1_emtau_L1_EM3_NZ;
   vector<int>     *trig_L1_emtau_L1_EM3_TE50;
   vector<int>     *trig_L1_emtau_L1_EM3_UNPAIRED_ISO;
   vector<int>     *trig_L1_emtau_L1_EM3_UNPAIRED_NONISO;
   vector<int>     *trig_L1_emtau_L1_EM3_VTE50;
   vector<int>     *trig_L1_emtau_L1_EM4;
   vector<int>     *trig_L1_emtau_L1_EM5;
   vector<int>     *trig_L1_emtau_L1_EM5_EMPTY;
   vector<int>     *trig_L1_emtau_L1_EM7;
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
   vector<int>     *trig_EF_jet_EF_fj20_Ecorr;
   vector<int>     *trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j15_Ecorr;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1J10;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20;
   vector<int>     *trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j15_a4_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j20_Ecorr;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1J10;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20;
   vector<int>     *trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j20_a4_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS;
   vector<int>     *trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1J10;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20;
   vector<int>     *trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j40_a4_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC;
   vector<int>     *trig_EF_jet_EF_j75_a4_EFFS_L1ZDC;
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
   Int_t           trig_L2_jet_n;
   vector<float>   *trig_L2_jet_E;
   vector<float>   *trig_L2_jet_eta;
   vector<float>   *trig_L2_jet_phi;
   vector<unsigned int> *trig_L2_jet_RoIWord;
   vector<double>  *trig_L2_jet_ehad0;
   vector<double>  *trig_L2_jet_eem0;
   vector<int>     *trig_L2_jet_nLeadingCells;
   vector<float>   *trig_L2_jet_hecf;
   vector<float>   *trig_L2_jet_jetQuality;
   vector<float>   *trig_L2_jet_emf;
   vector<float>   *trig_L2_jet_jetTimeCells;
   Int_t           vx_n;
   vector<float>   *vx_x;
   vector<float>   *vx_y;
   vector<float>   *vx_z;
   vector<float>   *vx_cov_x;
   vector<float>   *vx_cov_y;
   vector<float>   *vx_cov_z;
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
   vector<float>   *vx_sumWeightInliers;
   vector<float>   *vx_sumWeightOutliers;
   vector<float>   *vx_sumWeightPileup;
   vector<float>   *vx_sumWeightFakes;
   vector<int>     *vx_nInliers;
   vector<int>     *vx_nOutliers;
   vector<int>     *vx_nPileUp;
   vector<int>     *vx_nFakes;
   vector<float>   *vx_purity;
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
   vector<unsigned int> *el_OQRecalc;
   vector<int>     *el_type;
   vector<int>     *el_origin;
   vector<int>     *el_typebkg;
   vector<int>     *el_originbkg;
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
   vector<float>   *el_deltaPhiRot;
   vector<float>   *el_expectHitInBLayer;
   vector<float>   *el_trackd0_physics;
   vector<float>   *el_etaSampling1;
   vector<float>   *el_reta;
   vector<float>   *el_rphi;
   vector<float>   *el_EtringnoisedR03sig2;
   vector<float>   *el_EtringnoisedR03sig3;
   vector<float>   *el_EtringnoisedR03sig4;
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
   vector<int>     *el_nPixHoles;
   vector<int>     *el_nSCTHoles;
   vector<int>     *el_nTRTHoles;
   vector<int>     *el_nBLSharedHits;
   vector<int>     *el_nPixSharedHits;
   vector<int>     *el_nSCTSharedHits;
   vector<int>     *el_nBLayerOutliers;
   vector<int>     *el_nPixelOutliers;
   vector<int>     *el_nSCTOutliers;
   vector<int>     *el_nTRTOutliers;
   vector<int>     *el_nTRTHighTOutliers;
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
   vector<int>     *el_hastrack;
   vector<float>   *el_deltaEmax2;
   vector<float>   *el_calibHitsShowerDepth;
   vector<unsigned int> *el_isIso;
   vector<float>   *el_mvaptcone20;
   vector<float>   *el_mvaptcone30;
   vector<float>   *el_mvaptcone40;
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
   vector<unsigned int> *ph_OQRecalc;
   vector<int>     *ph_type;
   vector<int>     *ph_origin;
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
   vector<float>   *ph_EtringnoisedR03sig2;
   vector<float>   *ph_EtringnoisedR03sig3;
   vector<float>   *ph_EtringnoisedR03sig4;
   vector<double>  *ph_isolationlikelihoodjets;
   vector<double>  *ph_isolationlikelihoodhqelectrons;
   vector<double>  *ph_loglikelihood;
   vector<double>  *ph_photonweight;
   vector<double>  *ph_photonbgweight;
   vector<double>  *ph_neuralnet;
   vector<double>  *ph_Hmatrix;
   vector<double>  *ph_Hmatrix5;
   vector<double>  *ph_adaboost;
   vector<float>   *ph_zvertex;
   vector<float>   *ph_errz;
   vector<float>   *ph_etap;
   vector<float>   *ph_depth;
   vector<float>   *ph_cl_E;
   vector<float>   *ph_cl_pt;
   vector<float>   *ph_cl_eta;
   vector<float>   *ph_cl_phi;
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
   vector<int>     *ph_truth_isConv;
   vector<int>     *ph_truth_isBrem;
   vector<int>     *ph_truth_isFromHardProc;
   vector<int>     *ph_truth_isPhotonFromHardProc;
   vector<float>   *ph_truth_Rconv;
   vector<float>   *ph_truth_zconv;
   vector<float>   *ph_deltaEmax2;
   vector<float>   *ph_calibHitsShowerDepth;
   vector<unsigned int> *ph_isIso;
   vector<float>   *ph_mvaptcone20;
   vector<float>   *ph_mvaptcone30;
   vector<float>   *ph_mvaptcone40;
   vector<float>   *ph_EF_dr;
   vector<int>     *ph_EF_index;
   vector<float>   *ph_L2_dr;
   vector<float>   *ph_L1_dr;
   vector<int>     *ph_L1_index;
   Int_t           mcVx_n;
   vector<float>   *mcVx_x;
   vector<float>   *mcVx_y;
   vector<float>   *mcVx_z;
   Int_t           mc_n;
   vector<float>   *mc_gen_E;
   vector<float>   *mc_gen_pt;
   vector<float>   *mc_gen_eta;
   vector<float>   *mc_gen_phi;
   vector<int>     *mc_gen_type;
   vector<int>     *mc_gen_status;
   vector<int>     *mc_gen_barcode;
   vector<int>     *mc_gen_mothertype;
   vector<int>     *mc_gen_motherbarcode;
   vector<int>     *mc_perigee_ok;
   vector<float>   *mc_perigee_d0;
   vector<float>   *mc_perigee_z0;
   vector<float>   *mc_perigee_phi;
   vector<float>   *mc_perigee_theta;
   vector<float>   *mc_perigee_qoverp;
   vector<float>   *mc_charge;
   vector<int>     *mc_child_n;
   vector<vector<int> > *mc_child_barcode;
   vector<vector<int> > *mc_child_pdg;
   vector<float>   *mc_begVtx_x;
   vector<float>   *mc_begVtx_y;
   vector<float>   *mc_begVtx_z;
   vector<float>   *mc_begVtx_barcode;
   vector<float>   *mc_endVtx_x;
   vector<float>   *mc_endVtx_y;
   vector<float>   *mc_endVtx_z;
   vector<float>   *mc_endVtx_barcode;
   Int_t           mc_unstable_n;
   vector<float>   *mc_unstable_gen_pt;
   vector<float>   *mc_unstable_gen_eta;
   vector<float>   *mc_unstable_gen_phi;
   vector<float>   *mc_unstable_gen_energy;
   vector<int>     *mc_unstable_perigee_ok;
   vector<float>   *mc_unstable_perigee_d0;
   vector<float>   *mc_unstable_perigee_z0;
   vector<float>   *mc_unstable_perigee_phi;
   vector<float>   *mc_unstable_perigee_theta;
   vector<float>   *mc_unstable_perigee_qoverp;
   vector<int>     *mc_unstable_pdg;
   vector<float>   *mc_unstable_charge;
   vector<int>     *mc_unstable_barcode;
   vector<int>     *mc_unstable_status;
   vector<int>     *mc_unstable_mother_pdg;
   vector<int>     *mc_unstable_mother_barcode;
   vector<int>     *mc_unstable_child_n;
   vector<vector<int> > *mc_unstable_child_barcode;
   vector<float>   *mc_unstable_begVtx_x;
   vector<float>   *mc_unstable_begVtx_y;
   vector<float>   *mc_unstable_begVtx_z;
   vector<float>   *mc_unstable_begVtx_barcode;
   vector<float>   *mc_unstable_endVtx_x;
   vector<float>   *mc_unstable_endVtx_y;
   vector<float>   *mc_unstable_endVtx_z;
   vector<float>   *mc_unstable_endVtx_barcode;

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
   TBranch        *b_EF_e5_loose_L1VTE50;   //!
   TBranch        *b_EF_g10_loose;   //!
   TBranch        *b_EF_g10_loose_larcalib;   //!
   TBranch        *b_EF_g5_NoCut_cosmic;   //!
   TBranch        *b_EF_g5_loose;   //!
   TBranch        *b_EF_g5_loose_EFFS_L1ZDC;   //!
   TBranch        *b_EF_g5_loose_L1TE50;   //!
   TBranch        *b_EF_g5_loose_larcalib;   //!
   TBranch        *b_EF_g7_loose;   //!
   TBranch        *b_EF_g9_etcut;   //!
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
   TBranch        *b_EF_mu4_MSonly_EFFS_L1MU0_NZ;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_L1TE5_NZ;   //!
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
   TBranch        *b_EF_mu4_loose;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_EF_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_EF_mu6;   //!
   TBranch        *b_EF_mu6T;   //!
   TBranch        *b_EF_mu6T_IDTrkNoCut;   //!
   TBranch        *b_EF_mu6T_MSonly;   //!
   TBranch        *b_EF_mu6_IDTrkNoCut;   //!
   TBranch        *b_EF_mu6_L1VTE50;   //!
   TBranch        *b_EF_mu6_MSonly;   //!
   TBranch        *b_EF_mu6_MSonly_L1TE50;   //!
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
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_2mu2_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_L2_2mu4T_MSonly;   //!
   TBranch        *b_L2_2mu4_MSonly;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_2mu4_MSonly_EFFS_L1TE50;   //!
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
   TBranch        *b_L2_e5_loose_L1VTE50;   //!
   TBranch        *b_L2_em3_empty_larcalib;   //!
   TBranch        *b_L2_em5_empty_larcalib;   //!
   TBranch        *b_L2_g10_loose;   //!
   TBranch        *b_L2_g5_NoCut_cosmic;   //!
   TBranch        *b_L2_g5_loose;   //!
   TBranch        *b_L2_g5_loose_EFFS_L1ZDC;   //!
   TBranch        *b_L2_g5_loose_L1TE50;   //!
   TBranch        *b_L2_g7_loose;   //!
   TBranch        *b_L2_g9_etcut;   //!
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
   TBranch        *b_L2_mu4T_cal;   //!
   TBranch        *b_L2_mu4T_cosmic;   //!
   TBranch        *b_L2_mu4_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4_L1VTE50;   //!
   TBranch        *b_L2_mu4_MSonly;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1MBTS;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1MU0_NZ;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1TE5_NZ;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_L1ZDC_OR;   //!
   TBranch        *b_L2_mu4_MSonly_L1TE50;   //!
   TBranch        *b_L2_mu4_MSonly_barrel;   //!
   TBranch        *b_L2_mu4_MSonly_barrel_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu4_MSonly_barrel_L1TE50;   //!
   TBranch        *b_L2_mu4_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4_barrel_L1VTE50;   //!
   TBranch        *b_L2_mu4_cal_empty;   //!
   TBranch        *b_L2_mu4_cosmic;   //!
   TBranch        *b_L2_mu4_loose;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_L2_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_L2_mu6;   //!
   TBranch        *b_L2_mu6T;   //!
   TBranch        *b_L2_mu6T_IDTrkNoCut;   //!
   TBranch        *b_L2_mu6T_MSonly;   //!
   TBranch        *b_L2_mu6_IDTrkNoCut;   //!
   TBranch        *b_L2_mu6_L1VTE50;   //!
   TBranch        *b_L2_mu6_MSonly;   //!
   TBranch        *b_L2_mu6_MSonly_L1TE50;   //!
   TBranch        *b_L2_mu6_cal;   //!
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
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MU0_NZ;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE5_NZ;   //!
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
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_loose;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6T;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6T_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6T_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_L1VTE50;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_MSonly;   //!
   TBranch        *b_trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50;   //!
   TBranch        *b_trig_L2_jet_L2_fj10_empty_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_fj20_Ecorr;   //!
   TBranch        *b_trig_L2_jet_L2_fj20_Ecorr_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_fj25_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j10_empty_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j15_Ecorr;   //!
   TBranch        *b_trig_L2_jet_L2_j15_Ecorr_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j200_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j20_Ecorr;   //!
   TBranch        *b_trig_L2_jet_L2_j20_Ecorr_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j25_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j50_larcalib;   //!
   TBranch        *b_trig_L2_jet_L2_j95_larcalib;   //!
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
   TBranch        *b_mc_channel_number;   //!
   TBranch        *b_mc_event_number;   //!
   TBranch        *b_mc_event_weight;   //!
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
   TBranch        *b_trk_mc_probability;   //!
   TBranch        *b_trk_mc_barcode;   //!
   TBranch        *b_trk_mc_index;   //!
   TBranch        *b_trt_RDO_countRDOhitsInEvent;   //!
   TBranch        *b_trt_RDO_countBarrelhitsInEvent;   //!
   TBranch        *b_trt_RDO_countEndCaphitsInEvent;   //!
   TBranch        *b_trt_RDO_countEndCapAhitsInEvent;   //!
   TBranch        *b_trt_RDO_countEndCapChitsInEvent;   //!
   TBranch        *b_trt_RDO_countdeadstraws;   //!
   TBranch        *b_ItrEMNoFRBkgrtower_CaloBkgrEt;   //!
   TBranch        *b_ItrEMNoFRBkgrtower_CaloBkgrRMS;   //!
   TBranch        *b_ItrEMNoFRBkgrtower_CaloBkgrCounts;   //!
   TBranch        *b_ItrEMNoFRBkgrtower_CaloBkgrEta;   //!
   TBranch        *b_ItrEMNoFRBkgrlayer_CaloBkgrEt;   //!
   TBranch        *b_ItrEMNoFRBkgrlayer_CaloBkgrRMS;   //!
   TBranch        *b_ItrEMNoFRBkgrlayer_CaloBkgrCounts;   //!
   TBranch        *b_ItrEMNoFRBkgrlayer_CaloBkgrEta;   //!
   TBranch        *b_antikt2HINoItr_n;   //!
   TBranch        *b_antikt2HINoItr_E;   //!
   TBranch        *b_antikt2HINoItr_Et;   //!
   TBranch        *b_antikt2HINoItr_pt;   //!
   TBranch        *b_antikt2HINoItr_m;   //!
   TBranch        *b_antikt2HINoItr_eta;   //!
   TBranch        *b_antikt2HINoItr_phi;   //!
   TBranch        *b_antikt2HIItrNoFR_n;   //!
   TBranch        *b_antikt2HIItrNoFR_E;   //!
   TBranch        *b_antikt2HIItrNoFR_Et;   //!
   TBranch        *b_antikt2HIItrNoFR_pt;   //!
   TBranch        *b_antikt2HIItrNoFR_m;   //!
   TBranch        *b_antikt2HIItrNoFR_eta;   //!
   TBranch        *b_antikt2HIItrNoFR_phi;   //!
   TBranch        *b_antikt2HIItrNoFR_SubtractedEt;   //!
   TBranch        *b_antikt2HIItrNoFR_CryoCorr;   //!
   TBranch        *b_antikt2HIItrNoFR_NoFlow;   //!
   TBranch        *b_antikt2HIItrNoFR_UncalibEt;   //!
   TBranch        *b_antikt2HIItrNoFR_PassedFR;   //!
   TBranch        *b_antikt2HIItrNoFR_const_n;   //!
   TBranch        *b_antikt2HIItrNoFR_const_et;   //!
   TBranch        *b_antikt2HIItrNoFR_const_eta;   //!
   TBranch        *b_antikt2HIItrNoFR_const_phi;   //!
   TBranch        *b_antikt2HIItrNoFR_sampling_et;   //!
   TBranch        *b_antikt2HIItrNoFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt2HIItrNoFR_bad_cell_n;   //!
   TBranch        *b_antikt2HIItrNoFR_bad_cell_et;   //!
   TBranch        *b_antikt2HIItrNoFR_bad_cell_area;   //!
   TBranch        *b_antikt2HIItrNoFR_empty_cell_n;   //!
   TBranch        *b_antikt2HIItrNoFR_empty_cell_et;   //!
   TBranch        *b_antikt2HIItrNoFR_empty_cell_area;   //!
   TBranch        *b_antikt2HIItrNoFR_total_cell_n;   //!
   TBranch        *b_antikt2HIItrNoFR_total_cell_et;   //!
   TBranch        *b_antikt2HIItrNoFR_total_cell_area;   //!
   TBranch        *b_antikt2HIItrNoFR_n90;   //!
   TBranch        *b_antikt2HIItrNoFR_fracSamplingMax;   //!
   TBranch        *b_antikt2HIItrNoFR_SamplingMax;   //!
   TBranch        *b_antikt2HIItrNoFR_n90constituents;   //!
   TBranch        *b_antikt2HIItrNoFR_Timing;   //!
   TBranch        *b_antikt2HIItrNoFR_LArQuality;   //!
   TBranch        *b_antikt2HIItrNoFR_HECQuality;   //!
   TBranch        *b_antikt2HIItrNoFR_TileQuality;   //!
   TBranch        *b_antikt4HIItrNoFR_n;   //!
   TBranch        *b_antikt4HIItrNoFR_E;   //!
   TBranch        *b_antikt4HIItrNoFR_Et;   //!
   TBranch        *b_antikt4HIItrNoFR_pt;   //!
   TBranch        *b_antikt4HIItrNoFR_m;   //!
   TBranch        *b_antikt4HIItrNoFR_eta;   //!
   TBranch        *b_antikt4HIItrNoFR_phi;   //!
   TBranch        *b_antikt4HIItrNoFR_SubtractedEt;   //!
   TBranch        *b_antikt4HIItrNoFR_CryoCorr;   //!
   TBranch        *b_antikt4HIItrNoFR_NoFlow;   //!
   TBranch        *b_antikt4HIItrNoFR_UncalibEt;   //!
   TBranch        *b_antikt4HIItrNoFR_PassedFR;   //!
   TBranch        *b_antikt4HIItrNoFR_const_n;   //!
   TBranch        *b_antikt4HIItrNoFR_const_et;   //!
   TBranch        *b_antikt4HIItrNoFR_const_eta;   //!
   TBranch        *b_antikt4HIItrNoFR_const_phi;   //!
   TBranch        *b_antikt4HIItrNoFR_sampling_et;   //!
   TBranch        *b_antikt4HIItrNoFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt4HIItrNoFR_bad_cell_n;   //!
   TBranch        *b_antikt4HIItrNoFR_bad_cell_et;   //!
   TBranch        *b_antikt4HIItrNoFR_bad_cell_area;   //!
   TBranch        *b_antikt4HIItrNoFR_empty_cell_n;   //!
   TBranch        *b_antikt4HIItrNoFR_empty_cell_et;   //!
   TBranch        *b_antikt4HIItrNoFR_empty_cell_area;   //!
   TBranch        *b_antikt4HIItrNoFR_total_cell_n;   //!
   TBranch        *b_antikt4HIItrNoFR_total_cell_et;   //!
   TBranch        *b_antikt4HIItrNoFR_total_cell_area;   //!
   TBranch        *b_antikt4HIItrNoFR_n90;   //!
   TBranch        *b_antikt4HIItrNoFR_fracSamplingMax;   //!
   TBranch        *b_antikt4HIItrNoFR_SamplingMax;   //!
   TBranch        *b_antikt4HIItrNoFR_n90constituents;   //!
   TBranch        *b_antikt4HIItrNoFR_Timing;   //!
   TBranch        *b_antikt4HIItrNoFR_LArQuality;   //!
   TBranch        *b_antikt4HIItrNoFR_HECQuality;   //!
   TBranch        *b_antikt4HIItrNoFR_TileQuality;   //!
   TBranch        *b_EMClusterJets_n;   //!
   TBranch        *b_EMClusterJets_E;   //!
   TBranch        *b_EMClusterJets_Et;   //!
   TBranch        *b_EMClusterJets_pt;   //!
   TBranch        *b_EMClusterJets_m;   //!
   TBranch        *b_EMClusterJets_eta;   //!
   TBranch        *b_EMClusterJets_phi;   //!
   TBranch        *b_antikt2HIItrEM_n;   //!
   TBranch        *b_antikt2HIItrEM_E;   //!
   TBranch        *b_antikt2HIItrEM_Et;   //!
   TBranch        *b_antikt2HIItrEM_pt;   //!
   TBranch        *b_antikt2HIItrEM_m;   //!
   TBranch        *b_antikt2HIItrEM_eta;   //!
   TBranch        *b_antikt2HIItrEM_phi;   //!
   TBranch        *b_antikt2HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt2HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt2HIItrEM_NoFlow;   //!
   TBranch        *b_antikt2HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt2HIItrEM_PassedFR;   //!
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
   TBranch        *b_antikt2HIItrEM_n90;   //!
   TBranch        *b_antikt2HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt2HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt2HIItrEM_n90constituents;   //!
   TBranch        *b_antikt2HIItrEM_Timing;   //!
   TBranch        *b_antikt2HIItrEM_LArQuality;   //!
   TBranch        *b_antikt2HIItrEM_HECQuality;   //!
   TBranch        *b_antikt2HIItrEM_TileQuality;   //!
   TBranch        *b_antikt2HIItrEMFR_n;   //!
   TBranch        *b_antikt2HIItrEMFR_E;   //!
   TBranch        *b_antikt2HIItrEMFR_Et;   //!
   TBranch        *b_antikt2HIItrEMFR_pt;   //!
   TBranch        *b_antikt2HIItrEMFR_m;   //!
   TBranch        *b_antikt2HIItrEMFR_eta;   //!
   TBranch        *b_antikt2HIItrEMFR_phi;   //!
   TBranch        *b_antikt2HIItrEMFR_SubtractedEt;   //!
   TBranch        *b_antikt2HIItrEMFR_CryoCorr;   //!
   TBranch        *b_antikt2HIItrEMFR_NoFlow;   //!
   TBranch        *b_antikt2HIItrEMFR_UncalibEt;   //!
   TBranch        *b_antikt2HIItrEMFR_PassedFR;   //!
   TBranch        *b_antikt2HIItrEMFR_const_n;   //!
   TBranch        *b_antikt2HIItrEMFR_const_et;   //!
   TBranch        *b_antikt2HIItrEMFR_const_eta;   //!
   TBranch        *b_antikt2HIItrEMFR_const_phi;   //!
   TBranch        *b_antikt2HIItrEMFR_sampling_et;   //!
   TBranch        *b_antikt2HIItrEMFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt2HIItrEMFR_bad_cell_n;   //!
   TBranch        *b_antikt2HIItrEMFR_bad_cell_et;   //!
   TBranch        *b_antikt2HIItrEMFR_bad_cell_area;   //!
   TBranch        *b_antikt2HIItrEMFR_empty_cell_n;   //!
   TBranch        *b_antikt2HIItrEMFR_empty_cell_et;   //!
   TBranch        *b_antikt2HIItrEMFR_empty_cell_area;   //!
   TBranch        *b_antikt2HIItrEMFR_total_cell_n;   //!
   TBranch        *b_antikt2HIItrEMFR_total_cell_et;   //!
   TBranch        *b_antikt2HIItrEMFR_total_cell_area;   //!
   TBranch        *b_antikt2HIItrEMFR_n90;   //!
   TBranch        *b_antikt2HIItrEMFR_fracSamplingMax;   //!
   TBranch        *b_antikt2HIItrEMFR_SamplingMax;   //!
   TBranch        *b_antikt2HIItrEMFR_n90constituents;   //!
   TBranch        *b_antikt2HIItrEMFR_Timing;   //!
   TBranch        *b_antikt2HIItrEMFR_LArQuality;   //!
   TBranch        *b_antikt2HIItrEMFR_HECQuality;   //!
   TBranch        *b_antikt2HIItrEMFR_TileQuality;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_Comb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_IP2D;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_IP3D;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_SV0;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_SV1;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_SV2;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_JetProb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_weight_GbbNN;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_label;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_dRminToB;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_dRminToC;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_dRminToT;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_BHadronpdg;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_vx_x;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_vx_y;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_truth_vx_z;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_assoctrk_signOfIP;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_assoctrk_signOfZIP;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_gentruthlepton_origin;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_gentruthlepton_slbarcode;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip2d_pu;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip2d_pb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip2d_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip3d_pu;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip3d_pb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip3d_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jetprob_ntrk;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv1_pu;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv1_pb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv1_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv2_pu;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv2_pb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv2_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_pu;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_pb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_pc;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfitcomb_pu;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfitcomb_pb;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfitcomb_pc;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfitcomb_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_gbbnn_nMatchingTracks;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_gbbnn_trkJetWidth;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_nvtx;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_ntrkAtVx;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_efrc;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_mass;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_sig3d;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_deltaPhi;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_jfit_deltaEta;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_d0val;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_d0sig;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_z0val;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_z0sig;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_w2D;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_w3D;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_pJP;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_pJPneg;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_grade;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_ipplus_trk_isFromV0;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_ntrkv;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_ntrkj;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_n2t;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_mass;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_efrc;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_x;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_y;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_z;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_err_x;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_err_y;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_err_z;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_cov_xy;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_cov_xz;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_cov_yz;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_chi2;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_ndof;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_svp_ntrk;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_n2t;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_mass;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_efrc;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_x;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_y;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_z;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_err_x;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_err_y;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_err_z;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_cov_xy;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_cov_xz;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_cov_yz;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_chi2;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_ndof;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_w;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_msvp_isValid;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_msvp_ntrkv;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_msvp_ntrkj;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_msvp_n2t;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_msvp_nVtx;   //!
   TBranch        *b_antikt2HIItrEMFR_flavor_component_msvp_normWeightedDist;   //!
   TBranch        *b_antikt3HIItrEM_n;   //!
   TBranch        *b_antikt3HIItrEM_E;   //!
   TBranch        *b_antikt3HIItrEM_Et;   //!
   TBranch        *b_antikt3HIItrEM_pt;   //!
   TBranch        *b_antikt3HIItrEM_m;   //!
   TBranch        *b_antikt3HIItrEM_eta;   //!
   TBranch        *b_antikt3HIItrEM_phi;   //!
   TBranch        *b_antikt3HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt3HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt3HIItrEM_NoFlow;   //!
   TBranch        *b_antikt3HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt3HIItrEM_PassedFR;   //!
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
   TBranch        *b_antikt3HIItrEM_n90;   //!
   TBranch        *b_antikt3HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt3HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt3HIItrEM_n90constituents;   //!
   TBranch        *b_antikt3HIItrEM_Timing;   //!
   TBranch        *b_antikt3HIItrEM_LArQuality;   //!
   TBranch        *b_antikt3HIItrEM_HECQuality;   //!
   TBranch        *b_antikt3HIItrEM_TileQuality;   //!
   TBranch        *b_antikt3HIItrEMFR_n;   //!
   TBranch        *b_antikt3HIItrEMFR_E;   //!
   TBranch        *b_antikt3HIItrEMFR_Et;   //!
   TBranch        *b_antikt3HIItrEMFR_pt;   //!
   TBranch        *b_antikt3HIItrEMFR_m;   //!
   TBranch        *b_antikt3HIItrEMFR_eta;   //!
   TBranch        *b_antikt3HIItrEMFR_phi;   //!
   TBranch        *b_antikt3HIItrEMFR_SubtractedEt;   //!
   TBranch        *b_antikt3HIItrEMFR_CryoCorr;   //!
   TBranch        *b_antikt3HIItrEMFR_NoFlow;   //!
   TBranch        *b_antikt3HIItrEMFR_UncalibEt;   //!
   TBranch        *b_antikt3HIItrEMFR_PassedFR;   //!
   TBranch        *b_antikt3HIItrEMFR_const_n;   //!
   TBranch        *b_antikt3HIItrEMFR_const_et;   //!
   TBranch        *b_antikt3HIItrEMFR_const_eta;   //!
   TBranch        *b_antikt3HIItrEMFR_const_phi;   //!
   TBranch        *b_antikt3HIItrEMFR_sampling_et;   //!
   TBranch        *b_antikt3HIItrEMFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt3HIItrEMFR_bad_cell_n;   //!
   TBranch        *b_antikt3HIItrEMFR_bad_cell_et;   //!
   TBranch        *b_antikt3HIItrEMFR_bad_cell_area;   //!
   TBranch        *b_antikt3HIItrEMFR_empty_cell_n;   //!
   TBranch        *b_antikt3HIItrEMFR_empty_cell_et;   //!
   TBranch        *b_antikt3HIItrEMFR_empty_cell_area;   //!
   TBranch        *b_antikt3HIItrEMFR_total_cell_n;   //!
   TBranch        *b_antikt3HIItrEMFR_total_cell_et;   //!
   TBranch        *b_antikt3HIItrEMFR_total_cell_area;   //!
   TBranch        *b_antikt3HIItrEMFR_n90;   //!
   TBranch        *b_antikt3HIItrEMFR_fracSamplingMax;   //!
   TBranch        *b_antikt3HIItrEMFR_SamplingMax;   //!
   TBranch        *b_antikt3HIItrEMFR_n90constituents;   //!
   TBranch        *b_antikt3HIItrEMFR_Timing;   //!
   TBranch        *b_antikt3HIItrEMFR_LArQuality;   //!
   TBranch        *b_antikt3HIItrEMFR_HECQuality;   //!
   TBranch        *b_antikt3HIItrEMFR_TileQuality;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_Comb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_IP2D;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_IP3D;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_SV0;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_SV1;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_SV2;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_JetProb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_weight_GbbNN;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_label;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_dRminToB;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_dRminToC;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_dRminToT;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_BHadronpdg;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_vx_x;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_vx_y;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_truth_vx_z;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_assoctrk_signOfIP;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_assoctrk_signOfZIP;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_gentruthlepton_origin;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_gentruthlepton_slbarcode;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip2d_pu;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip2d_pb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip2d_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip3d_pu;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip3d_pb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip3d_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jetprob_ntrk;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv1_pu;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv1_pb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv1_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv2_pu;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv2_pb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv2_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_pu;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_pb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_pc;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfitcomb_pu;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfitcomb_pb;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfitcomb_pc;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfitcomb_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_gbbnn_nMatchingTracks;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_gbbnn_trkJetWidth;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_nvtx;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_ntrkAtVx;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_efrc;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_mass;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_sig3d;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_deltaPhi;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_jfit_deltaEta;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_d0val;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_d0sig;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_z0val;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_z0sig;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_w2D;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_w3D;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_pJP;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_pJPneg;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_grade;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_ipplus_trk_isFromV0;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_ntrkv;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_ntrkj;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_n2t;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_mass;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_efrc;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_x;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_y;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_z;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_err_x;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_err_y;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_err_z;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_cov_xy;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_cov_xz;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_cov_yz;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_chi2;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_ndof;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_svp_ntrk;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_n2t;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_mass;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_efrc;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_x;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_y;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_z;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_err_x;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_err_y;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_err_z;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_cov_xy;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_cov_xz;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_cov_yz;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_chi2;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_ndof;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_w;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_msvp_isValid;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_msvp_ntrkv;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_msvp_ntrkj;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_msvp_n2t;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_msvp_nVtx;   //!
   TBranch        *b_antikt3HIItrEMFR_flavor_component_msvp_normWeightedDist;   //!
   TBranch        *b_antikt4HIItrEM_n;   //!
   TBranch        *b_antikt4HIItrEM_E;   //!
   TBranch        *b_antikt4HIItrEM_Et;   //!
   TBranch        *b_antikt4HIItrEM_pt;   //!
   TBranch        *b_antikt4HIItrEM_m;   //!
   TBranch        *b_antikt4HIItrEM_eta;   //!
   TBranch        *b_antikt4HIItrEM_phi;   //!
   TBranch        *b_antikt4HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt4HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt4HIItrEM_NoFlow;   //!
   TBranch        *b_antikt4HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt4HIItrEM_PassedFR;   //!
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
   TBranch        *b_antikt4HIItrEM_n90;   //!
   TBranch        *b_antikt4HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt4HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt4HIItrEM_n90constituents;   //!
   TBranch        *b_antikt4HIItrEM_Timing;   //!
   TBranch        *b_antikt4HIItrEM_LArQuality;   //!
   TBranch        *b_antikt4HIItrEM_HECQuality;   //!
   TBranch        *b_antikt4HIItrEM_TileQuality;   //!
   TBranch        *b_antikt4HIItrEMFR_n;   //!
   TBranch        *b_antikt4HIItrEMFR_E;   //!
   TBranch        *b_antikt4HIItrEMFR_Et;   //!
   TBranch        *b_antikt4HIItrEMFR_pt;   //!
   TBranch        *b_antikt4HIItrEMFR_m;   //!
   TBranch        *b_antikt4HIItrEMFR_eta;   //!
   TBranch        *b_antikt4HIItrEMFR_phi;   //!
   TBranch        *b_antikt4HIItrEMFR_SubtractedEt;   //!
   TBranch        *b_antikt4HIItrEMFR_CryoCorr;   //!
   TBranch        *b_antikt4HIItrEMFR_NoFlow;   //!
   TBranch        *b_antikt4HIItrEMFR_UncalibEt;   //!
   TBranch        *b_antikt4HIItrEMFR_PassedFR;   //!
   TBranch        *b_antikt4HIItrEMFR_const_n;   //!
   TBranch        *b_antikt4HIItrEMFR_const_et;   //!
   TBranch        *b_antikt4HIItrEMFR_const_eta;   //!
   TBranch        *b_antikt4HIItrEMFR_const_phi;   //!
   TBranch        *b_antikt4HIItrEMFR_sampling_et;   //!
   TBranch        *b_antikt4HIItrEMFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt4HIItrEMFR_bad_cell_n;   //!
   TBranch        *b_antikt4HIItrEMFR_bad_cell_et;   //!
   TBranch        *b_antikt4HIItrEMFR_bad_cell_area;   //!
   TBranch        *b_antikt4HIItrEMFR_empty_cell_n;   //!
   TBranch        *b_antikt4HIItrEMFR_empty_cell_et;   //!
   TBranch        *b_antikt4HIItrEMFR_empty_cell_area;   //!
   TBranch        *b_antikt4HIItrEMFR_total_cell_n;   //!
   TBranch        *b_antikt4HIItrEMFR_total_cell_et;   //!
   TBranch        *b_antikt4HIItrEMFR_total_cell_area;   //!
   TBranch        *b_antikt4HIItrEMFR_n90;   //!
   TBranch        *b_antikt4HIItrEMFR_fracSamplingMax;   //!
   TBranch        *b_antikt4HIItrEMFR_SamplingMax;   //!
   TBranch        *b_antikt4HIItrEMFR_n90constituents;   //!
   TBranch        *b_antikt4HIItrEMFR_Timing;   //!
   TBranch        *b_antikt4HIItrEMFR_LArQuality;   //!
   TBranch        *b_antikt4HIItrEMFR_HECQuality;   //!
   TBranch        *b_antikt4HIItrEMFR_TileQuality;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_Comb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_IP2D;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_IP3D;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_SV0;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_SV1;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_SV2;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_JetProb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_weight_GbbNN;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_label;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_dRminToB;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_dRminToC;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_dRminToT;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_BHadronpdg;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_vx_x;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_vx_y;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_truth_vx_z;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_assoctrk_signOfIP;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_assoctrk_signOfZIP;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_gentruthlepton_origin;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_gentruthlepton_slbarcode;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip2d_pu;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip2d_pb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip2d_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip3d_pu;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip3d_pb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip3d_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jetprob_ntrk;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv1_pu;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv1_pb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv1_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv2_pu;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv2_pb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv2_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_pu;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_pb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_pc;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfitcomb_pu;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfitcomb_pb;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfitcomb_pc;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfitcomb_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_gbbnn_nMatchingTracks;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_gbbnn_trkJetWidth;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_nvtx;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_ntrkAtVx;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_efrc;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_mass;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_sig3d;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_deltaPhi;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_jfit_deltaEta;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_d0val;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_d0sig;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_z0val;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_z0sig;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_w2D;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_w3D;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_pJP;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_pJPneg;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_grade;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_ipplus_trk_isFromV0;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_ntrkv;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_ntrkj;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_n2t;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_mass;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_efrc;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_x;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_y;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_z;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_err_x;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_err_y;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_err_z;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_cov_xy;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_cov_xz;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_cov_yz;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_chi2;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_ndof;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_svp_ntrk;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_n2t;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_mass;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_efrc;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_x;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_y;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_z;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_err_x;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_err_y;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_err_z;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_cov_xy;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_cov_xz;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_cov_yz;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_chi2;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_ndof;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_w;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_msvp_isValid;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_msvp_ntrkv;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_msvp_ntrkj;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_msvp_n2t;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_msvp_nVtx;   //!
   TBranch        *b_antikt4HIItrEMFR_flavor_component_msvp_normWeightedDist;   //!
   TBranch        *b_antikt5HIItrEM_n;   //!
   TBranch        *b_antikt5HIItrEM_E;   //!
   TBranch        *b_antikt5HIItrEM_Et;   //!
   TBranch        *b_antikt5HIItrEM_pt;   //!
   TBranch        *b_antikt5HIItrEM_m;   //!
   TBranch        *b_antikt5HIItrEM_eta;   //!
   TBranch        *b_antikt5HIItrEM_phi;   //!
   TBranch        *b_antikt5HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt5HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt5HIItrEM_NoFlow;   //!
   TBranch        *b_antikt5HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt5HIItrEM_PassedFR;   //!
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
   TBranch        *b_antikt5HIItrEM_n90;   //!
   TBranch        *b_antikt5HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt5HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt5HIItrEM_n90constituents;   //!
   TBranch        *b_antikt5HIItrEM_Timing;   //!
   TBranch        *b_antikt5HIItrEM_LArQuality;   //!
   TBranch        *b_antikt5HIItrEM_HECQuality;   //!
   TBranch        *b_antikt5HIItrEM_TileQuality;   //!
   TBranch        *b_antikt5HIItrEMFR_n;   //!
   TBranch        *b_antikt5HIItrEMFR_E;   //!
   TBranch        *b_antikt5HIItrEMFR_Et;   //!
   TBranch        *b_antikt5HIItrEMFR_pt;   //!
   TBranch        *b_antikt5HIItrEMFR_m;   //!
   TBranch        *b_antikt5HIItrEMFR_eta;   //!
   TBranch        *b_antikt5HIItrEMFR_phi;   //!
   TBranch        *b_antikt5HIItrEMFR_SubtractedEt;   //!
   TBranch        *b_antikt5HIItrEMFR_CryoCorr;   //!
   TBranch        *b_antikt5HIItrEMFR_NoFlow;   //!
   TBranch        *b_antikt5HIItrEMFR_UncalibEt;   //!
   TBranch        *b_antikt5HIItrEMFR_PassedFR;   //!
   TBranch        *b_antikt5HIItrEMFR_const_n;   //!
   TBranch        *b_antikt5HIItrEMFR_const_et;   //!
   TBranch        *b_antikt5HIItrEMFR_const_eta;   //!
   TBranch        *b_antikt5HIItrEMFR_const_phi;   //!
   TBranch        *b_antikt5HIItrEMFR_sampling_et;   //!
   TBranch        *b_antikt5HIItrEMFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt5HIItrEMFR_bad_cell_n;   //!
   TBranch        *b_antikt5HIItrEMFR_bad_cell_et;   //!
   TBranch        *b_antikt5HIItrEMFR_bad_cell_area;   //!
   TBranch        *b_antikt5HIItrEMFR_empty_cell_n;   //!
   TBranch        *b_antikt5HIItrEMFR_empty_cell_et;   //!
   TBranch        *b_antikt5HIItrEMFR_empty_cell_area;   //!
   TBranch        *b_antikt5HIItrEMFR_total_cell_n;   //!
   TBranch        *b_antikt5HIItrEMFR_total_cell_et;   //!
   TBranch        *b_antikt5HIItrEMFR_total_cell_area;   //!
   TBranch        *b_antikt5HIItrEMFR_n90;   //!
   TBranch        *b_antikt5HIItrEMFR_fracSamplingMax;   //!
   TBranch        *b_antikt5HIItrEMFR_SamplingMax;   //!
   TBranch        *b_antikt5HIItrEMFR_n90constituents;   //!
   TBranch        *b_antikt5HIItrEMFR_Timing;   //!
   TBranch        *b_antikt5HIItrEMFR_LArQuality;   //!
   TBranch        *b_antikt5HIItrEMFR_HECQuality;   //!
   TBranch        *b_antikt5HIItrEMFR_TileQuality;   //!
   TBranch        *b_antikt6HIItrEM_n;   //!
   TBranch        *b_antikt6HIItrEM_E;   //!
   TBranch        *b_antikt6HIItrEM_Et;   //!
   TBranch        *b_antikt6HIItrEM_pt;   //!
   TBranch        *b_antikt6HIItrEM_m;   //!
   TBranch        *b_antikt6HIItrEM_eta;   //!
   TBranch        *b_antikt6HIItrEM_phi;   //!
   TBranch        *b_antikt6HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt6HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt6HIItrEM_NoFlow;   //!
   TBranch        *b_antikt6HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt6HIItrEM_PassedFR;   //!
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
   TBranch        *b_antikt6HIItrEM_n90;   //!
   TBranch        *b_antikt6HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt6HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt6HIItrEM_n90constituents;   //!
   TBranch        *b_antikt6HIItrEM_Timing;   //!
   TBranch        *b_antikt6HIItrEM_LArQuality;   //!
   TBranch        *b_antikt6HIItrEM_HECQuality;   //!
   TBranch        *b_antikt6HIItrEM_TileQuality;   //!
   TBranch        *b_antikt6HIItrEMFR_n;   //!
   TBranch        *b_antikt6HIItrEMFR_E;   //!
   TBranch        *b_antikt6HIItrEMFR_Et;   //!
   TBranch        *b_antikt6HIItrEMFR_pt;   //!
   TBranch        *b_antikt6HIItrEMFR_m;   //!
   TBranch        *b_antikt6HIItrEMFR_eta;   //!
   TBranch        *b_antikt6HIItrEMFR_phi;   //!
   TBranch        *b_antikt6HIItrEMFR_SubtractedEt;   //!
   TBranch        *b_antikt6HIItrEMFR_CryoCorr;   //!
   TBranch        *b_antikt6HIItrEMFR_NoFlow;   //!
   TBranch        *b_antikt6HIItrEMFR_UncalibEt;   //!
   TBranch        *b_antikt6HIItrEMFR_PassedFR;   //!
   TBranch        *b_antikt6HIItrEMFR_const_n;   //!
   TBranch        *b_antikt6HIItrEMFR_const_et;   //!
   TBranch        *b_antikt6HIItrEMFR_const_eta;   //!
   TBranch        *b_antikt6HIItrEMFR_const_phi;   //!
   TBranch        *b_antikt6HIItrEMFR_sampling_et;   //!
   TBranch        *b_antikt6HIItrEMFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt6HIItrEMFR_bad_cell_n;   //!
   TBranch        *b_antikt6HIItrEMFR_bad_cell_et;   //!
   TBranch        *b_antikt6HIItrEMFR_bad_cell_area;   //!
   TBranch        *b_antikt6HIItrEMFR_empty_cell_n;   //!
   TBranch        *b_antikt6HIItrEMFR_empty_cell_et;   //!
   TBranch        *b_antikt6HIItrEMFR_empty_cell_area;   //!
   TBranch        *b_antikt6HIItrEMFR_total_cell_n;   //!
   TBranch        *b_antikt6HIItrEMFR_total_cell_et;   //!
   TBranch        *b_antikt6HIItrEMFR_total_cell_area;   //!
   TBranch        *b_antikt6HIItrEMFR_n90;   //!
   TBranch        *b_antikt6HIItrEMFR_fracSamplingMax;   //!
   TBranch        *b_antikt6HIItrEMFR_SamplingMax;   //!
   TBranch        *b_antikt6HIItrEMFR_n90constituents;   //!
   TBranch        *b_antikt6HIItrEMFR_Timing;   //!
   TBranch        *b_antikt6HIItrEMFR_LArQuality;   //!
   TBranch        *b_antikt6HIItrEMFR_HECQuality;   //!
   TBranch        *b_antikt6HIItrEMFR_TileQuality;   //!
   TBranch        *b_antikt8HIItrEM_n;   //!
   TBranch        *b_antikt8HIItrEM_E;   //!
   TBranch        *b_antikt8HIItrEM_Et;   //!
   TBranch        *b_antikt8HIItrEM_pt;   //!
   TBranch        *b_antikt8HIItrEM_m;   //!
   TBranch        *b_antikt8HIItrEM_eta;   //!
   TBranch        *b_antikt8HIItrEM_phi;   //!
   TBranch        *b_antikt8HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt8HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt8HIItrEM_NoFlow;   //!
   TBranch        *b_antikt8HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt8HIItrEM_PassedFR;   //!
   TBranch        *b_antikt8HIItrEM_const_n;   //!
   TBranch        *b_antikt8HIItrEM_const_et;   //!
   TBranch        *b_antikt8HIItrEM_const_eta;   //!
   TBranch        *b_antikt8HIItrEM_const_phi;   //!
   TBranch        *b_antikt8HIItrEM_sampling_et;   //!
   TBranch        *b_antikt8HIItrEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt8HIItrEM_bad_cell_n;   //!
   TBranch        *b_antikt8HIItrEM_bad_cell_et;   //!
   TBranch        *b_antikt8HIItrEM_bad_cell_area;   //!
   TBranch        *b_antikt8HIItrEM_empty_cell_n;   //!
   TBranch        *b_antikt8HIItrEM_empty_cell_et;   //!
   TBranch        *b_antikt8HIItrEM_empty_cell_area;   //!
   TBranch        *b_antikt8HIItrEM_total_cell_n;   //!
   TBranch        *b_antikt8HIItrEM_total_cell_et;   //!
   TBranch        *b_antikt8HIItrEM_total_cell_area;   //!
   TBranch        *b_antikt8HIItrEM_n90;   //!
   TBranch        *b_antikt8HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt8HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt8HIItrEM_n90constituents;   //!
   TBranch        *b_antikt8HIItrEM_Timing;   //!
   TBranch        *b_antikt8HIItrEM_LArQuality;   //!
   TBranch        *b_antikt8HIItrEM_HECQuality;   //!
   TBranch        *b_antikt8HIItrEM_TileQuality;   //!
   TBranch        *b_antikt8HIItrEMFR_n;   //!
   TBranch        *b_antikt8HIItrEMFR_E;   //!
   TBranch        *b_antikt8HIItrEMFR_Et;   //!
   TBranch        *b_antikt8HIItrEMFR_pt;   //!
   TBranch        *b_antikt8HIItrEMFR_m;   //!
   TBranch        *b_antikt8HIItrEMFR_eta;   //!
   TBranch        *b_antikt8HIItrEMFR_phi;   //!
   TBranch        *b_antikt8HIItrEMFR_SubtractedEt;   //!
   TBranch        *b_antikt8HIItrEMFR_CryoCorr;   //!
   TBranch        *b_antikt8HIItrEMFR_NoFlow;   //!
   TBranch        *b_antikt8HIItrEMFR_UncalibEt;   //!
   TBranch        *b_antikt8HIItrEMFR_PassedFR;   //!
   TBranch        *b_antikt8HIItrEMFR_const_n;   //!
   TBranch        *b_antikt8HIItrEMFR_const_et;   //!
   TBranch        *b_antikt8HIItrEMFR_const_eta;   //!
   TBranch        *b_antikt8HIItrEMFR_const_phi;   //!
   TBranch        *b_antikt8HIItrEMFR_sampling_et;   //!
   TBranch        *b_antikt8HIItrEMFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt8HIItrEMFR_bad_cell_n;   //!
   TBranch        *b_antikt8HIItrEMFR_bad_cell_et;   //!
   TBranch        *b_antikt8HIItrEMFR_bad_cell_area;   //!
   TBranch        *b_antikt8HIItrEMFR_empty_cell_n;   //!
   TBranch        *b_antikt8HIItrEMFR_empty_cell_et;   //!
   TBranch        *b_antikt8HIItrEMFR_empty_cell_area;   //!
   TBranch        *b_antikt8HIItrEMFR_total_cell_n;   //!
   TBranch        *b_antikt8HIItrEMFR_total_cell_et;   //!
   TBranch        *b_antikt8HIItrEMFR_total_cell_area;   //!
   TBranch        *b_antikt8HIItrEMFR_n90;   //!
   TBranch        *b_antikt8HIItrEMFR_fracSamplingMax;   //!
   TBranch        *b_antikt8HIItrEMFR_SamplingMax;   //!
   TBranch        *b_antikt8HIItrEMFR_n90constituents;   //!
   TBranch        *b_antikt8HIItrEMFR_Timing;   //!
   TBranch        *b_antikt8HIItrEMFR_LArQuality;   //!
   TBranch        *b_antikt8HIItrEMFR_HECQuality;   //!
   TBranch        *b_antikt8HIItrEMFR_TileQuality;   //!
   TBranch        *b_antikt10HIItrEM_n;   //!
   TBranch        *b_antikt10HIItrEM_E;   //!
   TBranch        *b_antikt10HIItrEM_Et;   //!
   TBranch        *b_antikt10HIItrEM_pt;   //!
   TBranch        *b_antikt10HIItrEM_m;   //!
   TBranch        *b_antikt10HIItrEM_eta;   //!
   TBranch        *b_antikt10HIItrEM_phi;   //!
   TBranch        *b_antikt10HIItrEM_SubtractedEt;   //!
   TBranch        *b_antikt10HIItrEM_CryoCorr;   //!
   TBranch        *b_antikt10HIItrEM_NoFlow;   //!
   TBranch        *b_antikt10HIItrEM_UncalibEt;   //!
   TBranch        *b_antikt10HIItrEM_PassedFR;   //!
   TBranch        *b_antikt10HIItrEM_const_n;   //!
   TBranch        *b_antikt10HIItrEM_const_et;   //!
   TBranch        *b_antikt10HIItrEM_const_eta;   //!
   TBranch        *b_antikt10HIItrEM_const_phi;   //!
   TBranch        *b_antikt10HIItrEM_sampling_et;   //!
   TBranch        *b_antikt10HIItrEM_sampling_et_unsubtr;   //!
   TBranch        *b_antikt10HIItrEM_bad_cell_n;   //!
   TBranch        *b_antikt10HIItrEM_bad_cell_et;   //!
   TBranch        *b_antikt10HIItrEM_bad_cell_area;   //!
   TBranch        *b_antikt10HIItrEM_empty_cell_n;   //!
   TBranch        *b_antikt10HIItrEM_empty_cell_et;   //!
   TBranch        *b_antikt10HIItrEM_empty_cell_area;   //!
   TBranch        *b_antikt10HIItrEM_total_cell_n;   //!
   TBranch        *b_antikt10HIItrEM_total_cell_et;   //!
   TBranch        *b_antikt10HIItrEM_total_cell_area;   //!
   TBranch        *b_antikt10HIItrEM_n90;   //!
   TBranch        *b_antikt10HIItrEM_fracSamplingMax;   //!
   TBranch        *b_antikt10HIItrEM_SamplingMax;   //!
   TBranch        *b_antikt10HIItrEM_n90constituents;   //!
   TBranch        *b_antikt10HIItrEM_Timing;   //!
   TBranch        *b_antikt10HIItrEM_LArQuality;   //!
   TBranch        *b_antikt10HIItrEM_HECQuality;   //!
   TBranch        *b_antikt10HIItrEM_TileQuality;   //!
   TBranch        *b_antikt10HIItrEMFR_n;   //!
   TBranch        *b_antikt10HIItrEMFR_E;   //!
   TBranch        *b_antikt10HIItrEMFR_Et;   //!
   TBranch        *b_antikt10HIItrEMFR_pt;   //!
   TBranch        *b_antikt10HIItrEMFR_m;   //!
   TBranch        *b_antikt10HIItrEMFR_eta;   //!
   TBranch        *b_antikt10HIItrEMFR_phi;   //!
   TBranch        *b_antikt10HIItrEMFR_SubtractedEt;   //!
   TBranch        *b_antikt10HIItrEMFR_CryoCorr;   //!
   TBranch        *b_antikt10HIItrEMFR_NoFlow;   //!
   TBranch        *b_antikt10HIItrEMFR_UncalibEt;   //!
   TBranch        *b_antikt10HIItrEMFR_PassedFR;   //!
   TBranch        *b_antikt10HIItrEMFR_const_n;   //!
   TBranch        *b_antikt10HIItrEMFR_const_et;   //!
   TBranch        *b_antikt10HIItrEMFR_const_eta;   //!
   TBranch        *b_antikt10HIItrEMFR_const_phi;   //!
   TBranch        *b_antikt10HIItrEMFR_sampling_et;   //!
   TBranch        *b_antikt10HIItrEMFR_sampling_et_unsubtr;   //!
   TBranch        *b_antikt10HIItrEMFR_bad_cell_n;   //!
   TBranch        *b_antikt10HIItrEMFR_bad_cell_et;   //!
   TBranch        *b_antikt10HIItrEMFR_bad_cell_area;   //!
   TBranch        *b_antikt10HIItrEMFR_empty_cell_n;   //!
   TBranch        *b_antikt10HIItrEMFR_empty_cell_et;   //!
   TBranch        *b_antikt10HIItrEMFR_empty_cell_area;   //!
   TBranch        *b_antikt10HIItrEMFR_total_cell_n;   //!
   TBranch        *b_antikt10HIItrEMFR_total_cell_et;   //!
   TBranch        *b_antikt10HIItrEMFR_total_cell_area;   //!
   TBranch        *b_antikt10HIItrEMFR_n90;   //!
   TBranch        *b_antikt10HIItrEMFR_fracSamplingMax;   //!
   TBranch        *b_antikt10HIItrEMFR_SamplingMax;   //!
   TBranch        *b_antikt10HIItrEMFR_n90constituents;   //!
   TBranch        *b_antikt10HIItrEMFR_Timing;   //!
   TBranch        *b_antikt10HIItrEMFR_LArQuality;   //!
   TBranch        *b_antikt10HIItrEMFR_HECQuality;   //!
   TBranch        *b_antikt10HIItrEMFR_TileQuality;   //!
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
   TBranch        *b_antikt2Truth_n;   //!
   TBranch        *b_antikt2Truth_E;   //!
   TBranch        *b_antikt2Truth_Et;   //!
   TBranch        *b_antikt2Truth_pt;   //!
   TBranch        *b_antikt2Truth_m;   //!
   TBranch        *b_antikt2Truth_eta;   //!
   TBranch        *b_antikt2Truth_phi;   //!
   TBranch        *b_antikt3Truth_n;   //!
   TBranch        *b_antikt3Truth_E;   //!
   TBranch        *b_antikt3Truth_Et;   //!
   TBranch        *b_antikt3Truth_pt;   //!
   TBranch        *b_antikt3Truth_m;   //!
   TBranch        *b_antikt3Truth_eta;   //!
   TBranch        *b_antikt3Truth_phi;   //!
   TBranch        *b_antikt4Truth_n;   //!
   TBranch        *b_antikt4Truth_E;   //!
   TBranch        *b_antikt4Truth_Et;   //!
   TBranch        *b_antikt4Truth_pt;   //!
   TBranch        *b_antikt4Truth_m;   //!
   TBranch        *b_antikt4Truth_eta;   //!
   TBranch        *b_antikt4Truth_phi;   //!
   TBranch        *b_antikt5Truth_n;   //!
   TBranch        *b_antikt5Truth_E;   //!
   TBranch        *b_antikt5Truth_Et;   //!
   TBranch        *b_antikt5Truth_pt;   //!
   TBranch        *b_antikt5Truth_m;   //!
   TBranch        *b_antikt5Truth_eta;   //!
   TBranch        *b_antikt5Truth_phi;   //!
   TBranch        *b_antikt6Truth_n;   //!
   TBranch        *b_antikt6Truth_E;   //!
   TBranch        *b_antikt6Truth_Et;   //!
   TBranch        *b_antikt6Truth_pt;   //!
   TBranch        *b_antikt6Truth_m;   //!
   TBranch        *b_antikt6Truth_eta;   //!
   TBranch        *b_antikt6Truth_phi;   //!
   TBranch        *b_antikt8Truth_n;   //!
   TBranch        *b_antikt8Truth_E;   //!
   TBranch        *b_antikt8Truth_Et;   //!
   TBranch        *b_antikt8Truth_pt;   //!
   TBranch        *b_antikt8Truth_m;   //!
   TBranch        *b_antikt8Truth_eta;   //!
   TBranch        *b_antikt8Truth_phi;   //!
   TBranch        *b_antikt10Truth_n;   //!
   TBranch        *b_antikt10Truth_E;   //!
   TBranch        *b_antikt10Truth_Et;   //!
   TBranch        *b_antikt10Truth_pt;   //!
   TBranch        *b_antikt10Truth_m;   //!
   TBranch        *b_antikt10Truth_eta;   //!
   TBranch        *b_antikt10Truth_phi;   //!
   TBranch        *b_JetFlow_PsiFCAL0_w;   //!
   TBranch        *b_JetFlow_PsiPFCAL0_w;   //!
   TBranch        *b_JetFlow_PsiNFCAL0_w;   //!
   TBranch        *b_JetFlow_EtInLayer;   //!
   TBranch        *b_JetFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_JetFlow_AvgV2fromCalo;   //!
   TBranch        *b_HIFlow_v1_PsiFCAL0_w;   //!
   TBranch        *b_HIFlow_v1_PsiPFCAL0_w;   //!
   TBranch        *b_HIFlow_v1_PsiNFCAL0_w;   //!
   TBranch        *b_HIFlow_v1_EtInLayer;   //!
   TBranch        *b_HIFlow_v1_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v1_AvgV2fromCalo;   //!
   TBranch        *b_HIFlow_v2_PsiFCAL0_w;   //!
   TBranch        *b_HIFlow_v2_PsiPFCAL0_w;   //!
   TBranch        *b_HIFlow_v2_PsiNFCAL0_w;   //!
   TBranch        *b_HIFlow_v2_EtInLayer;   //!
   TBranch        *b_HIFlow_v2_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v2_AvgV2fromCalo;   //!
   TBranch        *b_HIFlow_v2_PsiHICaloUtilLayers;   //!
   TBranch        *b_HIFlow_v2_PsiEtHICaloUtilLayers;   //!
   TBranch        *b_HIFlow_v2_PsiPtrack;   //!
   TBranch        *b_HIFlow_v2_PsiNtrack;   //!
   TBranch        *b_HIFlow_v2_v2EMB1sil;   //!
   TBranch        *b_HIFlow_v2_v2FCAL0sil;   //!
   TBranch        *b_HIFlow_v2_v2track;   //!
   TBranch        *b_HIFlow_v2_Meanv2_Psi_From_EMB1CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v2_Meanv2_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v2_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0;   //!
   TBranch        *b_HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0;   //!
   TBranch        *b_HIFlow_v2_EtaEMBN1;   //!
   TBranch        *b_HIFlow_v2_EtaEMBP1;   //!
   TBranch        *b_HIFlow_v2_EtaFCALN0;   //!
   TBranch        *b_HIFlow_v2_EtaFCALP0;   //!
   TBranch        *b_HIFlow_v3_PsiFCAL0_w;   //!
   TBranch        *b_HIFlow_v3_PsiPFCAL0_w;   //!
   TBranch        *b_HIFlow_v3_PsiNFCAL0_w;   //!
   TBranch        *b_HIFlow_v3_EtInLayer;   //!
   TBranch        *b_HIFlow_v3_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v3_AvgV2fromCalo;   //!
   TBranch        *b_HIFlow_v4_PsiFCAL0_w;   //!
   TBranch        *b_HIFlow_v4_PsiPFCAL0_w;   //!
   TBranch        *b_HIFlow_v4_PsiNFCAL0_w;   //!
   TBranch        *b_HIFlow_v4_EtInLayer;   //!
   TBranch        *b_HIFlow_v4_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v4_AvgV2fromCalo;   //!
   TBranch        *b_HIFlow_v5_PsiFCAL0_w;   //!
   TBranch        *b_HIFlow_v5_PsiPFCAL0_w;   //!
   TBranch        *b_HIFlow_v5_PsiNFCAL0_w;   //!
   TBranch        *b_HIFlow_v5_EtInLayer;   //!
   TBranch        *b_HIFlow_v5_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v5_AvgV2fromCalo;   //!
   TBranch        *b_HIFlow_v6_PsiFCAL0_w;   //!
   TBranch        *b_HIFlow_v6_PsiPFCAL0_w;   //!
   TBranch        *b_HIFlow_v6_PsiNFCAL0_w;   //!
   TBranch        *b_HIFlow_v6_EtInLayer;   //!
   TBranch        *b_HIFlow_v6_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers;   //!
   TBranch        *b_HIFlow_v6_AvgV2fromCalo;   //!
   TBranch        *b_cl_eg_n;   //!
   TBranch        *b_cl_eg_pt;   //!
   TBranch        *b_cl_eg_eta;   //!
   TBranch        *b_cl_eg_phi;   //!
   TBranch        *b_cl_eg_E_em;   //!
   TBranch        *b_cl_eg_E_had;   //!
   TBranch        *b_cl_eg_firstEdens;   //!
   TBranch        *b_cl_eg_cellmaxfrac;   //!
   TBranch        *b_cl_eg_longitudinal;   //!
   TBranch        *b_cl_eg_secondlambda;   //!
   TBranch        *b_cl_eg_lateral;   //!
   TBranch        *b_cl_eg_secondR;   //!
   TBranch        *b_cl_eg_centerlambda;   //!
   TBranch        *b_cl_eg_deltaTheta;   //!
   TBranch        *b_cl_eg_deltaPhi;   //!
   TBranch        *b_cl_eg_centermag;   //!
   TBranch        *b_cl_eg_time;   //!
   TBranch        *b_cl_eg_E_PreSamplerB;   //!
   TBranch        *b_cl_eg_E_EMB1;   //!
   TBranch        *b_cl_eg_E_EMB2;   //!
   TBranch        *b_cl_eg_E_EMB3;   //!
   TBranch        *b_cl_eg_E_PreSamplerE;   //!
   TBranch        *b_cl_eg_E_EME1;   //!
   TBranch        *b_cl_eg_E_EME2;   //!
   TBranch        *b_cl_eg_E_EME3;   //!
   TBranch        *b_cl_eg_E_HEC0;   //!
   TBranch        *b_cl_eg_E_HEC1;   //!
   TBranch        *b_cl_eg_E_HEC2;   //!
   TBranch        *b_cl_eg_E_HEC3;   //!
   TBranch        *b_cl_eg_E_TileBar0;   //!
   TBranch        *b_cl_eg_E_TileBar1;   //!
   TBranch        *b_cl_eg_E_TileBar2;   //!
   TBranch        *b_cl_eg_E_TileGap1;   //!
   TBranch        *b_cl_eg_E_TileGap2;   //!
   TBranch        *b_cl_eg_E_TileGap3;   //!
   TBranch        *b_cl_eg_E_TileExt0;   //!
   TBranch        *b_cl_eg_E_TileExt1;   //!
   TBranch        *b_cl_eg_E_TileExt2;   //!
   TBranch        *b_cl_eg_E_FCAL0;   //!
   TBranch        *b_cl_eg_E_FCAL1;   //!
   TBranch        *b_cl_eg_E_FCAL2;   //!
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
   TBranch        *b_trig_EF_jet_EF_fj20_Ecorr;   //!
   TBranch        *b_trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j15_Ecorr;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j20_Ecorr;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1J10;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20;   //!
   TBranch        *b_trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j40_a4_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC;   //!
   TBranch        *b_trig_EF_jet_EF_j75_a4_EFFS_L1ZDC;   //!
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
   TBranch        *b_vx_sumWeightInliers;   //!
   TBranch        *b_vx_sumWeightOutliers;   //!
   TBranch        *b_vx_sumWeightPileup;   //!
   TBranch        *b_vx_sumWeightFakes;   //!
   TBranch        *b_vx_nInliers;   //!
   TBranch        *b_vx_nOutliers;   //!
   TBranch        *b_vx_nPileUp;   //!
   TBranch        *b_vx_nFakes;   //!
   TBranch        *b_vx_purity;   //!
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
   TBranch        *b_el_OQRecalc;   //!
   TBranch        *b_el_type;   //!
   TBranch        *b_el_origin;   //!
   TBranch        *b_el_typebkg;   //!
   TBranch        *b_el_originbkg;   //!
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
   TBranch        *b_ph_OQRecalc;   //!
   TBranch        *b_ph_type;   //!
   TBranch        *b_ph_origin;   //!
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
   TBranch        *b_ph_truth_isConv;   //!
   TBranch        *b_ph_truth_isBrem;   //!
   TBranch        *b_ph_truth_isFromHardProc;   //!
   TBranch        *b_ph_truth_isPhotonFromHardProc;   //!
   TBranch        *b_ph_truth_Rconv;   //!
   TBranch        *b_ph_truth_zconv;   //!
   TBranch        *b_ph_deltaEmax2;   //!
   TBranch        *b_ph_calibHitsShowerDepth;   //!
   TBranch        *b_ph_isIso;   //!
   TBranch        *b_ph_mvaptcone20;   //!
   TBranch        *b_ph_mvaptcone30;   //!
   TBranch        *b_ph_mvaptcone40;   //!
   TBranch        *b_ph_EF_dr;   //!
   TBranch        *b_ph_EF_index;   //!
   TBranch        *b_ph_L2_dr;   //!
   TBranch        *b_ph_L1_dr;   //!
   TBranch        *b_ph_L1_index;   //!
   TBranch        *b_mcVx_n;   //!
   TBranch        *b_mcVx_x;   //!
   TBranch        *b_mcVx_y;   //!
   TBranch        *b_mcVx_z;   //!
   TBranch        *b_mc_n;   //!
   TBranch        *b_mc_gen_E;   //!
   TBranch        *b_mc_gen_pt;   //!
   TBranch        *b_mc_gen_eta;   //!
   TBranch        *b_mc_gen_phi;   //!
   TBranch        *b_mc_gen_type;   //!
   TBranch        *b_mc_gen_status;   //!
   TBranch        *b_mc_gen_barcode;   //!
   TBranch        *b_mc_gen_mothertype;   //!
   TBranch        *b_mc_gen_motherbarcode;   //!
   TBranch        *b_mc_perigee_ok;   //!
   TBranch        *b_mc_perigee_d0;   //!
   TBranch        *b_mc_perigee_z0;   //!
   TBranch        *b_mc_perigee_phi;   //!
   TBranch        *b_mc_perigee_theta;   //!
   TBranch        *b_mc_perigee_qoverp;   //!
   TBranch        *b_mc_charge;   //!
   TBranch        *b_mc_child_n;   //!
   TBranch        *b_mc_child_barcode;   //!
   TBranch        *b_mc_child_pdg;   //!
   TBranch        *b_mc_begVtx_x;   //!
   TBranch        *b_mc_begVtx_y;   //!
   TBranch        *b_mc_begVtx_z;   //!
   TBranch        *b_mc_begVtx_barcode;   //!
   TBranch        *b_mc_endVtx_x;   //!
   TBranch        *b_mc_endVtx_y;   //!
   TBranch        *b_mc_endVtx_z;   //!
   TBranch        *b_mc_endVtx_barcode;   //!
   TBranch        *b_mc_unstable_n;   //!
   TBranch        *b_mc_unstable_gen_pt;   //!
   TBranch        *b_mc_unstable_gen_eta;   //!
   TBranch        *b_mc_unstable_gen_phi;   //!
   TBranch        *b_mc_unstable_gen_energy;   //!
   TBranch        *b_mc_unstable_perigee_ok;   //!
   TBranch        *b_mc_unstable_perigee_d0;   //!
   TBranch        *b_mc_unstable_perigee_z0;   //!
   TBranch        *b_mc_unstable_perigee_phi;   //!
   TBranch        *b_mc_unstable_perigee_theta;   //!
   TBranch        *b_mc_unstable_perigee_qoverp;   //!
   TBranch        *b_mc_unstable_pdg;   //!
   TBranch        *b_mc_unstable_charge;   //!
   TBranch        *b_mc_unstable_barcode;   //!
   TBranch        *b_mc_unstable_status;   //!
   TBranch        *b_mc_unstable_mother_pdg;   //!
   TBranch        *b_mc_unstable_mother_barcode;   //!
   TBranch        *b_mc_unstable_child_n;   //!
   TBranch        *b_mc_unstable_child_barcode;   //!
   TBranch        *b_mc_unstable_begVtx_x;   //!
   TBranch        *b_mc_unstable_begVtx_y;   //!
   TBranch        *b_mc_unstable_begVtx_z;   //!
   TBranch        *b_mc_unstable_begVtx_barcode;   //!
   TBranch        *b_mc_unstable_endVtx_x;   //!
   TBranch        *b_mc_unstable_endVtx_y;   //!
   TBranch        *b_mc_unstable_endVtx_z;   //!
   TBranch        *b_mc_unstable_endVtx_barcode;   //!

   reader(TTree *tree=0);
   virtual ~reader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef reader_cxx
reader::reader(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mc11_2TeV.105009.J0_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288_tid01056970_00/NTUP_HI.01056970._000119.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("mc11_2TeV.105009.J0_pythia_jetjet.merge.NTUP_HI.e1296_d724_r3635_p1288_tid01056970_00/NTUP_HI.01056970._000119.root");
      }
      f->GetObject("HeavyIonD3PD",tree);

   }
   Init(tree);
}

reader::~reader()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t reader::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t reader::LoadTree(Long64_t entry)
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

void reader::Init(TTree *tree)
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
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MU6 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MV = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NL = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NZ = 0;
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
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50 = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NL = 0;
   trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NZ = 0;
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
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MU0_NZ = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE5_NZ = 0;
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
   trig_EF_trigmuonef_EF_mu4_loose = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10 = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20 = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50 = 0;
   trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC = 0;
   trig_EF_trigmuonef_EF_mu6 = 0;
   trig_EF_trigmuonef_EF_mu6T = 0;
   trig_EF_trigmuonef_EF_mu6T_IDTrkNoCut = 0;
   trig_EF_trigmuonef_EF_mu6T_MSonly = 0;
   trig_EF_trigmuonef_EF_mu6_IDTrkNoCut = 0;
   trig_EF_trigmuonef_EF_mu6_L1VTE50 = 0;
   trig_EF_trigmuonef_EF_mu6_MSonly = 0;
   trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50 = 0;
   trig_L2_jet_L2_fj10_empty_larcalib = 0;
   trig_L2_jet_L2_fj20_Ecorr = 0;
   trig_L2_jet_L2_fj20_Ecorr_larcalib = 0;
   trig_L2_jet_L2_fj25_larcalib = 0;
   trig_L2_jet_L2_j10_empty_larcalib = 0;
   trig_L2_jet_L2_j15_Ecorr = 0;
   trig_L2_jet_L2_j15_Ecorr_larcalib = 0;
   trig_L2_jet_L2_j200_larcalib = 0;
   trig_L2_jet_L2_j20_Ecorr = 0;
   trig_L2_jet_L2_j20_Ecorr_larcalib = 0;
   trig_L2_jet_L2_j25_larcalib = 0;
   trig_L2_jet_L2_j50_larcalib = 0;
   trig_L2_jet_L2_j95_larcalib = 0;
   mb_E = 0;
   mb_eta = 0;
   mb_phi = 0;
   mb_time = 0;
   mb_quality = 0;
   mb_type = 0;
   mb_module = 0;
   mb_channel = 0;
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
   trk_pt = 0;
   trk_eta = 0;
   trk_d0_wrtPV = 0;
   trk_z0_wrtPV = 0;
   trk_phi_wrtPV = 0;
   trk_theta_wrtPV = 0;
   trk_qoverp_wrtPV = 0;
   trk_cov_d0_wrtPV = 0;
   trk_cov_z0_wrtPV = 0;
   trk_cov_phi_wrtPV = 0;
   trk_cov_theta_wrtPV = 0;
   trk_cov_qoverp_wrtPV = 0;
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
   trk_chi2 = 0;
   trk_ndof = 0;
   trk_nBLHits = 0;
   trk_nPixHits = 0;
   trk_nSCTHits = 0;
   trk_nTRTHits = 0;
   trk_nTRTHighTHits = 0;
   trk_nPixHoles = 0;
   trk_nSCTHoles = 0;
   trk_nTRTHoles = 0;
   trk_expectBLayerHit = 0;
   trk_nMDTHits = 0;
   trk_nCSCEtaHits = 0;
   trk_nCSCPhiHits = 0;
   trk_nRPCEtaHits = 0;
   trk_nRPCPhiHits = 0;
   trk_nTGCEtaHits = 0;
   trk_nTGCPhiHits = 0;
   trk_nHits = 0;
   trk_nHoles = 0;
   trk_hitPattern = 0;
   trk_TRTHighTHitsRatio = 0;
   trk_TRTHighTOutliersRatio = 0;
   trk_fitter = 0;
   trk_patternReco1 = 0;
   trk_patternReco2 = 0;
   trk_seedFinder = 0;
   trk_mc_probability = 0;
   trk_mc_barcode = 0;
   trk_mc_index = 0;
   ItrEMNoFRBkgrtower_CaloBkgrEt = 0;
   ItrEMNoFRBkgrtower_CaloBkgrRMS = 0;
   ItrEMNoFRBkgrtower_CaloBkgrCounts = 0;
   ItrEMNoFRBkgrtower_CaloBkgrEta = 0;
   ItrEMNoFRBkgrlayer_CaloBkgrEt = 0;
   ItrEMNoFRBkgrlayer_CaloBkgrRMS = 0;
   ItrEMNoFRBkgrlayer_CaloBkgrCounts = 0;
   ItrEMNoFRBkgrlayer_CaloBkgrEta = 0;
   antikt2HINoItr_E = 0;
   antikt2HINoItr_Et = 0;
   antikt2HINoItr_pt = 0;
   antikt2HINoItr_m = 0;
   antikt2HINoItr_eta = 0;
   antikt2HINoItr_phi = 0;
   antikt2HIItrNoFR_E = 0;
   antikt2HIItrNoFR_Et = 0;
   antikt2HIItrNoFR_pt = 0;
   antikt2HIItrNoFR_m = 0;
   antikt2HIItrNoFR_eta = 0;
   antikt2HIItrNoFR_phi = 0;
   antikt2HIItrNoFR_SubtractedEt = 0;
   antikt2HIItrNoFR_CryoCorr = 0;
   antikt2HIItrNoFR_NoFlow = 0;
   antikt2HIItrNoFR_UncalibEt = 0;
   antikt2HIItrNoFR_PassedFR = 0;
   antikt2HIItrNoFR_const_n = 0;
   antikt2HIItrNoFR_const_et = 0;
   antikt2HIItrNoFR_const_eta = 0;
   antikt2HIItrNoFR_const_phi = 0;
   antikt2HIItrNoFR_sampling_et = 0;
   antikt2HIItrNoFR_sampling_et_unsubtr = 0;
   antikt2HIItrNoFR_bad_cell_n = 0;
   antikt2HIItrNoFR_bad_cell_et = 0;
   antikt2HIItrNoFR_bad_cell_area = 0;
   antikt2HIItrNoFR_empty_cell_n = 0;
   antikt2HIItrNoFR_empty_cell_et = 0;
   antikt2HIItrNoFR_empty_cell_area = 0;
   antikt2HIItrNoFR_total_cell_n = 0;
   antikt2HIItrNoFR_total_cell_et = 0;
   antikt2HIItrNoFR_total_cell_area = 0;
   antikt2HIItrNoFR_n90 = 0;
   antikt2HIItrNoFR_fracSamplingMax = 0;
   antikt2HIItrNoFR_SamplingMax = 0;
   antikt2HIItrNoFR_n90constituents = 0;
   antikt2HIItrNoFR_Timing = 0;
   antikt2HIItrNoFR_LArQuality = 0;
   antikt2HIItrNoFR_HECQuality = 0;
   antikt2HIItrNoFR_TileQuality = 0;
   antikt4HIItrNoFR_E = 0;
   antikt4HIItrNoFR_Et = 0;
   antikt4HIItrNoFR_pt = 0;
   antikt4HIItrNoFR_m = 0;
   antikt4HIItrNoFR_eta = 0;
   antikt4HIItrNoFR_phi = 0;
   antikt4HIItrNoFR_SubtractedEt = 0;
   antikt4HIItrNoFR_CryoCorr = 0;
   antikt4HIItrNoFR_NoFlow = 0;
   antikt4HIItrNoFR_UncalibEt = 0;
   antikt4HIItrNoFR_PassedFR = 0;
   antikt4HIItrNoFR_const_n = 0;
   antikt4HIItrNoFR_const_et = 0;
   antikt4HIItrNoFR_const_eta = 0;
   antikt4HIItrNoFR_const_phi = 0;
   antikt4HIItrNoFR_sampling_et = 0;
   antikt4HIItrNoFR_sampling_et_unsubtr = 0;
   antikt4HIItrNoFR_bad_cell_n = 0;
   antikt4HIItrNoFR_bad_cell_et = 0;
   antikt4HIItrNoFR_bad_cell_area = 0;
   antikt4HIItrNoFR_empty_cell_n = 0;
   antikt4HIItrNoFR_empty_cell_et = 0;
   antikt4HIItrNoFR_empty_cell_area = 0;
   antikt4HIItrNoFR_total_cell_n = 0;
   antikt4HIItrNoFR_total_cell_et = 0;
   antikt4HIItrNoFR_total_cell_area = 0;
   antikt4HIItrNoFR_n90 = 0;
   antikt4HIItrNoFR_fracSamplingMax = 0;
   antikt4HIItrNoFR_SamplingMax = 0;
   antikt4HIItrNoFR_n90constituents = 0;
   antikt4HIItrNoFR_Timing = 0;
   antikt4HIItrNoFR_LArQuality = 0;
   antikt4HIItrNoFR_HECQuality = 0;
   antikt4HIItrNoFR_TileQuality = 0;
   EMClusterJets_E = 0;
   EMClusterJets_Et = 0;
   EMClusterJets_pt = 0;
   EMClusterJets_m = 0;
   EMClusterJets_eta = 0;
   EMClusterJets_phi = 0;
   antikt2HIItrEM_E = 0;
   antikt2HIItrEM_Et = 0;
   antikt2HIItrEM_pt = 0;
   antikt2HIItrEM_m = 0;
   antikt2HIItrEM_eta = 0;
   antikt2HIItrEM_phi = 0;
   antikt2HIItrEM_SubtractedEt = 0;
   antikt2HIItrEM_CryoCorr = 0;
   antikt2HIItrEM_NoFlow = 0;
   antikt2HIItrEM_UncalibEt = 0;
   antikt2HIItrEM_PassedFR = 0;
   antikt2HIItrEM_const_n = 0;
   antikt2HIItrEM_const_et = 0;
   antikt2HIItrEM_const_eta = 0;
   antikt2HIItrEM_const_phi = 0;
   antikt2HIItrEM_sampling_et = 0;
   antikt2HIItrEM_sampling_et_unsubtr = 0;
   antikt2HIItrEM_bad_cell_n = 0;
   antikt2HIItrEM_bad_cell_et = 0;
   antikt2HIItrEM_bad_cell_area = 0;
   antikt2HIItrEM_empty_cell_n = 0;
   antikt2HIItrEM_empty_cell_et = 0;
   antikt2HIItrEM_empty_cell_area = 0;
   antikt2HIItrEM_total_cell_n = 0;
   antikt2HIItrEM_total_cell_et = 0;
   antikt2HIItrEM_total_cell_area = 0;
   antikt2HIItrEM_n90 = 0;
   antikt2HIItrEM_fracSamplingMax = 0;
   antikt2HIItrEM_SamplingMax = 0;
   antikt2HIItrEM_n90constituents = 0;
   antikt2HIItrEM_Timing = 0;
   antikt2HIItrEM_LArQuality = 0;
   antikt2HIItrEM_HECQuality = 0;
   antikt2HIItrEM_TileQuality = 0;
   antikt2HIItrEMFR_E = 0;
   antikt2HIItrEMFR_Et = 0;
   antikt2HIItrEMFR_pt = 0;
   antikt2HIItrEMFR_m = 0;
   antikt2HIItrEMFR_eta = 0;
   antikt2HIItrEMFR_phi = 0;
   antikt2HIItrEMFR_SubtractedEt = 0;
   antikt2HIItrEMFR_CryoCorr = 0;
   antikt2HIItrEMFR_NoFlow = 0;
   antikt2HIItrEMFR_UncalibEt = 0;
   antikt2HIItrEMFR_PassedFR = 0;
   antikt2HIItrEMFR_const_n = 0;
   antikt2HIItrEMFR_const_et = 0;
   antikt2HIItrEMFR_const_eta = 0;
   antikt2HIItrEMFR_const_phi = 0;
   antikt2HIItrEMFR_sampling_et = 0;
   antikt2HIItrEMFR_sampling_et_unsubtr = 0;
   antikt2HIItrEMFR_bad_cell_n = 0;
   antikt2HIItrEMFR_bad_cell_et = 0;
   antikt2HIItrEMFR_bad_cell_area = 0;
   antikt2HIItrEMFR_empty_cell_n = 0;
   antikt2HIItrEMFR_empty_cell_et = 0;
   antikt2HIItrEMFR_empty_cell_area = 0;
   antikt2HIItrEMFR_total_cell_n = 0;
   antikt2HIItrEMFR_total_cell_et = 0;
   antikt2HIItrEMFR_total_cell_area = 0;
   antikt2HIItrEMFR_n90 = 0;
   antikt2HIItrEMFR_fracSamplingMax = 0;
   antikt2HIItrEMFR_SamplingMax = 0;
   antikt2HIItrEMFR_n90constituents = 0;
   antikt2HIItrEMFR_Timing = 0;
   antikt2HIItrEMFR_LArQuality = 0;
   antikt2HIItrEMFR_HECQuality = 0;
   antikt2HIItrEMFR_TileQuality = 0;
   antikt2HIItrEMFR_flavor_weight_Comb = 0;
   antikt2HIItrEMFR_flavor_weight_IP2D = 0;
   antikt2HIItrEMFR_flavor_weight_IP3D = 0;
   antikt2HIItrEMFR_flavor_weight_SV0 = 0;
   antikt2HIItrEMFR_flavor_weight_SV1 = 0;
   antikt2HIItrEMFR_flavor_weight_SV2 = 0;
   antikt2HIItrEMFR_flavor_weight_JetProb = 0;
   antikt2HIItrEMFR_flavor_weight_SoftMuonTag = 0;
   antikt2HIItrEMFR_flavor_weight_JetFitterTagNN = 0;
   antikt2HIItrEMFR_flavor_weight_JetFitterCOMBNN = 0;
   antikt2HIItrEMFR_flavor_weight_GbbNN = 0;
   antikt2HIItrEMFR_flavor_truth_label = 0;
   antikt2HIItrEMFR_flavor_truth_dRminToB = 0;
   antikt2HIItrEMFR_flavor_truth_dRminToC = 0;
   antikt2HIItrEMFR_flavor_truth_dRminToT = 0;
   antikt2HIItrEMFR_flavor_truth_BHadronpdg = 0;
   antikt2HIItrEMFR_flavor_truth_vx_x = 0;
   antikt2HIItrEMFR_flavor_truth_vx_y = 0;
   antikt2HIItrEMFR_flavor_truth_vx_z = 0;
   antikt2HIItrEMFR_flavor_component_assoctrk_signOfIP = 0;
   antikt2HIItrEMFR_flavor_component_assoctrk_signOfZIP = 0;
   antikt2HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx = 0;
   antikt2HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx = 0;
   antikt2HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx = 0;
   antikt2HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx = 0;
   antikt2HIItrEMFR_flavor_component_gentruthlepton_origin = 0;
   antikt2HIItrEMFR_flavor_component_gentruthlepton_slbarcode = 0;
   antikt2HIItrEMFR_flavor_component_ip2d_pu = 0;
   antikt2HIItrEMFR_flavor_component_ip2d_pb = 0;
   antikt2HIItrEMFR_flavor_component_ip2d_isValid = 0;
   antikt2HIItrEMFR_flavor_component_ip2d_ntrk = 0;
   antikt2HIItrEMFR_flavor_component_ip3d_pu = 0;
   antikt2HIItrEMFR_flavor_component_ip3d_pb = 0;
   antikt2HIItrEMFR_flavor_component_ip3d_isValid = 0;
   antikt2HIItrEMFR_flavor_component_ip3d_ntrk = 0;
   antikt2HIItrEMFR_flavor_component_jetprob_ntrk = 0;
   antikt2HIItrEMFR_flavor_component_sv1_pu = 0;
   antikt2HIItrEMFR_flavor_component_sv1_pb = 0;
   antikt2HIItrEMFR_flavor_component_sv1_isValid = 0;
   antikt2HIItrEMFR_flavor_component_sv2_pu = 0;
   antikt2HIItrEMFR_flavor_component_sv2_pb = 0;
   antikt2HIItrEMFR_flavor_component_sv2_isValid = 0;
   antikt2HIItrEMFR_flavor_component_jfit_pu = 0;
   antikt2HIItrEMFR_flavor_component_jfit_pb = 0;
   antikt2HIItrEMFR_flavor_component_jfit_pc = 0;
   antikt2HIItrEMFR_flavor_component_jfit_isValid = 0;
   antikt2HIItrEMFR_flavor_component_jfitcomb_pu = 0;
   antikt2HIItrEMFR_flavor_component_jfitcomb_pb = 0;
   antikt2HIItrEMFR_flavor_component_jfitcomb_pc = 0;
   antikt2HIItrEMFR_flavor_component_jfitcomb_isValid = 0;
   antikt2HIItrEMFR_flavor_component_gbbnn_nMatchingTracks = 0;
   antikt2HIItrEMFR_flavor_component_gbbnn_trkJetWidth = 0;
   antikt2HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR = 0;
   antikt2HIItrEMFR_flavor_component_jfit_nvtx = 0;
   antikt2HIItrEMFR_flavor_component_jfit_nvtx1t = 0;
   antikt2HIItrEMFR_flavor_component_jfit_ntrkAtVx = 0;
   antikt2HIItrEMFR_flavor_component_jfit_efrc = 0;
   antikt2HIItrEMFR_flavor_component_jfit_mass = 0;
   antikt2HIItrEMFR_flavor_component_jfit_sig3d = 0;
   antikt2HIItrEMFR_flavor_component_jfit_deltaPhi = 0;
   antikt2HIItrEMFR_flavor_component_jfit_deltaEta = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_d0val = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_d0sig = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_z0val = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_z0sig = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_w2D = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_w3D = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_pJP = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_pJPneg = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_grade = 0;
   antikt2HIItrEMFR_flavor_component_ipplus_trk_isFromV0 = 0;
   antikt2HIItrEMFR_flavor_component_svp_isValid = 0;
   antikt2HIItrEMFR_flavor_component_svp_ntrkv = 0;
   antikt2HIItrEMFR_flavor_component_svp_ntrkj = 0;
   antikt2HIItrEMFR_flavor_component_svp_n2t = 0;
   antikt2HIItrEMFR_flavor_component_svp_mass = 0;
   antikt2HIItrEMFR_flavor_component_svp_efrc = 0;
   antikt2HIItrEMFR_flavor_component_svp_x = 0;
   antikt2HIItrEMFR_flavor_component_svp_y = 0;
   antikt2HIItrEMFR_flavor_component_svp_z = 0;
   antikt2HIItrEMFR_flavor_component_svp_err_x = 0;
   antikt2HIItrEMFR_flavor_component_svp_err_y = 0;
   antikt2HIItrEMFR_flavor_component_svp_err_z = 0;
   antikt2HIItrEMFR_flavor_component_svp_cov_xy = 0;
   antikt2HIItrEMFR_flavor_component_svp_cov_xz = 0;
   antikt2HIItrEMFR_flavor_component_svp_cov_yz = 0;
   antikt2HIItrEMFR_flavor_component_svp_chi2 = 0;
   antikt2HIItrEMFR_flavor_component_svp_ndof = 0;
   antikt2HIItrEMFR_flavor_component_svp_ntrk = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_isValid = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_ntrkv = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_ntrkj = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_n2t = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_mass = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_efrc = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_x = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_y = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_z = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_err_x = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_err_y = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_err_z = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_cov_xy = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_cov_xz = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_cov_yz = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_chi2 = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_ndof = 0;
   antikt2HIItrEMFR_flavor_component_sv0p_ntrk = 0;
   antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_w = 0;
   antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel = 0;
   antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet = 0;
   antikt2HIItrEMFR_flavor_component_msvp_isValid = 0;
   antikt2HIItrEMFR_flavor_component_msvp_ntrkv = 0;
   antikt2HIItrEMFR_flavor_component_msvp_ntrkj = 0;
   antikt2HIItrEMFR_flavor_component_msvp_n2t = 0;
   antikt2HIItrEMFR_flavor_component_msvp_nVtx = 0;
   antikt2HIItrEMFR_flavor_component_msvp_normWeightedDist = 0;
   antikt3HIItrEM_E = 0;
   antikt3HIItrEM_Et = 0;
   antikt3HIItrEM_pt = 0;
   antikt3HIItrEM_m = 0;
   antikt3HIItrEM_eta = 0;
   antikt3HIItrEM_phi = 0;
   antikt3HIItrEM_SubtractedEt = 0;
   antikt3HIItrEM_CryoCorr = 0;
   antikt3HIItrEM_NoFlow = 0;
   antikt3HIItrEM_UncalibEt = 0;
   antikt3HIItrEM_PassedFR = 0;
   antikt3HIItrEM_const_n = 0;
   antikt3HIItrEM_const_et = 0;
   antikt3HIItrEM_const_eta = 0;
   antikt3HIItrEM_const_phi = 0;
   antikt3HIItrEM_sampling_et = 0;
   antikt3HIItrEM_sampling_et_unsubtr = 0;
   antikt3HIItrEM_bad_cell_n = 0;
   antikt3HIItrEM_bad_cell_et = 0;
   antikt3HIItrEM_bad_cell_area = 0;
   antikt3HIItrEM_empty_cell_n = 0;
   antikt3HIItrEM_empty_cell_et = 0;
   antikt3HIItrEM_empty_cell_area = 0;
   antikt3HIItrEM_total_cell_n = 0;
   antikt3HIItrEM_total_cell_et = 0;
   antikt3HIItrEM_total_cell_area = 0;
   antikt3HIItrEM_n90 = 0;
   antikt3HIItrEM_fracSamplingMax = 0;
   antikt3HIItrEM_SamplingMax = 0;
   antikt3HIItrEM_n90constituents = 0;
   antikt3HIItrEM_Timing = 0;
   antikt3HIItrEM_LArQuality = 0;
   antikt3HIItrEM_HECQuality = 0;
   antikt3HIItrEM_TileQuality = 0;
   antikt3HIItrEMFR_E = 0;
   antikt3HIItrEMFR_Et = 0;
   antikt3HIItrEMFR_pt = 0;
   antikt3HIItrEMFR_m = 0;
   antikt3HIItrEMFR_eta = 0;
   antikt3HIItrEMFR_phi = 0;
   antikt3HIItrEMFR_SubtractedEt = 0;
   antikt3HIItrEMFR_CryoCorr = 0;
   antikt3HIItrEMFR_NoFlow = 0;
   antikt3HIItrEMFR_UncalibEt = 0;
   antikt3HIItrEMFR_PassedFR = 0;
   antikt3HIItrEMFR_const_n = 0;
   antikt3HIItrEMFR_const_et = 0;
   antikt3HIItrEMFR_const_eta = 0;
   antikt3HIItrEMFR_const_phi = 0;
   antikt3HIItrEMFR_sampling_et = 0;
   antikt3HIItrEMFR_sampling_et_unsubtr = 0;
   antikt3HIItrEMFR_bad_cell_n = 0;
   antikt3HIItrEMFR_bad_cell_et = 0;
   antikt3HIItrEMFR_bad_cell_area = 0;
   antikt3HIItrEMFR_empty_cell_n = 0;
   antikt3HIItrEMFR_empty_cell_et = 0;
   antikt3HIItrEMFR_empty_cell_area = 0;
   antikt3HIItrEMFR_total_cell_n = 0;
   antikt3HIItrEMFR_total_cell_et = 0;
   antikt3HIItrEMFR_total_cell_area = 0;
   antikt3HIItrEMFR_n90 = 0;
   antikt3HIItrEMFR_fracSamplingMax = 0;
   antikt3HIItrEMFR_SamplingMax = 0;
   antikt3HIItrEMFR_n90constituents = 0;
   antikt3HIItrEMFR_Timing = 0;
   antikt3HIItrEMFR_LArQuality = 0;
   antikt3HIItrEMFR_HECQuality = 0;
   antikt3HIItrEMFR_TileQuality = 0;
   antikt3HIItrEMFR_flavor_weight_Comb = 0;
   antikt3HIItrEMFR_flavor_weight_IP2D = 0;
   antikt3HIItrEMFR_flavor_weight_IP3D = 0;
   antikt3HIItrEMFR_flavor_weight_SV0 = 0;
   antikt3HIItrEMFR_flavor_weight_SV1 = 0;
   antikt3HIItrEMFR_flavor_weight_SV2 = 0;
   antikt3HIItrEMFR_flavor_weight_JetProb = 0;
   antikt3HIItrEMFR_flavor_weight_SoftMuonTag = 0;
   antikt3HIItrEMFR_flavor_weight_JetFitterTagNN = 0;
   antikt3HIItrEMFR_flavor_weight_JetFitterCOMBNN = 0;
   antikt3HIItrEMFR_flavor_weight_GbbNN = 0;
   antikt3HIItrEMFR_flavor_truth_label = 0;
   antikt3HIItrEMFR_flavor_truth_dRminToB = 0;
   antikt3HIItrEMFR_flavor_truth_dRminToC = 0;
   antikt3HIItrEMFR_flavor_truth_dRminToT = 0;
   antikt3HIItrEMFR_flavor_truth_BHadronpdg = 0;
   antikt3HIItrEMFR_flavor_truth_vx_x = 0;
   antikt3HIItrEMFR_flavor_truth_vx_y = 0;
   antikt3HIItrEMFR_flavor_truth_vx_z = 0;
   antikt3HIItrEMFR_flavor_component_assoctrk_signOfIP = 0;
   antikt3HIItrEMFR_flavor_component_assoctrk_signOfZIP = 0;
   antikt3HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx = 0;
   antikt3HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx = 0;
   antikt3HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx = 0;
   antikt3HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx = 0;
   antikt3HIItrEMFR_flavor_component_gentruthlepton_origin = 0;
   antikt3HIItrEMFR_flavor_component_gentruthlepton_slbarcode = 0;
   antikt3HIItrEMFR_flavor_component_ip2d_pu = 0;
   antikt3HIItrEMFR_flavor_component_ip2d_pb = 0;
   antikt3HIItrEMFR_flavor_component_ip2d_isValid = 0;
   antikt3HIItrEMFR_flavor_component_ip2d_ntrk = 0;
   antikt3HIItrEMFR_flavor_component_ip3d_pu = 0;
   antikt3HIItrEMFR_flavor_component_ip3d_pb = 0;
   antikt3HIItrEMFR_flavor_component_ip3d_isValid = 0;
   antikt3HIItrEMFR_flavor_component_ip3d_ntrk = 0;
   antikt3HIItrEMFR_flavor_component_jetprob_ntrk = 0;
   antikt3HIItrEMFR_flavor_component_sv1_pu = 0;
   antikt3HIItrEMFR_flavor_component_sv1_pb = 0;
   antikt3HIItrEMFR_flavor_component_sv1_isValid = 0;
   antikt3HIItrEMFR_flavor_component_sv2_pu = 0;
   antikt3HIItrEMFR_flavor_component_sv2_pb = 0;
   antikt3HIItrEMFR_flavor_component_sv2_isValid = 0;
   antikt3HIItrEMFR_flavor_component_jfit_pu = 0;
   antikt3HIItrEMFR_flavor_component_jfit_pb = 0;
   antikt3HIItrEMFR_flavor_component_jfit_pc = 0;
   antikt3HIItrEMFR_flavor_component_jfit_isValid = 0;
   antikt3HIItrEMFR_flavor_component_jfitcomb_pu = 0;
   antikt3HIItrEMFR_flavor_component_jfitcomb_pb = 0;
   antikt3HIItrEMFR_flavor_component_jfitcomb_pc = 0;
   antikt3HIItrEMFR_flavor_component_jfitcomb_isValid = 0;
   antikt3HIItrEMFR_flavor_component_gbbnn_nMatchingTracks = 0;
   antikt3HIItrEMFR_flavor_component_gbbnn_trkJetWidth = 0;
   antikt3HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR = 0;
   antikt3HIItrEMFR_flavor_component_jfit_nvtx = 0;
   antikt3HIItrEMFR_flavor_component_jfit_nvtx1t = 0;
   antikt3HIItrEMFR_flavor_component_jfit_ntrkAtVx = 0;
   antikt3HIItrEMFR_flavor_component_jfit_efrc = 0;
   antikt3HIItrEMFR_flavor_component_jfit_mass = 0;
   antikt3HIItrEMFR_flavor_component_jfit_sig3d = 0;
   antikt3HIItrEMFR_flavor_component_jfit_deltaPhi = 0;
   antikt3HIItrEMFR_flavor_component_jfit_deltaEta = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_d0val = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_d0sig = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_z0val = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_z0sig = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_w2D = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_w3D = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_pJP = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_pJPneg = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_grade = 0;
   antikt3HIItrEMFR_flavor_component_ipplus_trk_isFromV0 = 0;
   antikt3HIItrEMFR_flavor_component_svp_isValid = 0;
   antikt3HIItrEMFR_flavor_component_svp_ntrkv = 0;
   antikt3HIItrEMFR_flavor_component_svp_ntrkj = 0;
   antikt3HIItrEMFR_flavor_component_svp_n2t = 0;
   antikt3HIItrEMFR_flavor_component_svp_mass = 0;
   antikt3HIItrEMFR_flavor_component_svp_efrc = 0;
   antikt3HIItrEMFR_flavor_component_svp_x = 0;
   antikt3HIItrEMFR_flavor_component_svp_y = 0;
   antikt3HIItrEMFR_flavor_component_svp_z = 0;
   antikt3HIItrEMFR_flavor_component_svp_err_x = 0;
   antikt3HIItrEMFR_flavor_component_svp_err_y = 0;
   antikt3HIItrEMFR_flavor_component_svp_err_z = 0;
   antikt3HIItrEMFR_flavor_component_svp_cov_xy = 0;
   antikt3HIItrEMFR_flavor_component_svp_cov_xz = 0;
   antikt3HIItrEMFR_flavor_component_svp_cov_yz = 0;
   antikt3HIItrEMFR_flavor_component_svp_chi2 = 0;
   antikt3HIItrEMFR_flavor_component_svp_ndof = 0;
   antikt3HIItrEMFR_flavor_component_svp_ntrk = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_isValid = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_ntrkv = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_ntrkj = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_n2t = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_mass = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_efrc = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_x = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_y = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_z = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_err_x = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_err_y = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_err_z = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_cov_xy = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_cov_xz = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_cov_yz = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_chi2 = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_ndof = 0;
   antikt3HIItrEMFR_flavor_component_sv0p_ntrk = 0;
   antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_w = 0;
   antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel = 0;
   antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet = 0;
   antikt3HIItrEMFR_flavor_component_msvp_isValid = 0;
   antikt3HIItrEMFR_flavor_component_msvp_ntrkv = 0;
   antikt3HIItrEMFR_flavor_component_msvp_ntrkj = 0;
   antikt3HIItrEMFR_flavor_component_msvp_n2t = 0;
   antikt3HIItrEMFR_flavor_component_msvp_nVtx = 0;
   antikt3HIItrEMFR_flavor_component_msvp_normWeightedDist = 0;
   antikt4HIItrEM_E = 0;
   antikt4HIItrEM_Et = 0;
   antikt4HIItrEM_pt = 0;
   antikt4HIItrEM_m = 0;
   antikt4HIItrEM_eta = 0;
   antikt4HIItrEM_phi = 0;
   antikt4HIItrEM_SubtractedEt = 0;
   antikt4HIItrEM_CryoCorr = 0;
   antikt4HIItrEM_NoFlow = 0;
   antikt4HIItrEM_UncalibEt = 0;
   antikt4HIItrEM_PassedFR = 0;
   antikt4HIItrEM_const_n = 0;
   antikt4HIItrEM_const_et = 0;
   antikt4HIItrEM_const_eta = 0;
   antikt4HIItrEM_const_phi = 0;
   antikt4HIItrEM_sampling_et = 0;
   antikt4HIItrEM_sampling_et_unsubtr = 0;
   antikt4HIItrEM_bad_cell_n = 0;
   antikt4HIItrEM_bad_cell_et = 0;
   antikt4HIItrEM_bad_cell_area = 0;
   antikt4HIItrEM_empty_cell_n = 0;
   antikt4HIItrEM_empty_cell_et = 0;
   antikt4HIItrEM_empty_cell_area = 0;
   antikt4HIItrEM_total_cell_n = 0;
   antikt4HIItrEM_total_cell_et = 0;
   antikt4HIItrEM_total_cell_area = 0;
   antikt4HIItrEM_n90 = 0;
   antikt4HIItrEM_fracSamplingMax = 0;
   antikt4HIItrEM_SamplingMax = 0;
   antikt4HIItrEM_n90constituents = 0;
   antikt4HIItrEM_Timing = 0;
   antikt4HIItrEM_LArQuality = 0;
   antikt4HIItrEM_HECQuality = 0;
   antikt4HIItrEM_TileQuality = 0;
   antikt4HIItrEMFR_E = 0;
   antikt4HIItrEMFR_Et = 0;
   antikt4HIItrEMFR_pt = 0;
   antikt4HIItrEMFR_m = 0;
   antikt4HIItrEMFR_eta = 0;
   antikt4HIItrEMFR_phi = 0;
   antikt4HIItrEMFR_SubtractedEt = 0;
   antikt4HIItrEMFR_CryoCorr = 0;
   antikt4HIItrEMFR_NoFlow = 0;
   antikt4HIItrEMFR_UncalibEt = 0;
   antikt4HIItrEMFR_PassedFR = 0;
   antikt4HIItrEMFR_const_n = 0;
   antikt4HIItrEMFR_const_et = 0;
   antikt4HIItrEMFR_const_eta = 0;
   antikt4HIItrEMFR_const_phi = 0;
   antikt4HIItrEMFR_sampling_et = 0;
   antikt4HIItrEMFR_sampling_et_unsubtr = 0;
   antikt4HIItrEMFR_bad_cell_n = 0;
   antikt4HIItrEMFR_bad_cell_et = 0;
   antikt4HIItrEMFR_bad_cell_area = 0;
   antikt4HIItrEMFR_empty_cell_n = 0;
   antikt4HIItrEMFR_empty_cell_et = 0;
   antikt4HIItrEMFR_empty_cell_area = 0;
   antikt4HIItrEMFR_total_cell_n = 0;
   antikt4HIItrEMFR_total_cell_et = 0;
   antikt4HIItrEMFR_total_cell_area = 0;
   antikt4HIItrEMFR_n90 = 0;
   antikt4HIItrEMFR_fracSamplingMax = 0;
   antikt4HIItrEMFR_SamplingMax = 0;
   antikt4HIItrEMFR_n90constituents = 0;
   antikt4HIItrEMFR_Timing = 0;
   antikt4HIItrEMFR_LArQuality = 0;
   antikt4HIItrEMFR_HECQuality = 0;
   antikt4HIItrEMFR_TileQuality = 0;
   antikt4HIItrEMFR_flavor_weight_Comb = 0;
   antikt4HIItrEMFR_flavor_weight_IP2D = 0;
   antikt4HIItrEMFR_flavor_weight_IP3D = 0;
   antikt4HIItrEMFR_flavor_weight_SV0 = 0;
   antikt4HIItrEMFR_flavor_weight_SV1 = 0;
   antikt4HIItrEMFR_flavor_weight_SV2 = 0;
   antikt4HIItrEMFR_flavor_weight_JetProb = 0;
   antikt4HIItrEMFR_flavor_weight_SoftMuonTag = 0;
   antikt4HIItrEMFR_flavor_weight_JetFitterTagNN = 0;
   antikt4HIItrEMFR_flavor_weight_JetFitterCOMBNN = 0;
   antikt4HIItrEMFR_flavor_weight_GbbNN = 0;
   antikt4HIItrEMFR_flavor_truth_label = 0;
   antikt4HIItrEMFR_flavor_truth_dRminToB = 0;
   antikt4HIItrEMFR_flavor_truth_dRminToC = 0;
   antikt4HIItrEMFR_flavor_truth_dRminToT = 0;
   antikt4HIItrEMFR_flavor_truth_BHadronpdg = 0;
   antikt4HIItrEMFR_flavor_truth_vx_x = 0;
   antikt4HIItrEMFR_flavor_truth_vx_y = 0;
   antikt4HIItrEMFR_flavor_truth_vx_z = 0;
   antikt4HIItrEMFR_flavor_component_assoctrk_signOfIP = 0;
   antikt4HIItrEMFR_flavor_component_assoctrk_signOfZIP = 0;
   antikt4HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx = 0;
   antikt4HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx = 0;
   antikt4HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx = 0;
   antikt4HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx = 0;
   antikt4HIItrEMFR_flavor_component_gentruthlepton_origin = 0;
   antikt4HIItrEMFR_flavor_component_gentruthlepton_slbarcode = 0;
   antikt4HIItrEMFR_flavor_component_ip2d_pu = 0;
   antikt4HIItrEMFR_flavor_component_ip2d_pb = 0;
   antikt4HIItrEMFR_flavor_component_ip2d_isValid = 0;
   antikt4HIItrEMFR_flavor_component_ip2d_ntrk = 0;
   antikt4HIItrEMFR_flavor_component_ip3d_pu = 0;
   antikt4HIItrEMFR_flavor_component_ip3d_pb = 0;
   antikt4HIItrEMFR_flavor_component_ip3d_isValid = 0;
   antikt4HIItrEMFR_flavor_component_ip3d_ntrk = 0;
   antikt4HIItrEMFR_flavor_component_jetprob_ntrk = 0;
   antikt4HIItrEMFR_flavor_component_sv1_pu = 0;
   antikt4HIItrEMFR_flavor_component_sv1_pb = 0;
   antikt4HIItrEMFR_flavor_component_sv1_isValid = 0;
   antikt4HIItrEMFR_flavor_component_sv2_pu = 0;
   antikt4HIItrEMFR_flavor_component_sv2_pb = 0;
   antikt4HIItrEMFR_flavor_component_sv2_isValid = 0;
   antikt4HIItrEMFR_flavor_component_jfit_pu = 0;
   antikt4HIItrEMFR_flavor_component_jfit_pb = 0;
   antikt4HIItrEMFR_flavor_component_jfit_pc = 0;
   antikt4HIItrEMFR_flavor_component_jfit_isValid = 0;
   antikt4HIItrEMFR_flavor_component_jfitcomb_pu = 0;
   antikt4HIItrEMFR_flavor_component_jfitcomb_pb = 0;
   antikt4HIItrEMFR_flavor_component_jfitcomb_pc = 0;
   antikt4HIItrEMFR_flavor_component_jfitcomb_isValid = 0;
   antikt4HIItrEMFR_flavor_component_gbbnn_nMatchingTracks = 0;
   antikt4HIItrEMFR_flavor_component_gbbnn_trkJetWidth = 0;
   antikt4HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR = 0;
   antikt4HIItrEMFR_flavor_component_jfit_nvtx = 0;
   antikt4HIItrEMFR_flavor_component_jfit_nvtx1t = 0;
   antikt4HIItrEMFR_flavor_component_jfit_ntrkAtVx = 0;
   antikt4HIItrEMFR_flavor_component_jfit_efrc = 0;
   antikt4HIItrEMFR_flavor_component_jfit_mass = 0;
   antikt4HIItrEMFR_flavor_component_jfit_sig3d = 0;
   antikt4HIItrEMFR_flavor_component_jfit_deltaPhi = 0;
   antikt4HIItrEMFR_flavor_component_jfit_deltaEta = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_d0val = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_d0sig = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_z0val = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_z0sig = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_w2D = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_w3D = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_pJP = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_pJPneg = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_grade = 0;
   antikt4HIItrEMFR_flavor_component_ipplus_trk_isFromV0 = 0;
   antikt4HIItrEMFR_flavor_component_svp_isValid = 0;
   antikt4HIItrEMFR_flavor_component_svp_ntrkv = 0;
   antikt4HIItrEMFR_flavor_component_svp_ntrkj = 0;
   antikt4HIItrEMFR_flavor_component_svp_n2t = 0;
   antikt4HIItrEMFR_flavor_component_svp_mass = 0;
   antikt4HIItrEMFR_flavor_component_svp_efrc = 0;
   antikt4HIItrEMFR_flavor_component_svp_x = 0;
   antikt4HIItrEMFR_flavor_component_svp_y = 0;
   antikt4HIItrEMFR_flavor_component_svp_z = 0;
   antikt4HIItrEMFR_flavor_component_svp_err_x = 0;
   antikt4HIItrEMFR_flavor_component_svp_err_y = 0;
   antikt4HIItrEMFR_flavor_component_svp_err_z = 0;
   antikt4HIItrEMFR_flavor_component_svp_cov_xy = 0;
   antikt4HIItrEMFR_flavor_component_svp_cov_xz = 0;
   antikt4HIItrEMFR_flavor_component_svp_cov_yz = 0;
   antikt4HIItrEMFR_flavor_component_svp_chi2 = 0;
   antikt4HIItrEMFR_flavor_component_svp_ndof = 0;
   antikt4HIItrEMFR_flavor_component_svp_ntrk = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_isValid = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_ntrkv = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_ntrkj = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_n2t = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_mass = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_efrc = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_x = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_y = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_z = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_err_x = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_err_y = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_err_z = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_cov_xy = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_cov_xz = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_cov_yz = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_chi2 = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_ndof = 0;
   antikt4HIItrEMFR_flavor_component_sv0p_ntrk = 0;
   antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_w = 0;
   antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel = 0;
   antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet = 0;
   antikt4HIItrEMFR_flavor_component_msvp_isValid = 0;
   antikt4HIItrEMFR_flavor_component_msvp_ntrkv = 0;
   antikt4HIItrEMFR_flavor_component_msvp_ntrkj = 0;
   antikt4HIItrEMFR_flavor_component_msvp_n2t = 0;
   antikt4HIItrEMFR_flavor_component_msvp_nVtx = 0;
   antikt4HIItrEMFR_flavor_component_msvp_normWeightedDist = 0;
   antikt5HIItrEM_E = 0;
   antikt5HIItrEM_Et = 0;
   antikt5HIItrEM_pt = 0;
   antikt5HIItrEM_m = 0;
   antikt5HIItrEM_eta = 0;
   antikt5HIItrEM_phi = 0;
   antikt5HIItrEM_SubtractedEt = 0;
   antikt5HIItrEM_CryoCorr = 0;
   antikt5HIItrEM_NoFlow = 0;
   antikt5HIItrEM_UncalibEt = 0;
   antikt5HIItrEM_PassedFR = 0;
   antikt5HIItrEM_const_n = 0;
   antikt5HIItrEM_const_et = 0;
   antikt5HIItrEM_const_eta = 0;
   antikt5HIItrEM_const_phi = 0;
   antikt5HIItrEM_sampling_et = 0;
   antikt5HIItrEM_sampling_et_unsubtr = 0;
   antikt5HIItrEM_bad_cell_n = 0;
   antikt5HIItrEM_bad_cell_et = 0;
   antikt5HIItrEM_bad_cell_area = 0;
   antikt5HIItrEM_empty_cell_n = 0;
   antikt5HIItrEM_empty_cell_et = 0;
   antikt5HIItrEM_empty_cell_area = 0;
   antikt5HIItrEM_total_cell_n = 0;
   antikt5HIItrEM_total_cell_et = 0;
   antikt5HIItrEM_total_cell_area = 0;
   antikt5HIItrEM_n90 = 0;
   antikt5HIItrEM_fracSamplingMax = 0;
   antikt5HIItrEM_SamplingMax = 0;
   antikt5HIItrEM_n90constituents = 0;
   antikt5HIItrEM_Timing = 0;
   antikt5HIItrEM_LArQuality = 0;
   antikt5HIItrEM_HECQuality = 0;
   antikt5HIItrEM_TileQuality = 0;
   antikt5HIItrEMFR_E = 0;
   antikt5HIItrEMFR_Et = 0;
   antikt5HIItrEMFR_pt = 0;
   antikt5HIItrEMFR_m = 0;
   antikt5HIItrEMFR_eta = 0;
   antikt5HIItrEMFR_phi = 0;
   antikt5HIItrEMFR_SubtractedEt = 0;
   antikt5HIItrEMFR_CryoCorr = 0;
   antikt5HIItrEMFR_NoFlow = 0;
   antikt5HIItrEMFR_UncalibEt = 0;
   antikt5HIItrEMFR_PassedFR = 0;
   antikt5HIItrEMFR_const_n = 0;
   antikt5HIItrEMFR_const_et = 0;
   antikt5HIItrEMFR_const_eta = 0;
   antikt5HIItrEMFR_const_phi = 0;
   antikt5HIItrEMFR_sampling_et = 0;
   antikt5HIItrEMFR_sampling_et_unsubtr = 0;
   antikt5HIItrEMFR_bad_cell_n = 0;
   antikt5HIItrEMFR_bad_cell_et = 0;
   antikt5HIItrEMFR_bad_cell_area = 0;
   antikt5HIItrEMFR_empty_cell_n = 0;
   antikt5HIItrEMFR_empty_cell_et = 0;
   antikt5HIItrEMFR_empty_cell_area = 0;
   antikt5HIItrEMFR_total_cell_n = 0;
   antikt5HIItrEMFR_total_cell_et = 0;
   antikt5HIItrEMFR_total_cell_area = 0;
   antikt5HIItrEMFR_n90 = 0;
   antikt5HIItrEMFR_fracSamplingMax = 0;
   antikt5HIItrEMFR_SamplingMax = 0;
   antikt5HIItrEMFR_n90constituents = 0;
   antikt5HIItrEMFR_Timing = 0;
   antikt5HIItrEMFR_LArQuality = 0;
   antikt5HIItrEMFR_HECQuality = 0;
   antikt5HIItrEMFR_TileQuality = 0;
   antikt6HIItrEM_E = 0;
   antikt6HIItrEM_Et = 0;
   antikt6HIItrEM_pt = 0;
   antikt6HIItrEM_m = 0;
   antikt6HIItrEM_eta = 0;
   antikt6HIItrEM_phi = 0;
   antikt6HIItrEM_SubtractedEt = 0;
   antikt6HIItrEM_CryoCorr = 0;
   antikt6HIItrEM_NoFlow = 0;
   antikt6HIItrEM_UncalibEt = 0;
   antikt6HIItrEM_PassedFR = 0;
   antikt6HIItrEM_const_n = 0;
   antikt6HIItrEM_const_et = 0;
   antikt6HIItrEM_const_eta = 0;
   antikt6HIItrEM_const_phi = 0;
   antikt6HIItrEM_sampling_et = 0;
   antikt6HIItrEM_sampling_et_unsubtr = 0;
   antikt6HIItrEM_bad_cell_n = 0;
   antikt6HIItrEM_bad_cell_et = 0;
   antikt6HIItrEM_bad_cell_area = 0;
   antikt6HIItrEM_empty_cell_n = 0;
   antikt6HIItrEM_empty_cell_et = 0;
   antikt6HIItrEM_empty_cell_area = 0;
   antikt6HIItrEM_total_cell_n = 0;
   antikt6HIItrEM_total_cell_et = 0;
   antikt6HIItrEM_total_cell_area = 0;
   antikt6HIItrEM_n90 = 0;
   antikt6HIItrEM_fracSamplingMax = 0;
   antikt6HIItrEM_SamplingMax = 0;
   antikt6HIItrEM_n90constituents = 0;
   antikt6HIItrEM_Timing = 0;
   antikt6HIItrEM_LArQuality = 0;
   antikt6HIItrEM_HECQuality = 0;
   antikt6HIItrEM_TileQuality = 0;
   antikt6HIItrEMFR_E = 0;
   antikt6HIItrEMFR_Et = 0;
   antikt6HIItrEMFR_pt = 0;
   antikt6HIItrEMFR_m = 0;
   antikt6HIItrEMFR_eta = 0;
   antikt6HIItrEMFR_phi = 0;
   antikt6HIItrEMFR_SubtractedEt = 0;
   antikt6HIItrEMFR_CryoCorr = 0;
   antikt6HIItrEMFR_NoFlow = 0;
   antikt6HIItrEMFR_UncalibEt = 0;
   antikt6HIItrEMFR_PassedFR = 0;
   antikt6HIItrEMFR_const_n = 0;
   antikt6HIItrEMFR_const_et = 0;
   antikt6HIItrEMFR_const_eta = 0;
   antikt6HIItrEMFR_const_phi = 0;
   antikt6HIItrEMFR_sampling_et = 0;
   antikt6HIItrEMFR_sampling_et_unsubtr = 0;
   antikt6HIItrEMFR_bad_cell_n = 0;
   antikt6HIItrEMFR_bad_cell_et = 0;
   antikt6HIItrEMFR_bad_cell_area = 0;
   antikt6HIItrEMFR_empty_cell_n = 0;
   antikt6HIItrEMFR_empty_cell_et = 0;
   antikt6HIItrEMFR_empty_cell_area = 0;
   antikt6HIItrEMFR_total_cell_n = 0;
   antikt6HIItrEMFR_total_cell_et = 0;
   antikt6HIItrEMFR_total_cell_area = 0;
   antikt6HIItrEMFR_n90 = 0;
   antikt6HIItrEMFR_fracSamplingMax = 0;
   antikt6HIItrEMFR_SamplingMax = 0;
   antikt6HIItrEMFR_n90constituents = 0;
   antikt6HIItrEMFR_Timing = 0;
   antikt6HIItrEMFR_LArQuality = 0;
   antikt6HIItrEMFR_HECQuality = 0;
   antikt6HIItrEMFR_TileQuality = 0;
   antikt8HIItrEM_E = 0;
   antikt8HIItrEM_Et = 0;
   antikt8HIItrEM_pt = 0;
   antikt8HIItrEM_m = 0;
   antikt8HIItrEM_eta = 0;
   antikt8HIItrEM_phi = 0;
   antikt8HIItrEM_SubtractedEt = 0;
   antikt8HIItrEM_CryoCorr = 0;
   antikt8HIItrEM_NoFlow = 0;
   antikt8HIItrEM_UncalibEt = 0;
   antikt8HIItrEM_PassedFR = 0;
   antikt8HIItrEM_const_n = 0;
   antikt8HIItrEM_const_et = 0;
   antikt8HIItrEM_const_eta = 0;
   antikt8HIItrEM_const_phi = 0;
   antikt8HIItrEM_sampling_et = 0;
   antikt8HIItrEM_sampling_et_unsubtr = 0;
   antikt8HIItrEM_bad_cell_n = 0;
   antikt8HIItrEM_bad_cell_et = 0;
   antikt8HIItrEM_bad_cell_area = 0;
   antikt8HIItrEM_empty_cell_n = 0;
   antikt8HIItrEM_empty_cell_et = 0;
   antikt8HIItrEM_empty_cell_area = 0;
   antikt8HIItrEM_total_cell_n = 0;
   antikt8HIItrEM_total_cell_et = 0;
   antikt8HIItrEM_total_cell_area = 0;
   antikt8HIItrEM_n90 = 0;
   antikt8HIItrEM_fracSamplingMax = 0;
   antikt8HIItrEM_SamplingMax = 0;
   antikt8HIItrEM_n90constituents = 0;
   antikt8HIItrEM_Timing = 0;
   antikt8HIItrEM_LArQuality = 0;
   antikt8HIItrEM_HECQuality = 0;
   antikt8HIItrEM_TileQuality = 0;
   antikt8HIItrEMFR_E = 0;
   antikt8HIItrEMFR_Et = 0;
   antikt8HIItrEMFR_pt = 0;
   antikt8HIItrEMFR_m = 0;
   antikt8HIItrEMFR_eta = 0;
   antikt8HIItrEMFR_phi = 0;
   antikt8HIItrEMFR_SubtractedEt = 0;
   antikt8HIItrEMFR_CryoCorr = 0;
   antikt8HIItrEMFR_NoFlow = 0;
   antikt8HIItrEMFR_UncalibEt = 0;
   antikt8HIItrEMFR_PassedFR = 0;
   antikt8HIItrEMFR_const_n = 0;
   antikt8HIItrEMFR_const_et = 0;
   antikt8HIItrEMFR_const_eta = 0;
   antikt8HIItrEMFR_const_phi = 0;
   antikt8HIItrEMFR_sampling_et = 0;
   antikt8HIItrEMFR_sampling_et_unsubtr = 0;
   antikt8HIItrEMFR_bad_cell_n = 0;
   antikt8HIItrEMFR_bad_cell_et = 0;
   antikt8HIItrEMFR_bad_cell_area = 0;
   antikt8HIItrEMFR_empty_cell_n = 0;
   antikt8HIItrEMFR_empty_cell_et = 0;
   antikt8HIItrEMFR_empty_cell_area = 0;
   antikt8HIItrEMFR_total_cell_n = 0;
   antikt8HIItrEMFR_total_cell_et = 0;
   antikt8HIItrEMFR_total_cell_area = 0;
   antikt8HIItrEMFR_n90 = 0;
   antikt8HIItrEMFR_fracSamplingMax = 0;
   antikt8HIItrEMFR_SamplingMax = 0;
   antikt8HIItrEMFR_n90constituents = 0;
   antikt8HIItrEMFR_Timing = 0;
   antikt8HIItrEMFR_LArQuality = 0;
   antikt8HIItrEMFR_HECQuality = 0;
   antikt8HIItrEMFR_TileQuality = 0;
   antikt10HIItrEM_E = 0;
   antikt10HIItrEM_Et = 0;
   antikt10HIItrEM_pt = 0;
   antikt10HIItrEM_m = 0;
   antikt10HIItrEM_eta = 0;
   antikt10HIItrEM_phi = 0;
   antikt10HIItrEM_SubtractedEt = 0;
   antikt10HIItrEM_CryoCorr = 0;
   antikt10HIItrEM_NoFlow = 0;
   antikt10HIItrEM_UncalibEt = 0;
   antikt10HIItrEM_PassedFR = 0;
   antikt10HIItrEM_const_n = 0;
   antikt10HIItrEM_const_et = 0;
   antikt10HIItrEM_const_eta = 0;
   antikt10HIItrEM_const_phi = 0;
   antikt10HIItrEM_sampling_et = 0;
   antikt10HIItrEM_sampling_et_unsubtr = 0;
   antikt10HIItrEM_bad_cell_n = 0;
   antikt10HIItrEM_bad_cell_et = 0;
   antikt10HIItrEM_bad_cell_area = 0;
   antikt10HIItrEM_empty_cell_n = 0;
   antikt10HIItrEM_empty_cell_et = 0;
   antikt10HIItrEM_empty_cell_area = 0;
   antikt10HIItrEM_total_cell_n = 0;
   antikt10HIItrEM_total_cell_et = 0;
   antikt10HIItrEM_total_cell_area = 0;
   antikt10HIItrEM_n90 = 0;
   antikt10HIItrEM_fracSamplingMax = 0;
   antikt10HIItrEM_SamplingMax = 0;
   antikt10HIItrEM_n90constituents = 0;
   antikt10HIItrEM_Timing = 0;
   antikt10HIItrEM_LArQuality = 0;
   antikt10HIItrEM_HECQuality = 0;
   antikt10HIItrEM_TileQuality = 0;
   antikt10HIItrEMFR_E = 0;
   antikt10HIItrEMFR_Et = 0;
   antikt10HIItrEMFR_pt = 0;
   antikt10HIItrEMFR_m = 0;
   antikt10HIItrEMFR_eta = 0;
   antikt10HIItrEMFR_phi = 0;
   antikt10HIItrEMFR_SubtractedEt = 0;
   antikt10HIItrEMFR_CryoCorr = 0;
   antikt10HIItrEMFR_NoFlow = 0;
   antikt10HIItrEMFR_UncalibEt = 0;
   antikt10HIItrEMFR_PassedFR = 0;
   antikt10HIItrEMFR_const_n = 0;
   antikt10HIItrEMFR_const_et = 0;
   antikt10HIItrEMFR_const_eta = 0;
   antikt10HIItrEMFR_const_phi = 0;
   antikt10HIItrEMFR_sampling_et = 0;
   antikt10HIItrEMFR_sampling_et_unsubtr = 0;
   antikt10HIItrEMFR_bad_cell_n = 0;
   antikt10HIItrEMFR_bad_cell_et = 0;
   antikt10HIItrEMFR_bad_cell_area = 0;
   antikt10HIItrEMFR_empty_cell_n = 0;
   antikt10HIItrEMFR_empty_cell_et = 0;
   antikt10HIItrEMFR_empty_cell_area = 0;
   antikt10HIItrEMFR_total_cell_n = 0;
   antikt10HIItrEMFR_total_cell_et = 0;
   antikt10HIItrEMFR_total_cell_area = 0;
   antikt10HIItrEMFR_n90 = 0;
   antikt10HIItrEMFR_fracSamplingMax = 0;
   antikt10HIItrEMFR_SamplingMax = 0;
   antikt10HIItrEMFR_n90constituents = 0;
   antikt10HIItrEMFR_Timing = 0;
   antikt10HIItrEMFR_LArQuality = 0;
   antikt10HIItrEMFR_HECQuality = 0;
   antikt10HIItrEMFR_TileQuality = 0;
   antikt4Track_E = 0;
   antikt4Track_pt = 0;
   antikt4Track_m = 0;
   antikt4Track_eta = 0;
   antikt4Track_phi = 0;
   antikt4Track_const_n = 0;
   antikt4Track_const_pt = 0;
   antikt4Track_const_eta = 0;
   antikt4Track_const_phi = 0;
   antikt4Track_const_chi2 = 0;
   antikt4Track_const_d0_wrtPV = 0;
   antikt4Track_const_z0_wrtPV = 0;
   antikt4Track_const_phi0_wrtPV = 0;
   antikt4Track_const_theta_wrtPV = 0;
   antikt4Track_const_qop = 0;
   antikt4Track_const_ndof = 0;
   antikt4Track_const_nBLayerHits = 0;
   antikt4Track_const_nPixelHits = 0;
   antikt4Track_const_nSCTHits = 0;
   antikt4Track_const_nTRTHits = 0;
   antikt6Track_E = 0;
   antikt6Track_pt = 0;
   antikt6Track_m = 0;
   antikt6Track_eta = 0;
   antikt6Track_phi = 0;
   antikt6Track_const_n = 0;
   antikt6Track_const_pt = 0;
   antikt6Track_const_eta = 0;
   antikt6Track_const_phi = 0;
   antikt6Track_const_chi2 = 0;
   antikt6Track_const_d0_wrtPV = 0;
   antikt6Track_const_z0_wrtPV = 0;
   antikt6Track_const_phi0_wrtPV = 0;
   antikt6Track_const_theta_wrtPV = 0;
   antikt6Track_const_qop = 0;
   antikt6Track_const_ndof = 0;
   antikt6Track_const_nBLayerHits = 0;
   antikt6Track_const_nPixelHits = 0;
   antikt6Track_const_nSCTHits = 0;
   antikt6Track_const_nTRTHits = 0;
   antikt2Truth_E = 0;
   antikt2Truth_Et = 0;
   antikt2Truth_pt = 0;
   antikt2Truth_m = 0;
   antikt2Truth_eta = 0;
   antikt2Truth_phi = 0;
   antikt3Truth_E = 0;
   antikt3Truth_Et = 0;
   antikt3Truth_pt = 0;
   antikt3Truth_m = 0;
   antikt3Truth_eta = 0;
   antikt3Truth_phi = 0;
   antikt4Truth_E = 0;
   antikt4Truth_Et = 0;
   antikt4Truth_pt = 0;
   antikt4Truth_m = 0;
   antikt4Truth_eta = 0;
   antikt4Truth_phi = 0;
   antikt5Truth_E = 0;
   antikt5Truth_Et = 0;
   antikt5Truth_pt = 0;
   antikt5Truth_m = 0;
   antikt5Truth_eta = 0;
   antikt5Truth_phi = 0;
   antikt6Truth_E = 0;
   antikt6Truth_Et = 0;
   antikt6Truth_pt = 0;
   antikt6Truth_m = 0;
   antikt6Truth_eta = 0;
   antikt6Truth_phi = 0;
   antikt8Truth_E = 0;
   antikt8Truth_Et = 0;
   antikt8Truth_pt = 0;
   antikt8Truth_m = 0;
   antikt8Truth_eta = 0;
   antikt8Truth_phi = 0;
   antikt10Truth_E = 0;
   antikt10Truth_Et = 0;
   antikt10Truth_pt = 0;
   antikt10Truth_m = 0;
   antikt10Truth_eta = 0;
   antikt10Truth_phi = 0;
   JetFlow_EtInLayer = 0;
   JetFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers = 0;
   HIFlow_v1_EtInLayer = 0;
   HIFlow_v1_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers = 0;
   HIFlow_v2_EtInLayer = 0;
   HIFlow_v2_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers = 0;
   HIFlow_v2_PsiHICaloUtilLayers = 0;
   HIFlow_v2_PsiEtHICaloUtilLayers = 0;
   HIFlow_v2_Meanv2_Psi_From_EMB1CaloCel_IDLayers = 0;
   HIFlow_v2_Meanv2_Psi_From_FCAL0CaloCel_IDLayers = 0;
   HIFlow_v2_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers = 0;
   HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_EMBN1 = 0;
   HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_EMBP1 = 0;
   HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_FCALN0 = 0;
   HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_FCALP0 = 0;
   HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_EMBN1 = 0;
   HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_EMBP1 = 0;
   HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_FCALN0 = 0;
   HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_FCALP0 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0 = 0;
   HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0 = 0;
   HIFlow_v2_EtaEMBN1 = 0;
   HIFlow_v2_EtaEMBP1 = 0;
   HIFlow_v2_EtaFCALN0 = 0;
   HIFlow_v2_EtaFCALP0 = 0;
   HIFlow_v3_EtInLayer = 0;
   HIFlow_v3_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers = 0;
   HIFlow_v4_EtInLayer = 0;
   HIFlow_v4_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers = 0;
   HIFlow_v5_EtInLayer = 0;
   HIFlow_v5_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers = 0;
   HIFlow_v6_EtInLayer = 0;
   HIFlow_v6_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers = 0;
   cl_eg_pt = 0;
   cl_eg_eta = 0;
   cl_eg_phi = 0;
   cl_eg_E_em = 0;
   cl_eg_E_had = 0;
   cl_eg_firstEdens = 0;
   cl_eg_cellmaxfrac = 0;
   cl_eg_longitudinal = 0;
   cl_eg_secondlambda = 0;
   cl_eg_lateral = 0;
   cl_eg_secondR = 0;
   cl_eg_centerlambda = 0;
   cl_eg_deltaTheta = 0;
   cl_eg_deltaPhi = 0;
   cl_eg_centermag = 0;
   cl_eg_time = 0;
   cl_eg_E_PreSamplerB = 0;
   cl_eg_E_EMB1 = 0;
   cl_eg_E_EMB2 = 0;
   cl_eg_E_EMB3 = 0;
   cl_eg_E_PreSamplerE = 0;
   cl_eg_E_EME1 = 0;
   cl_eg_E_EME2 = 0;
   cl_eg_E_EME3 = 0;
   cl_eg_E_HEC0 = 0;
   cl_eg_E_HEC1 = 0;
   cl_eg_E_HEC2 = 0;
   cl_eg_E_HEC3 = 0;
   cl_eg_E_TileBar0 = 0;
   cl_eg_E_TileBar1 = 0;
   cl_eg_E_TileBar2 = 0;
   cl_eg_E_TileGap1 = 0;
   cl_eg_E_TileGap2 = 0;
   cl_eg_E_TileGap3 = 0;
   cl_eg_E_TileExt0 = 0;
   cl_eg_E_TileExt1 = 0;
   cl_eg_E_TileExt2 = 0;
   cl_eg_E_FCAL0 = 0;
   cl_eg_E_FCAL1 = 0;
   cl_eg_E_FCAL2 = 0;
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
   mu_staco_truth_dr = 0;
   mu_staco_truth_E = 0;
   mu_staco_truth_pt = 0;
   mu_staco_truth_eta = 0;
   mu_staco_truth_phi = 0;
   mu_staco_truth_type = 0;
   mu_staco_truth_status = 0;
   mu_staco_truth_barcode = 0;
   mu_staco_truth_mothertype = 0;
   mu_staco_truth_motherbarcode = 0;
   mu_staco_truth_matched = 0;
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
   mu_muid_truth_dr = 0;
   mu_muid_truth_E = 0;
   mu_muid_truth_pt = 0;
   mu_muid_truth_eta = 0;
   mu_muid_truth_phi = 0;
   mu_muid_truth_type = 0;
   mu_muid_truth_status = 0;
   mu_muid_truth_barcode = 0;
   mu_muid_truth_mothertype = 0;
   mu_muid_truth_motherbarcode = 0;
   mu_muid_truth_matched = 0;
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
   trig_L1_jet_et4x4 = 0;
   trig_L1_jet_et6x6 = 0;
   trig_L1_jet_et8x8 = 0;
   trig_L1_jet_RoIWord = 0;
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
   trig_L1_emtau_L1_2EM3 = 0;
   trig_L1_emtau_L1_2EM3_NL = 0;
   trig_L1_emtau_L1_2EM3_NZ = 0;
   trig_L1_emtau_L1_2EM5 = 0;
   trig_L1_emtau_L1_EM10 = 0;
   trig_L1_emtau_L1_EM12 = 0;
   trig_L1_emtau_L1_EM14 = 0;
   trig_L1_emtau_L1_EM16 = 0;
   trig_L1_emtau_L1_EM3 = 0;
   trig_L1_emtau_L1_EM3_EMPTY = 0;
   trig_L1_emtau_L1_EM3_FIRSTEMPTY = 0;
   trig_L1_emtau_L1_EM3_MV_VTE50 = 0;
   trig_L1_emtau_L1_EM3_NL = 0;
   trig_L1_emtau_L1_EM3_NZ = 0;
   trig_L1_emtau_L1_EM3_TE50 = 0;
   trig_L1_emtau_L1_EM3_UNPAIRED_ISO = 0;
   trig_L1_emtau_L1_EM3_UNPAIRED_NONISO = 0;
   trig_L1_emtau_L1_EM3_VTE50 = 0;
   trig_L1_emtau_L1_EM4 = 0;
   trig_L1_emtau_L1_EM5 = 0;
   trig_L1_emtau_L1_EM5_EMPTY = 0;
   trig_L1_emtau_L1_EM7 = 0;
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
   trig_EF_jet_EF_fj20_Ecorr = 0;
   trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j15_Ecorr = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1J10 = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20 = 0;
   trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j15_a4_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j20_Ecorr = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1J10 = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20 = 0;
   trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j20_a4_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS = 0;
   trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1J10 = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10 = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20 = 0;
   trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j40_a4_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC = 0;
   trig_EF_jet_EF_j75_a4_EFFS_L1ZDC = 0;
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
   trig_L2_jet_E = 0;
   trig_L2_jet_eta = 0;
   trig_L2_jet_phi = 0;
   trig_L2_jet_RoIWord = 0;
   trig_L2_jet_ehad0 = 0;
   trig_L2_jet_eem0 = 0;
   trig_L2_jet_nLeadingCells = 0;
   trig_L2_jet_hecf = 0;
   trig_L2_jet_jetQuality = 0;
   trig_L2_jet_emf = 0;
   trig_L2_jet_jetTimeCells = 0;
   vx_x = 0;
   vx_y = 0;
   vx_z = 0;
   vx_cov_x = 0;
   vx_cov_y = 0;
   vx_cov_z = 0;
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
   vx_sumWeightInliers = 0;
   vx_sumWeightOutliers = 0;
   vx_sumWeightPileup = 0;
   vx_sumWeightFakes = 0;
   vx_nInliers = 0;
   vx_nOutliers = 0;
   vx_nPileUp = 0;
   vx_nFakes = 0;
   vx_purity = 0;
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
   el_OQRecalc = 0;
   el_type = 0;
   el_origin = 0;
   el_typebkg = 0;
   el_originbkg = 0;
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
   el_deltaPhiRot = 0;
   el_expectHitInBLayer = 0;
   el_trackd0_physics = 0;
   el_etaSampling1 = 0;
   el_reta = 0;
   el_rphi = 0;
   el_EtringnoisedR03sig2 = 0;
   el_EtringnoisedR03sig3 = 0;
   el_EtringnoisedR03sig4 = 0;
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
   el_nPixHoles = 0;
   el_nSCTHoles = 0;
   el_nTRTHoles = 0;
   el_nBLSharedHits = 0;
   el_nPixSharedHits = 0;
   el_nSCTSharedHits = 0;
   el_nBLayerOutliers = 0;
   el_nPixelOutliers = 0;
   el_nSCTOutliers = 0;
   el_nTRTOutliers = 0;
   el_nTRTHighTOutliers = 0;
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
   el_hastrack = 0;
   el_deltaEmax2 = 0;
   el_calibHitsShowerDepth = 0;
   el_isIso = 0;
   el_mvaptcone20 = 0;
   el_mvaptcone30 = 0;
   el_mvaptcone40 = 0;
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
   ph_OQRecalc = 0;
   ph_type = 0;
   ph_origin = 0;
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
   ph_EtringnoisedR03sig2 = 0;
   ph_EtringnoisedR03sig3 = 0;
   ph_EtringnoisedR03sig4 = 0;
   ph_isolationlikelihoodjets = 0;
   ph_isolationlikelihoodhqelectrons = 0;
   ph_loglikelihood = 0;
   ph_photonweight = 0;
   ph_photonbgweight = 0;
   ph_neuralnet = 0;
   ph_Hmatrix = 0;
   ph_Hmatrix5 = 0;
   ph_adaboost = 0;
   ph_zvertex = 0;
   ph_errz = 0;
   ph_etap = 0;
   ph_depth = 0;
   ph_cl_E = 0;
   ph_cl_pt = 0;
   ph_cl_eta = 0;
   ph_cl_phi = 0;
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
   ph_truth_isConv = 0;
   ph_truth_isBrem = 0;
   ph_truth_isFromHardProc = 0;
   ph_truth_isPhotonFromHardProc = 0;
   ph_truth_Rconv = 0;
   ph_truth_zconv = 0;
   ph_deltaEmax2 = 0;
   ph_calibHitsShowerDepth = 0;
   ph_isIso = 0;
   ph_mvaptcone20 = 0;
   ph_mvaptcone30 = 0;
   ph_mvaptcone40 = 0;
   ph_EF_dr = 0;
   ph_EF_index = 0;
   ph_L2_dr = 0;
   ph_L1_dr = 0;
   ph_L1_index = 0;
   mcVx_x = 0;
   mcVx_y = 0;
   mcVx_z = 0;
   mc_gen_E = 0;
   mc_gen_pt = 0;
   mc_gen_eta = 0;
   mc_gen_phi = 0;
   mc_gen_type = 0;
   mc_gen_status = 0;
   mc_gen_barcode = 0;
   mc_gen_mothertype = 0;
   mc_gen_motherbarcode = 0;
   mc_perigee_ok = 0;
   mc_perigee_d0 = 0;
   mc_perigee_z0 = 0;
   mc_perigee_phi = 0;
   mc_perigee_theta = 0;
   mc_perigee_qoverp = 0;
   mc_charge = 0;
   mc_child_n = 0;
   mc_child_barcode = 0;
   mc_child_pdg = 0;
   mc_begVtx_x = 0;
   mc_begVtx_y = 0;
   mc_begVtx_z = 0;
   mc_begVtx_barcode = 0;
   mc_endVtx_x = 0;
   mc_endVtx_y = 0;
   mc_endVtx_z = 0;
   mc_endVtx_barcode = 0;
   mc_unstable_gen_pt = 0;
   mc_unstable_gen_eta = 0;
   mc_unstable_gen_phi = 0;
   mc_unstable_gen_energy = 0;
   mc_unstable_perigee_ok = 0;
   mc_unstable_perigee_d0 = 0;
   mc_unstable_perigee_z0 = 0;
   mc_unstable_perigee_phi = 0;
   mc_unstable_perigee_theta = 0;
   mc_unstable_perigee_qoverp = 0;
   mc_unstable_pdg = 0;
   mc_unstable_charge = 0;
   mc_unstable_barcode = 0;
   mc_unstable_status = 0;
   mc_unstable_mother_pdg = 0;
   mc_unstable_mother_barcode = 0;
   mc_unstable_child_n = 0;
   mc_unstable_child_barcode = 0;
   mc_unstable_begVtx_x = 0;
   mc_unstable_begVtx_y = 0;
   mc_unstable_begVtx_z = 0;
   mc_unstable_begVtx_barcode = 0;
   mc_unstable_endVtx_x = 0;
   mc_unstable_endVtx_y = 0;
   mc_unstable_endVtx_z = 0;
   mc_unstable_endVtx_barcode = 0;
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
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0_MU6", &EF_L1ItemStreamer_L1_2MU0_MU6, &b_EF_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0_MV", &EF_L1ItemStreamer_L1_2MU0_MV, &b_EF_L1ItemStreamer_L1_2MU0_MV);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0_NL", &EF_L1ItemStreamer_L1_2MU0_NL, &b_EF_L1ItemStreamer_L1_2MU0_NL);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0_NZ", &EF_L1ItemStreamer_L1_2MU0_NZ, &b_EF_L1ItemStreamer_L1_2MU0_NZ);
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
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_NL", &EF_L1ItemStreamer_L1_EM3_NL, &b_EF_L1ItemStreamer_L1_EM3_NL);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_NZ", &EF_L1ItemStreamer_L1_EM3_NZ, &b_EF_L1ItemStreamer_L1_EM3_NZ);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_TE50", &EF_L1ItemStreamer_L1_EM3_TE50, &b_EF_L1ItemStreamer_L1_EM3_TE50);
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
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_MV", &EF_L1ItemStreamer_L1_MU0_MV, &b_EF_L1ItemStreamer_L1_MU0_MV);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_MV_VTE50", &EF_L1ItemStreamer_L1_MU0_MV_VTE50, &b_EF_L1ItemStreamer_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_NL", &EF_L1ItemStreamer_L1_MU0_NL, &b_EF_L1ItemStreamer_L1_MU0_NL);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_NZ", &EF_L1ItemStreamer_L1_MU0_NZ, &b_EF_L1ItemStreamer_L1_MU0_NZ);
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
   fChain->SetBranchAddress("EF_e5_loose_L1VTE50", &EF_e5_loose_L1VTE50, &b_EF_e5_loose_L1VTE50);
   fChain->SetBranchAddress("EF_g10_loose", &EF_g10_loose, &b_EF_g10_loose);
   fChain->SetBranchAddress("EF_g10_loose_larcalib", &EF_g10_loose_larcalib, &b_EF_g10_loose_larcalib);
   fChain->SetBranchAddress("EF_g5_NoCut_cosmic", &EF_g5_NoCut_cosmic, &b_EF_g5_NoCut_cosmic);
   fChain->SetBranchAddress("EF_g5_loose", &EF_g5_loose, &b_EF_g5_loose);
   fChain->SetBranchAddress("EF_g5_loose_EFFS_L1ZDC", &EF_g5_loose_EFFS_L1ZDC, &b_EF_g5_loose_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_g5_loose_L1TE50", &EF_g5_loose_L1TE50, &b_EF_g5_loose_L1TE50);
   fChain->SetBranchAddress("EF_g5_loose_larcalib", &EF_g5_loose_larcalib, &b_EF_g5_loose_larcalib);
   fChain->SetBranchAddress("EF_g7_loose", &EF_g7_loose, &b_EF_g7_loose);
   fChain->SetBranchAddress("EF_g9_etcut", &EF_g9_etcut, &b_EF_g9_etcut);
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
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1MU0_NZ", &EF_mu4_MSonly_EFFS_L1MU0_NZ, &b_EF_mu4_MSonly_EFFS_L1MU0_NZ);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1TE10", &EF_mu4_MSonly_EFFS_L1TE10, &b_EF_mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1TE20", &EF_mu4_MSonly_EFFS_L1TE20, &b_EF_mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1TE50", &EF_mu4_MSonly_EFFS_L1TE50, &b_EF_mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_L1TE5_NZ", &EF_mu4_MSonly_EFFS_L1TE5_NZ, &b_EF_mu4_MSonly_EFFS_L1TE5_NZ);
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
   fChain->SetBranchAddress("EF_mu4_loose", &EF_mu4_loose, &b_EF_mu4_loose);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1TE10", &EF_mu4_mu2_MSonly_EFFS_L1TE10, &b_EF_mu4_mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1TE20", &EF_mu4_mu2_MSonly_EFFS_L1TE20, &b_EF_mu4_mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1TE50", &EF_mu4_mu2_MSonly_EFFS_L1TE50, &b_EF_mu4_mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("EF_mu4_mu2_MSonly_EFFS_L1ZDC", &EF_mu4_mu2_MSonly_EFFS_L1ZDC, &b_EF_mu4_mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("EF_mu6", &EF_mu6, &b_EF_mu6);
   fChain->SetBranchAddress("EF_mu6T", &EF_mu6T, &b_EF_mu6T);
   fChain->SetBranchAddress("EF_mu6T_IDTrkNoCut", &EF_mu6T_IDTrkNoCut, &b_EF_mu6T_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu6T_MSonly", &EF_mu6T_MSonly, &b_EF_mu6T_MSonly);
   fChain->SetBranchAddress("EF_mu6_IDTrkNoCut", &EF_mu6_IDTrkNoCut, &b_EF_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu6_L1VTE50", &EF_mu6_L1VTE50, &b_EF_mu6_L1VTE50);
   fChain->SetBranchAddress("EF_mu6_MSonly", &EF_mu6_MSonly, &b_EF_mu6_MSonly);
   fChain->SetBranchAddress("EF_mu6_MSonly_L1TE50", &EF_mu6_MSonly_L1TE50, &b_EF_mu6_MSonly_L1TE50);
   fChain->SetBranchAddress("L1_2EM3", &L1_2EM3, &b_L1_2EM3);
   fChain->SetBranchAddress("L1_2EM3_NL", &L1_2EM3_NL, &b_L1_2EM3_NL);
   fChain->SetBranchAddress("L1_2EM3_NZ", &L1_2EM3_NZ, &b_L1_2EM3_NZ);
   fChain->SetBranchAddress("L1_2EM5", &L1_2EM5, &b_L1_2EM5);
   fChain->SetBranchAddress("L1_2MU0", &L1_2MU0, &b_L1_2MU0);
   fChain->SetBranchAddress("L1_2MU0_EMPTY", &L1_2MU0_EMPTY, &b_L1_2MU0_EMPTY);
   fChain->SetBranchAddress("L1_2MU0_MU6", &L1_2MU0_MU6, &b_L1_2MU0_MU6);
   fChain->SetBranchAddress("L1_2MU0_MV", &L1_2MU0_MV, &b_L1_2MU0_MV);
   fChain->SetBranchAddress("L1_2MU0_NL", &L1_2MU0_NL, &b_L1_2MU0_NL);
   fChain->SetBranchAddress("L1_2MU0_NZ", &L1_2MU0_NZ, &b_L1_2MU0_NZ);
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
   fChain->SetBranchAddress("L1_EM3_NL", &L1_EM3_NL, &b_L1_EM3_NL);
   fChain->SetBranchAddress("L1_EM3_NZ", &L1_EM3_NZ, &b_L1_EM3_NZ);
   fChain->SetBranchAddress("L1_EM3_TE50", &L1_EM3_TE50, &b_L1_EM3_TE50);
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
   fChain->SetBranchAddress("L1_MU0_MV", &L1_MU0_MV, &b_L1_MU0_MV);
   fChain->SetBranchAddress("L1_MU0_MV_VTE50", &L1_MU0_MV_VTE50, &b_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("L1_MU0_NL", &L1_MU0_NL, &b_L1_MU0_NL);
   fChain->SetBranchAddress("L1_MU0_NZ", &L1_MU0_NZ, &b_L1_MU0_NZ);
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
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1TE10", &L2_2mu4_MSonly_EFFS_L1TE10, &b_L2_2mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1TE20", &L2_2mu4_MSonly_EFFS_L1TE20, &b_L2_2mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1TE50", &L2_2mu4_MSonly_EFFS_L1TE50, &b_L2_2mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_2mu4_MSonly_EFFS_L1ZDC", &L2_2mu4_MSonly_EFFS_L1ZDC, &b_L2_2mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_2mu6T_MSonly", &L2_2mu6T_MSonly, &b_L2_2mu6T_MSonly);
   fChain->SetBranchAddress("L2_2mu6_MSonly", &L2_2mu6_MSonly, &b_L2_2mu6_MSonly);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM3", &L2_L1ItemStreamer_L1_2EM3, &b_L2_L1ItemStreamer_L1_2EM3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM3_NL", &L2_L1ItemStreamer_L1_2EM3_NL, &b_L2_L1ItemStreamer_L1_2EM3_NL);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM3_NZ", &L2_L1ItemStreamer_L1_2EM3_NZ, &b_L2_L1ItemStreamer_L1_2EM3_NZ);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM5", &L2_L1ItemStreamer_L1_2EM5, &b_L2_L1ItemStreamer_L1_2EM5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0", &L2_L1ItemStreamer_L1_2MU0, &b_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0_EMPTY", &L2_L1ItemStreamer_L1_2MU0_EMPTY, &b_L2_L1ItemStreamer_L1_2MU0_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0_MU6", &L2_L1ItemStreamer_L1_2MU0_MU6, &b_L2_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0_MV", &L2_L1ItemStreamer_L1_2MU0_MV, &b_L2_L1ItemStreamer_L1_2MU0_MV);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0_NL", &L2_L1ItemStreamer_L1_2MU0_NL, &b_L2_L1ItemStreamer_L1_2MU0_NL);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0_NZ", &L2_L1ItemStreamer_L1_2MU0_NZ, &b_L2_L1ItemStreamer_L1_2MU0_NZ);
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
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_NL", &L2_L1ItemStreamer_L1_EM3_NL, &b_L2_L1ItemStreamer_L1_EM3_NL);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_NZ", &L2_L1ItemStreamer_L1_EM3_NZ, &b_L2_L1ItemStreamer_L1_EM3_NZ);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_TE50", &L2_L1ItemStreamer_L1_EM3_TE50, &b_L2_L1ItemStreamer_L1_EM3_TE50);
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
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_MV", &L2_L1ItemStreamer_L1_MU0_MV, &b_L2_L1ItemStreamer_L1_MU0_MV);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_MV_VTE50", &L2_L1ItemStreamer_L1_MU0_MV_VTE50, &b_L2_L1ItemStreamer_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_NL", &L2_L1ItemStreamer_L1_MU0_NL, &b_L2_L1ItemStreamer_L1_MU0_NL);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_NZ", &L2_L1ItemStreamer_L1_MU0_NZ, &b_L2_L1ItemStreamer_L1_MU0_NZ);
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
   fChain->SetBranchAddress("L2_e5_loose_L1VTE50", &L2_e5_loose_L1VTE50, &b_L2_e5_loose_L1VTE50);
   fChain->SetBranchAddress("L2_em3_empty_larcalib", &L2_em3_empty_larcalib, &b_L2_em3_empty_larcalib);
   fChain->SetBranchAddress("L2_em5_empty_larcalib", &L2_em5_empty_larcalib, &b_L2_em5_empty_larcalib);
   fChain->SetBranchAddress("L2_g10_loose", &L2_g10_loose, &b_L2_g10_loose);
   fChain->SetBranchAddress("L2_g5_NoCut_cosmic", &L2_g5_NoCut_cosmic, &b_L2_g5_NoCut_cosmic);
   fChain->SetBranchAddress("L2_g5_loose", &L2_g5_loose, &b_L2_g5_loose);
   fChain->SetBranchAddress("L2_g5_loose_EFFS_L1ZDC", &L2_g5_loose_EFFS_L1ZDC, &b_L2_g5_loose_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_g5_loose_L1TE50", &L2_g5_loose_L1TE50, &b_L2_g5_loose_L1TE50);
   fChain->SetBranchAddress("L2_g7_loose", &L2_g7_loose, &b_L2_g7_loose);
   fChain->SetBranchAddress("L2_g9_etcut", &L2_g9_etcut, &b_L2_g9_etcut);
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
   fChain->SetBranchAddress("L2_mu4T_cal", &L2_mu4T_cal, &b_L2_mu4T_cal);
   fChain->SetBranchAddress("L2_mu4T_cosmic", &L2_mu4T_cosmic, &b_L2_mu4T_cosmic);
   fChain->SetBranchAddress("L2_mu4_IDTrkNoCut", &L2_mu4_IDTrkNoCut, &b_L2_mu4_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu4_L1VTE50", &L2_mu4_L1VTE50, &b_L2_mu4_L1VTE50);
   fChain->SetBranchAddress("L2_mu4_MSonly", &L2_mu4_MSonly, &b_L2_mu4_MSonly);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1MBTS", &L2_mu4_MSonly_EFFS_L1MBTS, &b_L2_mu4_MSonly_EFFS_L1MBTS);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1MU0_NZ", &L2_mu4_MSonly_EFFS_L1MU0_NZ, &b_L2_mu4_MSonly_EFFS_L1MU0_NZ);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1TE10", &L2_mu4_MSonly_EFFS_L1TE10, &b_L2_mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1TE20", &L2_mu4_MSonly_EFFS_L1TE20, &b_L2_mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1TE50", &L2_mu4_MSonly_EFFS_L1TE50, &b_L2_mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1TE5_NZ", &L2_mu4_MSonly_EFFS_L1TE5_NZ, &b_L2_mu4_MSonly_EFFS_L1TE5_NZ);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1ZDC", &L2_mu4_MSonly_EFFS_L1ZDC, &b_L2_mu4_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_L1ZDC_OR", &L2_mu4_MSonly_EFFS_L1ZDC_OR, &b_L2_mu4_MSonly_EFFS_L1ZDC_OR);
   fChain->SetBranchAddress("L2_mu4_MSonly_L1TE50", &L2_mu4_MSonly_L1TE50, &b_L2_mu4_MSonly_L1TE50);
   fChain->SetBranchAddress("L2_mu4_MSonly_barrel", &L2_mu4_MSonly_barrel, &b_L2_mu4_MSonly_barrel);
   fChain->SetBranchAddress("L2_mu4_MSonly_barrel_EFFS_L1ZDC", &L2_mu4_MSonly_barrel_EFFS_L1ZDC, &b_L2_mu4_MSonly_barrel_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu4_MSonly_barrel_L1TE50", &L2_mu4_MSonly_barrel_L1TE50, &b_L2_mu4_MSonly_barrel_L1TE50);
   fChain->SetBranchAddress("L2_mu4_MSonly_cosmic", &L2_mu4_MSonly_cosmic, &b_L2_mu4_MSonly_cosmic);
   fChain->SetBranchAddress("L2_mu4_barrel_L1VTE50", &L2_mu4_barrel_L1VTE50, &b_L2_mu4_barrel_L1VTE50);
   fChain->SetBranchAddress("L2_mu4_cal_empty", &L2_mu4_cal_empty, &b_L2_mu4_cal_empty);
   fChain->SetBranchAddress("L2_mu4_cosmic", &L2_mu4_cosmic, &b_L2_mu4_cosmic);
   fChain->SetBranchAddress("L2_mu4_loose", &L2_mu4_loose, &b_L2_mu4_loose);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1TE10", &L2_mu4_mu2_MSonly_EFFS_L1TE10, &b_L2_mu4_mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1TE20", &L2_mu4_mu2_MSonly_EFFS_L1TE20, &b_L2_mu4_mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1TE50", &L2_mu4_mu2_MSonly_EFFS_L1TE50, &b_L2_mu4_mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("L2_mu4_mu2_MSonly_EFFS_L1ZDC", &L2_mu4_mu2_MSonly_EFFS_L1ZDC, &b_L2_mu4_mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("L2_mu6", &L2_mu6, &b_L2_mu6);
   fChain->SetBranchAddress("L2_mu6T", &L2_mu6T, &b_L2_mu6T);
   fChain->SetBranchAddress("L2_mu6T_IDTrkNoCut", &L2_mu6T_IDTrkNoCut, &b_L2_mu6T_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu6T_MSonly", &L2_mu6T_MSonly, &b_L2_mu6T_MSonly);
   fChain->SetBranchAddress("L2_mu6_IDTrkNoCut", &L2_mu6_IDTrkNoCut, &b_L2_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu6_L1VTE50", &L2_mu6_L1VTE50, &b_L2_mu6_L1VTE50);
   fChain->SetBranchAddress("L2_mu6_MSonly", &L2_mu6_MSonly, &b_L2_mu6_MSonly);
   fChain->SetBranchAddress("L2_mu6_MSonly_L1TE50", &L2_mu6_MSonly_L1TE50, &b_L2_mu6_MSonly_L1TE50);
   fChain->SetBranchAddress("L2_mu6_cal", &L2_mu6_cal, &b_L2_mu6_cal);
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
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MU6", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MU6, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MV", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MV, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_MV);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NL", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NL, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NL);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NZ", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NZ, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_2MU0_NZ);
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
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_MV_VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NL", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NL, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NL);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NZ", &trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NZ, &b_trig_EF_trigmuonef_EF_L1ItemStreamer_L1_MU0_NZ);
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
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MU0_NZ", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MU0_NZ, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1MU0_NZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE5_NZ", &trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE5_NZ, &b_trig_EF_trigmuonef_EF_mu4_MSonly_EFFS_L1TE5_NZ);
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
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_loose", &trig_EF_trigmuonef_EF_mu4_loose, &b_trig_EF_trigmuonef_EF_mu4_loose);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1TE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC", &trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC, &b_trig_EF_trigmuonef_EF_mu4_mu2_MSonly_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6", &trig_EF_trigmuonef_EF_mu6, &b_trig_EF_trigmuonef_EF_mu6);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6T", &trig_EF_trigmuonef_EF_mu6T, &b_trig_EF_trigmuonef_EF_mu6T);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6T_IDTrkNoCut", &trig_EF_trigmuonef_EF_mu6T_IDTrkNoCut, &b_trig_EF_trigmuonef_EF_mu6T_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6T_MSonly", &trig_EF_trigmuonef_EF_mu6T_MSonly, &b_trig_EF_trigmuonef_EF_mu6T_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_IDTrkNoCut", &trig_EF_trigmuonef_EF_mu6_IDTrkNoCut, &b_trig_EF_trigmuonef_EF_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_L1VTE50", &trig_EF_trigmuonef_EF_mu6_L1VTE50, &b_trig_EF_trigmuonef_EF_mu6_L1VTE50);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_MSonly", &trig_EF_trigmuonef_EF_mu6_MSonly, &b_trig_EF_trigmuonef_EF_mu6_MSonly);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50", &trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50, &b_trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50);
   fChain->SetBranchAddress("trig_L2_jet_L2_fj10_empty_larcalib", &trig_L2_jet_L2_fj10_empty_larcalib, &b_trig_L2_jet_L2_fj10_empty_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_fj20_Ecorr", &trig_L2_jet_L2_fj20_Ecorr, &b_trig_L2_jet_L2_fj20_Ecorr);
   fChain->SetBranchAddress("trig_L2_jet_L2_fj20_Ecorr_larcalib", &trig_L2_jet_L2_fj20_Ecorr_larcalib, &b_trig_L2_jet_L2_fj20_Ecorr_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_fj25_larcalib", &trig_L2_jet_L2_fj25_larcalib, &b_trig_L2_jet_L2_fj25_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_j10_empty_larcalib", &trig_L2_jet_L2_j10_empty_larcalib, &b_trig_L2_jet_L2_j10_empty_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_j15_Ecorr", &trig_L2_jet_L2_j15_Ecorr, &b_trig_L2_jet_L2_j15_Ecorr);
   fChain->SetBranchAddress("trig_L2_jet_L2_j15_Ecorr_larcalib", &trig_L2_jet_L2_j15_Ecorr_larcalib, &b_trig_L2_jet_L2_j15_Ecorr_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_j200_larcalib", &trig_L2_jet_L2_j200_larcalib, &b_trig_L2_jet_L2_j200_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_j20_Ecorr", &trig_L2_jet_L2_j20_Ecorr, &b_trig_L2_jet_L2_j20_Ecorr);
   fChain->SetBranchAddress("trig_L2_jet_L2_j20_Ecorr_larcalib", &trig_L2_jet_L2_j20_Ecorr_larcalib, &b_trig_L2_jet_L2_j20_Ecorr_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_j25_larcalib", &trig_L2_jet_L2_j25_larcalib, &b_trig_L2_jet_L2_j25_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_j50_larcalib", &trig_L2_jet_L2_j50_larcalib, &b_trig_L2_jet_L2_j50_larcalib);
   fChain->SetBranchAddress("trig_L2_jet_L2_j95_larcalib", &trig_L2_jet_L2_j95_larcalib, &b_trig_L2_jet_L2_j95_larcalib);
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
   fChain->SetBranchAddress("mc_channel_number", &mc_channel_number, &b_mc_channel_number);
   fChain->SetBranchAddress("mc_event_number", &mc_event_number, &b_mc_event_number);
   fChain->SetBranchAddress("mc_event_weight", &mc_event_weight, &b_mc_event_weight);
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
   fChain->SetBranchAddress("trk_pt", &trk_pt, &b_trk_pt);
   fChain->SetBranchAddress("trk_eta", &trk_eta, &b_trk_eta);
   fChain->SetBranchAddress("trk_d0_wrtPV", &trk_d0_wrtPV, &b_trk_d0_wrtPV);
   fChain->SetBranchAddress("trk_z0_wrtPV", &trk_z0_wrtPV, &b_trk_z0_wrtPV);
   fChain->SetBranchAddress("trk_phi_wrtPV", &trk_phi_wrtPV, &b_trk_phi_wrtPV);
   fChain->SetBranchAddress("trk_theta_wrtPV", &trk_theta_wrtPV, &b_trk_theta_wrtPV);
   fChain->SetBranchAddress("trk_qoverp_wrtPV", &trk_qoverp_wrtPV, &b_trk_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_cov_d0_wrtPV", &trk_cov_d0_wrtPV, &b_trk_cov_d0_wrtPV);
   fChain->SetBranchAddress("trk_cov_z0_wrtPV", &trk_cov_z0_wrtPV, &b_trk_cov_z0_wrtPV);
   fChain->SetBranchAddress("trk_cov_phi_wrtPV", &trk_cov_phi_wrtPV, &b_trk_cov_phi_wrtPV);
   fChain->SetBranchAddress("trk_cov_theta_wrtPV", &trk_cov_theta_wrtPV, &b_trk_cov_theta_wrtPV);
   fChain->SetBranchAddress("trk_cov_qoverp_wrtPV", &trk_cov_qoverp_wrtPV, &b_trk_cov_qoverp_wrtPV);
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
   fChain->SetBranchAddress("trk_chi2", &trk_chi2, &b_trk_chi2);
   fChain->SetBranchAddress("trk_ndof", &trk_ndof, &b_trk_ndof);
   fChain->SetBranchAddress("trk_nBLHits", &trk_nBLHits, &b_trk_nBLHits);
   fChain->SetBranchAddress("trk_nPixHits", &trk_nPixHits, &b_trk_nPixHits);
   fChain->SetBranchAddress("trk_nSCTHits", &trk_nSCTHits, &b_trk_nSCTHits);
   fChain->SetBranchAddress("trk_nTRTHits", &trk_nTRTHits, &b_trk_nTRTHits);
   fChain->SetBranchAddress("trk_nTRTHighTHits", &trk_nTRTHighTHits, &b_trk_nTRTHighTHits);
   fChain->SetBranchAddress("trk_nPixHoles", &trk_nPixHoles, &b_trk_nPixHoles);
   fChain->SetBranchAddress("trk_nSCTHoles", &trk_nSCTHoles, &b_trk_nSCTHoles);
   fChain->SetBranchAddress("trk_nTRTHoles", &trk_nTRTHoles, &b_trk_nTRTHoles);
   fChain->SetBranchAddress("trk_expectBLayerHit", &trk_expectBLayerHit, &b_trk_expectBLayerHit);
   fChain->SetBranchAddress("trk_nMDTHits", &trk_nMDTHits, &b_trk_nMDTHits);
   fChain->SetBranchAddress("trk_nCSCEtaHits", &trk_nCSCEtaHits, &b_trk_nCSCEtaHits);
   fChain->SetBranchAddress("trk_nCSCPhiHits", &trk_nCSCPhiHits, &b_trk_nCSCPhiHits);
   fChain->SetBranchAddress("trk_nRPCEtaHits", &trk_nRPCEtaHits, &b_trk_nRPCEtaHits);
   fChain->SetBranchAddress("trk_nRPCPhiHits", &trk_nRPCPhiHits, &b_trk_nRPCPhiHits);
   fChain->SetBranchAddress("trk_nTGCEtaHits", &trk_nTGCEtaHits, &b_trk_nTGCEtaHits);
   fChain->SetBranchAddress("trk_nTGCPhiHits", &trk_nTGCPhiHits, &b_trk_nTGCPhiHits);
   fChain->SetBranchAddress("trk_nHits", &trk_nHits, &b_trk_nHits);
   fChain->SetBranchAddress("trk_nHoles", &trk_nHoles, &b_trk_nHoles);
   fChain->SetBranchAddress("trk_hitPattern", &trk_hitPattern, &b_trk_hitPattern);
   fChain->SetBranchAddress("trk_TRTHighTHitsRatio", &trk_TRTHighTHitsRatio, &b_trk_TRTHighTHitsRatio);
   fChain->SetBranchAddress("trk_TRTHighTOutliersRatio", &trk_TRTHighTOutliersRatio, &b_trk_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("trk_fitter", &trk_fitter, &b_trk_fitter);
   fChain->SetBranchAddress("trk_patternReco1", &trk_patternReco1, &b_trk_patternReco1);
   fChain->SetBranchAddress("trk_patternReco2", &trk_patternReco2, &b_trk_patternReco2);
   fChain->SetBranchAddress("trk_seedFinder", &trk_seedFinder, &b_trk_seedFinder);
   fChain->SetBranchAddress("trk_mc_probability", &trk_mc_probability, &b_trk_mc_probability);
   fChain->SetBranchAddress("trk_mc_barcode", &trk_mc_barcode, &b_trk_mc_barcode);
   fChain->SetBranchAddress("trk_mc_index", &trk_mc_index, &b_trk_mc_index);
   fChain->SetBranchAddress("trt_RDO_countRDOhitsInEvent", &trt_RDO_countRDOhitsInEvent, &b_trt_RDO_countRDOhitsInEvent);
   fChain->SetBranchAddress("trt_RDO_countBarrelhitsInEvent", &trt_RDO_countBarrelhitsInEvent, &b_trt_RDO_countBarrelhitsInEvent);
   fChain->SetBranchAddress("trt_RDO_countEndCaphitsInEvent", &trt_RDO_countEndCaphitsInEvent, &b_trt_RDO_countEndCaphitsInEvent);
   fChain->SetBranchAddress("trt_RDO_countEndCapAhitsInEvent", &trt_RDO_countEndCapAhitsInEvent, &b_trt_RDO_countEndCapAhitsInEvent);
   fChain->SetBranchAddress("trt_RDO_countEndCapChitsInEvent", &trt_RDO_countEndCapChitsInEvent, &b_trt_RDO_countEndCapChitsInEvent);
   fChain->SetBranchAddress("trt_RDO_countdeadstraws", &trt_RDO_countdeadstraws, &b_trt_RDO_countdeadstraws);
   fChain->SetBranchAddress("ItrEMNoFRBkgrtower_CaloBkgrEt", &ItrEMNoFRBkgrtower_CaloBkgrEt, &b_ItrEMNoFRBkgrtower_CaloBkgrEt);
   fChain->SetBranchAddress("ItrEMNoFRBkgrtower_CaloBkgrRMS", &ItrEMNoFRBkgrtower_CaloBkgrRMS, &b_ItrEMNoFRBkgrtower_CaloBkgrRMS);
   fChain->SetBranchAddress("ItrEMNoFRBkgrtower_CaloBkgrCounts", &ItrEMNoFRBkgrtower_CaloBkgrCounts, &b_ItrEMNoFRBkgrtower_CaloBkgrCounts);
   fChain->SetBranchAddress("ItrEMNoFRBkgrtower_CaloBkgrEta", &ItrEMNoFRBkgrtower_CaloBkgrEta, &b_ItrEMNoFRBkgrtower_CaloBkgrEta);
   fChain->SetBranchAddress("ItrEMNoFRBkgrlayer_CaloBkgrEt", &ItrEMNoFRBkgrlayer_CaloBkgrEt, &b_ItrEMNoFRBkgrlayer_CaloBkgrEt);
   fChain->SetBranchAddress("ItrEMNoFRBkgrlayer_CaloBkgrRMS", &ItrEMNoFRBkgrlayer_CaloBkgrRMS, &b_ItrEMNoFRBkgrlayer_CaloBkgrRMS);
   fChain->SetBranchAddress("ItrEMNoFRBkgrlayer_CaloBkgrCounts", &ItrEMNoFRBkgrlayer_CaloBkgrCounts, &b_ItrEMNoFRBkgrlayer_CaloBkgrCounts);
   fChain->SetBranchAddress("ItrEMNoFRBkgrlayer_CaloBkgrEta", &ItrEMNoFRBkgrlayer_CaloBkgrEta, &b_ItrEMNoFRBkgrlayer_CaloBkgrEta);
   fChain->SetBranchAddress("antikt2HINoItr_n", &antikt2HINoItr_n, &b_antikt2HINoItr_n);
   fChain->SetBranchAddress("antikt2HINoItr_E", &antikt2HINoItr_E, &b_antikt2HINoItr_E);
   fChain->SetBranchAddress("antikt2HINoItr_Et", &antikt2HINoItr_Et, &b_antikt2HINoItr_Et);
   fChain->SetBranchAddress("antikt2HINoItr_pt", &antikt2HINoItr_pt, &b_antikt2HINoItr_pt);
   fChain->SetBranchAddress("antikt2HINoItr_m", &antikt2HINoItr_m, &b_antikt2HINoItr_m);
   fChain->SetBranchAddress("antikt2HINoItr_eta", &antikt2HINoItr_eta, &b_antikt2HINoItr_eta);
   fChain->SetBranchAddress("antikt2HINoItr_phi", &antikt2HINoItr_phi, &b_antikt2HINoItr_phi);
   fChain->SetBranchAddress("antikt2HIItrNoFR_n", &antikt2HIItrNoFR_n, &b_antikt2HIItrNoFR_n);
   fChain->SetBranchAddress("antikt2HIItrNoFR_E", &antikt2HIItrNoFR_E, &b_antikt2HIItrNoFR_E);
   fChain->SetBranchAddress("antikt2HIItrNoFR_Et", &antikt2HIItrNoFR_Et, &b_antikt2HIItrNoFR_Et);
   fChain->SetBranchAddress("antikt2HIItrNoFR_pt", &antikt2HIItrNoFR_pt, &b_antikt2HIItrNoFR_pt);
   fChain->SetBranchAddress("antikt2HIItrNoFR_m", &antikt2HIItrNoFR_m, &b_antikt2HIItrNoFR_m);
   fChain->SetBranchAddress("antikt2HIItrNoFR_eta", &antikt2HIItrNoFR_eta, &b_antikt2HIItrNoFR_eta);
   fChain->SetBranchAddress("antikt2HIItrNoFR_phi", &antikt2HIItrNoFR_phi, &b_antikt2HIItrNoFR_phi);
   fChain->SetBranchAddress("antikt2HIItrNoFR_SubtractedEt", &antikt2HIItrNoFR_SubtractedEt, &b_antikt2HIItrNoFR_SubtractedEt);
   fChain->SetBranchAddress("antikt2HIItrNoFR_CryoCorr", &antikt2HIItrNoFR_CryoCorr, &b_antikt2HIItrNoFR_CryoCorr);
   fChain->SetBranchAddress("antikt2HIItrNoFR_NoFlow", &antikt2HIItrNoFR_NoFlow, &b_antikt2HIItrNoFR_NoFlow);
   fChain->SetBranchAddress("antikt2HIItrNoFR_UncalibEt", &antikt2HIItrNoFR_UncalibEt, &b_antikt2HIItrNoFR_UncalibEt);
   fChain->SetBranchAddress("antikt2HIItrNoFR_PassedFR", &antikt2HIItrNoFR_PassedFR, &b_antikt2HIItrNoFR_PassedFR);
   fChain->SetBranchAddress("antikt2HIItrNoFR_const_n", &antikt2HIItrNoFR_const_n, &b_antikt2HIItrNoFR_const_n);
   fChain->SetBranchAddress("antikt2HIItrNoFR_const_et", &antikt2HIItrNoFR_const_et, &b_antikt2HIItrNoFR_const_et);
   fChain->SetBranchAddress("antikt2HIItrNoFR_const_eta", &antikt2HIItrNoFR_const_eta, &b_antikt2HIItrNoFR_const_eta);
   fChain->SetBranchAddress("antikt2HIItrNoFR_const_phi", &antikt2HIItrNoFR_const_phi, &b_antikt2HIItrNoFR_const_phi);
   fChain->SetBranchAddress("antikt2HIItrNoFR_sampling_et", &antikt2HIItrNoFR_sampling_et, &b_antikt2HIItrNoFR_sampling_et);
   fChain->SetBranchAddress("antikt2HIItrNoFR_sampling_et_unsubtr", &antikt2HIItrNoFR_sampling_et_unsubtr, &b_antikt2HIItrNoFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt2HIItrNoFR_bad_cell_n", &antikt2HIItrNoFR_bad_cell_n, &b_antikt2HIItrNoFR_bad_cell_n);
   fChain->SetBranchAddress("antikt2HIItrNoFR_bad_cell_et", &antikt2HIItrNoFR_bad_cell_et, &b_antikt2HIItrNoFR_bad_cell_et);
   fChain->SetBranchAddress("antikt2HIItrNoFR_bad_cell_area", &antikt2HIItrNoFR_bad_cell_area, &b_antikt2HIItrNoFR_bad_cell_area);
   fChain->SetBranchAddress("antikt2HIItrNoFR_empty_cell_n", &antikt2HIItrNoFR_empty_cell_n, &b_antikt2HIItrNoFR_empty_cell_n);
   fChain->SetBranchAddress("antikt2HIItrNoFR_empty_cell_et", &antikt2HIItrNoFR_empty_cell_et, &b_antikt2HIItrNoFR_empty_cell_et);
   fChain->SetBranchAddress("antikt2HIItrNoFR_empty_cell_area", &antikt2HIItrNoFR_empty_cell_area, &b_antikt2HIItrNoFR_empty_cell_area);
   fChain->SetBranchAddress("antikt2HIItrNoFR_total_cell_n", &antikt2HIItrNoFR_total_cell_n, &b_antikt2HIItrNoFR_total_cell_n);
   fChain->SetBranchAddress("antikt2HIItrNoFR_total_cell_et", &antikt2HIItrNoFR_total_cell_et, &b_antikt2HIItrNoFR_total_cell_et);
   fChain->SetBranchAddress("antikt2HIItrNoFR_total_cell_area", &antikt2HIItrNoFR_total_cell_area, &b_antikt2HIItrNoFR_total_cell_area);
   fChain->SetBranchAddress("antikt2HIItrNoFR_n90", &antikt2HIItrNoFR_n90, &b_antikt2HIItrNoFR_n90);
   fChain->SetBranchAddress("antikt2HIItrNoFR_fracSamplingMax", &antikt2HIItrNoFR_fracSamplingMax, &b_antikt2HIItrNoFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt2HIItrNoFR_SamplingMax", &antikt2HIItrNoFR_SamplingMax, &b_antikt2HIItrNoFR_SamplingMax);
   fChain->SetBranchAddress("antikt2HIItrNoFR_n90constituents", &antikt2HIItrNoFR_n90constituents, &b_antikt2HIItrNoFR_n90constituents);
   fChain->SetBranchAddress("antikt2HIItrNoFR_Timing", &antikt2HIItrNoFR_Timing, &b_antikt2HIItrNoFR_Timing);
   fChain->SetBranchAddress("antikt2HIItrNoFR_LArQuality", &antikt2HIItrNoFR_LArQuality, &b_antikt2HIItrNoFR_LArQuality);
   fChain->SetBranchAddress("antikt2HIItrNoFR_HECQuality", &antikt2HIItrNoFR_HECQuality, &b_antikt2HIItrNoFR_HECQuality);
   fChain->SetBranchAddress("antikt2HIItrNoFR_TileQuality", &antikt2HIItrNoFR_TileQuality, &b_antikt2HIItrNoFR_TileQuality);
   fChain->SetBranchAddress("antikt4HIItrNoFR_n", &antikt4HIItrNoFR_n, &b_antikt4HIItrNoFR_n);
   fChain->SetBranchAddress("antikt4HIItrNoFR_E", &antikt4HIItrNoFR_E, &b_antikt4HIItrNoFR_E);
   fChain->SetBranchAddress("antikt4HIItrNoFR_Et", &antikt4HIItrNoFR_Et, &b_antikt4HIItrNoFR_Et);
   fChain->SetBranchAddress("antikt4HIItrNoFR_pt", &antikt4HIItrNoFR_pt, &b_antikt4HIItrNoFR_pt);
   fChain->SetBranchAddress("antikt4HIItrNoFR_m", &antikt4HIItrNoFR_m, &b_antikt4HIItrNoFR_m);
   fChain->SetBranchAddress("antikt4HIItrNoFR_eta", &antikt4HIItrNoFR_eta, &b_antikt4HIItrNoFR_eta);
   fChain->SetBranchAddress("antikt4HIItrNoFR_phi", &antikt4HIItrNoFR_phi, &b_antikt4HIItrNoFR_phi);
   fChain->SetBranchAddress("antikt4HIItrNoFR_SubtractedEt", &antikt4HIItrNoFR_SubtractedEt, &b_antikt4HIItrNoFR_SubtractedEt);
   fChain->SetBranchAddress("antikt4HIItrNoFR_CryoCorr", &antikt4HIItrNoFR_CryoCorr, &b_antikt4HIItrNoFR_CryoCorr);
   fChain->SetBranchAddress("antikt4HIItrNoFR_NoFlow", &antikt4HIItrNoFR_NoFlow, &b_antikt4HIItrNoFR_NoFlow);
   fChain->SetBranchAddress("antikt4HIItrNoFR_UncalibEt", &antikt4HIItrNoFR_UncalibEt, &b_antikt4HIItrNoFR_UncalibEt);
   fChain->SetBranchAddress("antikt4HIItrNoFR_PassedFR", &antikt4HIItrNoFR_PassedFR, &b_antikt4HIItrNoFR_PassedFR);
   fChain->SetBranchAddress("antikt4HIItrNoFR_const_n", &antikt4HIItrNoFR_const_n, &b_antikt4HIItrNoFR_const_n);
   fChain->SetBranchAddress("antikt4HIItrNoFR_const_et", &antikt4HIItrNoFR_const_et, &b_antikt4HIItrNoFR_const_et);
   fChain->SetBranchAddress("antikt4HIItrNoFR_const_eta", &antikt4HIItrNoFR_const_eta, &b_antikt4HIItrNoFR_const_eta);
   fChain->SetBranchAddress("antikt4HIItrNoFR_const_phi", &antikt4HIItrNoFR_const_phi, &b_antikt4HIItrNoFR_const_phi);
   fChain->SetBranchAddress("antikt4HIItrNoFR_sampling_et", &antikt4HIItrNoFR_sampling_et, &b_antikt4HIItrNoFR_sampling_et);
   fChain->SetBranchAddress("antikt4HIItrNoFR_sampling_et_unsubtr", &antikt4HIItrNoFR_sampling_et_unsubtr, &b_antikt4HIItrNoFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt4HIItrNoFR_bad_cell_n", &antikt4HIItrNoFR_bad_cell_n, &b_antikt4HIItrNoFR_bad_cell_n);
   fChain->SetBranchAddress("antikt4HIItrNoFR_bad_cell_et", &antikt4HIItrNoFR_bad_cell_et, &b_antikt4HIItrNoFR_bad_cell_et);
   fChain->SetBranchAddress("antikt4HIItrNoFR_bad_cell_area", &antikt4HIItrNoFR_bad_cell_area, &b_antikt4HIItrNoFR_bad_cell_area);
   fChain->SetBranchAddress("antikt4HIItrNoFR_empty_cell_n", &antikt4HIItrNoFR_empty_cell_n, &b_antikt4HIItrNoFR_empty_cell_n);
   fChain->SetBranchAddress("antikt4HIItrNoFR_empty_cell_et", &antikt4HIItrNoFR_empty_cell_et, &b_antikt4HIItrNoFR_empty_cell_et);
   fChain->SetBranchAddress("antikt4HIItrNoFR_empty_cell_area", &antikt4HIItrNoFR_empty_cell_area, &b_antikt4HIItrNoFR_empty_cell_area);
   fChain->SetBranchAddress("antikt4HIItrNoFR_total_cell_n", &antikt4HIItrNoFR_total_cell_n, &b_antikt4HIItrNoFR_total_cell_n);
   fChain->SetBranchAddress("antikt4HIItrNoFR_total_cell_et", &antikt4HIItrNoFR_total_cell_et, &b_antikt4HIItrNoFR_total_cell_et);
   fChain->SetBranchAddress("antikt4HIItrNoFR_total_cell_area", &antikt4HIItrNoFR_total_cell_area, &b_antikt4HIItrNoFR_total_cell_area);
   fChain->SetBranchAddress("antikt4HIItrNoFR_n90", &antikt4HIItrNoFR_n90, &b_antikt4HIItrNoFR_n90);
   fChain->SetBranchAddress("antikt4HIItrNoFR_fracSamplingMax", &antikt4HIItrNoFR_fracSamplingMax, &b_antikt4HIItrNoFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt4HIItrNoFR_SamplingMax", &antikt4HIItrNoFR_SamplingMax, &b_antikt4HIItrNoFR_SamplingMax);
   fChain->SetBranchAddress("antikt4HIItrNoFR_n90constituents", &antikt4HIItrNoFR_n90constituents, &b_antikt4HIItrNoFR_n90constituents);
   fChain->SetBranchAddress("antikt4HIItrNoFR_Timing", &antikt4HIItrNoFR_Timing, &b_antikt4HIItrNoFR_Timing);
   fChain->SetBranchAddress("antikt4HIItrNoFR_LArQuality", &antikt4HIItrNoFR_LArQuality, &b_antikt4HIItrNoFR_LArQuality);
   fChain->SetBranchAddress("antikt4HIItrNoFR_HECQuality", &antikt4HIItrNoFR_HECQuality, &b_antikt4HIItrNoFR_HECQuality);
   fChain->SetBranchAddress("antikt4HIItrNoFR_TileQuality", &antikt4HIItrNoFR_TileQuality, &b_antikt4HIItrNoFR_TileQuality);
   fChain->SetBranchAddress("EMClusterJets_n", &EMClusterJets_n, &b_EMClusterJets_n);
   fChain->SetBranchAddress("EMClusterJets_E", &EMClusterJets_E, &b_EMClusterJets_E);
   fChain->SetBranchAddress("EMClusterJets_Et", &EMClusterJets_Et, &b_EMClusterJets_Et);
   fChain->SetBranchAddress("EMClusterJets_pt", &EMClusterJets_pt, &b_EMClusterJets_pt);
   fChain->SetBranchAddress("EMClusterJets_m", &EMClusterJets_m, &b_EMClusterJets_m);
   fChain->SetBranchAddress("EMClusterJets_eta", &EMClusterJets_eta, &b_EMClusterJets_eta);
   fChain->SetBranchAddress("EMClusterJets_phi", &EMClusterJets_phi, &b_EMClusterJets_phi);
   fChain->SetBranchAddress("antikt2HIItrEM_n", &antikt2HIItrEM_n, &b_antikt2HIItrEM_n);
   fChain->SetBranchAddress("antikt2HIItrEM_E", &antikt2HIItrEM_E, &b_antikt2HIItrEM_E);
   fChain->SetBranchAddress("antikt2HIItrEM_Et", &antikt2HIItrEM_Et, &b_antikt2HIItrEM_Et);
   fChain->SetBranchAddress("antikt2HIItrEM_pt", &antikt2HIItrEM_pt, &b_antikt2HIItrEM_pt);
   fChain->SetBranchAddress("antikt2HIItrEM_m", &antikt2HIItrEM_m, &b_antikt2HIItrEM_m);
   fChain->SetBranchAddress("antikt2HIItrEM_eta", &antikt2HIItrEM_eta, &b_antikt2HIItrEM_eta);
   fChain->SetBranchAddress("antikt2HIItrEM_phi", &antikt2HIItrEM_phi, &b_antikt2HIItrEM_phi);
   fChain->SetBranchAddress("antikt2HIItrEM_SubtractedEt", &antikt2HIItrEM_SubtractedEt, &b_antikt2HIItrEM_SubtractedEt);
   fChain->SetBranchAddress("antikt2HIItrEM_CryoCorr", &antikt2HIItrEM_CryoCorr, &b_antikt2HIItrEM_CryoCorr);
   fChain->SetBranchAddress("antikt2HIItrEM_NoFlow", &antikt2HIItrEM_NoFlow, &b_antikt2HIItrEM_NoFlow);
   fChain->SetBranchAddress("antikt2HIItrEM_UncalibEt", &antikt2HIItrEM_UncalibEt, &b_antikt2HIItrEM_UncalibEt);
   fChain->SetBranchAddress("antikt2HIItrEM_PassedFR", &antikt2HIItrEM_PassedFR, &b_antikt2HIItrEM_PassedFR);
   fChain->SetBranchAddress("antikt2HIItrEM_const_n", &antikt2HIItrEM_const_n, &b_antikt2HIItrEM_const_n);
   fChain->SetBranchAddress("antikt2HIItrEM_const_et", &antikt2HIItrEM_const_et, &b_antikt2HIItrEM_const_et);
   fChain->SetBranchAddress("antikt2HIItrEM_const_eta", &antikt2HIItrEM_const_eta, &b_antikt2HIItrEM_const_eta);
   fChain->SetBranchAddress("antikt2HIItrEM_const_phi", &antikt2HIItrEM_const_phi, &b_antikt2HIItrEM_const_phi);
   fChain->SetBranchAddress("antikt2HIItrEM_sampling_et", &antikt2HIItrEM_sampling_et, &b_antikt2HIItrEM_sampling_et);
   fChain->SetBranchAddress("antikt2HIItrEM_sampling_et_unsubtr", &antikt2HIItrEM_sampling_et_unsubtr, &b_antikt2HIItrEM_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt2HIItrEM_bad_cell_n", &antikt2HIItrEM_bad_cell_n, &b_antikt2HIItrEM_bad_cell_n);
   fChain->SetBranchAddress("antikt2HIItrEM_bad_cell_et", &antikt2HIItrEM_bad_cell_et, &b_antikt2HIItrEM_bad_cell_et);
   fChain->SetBranchAddress("antikt2HIItrEM_bad_cell_area", &antikt2HIItrEM_bad_cell_area, &b_antikt2HIItrEM_bad_cell_area);
   fChain->SetBranchAddress("antikt2HIItrEM_empty_cell_n", &antikt2HIItrEM_empty_cell_n, &b_antikt2HIItrEM_empty_cell_n);
   fChain->SetBranchAddress("antikt2HIItrEM_empty_cell_et", &antikt2HIItrEM_empty_cell_et, &b_antikt2HIItrEM_empty_cell_et);
   fChain->SetBranchAddress("antikt2HIItrEM_empty_cell_area", &antikt2HIItrEM_empty_cell_area, &b_antikt2HIItrEM_empty_cell_area);
   fChain->SetBranchAddress("antikt2HIItrEM_total_cell_n", &antikt2HIItrEM_total_cell_n, &b_antikt2HIItrEM_total_cell_n);
   fChain->SetBranchAddress("antikt2HIItrEM_total_cell_et", &antikt2HIItrEM_total_cell_et, &b_antikt2HIItrEM_total_cell_et);
   fChain->SetBranchAddress("antikt2HIItrEM_total_cell_area", &antikt2HIItrEM_total_cell_area, &b_antikt2HIItrEM_total_cell_area);
   fChain->SetBranchAddress("antikt2HIItrEM_n90", &antikt2HIItrEM_n90, &b_antikt2HIItrEM_n90);
   fChain->SetBranchAddress("antikt2HIItrEM_fracSamplingMax", &antikt2HIItrEM_fracSamplingMax, &b_antikt2HIItrEM_fracSamplingMax);
   fChain->SetBranchAddress("antikt2HIItrEM_SamplingMax", &antikt2HIItrEM_SamplingMax, &b_antikt2HIItrEM_SamplingMax);
   fChain->SetBranchAddress("antikt2HIItrEM_n90constituents", &antikt2HIItrEM_n90constituents, &b_antikt2HIItrEM_n90constituents);
   fChain->SetBranchAddress("antikt2HIItrEM_Timing", &antikt2HIItrEM_Timing, &b_antikt2HIItrEM_Timing);
   fChain->SetBranchAddress("antikt2HIItrEM_LArQuality", &antikt2HIItrEM_LArQuality, &b_antikt2HIItrEM_LArQuality);
   fChain->SetBranchAddress("antikt2HIItrEM_HECQuality", &antikt2HIItrEM_HECQuality, &b_antikt2HIItrEM_HECQuality);
   fChain->SetBranchAddress("antikt2HIItrEM_TileQuality", &antikt2HIItrEM_TileQuality, &b_antikt2HIItrEM_TileQuality);
   fChain->SetBranchAddress("antikt2HIItrEMFR_n", &antikt2HIItrEMFR_n, &b_antikt2HIItrEMFR_n);
   fChain->SetBranchAddress("antikt2HIItrEMFR_E", &antikt2HIItrEMFR_E, &b_antikt2HIItrEMFR_E);
   fChain->SetBranchAddress("antikt2HIItrEMFR_Et", &antikt2HIItrEMFR_Et, &b_antikt2HIItrEMFR_Et);
   fChain->SetBranchAddress("antikt2HIItrEMFR_pt", &antikt2HIItrEMFR_pt, &b_antikt2HIItrEMFR_pt);
   fChain->SetBranchAddress("antikt2HIItrEMFR_m", &antikt2HIItrEMFR_m, &b_antikt2HIItrEMFR_m);
   fChain->SetBranchAddress("antikt2HIItrEMFR_eta", &antikt2HIItrEMFR_eta, &b_antikt2HIItrEMFR_eta);
   fChain->SetBranchAddress("antikt2HIItrEMFR_phi", &antikt2HIItrEMFR_phi, &b_antikt2HIItrEMFR_phi);
   fChain->SetBranchAddress("antikt2HIItrEMFR_SubtractedEt", &antikt2HIItrEMFR_SubtractedEt, &b_antikt2HIItrEMFR_SubtractedEt);
   fChain->SetBranchAddress("antikt2HIItrEMFR_CryoCorr", &antikt2HIItrEMFR_CryoCorr, &b_antikt2HIItrEMFR_CryoCorr);
   fChain->SetBranchAddress("antikt2HIItrEMFR_NoFlow", &antikt2HIItrEMFR_NoFlow, &b_antikt2HIItrEMFR_NoFlow);
   fChain->SetBranchAddress("antikt2HIItrEMFR_UncalibEt", &antikt2HIItrEMFR_UncalibEt, &b_antikt2HIItrEMFR_UncalibEt);
   fChain->SetBranchAddress("antikt2HIItrEMFR_PassedFR", &antikt2HIItrEMFR_PassedFR, &b_antikt2HIItrEMFR_PassedFR);
   fChain->SetBranchAddress("antikt2HIItrEMFR_const_n", &antikt2HIItrEMFR_const_n, &b_antikt2HIItrEMFR_const_n);
   fChain->SetBranchAddress("antikt2HIItrEMFR_const_et", &antikt2HIItrEMFR_const_et, &b_antikt2HIItrEMFR_const_et);
   fChain->SetBranchAddress("antikt2HIItrEMFR_const_eta", &antikt2HIItrEMFR_const_eta, &b_antikt2HIItrEMFR_const_eta);
   fChain->SetBranchAddress("antikt2HIItrEMFR_const_phi", &antikt2HIItrEMFR_const_phi, &b_antikt2HIItrEMFR_const_phi);
   fChain->SetBranchAddress("antikt2HIItrEMFR_sampling_et", &antikt2HIItrEMFR_sampling_et, &b_antikt2HIItrEMFR_sampling_et);
   fChain->SetBranchAddress("antikt2HIItrEMFR_sampling_et_unsubtr", &antikt2HIItrEMFR_sampling_et_unsubtr, &b_antikt2HIItrEMFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt2HIItrEMFR_bad_cell_n", &antikt2HIItrEMFR_bad_cell_n, &b_antikt2HIItrEMFR_bad_cell_n);
   fChain->SetBranchAddress("antikt2HIItrEMFR_bad_cell_et", &antikt2HIItrEMFR_bad_cell_et, &b_antikt2HIItrEMFR_bad_cell_et);
   fChain->SetBranchAddress("antikt2HIItrEMFR_bad_cell_area", &antikt2HIItrEMFR_bad_cell_area, &b_antikt2HIItrEMFR_bad_cell_area);
   fChain->SetBranchAddress("antikt2HIItrEMFR_empty_cell_n", &antikt2HIItrEMFR_empty_cell_n, &b_antikt2HIItrEMFR_empty_cell_n);
   fChain->SetBranchAddress("antikt2HIItrEMFR_empty_cell_et", &antikt2HIItrEMFR_empty_cell_et, &b_antikt2HIItrEMFR_empty_cell_et);
   fChain->SetBranchAddress("antikt2HIItrEMFR_empty_cell_area", &antikt2HIItrEMFR_empty_cell_area, &b_antikt2HIItrEMFR_empty_cell_area);
   fChain->SetBranchAddress("antikt2HIItrEMFR_total_cell_n", &antikt2HIItrEMFR_total_cell_n, &b_antikt2HIItrEMFR_total_cell_n);
   fChain->SetBranchAddress("antikt2HIItrEMFR_total_cell_et", &antikt2HIItrEMFR_total_cell_et, &b_antikt2HIItrEMFR_total_cell_et);
   fChain->SetBranchAddress("antikt2HIItrEMFR_total_cell_area", &antikt2HIItrEMFR_total_cell_area, &b_antikt2HIItrEMFR_total_cell_area);
   fChain->SetBranchAddress("antikt2HIItrEMFR_n90", &antikt2HIItrEMFR_n90, &b_antikt2HIItrEMFR_n90);
   fChain->SetBranchAddress("antikt2HIItrEMFR_fracSamplingMax", &antikt2HIItrEMFR_fracSamplingMax, &b_antikt2HIItrEMFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt2HIItrEMFR_SamplingMax", &antikt2HIItrEMFR_SamplingMax, &b_antikt2HIItrEMFR_SamplingMax);
   fChain->SetBranchAddress("antikt2HIItrEMFR_n90constituents", &antikt2HIItrEMFR_n90constituents, &b_antikt2HIItrEMFR_n90constituents);
   fChain->SetBranchAddress("antikt2HIItrEMFR_Timing", &antikt2HIItrEMFR_Timing, &b_antikt2HIItrEMFR_Timing);
   fChain->SetBranchAddress("antikt2HIItrEMFR_LArQuality", &antikt2HIItrEMFR_LArQuality, &b_antikt2HIItrEMFR_LArQuality);
   fChain->SetBranchAddress("antikt2HIItrEMFR_HECQuality", &antikt2HIItrEMFR_HECQuality, &b_antikt2HIItrEMFR_HECQuality);
   fChain->SetBranchAddress("antikt2HIItrEMFR_TileQuality", &antikt2HIItrEMFR_TileQuality, &b_antikt2HIItrEMFR_TileQuality);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_Comb", &antikt2HIItrEMFR_flavor_weight_Comb, &b_antikt2HIItrEMFR_flavor_weight_Comb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_IP2D", &antikt2HIItrEMFR_flavor_weight_IP2D, &b_antikt2HIItrEMFR_flavor_weight_IP2D);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_IP3D", &antikt2HIItrEMFR_flavor_weight_IP3D, &b_antikt2HIItrEMFR_flavor_weight_IP3D);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_SV0", &antikt2HIItrEMFR_flavor_weight_SV0, &b_antikt2HIItrEMFR_flavor_weight_SV0);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_SV1", &antikt2HIItrEMFR_flavor_weight_SV1, &b_antikt2HIItrEMFR_flavor_weight_SV1);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_SV2", &antikt2HIItrEMFR_flavor_weight_SV2, &b_antikt2HIItrEMFR_flavor_weight_SV2);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_JetProb", &antikt2HIItrEMFR_flavor_weight_JetProb, &b_antikt2HIItrEMFR_flavor_weight_JetProb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_SoftMuonTag", &antikt2HIItrEMFR_flavor_weight_SoftMuonTag, &b_antikt2HIItrEMFR_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_JetFitterTagNN", &antikt2HIItrEMFR_flavor_weight_JetFitterTagNN, &b_antikt2HIItrEMFR_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_JetFitterCOMBNN", &antikt2HIItrEMFR_flavor_weight_JetFitterCOMBNN, &b_antikt2HIItrEMFR_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_weight_GbbNN", &antikt2HIItrEMFR_flavor_weight_GbbNN, &b_antikt2HIItrEMFR_flavor_weight_GbbNN);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_label", &antikt2HIItrEMFR_flavor_truth_label, &b_antikt2HIItrEMFR_flavor_truth_label);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_dRminToB", &antikt2HIItrEMFR_flavor_truth_dRminToB, &b_antikt2HIItrEMFR_flavor_truth_dRminToB);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_dRminToC", &antikt2HIItrEMFR_flavor_truth_dRminToC, &b_antikt2HIItrEMFR_flavor_truth_dRminToC);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_dRminToT", &antikt2HIItrEMFR_flavor_truth_dRminToT, &b_antikt2HIItrEMFR_flavor_truth_dRminToT);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_BHadronpdg", &antikt2HIItrEMFR_flavor_truth_BHadronpdg, &b_antikt2HIItrEMFR_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_vx_x", &antikt2HIItrEMFR_flavor_truth_vx_x, &b_antikt2HIItrEMFR_flavor_truth_vx_x);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_vx_y", &antikt2HIItrEMFR_flavor_truth_vx_y, &b_antikt2HIItrEMFR_flavor_truth_vx_y);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_truth_vx_z", &antikt2HIItrEMFR_flavor_truth_vx_z, &b_antikt2HIItrEMFR_flavor_truth_vx_z);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_assoctrk_signOfIP", &antikt2HIItrEMFR_flavor_component_assoctrk_signOfIP, &b_antikt2HIItrEMFR_flavor_component_assoctrk_signOfIP);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_assoctrk_signOfZIP", &antikt2HIItrEMFR_flavor_component_assoctrk_signOfZIP, &b_antikt2HIItrEMFR_flavor_component_assoctrk_signOfZIP);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx", &antikt2HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx, &b_antikt2HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx", &antikt2HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx, &b_antikt2HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx", &antikt2HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx, &b_antikt2HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx", &antikt2HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx, &b_antikt2HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_gentruthlepton_origin", &antikt2HIItrEMFR_flavor_component_gentruthlepton_origin, &b_antikt2HIItrEMFR_flavor_component_gentruthlepton_origin);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_gentruthlepton_slbarcode", &antikt2HIItrEMFR_flavor_component_gentruthlepton_slbarcode, &b_antikt2HIItrEMFR_flavor_component_gentruthlepton_slbarcode);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip2d_pu", &antikt2HIItrEMFR_flavor_component_ip2d_pu, &b_antikt2HIItrEMFR_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip2d_pb", &antikt2HIItrEMFR_flavor_component_ip2d_pb, &b_antikt2HIItrEMFR_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip2d_isValid", &antikt2HIItrEMFR_flavor_component_ip2d_isValid, &b_antikt2HIItrEMFR_flavor_component_ip2d_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip2d_ntrk", &antikt2HIItrEMFR_flavor_component_ip2d_ntrk, &b_antikt2HIItrEMFR_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip3d_pu", &antikt2HIItrEMFR_flavor_component_ip3d_pu, &b_antikt2HIItrEMFR_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip3d_pb", &antikt2HIItrEMFR_flavor_component_ip3d_pb, &b_antikt2HIItrEMFR_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip3d_isValid", &antikt2HIItrEMFR_flavor_component_ip3d_isValid, &b_antikt2HIItrEMFR_flavor_component_ip3d_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ip3d_ntrk", &antikt2HIItrEMFR_flavor_component_ip3d_ntrk, &b_antikt2HIItrEMFR_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jetprob_ntrk", &antikt2HIItrEMFR_flavor_component_jetprob_ntrk, &b_antikt2HIItrEMFR_flavor_component_jetprob_ntrk);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv1_pu", &antikt2HIItrEMFR_flavor_component_sv1_pu, &b_antikt2HIItrEMFR_flavor_component_sv1_pu);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv1_pb", &antikt2HIItrEMFR_flavor_component_sv1_pb, &b_antikt2HIItrEMFR_flavor_component_sv1_pb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv1_isValid", &antikt2HIItrEMFR_flavor_component_sv1_isValid, &b_antikt2HIItrEMFR_flavor_component_sv1_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv2_pu", &antikt2HIItrEMFR_flavor_component_sv2_pu, &b_antikt2HIItrEMFR_flavor_component_sv2_pu);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv2_pb", &antikt2HIItrEMFR_flavor_component_sv2_pb, &b_antikt2HIItrEMFR_flavor_component_sv2_pb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv2_isValid", &antikt2HIItrEMFR_flavor_component_sv2_isValid, &b_antikt2HIItrEMFR_flavor_component_sv2_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_pu", &antikt2HIItrEMFR_flavor_component_jfit_pu, &b_antikt2HIItrEMFR_flavor_component_jfit_pu);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_pb", &antikt2HIItrEMFR_flavor_component_jfit_pb, &b_antikt2HIItrEMFR_flavor_component_jfit_pb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_pc", &antikt2HIItrEMFR_flavor_component_jfit_pc, &b_antikt2HIItrEMFR_flavor_component_jfit_pc);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_isValid", &antikt2HIItrEMFR_flavor_component_jfit_isValid, &b_antikt2HIItrEMFR_flavor_component_jfit_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfitcomb_pu", &antikt2HIItrEMFR_flavor_component_jfitcomb_pu, &b_antikt2HIItrEMFR_flavor_component_jfitcomb_pu);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfitcomb_pb", &antikt2HIItrEMFR_flavor_component_jfitcomb_pb, &b_antikt2HIItrEMFR_flavor_component_jfitcomb_pb);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfitcomb_pc", &antikt2HIItrEMFR_flavor_component_jfitcomb_pc, &b_antikt2HIItrEMFR_flavor_component_jfitcomb_pc);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfitcomb_isValid", &antikt2HIItrEMFR_flavor_component_jfitcomb_isValid, &b_antikt2HIItrEMFR_flavor_component_jfitcomb_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_gbbnn_nMatchingTracks", &antikt2HIItrEMFR_flavor_component_gbbnn_nMatchingTracks, &b_antikt2HIItrEMFR_flavor_component_gbbnn_nMatchingTracks);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_gbbnn_trkJetWidth", &antikt2HIItrEMFR_flavor_component_gbbnn_trkJetWidth, &b_antikt2HIItrEMFR_flavor_component_gbbnn_trkJetWidth);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR", &antikt2HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR, &b_antikt2HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_nvtx", &antikt2HIItrEMFR_flavor_component_jfit_nvtx, &b_antikt2HIItrEMFR_flavor_component_jfit_nvtx);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_nvtx1t", &antikt2HIItrEMFR_flavor_component_jfit_nvtx1t, &b_antikt2HIItrEMFR_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_ntrkAtVx", &antikt2HIItrEMFR_flavor_component_jfit_ntrkAtVx, &b_antikt2HIItrEMFR_flavor_component_jfit_ntrkAtVx);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_efrc", &antikt2HIItrEMFR_flavor_component_jfit_efrc, &b_antikt2HIItrEMFR_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_mass", &antikt2HIItrEMFR_flavor_component_jfit_mass, &b_antikt2HIItrEMFR_flavor_component_jfit_mass);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_sig3d", &antikt2HIItrEMFR_flavor_component_jfit_sig3d, &b_antikt2HIItrEMFR_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_deltaPhi", &antikt2HIItrEMFR_flavor_component_jfit_deltaPhi, &b_antikt2HIItrEMFR_flavor_component_jfit_deltaPhi);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_jfit_deltaEta", &antikt2HIItrEMFR_flavor_component_jfit_deltaEta, &b_antikt2HIItrEMFR_flavor_component_jfit_deltaEta);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_d0val", &antikt2HIItrEMFR_flavor_component_ipplus_trk_d0val, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_d0val);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_d0sig", &antikt2HIItrEMFR_flavor_component_ipplus_trk_d0sig, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_d0sig);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_z0val", &antikt2HIItrEMFR_flavor_component_ipplus_trk_z0val, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_z0val);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_z0sig", &antikt2HIItrEMFR_flavor_component_ipplus_trk_z0sig, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_z0sig);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_w2D", &antikt2HIItrEMFR_flavor_component_ipplus_trk_w2D, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_w2D);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_w3D", &antikt2HIItrEMFR_flavor_component_ipplus_trk_w3D, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_w3D);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_pJP", &antikt2HIItrEMFR_flavor_component_ipplus_trk_pJP, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_pJP);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_pJPneg", &antikt2HIItrEMFR_flavor_component_ipplus_trk_pJPneg, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_pJPneg);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_grade", &antikt2HIItrEMFR_flavor_component_ipplus_trk_grade, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_grade);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_ipplus_trk_isFromV0", &antikt2HIItrEMFR_flavor_component_ipplus_trk_isFromV0, &b_antikt2HIItrEMFR_flavor_component_ipplus_trk_isFromV0);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_isValid", &antikt2HIItrEMFR_flavor_component_svp_isValid, &b_antikt2HIItrEMFR_flavor_component_svp_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_ntrkv", &antikt2HIItrEMFR_flavor_component_svp_ntrkv, &b_antikt2HIItrEMFR_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_ntrkj", &antikt2HIItrEMFR_flavor_component_svp_ntrkj, &b_antikt2HIItrEMFR_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_n2t", &antikt2HIItrEMFR_flavor_component_svp_n2t, &b_antikt2HIItrEMFR_flavor_component_svp_n2t);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_mass", &antikt2HIItrEMFR_flavor_component_svp_mass, &b_antikt2HIItrEMFR_flavor_component_svp_mass);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_efrc", &antikt2HIItrEMFR_flavor_component_svp_efrc, &b_antikt2HIItrEMFR_flavor_component_svp_efrc);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_x", &antikt2HIItrEMFR_flavor_component_svp_x, &b_antikt2HIItrEMFR_flavor_component_svp_x);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_y", &antikt2HIItrEMFR_flavor_component_svp_y, &b_antikt2HIItrEMFR_flavor_component_svp_y);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_z", &antikt2HIItrEMFR_flavor_component_svp_z, &b_antikt2HIItrEMFR_flavor_component_svp_z);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_err_x", &antikt2HIItrEMFR_flavor_component_svp_err_x, &b_antikt2HIItrEMFR_flavor_component_svp_err_x);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_err_y", &antikt2HIItrEMFR_flavor_component_svp_err_y, &b_antikt2HIItrEMFR_flavor_component_svp_err_y);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_err_z", &antikt2HIItrEMFR_flavor_component_svp_err_z, &b_antikt2HIItrEMFR_flavor_component_svp_err_z);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_cov_xy", &antikt2HIItrEMFR_flavor_component_svp_cov_xy, &b_antikt2HIItrEMFR_flavor_component_svp_cov_xy);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_cov_xz", &antikt2HIItrEMFR_flavor_component_svp_cov_xz, &b_antikt2HIItrEMFR_flavor_component_svp_cov_xz);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_cov_yz", &antikt2HIItrEMFR_flavor_component_svp_cov_yz, &b_antikt2HIItrEMFR_flavor_component_svp_cov_yz);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_chi2", &antikt2HIItrEMFR_flavor_component_svp_chi2, &b_antikt2HIItrEMFR_flavor_component_svp_chi2);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_ndof", &antikt2HIItrEMFR_flavor_component_svp_ndof, &b_antikt2HIItrEMFR_flavor_component_svp_ndof);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_svp_ntrk", &antikt2HIItrEMFR_flavor_component_svp_ntrk, &b_antikt2HIItrEMFR_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_isValid", &antikt2HIItrEMFR_flavor_component_sv0p_isValid, &b_antikt2HIItrEMFR_flavor_component_sv0p_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_ntrkv", &antikt2HIItrEMFR_flavor_component_sv0p_ntrkv, &b_antikt2HIItrEMFR_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_ntrkj", &antikt2HIItrEMFR_flavor_component_sv0p_ntrkj, &b_antikt2HIItrEMFR_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_n2t", &antikt2HIItrEMFR_flavor_component_sv0p_n2t, &b_antikt2HIItrEMFR_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_mass", &antikt2HIItrEMFR_flavor_component_sv0p_mass, &b_antikt2HIItrEMFR_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_efrc", &antikt2HIItrEMFR_flavor_component_sv0p_efrc, &b_antikt2HIItrEMFR_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_x", &antikt2HIItrEMFR_flavor_component_sv0p_x, &b_antikt2HIItrEMFR_flavor_component_sv0p_x);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_y", &antikt2HIItrEMFR_flavor_component_sv0p_y, &b_antikt2HIItrEMFR_flavor_component_sv0p_y);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_z", &antikt2HIItrEMFR_flavor_component_sv0p_z, &b_antikt2HIItrEMFR_flavor_component_sv0p_z);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_err_x", &antikt2HIItrEMFR_flavor_component_sv0p_err_x, &b_antikt2HIItrEMFR_flavor_component_sv0p_err_x);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_err_y", &antikt2HIItrEMFR_flavor_component_sv0p_err_y, &b_antikt2HIItrEMFR_flavor_component_sv0p_err_y);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_err_z", &antikt2HIItrEMFR_flavor_component_sv0p_err_z, &b_antikt2HIItrEMFR_flavor_component_sv0p_err_z);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_cov_xy", &antikt2HIItrEMFR_flavor_component_sv0p_cov_xy, &b_antikt2HIItrEMFR_flavor_component_sv0p_cov_xy);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_cov_xz", &antikt2HIItrEMFR_flavor_component_sv0p_cov_xz, &b_antikt2HIItrEMFR_flavor_component_sv0p_cov_xz);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_cov_yz", &antikt2HIItrEMFR_flavor_component_sv0p_cov_yz, &b_antikt2HIItrEMFR_flavor_component_sv0p_cov_yz);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_chi2", &antikt2HIItrEMFR_flavor_component_sv0p_chi2, &b_antikt2HIItrEMFR_flavor_component_sv0p_chi2);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_ndof", &antikt2HIItrEMFR_flavor_component_sv0p_ndof, &b_antikt2HIItrEMFR_flavor_component_sv0p_ndof);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_sv0p_ntrk", &antikt2HIItrEMFR_flavor_component_sv0p_ntrk, &b_antikt2HIItrEMFR_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_w", &antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_w, &b_antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_w);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel", &antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel, &b_antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet", &antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet, &b_antikt2HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_msvp_isValid", &antikt2HIItrEMFR_flavor_component_msvp_isValid, &b_antikt2HIItrEMFR_flavor_component_msvp_isValid);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_msvp_ntrkv", &antikt2HIItrEMFR_flavor_component_msvp_ntrkv, &b_antikt2HIItrEMFR_flavor_component_msvp_ntrkv);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_msvp_ntrkj", &antikt2HIItrEMFR_flavor_component_msvp_ntrkj, &b_antikt2HIItrEMFR_flavor_component_msvp_ntrkj);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_msvp_n2t", &antikt2HIItrEMFR_flavor_component_msvp_n2t, &b_antikt2HIItrEMFR_flavor_component_msvp_n2t);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_msvp_nVtx", &antikt2HIItrEMFR_flavor_component_msvp_nVtx, &b_antikt2HIItrEMFR_flavor_component_msvp_nVtx);
   fChain->SetBranchAddress("antikt2HIItrEMFR_flavor_component_msvp_normWeightedDist", &antikt2HIItrEMFR_flavor_component_msvp_normWeightedDist, &b_antikt2HIItrEMFR_flavor_component_msvp_normWeightedDist);
   fChain->SetBranchAddress("antikt3HIItrEM_n", &antikt3HIItrEM_n, &b_antikt3HIItrEM_n);
   fChain->SetBranchAddress("antikt3HIItrEM_E", &antikt3HIItrEM_E, &b_antikt3HIItrEM_E);
   fChain->SetBranchAddress("antikt3HIItrEM_Et", &antikt3HIItrEM_Et, &b_antikt3HIItrEM_Et);
   fChain->SetBranchAddress("antikt3HIItrEM_pt", &antikt3HIItrEM_pt, &b_antikt3HIItrEM_pt);
   fChain->SetBranchAddress("antikt3HIItrEM_m", &antikt3HIItrEM_m, &b_antikt3HIItrEM_m);
   fChain->SetBranchAddress("antikt3HIItrEM_eta", &antikt3HIItrEM_eta, &b_antikt3HIItrEM_eta);
   fChain->SetBranchAddress("antikt3HIItrEM_phi", &antikt3HIItrEM_phi, &b_antikt3HIItrEM_phi);
   fChain->SetBranchAddress("antikt3HIItrEM_SubtractedEt", &antikt3HIItrEM_SubtractedEt, &b_antikt3HIItrEM_SubtractedEt);
   fChain->SetBranchAddress("antikt3HIItrEM_CryoCorr", &antikt3HIItrEM_CryoCorr, &b_antikt3HIItrEM_CryoCorr);
   fChain->SetBranchAddress("antikt3HIItrEM_NoFlow", &antikt3HIItrEM_NoFlow, &b_antikt3HIItrEM_NoFlow);
   fChain->SetBranchAddress("antikt3HIItrEM_UncalibEt", &antikt3HIItrEM_UncalibEt, &b_antikt3HIItrEM_UncalibEt);
   fChain->SetBranchAddress("antikt3HIItrEM_PassedFR", &antikt3HIItrEM_PassedFR, &b_antikt3HIItrEM_PassedFR);
   fChain->SetBranchAddress("antikt3HIItrEM_const_n", &antikt3HIItrEM_const_n, &b_antikt3HIItrEM_const_n);
   fChain->SetBranchAddress("antikt3HIItrEM_const_et", &antikt3HIItrEM_const_et, &b_antikt3HIItrEM_const_et);
   fChain->SetBranchAddress("antikt3HIItrEM_const_eta", &antikt3HIItrEM_const_eta, &b_antikt3HIItrEM_const_eta);
   fChain->SetBranchAddress("antikt3HIItrEM_const_phi", &antikt3HIItrEM_const_phi, &b_antikt3HIItrEM_const_phi);
   fChain->SetBranchAddress("antikt3HIItrEM_sampling_et", &antikt3HIItrEM_sampling_et, &b_antikt3HIItrEM_sampling_et);
   fChain->SetBranchAddress("antikt3HIItrEM_sampling_et_unsubtr", &antikt3HIItrEM_sampling_et_unsubtr, &b_antikt3HIItrEM_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt3HIItrEM_bad_cell_n", &antikt3HIItrEM_bad_cell_n, &b_antikt3HIItrEM_bad_cell_n);
   fChain->SetBranchAddress("antikt3HIItrEM_bad_cell_et", &antikt3HIItrEM_bad_cell_et, &b_antikt3HIItrEM_bad_cell_et);
   fChain->SetBranchAddress("antikt3HIItrEM_bad_cell_area", &antikt3HIItrEM_bad_cell_area, &b_antikt3HIItrEM_bad_cell_area);
   fChain->SetBranchAddress("antikt3HIItrEM_empty_cell_n", &antikt3HIItrEM_empty_cell_n, &b_antikt3HIItrEM_empty_cell_n);
   fChain->SetBranchAddress("antikt3HIItrEM_empty_cell_et", &antikt3HIItrEM_empty_cell_et, &b_antikt3HIItrEM_empty_cell_et);
   fChain->SetBranchAddress("antikt3HIItrEM_empty_cell_area", &antikt3HIItrEM_empty_cell_area, &b_antikt3HIItrEM_empty_cell_area);
   fChain->SetBranchAddress("antikt3HIItrEM_total_cell_n", &antikt3HIItrEM_total_cell_n, &b_antikt3HIItrEM_total_cell_n);
   fChain->SetBranchAddress("antikt3HIItrEM_total_cell_et", &antikt3HIItrEM_total_cell_et, &b_antikt3HIItrEM_total_cell_et);
   fChain->SetBranchAddress("antikt3HIItrEM_total_cell_area", &antikt3HIItrEM_total_cell_area, &b_antikt3HIItrEM_total_cell_area);
   fChain->SetBranchAddress("antikt3HIItrEM_n90", &antikt3HIItrEM_n90, &b_antikt3HIItrEM_n90);
   fChain->SetBranchAddress("antikt3HIItrEM_fracSamplingMax", &antikt3HIItrEM_fracSamplingMax, &b_antikt3HIItrEM_fracSamplingMax);
   fChain->SetBranchAddress("antikt3HIItrEM_SamplingMax", &antikt3HIItrEM_SamplingMax, &b_antikt3HIItrEM_SamplingMax);
   fChain->SetBranchAddress("antikt3HIItrEM_n90constituents", &antikt3HIItrEM_n90constituents, &b_antikt3HIItrEM_n90constituents);
   fChain->SetBranchAddress("antikt3HIItrEM_Timing", &antikt3HIItrEM_Timing, &b_antikt3HIItrEM_Timing);
   fChain->SetBranchAddress("antikt3HIItrEM_LArQuality", &antikt3HIItrEM_LArQuality, &b_antikt3HIItrEM_LArQuality);
   fChain->SetBranchAddress("antikt3HIItrEM_HECQuality", &antikt3HIItrEM_HECQuality, &b_antikt3HIItrEM_HECQuality);
   fChain->SetBranchAddress("antikt3HIItrEM_TileQuality", &antikt3HIItrEM_TileQuality, &b_antikt3HIItrEM_TileQuality);
   fChain->SetBranchAddress("antikt3HIItrEMFR_n", &antikt3HIItrEMFR_n, &b_antikt3HIItrEMFR_n);
   fChain->SetBranchAddress("antikt3HIItrEMFR_E", &antikt3HIItrEMFR_E, &b_antikt3HIItrEMFR_E);
   fChain->SetBranchAddress("antikt3HIItrEMFR_Et", &antikt3HIItrEMFR_Et, &b_antikt3HIItrEMFR_Et);
   fChain->SetBranchAddress("antikt3HIItrEMFR_pt", &antikt3HIItrEMFR_pt, &b_antikt3HIItrEMFR_pt);
   fChain->SetBranchAddress("antikt3HIItrEMFR_m", &antikt3HIItrEMFR_m, &b_antikt3HIItrEMFR_m);
   fChain->SetBranchAddress("antikt3HIItrEMFR_eta", &antikt3HIItrEMFR_eta, &b_antikt3HIItrEMFR_eta);
   fChain->SetBranchAddress("antikt3HIItrEMFR_phi", &antikt3HIItrEMFR_phi, &b_antikt3HIItrEMFR_phi);
   fChain->SetBranchAddress("antikt3HIItrEMFR_SubtractedEt", &antikt3HIItrEMFR_SubtractedEt, &b_antikt3HIItrEMFR_SubtractedEt);
   fChain->SetBranchAddress("antikt3HIItrEMFR_CryoCorr", &antikt3HIItrEMFR_CryoCorr, &b_antikt3HIItrEMFR_CryoCorr);
   fChain->SetBranchAddress("antikt3HIItrEMFR_NoFlow", &antikt3HIItrEMFR_NoFlow, &b_antikt3HIItrEMFR_NoFlow);
   fChain->SetBranchAddress("antikt3HIItrEMFR_UncalibEt", &antikt3HIItrEMFR_UncalibEt, &b_antikt3HIItrEMFR_UncalibEt);
   fChain->SetBranchAddress("antikt3HIItrEMFR_PassedFR", &antikt3HIItrEMFR_PassedFR, &b_antikt3HIItrEMFR_PassedFR);
   fChain->SetBranchAddress("antikt3HIItrEMFR_const_n", &antikt3HIItrEMFR_const_n, &b_antikt3HIItrEMFR_const_n);
   fChain->SetBranchAddress("antikt3HIItrEMFR_const_et", &antikt3HIItrEMFR_const_et, &b_antikt3HIItrEMFR_const_et);
   fChain->SetBranchAddress("antikt3HIItrEMFR_const_eta", &antikt3HIItrEMFR_const_eta, &b_antikt3HIItrEMFR_const_eta);
   fChain->SetBranchAddress("antikt3HIItrEMFR_const_phi", &antikt3HIItrEMFR_const_phi, &b_antikt3HIItrEMFR_const_phi);
   fChain->SetBranchAddress("antikt3HIItrEMFR_sampling_et", &antikt3HIItrEMFR_sampling_et, &b_antikt3HIItrEMFR_sampling_et);
   fChain->SetBranchAddress("antikt3HIItrEMFR_sampling_et_unsubtr", &antikt3HIItrEMFR_sampling_et_unsubtr, &b_antikt3HIItrEMFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt3HIItrEMFR_bad_cell_n", &antikt3HIItrEMFR_bad_cell_n, &b_antikt3HIItrEMFR_bad_cell_n);
   fChain->SetBranchAddress("antikt3HIItrEMFR_bad_cell_et", &antikt3HIItrEMFR_bad_cell_et, &b_antikt3HIItrEMFR_bad_cell_et);
   fChain->SetBranchAddress("antikt3HIItrEMFR_bad_cell_area", &antikt3HIItrEMFR_bad_cell_area, &b_antikt3HIItrEMFR_bad_cell_area);
   fChain->SetBranchAddress("antikt3HIItrEMFR_empty_cell_n", &antikt3HIItrEMFR_empty_cell_n, &b_antikt3HIItrEMFR_empty_cell_n);
   fChain->SetBranchAddress("antikt3HIItrEMFR_empty_cell_et", &antikt3HIItrEMFR_empty_cell_et, &b_antikt3HIItrEMFR_empty_cell_et);
   fChain->SetBranchAddress("antikt3HIItrEMFR_empty_cell_area", &antikt3HIItrEMFR_empty_cell_area, &b_antikt3HIItrEMFR_empty_cell_area);
   fChain->SetBranchAddress("antikt3HIItrEMFR_total_cell_n", &antikt3HIItrEMFR_total_cell_n, &b_antikt3HIItrEMFR_total_cell_n);
   fChain->SetBranchAddress("antikt3HIItrEMFR_total_cell_et", &antikt3HIItrEMFR_total_cell_et, &b_antikt3HIItrEMFR_total_cell_et);
   fChain->SetBranchAddress("antikt3HIItrEMFR_total_cell_area", &antikt3HIItrEMFR_total_cell_area, &b_antikt3HIItrEMFR_total_cell_area);
   fChain->SetBranchAddress("antikt3HIItrEMFR_n90", &antikt3HIItrEMFR_n90, &b_antikt3HIItrEMFR_n90);
   fChain->SetBranchAddress("antikt3HIItrEMFR_fracSamplingMax", &antikt3HIItrEMFR_fracSamplingMax, &b_antikt3HIItrEMFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt3HIItrEMFR_SamplingMax", &antikt3HIItrEMFR_SamplingMax, &b_antikt3HIItrEMFR_SamplingMax);
   fChain->SetBranchAddress("antikt3HIItrEMFR_n90constituents", &antikt3HIItrEMFR_n90constituents, &b_antikt3HIItrEMFR_n90constituents);
   fChain->SetBranchAddress("antikt3HIItrEMFR_Timing", &antikt3HIItrEMFR_Timing, &b_antikt3HIItrEMFR_Timing);
   fChain->SetBranchAddress("antikt3HIItrEMFR_LArQuality", &antikt3HIItrEMFR_LArQuality, &b_antikt3HIItrEMFR_LArQuality);
   fChain->SetBranchAddress("antikt3HIItrEMFR_HECQuality", &antikt3HIItrEMFR_HECQuality, &b_antikt3HIItrEMFR_HECQuality);
   fChain->SetBranchAddress("antikt3HIItrEMFR_TileQuality", &antikt3HIItrEMFR_TileQuality, &b_antikt3HIItrEMFR_TileQuality);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_Comb", &antikt3HIItrEMFR_flavor_weight_Comb, &b_antikt3HIItrEMFR_flavor_weight_Comb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_IP2D", &antikt3HIItrEMFR_flavor_weight_IP2D, &b_antikt3HIItrEMFR_flavor_weight_IP2D);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_IP3D", &antikt3HIItrEMFR_flavor_weight_IP3D, &b_antikt3HIItrEMFR_flavor_weight_IP3D);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_SV0", &antikt3HIItrEMFR_flavor_weight_SV0, &b_antikt3HIItrEMFR_flavor_weight_SV0);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_SV1", &antikt3HIItrEMFR_flavor_weight_SV1, &b_antikt3HIItrEMFR_flavor_weight_SV1);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_SV2", &antikt3HIItrEMFR_flavor_weight_SV2, &b_antikt3HIItrEMFR_flavor_weight_SV2);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_JetProb", &antikt3HIItrEMFR_flavor_weight_JetProb, &b_antikt3HIItrEMFR_flavor_weight_JetProb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_SoftMuonTag", &antikt3HIItrEMFR_flavor_weight_SoftMuonTag, &b_antikt3HIItrEMFR_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_JetFitterTagNN", &antikt3HIItrEMFR_flavor_weight_JetFitterTagNN, &b_antikt3HIItrEMFR_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_JetFitterCOMBNN", &antikt3HIItrEMFR_flavor_weight_JetFitterCOMBNN, &b_antikt3HIItrEMFR_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_weight_GbbNN", &antikt3HIItrEMFR_flavor_weight_GbbNN, &b_antikt3HIItrEMFR_flavor_weight_GbbNN);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_label", &antikt3HIItrEMFR_flavor_truth_label, &b_antikt3HIItrEMFR_flavor_truth_label);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_dRminToB", &antikt3HIItrEMFR_flavor_truth_dRminToB, &b_antikt3HIItrEMFR_flavor_truth_dRminToB);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_dRminToC", &antikt3HIItrEMFR_flavor_truth_dRminToC, &b_antikt3HIItrEMFR_flavor_truth_dRminToC);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_dRminToT", &antikt3HIItrEMFR_flavor_truth_dRminToT, &b_antikt3HIItrEMFR_flavor_truth_dRminToT);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_BHadronpdg", &antikt3HIItrEMFR_flavor_truth_BHadronpdg, &b_antikt3HIItrEMFR_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_vx_x", &antikt3HIItrEMFR_flavor_truth_vx_x, &b_antikt3HIItrEMFR_flavor_truth_vx_x);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_vx_y", &antikt3HIItrEMFR_flavor_truth_vx_y, &b_antikt3HIItrEMFR_flavor_truth_vx_y);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_truth_vx_z", &antikt3HIItrEMFR_flavor_truth_vx_z, &b_antikt3HIItrEMFR_flavor_truth_vx_z);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_assoctrk_signOfIP", &antikt3HIItrEMFR_flavor_component_assoctrk_signOfIP, &b_antikt3HIItrEMFR_flavor_component_assoctrk_signOfIP);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_assoctrk_signOfZIP", &antikt3HIItrEMFR_flavor_component_assoctrk_signOfZIP, &b_antikt3HIItrEMFR_flavor_component_assoctrk_signOfZIP);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx", &antikt3HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx, &b_antikt3HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx", &antikt3HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx, &b_antikt3HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx", &antikt3HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx, &b_antikt3HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx", &antikt3HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx, &b_antikt3HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_gentruthlepton_origin", &antikt3HIItrEMFR_flavor_component_gentruthlepton_origin, &b_antikt3HIItrEMFR_flavor_component_gentruthlepton_origin);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_gentruthlepton_slbarcode", &antikt3HIItrEMFR_flavor_component_gentruthlepton_slbarcode, &b_antikt3HIItrEMFR_flavor_component_gentruthlepton_slbarcode);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip2d_pu", &antikt3HIItrEMFR_flavor_component_ip2d_pu, &b_antikt3HIItrEMFR_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip2d_pb", &antikt3HIItrEMFR_flavor_component_ip2d_pb, &b_antikt3HIItrEMFR_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip2d_isValid", &antikt3HIItrEMFR_flavor_component_ip2d_isValid, &b_antikt3HIItrEMFR_flavor_component_ip2d_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip2d_ntrk", &antikt3HIItrEMFR_flavor_component_ip2d_ntrk, &b_antikt3HIItrEMFR_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip3d_pu", &antikt3HIItrEMFR_flavor_component_ip3d_pu, &b_antikt3HIItrEMFR_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip3d_pb", &antikt3HIItrEMFR_flavor_component_ip3d_pb, &b_antikt3HIItrEMFR_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip3d_isValid", &antikt3HIItrEMFR_flavor_component_ip3d_isValid, &b_antikt3HIItrEMFR_flavor_component_ip3d_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ip3d_ntrk", &antikt3HIItrEMFR_flavor_component_ip3d_ntrk, &b_antikt3HIItrEMFR_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jetprob_ntrk", &antikt3HIItrEMFR_flavor_component_jetprob_ntrk, &b_antikt3HIItrEMFR_flavor_component_jetprob_ntrk);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv1_pu", &antikt3HIItrEMFR_flavor_component_sv1_pu, &b_antikt3HIItrEMFR_flavor_component_sv1_pu);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv1_pb", &antikt3HIItrEMFR_flavor_component_sv1_pb, &b_antikt3HIItrEMFR_flavor_component_sv1_pb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv1_isValid", &antikt3HIItrEMFR_flavor_component_sv1_isValid, &b_antikt3HIItrEMFR_flavor_component_sv1_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv2_pu", &antikt3HIItrEMFR_flavor_component_sv2_pu, &b_antikt3HIItrEMFR_flavor_component_sv2_pu);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv2_pb", &antikt3HIItrEMFR_flavor_component_sv2_pb, &b_antikt3HIItrEMFR_flavor_component_sv2_pb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv2_isValid", &antikt3HIItrEMFR_flavor_component_sv2_isValid, &b_antikt3HIItrEMFR_flavor_component_sv2_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_pu", &antikt3HIItrEMFR_flavor_component_jfit_pu, &b_antikt3HIItrEMFR_flavor_component_jfit_pu);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_pb", &antikt3HIItrEMFR_flavor_component_jfit_pb, &b_antikt3HIItrEMFR_flavor_component_jfit_pb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_pc", &antikt3HIItrEMFR_flavor_component_jfit_pc, &b_antikt3HIItrEMFR_flavor_component_jfit_pc);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_isValid", &antikt3HIItrEMFR_flavor_component_jfit_isValid, &b_antikt3HIItrEMFR_flavor_component_jfit_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfitcomb_pu", &antikt3HIItrEMFR_flavor_component_jfitcomb_pu, &b_antikt3HIItrEMFR_flavor_component_jfitcomb_pu);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfitcomb_pb", &antikt3HIItrEMFR_flavor_component_jfitcomb_pb, &b_antikt3HIItrEMFR_flavor_component_jfitcomb_pb);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfitcomb_pc", &antikt3HIItrEMFR_flavor_component_jfitcomb_pc, &b_antikt3HIItrEMFR_flavor_component_jfitcomb_pc);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfitcomb_isValid", &antikt3HIItrEMFR_flavor_component_jfitcomb_isValid, &b_antikt3HIItrEMFR_flavor_component_jfitcomb_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_gbbnn_nMatchingTracks", &antikt3HIItrEMFR_flavor_component_gbbnn_nMatchingTracks, &b_antikt3HIItrEMFR_flavor_component_gbbnn_nMatchingTracks);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_gbbnn_trkJetWidth", &antikt3HIItrEMFR_flavor_component_gbbnn_trkJetWidth, &b_antikt3HIItrEMFR_flavor_component_gbbnn_trkJetWidth);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR", &antikt3HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR, &b_antikt3HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_nvtx", &antikt3HIItrEMFR_flavor_component_jfit_nvtx, &b_antikt3HIItrEMFR_flavor_component_jfit_nvtx);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_nvtx1t", &antikt3HIItrEMFR_flavor_component_jfit_nvtx1t, &b_antikt3HIItrEMFR_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_ntrkAtVx", &antikt3HIItrEMFR_flavor_component_jfit_ntrkAtVx, &b_antikt3HIItrEMFR_flavor_component_jfit_ntrkAtVx);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_efrc", &antikt3HIItrEMFR_flavor_component_jfit_efrc, &b_antikt3HIItrEMFR_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_mass", &antikt3HIItrEMFR_flavor_component_jfit_mass, &b_antikt3HIItrEMFR_flavor_component_jfit_mass);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_sig3d", &antikt3HIItrEMFR_flavor_component_jfit_sig3d, &b_antikt3HIItrEMFR_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_deltaPhi", &antikt3HIItrEMFR_flavor_component_jfit_deltaPhi, &b_antikt3HIItrEMFR_flavor_component_jfit_deltaPhi);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_jfit_deltaEta", &antikt3HIItrEMFR_flavor_component_jfit_deltaEta, &b_antikt3HIItrEMFR_flavor_component_jfit_deltaEta);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_d0val", &antikt3HIItrEMFR_flavor_component_ipplus_trk_d0val, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_d0val);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_d0sig", &antikt3HIItrEMFR_flavor_component_ipplus_trk_d0sig, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_d0sig);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_z0val", &antikt3HIItrEMFR_flavor_component_ipplus_trk_z0val, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_z0val);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_z0sig", &antikt3HIItrEMFR_flavor_component_ipplus_trk_z0sig, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_z0sig);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_w2D", &antikt3HIItrEMFR_flavor_component_ipplus_trk_w2D, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_w2D);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_w3D", &antikt3HIItrEMFR_flavor_component_ipplus_trk_w3D, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_w3D);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_pJP", &antikt3HIItrEMFR_flavor_component_ipplus_trk_pJP, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_pJP);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_pJPneg", &antikt3HIItrEMFR_flavor_component_ipplus_trk_pJPneg, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_pJPneg);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_grade", &antikt3HIItrEMFR_flavor_component_ipplus_trk_grade, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_grade);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_ipplus_trk_isFromV0", &antikt3HIItrEMFR_flavor_component_ipplus_trk_isFromV0, &b_antikt3HIItrEMFR_flavor_component_ipplus_trk_isFromV0);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_isValid", &antikt3HIItrEMFR_flavor_component_svp_isValid, &b_antikt3HIItrEMFR_flavor_component_svp_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_ntrkv", &antikt3HIItrEMFR_flavor_component_svp_ntrkv, &b_antikt3HIItrEMFR_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_ntrkj", &antikt3HIItrEMFR_flavor_component_svp_ntrkj, &b_antikt3HIItrEMFR_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_n2t", &antikt3HIItrEMFR_flavor_component_svp_n2t, &b_antikt3HIItrEMFR_flavor_component_svp_n2t);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_mass", &antikt3HIItrEMFR_flavor_component_svp_mass, &b_antikt3HIItrEMFR_flavor_component_svp_mass);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_efrc", &antikt3HIItrEMFR_flavor_component_svp_efrc, &b_antikt3HIItrEMFR_flavor_component_svp_efrc);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_x", &antikt3HIItrEMFR_flavor_component_svp_x, &b_antikt3HIItrEMFR_flavor_component_svp_x);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_y", &antikt3HIItrEMFR_flavor_component_svp_y, &b_antikt3HIItrEMFR_flavor_component_svp_y);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_z", &antikt3HIItrEMFR_flavor_component_svp_z, &b_antikt3HIItrEMFR_flavor_component_svp_z);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_err_x", &antikt3HIItrEMFR_flavor_component_svp_err_x, &b_antikt3HIItrEMFR_flavor_component_svp_err_x);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_err_y", &antikt3HIItrEMFR_flavor_component_svp_err_y, &b_antikt3HIItrEMFR_flavor_component_svp_err_y);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_err_z", &antikt3HIItrEMFR_flavor_component_svp_err_z, &b_antikt3HIItrEMFR_flavor_component_svp_err_z);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_cov_xy", &antikt3HIItrEMFR_flavor_component_svp_cov_xy, &b_antikt3HIItrEMFR_flavor_component_svp_cov_xy);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_cov_xz", &antikt3HIItrEMFR_flavor_component_svp_cov_xz, &b_antikt3HIItrEMFR_flavor_component_svp_cov_xz);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_cov_yz", &antikt3HIItrEMFR_flavor_component_svp_cov_yz, &b_antikt3HIItrEMFR_flavor_component_svp_cov_yz);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_chi2", &antikt3HIItrEMFR_flavor_component_svp_chi2, &b_antikt3HIItrEMFR_flavor_component_svp_chi2);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_ndof", &antikt3HIItrEMFR_flavor_component_svp_ndof, &b_antikt3HIItrEMFR_flavor_component_svp_ndof);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_svp_ntrk", &antikt3HIItrEMFR_flavor_component_svp_ntrk, &b_antikt3HIItrEMFR_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_isValid", &antikt3HIItrEMFR_flavor_component_sv0p_isValid, &b_antikt3HIItrEMFR_flavor_component_sv0p_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_ntrkv", &antikt3HIItrEMFR_flavor_component_sv0p_ntrkv, &b_antikt3HIItrEMFR_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_ntrkj", &antikt3HIItrEMFR_flavor_component_sv0p_ntrkj, &b_antikt3HIItrEMFR_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_n2t", &antikt3HIItrEMFR_flavor_component_sv0p_n2t, &b_antikt3HIItrEMFR_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_mass", &antikt3HIItrEMFR_flavor_component_sv0p_mass, &b_antikt3HIItrEMFR_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_efrc", &antikt3HIItrEMFR_flavor_component_sv0p_efrc, &b_antikt3HIItrEMFR_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_x", &antikt3HIItrEMFR_flavor_component_sv0p_x, &b_antikt3HIItrEMFR_flavor_component_sv0p_x);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_y", &antikt3HIItrEMFR_flavor_component_sv0p_y, &b_antikt3HIItrEMFR_flavor_component_sv0p_y);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_z", &antikt3HIItrEMFR_flavor_component_sv0p_z, &b_antikt3HIItrEMFR_flavor_component_sv0p_z);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_err_x", &antikt3HIItrEMFR_flavor_component_sv0p_err_x, &b_antikt3HIItrEMFR_flavor_component_sv0p_err_x);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_err_y", &antikt3HIItrEMFR_flavor_component_sv0p_err_y, &b_antikt3HIItrEMFR_flavor_component_sv0p_err_y);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_err_z", &antikt3HIItrEMFR_flavor_component_sv0p_err_z, &b_antikt3HIItrEMFR_flavor_component_sv0p_err_z);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_cov_xy", &antikt3HIItrEMFR_flavor_component_sv0p_cov_xy, &b_antikt3HIItrEMFR_flavor_component_sv0p_cov_xy);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_cov_xz", &antikt3HIItrEMFR_flavor_component_sv0p_cov_xz, &b_antikt3HIItrEMFR_flavor_component_sv0p_cov_xz);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_cov_yz", &antikt3HIItrEMFR_flavor_component_sv0p_cov_yz, &b_antikt3HIItrEMFR_flavor_component_sv0p_cov_yz);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_chi2", &antikt3HIItrEMFR_flavor_component_sv0p_chi2, &b_antikt3HIItrEMFR_flavor_component_sv0p_chi2);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_ndof", &antikt3HIItrEMFR_flavor_component_sv0p_ndof, &b_antikt3HIItrEMFR_flavor_component_sv0p_ndof);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_sv0p_ntrk", &antikt3HIItrEMFR_flavor_component_sv0p_ntrk, &b_antikt3HIItrEMFR_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_w", &antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_w, &b_antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_w);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel", &antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel, &b_antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet", &antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet, &b_antikt3HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_msvp_isValid", &antikt3HIItrEMFR_flavor_component_msvp_isValid, &b_antikt3HIItrEMFR_flavor_component_msvp_isValid);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_msvp_ntrkv", &antikt3HIItrEMFR_flavor_component_msvp_ntrkv, &b_antikt3HIItrEMFR_flavor_component_msvp_ntrkv);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_msvp_ntrkj", &antikt3HIItrEMFR_flavor_component_msvp_ntrkj, &b_antikt3HIItrEMFR_flavor_component_msvp_ntrkj);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_msvp_n2t", &antikt3HIItrEMFR_flavor_component_msvp_n2t, &b_antikt3HIItrEMFR_flavor_component_msvp_n2t);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_msvp_nVtx", &antikt3HIItrEMFR_flavor_component_msvp_nVtx, &b_antikt3HIItrEMFR_flavor_component_msvp_nVtx);
   fChain->SetBranchAddress("antikt3HIItrEMFR_flavor_component_msvp_normWeightedDist", &antikt3HIItrEMFR_flavor_component_msvp_normWeightedDist, &b_antikt3HIItrEMFR_flavor_component_msvp_normWeightedDist);
   fChain->SetBranchAddress("antikt4HIItrEM_n", &antikt4HIItrEM_n, &b_antikt4HIItrEM_n);
   fChain->SetBranchAddress("antikt4HIItrEM_E", &antikt4HIItrEM_E, &b_antikt4HIItrEM_E);
   fChain->SetBranchAddress("antikt4HIItrEM_Et", &antikt4HIItrEM_Et, &b_antikt4HIItrEM_Et);
   fChain->SetBranchAddress("antikt4HIItrEM_pt", &antikt4HIItrEM_pt, &b_antikt4HIItrEM_pt);
   fChain->SetBranchAddress("antikt4HIItrEM_m", &antikt4HIItrEM_m, &b_antikt4HIItrEM_m);
   fChain->SetBranchAddress("antikt4HIItrEM_eta", &antikt4HIItrEM_eta, &b_antikt4HIItrEM_eta);
   fChain->SetBranchAddress("antikt4HIItrEM_phi", &antikt4HIItrEM_phi, &b_antikt4HIItrEM_phi);
   fChain->SetBranchAddress("antikt4HIItrEM_SubtractedEt", &antikt4HIItrEM_SubtractedEt, &b_antikt4HIItrEM_SubtractedEt);
   fChain->SetBranchAddress("antikt4HIItrEM_CryoCorr", &antikt4HIItrEM_CryoCorr, &b_antikt4HIItrEM_CryoCorr);
   fChain->SetBranchAddress("antikt4HIItrEM_NoFlow", &antikt4HIItrEM_NoFlow, &b_antikt4HIItrEM_NoFlow);
   fChain->SetBranchAddress("antikt4HIItrEM_UncalibEt", &antikt4HIItrEM_UncalibEt, &b_antikt4HIItrEM_UncalibEt);
   fChain->SetBranchAddress("antikt4HIItrEM_PassedFR", &antikt4HIItrEM_PassedFR, &b_antikt4HIItrEM_PassedFR);
   fChain->SetBranchAddress("antikt4HIItrEM_const_n", &antikt4HIItrEM_const_n, &b_antikt4HIItrEM_const_n);
   fChain->SetBranchAddress("antikt4HIItrEM_const_et", &antikt4HIItrEM_const_et, &b_antikt4HIItrEM_const_et);
   fChain->SetBranchAddress("antikt4HIItrEM_const_eta", &antikt4HIItrEM_const_eta, &b_antikt4HIItrEM_const_eta);
   fChain->SetBranchAddress("antikt4HIItrEM_const_phi", &antikt4HIItrEM_const_phi, &b_antikt4HIItrEM_const_phi);
   fChain->SetBranchAddress("antikt4HIItrEM_sampling_et", &antikt4HIItrEM_sampling_et, &b_antikt4HIItrEM_sampling_et);
   fChain->SetBranchAddress("antikt4HIItrEM_sampling_et_unsubtr", &antikt4HIItrEM_sampling_et_unsubtr, &b_antikt4HIItrEM_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt4HIItrEM_bad_cell_n", &antikt4HIItrEM_bad_cell_n, &b_antikt4HIItrEM_bad_cell_n);
   fChain->SetBranchAddress("antikt4HIItrEM_bad_cell_et", &antikt4HIItrEM_bad_cell_et, &b_antikt4HIItrEM_bad_cell_et);
   fChain->SetBranchAddress("antikt4HIItrEM_bad_cell_area", &antikt4HIItrEM_bad_cell_area, &b_antikt4HIItrEM_bad_cell_area);
   fChain->SetBranchAddress("antikt4HIItrEM_empty_cell_n", &antikt4HIItrEM_empty_cell_n, &b_antikt4HIItrEM_empty_cell_n);
   fChain->SetBranchAddress("antikt4HIItrEM_empty_cell_et", &antikt4HIItrEM_empty_cell_et, &b_antikt4HIItrEM_empty_cell_et);
   fChain->SetBranchAddress("antikt4HIItrEM_empty_cell_area", &antikt4HIItrEM_empty_cell_area, &b_antikt4HIItrEM_empty_cell_area);
   fChain->SetBranchAddress("antikt4HIItrEM_total_cell_n", &antikt4HIItrEM_total_cell_n, &b_antikt4HIItrEM_total_cell_n);
   fChain->SetBranchAddress("antikt4HIItrEM_total_cell_et", &antikt4HIItrEM_total_cell_et, &b_antikt4HIItrEM_total_cell_et);
   fChain->SetBranchAddress("antikt4HIItrEM_total_cell_area", &antikt4HIItrEM_total_cell_area, &b_antikt4HIItrEM_total_cell_area);
   fChain->SetBranchAddress("antikt4HIItrEM_n90", &antikt4HIItrEM_n90, &b_antikt4HIItrEM_n90);
   fChain->SetBranchAddress("antikt4HIItrEM_fracSamplingMax", &antikt4HIItrEM_fracSamplingMax, &b_antikt4HIItrEM_fracSamplingMax);
   fChain->SetBranchAddress("antikt4HIItrEM_SamplingMax", &antikt4HIItrEM_SamplingMax, &b_antikt4HIItrEM_SamplingMax);
   fChain->SetBranchAddress("antikt4HIItrEM_n90constituents", &antikt4HIItrEM_n90constituents, &b_antikt4HIItrEM_n90constituents);
   fChain->SetBranchAddress("antikt4HIItrEM_Timing", &antikt4HIItrEM_Timing, &b_antikt4HIItrEM_Timing);
   fChain->SetBranchAddress("antikt4HIItrEM_LArQuality", &antikt4HIItrEM_LArQuality, &b_antikt4HIItrEM_LArQuality);
   fChain->SetBranchAddress("antikt4HIItrEM_HECQuality", &antikt4HIItrEM_HECQuality, &b_antikt4HIItrEM_HECQuality);
   fChain->SetBranchAddress("antikt4HIItrEM_TileQuality", &antikt4HIItrEM_TileQuality, &b_antikt4HIItrEM_TileQuality);
   fChain->SetBranchAddress("antikt4HIItrEMFR_n", &antikt4HIItrEMFR_n, &b_antikt4HIItrEMFR_n);
   fChain->SetBranchAddress("antikt4HIItrEMFR_E", &antikt4HIItrEMFR_E, &b_antikt4HIItrEMFR_E);
   fChain->SetBranchAddress("antikt4HIItrEMFR_Et", &antikt4HIItrEMFR_Et, &b_antikt4HIItrEMFR_Et);
   fChain->SetBranchAddress("antikt4HIItrEMFR_pt", &antikt4HIItrEMFR_pt, &b_antikt4HIItrEMFR_pt);
   fChain->SetBranchAddress("antikt4HIItrEMFR_m", &antikt4HIItrEMFR_m, &b_antikt4HIItrEMFR_m);
   fChain->SetBranchAddress("antikt4HIItrEMFR_eta", &antikt4HIItrEMFR_eta, &b_antikt4HIItrEMFR_eta);
   fChain->SetBranchAddress("antikt4HIItrEMFR_phi", &antikt4HIItrEMFR_phi, &b_antikt4HIItrEMFR_phi);
   fChain->SetBranchAddress("antikt4HIItrEMFR_SubtractedEt", &antikt4HIItrEMFR_SubtractedEt, &b_antikt4HIItrEMFR_SubtractedEt);
   fChain->SetBranchAddress("antikt4HIItrEMFR_CryoCorr", &antikt4HIItrEMFR_CryoCorr, &b_antikt4HIItrEMFR_CryoCorr);
   fChain->SetBranchAddress("antikt4HIItrEMFR_NoFlow", &antikt4HIItrEMFR_NoFlow, &b_antikt4HIItrEMFR_NoFlow);
   fChain->SetBranchAddress("antikt4HIItrEMFR_UncalibEt", &antikt4HIItrEMFR_UncalibEt, &b_antikt4HIItrEMFR_UncalibEt);
   fChain->SetBranchAddress("antikt4HIItrEMFR_PassedFR", &antikt4HIItrEMFR_PassedFR, &b_antikt4HIItrEMFR_PassedFR);
   fChain->SetBranchAddress("antikt4HIItrEMFR_const_n", &antikt4HIItrEMFR_const_n, &b_antikt4HIItrEMFR_const_n);
   fChain->SetBranchAddress("antikt4HIItrEMFR_const_et", &antikt4HIItrEMFR_const_et, &b_antikt4HIItrEMFR_const_et);
   fChain->SetBranchAddress("antikt4HIItrEMFR_const_eta", &antikt4HIItrEMFR_const_eta, &b_antikt4HIItrEMFR_const_eta);
   fChain->SetBranchAddress("antikt4HIItrEMFR_const_phi", &antikt4HIItrEMFR_const_phi, &b_antikt4HIItrEMFR_const_phi);
   fChain->SetBranchAddress("antikt4HIItrEMFR_sampling_et", &antikt4HIItrEMFR_sampling_et, &b_antikt4HIItrEMFR_sampling_et);
   fChain->SetBranchAddress("antikt4HIItrEMFR_sampling_et_unsubtr", &antikt4HIItrEMFR_sampling_et_unsubtr, &b_antikt4HIItrEMFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt4HIItrEMFR_bad_cell_n", &antikt4HIItrEMFR_bad_cell_n, &b_antikt4HIItrEMFR_bad_cell_n);
   fChain->SetBranchAddress("antikt4HIItrEMFR_bad_cell_et", &antikt4HIItrEMFR_bad_cell_et, &b_antikt4HIItrEMFR_bad_cell_et);
   fChain->SetBranchAddress("antikt4HIItrEMFR_bad_cell_area", &antikt4HIItrEMFR_bad_cell_area, &b_antikt4HIItrEMFR_bad_cell_area);
   fChain->SetBranchAddress("antikt4HIItrEMFR_empty_cell_n", &antikt4HIItrEMFR_empty_cell_n, &b_antikt4HIItrEMFR_empty_cell_n);
   fChain->SetBranchAddress("antikt4HIItrEMFR_empty_cell_et", &antikt4HIItrEMFR_empty_cell_et, &b_antikt4HIItrEMFR_empty_cell_et);
   fChain->SetBranchAddress("antikt4HIItrEMFR_empty_cell_area", &antikt4HIItrEMFR_empty_cell_area, &b_antikt4HIItrEMFR_empty_cell_area);
   fChain->SetBranchAddress("antikt4HIItrEMFR_total_cell_n", &antikt4HIItrEMFR_total_cell_n, &b_antikt4HIItrEMFR_total_cell_n);
   fChain->SetBranchAddress("antikt4HIItrEMFR_total_cell_et", &antikt4HIItrEMFR_total_cell_et, &b_antikt4HIItrEMFR_total_cell_et);
   fChain->SetBranchAddress("antikt4HIItrEMFR_total_cell_area", &antikt4HIItrEMFR_total_cell_area, &b_antikt4HIItrEMFR_total_cell_area);
   fChain->SetBranchAddress("antikt4HIItrEMFR_n90", &antikt4HIItrEMFR_n90, &b_antikt4HIItrEMFR_n90);
   fChain->SetBranchAddress("antikt4HIItrEMFR_fracSamplingMax", &antikt4HIItrEMFR_fracSamplingMax, &b_antikt4HIItrEMFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt4HIItrEMFR_SamplingMax", &antikt4HIItrEMFR_SamplingMax, &b_antikt4HIItrEMFR_SamplingMax);
   fChain->SetBranchAddress("antikt4HIItrEMFR_n90constituents", &antikt4HIItrEMFR_n90constituents, &b_antikt4HIItrEMFR_n90constituents);
   fChain->SetBranchAddress("antikt4HIItrEMFR_Timing", &antikt4HIItrEMFR_Timing, &b_antikt4HIItrEMFR_Timing);
   fChain->SetBranchAddress("antikt4HIItrEMFR_LArQuality", &antikt4HIItrEMFR_LArQuality, &b_antikt4HIItrEMFR_LArQuality);
   fChain->SetBranchAddress("antikt4HIItrEMFR_HECQuality", &antikt4HIItrEMFR_HECQuality, &b_antikt4HIItrEMFR_HECQuality);
   fChain->SetBranchAddress("antikt4HIItrEMFR_TileQuality", &antikt4HIItrEMFR_TileQuality, &b_antikt4HIItrEMFR_TileQuality);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_Comb", &antikt4HIItrEMFR_flavor_weight_Comb, &b_antikt4HIItrEMFR_flavor_weight_Comb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_IP2D", &antikt4HIItrEMFR_flavor_weight_IP2D, &b_antikt4HIItrEMFR_flavor_weight_IP2D);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_IP3D", &antikt4HIItrEMFR_flavor_weight_IP3D, &b_antikt4HIItrEMFR_flavor_weight_IP3D);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_SV0", &antikt4HIItrEMFR_flavor_weight_SV0, &b_antikt4HIItrEMFR_flavor_weight_SV0);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_SV1", &antikt4HIItrEMFR_flavor_weight_SV1, &b_antikt4HIItrEMFR_flavor_weight_SV1);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_SV2", &antikt4HIItrEMFR_flavor_weight_SV2, &b_antikt4HIItrEMFR_flavor_weight_SV2);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_JetProb", &antikt4HIItrEMFR_flavor_weight_JetProb, &b_antikt4HIItrEMFR_flavor_weight_JetProb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_SoftMuonTag", &antikt4HIItrEMFR_flavor_weight_SoftMuonTag, &b_antikt4HIItrEMFR_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_JetFitterTagNN", &antikt4HIItrEMFR_flavor_weight_JetFitterTagNN, &b_antikt4HIItrEMFR_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_JetFitterCOMBNN", &antikt4HIItrEMFR_flavor_weight_JetFitterCOMBNN, &b_antikt4HIItrEMFR_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_weight_GbbNN", &antikt4HIItrEMFR_flavor_weight_GbbNN, &b_antikt4HIItrEMFR_flavor_weight_GbbNN);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_label", &antikt4HIItrEMFR_flavor_truth_label, &b_antikt4HIItrEMFR_flavor_truth_label);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_dRminToB", &antikt4HIItrEMFR_flavor_truth_dRminToB, &b_antikt4HIItrEMFR_flavor_truth_dRminToB);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_dRminToC", &antikt4HIItrEMFR_flavor_truth_dRminToC, &b_antikt4HIItrEMFR_flavor_truth_dRminToC);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_dRminToT", &antikt4HIItrEMFR_flavor_truth_dRminToT, &b_antikt4HIItrEMFR_flavor_truth_dRminToT);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_BHadronpdg", &antikt4HIItrEMFR_flavor_truth_BHadronpdg, &b_antikt4HIItrEMFR_flavor_truth_BHadronpdg);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_vx_x", &antikt4HIItrEMFR_flavor_truth_vx_x, &b_antikt4HIItrEMFR_flavor_truth_vx_x);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_vx_y", &antikt4HIItrEMFR_flavor_truth_vx_y, &b_antikt4HIItrEMFR_flavor_truth_vx_y);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_truth_vx_z", &antikt4HIItrEMFR_flavor_truth_vx_z, &b_antikt4HIItrEMFR_flavor_truth_vx_z);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_assoctrk_signOfIP", &antikt4HIItrEMFR_flavor_component_assoctrk_signOfIP, &b_antikt4HIItrEMFR_flavor_component_assoctrk_signOfIP);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_assoctrk_signOfZIP", &antikt4HIItrEMFR_flavor_component_assoctrk_signOfZIP, &b_antikt4HIItrEMFR_flavor_component_assoctrk_signOfZIP);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx", &antikt4HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx, &b_antikt4HIItrEMFR_flavor_component_assoctrk_ud0wrtPriVtx);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx", &antikt4HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx, &b_antikt4HIItrEMFR_flavor_component_assoctrk_ud0ErrwrtPriVtx);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx", &antikt4HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx, &b_antikt4HIItrEMFR_flavor_component_assoctrk_uz0wrtPriVtx);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx", &antikt4HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx, &b_antikt4HIItrEMFR_flavor_component_assoctrk_uz0ErrwrtPriVtx);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_gentruthlepton_origin", &antikt4HIItrEMFR_flavor_component_gentruthlepton_origin, &b_antikt4HIItrEMFR_flavor_component_gentruthlepton_origin);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_gentruthlepton_slbarcode", &antikt4HIItrEMFR_flavor_component_gentruthlepton_slbarcode, &b_antikt4HIItrEMFR_flavor_component_gentruthlepton_slbarcode);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip2d_pu", &antikt4HIItrEMFR_flavor_component_ip2d_pu, &b_antikt4HIItrEMFR_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip2d_pb", &antikt4HIItrEMFR_flavor_component_ip2d_pb, &b_antikt4HIItrEMFR_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip2d_isValid", &antikt4HIItrEMFR_flavor_component_ip2d_isValid, &b_antikt4HIItrEMFR_flavor_component_ip2d_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip2d_ntrk", &antikt4HIItrEMFR_flavor_component_ip2d_ntrk, &b_antikt4HIItrEMFR_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip3d_pu", &antikt4HIItrEMFR_flavor_component_ip3d_pu, &b_antikt4HIItrEMFR_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip3d_pb", &antikt4HIItrEMFR_flavor_component_ip3d_pb, &b_antikt4HIItrEMFR_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip3d_isValid", &antikt4HIItrEMFR_flavor_component_ip3d_isValid, &b_antikt4HIItrEMFR_flavor_component_ip3d_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ip3d_ntrk", &antikt4HIItrEMFR_flavor_component_ip3d_ntrk, &b_antikt4HIItrEMFR_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jetprob_ntrk", &antikt4HIItrEMFR_flavor_component_jetprob_ntrk, &b_antikt4HIItrEMFR_flavor_component_jetprob_ntrk);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv1_pu", &antikt4HIItrEMFR_flavor_component_sv1_pu, &b_antikt4HIItrEMFR_flavor_component_sv1_pu);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv1_pb", &antikt4HIItrEMFR_flavor_component_sv1_pb, &b_antikt4HIItrEMFR_flavor_component_sv1_pb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv1_isValid", &antikt4HIItrEMFR_flavor_component_sv1_isValid, &b_antikt4HIItrEMFR_flavor_component_sv1_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv2_pu", &antikt4HIItrEMFR_flavor_component_sv2_pu, &b_antikt4HIItrEMFR_flavor_component_sv2_pu);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv2_pb", &antikt4HIItrEMFR_flavor_component_sv2_pb, &b_antikt4HIItrEMFR_flavor_component_sv2_pb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv2_isValid", &antikt4HIItrEMFR_flavor_component_sv2_isValid, &b_antikt4HIItrEMFR_flavor_component_sv2_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_pu", &antikt4HIItrEMFR_flavor_component_jfit_pu, &b_antikt4HIItrEMFR_flavor_component_jfit_pu);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_pb", &antikt4HIItrEMFR_flavor_component_jfit_pb, &b_antikt4HIItrEMFR_flavor_component_jfit_pb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_pc", &antikt4HIItrEMFR_flavor_component_jfit_pc, &b_antikt4HIItrEMFR_flavor_component_jfit_pc);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_isValid", &antikt4HIItrEMFR_flavor_component_jfit_isValid, &b_antikt4HIItrEMFR_flavor_component_jfit_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfitcomb_pu", &antikt4HIItrEMFR_flavor_component_jfitcomb_pu, &b_antikt4HIItrEMFR_flavor_component_jfitcomb_pu);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfitcomb_pb", &antikt4HIItrEMFR_flavor_component_jfitcomb_pb, &b_antikt4HIItrEMFR_flavor_component_jfitcomb_pb);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfitcomb_pc", &antikt4HIItrEMFR_flavor_component_jfitcomb_pc, &b_antikt4HIItrEMFR_flavor_component_jfitcomb_pc);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfitcomb_isValid", &antikt4HIItrEMFR_flavor_component_jfitcomb_isValid, &b_antikt4HIItrEMFR_flavor_component_jfitcomb_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_gbbnn_nMatchingTracks", &antikt4HIItrEMFR_flavor_component_gbbnn_nMatchingTracks, &b_antikt4HIItrEMFR_flavor_component_gbbnn_nMatchingTracks);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_gbbnn_trkJetWidth", &antikt4HIItrEMFR_flavor_component_gbbnn_trkJetWidth, &b_antikt4HIItrEMFR_flavor_component_gbbnn_trkJetWidth);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR", &antikt4HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR, &b_antikt4HIItrEMFR_flavor_component_gbbnn_trkJetMaxDeltaR);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_nvtx", &antikt4HIItrEMFR_flavor_component_jfit_nvtx, &b_antikt4HIItrEMFR_flavor_component_jfit_nvtx);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_nvtx1t", &antikt4HIItrEMFR_flavor_component_jfit_nvtx1t, &b_antikt4HIItrEMFR_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_ntrkAtVx", &antikt4HIItrEMFR_flavor_component_jfit_ntrkAtVx, &b_antikt4HIItrEMFR_flavor_component_jfit_ntrkAtVx);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_efrc", &antikt4HIItrEMFR_flavor_component_jfit_efrc, &b_antikt4HIItrEMFR_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_mass", &antikt4HIItrEMFR_flavor_component_jfit_mass, &b_antikt4HIItrEMFR_flavor_component_jfit_mass);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_sig3d", &antikt4HIItrEMFR_flavor_component_jfit_sig3d, &b_antikt4HIItrEMFR_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_deltaPhi", &antikt4HIItrEMFR_flavor_component_jfit_deltaPhi, &b_antikt4HIItrEMFR_flavor_component_jfit_deltaPhi);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_jfit_deltaEta", &antikt4HIItrEMFR_flavor_component_jfit_deltaEta, &b_antikt4HIItrEMFR_flavor_component_jfit_deltaEta);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_d0val", &antikt4HIItrEMFR_flavor_component_ipplus_trk_d0val, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_d0val);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_d0sig", &antikt4HIItrEMFR_flavor_component_ipplus_trk_d0sig, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_d0sig);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_z0val", &antikt4HIItrEMFR_flavor_component_ipplus_trk_z0val, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_z0val);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_z0sig", &antikt4HIItrEMFR_flavor_component_ipplus_trk_z0sig, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_z0sig);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_w2D", &antikt4HIItrEMFR_flavor_component_ipplus_trk_w2D, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_w2D);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_w3D", &antikt4HIItrEMFR_flavor_component_ipplus_trk_w3D, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_w3D);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_pJP", &antikt4HIItrEMFR_flavor_component_ipplus_trk_pJP, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_pJP);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_pJPneg", &antikt4HIItrEMFR_flavor_component_ipplus_trk_pJPneg, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_pJPneg);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_grade", &antikt4HIItrEMFR_flavor_component_ipplus_trk_grade, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_grade);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_ipplus_trk_isFromV0", &antikt4HIItrEMFR_flavor_component_ipplus_trk_isFromV0, &b_antikt4HIItrEMFR_flavor_component_ipplus_trk_isFromV0);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_isValid", &antikt4HIItrEMFR_flavor_component_svp_isValid, &b_antikt4HIItrEMFR_flavor_component_svp_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_ntrkv", &antikt4HIItrEMFR_flavor_component_svp_ntrkv, &b_antikt4HIItrEMFR_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_ntrkj", &antikt4HIItrEMFR_flavor_component_svp_ntrkj, &b_antikt4HIItrEMFR_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_n2t", &antikt4HIItrEMFR_flavor_component_svp_n2t, &b_antikt4HIItrEMFR_flavor_component_svp_n2t);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_mass", &antikt4HIItrEMFR_flavor_component_svp_mass, &b_antikt4HIItrEMFR_flavor_component_svp_mass);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_efrc", &antikt4HIItrEMFR_flavor_component_svp_efrc, &b_antikt4HIItrEMFR_flavor_component_svp_efrc);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_x", &antikt4HIItrEMFR_flavor_component_svp_x, &b_antikt4HIItrEMFR_flavor_component_svp_x);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_y", &antikt4HIItrEMFR_flavor_component_svp_y, &b_antikt4HIItrEMFR_flavor_component_svp_y);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_z", &antikt4HIItrEMFR_flavor_component_svp_z, &b_antikt4HIItrEMFR_flavor_component_svp_z);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_err_x", &antikt4HIItrEMFR_flavor_component_svp_err_x, &b_antikt4HIItrEMFR_flavor_component_svp_err_x);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_err_y", &antikt4HIItrEMFR_flavor_component_svp_err_y, &b_antikt4HIItrEMFR_flavor_component_svp_err_y);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_err_z", &antikt4HIItrEMFR_flavor_component_svp_err_z, &b_antikt4HIItrEMFR_flavor_component_svp_err_z);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_cov_xy", &antikt4HIItrEMFR_flavor_component_svp_cov_xy, &b_antikt4HIItrEMFR_flavor_component_svp_cov_xy);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_cov_xz", &antikt4HIItrEMFR_flavor_component_svp_cov_xz, &b_antikt4HIItrEMFR_flavor_component_svp_cov_xz);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_cov_yz", &antikt4HIItrEMFR_flavor_component_svp_cov_yz, &b_antikt4HIItrEMFR_flavor_component_svp_cov_yz);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_chi2", &antikt4HIItrEMFR_flavor_component_svp_chi2, &b_antikt4HIItrEMFR_flavor_component_svp_chi2);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_ndof", &antikt4HIItrEMFR_flavor_component_svp_ndof, &b_antikt4HIItrEMFR_flavor_component_svp_ndof);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_svp_ntrk", &antikt4HIItrEMFR_flavor_component_svp_ntrk, &b_antikt4HIItrEMFR_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_isValid", &antikt4HIItrEMFR_flavor_component_sv0p_isValid, &b_antikt4HIItrEMFR_flavor_component_sv0p_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_ntrkv", &antikt4HIItrEMFR_flavor_component_sv0p_ntrkv, &b_antikt4HIItrEMFR_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_ntrkj", &antikt4HIItrEMFR_flavor_component_sv0p_ntrkj, &b_antikt4HIItrEMFR_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_n2t", &antikt4HIItrEMFR_flavor_component_sv0p_n2t, &b_antikt4HIItrEMFR_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_mass", &antikt4HIItrEMFR_flavor_component_sv0p_mass, &b_antikt4HIItrEMFR_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_efrc", &antikt4HIItrEMFR_flavor_component_sv0p_efrc, &b_antikt4HIItrEMFR_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_x", &antikt4HIItrEMFR_flavor_component_sv0p_x, &b_antikt4HIItrEMFR_flavor_component_sv0p_x);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_y", &antikt4HIItrEMFR_flavor_component_sv0p_y, &b_antikt4HIItrEMFR_flavor_component_sv0p_y);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_z", &antikt4HIItrEMFR_flavor_component_sv0p_z, &b_antikt4HIItrEMFR_flavor_component_sv0p_z);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_err_x", &antikt4HIItrEMFR_flavor_component_sv0p_err_x, &b_antikt4HIItrEMFR_flavor_component_sv0p_err_x);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_err_y", &antikt4HIItrEMFR_flavor_component_sv0p_err_y, &b_antikt4HIItrEMFR_flavor_component_sv0p_err_y);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_err_z", &antikt4HIItrEMFR_flavor_component_sv0p_err_z, &b_antikt4HIItrEMFR_flavor_component_sv0p_err_z);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_cov_xy", &antikt4HIItrEMFR_flavor_component_sv0p_cov_xy, &b_antikt4HIItrEMFR_flavor_component_sv0p_cov_xy);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_cov_xz", &antikt4HIItrEMFR_flavor_component_sv0p_cov_xz, &b_antikt4HIItrEMFR_flavor_component_sv0p_cov_xz);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_cov_yz", &antikt4HIItrEMFR_flavor_component_sv0p_cov_yz, &b_antikt4HIItrEMFR_flavor_component_sv0p_cov_yz);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_chi2", &antikt4HIItrEMFR_flavor_component_sv0p_chi2, &b_antikt4HIItrEMFR_flavor_component_sv0p_chi2);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_ndof", &antikt4HIItrEMFR_flavor_component_sv0p_ndof, &b_antikt4HIItrEMFR_flavor_component_sv0p_ndof);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_sv0p_ntrk", &antikt4HIItrEMFR_flavor_component_sv0p_ntrk, &b_antikt4HIItrEMFR_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_w", &antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_w, &b_antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_w);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel", &antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel, &b_antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_pTRel);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet", &antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet, &b_antikt4HIItrEMFR_flavor_component_softmuoninfo_muon_dRJet);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_msvp_isValid", &antikt4HIItrEMFR_flavor_component_msvp_isValid, &b_antikt4HIItrEMFR_flavor_component_msvp_isValid);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_msvp_ntrkv", &antikt4HIItrEMFR_flavor_component_msvp_ntrkv, &b_antikt4HIItrEMFR_flavor_component_msvp_ntrkv);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_msvp_ntrkj", &antikt4HIItrEMFR_flavor_component_msvp_ntrkj, &b_antikt4HIItrEMFR_flavor_component_msvp_ntrkj);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_msvp_n2t", &antikt4HIItrEMFR_flavor_component_msvp_n2t, &b_antikt4HIItrEMFR_flavor_component_msvp_n2t);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_msvp_nVtx", &antikt4HIItrEMFR_flavor_component_msvp_nVtx, &b_antikt4HIItrEMFR_flavor_component_msvp_nVtx);
   fChain->SetBranchAddress("antikt4HIItrEMFR_flavor_component_msvp_normWeightedDist", &antikt4HIItrEMFR_flavor_component_msvp_normWeightedDist, &b_antikt4HIItrEMFR_flavor_component_msvp_normWeightedDist);
   fChain->SetBranchAddress("antikt5HIItrEM_n", &antikt5HIItrEM_n, &b_antikt5HIItrEM_n);
   fChain->SetBranchAddress("antikt5HIItrEM_E", &antikt5HIItrEM_E, &b_antikt5HIItrEM_E);
   fChain->SetBranchAddress("antikt5HIItrEM_Et", &antikt5HIItrEM_Et, &b_antikt5HIItrEM_Et);
   fChain->SetBranchAddress("antikt5HIItrEM_pt", &antikt5HIItrEM_pt, &b_antikt5HIItrEM_pt);
   fChain->SetBranchAddress("antikt5HIItrEM_m", &antikt5HIItrEM_m, &b_antikt5HIItrEM_m);
   fChain->SetBranchAddress("antikt5HIItrEM_eta", &antikt5HIItrEM_eta, &b_antikt5HIItrEM_eta);
   fChain->SetBranchAddress("antikt5HIItrEM_phi", &antikt5HIItrEM_phi, &b_antikt5HIItrEM_phi);
   fChain->SetBranchAddress("antikt5HIItrEM_SubtractedEt", &antikt5HIItrEM_SubtractedEt, &b_antikt5HIItrEM_SubtractedEt);
   fChain->SetBranchAddress("antikt5HIItrEM_CryoCorr", &antikt5HIItrEM_CryoCorr, &b_antikt5HIItrEM_CryoCorr);
   fChain->SetBranchAddress("antikt5HIItrEM_NoFlow", &antikt5HIItrEM_NoFlow, &b_antikt5HIItrEM_NoFlow);
   fChain->SetBranchAddress("antikt5HIItrEM_UncalibEt", &antikt5HIItrEM_UncalibEt, &b_antikt5HIItrEM_UncalibEt);
   fChain->SetBranchAddress("antikt5HIItrEM_PassedFR", &antikt5HIItrEM_PassedFR, &b_antikt5HIItrEM_PassedFR);
   fChain->SetBranchAddress("antikt5HIItrEM_const_n", &antikt5HIItrEM_const_n, &b_antikt5HIItrEM_const_n);
   fChain->SetBranchAddress("antikt5HIItrEM_const_et", &antikt5HIItrEM_const_et, &b_antikt5HIItrEM_const_et);
   fChain->SetBranchAddress("antikt5HIItrEM_const_eta", &antikt5HIItrEM_const_eta, &b_antikt5HIItrEM_const_eta);
   fChain->SetBranchAddress("antikt5HIItrEM_const_phi", &antikt5HIItrEM_const_phi, &b_antikt5HIItrEM_const_phi);
   fChain->SetBranchAddress("antikt5HIItrEM_sampling_et", &antikt5HIItrEM_sampling_et, &b_antikt5HIItrEM_sampling_et);
   fChain->SetBranchAddress("antikt5HIItrEM_sampling_et_unsubtr", &antikt5HIItrEM_sampling_et_unsubtr, &b_antikt5HIItrEM_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt5HIItrEM_bad_cell_n", &antikt5HIItrEM_bad_cell_n, &b_antikt5HIItrEM_bad_cell_n);
   fChain->SetBranchAddress("antikt5HIItrEM_bad_cell_et", &antikt5HIItrEM_bad_cell_et, &b_antikt5HIItrEM_bad_cell_et);
   fChain->SetBranchAddress("antikt5HIItrEM_bad_cell_area", &antikt5HIItrEM_bad_cell_area, &b_antikt5HIItrEM_bad_cell_area);
   fChain->SetBranchAddress("antikt5HIItrEM_empty_cell_n", &antikt5HIItrEM_empty_cell_n, &b_antikt5HIItrEM_empty_cell_n);
   fChain->SetBranchAddress("antikt5HIItrEM_empty_cell_et", &antikt5HIItrEM_empty_cell_et, &b_antikt5HIItrEM_empty_cell_et);
   fChain->SetBranchAddress("antikt5HIItrEM_empty_cell_area", &antikt5HIItrEM_empty_cell_area, &b_antikt5HIItrEM_empty_cell_area);
   fChain->SetBranchAddress("antikt5HIItrEM_total_cell_n", &antikt5HIItrEM_total_cell_n, &b_antikt5HIItrEM_total_cell_n);
   fChain->SetBranchAddress("antikt5HIItrEM_total_cell_et", &antikt5HIItrEM_total_cell_et, &b_antikt5HIItrEM_total_cell_et);
   fChain->SetBranchAddress("antikt5HIItrEM_total_cell_area", &antikt5HIItrEM_total_cell_area, &b_antikt5HIItrEM_total_cell_area);
   fChain->SetBranchAddress("antikt5HIItrEM_n90", &antikt5HIItrEM_n90, &b_antikt5HIItrEM_n90);
   fChain->SetBranchAddress("antikt5HIItrEM_fracSamplingMax", &antikt5HIItrEM_fracSamplingMax, &b_antikt5HIItrEM_fracSamplingMax);
   fChain->SetBranchAddress("antikt5HIItrEM_SamplingMax", &antikt5HIItrEM_SamplingMax, &b_antikt5HIItrEM_SamplingMax);
   fChain->SetBranchAddress("antikt5HIItrEM_n90constituents", &antikt5HIItrEM_n90constituents, &b_antikt5HIItrEM_n90constituents);
   fChain->SetBranchAddress("antikt5HIItrEM_Timing", &antikt5HIItrEM_Timing, &b_antikt5HIItrEM_Timing);
   fChain->SetBranchAddress("antikt5HIItrEM_LArQuality", &antikt5HIItrEM_LArQuality, &b_antikt5HIItrEM_LArQuality);
   fChain->SetBranchAddress("antikt5HIItrEM_HECQuality", &antikt5HIItrEM_HECQuality, &b_antikt5HIItrEM_HECQuality);
   fChain->SetBranchAddress("antikt5HIItrEM_TileQuality", &antikt5HIItrEM_TileQuality, &b_antikt5HIItrEM_TileQuality);
   fChain->SetBranchAddress("antikt5HIItrEMFR_n", &antikt5HIItrEMFR_n, &b_antikt5HIItrEMFR_n);
   fChain->SetBranchAddress("antikt5HIItrEMFR_E", &antikt5HIItrEMFR_E, &b_antikt5HIItrEMFR_E);
   fChain->SetBranchAddress("antikt5HIItrEMFR_Et", &antikt5HIItrEMFR_Et, &b_antikt5HIItrEMFR_Et);
   fChain->SetBranchAddress("antikt5HIItrEMFR_pt", &antikt5HIItrEMFR_pt, &b_antikt5HIItrEMFR_pt);
   fChain->SetBranchAddress("antikt5HIItrEMFR_m", &antikt5HIItrEMFR_m, &b_antikt5HIItrEMFR_m);
   fChain->SetBranchAddress("antikt5HIItrEMFR_eta", &antikt5HIItrEMFR_eta, &b_antikt5HIItrEMFR_eta);
   fChain->SetBranchAddress("antikt5HIItrEMFR_phi", &antikt5HIItrEMFR_phi, &b_antikt5HIItrEMFR_phi);
   fChain->SetBranchAddress("antikt5HIItrEMFR_SubtractedEt", &antikt5HIItrEMFR_SubtractedEt, &b_antikt5HIItrEMFR_SubtractedEt);
   fChain->SetBranchAddress("antikt5HIItrEMFR_CryoCorr", &antikt5HIItrEMFR_CryoCorr, &b_antikt5HIItrEMFR_CryoCorr);
   fChain->SetBranchAddress("antikt5HIItrEMFR_NoFlow", &antikt5HIItrEMFR_NoFlow, &b_antikt5HIItrEMFR_NoFlow);
   fChain->SetBranchAddress("antikt5HIItrEMFR_UncalibEt", &antikt5HIItrEMFR_UncalibEt, &b_antikt5HIItrEMFR_UncalibEt);
   fChain->SetBranchAddress("antikt5HIItrEMFR_PassedFR", &antikt5HIItrEMFR_PassedFR, &b_antikt5HIItrEMFR_PassedFR);
   fChain->SetBranchAddress("antikt5HIItrEMFR_const_n", &antikt5HIItrEMFR_const_n, &b_antikt5HIItrEMFR_const_n);
   fChain->SetBranchAddress("antikt5HIItrEMFR_const_et", &antikt5HIItrEMFR_const_et, &b_antikt5HIItrEMFR_const_et);
   fChain->SetBranchAddress("antikt5HIItrEMFR_const_eta", &antikt5HIItrEMFR_const_eta, &b_antikt5HIItrEMFR_const_eta);
   fChain->SetBranchAddress("antikt5HIItrEMFR_const_phi", &antikt5HIItrEMFR_const_phi, &b_antikt5HIItrEMFR_const_phi);
   fChain->SetBranchAddress("antikt5HIItrEMFR_sampling_et", &antikt5HIItrEMFR_sampling_et, &b_antikt5HIItrEMFR_sampling_et);
   fChain->SetBranchAddress("antikt5HIItrEMFR_sampling_et_unsubtr", &antikt5HIItrEMFR_sampling_et_unsubtr, &b_antikt5HIItrEMFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt5HIItrEMFR_bad_cell_n", &antikt5HIItrEMFR_bad_cell_n, &b_antikt5HIItrEMFR_bad_cell_n);
   fChain->SetBranchAddress("antikt5HIItrEMFR_bad_cell_et", &antikt5HIItrEMFR_bad_cell_et, &b_antikt5HIItrEMFR_bad_cell_et);
   fChain->SetBranchAddress("antikt5HIItrEMFR_bad_cell_area", &antikt5HIItrEMFR_bad_cell_area, &b_antikt5HIItrEMFR_bad_cell_area);
   fChain->SetBranchAddress("antikt5HIItrEMFR_empty_cell_n", &antikt5HIItrEMFR_empty_cell_n, &b_antikt5HIItrEMFR_empty_cell_n);
   fChain->SetBranchAddress("antikt5HIItrEMFR_empty_cell_et", &antikt5HIItrEMFR_empty_cell_et, &b_antikt5HIItrEMFR_empty_cell_et);
   fChain->SetBranchAddress("antikt5HIItrEMFR_empty_cell_area", &antikt5HIItrEMFR_empty_cell_area, &b_antikt5HIItrEMFR_empty_cell_area);
   fChain->SetBranchAddress("antikt5HIItrEMFR_total_cell_n", &antikt5HIItrEMFR_total_cell_n, &b_antikt5HIItrEMFR_total_cell_n);
   fChain->SetBranchAddress("antikt5HIItrEMFR_total_cell_et", &antikt5HIItrEMFR_total_cell_et, &b_antikt5HIItrEMFR_total_cell_et);
   fChain->SetBranchAddress("antikt5HIItrEMFR_total_cell_area", &antikt5HIItrEMFR_total_cell_area, &b_antikt5HIItrEMFR_total_cell_area);
   fChain->SetBranchAddress("antikt5HIItrEMFR_n90", &antikt5HIItrEMFR_n90, &b_antikt5HIItrEMFR_n90);
   fChain->SetBranchAddress("antikt5HIItrEMFR_fracSamplingMax", &antikt5HIItrEMFR_fracSamplingMax, &b_antikt5HIItrEMFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt5HIItrEMFR_SamplingMax", &antikt5HIItrEMFR_SamplingMax, &b_antikt5HIItrEMFR_SamplingMax);
   fChain->SetBranchAddress("antikt5HIItrEMFR_n90constituents", &antikt5HIItrEMFR_n90constituents, &b_antikt5HIItrEMFR_n90constituents);
   fChain->SetBranchAddress("antikt5HIItrEMFR_Timing", &antikt5HIItrEMFR_Timing, &b_antikt5HIItrEMFR_Timing);
   fChain->SetBranchAddress("antikt5HIItrEMFR_LArQuality", &antikt5HIItrEMFR_LArQuality, &b_antikt5HIItrEMFR_LArQuality);
   fChain->SetBranchAddress("antikt5HIItrEMFR_HECQuality", &antikt5HIItrEMFR_HECQuality, &b_antikt5HIItrEMFR_HECQuality);
   fChain->SetBranchAddress("antikt5HIItrEMFR_TileQuality", &antikt5HIItrEMFR_TileQuality, &b_antikt5HIItrEMFR_TileQuality);
   fChain->SetBranchAddress("antikt6HIItrEM_n", &antikt6HIItrEM_n, &b_antikt6HIItrEM_n);
   fChain->SetBranchAddress("antikt6HIItrEM_E", &antikt6HIItrEM_E, &b_antikt6HIItrEM_E);
   fChain->SetBranchAddress("antikt6HIItrEM_Et", &antikt6HIItrEM_Et, &b_antikt6HIItrEM_Et);
   fChain->SetBranchAddress("antikt6HIItrEM_pt", &antikt6HIItrEM_pt, &b_antikt6HIItrEM_pt);
   fChain->SetBranchAddress("antikt6HIItrEM_m", &antikt6HIItrEM_m, &b_antikt6HIItrEM_m);
   fChain->SetBranchAddress("antikt6HIItrEM_eta", &antikt6HIItrEM_eta, &b_antikt6HIItrEM_eta);
   fChain->SetBranchAddress("antikt6HIItrEM_phi", &antikt6HIItrEM_phi, &b_antikt6HIItrEM_phi);
   fChain->SetBranchAddress("antikt6HIItrEM_SubtractedEt", &antikt6HIItrEM_SubtractedEt, &b_antikt6HIItrEM_SubtractedEt);
   fChain->SetBranchAddress("antikt6HIItrEM_CryoCorr", &antikt6HIItrEM_CryoCorr, &b_antikt6HIItrEM_CryoCorr);
   fChain->SetBranchAddress("antikt6HIItrEM_NoFlow", &antikt6HIItrEM_NoFlow, &b_antikt6HIItrEM_NoFlow);
   fChain->SetBranchAddress("antikt6HIItrEM_UncalibEt", &antikt6HIItrEM_UncalibEt, &b_antikt6HIItrEM_UncalibEt);
   fChain->SetBranchAddress("antikt6HIItrEM_PassedFR", &antikt6HIItrEM_PassedFR, &b_antikt6HIItrEM_PassedFR);
   fChain->SetBranchAddress("antikt6HIItrEM_const_n", &antikt6HIItrEM_const_n, &b_antikt6HIItrEM_const_n);
   fChain->SetBranchAddress("antikt6HIItrEM_const_et", &antikt6HIItrEM_const_et, &b_antikt6HIItrEM_const_et);
   fChain->SetBranchAddress("antikt6HIItrEM_const_eta", &antikt6HIItrEM_const_eta, &b_antikt6HIItrEM_const_eta);
   fChain->SetBranchAddress("antikt6HIItrEM_const_phi", &antikt6HIItrEM_const_phi, &b_antikt6HIItrEM_const_phi);
   fChain->SetBranchAddress("antikt6HIItrEM_sampling_et", &antikt6HIItrEM_sampling_et, &b_antikt6HIItrEM_sampling_et);
   fChain->SetBranchAddress("antikt6HIItrEM_sampling_et_unsubtr", &antikt6HIItrEM_sampling_et_unsubtr, &b_antikt6HIItrEM_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt6HIItrEM_bad_cell_n", &antikt6HIItrEM_bad_cell_n, &b_antikt6HIItrEM_bad_cell_n);
   fChain->SetBranchAddress("antikt6HIItrEM_bad_cell_et", &antikt6HIItrEM_bad_cell_et, &b_antikt6HIItrEM_bad_cell_et);
   fChain->SetBranchAddress("antikt6HIItrEM_bad_cell_area", &antikt6HIItrEM_bad_cell_area, &b_antikt6HIItrEM_bad_cell_area);
   fChain->SetBranchAddress("antikt6HIItrEM_empty_cell_n", &antikt6HIItrEM_empty_cell_n, &b_antikt6HIItrEM_empty_cell_n);
   fChain->SetBranchAddress("antikt6HIItrEM_empty_cell_et", &antikt6HIItrEM_empty_cell_et, &b_antikt6HIItrEM_empty_cell_et);
   fChain->SetBranchAddress("antikt6HIItrEM_empty_cell_area", &antikt6HIItrEM_empty_cell_area, &b_antikt6HIItrEM_empty_cell_area);
   fChain->SetBranchAddress("antikt6HIItrEM_total_cell_n", &antikt6HIItrEM_total_cell_n, &b_antikt6HIItrEM_total_cell_n);
   fChain->SetBranchAddress("antikt6HIItrEM_total_cell_et", &antikt6HIItrEM_total_cell_et, &b_antikt6HIItrEM_total_cell_et);
   fChain->SetBranchAddress("antikt6HIItrEM_total_cell_area", &antikt6HIItrEM_total_cell_area, &b_antikt6HIItrEM_total_cell_area);
   fChain->SetBranchAddress("antikt6HIItrEM_n90", &antikt6HIItrEM_n90, &b_antikt6HIItrEM_n90);
   fChain->SetBranchAddress("antikt6HIItrEM_fracSamplingMax", &antikt6HIItrEM_fracSamplingMax, &b_antikt6HIItrEM_fracSamplingMax);
   fChain->SetBranchAddress("antikt6HIItrEM_SamplingMax", &antikt6HIItrEM_SamplingMax, &b_antikt6HIItrEM_SamplingMax);
   fChain->SetBranchAddress("antikt6HIItrEM_n90constituents", &antikt6HIItrEM_n90constituents, &b_antikt6HIItrEM_n90constituents);
   fChain->SetBranchAddress("antikt6HIItrEM_Timing", &antikt6HIItrEM_Timing, &b_antikt6HIItrEM_Timing);
   fChain->SetBranchAddress("antikt6HIItrEM_LArQuality", &antikt6HIItrEM_LArQuality, &b_antikt6HIItrEM_LArQuality);
   fChain->SetBranchAddress("antikt6HIItrEM_HECQuality", &antikt6HIItrEM_HECQuality, &b_antikt6HIItrEM_HECQuality);
   fChain->SetBranchAddress("antikt6HIItrEM_TileQuality", &antikt6HIItrEM_TileQuality, &b_antikt6HIItrEM_TileQuality);
   fChain->SetBranchAddress("antikt6HIItrEMFR_n", &antikt6HIItrEMFR_n, &b_antikt6HIItrEMFR_n);
   fChain->SetBranchAddress("antikt6HIItrEMFR_E", &antikt6HIItrEMFR_E, &b_antikt6HIItrEMFR_E);
   fChain->SetBranchAddress("antikt6HIItrEMFR_Et", &antikt6HIItrEMFR_Et, &b_antikt6HIItrEMFR_Et);
   fChain->SetBranchAddress("antikt6HIItrEMFR_pt", &antikt6HIItrEMFR_pt, &b_antikt6HIItrEMFR_pt);
   fChain->SetBranchAddress("antikt6HIItrEMFR_m", &antikt6HIItrEMFR_m, &b_antikt6HIItrEMFR_m);
   fChain->SetBranchAddress("antikt6HIItrEMFR_eta", &antikt6HIItrEMFR_eta, &b_antikt6HIItrEMFR_eta);
   fChain->SetBranchAddress("antikt6HIItrEMFR_phi", &antikt6HIItrEMFR_phi, &b_antikt6HIItrEMFR_phi);
   fChain->SetBranchAddress("antikt6HIItrEMFR_SubtractedEt", &antikt6HIItrEMFR_SubtractedEt, &b_antikt6HIItrEMFR_SubtractedEt);
   fChain->SetBranchAddress("antikt6HIItrEMFR_CryoCorr", &antikt6HIItrEMFR_CryoCorr, &b_antikt6HIItrEMFR_CryoCorr);
   fChain->SetBranchAddress("antikt6HIItrEMFR_NoFlow", &antikt6HIItrEMFR_NoFlow, &b_antikt6HIItrEMFR_NoFlow);
   fChain->SetBranchAddress("antikt6HIItrEMFR_UncalibEt", &antikt6HIItrEMFR_UncalibEt, &b_antikt6HIItrEMFR_UncalibEt);
   fChain->SetBranchAddress("antikt6HIItrEMFR_PassedFR", &antikt6HIItrEMFR_PassedFR, &b_antikt6HIItrEMFR_PassedFR);
   fChain->SetBranchAddress("antikt6HIItrEMFR_const_n", &antikt6HIItrEMFR_const_n, &b_antikt6HIItrEMFR_const_n);
   fChain->SetBranchAddress("antikt6HIItrEMFR_const_et", &antikt6HIItrEMFR_const_et, &b_antikt6HIItrEMFR_const_et);
   fChain->SetBranchAddress("antikt6HIItrEMFR_const_eta", &antikt6HIItrEMFR_const_eta, &b_antikt6HIItrEMFR_const_eta);
   fChain->SetBranchAddress("antikt6HIItrEMFR_const_phi", &antikt6HIItrEMFR_const_phi, &b_antikt6HIItrEMFR_const_phi);
   fChain->SetBranchAddress("antikt6HIItrEMFR_sampling_et", &antikt6HIItrEMFR_sampling_et, &b_antikt6HIItrEMFR_sampling_et);
   fChain->SetBranchAddress("antikt6HIItrEMFR_sampling_et_unsubtr", &antikt6HIItrEMFR_sampling_et_unsubtr, &b_antikt6HIItrEMFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt6HIItrEMFR_bad_cell_n", &antikt6HIItrEMFR_bad_cell_n, &b_antikt6HIItrEMFR_bad_cell_n);
   fChain->SetBranchAddress("antikt6HIItrEMFR_bad_cell_et", &antikt6HIItrEMFR_bad_cell_et, &b_antikt6HIItrEMFR_bad_cell_et);
   fChain->SetBranchAddress("antikt6HIItrEMFR_bad_cell_area", &antikt6HIItrEMFR_bad_cell_area, &b_antikt6HIItrEMFR_bad_cell_area);
   fChain->SetBranchAddress("antikt6HIItrEMFR_empty_cell_n", &antikt6HIItrEMFR_empty_cell_n, &b_antikt6HIItrEMFR_empty_cell_n);
   fChain->SetBranchAddress("antikt6HIItrEMFR_empty_cell_et", &antikt6HIItrEMFR_empty_cell_et, &b_antikt6HIItrEMFR_empty_cell_et);
   fChain->SetBranchAddress("antikt6HIItrEMFR_empty_cell_area", &antikt6HIItrEMFR_empty_cell_area, &b_antikt6HIItrEMFR_empty_cell_area);
   fChain->SetBranchAddress("antikt6HIItrEMFR_total_cell_n", &antikt6HIItrEMFR_total_cell_n, &b_antikt6HIItrEMFR_total_cell_n);
   fChain->SetBranchAddress("antikt6HIItrEMFR_total_cell_et", &antikt6HIItrEMFR_total_cell_et, &b_antikt6HIItrEMFR_total_cell_et);
   fChain->SetBranchAddress("antikt6HIItrEMFR_total_cell_area", &antikt6HIItrEMFR_total_cell_area, &b_antikt6HIItrEMFR_total_cell_area);
   fChain->SetBranchAddress("antikt6HIItrEMFR_n90", &antikt6HIItrEMFR_n90, &b_antikt6HIItrEMFR_n90);
   fChain->SetBranchAddress("antikt6HIItrEMFR_fracSamplingMax", &antikt6HIItrEMFR_fracSamplingMax, &b_antikt6HIItrEMFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt6HIItrEMFR_SamplingMax", &antikt6HIItrEMFR_SamplingMax, &b_antikt6HIItrEMFR_SamplingMax);
   fChain->SetBranchAddress("antikt6HIItrEMFR_n90constituents", &antikt6HIItrEMFR_n90constituents, &b_antikt6HIItrEMFR_n90constituents);
   fChain->SetBranchAddress("antikt6HIItrEMFR_Timing", &antikt6HIItrEMFR_Timing, &b_antikt6HIItrEMFR_Timing);
   fChain->SetBranchAddress("antikt6HIItrEMFR_LArQuality", &antikt6HIItrEMFR_LArQuality, &b_antikt6HIItrEMFR_LArQuality);
   fChain->SetBranchAddress("antikt6HIItrEMFR_HECQuality", &antikt6HIItrEMFR_HECQuality, &b_antikt6HIItrEMFR_HECQuality);
   fChain->SetBranchAddress("antikt6HIItrEMFR_TileQuality", &antikt6HIItrEMFR_TileQuality, &b_antikt6HIItrEMFR_TileQuality);
   fChain->SetBranchAddress("antikt8HIItrEM_n", &antikt8HIItrEM_n, &b_antikt8HIItrEM_n);
   fChain->SetBranchAddress("antikt8HIItrEM_E", &antikt8HIItrEM_E, &b_antikt8HIItrEM_E);
   fChain->SetBranchAddress("antikt8HIItrEM_Et", &antikt8HIItrEM_Et, &b_antikt8HIItrEM_Et);
   fChain->SetBranchAddress("antikt8HIItrEM_pt", &antikt8HIItrEM_pt, &b_antikt8HIItrEM_pt);
   fChain->SetBranchAddress("antikt8HIItrEM_m", &antikt8HIItrEM_m, &b_antikt8HIItrEM_m);
   fChain->SetBranchAddress("antikt8HIItrEM_eta", &antikt8HIItrEM_eta, &b_antikt8HIItrEM_eta);
   fChain->SetBranchAddress("antikt8HIItrEM_phi", &antikt8HIItrEM_phi, &b_antikt8HIItrEM_phi);
   fChain->SetBranchAddress("antikt8HIItrEM_SubtractedEt", &antikt8HIItrEM_SubtractedEt, &b_antikt8HIItrEM_SubtractedEt);
   fChain->SetBranchAddress("antikt8HIItrEM_CryoCorr", &antikt8HIItrEM_CryoCorr, &b_antikt8HIItrEM_CryoCorr);
   fChain->SetBranchAddress("antikt8HIItrEM_NoFlow", &antikt8HIItrEM_NoFlow, &b_antikt8HIItrEM_NoFlow);
   fChain->SetBranchAddress("antikt8HIItrEM_UncalibEt", &antikt8HIItrEM_UncalibEt, &b_antikt8HIItrEM_UncalibEt);
   fChain->SetBranchAddress("antikt8HIItrEM_PassedFR", &antikt8HIItrEM_PassedFR, &b_antikt8HIItrEM_PassedFR);
   fChain->SetBranchAddress("antikt8HIItrEM_const_n", &antikt8HIItrEM_const_n, &b_antikt8HIItrEM_const_n);
   fChain->SetBranchAddress("antikt8HIItrEM_const_et", &antikt8HIItrEM_const_et, &b_antikt8HIItrEM_const_et);
   fChain->SetBranchAddress("antikt8HIItrEM_const_eta", &antikt8HIItrEM_const_eta, &b_antikt8HIItrEM_const_eta);
   fChain->SetBranchAddress("antikt8HIItrEM_const_phi", &antikt8HIItrEM_const_phi, &b_antikt8HIItrEM_const_phi);
   fChain->SetBranchAddress("antikt8HIItrEM_sampling_et", &antikt8HIItrEM_sampling_et, &b_antikt8HIItrEM_sampling_et);
   fChain->SetBranchAddress("antikt8HIItrEM_sampling_et_unsubtr", &antikt8HIItrEM_sampling_et_unsubtr, &b_antikt8HIItrEM_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt8HIItrEM_bad_cell_n", &antikt8HIItrEM_bad_cell_n, &b_antikt8HIItrEM_bad_cell_n);
   fChain->SetBranchAddress("antikt8HIItrEM_bad_cell_et", &antikt8HIItrEM_bad_cell_et, &b_antikt8HIItrEM_bad_cell_et);
   fChain->SetBranchAddress("antikt8HIItrEM_bad_cell_area", &antikt8HIItrEM_bad_cell_area, &b_antikt8HIItrEM_bad_cell_area);
   fChain->SetBranchAddress("antikt8HIItrEM_empty_cell_n", &antikt8HIItrEM_empty_cell_n, &b_antikt8HIItrEM_empty_cell_n);
   fChain->SetBranchAddress("antikt8HIItrEM_empty_cell_et", &antikt8HIItrEM_empty_cell_et, &b_antikt8HIItrEM_empty_cell_et);
   fChain->SetBranchAddress("antikt8HIItrEM_empty_cell_area", &antikt8HIItrEM_empty_cell_area, &b_antikt8HIItrEM_empty_cell_area);
   fChain->SetBranchAddress("antikt8HIItrEM_total_cell_n", &antikt8HIItrEM_total_cell_n, &b_antikt8HIItrEM_total_cell_n);
   fChain->SetBranchAddress("antikt8HIItrEM_total_cell_et", &antikt8HIItrEM_total_cell_et, &b_antikt8HIItrEM_total_cell_et);
   fChain->SetBranchAddress("antikt8HIItrEM_total_cell_area", &antikt8HIItrEM_total_cell_area, &b_antikt8HIItrEM_total_cell_area);
   fChain->SetBranchAddress("antikt8HIItrEM_n90", &antikt8HIItrEM_n90, &b_antikt8HIItrEM_n90);
   fChain->SetBranchAddress("antikt8HIItrEM_fracSamplingMax", &antikt8HIItrEM_fracSamplingMax, &b_antikt8HIItrEM_fracSamplingMax);
   fChain->SetBranchAddress("antikt8HIItrEM_SamplingMax", &antikt8HIItrEM_SamplingMax, &b_antikt8HIItrEM_SamplingMax);
   fChain->SetBranchAddress("antikt8HIItrEM_n90constituents", &antikt8HIItrEM_n90constituents, &b_antikt8HIItrEM_n90constituents);
   fChain->SetBranchAddress("antikt8HIItrEM_Timing", &antikt8HIItrEM_Timing, &b_antikt8HIItrEM_Timing);
   fChain->SetBranchAddress("antikt8HIItrEM_LArQuality", &antikt8HIItrEM_LArQuality, &b_antikt8HIItrEM_LArQuality);
   fChain->SetBranchAddress("antikt8HIItrEM_HECQuality", &antikt8HIItrEM_HECQuality, &b_antikt8HIItrEM_HECQuality);
   fChain->SetBranchAddress("antikt8HIItrEM_TileQuality", &antikt8HIItrEM_TileQuality, &b_antikt8HIItrEM_TileQuality);
   fChain->SetBranchAddress("antikt8HIItrEMFR_n", &antikt8HIItrEMFR_n, &b_antikt8HIItrEMFR_n);
   fChain->SetBranchAddress("antikt8HIItrEMFR_E", &antikt8HIItrEMFR_E, &b_antikt8HIItrEMFR_E);
   fChain->SetBranchAddress("antikt8HIItrEMFR_Et", &antikt8HIItrEMFR_Et, &b_antikt8HIItrEMFR_Et);
   fChain->SetBranchAddress("antikt8HIItrEMFR_pt", &antikt8HIItrEMFR_pt, &b_antikt8HIItrEMFR_pt);
   fChain->SetBranchAddress("antikt8HIItrEMFR_m", &antikt8HIItrEMFR_m, &b_antikt8HIItrEMFR_m);
   fChain->SetBranchAddress("antikt8HIItrEMFR_eta", &antikt8HIItrEMFR_eta, &b_antikt8HIItrEMFR_eta);
   fChain->SetBranchAddress("antikt8HIItrEMFR_phi", &antikt8HIItrEMFR_phi, &b_antikt8HIItrEMFR_phi);
   fChain->SetBranchAddress("antikt8HIItrEMFR_SubtractedEt", &antikt8HIItrEMFR_SubtractedEt, &b_antikt8HIItrEMFR_SubtractedEt);
   fChain->SetBranchAddress("antikt8HIItrEMFR_CryoCorr", &antikt8HIItrEMFR_CryoCorr, &b_antikt8HIItrEMFR_CryoCorr);
   fChain->SetBranchAddress("antikt8HIItrEMFR_NoFlow", &antikt8HIItrEMFR_NoFlow, &b_antikt8HIItrEMFR_NoFlow);
   fChain->SetBranchAddress("antikt8HIItrEMFR_UncalibEt", &antikt8HIItrEMFR_UncalibEt, &b_antikt8HIItrEMFR_UncalibEt);
   fChain->SetBranchAddress("antikt8HIItrEMFR_PassedFR", &antikt8HIItrEMFR_PassedFR, &b_antikt8HIItrEMFR_PassedFR);
   fChain->SetBranchAddress("antikt8HIItrEMFR_const_n", &antikt8HIItrEMFR_const_n, &b_antikt8HIItrEMFR_const_n);
   fChain->SetBranchAddress("antikt8HIItrEMFR_const_et", &antikt8HIItrEMFR_const_et, &b_antikt8HIItrEMFR_const_et);
   fChain->SetBranchAddress("antikt8HIItrEMFR_const_eta", &antikt8HIItrEMFR_const_eta, &b_antikt8HIItrEMFR_const_eta);
   fChain->SetBranchAddress("antikt8HIItrEMFR_const_phi", &antikt8HIItrEMFR_const_phi, &b_antikt8HIItrEMFR_const_phi);
   fChain->SetBranchAddress("antikt8HIItrEMFR_sampling_et", &antikt8HIItrEMFR_sampling_et, &b_antikt8HIItrEMFR_sampling_et);
   fChain->SetBranchAddress("antikt8HIItrEMFR_sampling_et_unsubtr", &antikt8HIItrEMFR_sampling_et_unsubtr, &b_antikt8HIItrEMFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt8HIItrEMFR_bad_cell_n", &antikt8HIItrEMFR_bad_cell_n, &b_antikt8HIItrEMFR_bad_cell_n);
   fChain->SetBranchAddress("antikt8HIItrEMFR_bad_cell_et", &antikt8HIItrEMFR_bad_cell_et, &b_antikt8HIItrEMFR_bad_cell_et);
   fChain->SetBranchAddress("antikt8HIItrEMFR_bad_cell_area", &antikt8HIItrEMFR_bad_cell_area, &b_antikt8HIItrEMFR_bad_cell_area);
   fChain->SetBranchAddress("antikt8HIItrEMFR_empty_cell_n", &antikt8HIItrEMFR_empty_cell_n, &b_antikt8HIItrEMFR_empty_cell_n);
   fChain->SetBranchAddress("antikt8HIItrEMFR_empty_cell_et", &antikt8HIItrEMFR_empty_cell_et, &b_antikt8HIItrEMFR_empty_cell_et);
   fChain->SetBranchAddress("antikt8HIItrEMFR_empty_cell_area", &antikt8HIItrEMFR_empty_cell_area, &b_antikt8HIItrEMFR_empty_cell_area);
   fChain->SetBranchAddress("antikt8HIItrEMFR_total_cell_n", &antikt8HIItrEMFR_total_cell_n, &b_antikt8HIItrEMFR_total_cell_n);
   fChain->SetBranchAddress("antikt8HIItrEMFR_total_cell_et", &antikt8HIItrEMFR_total_cell_et, &b_antikt8HIItrEMFR_total_cell_et);
   fChain->SetBranchAddress("antikt8HIItrEMFR_total_cell_area", &antikt8HIItrEMFR_total_cell_area, &b_antikt8HIItrEMFR_total_cell_area);
   fChain->SetBranchAddress("antikt8HIItrEMFR_n90", &antikt8HIItrEMFR_n90, &b_antikt8HIItrEMFR_n90);
   fChain->SetBranchAddress("antikt8HIItrEMFR_fracSamplingMax", &antikt8HIItrEMFR_fracSamplingMax, &b_antikt8HIItrEMFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt8HIItrEMFR_SamplingMax", &antikt8HIItrEMFR_SamplingMax, &b_antikt8HIItrEMFR_SamplingMax);
   fChain->SetBranchAddress("antikt8HIItrEMFR_n90constituents", &antikt8HIItrEMFR_n90constituents, &b_antikt8HIItrEMFR_n90constituents);
   fChain->SetBranchAddress("antikt8HIItrEMFR_Timing", &antikt8HIItrEMFR_Timing, &b_antikt8HIItrEMFR_Timing);
   fChain->SetBranchAddress("antikt8HIItrEMFR_LArQuality", &antikt8HIItrEMFR_LArQuality, &b_antikt8HIItrEMFR_LArQuality);
   fChain->SetBranchAddress("antikt8HIItrEMFR_HECQuality", &antikt8HIItrEMFR_HECQuality, &b_antikt8HIItrEMFR_HECQuality);
   fChain->SetBranchAddress("antikt8HIItrEMFR_TileQuality", &antikt8HIItrEMFR_TileQuality, &b_antikt8HIItrEMFR_TileQuality);
   fChain->SetBranchAddress("antikt10HIItrEM_n", &antikt10HIItrEM_n, &b_antikt10HIItrEM_n);
   fChain->SetBranchAddress("antikt10HIItrEM_E", &antikt10HIItrEM_E, &b_antikt10HIItrEM_E);
   fChain->SetBranchAddress("antikt10HIItrEM_Et", &antikt10HIItrEM_Et, &b_antikt10HIItrEM_Et);
   fChain->SetBranchAddress("antikt10HIItrEM_pt", &antikt10HIItrEM_pt, &b_antikt10HIItrEM_pt);
   fChain->SetBranchAddress("antikt10HIItrEM_m", &antikt10HIItrEM_m, &b_antikt10HIItrEM_m);
   fChain->SetBranchAddress("antikt10HIItrEM_eta", &antikt10HIItrEM_eta, &b_antikt10HIItrEM_eta);
   fChain->SetBranchAddress("antikt10HIItrEM_phi", &antikt10HIItrEM_phi, &b_antikt10HIItrEM_phi);
   fChain->SetBranchAddress("antikt10HIItrEM_SubtractedEt", &antikt10HIItrEM_SubtractedEt, &b_antikt10HIItrEM_SubtractedEt);
   fChain->SetBranchAddress("antikt10HIItrEM_CryoCorr", &antikt10HIItrEM_CryoCorr, &b_antikt10HIItrEM_CryoCorr);
   fChain->SetBranchAddress("antikt10HIItrEM_NoFlow", &antikt10HIItrEM_NoFlow, &b_antikt10HIItrEM_NoFlow);
   fChain->SetBranchAddress("antikt10HIItrEM_UncalibEt", &antikt10HIItrEM_UncalibEt, &b_antikt10HIItrEM_UncalibEt);
   fChain->SetBranchAddress("antikt10HIItrEM_PassedFR", &antikt10HIItrEM_PassedFR, &b_antikt10HIItrEM_PassedFR);
   fChain->SetBranchAddress("antikt10HIItrEM_const_n", &antikt10HIItrEM_const_n, &b_antikt10HIItrEM_const_n);
   fChain->SetBranchAddress("antikt10HIItrEM_const_et", &antikt10HIItrEM_const_et, &b_antikt10HIItrEM_const_et);
   fChain->SetBranchAddress("antikt10HIItrEM_const_eta", &antikt10HIItrEM_const_eta, &b_antikt10HIItrEM_const_eta);
   fChain->SetBranchAddress("antikt10HIItrEM_const_phi", &antikt10HIItrEM_const_phi, &b_antikt10HIItrEM_const_phi);
   fChain->SetBranchAddress("antikt10HIItrEM_sampling_et", &antikt10HIItrEM_sampling_et, &b_antikt10HIItrEM_sampling_et);
   fChain->SetBranchAddress("antikt10HIItrEM_sampling_et_unsubtr", &antikt10HIItrEM_sampling_et_unsubtr, &b_antikt10HIItrEM_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt10HIItrEM_bad_cell_n", &antikt10HIItrEM_bad_cell_n, &b_antikt10HIItrEM_bad_cell_n);
   fChain->SetBranchAddress("antikt10HIItrEM_bad_cell_et", &antikt10HIItrEM_bad_cell_et, &b_antikt10HIItrEM_bad_cell_et);
   fChain->SetBranchAddress("antikt10HIItrEM_bad_cell_area", &antikt10HIItrEM_bad_cell_area, &b_antikt10HIItrEM_bad_cell_area);
   fChain->SetBranchAddress("antikt10HIItrEM_empty_cell_n", &antikt10HIItrEM_empty_cell_n, &b_antikt10HIItrEM_empty_cell_n);
   fChain->SetBranchAddress("antikt10HIItrEM_empty_cell_et", &antikt10HIItrEM_empty_cell_et, &b_antikt10HIItrEM_empty_cell_et);
   fChain->SetBranchAddress("antikt10HIItrEM_empty_cell_area", &antikt10HIItrEM_empty_cell_area, &b_antikt10HIItrEM_empty_cell_area);
   fChain->SetBranchAddress("antikt10HIItrEM_total_cell_n", &antikt10HIItrEM_total_cell_n, &b_antikt10HIItrEM_total_cell_n);
   fChain->SetBranchAddress("antikt10HIItrEM_total_cell_et", &antikt10HIItrEM_total_cell_et, &b_antikt10HIItrEM_total_cell_et);
   fChain->SetBranchAddress("antikt10HIItrEM_total_cell_area", &antikt10HIItrEM_total_cell_area, &b_antikt10HIItrEM_total_cell_area);
   fChain->SetBranchAddress("antikt10HIItrEM_n90", &antikt10HIItrEM_n90, &b_antikt10HIItrEM_n90);
   fChain->SetBranchAddress("antikt10HIItrEM_fracSamplingMax", &antikt10HIItrEM_fracSamplingMax, &b_antikt10HIItrEM_fracSamplingMax);
   fChain->SetBranchAddress("antikt10HIItrEM_SamplingMax", &antikt10HIItrEM_SamplingMax, &b_antikt10HIItrEM_SamplingMax);
   fChain->SetBranchAddress("antikt10HIItrEM_n90constituents", &antikt10HIItrEM_n90constituents, &b_antikt10HIItrEM_n90constituents);
   fChain->SetBranchAddress("antikt10HIItrEM_Timing", &antikt10HIItrEM_Timing, &b_antikt10HIItrEM_Timing);
   fChain->SetBranchAddress("antikt10HIItrEM_LArQuality", &antikt10HIItrEM_LArQuality, &b_antikt10HIItrEM_LArQuality);
   fChain->SetBranchAddress("antikt10HIItrEM_HECQuality", &antikt10HIItrEM_HECQuality, &b_antikt10HIItrEM_HECQuality);
   fChain->SetBranchAddress("antikt10HIItrEM_TileQuality", &antikt10HIItrEM_TileQuality, &b_antikt10HIItrEM_TileQuality);
   fChain->SetBranchAddress("antikt10HIItrEMFR_n", &antikt10HIItrEMFR_n, &b_antikt10HIItrEMFR_n);
   fChain->SetBranchAddress("antikt10HIItrEMFR_E", &antikt10HIItrEMFR_E, &b_antikt10HIItrEMFR_E);
   fChain->SetBranchAddress("antikt10HIItrEMFR_Et", &antikt10HIItrEMFR_Et, &b_antikt10HIItrEMFR_Et);
   fChain->SetBranchAddress("antikt10HIItrEMFR_pt", &antikt10HIItrEMFR_pt, &b_antikt10HIItrEMFR_pt);
   fChain->SetBranchAddress("antikt10HIItrEMFR_m", &antikt10HIItrEMFR_m, &b_antikt10HIItrEMFR_m);
   fChain->SetBranchAddress("antikt10HIItrEMFR_eta", &antikt10HIItrEMFR_eta, &b_antikt10HIItrEMFR_eta);
   fChain->SetBranchAddress("antikt10HIItrEMFR_phi", &antikt10HIItrEMFR_phi, &b_antikt10HIItrEMFR_phi);
   fChain->SetBranchAddress("antikt10HIItrEMFR_SubtractedEt", &antikt10HIItrEMFR_SubtractedEt, &b_antikt10HIItrEMFR_SubtractedEt);
   fChain->SetBranchAddress("antikt10HIItrEMFR_CryoCorr", &antikt10HIItrEMFR_CryoCorr, &b_antikt10HIItrEMFR_CryoCorr);
   fChain->SetBranchAddress("antikt10HIItrEMFR_NoFlow", &antikt10HIItrEMFR_NoFlow, &b_antikt10HIItrEMFR_NoFlow);
   fChain->SetBranchAddress("antikt10HIItrEMFR_UncalibEt", &antikt10HIItrEMFR_UncalibEt, &b_antikt10HIItrEMFR_UncalibEt);
   fChain->SetBranchAddress("antikt10HIItrEMFR_PassedFR", &antikt10HIItrEMFR_PassedFR, &b_antikt10HIItrEMFR_PassedFR);
   fChain->SetBranchAddress("antikt10HIItrEMFR_const_n", &antikt10HIItrEMFR_const_n, &b_antikt10HIItrEMFR_const_n);
   fChain->SetBranchAddress("antikt10HIItrEMFR_const_et", &antikt10HIItrEMFR_const_et, &b_antikt10HIItrEMFR_const_et);
   fChain->SetBranchAddress("antikt10HIItrEMFR_const_eta", &antikt10HIItrEMFR_const_eta, &b_antikt10HIItrEMFR_const_eta);
   fChain->SetBranchAddress("antikt10HIItrEMFR_const_phi", &antikt10HIItrEMFR_const_phi, &b_antikt10HIItrEMFR_const_phi);
   fChain->SetBranchAddress("antikt10HIItrEMFR_sampling_et", &antikt10HIItrEMFR_sampling_et, &b_antikt10HIItrEMFR_sampling_et);
   fChain->SetBranchAddress("antikt10HIItrEMFR_sampling_et_unsubtr", &antikt10HIItrEMFR_sampling_et_unsubtr, &b_antikt10HIItrEMFR_sampling_et_unsubtr);
   fChain->SetBranchAddress("antikt10HIItrEMFR_bad_cell_n", &antikt10HIItrEMFR_bad_cell_n, &b_antikt10HIItrEMFR_bad_cell_n);
   fChain->SetBranchAddress("antikt10HIItrEMFR_bad_cell_et", &antikt10HIItrEMFR_bad_cell_et, &b_antikt10HIItrEMFR_bad_cell_et);
   fChain->SetBranchAddress("antikt10HIItrEMFR_bad_cell_area", &antikt10HIItrEMFR_bad_cell_area, &b_antikt10HIItrEMFR_bad_cell_area);
   fChain->SetBranchAddress("antikt10HIItrEMFR_empty_cell_n", &antikt10HIItrEMFR_empty_cell_n, &b_antikt10HIItrEMFR_empty_cell_n);
   fChain->SetBranchAddress("antikt10HIItrEMFR_empty_cell_et", &antikt10HIItrEMFR_empty_cell_et, &b_antikt10HIItrEMFR_empty_cell_et);
   fChain->SetBranchAddress("antikt10HIItrEMFR_empty_cell_area", &antikt10HIItrEMFR_empty_cell_area, &b_antikt10HIItrEMFR_empty_cell_area);
   fChain->SetBranchAddress("antikt10HIItrEMFR_total_cell_n", &antikt10HIItrEMFR_total_cell_n, &b_antikt10HIItrEMFR_total_cell_n);
   fChain->SetBranchAddress("antikt10HIItrEMFR_total_cell_et", &antikt10HIItrEMFR_total_cell_et, &b_antikt10HIItrEMFR_total_cell_et);
   fChain->SetBranchAddress("antikt10HIItrEMFR_total_cell_area", &antikt10HIItrEMFR_total_cell_area, &b_antikt10HIItrEMFR_total_cell_area);
   fChain->SetBranchAddress("antikt10HIItrEMFR_n90", &antikt10HIItrEMFR_n90, &b_antikt10HIItrEMFR_n90);
   fChain->SetBranchAddress("antikt10HIItrEMFR_fracSamplingMax", &antikt10HIItrEMFR_fracSamplingMax, &b_antikt10HIItrEMFR_fracSamplingMax);
   fChain->SetBranchAddress("antikt10HIItrEMFR_SamplingMax", &antikt10HIItrEMFR_SamplingMax, &b_antikt10HIItrEMFR_SamplingMax);
   fChain->SetBranchAddress("antikt10HIItrEMFR_n90constituents", &antikt10HIItrEMFR_n90constituents, &b_antikt10HIItrEMFR_n90constituents);
   fChain->SetBranchAddress("antikt10HIItrEMFR_Timing", &antikt10HIItrEMFR_Timing, &b_antikt10HIItrEMFR_Timing);
   fChain->SetBranchAddress("antikt10HIItrEMFR_LArQuality", &antikt10HIItrEMFR_LArQuality, &b_antikt10HIItrEMFR_LArQuality);
   fChain->SetBranchAddress("antikt10HIItrEMFR_HECQuality", &antikt10HIItrEMFR_HECQuality, &b_antikt10HIItrEMFR_HECQuality);
   fChain->SetBranchAddress("antikt10HIItrEMFR_TileQuality", &antikt10HIItrEMFR_TileQuality, &b_antikt10HIItrEMFR_TileQuality);
   fChain->SetBranchAddress("antikt4Track_n", &antikt4Track_n, &b_antikt4Track_n);
   fChain->SetBranchAddress("antikt4Track_E", &antikt4Track_E, &b_antikt4Track_E);
   fChain->SetBranchAddress("antikt4Track_pt", &antikt4Track_pt, &b_antikt4Track_pt);
   fChain->SetBranchAddress("antikt4Track_m", &antikt4Track_m, &b_antikt4Track_m);
   fChain->SetBranchAddress("antikt4Track_eta", &antikt4Track_eta, &b_antikt4Track_eta);
   fChain->SetBranchAddress("antikt4Track_phi", &antikt4Track_phi, &b_antikt4Track_phi);
   fChain->SetBranchAddress("antikt4Track_const_n", &antikt4Track_const_n, &b_antikt4Track_const_n);
   fChain->SetBranchAddress("antikt4Track_const_pt", &antikt4Track_const_pt, &b_antikt4Track_const_pt);
   fChain->SetBranchAddress("antikt4Track_const_eta", &antikt4Track_const_eta, &b_antikt4Track_const_eta);
   fChain->SetBranchAddress("antikt4Track_const_phi", &antikt4Track_const_phi, &b_antikt4Track_const_phi);
   fChain->SetBranchAddress("antikt4Track_const_chi2", &antikt4Track_const_chi2, &b_antikt4Track_const_chi2);
   fChain->SetBranchAddress("antikt4Track_const_d0_wrtPV", &antikt4Track_const_d0_wrtPV, &b_antikt4Track_const_d0_wrtPV);
   fChain->SetBranchAddress("antikt4Track_const_z0_wrtPV", &antikt4Track_const_z0_wrtPV, &b_antikt4Track_const_z0_wrtPV);
   fChain->SetBranchAddress("antikt4Track_const_phi0_wrtPV", &antikt4Track_const_phi0_wrtPV, &b_antikt4Track_const_phi0_wrtPV);
   fChain->SetBranchAddress("antikt4Track_const_theta_wrtPV", &antikt4Track_const_theta_wrtPV, &b_antikt4Track_const_theta_wrtPV);
   fChain->SetBranchAddress("antikt4Track_const_qop", &antikt4Track_const_qop, &b_antikt4Track_const_qop);
   fChain->SetBranchAddress("antikt4Track_const_ndof", &antikt4Track_const_ndof, &b_antikt4Track_const_ndof);
   fChain->SetBranchAddress("antikt4Track_const_nBLayerHits", &antikt4Track_const_nBLayerHits, &b_antikt4Track_const_nBLayerHits);
   fChain->SetBranchAddress("antikt4Track_const_nPixelHits", &antikt4Track_const_nPixelHits, &b_antikt4Track_const_nPixelHits);
   fChain->SetBranchAddress("antikt4Track_const_nSCTHits", &antikt4Track_const_nSCTHits, &b_antikt4Track_const_nSCTHits);
   fChain->SetBranchAddress("antikt4Track_const_nTRTHits", &antikt4Track_const_nTRTHits, &b_antikt4Track_const_nTRTHits);
   fChain->SetBranchAddress("antikt6Track_n", &antikt6Track_n, &b_antikt6Track_n);
   fChain->SetBranchAddress("antikt6Track_E", &antikt6Track_E, &b_antikt6Track_E);
   fChain->SetBranchAddress("antikt6Track_pt", &antikt6Track_pt, &b_antikt6Track_pt);
   fChain->SetBranchAddress("antikt6Track_m", &antikt6Track_m, &b_antikt6Track_m);
   fChain->SetBranchAddress("antikt6Track_eta", &antikt6Track_eta, &b_antikt6Track_eta);
   fChain->SetBranchAddress("antikt6Track_phi", &antikt6Track_phi, &b_antikt6Track_phi);
   fChain->SetBranchAddress("antikt6Track_const_n", &antikt6Track_const_n, &b_antikt6Track_const_n);
   fChain->SetBranchAddress("antikt6Track_const_pt", &antikt6Track_const_pt, &b_antikt6Track_const_pt);
   fChain->SetBranchAddress("antikt6Track_const_eta", &antikt6Track_const_eta, &b_antikt6Track_const_eta);
   fChain->SetBranchAddress("antikt6Track_const_phi", &antikt6Track_const_phi, &b_antikt6Track_const_phi);
   fChain->SetBranchAddress("antikt6Track_const_chi2", &antikt6Track_const_chi2, &b_antikt6Track_const_chi2);
   fChain->SetBranchAddress("antikt6Track_const_d0_wrtPV", &antikt6Track_const_d0_wrtPV, &b_antikt6Track_const_d0_wrtPV);
   fChain->SetBranchAddress("antikt6Track_const_z0_wrtPV", &antikt6Track_const_z0_wrtPV, &b_antikt6Track_const_z0_wrtPV);
   fChain->SetBranchAddress("antikt6Track_const_phi0_wrtPV", &antikt6Track_const_phi0_wrtPV, &b_antikt6Track_const_phi0_wrtPV);
   fChain->SetBranchAddress("antikt6Track_const_theta_wrtPV", &antikt6Track_const_theta_wrtPV, &b_antikt6Track_const_theta_wrtPV);
   fChain->SetBranchAddress("antikt6Track_const_qop", &antikt6Track_const_qop, &b_antikt6Track_const_qop);
   fChain->SetBranchAddress("antikt6Track_const_ndof", &antikt6Track_const_ndof, &b_antikt6Track_const_ndof);
   fChain->SetBranchAddress("antikt6Track_const_nBLayerHits", &antikt6Track_const_nBLayerHits, &b_antikt6Track_const_nBLayerHits);
   fChain->SetBranchAddress("antikt6Track_const_nPixelHits", &antikt6Track_const_nPixelHits, &b_antikt6Track_const_nPixelHits);
   fChain->SetBranchAddress("antikt6Track_const_nSCTHits", &antikt6Track_const_nSCTHits, &b_antikt6Track_const_nSCTHits);
   fChain->SetBranchAddress("antikt6Track_const_nTRTHits", &antikt6Track_const_nTRTHits, &b_antikt6Track_const_nTRTHits);
   fChain->SetBranchAddress("antikt2Truth_n", &antikt2Truth_n, &b_antikt2Truth_n);
   fChain->SetBranchAddress("antikt2Truth_E", &antikt2Truth_E, &b_antikt2Truth_E);
   fChain->SetBranchAddress("antikt2Truth_Et", &antikt2Truth_Et, &b_antikt2Truth_Et);
   fChain->SetBranchAddress("antikt2Truth_pt", &antikt2Truth_pt, &b_antikt2Truth_pt);
   fChain->SetBranchAddress("antikt2Truth_m", &antikt2Truth_m, &b_antikt2Truth_m);
   fChain->SetBranchAddress("antikt2Truth_eta", &antikt2Truth_eta, &b_antikt2Truth_eta);
   fChain->SetBranchAddress("antikt2Truth_phi", &antikt2Truth_phi, &b_antikt2Truth_phi);
   fChain->SetBranchAddress("antikt3Truth_n", &antikt3Truth_n, &b_antikt3Truth_n);
   fChain->SetBranchAddress("antikt3Truth_E", &antikt3Truth_E, &b_antikt3Truth_E);
   fChain->SetBranchAddress("antikt3Truth_Et", &antikt3Truth_Et, &b_antikt3Truth_Et);
   fChain->SetBranchAddress("antikt3Truth_pt", &antikt3Truth_pt, &b_antikt3Truth_pt);
   fChain->SetBranchAddress("antikt3Truth_m", &antikt3Truth_m, &b_antikt3Truth_m);
   fChain->SetBranchAddress("antikt3Truth_eta", &antikt3Truth_eta, &b_antikt3Truth_eta);
   fChain->SetBranchAddress("antikt3Truth_phi", &antikt3Truth_phi, &b_antikt3Truth_phi);
   fChain->SetBranchAddress("antikt4Truth_n", &antikt4Truth_n, &b_antikt4Truth_n);
   fChain->SetBranchAddress("antikt4Truth_E", &antikt4Truth_E, &b_antikt4Truth_E);
   fChain->SetBranchAddress("antikt4Truth_Et", &antikt4Truth_Et, &b_antikt4Truth_Et);
   fChain->SetBranchAddress("antikt4Truth_pt", &antikt4Truth_pt, &b_antikt4Truth_pt);
   fChain->SetBranchAddress("antikt4Truth_m", &antikt4Truth_m, &b_antikt4Truth_m);
   fChain->SetBranchAddress("antikt4Truth_eta", &antikt4Truth_eta, &b_antikt4Truth_eta);
   fChain->SetBranchAddress("antikt4Truth_phi", &antikt4Truth_phi, &b_antikt4Truth_phi);
   fChain->SetBranchAddress("antikt5Truth_n", &antikt5Truth_n, &b_antikt5Truth_n);
   fChain->SetBranchAddress("antikt5Truth_E", &antikt5Truth_E, &b_antikt5Truth_E);
   fChain->SetBranchAddress("antikt5Truth_Et", &antikt5Truth_Et, &b_antikt5Truth_Et);
   fChain->SetBranchAddress("antikt5Truth_pt", &antikt5Truth_pt, &b_antikt5Truth_pt);
   fChain->SetBranchAddress("antikt5Truth_m", &antikt5Truth_m, &b_antikt5Truth_m);
   fChain->SetBranchAddress("antikt5Truth_eta", &antikt5Truth_eta, &b_antikt5Truth_eta);
   fChain->SetBranchAddress("antikt5Truth_phi", &antikt5Truth_phi, &b_antikt5Truth_phi);
   fChain->SetBranchAddress("antikt6Truth_n", &antikt6Truth_n, &b_antikt6Truth_n);
   fChain->SetBranchAddress("antikt6Truth_E", &antikt6Truth_E, &b_antikt6Truth_E);
   fChain->SetBranchAddress("antikt6Truth_Et", &antikt6Truth_Et, &b_antikt6Truth_Et);
   fChain->SetBranchAddress("antikt6Truth_pt", &antikt6Truth_pt, &b_antikt6Truth_pt);
   fChain->SetBranchAddress("antikt6Truth_m", &antikt6Truth_m, &b_antikt6Truth_m);
   fChain->SetBranchAddress("antikt6Truth_eta", &antikt6Truth_eta, &b_antikt6Truth_eta);
   fChain->SetBranchAddress("antikt6Truth_phi", &antikt6Truth_phi, &b_antikt6Truth_phi);
   fChain->SetBranchAddress("antikt8Truth_n", &antikt8Truth_n, &b_antikt8Truth_n);
   fChain->SetBranchAddress("antikt8Truth_E", &antikt8Truth_E, &b_antikt8Truth_E);
   fChain->SetBranchAddress("antikt8Truth_Et", &antikt8Truth_Et, &b_antikt8Truth_Et);
   fChain->SetBranchAddress("antikt8Truth_pt", &antikt8Truth_pt, &b_antikt8Truth_pt);
   fChain->SetBranchAddress("antikt8Truth_m", &antikt8Truth_m, &b_antikt8Truth_m);
   fChain->SetBranchAddress("antikt8Truth_eta", &antikt8Truth_eta, &b_antikt8Truth_eta);
   fChain->SetBranchAddress("antikt8Truth_phi", &antikt8Truth_phi, &b_antikt8Truth_phi);
   fChain->SetBranchAddress("antikt10Truth_n", &antikt10Truth_n, &b_antikt10Truth_n);
   fChain->SetBranchAddress("antikt10Truth_E", &antikt10Truth_E, &b_antikt10Truth_E);
   fChain->SetBranchAddress("antikt10Truth_Et", &antikt10Truth_Et, &b_antikt10Truth_Et);
   fChain->SetBranchAddress("antikt10Truth_pt", &antikt10Truth_pt, &b_antikt10Truth_pt);
   fChain->SetBranchAddress("antikt10Truth_m", &antikt10Truth_m, &b_antikt10Truth_m);
   fChain->SetBranchAddress("antikt10Truth_eta", &antikt10Truth_eta, &b_antikt10Truth_eta);
   fChain->SetBranchAddress("antikt10Truth_phi", &antikt10Truth_phi, &b_antikt10Truth_phi);
   fChain->SetBranchAddress("JetFlow_PsiFCAL0_w", &JetFlow_PsiFCAL0_w, &b_JetFlow_PsiFCAL0_w);
   fChain->SetBranchAddress("JetFlow_PsiPFCAL0_w", &JetFlow_PsiPFCAL0_w, &b_JetFlow_PsiPFCAL0_w);
   fChain->SetBranchAddress("JetFlow_PsiNFCAL0_w", &JetFlow_PsiNFCAL0_w, &b_JetFlow_PsiNFCAL0_w);
   fChain->SetBranchAddress("JetFlow_EtInLayer", &JetFlow_EtInLayer, &b_JetFlow_EtInLayer);
   fChain->SetBranchAddress("JetFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers", &JetFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers, &b_JetFlow_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("JetFlow_AvgV2fromCalo", &JetFlow_AvgV2fromCalo, &b_JetFlow_AvgV2fromCalo);
   fChain->SetBranchAddress("HIFlow_v1_PsiFCAL0_w", &HIFlow_v1_PsiFCAL0_w, &b_HIFlow_v1_PsiFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v1_PsiPFCAL0_w", &HIFlow_v1_PsiPFCAL0_w, &b_HIFlow_v1_PsiPFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v1_PsiNFCAL0_w", &HIFlow_v1_PsiNFCAL0_w, &b_HIFlow_v1_PsiNFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v1_EtInLayer", &HIFlow_v1_EtInLayer, &b_HIFlow_v1_EtInLayer);
   fChain->SetBranchAddress("HIFlow_v1_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers", &HIFlow_v1_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers, &b_HIFlow_v1_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v1_AvgV2fromCalo", &HIFlow_v1_AvgV2fromCalo, &b_HIFlow_v1_AvgV2fromCalo);
   fChain->SetBranchAddress("HIFlow_v2_PsiFCAL0_w", &HIFlow_v2_PsiFCAL0_w, &b_HIFlow_v2_PsiFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v2_PsiPFCAL0_w", &HIFlow_v2_PsiPFCAL0_w, &b_HIFlow_v2_PsiPFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v2_PsiNFCAL0_w", &HIFlow_v2_PsiNFCAL0_w, &b_HIFlow_v2_PsiNFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v2_EtInLayer", &HIFlow_v2_EtInLayer, &b_HIFlow_v2_EtInLayer);
   fChain->SetBranchAddress("HIFlow_v2_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers", &HIFlow_v2_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers, &b_HIFlow_v2_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v2_AvgV2fromCalo", &HIFlow_v2_AvgV2fromCalo, &b_HIFlow_v2_AvgV2fromCalo);
   fChain->SetBranchAddress("HIFlow_v2_PsiHICaloUtilLayers", &HIFlow_v2_PsiHICaloUtilLayers, &b_HIFlow_v2_PsiHICaloUtilLayers);
   fChain->SetBranchAddress("HIFlow_v2_PsiEtHICaloUtilLayers", &HIFlow_v2_PsiEtHICaloUtilLayers, &b_HIFlow_v2_PsiEtHICaloUtilLayers);
   fChain->SetBranchAddress("HIFlow_v2_PsiPtrack", &HIFlow_v2_PsiPtrack, &b_HIFlow_v2_PsiPtrack);
   fChain->SetBranchAddress("HIFlow_v2_PsiNtrack", &HIFlow_v2_PsiNtrack, &b_HIFlow_v2_PsiNtrack);
   fChain->SetBranchAddress("HIFlow_v2_v2EMB1sil", &HIFlow_v2_v2EMB1sil, &b_HIFlow_v2_v2EMB1sil);
   fChain->SetBranchAddress("HIFlow_v2_v2FCAL0sil", &HIFlow_v2_v2FCAL0sil, &b_HIFlow_v2_v2FCAL0sil);
   fChain->SetBranchAddress("HIFlow_v2_v2track", &HIFlow_v2_v2track, &b_HIFlow_v2_v2track);
   fChain->SetBranchAddress("HIFlow_v2_Meanv2_Psi_From_EMB1CaloCel_IDLayers", &HIFlow_v2_Meanv2_Psi_From_EMB1CaloCel_IDLayers, &b_HIFlow_v2_Meanv2_Psi_From_EMB1CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v2_Meanv2_Psi_From_FCAL0CaloCel_IDLayers", &HIFlow_v2_Meanv2_Psi_From_FCAL0CaloCel_IDLayers, &b_HIFlow_v2_Meanv2_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v2_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers", &HIFlow_v2_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers, &b_HIFlow_v2_Meanv2Et_Psi_From_EMB1CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_EMBN1", &HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_EMBN1, &b_HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_EMBN1);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_EMBP1", &HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_EMBP1, &b_HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_EMBP1);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_FCALN0", &HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_FCALN0, &b_HIFlow_v2_v2Eta_Psi_From_EMBP1_InDet_FCALN0);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_FCALP0", &HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_FCALP0, &b_HIFlow_v2_v2Eta_Psi_From_EMBN1_InDet_FCALP0);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_EMBN1", &HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_EMBN1, &b_HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_EMBN1);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_EMBP1", &HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_EMBP1, &b_HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_EMBP1);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_FCALN0", &HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_FCALN0, &b_HIFlow_v2_v2Eta_Psi_From_FCALP0_InDet_FCALN0);
   fChain->SetBranchAddress("HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_FCALP0", &HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_FCALP0, &b_HIFlow_v2_v2Eta_Psi_From_FCALN0_InDet_FCALP0);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1", &HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1, &b_HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_EMBN1);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1", &HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1, &b_HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_EMBP1);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0", &HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0, &b_HIFlow_v2_v2EtaEt_Psi_From_EMBP1_InDet_FCALN0);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0", &HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0, &b_HIFlow_v2_v2EtaEt_Psi_From_EMBN1_InDet_FCALP0);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1", &HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1, &b_HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_EMBN1);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1", &HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1, &b_HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_EMBP1);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0", &HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0, &b_HIFlow_v2_v2EtaEt_Psi_From_FCALP0_InDet_FCALN0);
   fChain->SetBranchAddress("HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0", &HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0, &b_HIFlow_v2_v2EtaEt_Psi_From_FCALN0_InDet_FCALP0);
   fChain->SetBranchAddress("HIFlow_v2_EtaEMBN1", &HIFlow_v2_EtaEMBN1, &b_HIFlow_v2_EtaEMBN1);
   fChain->SetBranchAddress("HIFlow_v2_EtaEMBP1", &HIFlow_v2_EtaEMBP1, &b_HIFlow_v2_EtaEMBP1);
   fChain->SetBranchAddress("HIFlow_v2_EtaFCALN0", &HIFlow_v2_EtaFCALN0, &b_HIFlow_v2_EtaFCALN0);
   fChain->SetBranchAddress("HIFlow_v2_EtaFCALP0", &HIFlow_v2_EtaFCALP0, &b_HIFlow_v2_EtaFCALP0);
   fChain->SetBranchAddress("HIFlow_v3_PsiFCAL0_w", &HIFlow_v3_PsiFCAL0_w, &b_HIFlow_v3_PsiFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v3_PsiPFCAL0_w", &HIFlow_v3_PsiPFCAL0_w, &b_HIFlow_v3_PsiPFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v3_PsiNFCAL0_w", &HIFlow_v3_PsiNFCAL0_w, &b_HIFlow_v3_PsiNFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v3_EtInLayer", &HIFlow_v3_EtInLayer, &b_HIFlow_v3_EtInLayer);
   fChain->SetBranchAddress("HIFlow_v3_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers", &HIFlow_v3_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers, &b_HIFlow_v3_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v3_AvgV2fromCalo", &HIFlow_v3_AvgV2fromCalo, &b_HIFlow_v3_AvgV2fromCalo);
   fChain->SetBranchAddress("HIFlow_v4_PsiFCAL0_w", &HIFlow_v4_PsiFCAL0_w, &b_HIFlow_v4_PsiFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v4_PsiPFCAL0_w", &HIFlow_v4_PsiPFCAL0_w, &b_HIFlow_v4_PsiPFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v4_PsiNFCAL0_w", &HIFlow_v4_PsiNFCAL0_w, &b_HIFlow_v4_PsiNFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v4_EtInLayer", &HIFlow_v4_EtInLayer, &b_HIFlow_v4_EtInLayer);
   fChain->SetBranchAddress("HIFlow_v4_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers", &HIFlow_v4_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers, &b_HIFlow_v4_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v4_AvgV2fromCalo", &HIFlow_v4_AvgV2fromCalo, &b_HIFlow_v4_AvgV2fromCalo);
   fChain->SetBranchAddress("HIFlow_v5_PsiFCAL0_w", &HIFlow_v5_PsiFCAL0_w, &b_HIFlow_v5_PsiFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v5_PsiPFCAL0_w", &HIFlow_v5_PsiPFCAL0_w, &b_HIFlow_v5_PsiPFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v5_PsiNFCAL0_w", &HIFlow_v5_PsiNFCAL0_w, &b_HIFlow_v5_PsiNFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v5_EtInLayer", &HIFlow_v5_EtInLayer, &b_HIFlow_v5_EtInLayer);
   fChain->SetBranchAddress("HIFlow_v5_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers", &HIFlow_v5_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers, &b_HIFlow_v5_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v5_AvgV2fromCalo", &HIFlow_v5_AvgV2fromCalo, &b_HIFlow_v5_AvgV2fromCalo);
   fChain->SetBranchAddress("HIFlow_v6_PsiFCAL0_w", &HIFlow_v6_PsiFCAL0_w, &b_HIFlow_v6_PsiFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v6_PsiPFCAL0_w", &HIFlow_v6_PsiPFCAL0_w, &b_HIFlow_v6_PsiPFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v6_PsiNFCAL0_w", &HIFlow_v6_PsiNFCAL0_w, &b_HIFlow_v6_PsiNFCAL0_w);
   fChain->SetBranchAddress("HIFlow_v6_EtInLayer", &HIFlow_v6_EtInLayer, &b_HIFlow_v6_EtInLayer);
   fChain->SetBranchAddress("HIFlow_v6_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers", &HIFlow_v6_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers, &b_HIFlow_v6_Meanv2Et_Psi_From_FCAL0CaloCel_IDLayers);
   fChain->SetBranchAddress("HIFlow_v6_AvgV2fromCalo", &HIFlow_v6_AvgV2fromCalo, &b_HIFlow_v6_AvgV2fromCalo);
   fChain->SetBranchAddress("cl_eg_n", &cl_eg_n, &b_cl_eg_n);
   fChain->SetBranchAddress("cl_eg_pt", &cl_eg_pt, &b_cl_eg_pt);
   fChain->SetBranchAddress("cl_eg_eta", &cl_eg_eta, &b_cl_eg_eta);
   fChain->SetBranchAddress("cl_eg_phi", &cl_eg_phi, &b_cl_eg_phi);
   fChain->SetBranchAddress("cl_eg_E_em", &cl_eg_E_em, &b_cl_eg_E_em);
   fChain->SetBranchAddress("cl_eg_E_had", &cl_eg_E_had, &b_cl_eg_E_had);
   fChain->SetBranchAddress("cl_eg_firstEdens", &cl_eg_firstEdens, &b_cl_eg_firstEdens);
   fChain->SetBranchAddress("cl_eg_cellmaxfrac", &cl_eg_cellmaxfrac, &b_cl_eg_cellmaxfrac);
   fChain->SetBranchAddress("cl_eg_longitudinal", &cl_eg_longitudinal, &b_cl_eg_longitudinal);
   fChain->SetBranchAddress("cl_eg_secondlambda", &cl_eg_secondlambda, &b_cl_eg_secondlambda);
   fChain->SetBranchAddress("cl_eg_lateral", &cl_eg_lateral, &b_cl_eg_lateral);
   fChain->SetBranchAddress("cl_eg_secondR", &cl_eg_secondR, &b_cl_eg_secondR);
   fChain->SetBranchAddress("cl_eg_centerlambda", &cl_eg_centerlambda, &b_cl_eg_centerlambda);
   fChain->SetBranchAddress("cl_eg_deltaTheta", &cl_eg_deltaTheta, &b_cl_eg_deltaTheta);
   fChain->SetBranchAddress("cl_eg_deltaPhi", &cl_eg_deltaPhi, &b_cl_eg_deltaPhi);
   fChain->SetBranchAddress("cl_eg_centermag", &cl_eg_centermag, &b_cl_eg_centermag);
   fChain->SetBranchAddress("cl_eg_time", &cl_eg_time, &b_cl_eg_time);
   fChain->SetBranchAddress("cl_eg_E_PreSamplerB", &cl_eg_E_PreSamplerB, &b_cl_eg_E_PreSamplerB);
   fChain->SetBranchAddress("cl_eg_E_EMB1", &cl_eg_E_EMB1, &b_cl_eg_E_EMB1);
   fChain->SetBranchAddress("cl_eg_E_EMB2", &cl_eg_E_EMB2, &b_cl_eg_E_EMB2);
   fChain->SetBranchAddress("cl_eg_E_EMB3", &cl_eg_E_EMB3, &b_cl_eg_E_EMB3);
   fChain->SetBranchAddress("cl_eg_E_PreSamplerE", &cl_eg_E_PreSamplerE, &b_cl_eg_E_PreSamplerE);
   fChain->SetBranchAddress("cl_eg_E_EME1", &cl_eg_E_EME1, &b_cl_eg_E_EME1);
   fChain->SetBranchAddress("cl_eg_E_EME2", &cl_eg_E_EME2, &b_cl_eg_E_EME2);
   fChain->SetBranchAddress("cl_eg_E_EME3", &cl_eg_E_EME3, &b_cl_eg_E_EME3);
   fChain->SetBranchAddress("cl_eg_E_HEC0", &cl_eg_E_HEC0, &b_cl_eg_E_HEC0);
   fChain->SetBranchAddress("cl_eg_E_HEC1", &cl_eg_E_HEC1, &b_cl_eg_E_HEC1);
   fChain->SetBranchAddress("cl_eg_E_HEC2", &cl_eg_E_HEC2, &b_cl_eg_E_HEC2);
   fChain->SetBranchAddress("cl_eg_E_HEC3", &cl_eg_E_HEC3, &b_cl_eg_E_HEC3);
   fChain->SetBranchAddress("cl_eg_E_TileBar0", &cl_eg_E_TileBar0, &b_cl_eg_E_TileBar0);
   fChain->SetBranchAddress("cl_eg_E_TileBar1", &cl_eg_E_TileBar1, &b_cl_eg_E_TileBar1);
   fChain->SetBranchAddress("cl_eg_E_TileBar2", &cl_eg_E_TileBar2, &b_cl_eg_E_TileBar2);
   fChain->SetBranchAddress("cl_eg_E_TileGap1", &cl_eg_E_TileGap1, &b_cl_eg_E_TileGap1);
   fChain->SetBranchAddress("cl_eg_E_TileGap2", &cl_eg_E_TileGap2, &b_cl_eg_E_TileGap2);
   fChain->SetBranchAddress("cl_eg_E_TileGap3", &cl_eg_E_TileGap3, &b_cl_eg_E_TileGap3);
   fChain->SetBranchAddress("cl_eg_E_TileExt0", &cl_eg_E_TileExt0, &b_cl_eg_E_TileExt0);
   fChain->SetBranchAddress("cl_eg_E_TileExt1", &cl_eg_E_TileExt1, &b_cl_eg_E_TileExt1);
   fChain->SetBranchAddress("cl_eg_E_TileExt2", &cl_eg_E_TileExt2, &b_cl_eg_E_TileExt2);
   fChain->SetBranchAddress("cl_eg_E_FCAL0", &cl_eg_E_FCAL0, &b_cl_eg_E_FCAL0);
   fChain->SetBranchAddress("cl_eg_E_FCAL1", &cl_eg_E_FCAL1, &b_cl_eg_E_FCAL1);
   fChain->SetBranchAddress("cl_eg_E_FCAL2", &cl_eg_E_FCAL2, &b_cl_eg_E_FCAL2);
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
   fChain->SetBranchAddress("mu_staco_truth_dr", &mu_staco_truth_dr, &b_mu_staco_truth_dr);
   fChain->SetBranchAddress("mu_staco_truth_E", &mu_staco_truth_E, &b_mu_staco_truth_E);
   fChain->SetBranchAddress("mu_staco_truth_pt", &mu_staco_truth_pt, &b_mu_staco_truth_pt);
   fChain->SetBranchAddress("mu_staco_truth_eta", &mu_staco_truth_eta, &b_mu_staco_truth_eta);
   fChain->SetBranchAddress("mu_staco_truth_phi", &mu_staco_truth_phi, &b_mu_staco_truth_phi);
   fChain->SetBranchAddress("mu_staco_truth_type", &mu_staco_truth_type, &b_mu_staco_truth_type);
   fChain->SetBranchAddress("mu_staco_truth_status", &mu_staco_truth_status, &b_mu_staco_truth_status);
   fChain->SetBranchAddress("mu_staco_truth_barcode", &mu_staco_truth_barcode, &b_mu_staco_truth_barcode);
   fChain->SetBranchAddress("mu_staco_truth_mothertype", &mu_staco_truth_mothertype, &b_mu_staco_truth_mothertype);
   fChain->SetBranchAddress("mu_staco_truth_motherbarcode", &mu_staco_truth_motherbarcode, &b_mu_staco_truth_motherbarcode);
   fChain->SetBranchAddress("mu_staco_truth_matched", &mu_staco_truth_matched, &b_mu_staco_truth_matched);
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
   fChain->SetBranchAddress("mu_muid_truth_dr", &mu_muid_truth_dr, &b_mu_muid_truth_dr);
   fChain->SetBranchAddress("mu_muid_truth_E", &mu_muid_truth_E, &b_mu_muid_truth_E);
   fChain->SetBranchAddress("mu_muid_truth_pt", &mu_muid_truth_pt, &b_mu_muid_truth_pt);
   fChain->SetBranchAddress("mu_muid_truth_eta", &mu_muid_truth_eta, &b_mu_muid_truth_eta);
   fChain->SetBranchAddress("mu_muid_truth_phi", &mu_muid_truth_phi, &b_mu_muid_truth_phi);
   fChain->SetBranchAddress("mu_muid_truth_type", &mu_muid_truth_type, &b_mu_muid_truth_type);
   fChain->SetBranchAddress("mu_muid_truth_status", &mu_muid_truth_status, &b_mu_muid_truth_status);
   fChain->SetBranchAddress("mu_muid_truth_barcode", &mu_muid_truth_barcode, &b_mu_muid_truth_barcode);
   fChain->SetBranchAddress("mu_muid_truth_mothertype", &mu_muid_truth_mothertype, &b_mu_muid_truth_mothertype);
   fChain->SetBranchAddress("mu_muid_truth_motherbarcode", &mu_muid_truth_motherbarcode, &b_mu_muid_truth_motherbarcode);
   fChain->SetBranchAddress("mu_muid_truth_matched", &mu_muid_truth_matched, &b_mu_muid_truth_matched);
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
   fChain->SetBranchAddress("L1_2J15", &L1_2J15, &b_L1_2J15);
   fChain->SetBranchAddress("L1_J10", &L1_J10, &b_L1_J10);
   fChain->SetBranchAddress("L1_J15", &L1_J15, &b_L1_J15);
   fChain->SetBranchAddress("L1_J30", &L1_J30, &b_L1_J30);
   fChain->SetBranchAddress("L1_J75", &L1_J75, &b_L1_J75);
   fChain->SetBranchAddress("trig_L1_jet_n", &trig_L1_jet_n, &b_trig_L1_jet_n);
   fChain->SetBranchAddress("trig_L1_jet_eta", &trig_L1_jet_eta, &b_trig_L1_jet_eta);
   fChain->SetBranchAddress("trig_L1_jet_phi", &trig_L1_jet_phi, &b_trig_L1_jet_phi);
   fChain->SetBranchAddress("trig_L1_jet_thrNames", &trig_L1_jet_thrNames, &b_trig_L1_jet_thrNames);
   fChain->SetBranchAddress("trig_L1_jet_thrValues", &trig_L1_jet_thrValues, &b_trig_L1_jet_thrValues);
   fChain->SetBranchAddress("trig_L1_jet_thrPattern", &trig_L1_jet_thrPattern, &b_trig_L1_jet_thrPattern);
   fChain->SetBranchAddress("trig_L1_jet_et4x4", &trig_L1_jet_et4x4, &b_trig_L1_jet_et4x4);
   fChain->SetBranchAddress("trig_L1_jet_et6x6", &trig_L1_jet_et6x6, &b_trig_L1_jet_et6x6);
   fChain->SetBranchAddress("trig_L1_jet_et8x8", &trig_L1_jet_et8x8, &b_trig_L1_jet_et8x8);
   fChain->SetBranchAddress("trig_L1_jet_RoIWord", &trig_L1_jet_RoIWord, &b_trig_L1_jet_RoIWord);
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
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3", &trig_L1_emtau_L1_2EM3, &b_trig_L1_emtau_L1_2EM3);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3_NL", &trig_L1_emtau_L1_2EM3_NL, &b_trig_L1_emtau_L1_2EM3_NL);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3_NZ", &trig_L1_emtau_L1_2EM3_NZ, &b_trig_L1_emtau_L1_2EM3_NZ);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM5", &trig_L1_emtau_L1_2EM5, &b_trig_L1_emtau_L1_2EM5);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10", &trig_L1_emtau_L1_EM10, &b_trig_L1_emtau_L1_EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM12", &trig_L1_emtau_L1_EM12, &b_trig_L1_emtau_L1_EM12);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14", &trig_L1_emtau_L1_EM14, &b_trig_L1_emtau_L1_EM14);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM16", &trig_L1_emtau_L1_EM16, &b_trig_L1_emtau_L1_EM16);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3", &trig_L1_emtau_L1_EM3, &b_trig_L1_emtau_L1_EM3);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_EMPTY", &trig_L1_emtau_L1_EM3_EMPTY, &b_trig_L1_emtau_L1_EM3_EMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_FIRSTEMPTY", &trig_L1_emtau_L1_EM3_FIRSTEMPTY, &b_trig_L1_emtau_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_MV_VTE50", &trig_L1_emtau_L1_EM3_MV_VTE50, &b_trig_L1_emtau_L1_EM3_MV_VTE50);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_NL", &trig_L1_emtau_L1_EM3_NL, &b_trig_L1_emtau_L1_EM3_NL);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_NZ", &trig_L1_emtau_L1_EM3_NZ, &b_trig_L1_emtau_L1_EM3_NZ);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_TE50", &trig_L1_emtau_L1_EM3_TE50, &b_trig_L1_emtau_L1_EM3_TE50);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_UNPAIRED_ISO", &trig_L1_emtau_L1_EM3_UNPAIRED_ISO, &b_trig_L1_emtau_L1_EM3_UNPAIRED_ISO);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_UNPAIRED_NONISO", &trig_L1_emtau_L1_EM3_UNPAIRED_NONISO, &b_trig_L1_emtau_L1_EM3_UNPAIRED_NONISO);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_VTE50", &trig_L1_emtau_L1_EM3_VTE50, &b_trig_L1_emtau_L1_EM3_VTE50);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM4", &trig_L1_emtau_L1_EM4, &b_trig_L1_emtau_L1_EM4);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5", &trig_L1_emtau_L1_EM5, &b_trig_L1_emtau_L1_EM5);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5_EMPTY", &trig_L1_emtau_L1_EM5_EMPTY, &b_trig_L1_emtau_L1_EM5_EMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM7", &trig_L1_emtau_L1_EM7, &b_trig_L1_emtau_L1_EM7);
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
   fChain->SetBranchAddress("trig_EF_jet_EF_fj20_Ecorr", &trig_EF_jet_EF_fj20_Ecorr, &b_trig_EF_jet_EF_fj20_Ecorr);
   fChain->SetBranchAddress("trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j100_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j150_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_Ecorr", &trig_EF_jet_EF_j15_Ecorr, &b_trig_EF_jet_EF_j15_Ecorr);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1J10", &trig_EF_jet_EF_j15_a2hi_EFFS_L1J10, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1J10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS", &trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10", &trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20", &trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j15_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a4_EFFS_L1ZDC", &trig_EF_jet_EF_j15_a4_EFFS_L1ZDC, &b_trig_EF_jet_EF_j15_a4_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS", &trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j15_a4hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10", &trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j15_a4hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j15_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_Ecorr", &trig_EF_jet_EF_j20_Ecorr, &b_trig_EF_jet_EF_j20_Ecorr);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1J10", &trig_EF_jet_EF_j20_a2hi_EFFS_L1J10, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1J10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS", &trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10", &trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20", &trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j20_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a4_EFFS_L1ZDC", &trig_EF_jet_EF_j20_a4_EFFS_L1ZDC, &b_trig_EF_jet_EF_j20_a4_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS", &trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS, &b_trig_EF_jet_EF_j20_a4hi_EFFS_L1MBTS);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10", &trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j20_a4hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC", &trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j20_a4hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1J10", &trig_EF_jet_EF_j25_a2hi_EFFS_L1J10, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1J10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10", &trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE10);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20", &trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1TE20);
   fChain->SetBranchAddress("trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j25_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j30_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j40_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j40_a4_EFFS_L1ZDC", &trig_EF_jet_EF_j40_a4_EFFS_L1ZDC, &b_trig_EF_jet_EF_j40_a4_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j50_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC", &trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC, &b_trig_EF_jet_EF_j75_a2hi_EFFS_L1ZDC);
   fChain->SetBranchAddress("trig_EF_jet_EF_j75_a4_EFFS_L1ZDC", &trig_EF_jet_EF_j75_a4_EFFS_L1ZDC, &b_trig_EF_jet_EF_j75_a4_EFFS_L1ZDC);
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
   fChain->SetBranchAddress("trig_L2_jet_n", &trig_L2_jet_n, &b_trig_L2_jet_n);
   fChain->SetBranchAddress("trig_L2_jet_E", &trig_L2_jet_E, &b_trig_L2_jet_E);
   fChain->SetBranchAddress("trig_L2_jet_eta", &trig_L2_jet_eta, &b_trig_L2_jet_eta);
   fChain->SetBranchAddress("trig_L2_jet_phi", &trig_L2_jet_phi, &b_trig_L2_jet_phi);
   fChain->SetBranchAddress("trig_L2_jet_RoIWord", &trig_L2_jet_RoIWord, &b_trig_L2_jet_RoIWord);
   fChain->SetBranchAddress("trig_L2_jet_ehad0", &trig_L2_jet_ehad0, &b_trig_L2_jet_ehad0);
   fChain->SetBranchAddress("trig_L2_jet_eem0", &trig_L2_jet_eem0, &b_trig_L2_jet_eem0);
   fChain->SetBranchAddress("trig_L2_jet_nLeadingCells", &trig_L2_jet_nLeadingCells, &b_trig_L2_jet_nLeadingCells);
   fChain->SetBranchAddress("trig_L2_jet_hecf", &trig_L2_jet_hecf, &b_trig_L2_jet_hecf);
   fChain->SetBranchAddress("trig_L2_jet_jetQuality", &trig_L2_jet_jetQuality, &b_trig_L2_jet_jetQuality);
   fChain->SetBranchAddress("trig_L2_jet_emf", &trig_L2_jet_emf, &b_trig_L2_jet_emf);
   fChain->SetBranchAddress("trig_L2_jet_jetTimeCells", &trig_L2_jet_jetTimeCells, &b_trig_L2_jet_jetTimeCells);
   fChain->SetBranchAddress("vx_n", &vx_n, &b_vx_n);
   fChain->SetBranchAddress("vx_x", &vx_x, &b_vx_x);
   fChain->SetBranchAddress("vx_y", &vx_y, &b_vx_y);
   fChain->SetBranchAddress("vx_z", &vx_z, &b_vx_z);
   fChain->SetBranchAddress("vx_cov_x", &vx_cov_x, &b_vx_cov_x);
   fChain->SetBranchAddress("vx_cov_y", &vx_cov_y, &b_vx_cov_y);
   fChain->SetBranchAddress("vx_cov_z", &vx_cov_z, &b_vx_cov_z);
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
   fChain->SetBranchAddress("vx_sumWeightInliers", &vx_sumWeightInliers, &b_vx_sumWeightInliers);
   fChain->SetBranchAddress("vx_sumWeightOutliers", &vx_sumWeightOutliers, &b_vx_sumWeightOutliers);
   fChain->SetBranchAddress("vx_sumWeightPileup", &vx_sumWeightPileup, &b_vx_sumWeightPileup);
   fChain->SetBranchAddress("vx_sumWeightFakes", &vx_sumWeightFakes, &b_vx_sumWeightFakes);
   fChain->SetBranchAddress("vx_nInliers", &vx_nInliers, &b_vx_nInliers);
   fChain->SetBranchAddress("vx_nOutliers", &vx_nOutliers, &b_vx_nOutliers);
   fChain->SetBranchAddress("vx_nPileUp", &vx_nPileUp, &b_vx_nPileUp);
   fChain->SetBranchAddress("vx_nFakes", &vx_nFakes, &b_vx_nFakes);
   fChain->SetBranchAddress("vx_purity", &vx_purity, &b_vx_purity);
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
   fChain->SetBranchAddress("el_OQRecalc", &el_OQRecalc, &b_el_OQRecalc);
   fChain->SetBranchAddress("el_type", &el_type, &b_el_type);
   fChain->SetBranchAddress("el_origin", &el_origin, &b_el_origin);
   fChain->SetBranchAddress("el_typebkg", &el_typebkg, &b_el_typebkg);
   fChain->SetBranchAddress("el_originbkg", &el_originbkg, &b_el_originbkg);
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
   fChain->SetBranchAddress("el_deltaPhiRot", &el_deltaPhiRot, &b_el_deltaPhiRot);
   fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
   fChain->SetBranchAddress("el_trackd0_physics", &el_trackd0_physics, &b_el_trackd0_physics);
   fChain->SetBranchAddress("el_etaSampling1", &el_etaSampling1, &b_el_etaSampling1);
   fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
   fChain->SetBranchAddress("el_rphi", &el_rphi, &b_el_rphi);
   fChain->SetBranchAddress("el_EtringnoisedR03sig2", &el_EtringnoisedR03sig2, &b_el_EtringnoisedR03sig2);
   fChain->SetBranchAddress("el_EtringnoisedR03sig3", &el_EtringnoisedR03sig3, &b_el_EtringnoisedR03sig3);
   fChain->SetBranchAddress("el_EtringnoisedR03sig4", &el_EtringnoisedR03sig4, &b_el_EtringnoisedR03sig4);
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
   fChain->SetBranchAddress("el_nPixHoles", &el_nPixHoles, &b_el_nPixHoles);
   fChain->SetBranchAddress("el_nSCTHoles", &el_nSCTHoles, &b_el_nSCTHoles);
   fChain->SetBranchAddress("el_nTRTHoles", &el_nTRTHoles, &b_el_nTRTHoles);
   fChain->SetBranchAddress("el_nBLSharedHits", &el_nBLSharedHits, &b_el_nBLSharedHits);
   fChain->SetBranchAddress("el_nPixSharedHits", &el_nPixSharedHits, &b_el_nPixSharedHits);
   fChain->SetBranchAddress("el_nSCTSharedHits", &el_nSCTSharedHits, &b_el_nSCTSharedHits);
   fChain->SetBranchAddress("el_nBLayerOutliers", &el_nBLayerOutliers, &b_el_nBLayerOutliers);
   fChain->SetBranchAddress("el_nPixelOutliers", &el_nPixelOutliers, &b_el_nPixelOutliers);
   fChain->SetBranchAddress("el_nSCTOutliers", &el_nSCTOutliers, &b_el_nSCTOutliers);
   fChain->SetBranchAddress("el_nTRTOutliers", &el_nTRTOutliers, &b_el_nTRTOutliers);
   fChain->SetBranchAddress("el_nTRTHighTOutliers", &el_nTRTHighTOutliers, &b_el_nTRTHighTOutliers);
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
   fChain->SetBranchAddress("el_hastrack", &el_hastrack, &b_el_hastrack);
   fChain->SetBranchAddress("el_deltaEmax2", &el_deltaEmax2, &b_el_deltaEmax2);
   fChain->SetBranchAddress("el_calibHitsShowerDepth", &el_calibHitsShowerDepth, &b_el_calibHitsShowerDepth);
   fChain->SetBranchAddress("el_isIso", &el_isIso, &b_el_isIso);
   fChain->SetBranchAddress("el_mvaptcone20", &el_mvaptcone20, &b_el_mvaptcone20);
   fChain->SetBranchAddress("el_mvaptcone30", &el_mvaptcone30, &b_el_mvaptcone30);
   fChain->SetBranchAddress("el_mvaptcone40", &el_mvaptcone40, &b_el_mvaptcone40);
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
   fChain->SetBranchAddress("ph_OQRecalc", &ph_OQRecalc, &b_ph_OQRecalc);
   fChain->SetBranchAddress("ph_type", &ph_type, &b_ph_type);
   fChain->SetBranchAddress("ph_origin", &ph_origin, &b_ph_origin);
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
   fChain->SetBranchAddress("ph_EtringnoisedR03sig2", &ph_EtringnoisedR03sig2, &b_ph_EtringnoisedR03sig2);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig3", &ph_EtringnoisedR03sig3, &b_ph_EtringnoisedR03sig3);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig4", &ph_EtringnoisedR03sig4, &b_ph_EtringnoisedR03sig4);
   fChain->SetBranchAddress("ph_isolationlikelihoodjets", &ph_isolationlikelihoodjets, &b_ph_isolationlikelihoodjets);
   fChain->SetBranchAddress("ph_isolationlikelihoodhqelectrons", &ph_isolationlikelihoodhqelectrons, &b_ph_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("ph_loglikelihood", &ph_loglikelihood, &b_ph_loglikelihood);
   fChain->SetBranchAddress("ph_photonweight", &ph_photonweight, &b_ph_photonweight);
   fChain->SetBranchAddress("ph_photonbgweight", &ph_photonbgweight, &b_ph_photonbgweight);
   fChain->SetBranchAddress("ph_neuralnet", &ph_neuralnet, &b_ph_neuralnet);
   fChain->SetBranchAddress("ph_Hmatrix", &ph_Hmatrix, &b_ph_Hmatrix);
   fChain->SetBranchAddress("ph_Hmatrix5", &ph_Hmatrix5, &b_ph_Hmatrix5);
   fChain->SetBranchAddress("ph_adaboost", &ph_adaboost, &b_ph_adaboost);
   fChain->SetBranchAddress("ph_zvertex", &ph_zvertex, &b_ph_zvertex);
   fChain->SetBranchAddress("ph_errz", &ph_errz, &b_ph_errz);
   fChain->SetBranchAddress("ph_etap", &ph_etap, &b_ph_etap);
   fChain->SetBranchAddress("ph_depth", &ph_depth, &b_ph_depth);
   fChain->SetBranchAddress("ph_cl_E", &ph_cl_E, &b_ph_cl_E);
   fChain->SetBranchAddress("ph_cl_pt", &ph_cl_pt, &b_ph_cl_pt);
   fChain->SetBranchAddress("ph_cl_eta", &ph_cl_eta, &b_ph_cl_eta);
   fChain->SetBranchAddress("ph_cl_phi", &ph_cl_phi, &b_ph_cl_phi);
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
   fChain->SetBranchAddress("ph_truth_isConv", &ph_truth_isConv, &b_ph_truth_isConv);
   fChain->SetBranchAddress("ph_truth_isBrem", &ph_truth_isBrem, &b_ph_truth_isBrem);
   fChain->SetBranchAddress("ph_truth_isFromHardProc", &ph_truth_isFromHardProc, &b_ph_truth_isFromHardProc);
   fChain->SetBranchAddress("ph_truth_isPhotonFromHardProc", &ph_truth_isPhotonFromHardProc, &b_ph_truth_isPhotonFromHardProc);
   fChain->SetBranchAddress("ph_truth_Rconv", &ph_truth_Rconv, &b_ph_truth_Rconv);
   fChain->SetBranchAddress("ph_truth_zconv", &ph_truth_zconv, &b_ph_truth_zconv);
   fChain->SetBranchAddress("ph_deltaEmax2", &ph_deltaEmax2, &b_ph_deltaEmax2);
   fChain->SetBranchAddress("ph_calibHitsShowerDepth", &ph_calibHitsShowerDepth, &b_ph_calibHitsShowerDepth);
   fChain->SetBranchAddress("ph_isIso", &ph_isIso, &b_ph_isIso);
   fChain->SetBranchAddress("ph_mvaptcone20", &ph_mvaptcone20, &b_ph_mvaptcone20);
   fChain->SetBranchAddress("ph_mvaptcone30", &ph_mvaptcone30, &b_ph_mvaptcone30);
   fChain->SetBranchAddress("ph_mvaptcone40", &ph_mvaptcone40, &b_ph_mvaptcone40);
   fChain->SetBranchAddress("ph_EF_dr", &ph_EF_dr, &b_ph_EF_dr);
   fChain->SetBranchAddress("ph_EF_index", &ph_EF_index, &b_ph_EF_index);
   fChain->SetBranchAddress("ph_L2_dr", &ph_L2_dr, &b_ph_L2_dr);
   fChain->SetBranchAddress("ph_L1_dr", &ph_L1_dr, &b_ph_L1_dr);
   fChain->SetBranchAddress("ph_L1_index", &ph_L1_index, &b_ph_L1_index);
   fChain->SetBranchAddress("mcVx_n", &mcVx_n, &b_mcVx_n);
   fChain->SetBranchAddress("mcVx_x", &mcVx_x, &b_mcVx_x);
   fChain->SetBranchAddress("mcVx_y", &mcVx_y, &b_mcVx_y);
   fChain->SetBranchAddress("mcVx_z", &mcVx_z, &b_mcVx_z);
   fChain->SetBranchAddress("mc_n", &mc_n, &b_mc_n);
   fChain->SetBranchAddress("mc_gen_E", &mc_gen_E, &b_mc_gen_E);
   fChain->SetBranchAddress("mc_gen_pt", &mc_gen_pt, &b_mc_gen_pt);
   fChain->SetBranchAddress("mc_gen_eta", &mc_gen_eta, &b_mc_gen_eta);
   fChain->SetBranchAddress("mc_gen_phi", &mc_gen_phi, &b_mc_gen_phi);
   fChain->SetBranchAddress("mc_gen_type", &mc_gen_type, &b_mc_gen_type);
   fChain->SetBranchAddress("mc_gen_status", &mc_gen_status, &b_mc_gen_status);
   fChain->SetBranchAddress("mc_gen_barcode", &mc_gen_barcode, &b_mc_gen_barcode);
   fChain->SetBranchAddress("mc_gen_mothertype", &mc_gen_mothertype, &b_mc_gen_mothertype);
   fChain->SetBranchAddress("mc_gen_motherbarcode", &mc_gen_motherbarcode, &b_mc_gen_motherbarcode);
   fChain->SetBranchAddress("mc_perigee_ok", &mc_perigee_ok, &b_mc_perigee_ok);
   fChain->SetBranchAddress("mc_perigee_d0", &mc_perigee_d0, &b_mc_perigee_d0);
   fChain->SetBranchAddress("mc_perigee_z0", &mc_perigee_z0, &b_mc_perigee_z0);
   fChain->SetBranchAddress("mc_perigee_phi", &mc_perigee_phi, &b_mc_perigee_phi);
   fChain->SetBranchAddress("mc_perigee_theta", &mc_perigee_theta, &b_mc_perigee_theta);
   fChain->SetBranchAddress("mc_perigee_qoverp", &mc_perigee_qoverp, &b_mc_perigee_qoverp);
   fChain->SetBranchAddress("mc_charge", &mc_charge, &b_mc_charge);
   fChain->SetBranchAddress("mc_child_n", &mc_child_n, &b_mc_child_n);
   fChain->SetBranchAddress("mc_child_barcode", &mc_child_barcode, &b_mc_child_barcode);
   fChain->SetBranchAddress("mc_child_pdg", &mc_child_pdg, &b_mc_child_pdg);
   fChain->SetBranchAddress("mc_begVtx_x", &mc_begVtx_x, &b_mc_begVtx_x);
   fChain->SetBranchAddress("mc_begVtx_y", &mc_begVtx_y, &b_mc_begVtx_y);
   fChain->SetBranchAddress("mc_begVtx_z", &mc_begVtx_z, &b_mc_begVtx_z);
   fChain->SetBranchAddress("mc_begVtx_barcode", &mc_begVtx_barcode, &b_mc_begVtx_barcode);
   fChain->SetBranchAddress("mc_endVtx_x", &mc_endVtx_x, &b_mc_endVtx_x);
   fChain->SetBranchAddress("mc_endVtx_y", &mc_endVtx_y, &b_mc_endVtx_y);
   fChain->SetBranchAddress("mc_endVtx_z", &mc_endVtx_z, &b_mc_endVtx_z);
   fChain->SetBranchAddress("mc_endVtx_barcode", &mc_endVtx_barcode, &b_mc_endVtx_barcode);
   fChain->SetBranchAddress("mc_unstable_n", &mc_unstable_n, &b_mc_unstable_n);
   fChain->SetBranchAddress("mc_unstable_gen_pt", &mc_unstable_gen_pt, &b_mc_unstable_gen_pt);
   fChain->SetBranchAddress("mc_unstable_gen_eta", &mc_unstable_gen_eta, &b_mc_unstable_gen_eta);
   fChain->SetBranchAddress("mc_unstable_gen_phi", &mc_unstable_gen_phi, &b_mc_unstable_gen_phi);
   fChain->SetBranchAddress("mc_unstable_gen_energy", &mc_unstable_gen_energy, &b_mc_unstable_gen_energy);
   fChain->SetBranchAddress("mc_unstable_perigee_ok", &mc_unstable_perigee_ok, &b_mc_unstable_perigee_ok);
   fChain->SetBranchAddress("mc_unstable_perigee_d0", &mc_unstable_perigee_d0, &b_mc_unstable_perigee_d0);
   fChain->SetBranchAddress("mc_unstable_perigee_z0", &mc_unstable_perigee_z0, &b_mc_unstable_perigee_z0);
   fChain->SetBranchAddress("mc_unstable_perigee_phi", &mc_unstable_perigee_phi, &b_mc_unstable_perigee_phi);
   fChain->SetBranchAddress("mc_unstable_perigee_theta", &mc_unstable_perigee_theta, &b_mc_unstable_perigee_theta);
   fChain->SetBranchAddress("mc_unstable_perigee_qoverp", &mc_unstable_perigee_qoverp, &b_mc_unstable_perigee_qoverp);
   fChain->SetBranchAddress("mc_unstable_pdg", &mc_unstable_pdg, &b_mc_unstable_pdg);
   fChain->SetBranchAddress("mc_unstable_charge", &mc_unstable_charge, &b_mc_unstable_charge);
   fChain->SetBranchAddress("mc_unstable_barcode", &mc_unstable_barcode, &b_mc_unstable_barcode);
   fChain->SetBranchAddress("mc_unstable_status", &mc_unstable_status, &b_mc_unstable_status);
   fChain->SetBranchAddress("mc_unstable_mother_pdg", &mc_unstable_mother_pdg, &b_mc_unstable_mother_pdg);
   fChain->SetBranchAddress("mc_unstable_mother_barcode", &mc_unstable_mother_barcode, &b_mc_unstable_mother_barcode);
   fChain->SetBranchAddress("mc_unstable_child_n", &mc_unstable_child_n, &b_mc_unstable_child_n);
   fChain->SetBranchAddress("mc_unstable_child_barcode", &mc_unstable_child_barcode, &b_mc_unstable_child_barcode);
   fChain->SetBranchAddress("mc_unstable_begVtx_x", &mc_unstable_begVtx_x, &b_mc_unstable_begVtx_x);
   fChain->SetBranchAddress("mc_unstable_begVtx_y", &mc_unstable_begVtx_y, &b_mc_unstable_begVtx_y);
   fChain->SetBranchAddress("mc_unstable_begVtx_z", &mc_unstable_begVtx_z, &b_mc_unstable_begVtx_z);
   fChain->SetBranchAddress("mc_unstable_begVtx_barcode", &mc_unstable_begVtx_barcode, &b_mc_unstable_begVtx_barcode);
   fChain->SetBranchAddress("mc_unstable_endVtx_x", &mc_unstable_endVtx_x, &b_mc_unstable_endVtx_x);
   fChain->SetBranchAddress("mc_unstable_endVtx_y", &mc_unstable_endVtx_y, &b_mc_unstable_endVtx_y);
   fChain->SetBranchAddress("mc_unstable_endVtx_z", &mc_unstable_endVtx_z, &b_mc_unstable_endVtx_z);
   fChain->SetBranchAddress("mc_unstable_endVtx_barcode", &mc_unstable_endVtx_barcode, &b_mc_unstable_endVtx_barcode);
   //Notify();
}

Bool_t reader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void reader::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t reader::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef reader_cxx
