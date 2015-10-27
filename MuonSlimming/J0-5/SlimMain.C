///////////////////////////////////////////////////////////////////
//This code produces an executable that		 		///
//takes MC,MB,or HP as arguments.	 			///
//The file path is directed to /tmp/tbalestr/<DIR>,		///
//where <DIR> is either MonteCarlo, HardProbes, or MinimumBias. ///
//To change file path, see MuonSlim src file			///
///////////////////////////////////////////////////////////////////


#include <iostream>
#include <cmath>

#include "TChain.h"
#include "TTree.h"
#include "TString.h"
#include "TFile.h"
#include "TH1.h"
#include "TMath.h"

#include "TDirectory.h"
#include "TSystem.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include <string>
#include <vector>

#include "MuonSlim.h"

#ifdef __MAKECINT__
#pragma link C++ class std::vector < std::vector<int> >+;   
#pragma link C++ class std::vector < std::vector<float> >+;
#endif

// Grid Reflex/Cintex problem
#include "Cintex/Cintex.h"


int main(){

 //included for grid running
  ROOT::Cintex::Cintex::Enable();

  //pt smearing for systematics
  bool doMSLOW = false;
  bool doMSUP = false;
  bool doIDLOW = false;
  bool doIDUP = false;

  //get the run list 
  TString inputFiles="input.txt";

  MuonSlim* mu = new MuonSlim;

  std::cout << " Opening J0-5 Pythia in Data Monte Carlo dataset. " << std::endl;
  mu->SetBranches();

  int result = -1;
  result = mu->SlimHISingleMuon(inputFiles,doMSLOW,doMSUP,doIDLOW,doIDUP);
  if(result!=0) {
	std::cout << "Invalid pathname to datasets. Aborting. " << std::endl;
	exit(0);
  }

     return 0;
}
