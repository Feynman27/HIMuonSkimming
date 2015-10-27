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

  MuonSlim* mu = new MuonSlim;

  ////////////////////////
  //Choose stream here////
  ////////////////////////
  bool isMB = false;
  bool isHP = true;

  //get the run list 
  TString inputFiles="input.txt";

  if(isMB) std::cout << "Opening minimum bias dataset." << std::endl;
  else if(isHP) std::cout << "Opening hardprobes dataset." << std::endl;
  else {
	std::cout << "Error. Must specify MB or HP." << std::endl;
	exit(0) ;
  }

  mu->SetBranches();
  int result = mu->SlimHISingleMuon(inputFiles,isMB,isHP);
  if(result!=0) {
	std::cout << "Invalid pathname to datasets. Aborting. " << std::endl;
	exit(0);
  }

     return 0;
}
