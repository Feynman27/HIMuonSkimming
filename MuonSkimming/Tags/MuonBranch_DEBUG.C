#include "MuonBranch.h"

////////////////////////////////////
///DiMuonSelector
////////////////////////////////////

MuonBranch::MuonBranch(){
	
	Mytrig_EF_trigmuonef_track_MS_hasMS = 0;
	Mytrig_EF_trigmuonef_track_MS_phi = 0;
	Mytrig_EF_trigmuonef_track_MS_eta = 0;
	Vecsinglemuid_massCBOS = 0 ;
	IDprobe = 0;
	MSprobe = 0;
}

int MuonBranch::SelectMuon(int i) {
  int j=0;
  if( !mu_muid_isCombinedMuon->at(i) ) return j;
  j++;
  if( mu_muid_pt->at(i)/1000.<3. ) return j;
  j++;
  if( mu_muid_nPixHits->at(i)<1 ) return j;
  j++;
  if( mu_muid_nBLHits->at(i)<1 ) return j;
  j++;
  //if( mu_muid_nSCTHits->at(i)<6 ) return j;
  if( mu_muid_nSCTHits->at(i)<7 ) return j; //yujiao hf
  j++;
  if( (mu_muid_nPixHoles->at(i)+mu_muid_nSCTHoles->at(i))>1 ) return j;
  j++;
  /*if( (mu_muid_nMDTHits->at(i)+mu_muid_nCSCEtaHits->at(i))<3) return j; //Z group
  j++;*/
  /*if ( (mu_muid_nMDTHoles->at(i)+mu_muid_nCSCEtaHoles->at(i))>5 ) return j;
  j++;*/
  if( fabs(mu_muid_id_d0_exPV->at(i))>5. ) return j; //Z group definition
  //if( fabs(mu_muid_id_d0_exPV->at(i))>10. ) return j;
  j++;
  if( fabs(mu_muid_id_z0_exPV->at(i))>5. ) return j; //Z group definition
  //if( fabs(mu_muid_id_z0_exPV->at(i))>10. ) return j;
  j++;
  if( fabs(1./mu_muid_id_qoverp->at(i)/1000.)<3. ) return j; //pT used for MCP
  j++;
  //if( fabs(1./mu_muid_me_qoverp->at(i)/1000.)<0.1 ) return j; //yujiao hf
  if( !(fabs(1./mu_muid_me_qoverp->at(i)/1000.)>0.) ) return j;
  j++;
  if( fabs(mu_muid_eta->at(i))>2.5 ) return j;
  j++;
  if( (mu_muid_matchchi2->at(i)/mu_muid_matchndof->at(i))>10 ) return j;
  j++;
  return j;
}


//----------------------------------------------------------------------

void MuonBranch::Set_Muon_Branches( TTree *myTree)
{
 myTree->Branch("mu_muid_n",		&Mymu_muid_n,	"mu_muid_n/I");
 myTree->Branch("mu_muid_pt",	        &Mymu_muid_pt,	"mu_muid_pt[mu_muid_n]/F");
 myTree->Branch("isGoodMuon",		&isGoodMuon,	"isGoodMuon[mu_muid_n]/I");
}

  
//----------------------------------------------------------------------

void MuonBranch::Fill_Muon_Branches(){

   Mymu_muid_n=mu_muid_n; 
   for(int i=0;i<mu_muid_n;i++){
      Mymu_muid_pt[i]			=      mu_muid_pt->at(i)/1000.;						     
      isGoodMuon[i]                     =        SelectMuon(i);
}
}
///eof
