#ifndef TruthBranch_h
#define TruthBranch_h 
#define MAXTRUTH 100000

#ifndef BranchBase_h
#include "BranchBase.h"
#endif

#include "TLorentzVector.h"
#include "TTree.h"

#include <vector>

class TruthBranch : public BranchBase{
	public:

	TruthBranch();
	~TruthBranch(){}

	void Fill_Truth_Branches();
	void Set_Truth_Branches(TTree *MyTree);
	int  countTruth(int pdg);
	std::vector<float> jetCorrelation(int ijet, int pdg);

	private:
	Int_t		mc_mu_n;
	Float_t		mc_mu_gen_E[MAXTRUTH];
	Float_t		mc_mu_gen_pt[MAXTRUTH];
	Float_t		mc_mu_gen_eta[MAXTRUTH];
	Float_t		mc_mu_gen_phi[MAXTRUTH];
	Int_t		mc_mu_gen_type[MAXTRUTH];
	Int_t		mc_mu_gen_status[MAXTRUTH];
	Int_t		mc_mu_gen_barcode[MAXTRUTH];
	Int_t		mc_mu_gen_mothertype[MAXTRUTH];
	Int_t		mc_mu_gen_motherbarcode[MAXTRUTH];
	Float_t		mc_mu_charge[MAXTRUTH];

	Int_t		mc_nu_n;
	Float_t		mc_nu_gen_E[MAXTRUTH];
	Float_t		mc_nu_gen_pt[MAXTRUTH];
	Float_t		mc_nu_gen_eta[MAXTRUTH];
	Float_t		mc_nu_gen_phi[MAXTRUTH];
	Int_t		mc_nu_gen_type[MAXTRUTH];
	Int_t		mc_nu_gen_status[MAXTRUTH];
	Int_t		mc_nu_gen_barcode[MAXTRUTH];
	Int_t		mc_nu_gen_mothertype[MAXTRUTH];
	Int_t		mc_nu_gen_motherbarcode[MAXTRUTH];
	Float_t		mc_nu_charge[MAXTRUTH];

	Float_t		mc_gen_WbosonMass;
	Float_t		mc_gen_WbosonPt;
	Float_t		mc_gen_WbosonPhi;
	Float_t		mc_gen_WbosonRapidity;
	Float_t		mc_gen_WbosonPseudoRapidity;

	Int_t		mc_gamma_n;
	Float_t		mc_gamma_gen_E[MAXTRUTH];
	Float_t		mc_gamma_gen_pt[MAXTRUTH];
	Float_t		mc_gamma_gen_eta[MAXTRUTH];
	Float_t		mc_gamma_gen_phi[MAXTRUTH];
	Int_t		mc_gamma_gen_type[MAXTRUTH];
	Int_t		mc_gamma_gen_status[MAXTRUTH];
	Int_t		mc_gamma_gen_barcode[MAXTRUTH];
	Int_t		mc_gamma_gen_mothertype[MAXTRUTH];
	Int_t		mc_gamma_gen_motherbarcode[MAXTRUTH];
	Float_t		mc_gamma_charge[MAXTRUTH];

	std::vector<std::vector<float> > *eljetDeltaR;
	std::vector<std::vector<float> > *gammajetDeltaR;

	};
#endif

