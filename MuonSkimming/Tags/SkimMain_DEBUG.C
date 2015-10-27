#include "BranchBase.h"
#include "MuonBranch.h"
#include "TrigGlobalBranch.h"

#include <iostream>

#include "TTree.h"
#include "TFile.h"

// Grid Reflex/Cintex problem
#include "Cintex/Cintex.h" 

int main() {
	
		//get the run list ,set branch addresses and
	TString inputFiles="input.txt";

	BranchBase *t = new BranchBase(inputFiles);

	//get the tree holding the DPD variables
	TTree* itsTree = t->fChain;
	  
	//output file and tree
	TFile *outfile   = new TFile("skimmed.root","recreate");
	TTree *MyTree    = new TTree("data","data");

	//in the output tree
	MuonBranch *mu = new MuonBranch;
	mu->Set_Muon_Branches(MyTree);

	//Set the global/trigger branches to be stored
	//in the output tree
	TrigGlobalBranch* glob = new TrigGlobalBranch;
  	glob->Set_Trig_and_Global_Branches(MyTree);

	//set branch status and make sure
	//entries!=0
	int result = t->TurnOnBranches();

	if (result!=0) {

		std::cout << "Exiting program. " << std::endl; 
    		system("rm skimmed.root");

		exit(0);
	}

	int nentries = itsTree->GetEntries();
	if (nentries==0) {

		std::cout << "Zero entries in itsTree. Exiting program. " << std::endl;
		exit(0);
	}

	//event loop
	for (Long64_t jentry=0; jentry<nentries;jentry++){
		
		//Long64_t ientry = t->fChain->LoadTree(jentry);
		//if(jentry==1000) break; //temp hack
		Long64_t ientry = itsTree->LoadTree(jentry);
		if (ientry < 0) break;

		itsTree->GetEntry(jentry); //  nbytes += nb;
		//t->fChain->GetEntry(jentry); //  nbytes += nb;
		//std::cout << "muons:" << mu->mu_muid_n <<std::endl;
    		
		if(jentry%1000==0) printf("running event %5dk\n",(int) jentry/1000);

		bool event = t->EventCuts();
		if(!event) continue;

    			mu->Fill_Muon_Branches();
    			glob->Fill_Trig_and_Global_Branches();
    			//Fill_FCal_Branches           ();
    			//Fill_Track_Branches          (); 

    		MyTree->Fill();

	} //event loop

	outfile->cd();
  	outfile->Write();
  	outfile -> Close();
	
	delete mu;
	delete glob;
	delete t;
  	return 0;

}
