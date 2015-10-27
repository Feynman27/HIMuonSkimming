#ifndef TrigGlobalBranch_h
#define TrigGlobalBranch_h

#define min_pt 500
#define MAXTRK 100000
#define ncent 5
#define missMomBins 9

#include <vector>
#ifdef __MAKECINT__
#pragma link C++ class std::vector < std::vector<float> >+;   
#pragma link C++ class std::vector < std::vector<int> >+;   
#endif
#include <string>
#include <cstdio>


#ifndef BranchBase_h
#include "BranchBase.h"
#endif

#include "TVector3.h"
#include "TTree.h"
#include "TH1F.h"


class TrigGlobalBranch : public BranchBase {

public:
	TrigGlobalBranch();
	~TrigGlobalBranch();

	void 		Set_Trig_and_Global_Branches(TTree *MyTree);
	void 		Fill_Trig_and_Global_Branches();
	float 		Theta(float nu_pz, float nu_px, float nu_py, float nu_pt);
	float 		Eta(float nu_theta);
	float		AssignCentrality(float fcal_Et,bool isHI,bool isHIp);
	int		indexCentrality(float centrality);
	TVector3 	MissMom(float trkThresh);
	int		InitMissMomHistos();
	void		FillMissMomHistos();

//protected:
	
/*   Int_t      hasHiPtMuon;           //Mine
   Float_t   Fcal_Et;               
   TLorentzVector  pTmissID_nocuts;              //Mine
   Float_t   nu_pt_nocuts;                 //Mine
   Float_t   nu_phi_nocuts;                //Mine
*/
private:
        
	static const int N_L1_TRIGS_TBP;
	static const int N_L1_TRIGS;
	static const int N_EF_TRIGS;
	static const int N_EF_TRIGS_pPb;
   	static int    L1_Trigs_TBP[15];
   	static const unsigned int L1_Trigs_TBP_id[15];
   	static const std::string L1_Trig_TBP_Names    [15];
  	static int    L1_Trigs[15];
   	static const unsigned int L1_Trigs_id[15];
   	static const std::string L1_Trig_Names[15];
 	static int EF_Trigs[36];
 	static const  unsigned int EF_Trigs_id[36];
 	static const  std::string EF_Trig_Names    [36];

	//pPb
	static int    L1_Trigs_TBP_pPb[15];
   	static const unsigned int L1_Trigs_TBP_id_pPb[15];
   	static const std::string L1_Trig_TBP_Names_pPb    [15];
  	static int    L1_Trigs_pPb[15];
   	static const unsigned int L1_Trigs_id_pPb[15];
   	static const std::string L1_Trig_Names_pPb[15];
 	static int EF_Trigs_pPb[25];
 	static const  unsigned int EF_Trigs_id_pPb[25];
 	static const  std::string EF_Trig_Names_pPb[25];


	//static const int ncent;
	//static const int missMomBins;
   Float_t   Myvx_x,Myvx_y;
   Float_t   Myvx_z;
   Float_t   Psi_Et_N,Psi_Et_P,Psi_E_N,Psi_E_P;
   Float_t  Centrality;            

	char chMissPt[50];
	char chMissPx[50];
	char chMissPy[50];
	char chMissPtCent[50];
	char chMissPxCent[50];
	char chMissPyCent[50];

	int Mytrk_n;
	int trkCounter;

	/*std::vector<TH1F*> hMissPt;
	std::vector<TH1F*> hMissPx;
	std::vector<TH1F*> hMissPy;
	std::vector<std::vector<TH1F*> > hMissPtCent;
	std::vector<std::vector<TH1F*> > hMissPxCent;
	std::vector<std::vector<TH1F*> > hMissPyCent;
	*/
	
 	TH1F* hMissPt[9];
	TH1F* hMissPx[9];
	TH1F* hMissPy[9];
	TH1F* hMissPtCent[9][5];
	TH1F* hMissPxCent[9][5];
	TH1F* hMissPyCent[9][5];


   TVector3  vSum;

   Float_t   nu_pt500;
   Float_t   nu_px500;
   Float_t   nu_py500;
   Float_t   nu_pz500;
   Float_t   nu_phi500;
   Float_t   nu_theta500;
   Float_t   nu_eta500;
   TVector3  lvSum500;

   Float_t   nu_pt1000;
   Float_t   nu_px1000;
   Float_t   nu_py1000;
   Float_t   nu_pz1000;
   Float_t   nu_phi1000;
   Float_t   nu_theta1000;
   Float_t   nu_eta1000;
   TVector3  lvSum1000;

   Float_t   nu_pt3000;
   Float_t   nu_px3000;
   Float_t   nu_py3000;
   Float_t   nu_pz3000;
   Float_t   nu_phi3000;
   Float_t   nu_theta3000;
   Float_t   nu_eta3000;
   TVector3  lvSum3000;

   Float_t   nu_pt4000;
   Float_t   nu_px4000;
   Float_t   nu_py4000;
   Float_t   nu_pz4000;
   Float_t   nu_phi4000;
   Float_t   nu_theta4000;
   Float_t   nu_eta4000;
   TVector3  lvSum4000;

   Float_t   nu_pt5000;
   Float_t   nu_px5000;
   Float_t   nu_py5000;
   Float_t   nu_pz5000;
   Float_t   nu_phi5000;
   Float_t   nu_theta5000;
   Float_t   nu_eta5000;
   TVector3  lvSum5000;

   Float_t   nu_pt6000;
   Float_t   nu_px6000;
   Float_t   nu_py6000;
   Float_t   nu_pz6000;
   Float_t   nu_phi6000;
   Float_t   nu_theta6000;
   Float_t   nu_eta6000;
   TVector3  lvSum6000;

   Float_t   nu_pt7000;
   Float_t   nu_px7000;
   Float_t   nu_py7000;
   Float_t   nu_pz7000;
   Float_t   nu_phi7000;
   Float_t   nu_theta7000;
   Float_t   nu_eta7000;
   TVector3  lvSum7000;

   Float_t   nu_pt10000;
   Float_t   nu_px10000;
   Float_t   nu_py10000;
   Float_t   nu_pz10000;
   Float_t   nu_phi10000;
   Float_t   nu_theta10000;
   Float_t   nu_eta10000;
   TVector3  lvSum10000;

   Float_t   nu_pt15000;
   Float_t   nu_px15000;
   Float_t   nu_py15000;
   Float_t   nu_pz15000;
   Float_t   nu_phi15000;
   Float_t   nu_theta15000;
   Float_t   nu_eta15000;
   TVector3  lvSum15000;

   TVector3  lvTrk;

   };
#endif
