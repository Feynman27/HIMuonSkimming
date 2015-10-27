#define BranchBase_cxx

#include "BranchBase.h"
//#include "TrackFCalBranch.h"

#include "TH2.h"
#include <TStyle.h>
#include <TCanvas.h>
#include <stdio.h>



#include "isGoodEvent.C"
#include "isGoodEvent_pPb.C"
/*const int BranchBase::min_pt = 500;
const int BranchBase::MAXTRK = 100000;
const int BranchBase::MAXMUONS = 30;
const int BranchBase::MAXMATCH = 30;
const int BranchBase::MAXJETS = 500;
*/

//#include "MuonBranch.h"
//#include "TrigGlobalBranch.h"

TTree  *BranchBase::fChain = 0;
#include "InitializeVariables.h"
//int BranchBase::mu_muid_n = 0;

int BranchBase::TurnOnBranches()
{
  if (fChain == 0) return 10;


//-----------------------------------------------------------------------------------------------------------------------------------------
  fChain->SetBranchStatus("*",0);

  fChain->SetBranchStatus("RunNumber"                    , 1);
  fChain->SetBranchStatus("bcid"                         , 1);
  fChain->SetBranchStatus("lbn"                          , 1);
  fChain->SetBranchStatus("EventNumber"                  , 1);
  fChain->SetBranchStatus("vx_*"                         , 1);
  if(isData){
  fChain->SetBranchStatus("mbtime_timeA"                 , 1);
  fChain->SetBranchStatus("mbtime_timeC"                 , 1);
  fChain->SetBranchStatus("mbtime_countA"                , 1);
  fChain->SetBranchStatus("mbtime_countC"                , 1);
  }
  fChain->SetBranchStatus("cccEt_Et_Eh_FCal"             , 1);
  fChain->SetBranchStatus("cccEt_p_Eh_FCal"             , 1);

  fChain->SetBranchStatus("trig_L1_TAV"           , 1);
  fChain->SetBranchStatus("trig_L1_TBP"           , 1);
  //fChain->SetBranchStatus("trig_L1_TAP"           , 1);
  fChain->SetBranchStatus("trig_EF_passedPhysics" , 1); 
  if(!isPP&&!isPbP){
  fChain->SetBranchStatus("antikt2HIItrEM_*", 1);
  fChain->SetBranchStatus("antikt3HIItrEM_*", 1);
  	if(isMC)fChain->SetBranchStatus("antikt2Truth_*", 1);
  fChain->SetBranchStatus("HIFlow_PsiEtHICaloUtilLayers" , 1);
  fChain->SetBranchStatus("HIFlow_PsiHICaloUtilLayers"   , 1);
  }
  if(!isPbP){
  fChain->SetBranchStatus("trk_theta_wrtPV"     ,1);
  fChain->SetBranchStatus("trk_cov_d0_wrtPV"    ,1);
  fChain->SetBranchStatus("trk_cov_z0_wrtPV"    ,1);
  fChain->SetBranchStatus("trk_cov_theta_wrtPV" ,1);
  fChain->SetBranchStatus("trk_qoverp_wrtPV"    ,1);
  }
  if(isPP||isPbP){
    fChain->SetBranchStatus("AntiKt4TopoEM_*", 1);
    fChain->SetBranchStatus("MET_RefFinal*", 1);
  	if(isPbP){
  	fChain->SetBranchStatus("trk_theta"     ,1);
  	fChain->SetBranchStatus("trk_err_d0_wrtPV"     ,1);
  	fChain->SetBranchStatus("trk_err_z0_wrtPV"     ,1);
  	fChain->SetBranchStatus("trk_err_theta_wrtPV"     ,1);
  	fChain->SetBranchStatus("trk_cov_z0_theta"     ,1);
  	fChain->SetBranchStatus("trk_cov_z0_theta_wrtPV"     ,1);
  	fChain->SetBranchStatus("trk_qoverp"     ,1);
  	fChain->SetBranchStatus("trk_err_phi_wrtPV"     ,1);
  	fChain->SetBranchStatus("trk_err_qoverp_wrtPV"     ,1);

	}
  }
  fChain->SetBranchStatus("trig_EF_trigmuonef_*", 1);

  //fChain->SetBranchStatus("trig_L2_passedPhysics",1);

  fChain->SetBranchStatus("trk_n"               ,1);
  fChain->SetBranchStatus("trk_pt"              ,1);
  fChain->SetBranchStatus("trk_eta"             ,1);
  fChain->SetBranchStatus("trk_chi2"            ,1);
  fChain->SetBranchStatus("trk_ndof"            ,1);
  fChain->SetBranchStatus("trk_nPixHits"        ,1);
  fChain->SetBranchStatus("trk_nPixHoles"       ,1);
  fChain->SetBranchStatus("trk_nSCTHits"        ,1);
  fChain->SetBranchStatus("trk_nSCTHoles"       ,1);
  fChain->SetBranchStatus("trk_d0_wrtPV"        ,1);
  fChain->SetBranchStatus("trk_z0_wrtPV"        ,1);
  fChain->SetBranchStatus("trk_phi_wrtPV"       ,1);
  fChain->SetBranchStatus("trk_nBLHits"         ,1);
  fChain->SetBranchStatus("trk_expectBLayerHit" ,1);

  fChain->SetBranchStatus("TotalEt_*",1); 


  fChain->SetBranchStatus("mu_*"  ,1);
  fChain->SetBranchStatus("muid_*",1);
  if(isMC) fChain->SetBranchStatus("mc_*",1);
  
//-----------------------------------------------------------------------------------------------------------------------------------------


  Long64_t nentries = fChain->GetEntries();
  std::cout<<"NENTRIES="<<nentries<<std::endl;
  if(nentries==0){std::cout<<" ZERO ENTRIES IN PROGRAM. OUTPUT Wont be produced"<<std::endl;return 100;}

  return 0;


}

Bool_t BranchBase::EventCuts() {

    int event = 0;
    int isGoodEventFlag = 0;
   
    if(isPbP&&isData) {
	isGoodEventFlag = isGoodEvent_pPb(RunNumber,lbn,bcid);
    }
    else if(isData) {
    	isGoodEventFlag = isGoodEvent(RunNumber,lbn,bcid);
    }

    // cleaning
    if(isData&&!isPbP){
    	if(  
		isGoodEventFlag ==1 && 
		
		//Good vertex
		(vx_n > 1)  &&
		(vx_nTracks->at(0) > 2) && 

		//mbts timing
		//    if ( (mbtime_timeA == 75) || (mbtime_timeC == 75)) continue;
		//    if ( (mbtime_timeA ==-75) || (mbtime_timeC ==-75)) continue;
		//    if ( (mbtime_timeA == 0 ) || (mbtime_timeC == 0 ))  continue;

		((fabs(mbtime_timeA-mbtime_timeC) < 3)) 
		
     		) event = 1;    
     }

     else if(isData&&isPbP){
    	if(  
		isGoodEventFlag ==1 && 
		
		//Good vertex
		(vx_n > 1)  &&
		(vx_nTracks->at(0) > 2) && 

		//mbts timing
		mbtime_timeA != 0  && mbtime_timeC != 0 && 

		((fabs(mbtime_timeA-mbtime_timeC) < 10)) 
		
     		) event = 1;    
     }
     else if(isMC){
	    	if(  
    
		//Good vertex
		(vx_n > 1)  &&
		(vx_nTracks->at(0) > 2)  

     		) event = 1;    
 
     }

     else{ 
     	std::cout << "Dataset must be flagged as MC or DATA. Abort " << std::endl;
	exit(0);
     }

    //only Pb-going side used (FCal A)
    if(isPbP) Fcal_Et=(cccEt_p_Eh_FCal->at(0)+cccEt_p_Eh_FCal->at(1)+cccEt_p_Eh_FCal->at(2))/1000000.0;  //Fcal energy in TeV
    //if(isPbP) Fcal_Et=((*cccEt_p_Eh_FCal)[0]+(*cccEt_p_Eh_FCal)[1]+(*cccEt_p_Eh_FCal)[2])/1000000.0;  //Fcal energy in TeV
    else Fcal_Et=(cccEt_Et_Eh_FCal->at(0)+cccEt_Et_Eh_FCal->at(1)+cccEt_Et_Eh_FCal->at(2))/1000000.0;  //Fcal energy in TeV

    hasHiPtMuon=0;

    //additional missPt and phi with 
    // global vx parameters but w/o trk cuts
    for(int ivx = 0; ivx<1; ivx++){
        pTmissID_nocuts.SetPxPyPzE(vx_px->at(ivx),vx_py->at(ivx),vx_pz->at(ivx),vx_E->at(ivx));
        nu_pt_nocuts = pTmissID_nocuts.Pt();
        nu_phi_nocuts = pTmissID_nocuts.Phi();
    } //PV

    return event;

}


Bool_t BranchBase::Notify() {return kTRUE;}

void BranchBase::Show(Long64_t entry)
{
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t BranchBase::Cut(Long64_t entry){   return 1;}


BranchBase::BranchBase(TString input_files)
{
	TString sMC = "MC";
	TString sMC_pPb = "MC_pPb";
	TString sDataHI = "DATA_hi";
	TString sDataPP = "DATA_pp";
	TString sDataPbP = "DATA_pPb";
	TString runType = "";

  	TChain * chain = new TChain("HeavyIonD3PD","");

  	//bool dataType = openFromFileList(input_files, chain);
  	runType = openFromFileList(input_files, chain);
	//if(dataType) runType = "DATA";
	//else runType = "MC";

	if (runType.CompareTo(sMC)==0) {
		isMC = true;
		std::cout << "Skimming Monte Carlo." << std::endl;
		if(runType.CompareTo(sMC_pPb)==0) {
			isPbP   = true;
			std::cout << "p+Pb sample." << std::endl;
		}
	}
	else if (runType.CompareTo(sDataHI)==0) {
		isData = true;
		std::cout << "Skimming Heavy Ion Data." << std::endl;
	}
	else if (runType.CompareTo(sDataPP)==0) {
		isData = true;
		isPP   = true;
		std::cout << "Skimming pp @2.76TeV Data." << std::endl;
	}
	else if (runType.CompareTo(sDataPbP)==0) {
		isData = true;
		isPbP   = true;
		std::cout << "Skimming p+Pb Data." << std::endl;
	}
	else {
		std::cout << "Must choose DATA or MC. Abort." << std::endl;
		exit(0);
	 }	

	#include "SetBranchAddress.h"
}
BranchBase::~BranchBase(){
	/*delete mu;
	delete glob;
	delete chain;
	*/
}
Int_t BranchBase::GetEntry(Long64_t entry)
{
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t BranchBase::LoadTree(Long64_t entry)
{
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

