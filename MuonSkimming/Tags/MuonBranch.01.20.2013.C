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

int MuonBranch::isGoodDiMuon(int i, int j){
    int value = 0;

    if (mu_muid_isCombinedMuon->at(i) && mu_muid_isCombinedMuon->at(j))     ++value; else return value; // 1
    if (mu_muid_pt->at(i)/1000.   >3. && mu_muid_pt->at(j)/1000.   >3.)     ++value; else return value; // 2

    // recover tracks which were cut out by trt cut
    if (( mu_muid_isSegmentTaggedMuon->at(i) ||
       ( mu_muid_nPixHits->at(i)>0 && mu_muid_nSCTHits->at(i)>5)) && 
       ( mu_muid_isSegmentTaggedMuon->at(j) ||
       ( mu_muid_nPixHits->at(j)>0 && mu_muid_nSCTHits->at(j)>5))) ++value; else return value; //3

    if (((mu_muid_expectBLayerHit->at(i)==0) || (mu_muid_nBLHits->at(i)>0)) && ( (mu_muid_expectBLayerHit->at(j)==0) || (mu_muid_nBLHits->at(j)>0))) ++value; else return value; //4
    if (((mu_muid_nPixHoles->at(i)+mu_muid_nSCTHoles->at(i))<2) && ((mu_muid_nPixHoles->at(j)+mu_muid_nSCTHoles->at(j))<2))             ++value; else return value; //5 

    if ((fabs(mu_muid_id_d0_exPV->at(i)/sqrt(fabs(mu_muid_id_cov_d0_exPV->at(i)))) <10.) && (fabs(mu_muid_id_d0_exPV->at(j)/sqrt(fabs(mu_muid_id_cov_d0_exPV->at(j)))) <10.)) ++value; else return value; //6
    if ( (fabs(mu_muid_id_z0_exPV->at(i))<10.)&& (fabs(mu_muid_id_z0_exPV->at(j))<10.) )                                            ++value; else return value; //7

    float charge1 = mu_muid_charge->at(i);
    float charge2 = mu_muid_charge->at(j);
    float qop_sa1 = mu_muid_me_qoverp_exPV->at(i);
    float qop_sa2 = mu_muid_me_qoverp_exPV->at(j);
    float qop_id1 = mu_muid_id_qoverp_exPV->at(i);
    float qop_id2 = mu_muid_id_qoverp_exPV->at(j);
    if(charge1 == 0 || qop_sa1 ==0 || qop_id1 == 0 || charge2 == 0 || qop_sa2 ==0 || qop_id2 == 0 ) return value;

    if ((charge1/qop_sa1 >0.0) && (charge2/qop_sa2 >0.0))++value; else return value; //  8
    if ((charge1/qop_id1 >3.0)&&(charge2/qop_id2 >3.0)) ++value; else return value; //  9
    if ((qop_sa1*qop_id1 >0.0)&&(qop_sa2*qop_id2 >0.0)) ++value; else return value; // 10

    if ( (fabs(muid_scatSignificance->at(i))<4.0) && (fabs(muid_scatSignificance->at(j))<4.0) ) ++value; else return value; // 11
    if  ((fabs((qop_sa1-qop_id1)/qop_sa1) <0.5)&& (fabs((qop_sa2-qop_id2)/qop_sa2) <0.5)) ++value; else return value; // 12

    return value;
}

/////////////////////////////////////
///Single Muon Selector
////////////////////////////////////
int MuonBranch::isGood_Ricard( int i){
    int value = 0;

    if (mu_muid_isCombinedMuon->at(i))     ++value; else return value; // 1
    if (mu_muid_pt->at(i)/1000.   >3.)     ++value; else return value; // 2

    // recover tracks which were cut out by trt cut
    if ( mu_muid_isSegmentTaggedMuon->at(i) ||
       ( mu_muid_nPixHits->at(i)>0 && mu_muid_nSCTHits->at(i)>5)) ++value; else return value; //3

    if ((mu_muid_expectBLayerHit->at(i)==0) || (mu_muid_nBLHits->at(i)>0)) ++value; else return value; //4
    if ((mu_muid_nPixHoles->at(i)+mu_muid_nSCTHoles->at(i))<2)             ++value; else return value; //5 

    if (fabs(mu_muid_id_d0_exPV->at(i)/sqrt(fabs(mu_muid_id_cov_d0_exPV->at(i)))) <10.) ++value; else return value; //6
    if (fabs(mu_muid_id_z0_exPV->at(i))<10.)                                             ++value; else return value; //7

    float charge=mu_muid_charge->at(i);
    float qop_sa= mu_muid_me_qoverp_exPV->at(i);
    float qop_id= mu_muid_id_qoverp_exPV->at(i);
    if(charge==0 || qop_sa==0 || qop_id==0) return value;

    if (charge/qop_sa >0.0) ++value; else return value; //  8
    if (charge/qop_id >3.0) ++value; else return value; //  9
    if (qop_sa*qop_id >0.0) ++value; else return value; // 10

    if (fabs(muid_scatSignificance->at(i))<4.0) ++value; else return value; // 11
    if (fabs((qop_sa-qop_id)/qop_sa)      <0.5) ++value; else return value; // 12

    return value;
}

//----------------------------------------------------------------------

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
 
 //const int index = TMath::Binomial(mu_muid_n,2);
 myTree->Branch("mu_muid_n",		&Mymu_muid_n,	"mu_muid_n/I");
 //truth 
 if(isMC){
 myTree->Branch("mu_muid_truth_dr",     &Mymu_muid_truth_dr, "mu_muid_truth_dr[mu_muid_n]/F");
 myTree->Branch("mu_muid_truth_E",      &Mymu_muid_truth_E, "mu_muid_truth_E[mu_muid_n]/F");
 myTree->Branch("mu_muid_truth_pt",     &Mymu_muid_truth_pt, "mu_muid_truth_pt[mu_muid_n]/F");
 myTree->Branch("mu_muid_truth_eta",    &Mymu_muid_truth_eta, "mu_muid_truth_eta[mu_muid_n]/F");
 myTree->Branch("mu_muid_truth_phi",    &Mymu_muid_truth_phi, "mu_muid_truth_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_truth_type",   &Mymu_muid_truth_type, "mu_muid_truth_type[mu_muid_n]/I");
 myTree->Branch("mu_muid_truth_status", &Mymu_muid_truth_status, "mu_muid_truth_status[mu_muid_n]/I");
 myTree->Branch("mu_muid_truth_barcode",        &Mymu_muid_truth_barcode, "mu_muid_truth_barcode[mu_muid_n]/I");
 myTree->Branch("mu_muid_truth_mothertype",     &Mymu_muid_truth_mothertype, "mu_muid_truth_mothertype[mu_muid_n]/I");
 myTree->Branch("mu_muid_truth_motherbarcode",  &Mymu_muid_truth_motherbarcode, "mu_muid_truth_motherbarcode[mu_muid_n]/I");
 myTree->Branch("mu_muid_truth_matched",        &Mymu_muid_truth_matched, "mu_muid_truth_matched[mu_muid_n]/I");
 }
 myTree->Branch("muid_npairs",		&muid_npairs,	"muid_npairs/I");
 myTree->Branch("isGoodMuon",		&isGoodMuon,	"isGoodMuon[mu_muid_n]/I");
 myTree->Branch("isGoodMuon2",		&isGoodMuon2,	"isGoodMuon2[mu_muid_n]/I");
 myTree->Branch("isGoodDiMuonOS",	&isGoodDiMuonOS,"isGoodDiMuonOS[muid_npairs]/I");
 myTree->Branch("isGoodDiMuonSS",	&isGoodDiMuonSS,"isGoodDiMuonSS[muid_npairs]/I");
 myTree->Branch("dimuid_indexOS1",	&dimuid_indexOS1,"[muid_npairs]/I");
 myTree->Branch("dimuid_indexOS2",	&dimuid_indexOS2,"[muid_npairs]/I");
 myTree->Branch("dimuid_indexSS1",	&dimuid_indexSS1,"[muid_npairs]/I");
 myTree->Branch("dimuid_indexSS2",	&dimuid_indexSS2,"[muid_npairs]/I");
 myTree->Branch("mu_muid_E",		&Mymu_muid_E,	"mu_muid_E[mu_muid_n]/F");
 myTree->Branch("mu_muid_pt",	        &Mymu_muid_pt,	"mu_muid_pt[mu_muid_n]/F");
 myTree->Branch("mu_muid_m",		&Mymu_muid_m,	"mu_muid_m[mu_muid_n]/F");
 myTree->Branch("mu_muid_eta",	        &Mymu_muid_eta,	"mu_muid_eta[mu_muid_n]/F");
 myTree->Branch("mu_muid_phi",	        &Mymu_muid_phi,	"mu_muid_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_px",		&Mymu_muid_px,	"mu_muid_px[mu_muid_n]/F");
 myTree->Branch("mu_muid_py",		&Mymu_muid_py,	"mu_muid_py[mu_muid_n]/F");
 myTree->Branch("mu_muid_pz",		&Mymu_muid_pz,	"mu_muid_pz[mu_muid_n]/F");
 myTree->Branch("mu_muid_charge",	&Mymu_muid_charge,	"mu_muid_charge[mu_muid_n]/F");
 myTree->Branch("mu_muid_allauthor",	&Mymu_muid_allauthor,	"mu_muid_allauthor[mu_muid_n]/F");
 myTree->Branch("mu_muid_author",	&Mymu_muid_author,	"mu_muid_author[mu_muid_n]/I");
 myTree->Branch("mu_muid_beta",		&Mymu_muid_beta,	"mu_muid_beta[mu_muid_n]/F");
 myTree->Branch("mu_muid_isMuonLikelihood",	&Mymu_muid_isMuonLikelihood,	"mu_muid_isMuonLikelihood[mu_muid_n]/F");
 myTree->Branch("mu_muid_matchchi2",	&Mymu_muid_matchchi2,	"mu_muid_matchchi2[mu_muid_n]/F");
 myTree->Branch("mu_muid_matchndof",	&Mymu_muid_matchndof,	"mu_muid_matchndof[mu_muid_n]/I");
 myTree->Branch("mu_muid_etcone20",	&Mymu_muid_etcone20,	"mu_muid_etcone20[mu_muid_n]/F");
 myTree->Branch("mu_muid_etcone30",	&Mymu_muid_etcone30,	"mu_muid_etcone30[mu_muid_n]/F");
 myTree->Branch("mu_muid_etcone40",	&Mymu_muid_etcone40,	"mu_muid_etcone40[mu_muid_n]/F");
 
 myTree->Branch("mu_muid_nucone20",	&Mymu_muid_nucone20,	"mu_muid_nucone20[mu_muid_n]/F");
 myTree->Branch("mu_muid_nucone30",	&Mymu_muid_nucone30,	"mu_muid_nucone30[mu_muid_n]/F");
 myTree->Branch("mu_muid_nucone40",	&Mymu_muid_nucone40,	"mu_muid_nucone40[mu_muid_n]/F");
 myTree->Branch("mu_muid_ptcone20",	&Mymu_muid_ptcone20,	"mu_muid_ptcone20[mu_muid_n]/F");
 myTree->Branch("mu_muid_ptcone30",	&Mymu_muid_ptcone30,	"mu_muid_ptcone30[mu_muid_n]/F");
 myTree->Branch("mu_muid_ptcone40",	&Mymu_muid_ptcone40,	"mu_muid_ptcone40[mu_muid_n]/F");
 //ptcone calculated by hand
 myTree->Branch("totalMuPtCone20ID",    &totalMuPtCone20ID,     "totalMuPtCone20ID[mu_muid_n]/F");
 myTree->Branch("totalMuPtCone30ID",    &totalMuPtCone30ID,     "totalMuPtCone30ID[mu_muid_n]/F");

 myTree->Branch("mu_muid_energyLossPar",	&Mymu_muid_energyLossPar,	"mu_muid_energyLossPar[mu_muid_n]/F");
 myTree->Branch("mu_muid_energyLossErr",	&Mymu_muid_energyLossErr,	"mu_muid_energyLossErr[mu_muid_n]/F");
 myTree->Branch("mu_muid_etCore",	&Mymu_muid_etCore,	"mu_muid_etCore[mu_muid_n]/F");
 myTree->Branch("mu_muid_energyLossType",	&Mymu_muid_energyLossType,	"mu_muid_energyLossType[mu_muid_n]/F");
 myTree->Branch("mu_muid_caloMuonIdTag",	&Mymu_muid_caloMuonIdTag,	"mu_muid_caloMuonIdTag[mu_muid_n]/I");
 myTree->Branch("mu_muid_caloLRLikelihood",	&Mymu_muid_caloLRLikelihood,	"mu_muid_caloLRLikelihood[mu_muid_n]/F");
 myTree->Branch("mu_muid_bestMatch",	&Mymu_muid_bestMatch,	"mu_muid_bestMatch[mu_muid_n]/I");
 myTree->Branch("mu_muid_isStandAloneMuon",	&Mymu_muid_isStandAloneMuon,	"mu_muid_isStandAloneMuon[mu_muid_n]/I");
 myTree->Branch("mu_muid_isCombinedMuon",	&Mymu_muid_isCombinedMuon,	"mu_muid_isCombinedMuon[mu_muid_n]/I");
 myTree->Branch("mu_muid_isLowPtReconstructedMuon",&Mymu_muid_isLowPtReconstructedMuon,"mu_muid_isLowPtReconstructedMuon[mu_muid_n]/I");
 myTree->Branch("mu_muid_isSegmentTaggedMuon",	&Mymu_muid_isSegmentTaggedMuon,	"mu_muid_isSegmentTaggedMuon[mu_muid_n]/I");
 myTree->Branch("mu_muid_isCaloMuonId",	&Mymu_muid_isCaloMuonId,	"mu_muid_isCaloMuonId[mu_muid_n]/I");
 myTree->Branch("mu_muid_alsoFoundByLowPt",	&Mymu_muid_alsoFoundByLowPt,	"mu_muid_alsoFoundByLowPt[mu_muid_n]/I");
 myTree->Branch("mu_muid_alsoFoundByCaloMuonId",	&Mymu_muid_alsoFoundByCaloMuonId,	"mu_muid_alsoFoundByCaloMuonId[mu_muid_n]/I");
 myTree->Branch("mu_muid_loose",	&Mymu_muid_loose,	"mu_muid_loose[mu_muid_n]/F");


 //for trigger matching efficiency
 myTree->Branch("trig_EF_trigmuonef_n",	&Mytrig_EF_trigmuonef_n,"trig_EF_trigmuonef_n/I");
// myTree->Branch("trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50 ",	&Mytrig_EF_trigmuonef_EF_mu6_MSonly_L1TE50 ,	
//   "trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50[trig_EF_trigmuonef_n]/I");
// myTree->Branch("trig_EF_trigmuonef_EF_mu6_L1VTE50",	&Mytrig_EF_trigmuonef_EF_mu6_L1VTE50,	
//   "trig_EF_trigmuonef_EF_mu6_L1VTE50[trig_EF_trigmuonef_n]/I");
 myTree->Branch("trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50", &Mytrig_EF_trigmuonef_EF_mu4_MSonly_L1TE50, 
   "trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50[trig_EF_trigmuonef_n]/I");
 myTree->Branch("trig_EF_trigmuonef_EF_mu4_L1VTE50", &Mytrig_EF_trigmuonef_EF_mu4_L1VTE50, "trig_EF_trigmuonef_EF_mu4_L1VTE50[trig_EF_trigmuonef_n]/I");
 myTree->Branch("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC", &Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC, "trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC[trig_EF_trigmuonef_n]/I");
 myTree->Branch("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10", &Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10, "trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10[trig_EF_trigmuonef_n]/I");
 myTree->Branch("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20", &Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20, "trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20[trig_EF_trigmuonef_n]/I");
 myTree->Branch("trig_EF_trigmuonef_track_n", &Mytrig_EF_trigmuonef_track_n,"trig_EF_trigmuonef_track_n[trig_EF_trigmuonef_n]/I");
 myTree->Branch("trig_EF_trigmuonef_track_MS_hasMS","vector<vector<int> >", &Mytrig_EF_trigmuonef_track_MS_hasMS );
 myTree->Branch("trig_EF_trigmuonef_track_MS_phi","vector<vector<float> >", &Mytrig_EF_trigmuonef_track_MS_phi) ;
 myTree->Branch("trig_EF_trigmuonef_track_MS_eta","vector<vector<float> >", &Mytrig_EF_trigmuonef_track_MS_eta) ;



 myTree->Branch("mu_muid_medium",	&Mymu_muid_medium,	"mu_muid_medium[mu_muid_n]/I");
 myTree->Branch("mu_muid_tight",	&Mymu_muid_tight,	"mu_muid_tight[mu_muid_n]/I");
 myTree->Branch("mu_muid_d0_exPV",	&Mymu_muid_d0_exPV,	"mu_muid_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_z0_exPV",	&Mymu_muid_z0_exPV,	"mu_muid_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_phi_exPV",	&Mymu_muid_phi_exPV,	"mu_muid_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_theta_exPV",	&Mymu_muid_theta_exPV,	"mu_muid_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_qoverp_exPV",	&Mymu_muid_qoverp_exPV,	"mu_muid_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cb_d0_exPV",	&Mymu_muid_cb_d0_exPV,	"mu_muid_cb_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cb_z0_exPV",	&Mymu_muid_cb_z0_exPV,	"mu_muid_cb_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cb_phi_exPV",	&Mymu_muid_cb_phi_exPV,	"mu_muid_cb_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cb_theta_exPV",	&Mymu_muid_cb_theta_exPV,	"mu_muid_cb_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cb_qoverp_exPV",	&Mymu_muid_cb_qoverp_exPV,	"mu_muid_cb_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_d0_exPV",	&Mymu_muid_id_d0_exPV,	"mu_muid_id_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_z0_exPV",	&Mymu_muid_id_z0_exPV,	"mu_muid_id_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_phi_exPV",	&Mymu_muid_id_phi_exPV,	"mu_muid_id_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_theta_exPV",	&Mymu_muid_id_theta_exPV,	"mu_muid_id_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_qoverp_exPV",	&Mymu_muid_id_qoverp_exPV,	"mu_muid_id_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_d0_exPV",	&Mymu_muid_me_d0_exPV,	"mu_muid_me_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_z0_exPV",	&Mymu_muid_me_z0_exPV,	"mu_muid_me_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_phi_exPV",	&Mymu_muid_me_phi_exPV,	"mu_muid_me_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_theta_exPV",	&Mymu_muid_me_theta_exPV,	"mu_muid_me_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_qoverp_exPV",	&Mymu_muid_me_qoverp_exPV,	"mu_muid_me_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_d0_exPV",	&Mymu_muid_ie_d0_exPV,	"mu_muid_ie_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_z0_exPV",	&Mymu_muid_ie_z0_exPV,	"mu_muid_ie_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_phi_exPV",	&Mymu_muid_ie_phi_exPV,	"mu_muid_ie_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_theta_exPV",	&Mymu_muid_ie_theta_exPV,	"mu_muid_ie_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_qoverp_exPV",	&Mymu_muid_ie_qoverp_exPV,	"mu_muid_ie_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_d0_exPV",	&Mymu_muid_cov_d0_exPV,	"mu_muid_cov_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_z0_exPV",	&Mymu_muid_cov_z0_exPV,	"mu_muid_cov_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_phi_exPV",	&Mymu_muid_cov_phi_exPV,	"mu_muid_cov_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_theta_exPV",	&Mymu_muid_cov_theta_exPV,	"mu_muid_cov_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_qoverp_exPV",	&Mymu_muid_cov_qoverp_exPV,	"mu_muid_cov_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_d0_z0_exPV",	&Mymu_muid_cov_d0_z0_exPV,	"mu_muid_cov_d0_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_d0_phi_exPV",	&Mymu_muid_cov_d0_phi_exPV,	"mu_muid_cov_d0_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_d0_theta_exPV",	&Mymu_muid_cov_d0_theta_exPV,	"mu_muid_cov_d0_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_d0_qoverp_exPV",	&Mymu_muid_cov_d0_qoverp_exPV,	"mu_muid_cov_d0_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_z0_phi_exPV",		&Mymu_muid_cov_z0_phi_exPV,	"mu_muid_cov_z0_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_z0_theta_exPV",		&Mymu_muid_cov_z0_theta_exPV,	"mu_muid_cov_z0_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_z0_qoverp_exPV",	&Mymu_muid_cov_z0_qoverp_exPV,	"mu_muid_cov_z0_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_phi_theta_exPV",	&Mymu_muid_cov_phi_theta_exPV,	"mu_muid_cov_phi_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_phi_qoverp_exPV",	&Mymu_muid_cov_phi_qoverp_exPV,	"mu_muid_cov_phi_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_cov_theta_qoverp_exPV",	&Mymu_muid_cov_theta_qoverp_exPV,	"mu_muid_cov_theta_qoverp_exPV[mu_muid_n]/F");










 myTree->Branch("mu_muid_id_cov_d0_exPV",	&Mymu_muid_id_cov_d0_exPV,	"mu_muid_id_cov_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_cov_z0_exPV",	&Mymu_muid_id_cov_z0_exPV,	"mu_muid_id_cov_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_cov_phi_exPV",	&Mymu_muid_id_cov_phi_exPV,	"mu_muid_id_cov_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_cov_theta_exPV",	&Mymu_muid_id_cov_theta_exPV,	"mu_muid_id_cov_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_cov_qoverp_exPV",	&Mymu_muid_id_cov_qoverp_exPV,	"mu_muid_id_cov_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_cov_d0_exPV",	&Mymu_muid_me_cov_d0_exPV,	"mu_muid_me_cov_d0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_cov_z0_exPV",	&Mymu_muid_me_cov_z0_exPV,	"mu_muid_me_cov_z0_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_cov_phi_exPV",	&Mymu_muid_me_cov_phi_exPV,	"mu_muid_me_cov_phi_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_cov_theta_exPV",	&Mymu_muid_me_cov_theta_exPV,	"mu_muid_me_cov_theta_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_cov_qoverp_exPV",&Mymu_muid_me_cov_qoverp_exPV,	"mu_muid_me_cov_qoverp_exPV[mu_muid_n]/F");
 myTree->Branch("mu_muid_ms_d0",	&Mymu_muid_ms_d0,	"mu_muid_ms_d0[mu_muid_n]/F");
 myTree->Branch("mu_muid_ms_z0",	&Mymu_muid_ms_z0,	"mu_muid_ms_z0[mu_muid_n]/F");
 myTree->Branch("mu_muid_ms_phi",	&Mymu_muid_ms_phi,	"mu_muid_ms_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_ms_theta",	&Mymu_muid_ms_theta,	"mu_muid_ms_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_ms_qoverp",	&Mymu_muid_ms_qoverp,	"mu_muid_ms_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_d0",	&Mymu_muid_id_d0,	"mu_muid_id_d0[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_z0",	&Mymu_muid_id_z0,	"mu_muid_id_z0[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_phi",	&Mymu_muid_id_phi,	"mu_muid_id_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_theta",	&Mymu_muid_id_theta,	"mu_muid_id_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_id_qoverp",	&Mymu_muid_id_qoverp,	"mu_muid_id_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_d0",	&Mymu_muid_me_d0,	"mu_muid_me_d0[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_z0",	&Mymu_muid_me_z0,	"mu_muid_me_z0[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_phi",	&Mymu_muid_me_phi,	"mu_muid_me_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_theta",	&Mymu_muid_me_theta,	"mu_muid_me_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_me_qoverp",	&Mymu_muid_me_qoverp,	"mu_muid_me_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_d0",	&Mymu_muid_ie_d0,	"mu_muid_ie_d0[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_z0",	&Mymu_muid_ie_z0,	"mu_muid_ie_z0[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_phi",	&Mymu_muid_ie_phi,	"mu_muid_ie_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_theta",	&Mymu_muid_ie_theta,	"mu_muid_ie_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_ie_qoverp",	&Mymu_muid_ie_qoverp,	"mu_muid_ie_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_nOutliersOnTrack",	&Mymu_muid_nOutliersOnTrack,	"mu_muid_nOutliersOnTrack[mu_muid_n]/I");
 myTree->Branch("mu_muid_nBLHits",		&Mymu_muid_nBLHits,	"mu_muid_nBLHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nPixHits",		&Mymu_muid_nPixHits,	"mu_muid_nPixHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nSCTHits",		&Mymu_muid_nSCTHits,	"mu_muid_nSCTHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTRTHits",		&Mymu_muid_nTRTHits,	"mu_muid_nTRTHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTRTHighTHits",	&Mymu_muid_nTRTHighTHits,	"mu_muid_nTRTHighTHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nBLSharedHits",	&Mymu_muid_nBLSharedHits,	"mu_muid_nBLSharedHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nPixSharedHits",	&Mymu_muid_nPixSharedHits,	"mu_muid_nPixSharedHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nPixHoles",		&Mymu_muid_nPixHoles,	"mu_muid_nPixHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nSCTSharedHits",	&Mymu_muid_nSCTSharedHits,	"mu_muid_nSCTSharedHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nSCTHoles",		&Mymu_muid_nSCTHoles,	"mu_muid_nSCTHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTRTOutliers",	&Mymu_muid_nTRTOutliers,	"mu_muid_nTRTOutliers[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTRTHighTOutliers",	&Mymu_muid_nTRTHighTOutliers,	"mu_muid_nTRTHighTOutliers[mu_muid_n]/I");
 myTree->Branch("mu_muid_nGangedPixels",	&Mymu_muid_nGangedPixels,	"mu_muid_nGangedPixels[mu_muid_n]/I");
 myTree->Branch("mu_muid_nPixelDeadSensors",	&Mymu_muid_nPixelDeadSensors,	"mu_muid_nPixelDeadSensors[mu_muid_n]/I");
 myTree->Branch("mu_muid_nSCTDeadSensors",	&Mymu_muid_nSCTDeadSensors,	"mu_muid_nSCTDeadSensors[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTRTDeadStraws",	&Mymu_muid_nTRTDeadStraws,	"mu_muid_nTRTDeadStraws[mu_muid_n]/I");
 myTree->Branch("mu_muid_expectBLayerHit",	&Mymu_muid_expectBLayerHit,	"mu_muid_expectBLayerHit[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTHits",		&Mymu_muid_nMDTHits,	"mu_muid_nMDTHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTHoles",		&Mymu_muid_nMDTHoles,	"mu_muid_nMDTHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nCSCEtaHits",	&Mymu_muid_nCSCEtaHits,	"mu_muid_nCSCEtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nCSCEtaHoles",	&Mymu_muid_nCSCEtaHoles,	"mu_muid_nCSCEtaHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nCSCPhiHits",	&Mymu_muid_nCSCPhiHits,	"mu_muid_nCSCPhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nCSCPhiHoles",	&Mymu_muid_nCSCPhiHoles,	"mu_muid_nCSCPhiHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCEtaHits",	&Mymu_muid_nRPCEtaHits,	"mu_muid_nRPCEtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCEtaHoles",	&Mymu_muid_nRPCEtaHoles,	"mu_muid_nRPCEtaHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCPhiHits",	&Mymu_muid_nRPCPhiHits,	"mu_muid_nRPCPhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCPhiHoles",	&Mymu_muid_nRPCPhiHoles,	"mu_muid_nRPCPhiHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCEtaHits",	&Mymu_muid_nTGCEtaHits,	"mu_muid_nTGCEtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCEtaHoles",	&Mymu_muid_nTGCEtaHoles,	"mu_muid_nTGCEtaHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCPhiHits",	&Mymu_muid_nTGCPhiHits,	"mu_muid_nTGCPhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCPhiHoles",	&Mymu_muid_nTGCPhiHoles,	"mu_muid_nTGCPhiHoles[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTBIHits",	&Mymu_muid_nMDTBIHits,	"mu_muid_nMDTBIHits[mu_muid_n]/I");



 myTree->Branch("mu_muid_nMDTBMHits",	&Mymu_muid_nMDTBMHits,	 "mu_muid_nMDTBMHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTBOHits",	&Mymu_muid_nMDTBOHits,	 "mu_muid_nMDTBOHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTBEEHits",	&Mymu_muid_nMDTBEEHits,	 "mu_muid_nMDTBEEHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTBIS78Hits",&Mymu_muid_nMDTBIS78Hits,"mu_muid_nMDTBIS78Hits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTEIHits",	&Mymu_muid_nMDTEIHits,	 "mu_muid_nMDTEIHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTEMHits",	&Mymu_muid_nMDTEMHits, 	 "mu_muid_nMDTEMHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTEOHits",	&Mymu_muid_nMDTEOHits,	 "mu_muid_nMDTEOHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nMDTEEHits",	&Mymu_muid_nMDTEEHits,	 "mu_muid_nMDTEEHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCLayer1EtaHits",	&Mymu_muid_nRPCLayer1EtaHits,	"mu_muid_nRPCLayer1EtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCLayer2EtaHits",	&Mymu_muid_nRPCLayer2EtaHits,	"mu_muid_nRPCLayer2EtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCLayer3EtaHits",	&Mymu_muid_nRPCLayer3EtaHits,	"mu_muid_nRPCLayer3EtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCLayer1PhiHits",	&Mymu_muid_nRPCLayer1PhiHits,	"mu_muid_nRPCLayer1PhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCLayer2PhiHits",	&Mymu_muid_nRPCLayer2PhiHits,	"mu_muid_nRPCLayer2PhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nRPCLayer3PhiHits",	&Mymu_muid_nRPCLayer3PhiHits,	"mu_muid_nRPCLayer3PhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer1EtaHits",	&Mymu_muid_nTGCLayer1EtaHits,	"mu_muid_nTGCLayer1EtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer2EtaHits",	&Mymu_muid_nTGCLayer2EtaHits,	"mu_muid_nTGCLayer2EtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer3EtaHits",	&Mymu_muid_nTGCLayer3EtaHits,	"mu_muid_nTGCLayer3EtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer4EtaHits",	&Mymu_muid_nTGCLayer4EtaHits,	"mu_muid_nTGCLayer4EtaHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer1PhiHits",	&Mymu_muid_nTGCLayer1PhiHits,	"mu_muid_nTGCLayer1PhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer2PhiHits",	&Mymu_muid_nTGCLayer2PhiHits,	"mu_muid_nTGCLayer2PhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer3PhiHits",	&Mymu_muid_nTGCLayer3PhiHits,	"mu_muid_nTGCLayer3PhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_nTGCLayer4PhiHits",	&Mymu_muid_nTGCLayer4PhiHits,	"mu_muid_nTGCLayer4PhiHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_barrelSectors",	&Mymu_muid_barrelSectors,	"mu_muid_barrelSectors[mu_muid_n]/I");
 myTree->Branch("mu_muid_endcapSectors",	&Mymu_muid_endcapSectors,	"mu_muid_endcapSectors[mu_muid_n]/I");

 myTree->Branch("mu_muid_trackd0",	&Mymu_muid_trackd0,	"mu_muid_trackd0[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackz0",	&Mymu_muid_trackz0,	"mu_muid_trackz0[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackphi",	&Mymu_muid_trackphi,	"mu_muid_trackphi[mu_muid_n]/F");
 myTree->Branch("mu_muid_tracktheta",	&Mymu_muid_tracktheta,	"mu_muid_tracktheta[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackqoverp",	&Mymu_muid_trackqoverp,	"mu_muid_trackqoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_d0",	&Mymu_muid_trackcov_d0,	"mu_muid_trackcov_d0[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_z0",	&Mymu_muid_trackcov_z0,	"mu_muid_trackcov_z0[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_phi",	&Mymu_muid_trackcov_phi,	"mu_muid_trackcov_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_theta",	&Mymu_muid_trackcov_theta,	"mu_muid_trackcov_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_qoverp",	&Mymu_muid_trackcov_qoverp,	"mu_muid_trackcov_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_d0_z0",	&Mymu_muid_trackcov_d0_z0,	"mu_muid_trackcov_d0_z0[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_d0_phi",	&Mymu_muid_trackcov_d0_phi,	"mu_muid_trackcov_d0_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_d0_theta",	&Mymu_muid_trackcov_d0_theta,	"mu_muid_trackcov_d0_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_d0_qoverp",	&Mymu_muid_trackcov_d0_qoverp,	"mu_muid_trackcov_d0_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_z0_phi",	&Mymu_muid_trackcov_z0_phi,	"mu_muid_trackcov_z0_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_z0_theta",	&Mymu_muid_trackcov_z0_theta,	"mu_muid_trackcov_z0_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_z0_qoverp",	&Mymu_muid_trackcov_z0_qoverp,	"mu_muid_trackcov_z0_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_phi_theta",	&Mymu_muid_trackcov_phi_theta,	"mu_muid_trackcov_phi_theta[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_phi_qoverp",	&Mymu_muid_trackcov_phi_qoverp,	"mu_muid_trackcov_phi_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackcov_theta_qoverp",	&Mymu_muid_trackcov_theta_qoverp,	"mu_muid_trackcov_theta_qoverp[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackfitchi2",	&Mymu_muid_trackfitchi2,	"mu_muid_trackfitchi2[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackfitndof",	&Mymu_muid_trackfitndof,	"mu_muid_trackfitndof[mu_muid_n]/I");
 myTree->Branch("mu_muid_hastrack",	&Mymu_muid_hastrack,	"mu_muid_hastrack[mu_muid_n]/I");
 myTree->Branch("mu_muid_trackd0beam",	&Mymu_muid_trackd0beam,	"mu_muid_trackd0beam[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackz0beam",	&Mymu_muid_trackz0beam,	"mu_muid_trackz0beam[mu_muid_n]/F");
 myTree->Branch("mu_muid_tracksigd0beam",	&Mymu_muid_tracksigd0beam,	"mu_muid_tracksigd0beam[mu_muid_n]/F");
 myTree->Branch("mu_muid_tracksigz0beam",	&Mymu_muid_tracksigz0beam,	"mu_muid_tracksigz0beam[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackd0pv",	&Mymu_muid_trackd0pv,	"mu_muid_trackd0pv[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackz0pv",	&Mymu_muid_trackz0pv,	"mu_muid_trackz0pv[mu_muid_n]/F");
 myTree->Branch("mu_muid_tracksigd0pv",	&Mymu_muid_tracksigd0pv,	"mu_muid_tracksigd0pv[mu_muid_n]/F");
 myTree->Branch("mu_muid_tracksigz0pv",	&Mymu_muid_tracksigz0pv,	"mu_muid_tracksigz0pv[mu_muid_n]/F");
 
 myTree->Branch("mu_muid_trackIPEstimate_d0_biasedpvunbiased",&Mymu_muid_trackIPEstimate_d0_biasedpvunbiased,
               "mu_muid_trackIPEstimate_d0_biasedpvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackIPEstimate_z0_biasedpvunbiased",&Mymu_muid_trackIPEstimate_z0_biasedpvunbiased,
        	"mu_muid_trackIPEstimate_z0_biasedpvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackIPEstimate_sigd0_biasedpvunbiased",&Mymu_muid_trackIPEstimate_sigd0_biasedpvunbiased,
   		"mu_muid_trackIPEstimate_sigd0_biasedpvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackIPEstimate_sigz0_biasedpvunbiased",&Mymu_muid_trackIPEstimate_sigz0_biasedpvunbiased,
		"mu_muid_trackIPEstimate_sigz0_biasedpvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackIPEstimate_d0_unbiasedpvunbiased",&Mymu_muid_trackIPEstimate_d0_unbiasedpvunbiased,
		"mu_muid_trackIPEstimate_d0_unbiasedpvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackIPEstimate_z0_unbiasedpvunbiased",&Mymu_muid_trackIPEstimate_z0_unbiasedpvunbiased,
		"mu_muid_trackIPEstimate_z0_unbiasedpvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased",&Mymu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased,	
		"mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased",&Mymu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased,
		"mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased[mu_muid_n]/F");

 myTree->Branch("mu_muid_trackd0pvunbiased",&Mymu_muid_trackd0pvunbiased,	"mu_muid_trackd0pvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_trackz0pvunbiased",&Mymu_muid_trackz0pvunbiased,	"mu_muid_trackz0pvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_tracksigd0pvunbiased",&Mymu_muid_tracksigd0pvunbiased,	"mu_muid_tracksigd0pvunbiased[mu_muid_n]/F");
 myTree->Branch("mu_muid_tracksigz0pvunbiased",&Mymu_muid_tracksigz0pvunbiased,	"mu_muid_tracksigz0pvunbiased[mu_muid_n]/F");



 myTree->Branch("mu_muid_EFCB_n_tot",   &Mymu_muid_EFCB_n_tot,    	"mu_muid_EFCB_n_tot/I");
 myTree->Branch("mu_muid_EFCB_dr",	&Mymu_muid_EFCB_dr,		"mu_muid_EFCB_dr[mu_muid_n]/F");
 myTree->Branch("mu_muid_EFCB_n",	&Mymu_muid_EFCB_n,		"mu_muid_EFCB_n[mu_muid_n]/I");
 myTree->Branch("mu_muid_EFCB_MuonType",&Mymu_muid_EFCB_MuonType,       "mu_muid_EFCB_MuonType[mu_muid_EFCB_n_tot]/I");
 myTree->Branch("mu_muid_EFCB_pt",	&Mymu_muid_EFCB_pt,       	"mu_muid_EFCB_pt[mu_muid_EFCB_n_tot]/F");
 myTree->Branch("mu_muid_EFCB_eta",	&Mymu_muid_EFCB_eta,     	"mu_muid_EFCB_eta[mu_muid_EFCB_n_tot]/F");
 myTree->Branch("mu_muid_EFCB_phi",	&Mymu_muid_EFCB_phi,      	"mu_muid_EFCB_phi[mu_muid_EFCB_n_tot]/F");
 myTree->Branch("mu_muid_EFCB_hasCB",	&Mymu_muid_EFCB_hasCB,    	"mu_muid_EFCB_hasCB[mu_muid_EFCB_n_tot]/I");
 myTree->Branch("mu_muid_EFCB_matched",	&Mymu_muid_EFCB_matched,	"mu_muid_EFCB_matched[mu_muid_n]/I");


 myTree->Branch("mu_muid_EFMG_n_tot",      &Mymu_muid_EFMG_n_tot,       "mu_muid_EFMG_n_tot/I");
 myTree->Branch("mu_muid_EFMG_dr",	   &Mymu_muid_EFMG_dr,		"mu_muid_EFMG_dr[mu_muid_n]/F");
 myTree->Branch("mu_muid_EFMG_n", 	   &Mymu_muid_EFMG_n,		"mu_muid_EFMG_n[mu_muid_n]/I");
 myTree->Branch("mu_muid_EFMG_MuonType",   &Mymu_muid_EFMG_MuonType,    "mu_muid_EFMG_MuonType[mu_muid_EFMG_n_tot]/I");
 myTree->Branch("mu_muid_EFMG_pt",         &Mymu_muid_EFMG_pt,          "mu_muid_EFMG_pt[mu_muid_EFMG_n_tot]/F");
 myTree->Branch("mu_muid_EFMG_eta",        &Mymu_muid_EFMG_eta,         "mu_muid_EFMG_eta[mu_muid_EFMG_n_tot]/F");
 myTree->Branch("mu_muid_EFMG_phi",        &Mymu_muid_EFMG_phi,         "mu_muid_EFMG_phi[mu_muid_EFMG_n_tot]/F");
 myTree->Branch("mu_muid_EFMG_hasMG",      &Mymu_muid_EFMG_hasMG,       "mu_muid_EFMG_hasMG[mu_muid_EFMG_n_tot]/I");
 myTree->Branch("mu_muid_EFMG_matched",	   &Mymu_muid_EFMG_matched,	"mu_muid_EFMG_matched[mu_muid_n]/I");


 myTree->Branch("mu_muid_EFME_n_tot",      &Mymu_muid_EFME_n_tot,       "mu_muid_EFME_n_tot/I");
 myTree->Branch("mu_muid_EFME_dr",	   &Mymu_muid_EFME_dr,		"mu_muid_EFME_dr[mu_muid_n]/F");
 myTree->Branch("mu_muid_EFME_n", 	   &Mymu_muid_EFME_n,		"mu_muid_EFME_n[mu_muid_n]/I");
 myTree->Branch("mu_muid_EFME_MuonType",   &Mymu_muid_EFME_MuonType,	"mu_muid_EFME_MuonType[mu_muid_EFME_n_tot]/I");
 myTree->Branch("mu_muid_EFME_pt",         &Mymu_muid_EFME_pt,       	"mu_muid_EFME_pt[mu_muid_EFME_n_tot]/F");
 myTree->Branch("mu_muid_EFME_eta",        &Mymu_muid_EFME_eta,		"mu_muid_EFME_eta[mu_muid_EFME_n_tot]/F");
 myTree->Branch("mu_muid_EFME_phi",        &Mymu_muid_EFME_phi,		"mu_muid_EFME_phi[mu_muid_EFME_n_tot]/F");
 myTree->Branch("mu_muid_EFME_hasME",      &Mymu_muid_EFME_hasME,	"mu_muid_EFME_hasME[mu_muid_EFME_n_tot]/I");
 myTree->Branch("mu_muid_EFME_matched",	   &Mymu_muid_EFME_matched,	"mu_muid_EFME_matched[mu_muid_n]/I");



 myTree->Branch("mu_muid_L2CB_dr",&Mymu_muid_L2CB_dr,	"mu_muid_L2CB_dr[mu_muid_n]/F");
 myTree->Branch("mu_muid_L2CB_pt",&Mymu_muid_L2CB_pt,	"mu_muid_L2CB_pt[mu_muid_n]/F");
 myTree->Branch("mu_muid_L2CB_eta",&Mymu_muid_L2CB_eta,	"mu_muid_L2CB_eta[mu_muid_n]/F");
 myTree->Branch("mu_muid_L2CB_phi",&Mymu_muid_L2CB_phi,	"mu_muid_L2CB_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_L2CB_id_pt",	&Mymu_muid_L2CB_id_pt,	"mu_muid_L2CB_id_pt[mu_muid_n]/F");
 myTree->Branch("mu_muid_L2CB_ms_pt",	&Mymu_muid_L2CB_ms_pt,	"mu_muid_L2CB_ms_pt[mu_muid_n]/F");
 myTree->Branch("mu_muid_L2CB_nPixHits",	&Mymu_muid_L2CB_nPixHits,	"mu_muid_L2CB_nPixHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_L2CB_nSCTHits",	&Mymu_muid_L2CB_nSCTHits,	"mu_muid_L2CB_nSCTHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_L2CB_nTRTHits",	&Mymu_muid_L2CB_nTRTHits,	"mu_muid_L2CB_nTRTHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_L2CB_nTRTHighTHits",	&Mymu_muid_L2CB_nTRTHighTHits,	"mu_muid_L2CB_nTRTHighTHits[mu_muid_n]/I");
 myTree->Branch("mu_muid_L2CB_matched",	&Mymu_muid_L2CB_matched,	"mu_muid_L2CB_matched[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_dr",	&Mymu_muid_L1_dr,	"mu_muid_L1_dr[mu_muid_n]/F");
 myTree->Branch("mu_muid_L1_pt",	&Mymu_muid_L1_pt,	"mu_muid_L1_pt[mu_muid_n]/F");
 myTree->Branch("mu_muid_L1_eta",	&Mymu_muid_L1_eta,	"mu_muid_L1_eta[mu_muid_n]/F");
 myTree->Branch("mu_muid_L1_phi",	&Mymu_muid_L1_phi,	"mu_muid_L1_phi[mu_muid_n]/F");
 myTree->Branch("mu_muid_L1_thrNumber",	&Mymu_muid_L1_thrNumber,	"mu_muid_L1_thrNumber[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_RoINumber",	&Mymu_muid_L1_RoINumber,	"mu_muid_L1_RoINumber[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_sectorAddress",	&Mymu_muid_L1_sectorAddress,	"mu_muid_L1_sectorAddress[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_firstCandidate",	&Mymu_muid_L1_firstCandidate,	"mu_muid_L1_firstCandidate[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_moreCandInRoI",	&Mymu_muid_L1_moreCandInRoI,	"mu_muid_L1_moreCandInRoI[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_moreCandInSector",	&Mymu_muid_L1_moreCandInSector,	"mu_muid_L1_moreCandInSector[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_source",	&Mymu_muid_L1_source,	"mu_muid_L1_source[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_hemisphere",	&Mymu_muid_L1_hemisphere,	"mu_muid_L1_hemisphere[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_charge",	&Mymu_muid_L1_charge,	"mu_muid_L1_charge[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_vetoed",	&Mymu_muid_L1_vetoed,	"mu_muid_L1_vetoed[mu_muid_n]/I");
 myTree->Branch("mu_muid_L1_matched",	&Mymu_muid_L1_matched,	"mu_muid_L1_matched[mu_muid_n]/I");
 myTree->Branch("muid_nScatters",	&Mymuid_nScatters,	"muid_nScatters[mu_muid_n]/I");
 myTree->Branch("muid_scatSignificance",	&Mymuid_scatSignificance,	"muid_scatSignificance[mu_muid_n]/F");
 myTree->Branch("muid_neighbourSignificance",	&Mymuid_neighbourSignificance,	"muid_neighbourSignificance[mu_muid_n]/F");
 myTree->Branch("muid_eta",	&Mymuid_eta,	"muid_eta[mu_muid_n]/F");
 myTree->Branch("muid_invMass",	&Mymuid_invMass, "muid_invMass[mu_muid_n]/F");
 //myTree->Branch("muid_massCB",	&Mymuid_massCB, "muid_massCB[muid_npairs]/F");
 myTree->Branch("muid_massCBOS",	&Mymuid_massCBOS, "muid_massCBOS[muid_npairs]/F");
 myTree->Branch("muid_massCBSS",	&Mymuid_massCBSS, "muid_massCBSS[muid_npairs]/F");
 myTree->Branch("singlemuid_massCBOS",	"vector<vector<float> >", &Vecsinglemuid_massCBOS);
 myTree->Branch("IDprobe","vector<vector<int> >",      &IDprobe);
 myTree->Branch("MSprobe","vector<vector<int> >",      &MSprobe);

/////////////////////////////////////////////
///JET INFORMATION FOR MUON-JET TAGGING
/////////////////////////////////////////////

// myTree->Branch("antikt2HI_n",&Myantikt2HI_n,"antikt2HI_n/I");
// myTree->Branch("antikt2HI_E",&Myantikt2HI_E,"antikt2HI_E[antikt2HI_n]/F");
// myTree->Branch("antikt2HI_pt",&Myantikt2HI_pt,"antikt2HI_pt[antikt2HI_n]/F");
// myTree->Branch("antikt2HI_eta",&Myantikt2HI_eta,"antikt2HI_eta[antikt2HI_n]/F");
// myTree->Branch("antikt2HI_phi",&Myantikt2HI_phi,"antikt2HI_phi[antikt2HI_n]/F");
if(!isPP&&!isPbP){
 myTree->Branch("antikt2HIItrEM_n", &Myantikt2HIItrEM_n, "antikt2HIItrEM_n/I");
 myTree->Branch("antikt2HIItrEM_E", &Myantikt2HIItrEM_E, "antikt2HIItrEM_E[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_pt", &Myantikt2HIItrEM_pt, "antikt2HIItrEM_pt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_m", &Myantikt2HIItrEM_m, "antikt2HIItrEM_m[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_eta", &Myantikt2HIItrEM_eta, "antikt2HIItrEM_eta[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_phi", &Myantikt2HIItrEM_phi, "antikt2HIItrEM_phi[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_MaxOverMean", &Myantikt2HIItrEM_MaxOverMean, "antikt2HIItrEM_MaxOverMean[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_MeanTowerEt", &Myantikt2HIItrEM_MeanTowerEt, "antikt2HIItrEM_MeanTowerEt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_SubtractedEt", &Myantikt2HIItrEM_SubtractedEt, "antikt2HIItrEM_SubtractedEt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_RMSTowerEt", &Myantikt2HIItrEM_RMSTowerEt, "antikt2HIItrEM_RMSTowerEt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_GausEt", &Myantikt2HIItrEM_GausEt, "antikt2HIItrEM_GausEt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_SelfEnergy", &Myantikt2HIItrEM_SelfEnergy, "antikt2HIItrEM_SelfEnergy[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_SumJt", &Myantikt2HIItrEM_SumJt, "antikt2HIItrEM_SumJt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_CoreEt", &Myantikt2HIItrEM_CoreEt, "antikt2HIItrEM_CoreEt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_EdgeEt", &Myantikt2HIItrEM_EdgeEt, "antikt2HIItrEM_EdgeEt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_CryoCorr", &Myantikt2HIItrEM_CryoCorr, "antikt2HIItrEM_CryoCorr[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_NoFlow", &Myantikt2HIItrEM_NoFlow, "antikt2HIItrEM_NoFlow[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_NumConstituents", &Myantikt2HIItrEM_NumConstituents, "antikt2HIItrEM_NumConstituents[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_UncalibEt", &Myantikt2HIItrEM_UncalibEt, "antikt2HIItrEM_UncalibEt[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_Discriminant", &Myantikt2HIItrEM_Discriminant, "antikt2HIItrEM_Discriminant[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_MeanTowerEtUnsubtr", &Myantikt2HIItrEM_MeanTowerEtUnsubtr, "antikt2HIItrEM_MeanTowerEtUnsubtr[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_n90", &Myantikt2HIItrEM_n90, "antikt2HIItrEM_n90[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_fracSamplingMax", &Myantikt2HIItrEM_fracSamplingMax, "antikt2HIItrEM_fracSamplingMax[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_SamplingMax", &Myantikt2HIItrEM_SamplingMax, "antikt2HIItrEM_SamplingMax[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_n90constituents", &Myantikt2HIItrEM_n90constituents, "antikt2HIItrEM_n90constituents[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_Timing", &Myantikt2HIItrEM_Timing, "antikt2HIItrEM_Timing[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_LArQuality", &Myantikt2HIItrEM_LArQuality, "antikt2HIItrEM_LArQuality[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_HECQuality", &Myantikt2HIItrEM_HECQuality, "antikt2HIItrEM_HECQuality[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_TileQuality", &Myantikt2HIItrEM_TileQuality, "antikt2HIItrEM_TileQuality[antikt2HIItrEM_n]/F");
 /*myTree->Branch("antikt2HIItrEM_const_n", &Myantikt2HIItrEM_const_n, "antikt2HIItrEM_const_n[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_const_et", &Myantikt2HIItrEM_const_et, "antikt2HIItrEM_const_et[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_const_eta", &Myantikt2HIItrEM_const_eta, "antikt2HIItrEM_const_eta[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_const_phi", &Myantikt2HIItrEM_const_phi, "antikt2HIItrEM_const_phi[antikt2HIItrEM_n]/F");
 myTree->Branch("antikt2HIItrEM_sampling_et", &Myantikt2HIItrEM_sampling_et, "antikt2HIItrEM_sampling_et[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_sampling_et_unsubtr", &Myantikt2HIItrEM_sampling_et_unsubtr, "antikt2HIItrEM_sampling_et_unsubtr[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_bad_cell_n", &Myantikt2HIItrEM_bad_cell_n, "antikt2HIItrEM_bad_cell_n[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_bad_cell_et", &Myantikt2HIItrEM_bad_cell_et, "antikt2HIItrEM_bad_cell_et[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_bad_cell_area", &Myantikt2HIItrEM_bad_cell_area, "antikt2HIItrEM_bad_cell_area[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_empty_cell_n", &Myantikt2HIItrEM_empty_cell_n, "antikt2HIItrEM_empty_cell_n[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_empty_cell_et", &Myantikt2HIItrEM_empty_cell_et, "antikt2HIItrEM_empty_cell_et[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_empty_cell_area", &Myantikt2HIItrEM_empty_cell_area, "antikt2HIItrEM_empty_cell_area[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_total_cell_n", &Myantikt2HIItrEM_total_cell_n, "antikt2HIItrEM_total_cell_n[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_total_cell_et", &Myantikt2HIItrEM_total_cell_et, "antikt2HIItrEM_total_cell_et[antikt2HIItrEM_n]/F" );
 myTree->Branch("antikt2HIItrEM_total_cell_area", &Myantikt2HIItrEM_total_cell_area, "antikt2HIItrEM_total_cell_area[antikt2HIItrEM_n]/F" );*/
 if(isMC){
	myTree->Branch("antikt2Truth_n",&Myantikt2Truth_n,"antikt2Truth_n/I");
	myTree->Branch("antikt2Truth_E",&Myantikt2Truth_E,"antikt2Truth_E[antikt2Truth_n]/F");
	myTree->Branch("antikt2Truth_pt",&Myantikt2Truth_pt,"antikt2Truth_pt[antikt2Truth_n]/F");
	myTree->Branch("antikt2Truth_m",&Myantikt2Truth_m,"antikt2Truth_m[antikt2Truth_n]/F");
	myTree->Branch("antikt2Truth_eta",&Myantikt2Truth_eta,"antikt2Truth_eta[antikt2Truth_n]/F");
	myTree->Branch("antikt2Truth_phi",&Myantikt2Truth_phi,"antikt2Truth_phi[antikt2Truth_n]/F");
 }

///cone30
// myTree->Branch("antikt3HI_n",&Myantikt3HI_n,"antikt3HI_n/I");
// myTree->Branch("antikt3HI_E",&Myantikt3HI_E,"antikt3HI_E[antikt3HI_n]/F");
// myTree->Branch("antikt3HI_pt",&Myantikt3HI_pt,"antikt3HI_pt[antikt3HI_n]/F");
// myTree->Branch("antikt3HI_eta",&Myantikt3HI_eta,"antikt3HI_eta[antikt3HI_n]/F");
// myTree->Branch("antikt3HI_phi",&Myantikt3HI_phi,"antikt3HI_phi[antikt3HI_n]/F");
 myTree->Branch("antikt3HIItrEM_n", &Myantikt3HIItrEM_n, "antikt3HIItrEM_n/I");
 myTree->Branch("antikt3HIItrEM_E", &Myantikt3HIItrEM_E, "antikt3HIItrEM_E[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_pt", &Myantikt3HIItrEM_pt, "antikt3HIItrEM_pt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_m", &Myantikt3HIItrEM_m, "antikt3HIItrEM_m[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_eta", &Myantikt3HIItrEM_eta, "antikt3HIItrEM_eta[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_phi", &Myantikt3HIItrEM_phi, "antikt3HIItrEM_phi[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_MaxOverMean", &Myantikt3HIItrEM_MaxOverMean, "antikt3HIItrEM_MaxOverMean[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_MeanTowerEt", &Myantikt3HIItrEM_MeanTowerEt, "antikt3HIItrEM_MeanTowerEt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_SubtractedEt", &Myantikt3HIItrEM_SubtractedEt, "antikt3HIItrEM_SubtractedEt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_RMSTowerEt", &Myantikt3HIItrEM_RMSTowerEt, "antikt3HIItrEM_RMSTowerEt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_GausEt", &Myantikt3HIItrEM_GausEt, "antikt3HIItrEM_GausEt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_SelfEnergy", &Myantikt3HIItrEM_SelfEnergy, "antikt3HIItrEM_SelfEnergy[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_SumJt", &Myantikt3HIItrEM_SumJt, "antikt3HIItrEM_SumJt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_CoreEt", &Myantikt3HIItrEM_CoreEt, "antikt3HIItrEM_CoreEt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_EdgeEt", &Myantikt3HIItrEM_EdgeEt, "antikt3HIItrEM_EdgeEt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_CryoCorr", &Myantikt3HIItrEM_CryoCorr, "antikt3HIItrEM_CryoCorr[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_NoFlow", &Myantikt3HIItrEM_NoFlow, "antikt3HIItrEM_NoFlow[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_NumConstituents", &Myantikt3HIItrEM_NumConstituents, "antikt3HIItrEM_NumConstituents[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_UncalibEt", &Myantikt3HIItrEM_UncalibEt, "antikt3HIItrEM_UncalibEt[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_Discriminant", &Myantikt3HIItrEM_Discriminant, "antikt3HIItrEM_Discriminant[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_MeanTowerEtUnsubtr", &Myantikt3HIItrEM_MeanTowerEtUnsubtr, "antikt3HIItrEM_MeanTowerEtUnsubtr[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_n90", &Myantikt3HIItrEM_n90, "antikt3HIItrEM_n90[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_fracSamplingMax", &Myantikt3HIItrEM_fracSamplingMax, "antikt3HIItrEM_fracSamplingMax[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_SamplingMax", &Myantikt3HIItrEM_SamplingMax, "antikt3HIItrEM_SamplingMax[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_n90constituents", &Myantikt3HIItrEM_n90constituents, "antikt3HIItrEM_n90constituents[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_Timing", &Myantikt3HIItrEM_Timing, "antikt3HIItrEM_Timing[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_LArQuality", &Myantikt3HIItrEM_LArQuality, "antikt3HIItrEM_LArQuality[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_HECQuality", &Myantikt3HIItrEM_HECQuality, "antikt3HIItrEM_HECQuality[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_TileQuality", &Myantikt3HIItrEM_TileQuality, "antikt3HIItrEM_TileQuality[antikt3HIItrEM_n]/F");
 /*myTree->Branch("antikt3HIItrEM_const_n", &Myantikt3HIItrEM_const_n, "antikt3HIItrEM_const_n[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_const_et", &Myantikt3HIItrEM_const_et, "antikt3HIItrEM_const_et[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_const_eta", &Myantikt3HIItrEM_const_eta, "antikt3HIItrEM_const_eta[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_const_phi", &Myantikt3HIItrEM_const_phi, "antikt3HIItrEM_const_phi[antikt3HIItrEM_n]/F");
 myTree->Branch("antikt3HIItrEM_sampling_et", &Myantikt3HIItrEM_sampling_et, "antikt3HIItrEM_sampling_et[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_sampling_et_unsubtr", &Myantikt3HIItrEM_sampling_et_unsubtr, "antikt3HIItrEM_sampling_et_unsubtr[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_bad_cell_n", &Myantikt3HIItrEM_bad_cell_n, "antikt3HIItrEM_bad_cell_n[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_bad_cell_et", &Myantikt3HIItrEM_bad_cell_et, "antikt3HIItrEM_bad_cell_et[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_bad_cell_area", &Myantikt3HIItrEM_bad_cell_area, "antikt3HIItrEM_bad_cell_area[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_empty_cell_n", &Myantikt3HIItrEM_empty_cell_n, "antikt3HIItrEM_empty_cell_n[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_empty_cell_et", &Myantikt3HIItrEM_empty_cell_et, "antikt3HIItrEM_empty_cell_et[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_empty_cell_area", &Myantikt3HIItrEM_empty_cell_area, "antikt3HIItrEM_empty_cell_area[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_total_cell_n", &Myantikt3HIItrEM_total_cell_n, "antikt3HIItrEM_total_cell_n[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_total_cell_et", &Myantikt3HIItrEM_total_cell_et, "antikt3HIItrEM_total_cell_et[antikt3HIItrEM_n]/F" );
 myTree->Branch("antikt3HIItrEM_total_cell_area", &Myantikt3HIItrEM_total_cell_area, "antikt3HIItrEM_total_cell_area[antikt3HIItrEM_n]/F" );*/



// */
	} else{
		myTree->Branch("AntiKt4TopoEM_n", &MyAntiKt4TopoEM_n, "AntiKt4TopoEM_n/I");
 	 	myTree->Branch("AntiKt4TopoEM_E", &MyAntiKt4TopoEM_E, "AntiKt4TopoEM_E[AntiKt4TopoEM_n]/F");
		myTree->Branch("AntiKt4TopoEM_pt", &MyAntiKt4TopoEM_pt, "AntiKt4TopoEM_pt[AntiKt4TopoEM_n]/F");
 		myTree->Branch("AntiKt4TopoEM_m", &MyAntiKt4TopoEM_m, "AntiKt4TopoEM_m[AntiKt4TopoEM_n]/F");
 		myTree->Branch("AntiKt4TopoEM_eta", &MyAntiKt4TopoEM_eta, "AntiKt4TopoEM_eta[AntiKt4TopoEM_n]/F");
 		myTree->Branch("AntiKt4TopoEM_phi", &MyAntiKt4TopoEM_phi, "AntiKt4TopoEM_phi[AntiKt4TopoEM_n]/F");
 		myTree->Branch("AntiKt4TopoEM_mu_matched", &MyAntiKt4TopoEM_mu_matched, "AntiKt4TopoEM_mu_matched[AntiKt4TopoEM_n]/F");
 		myTree->Branch("AntiKt4TopoEM_mu_dr", &MyAntiKt4TopoEM_mu_dr, "AntiKt4TopoEM_mu_dr[AntiKt4TopoEM_n]/F");
	}
}

//----------------------------------------------------------------------

   TLorentzVector MuonBranch::lv(float pt, float eta, float phi){
   TLorentzVector lv;
   lv.SetPtEtaPhiM(pt,eta,phi,0.1);
   return lv;
  }  


//----------------------------------------------------------------------

  void MuonBranch::MSprobes() {

        ///clear the vector per event
        MSprobe->clear();
	for (int itag=0; itag<mu_muid_n;++itag){
		
		///find the tag muon
      		int   muQuality = isGoodMuon[itag];

		//find the SA probe muon
    		for (int iprobe=0; iprobe<mu_muid_n;++iprobe){

          		MSprobe_one.clear();
			if(!mu_muid_isStandAloneMuon->at(iprobe)) continue;

                	float dz0TP = fabs(mu_muid_id_z0_exPV->at(itag)- mu_muid_id_z0_exPV->at(iprobe)) ;
			float TPcharge = mu_muid_charge->at(itag)*mu_muid_charge->at(iprobe) ;
                	float dPhiTP = fabs( mu_muid_phi->at(itag)- mu_muid_phi->at(iprobe)) ;

			///make sure the pair meets Z criteria
      			if(muQuality<12||mu_muid_pt->at(itag)<20.||mu_muid_pt->at(iprobe)<20.||dz0TP>3.0||TPcharge>0.||dPhiTP<2.0) continue;
			
			float ptT = mu_muid_pt->at(itag); float etaT = mu_muid_eta->at(itag); float phiT = mu_muid_phi->at(itag) ;
			float ptP = mu_muid_pt->at(iprobe); float etaP = mu_muid_eta->at(iprobe); float phiP = mu_muid_phi->at(iprobe) ;
      			TLorentzVector vMuTag; vMuTag.SetPtEtaPhiM(ptT,etaT,phiT,0.1);
      			TLorentzVector vMuProbe; vMuProbe.SetPtEtaPhiM(ptP,etaP,phiP,0.1);
      			TLorentzVector vAdd = vMuTag+vMuProbe;
      			float invMassTemp = vAdd.M();

      			///calculate invariant masss of mu tag + id probe pair
      			float Zdiff = fabs(invMassTemp - 91.187) ;
			if(Zdiff<10.0) continue ;

			///now that we have a probe, match it to an ID track 
		        int trkQuality=0;
        		float phi,pt,eta,theta;

			for (int reco_track=0;reco_track<trk_n;reco_track++){
				if(!isPbP){
					theta = trk_theta_wrtPV->at(reco_track);
					eta = -1.*TMath::Log(TMath::Tan(trk_theta_wrtPV->at(reco_track)/2.)) ;
					phi = trk_phi_wrtPV   ->at(reco_track);
					pt = fabs(1./trk_qoverp_wrtPV->at(reco_track))/TMath::CosH(eta)/1000. ;
					if (trk_expectBLayerHit -> at(reco_track)==1 && trk_nBLHits -> at(reco_track)==0)                         continue;
					if (trk_pt -> at(reco_track) > 10000. && TMath::Prob(trk_chi2->at(reco_track),trk_ndof->at(reco_track)) <= 0.01) continue;
					if(trk_theta_wrtPV->at(reco_track) == 0)      continue; // safety
					float z0     = trk_z0_wrtPV->at(reco_track)*sin(trk_theta_wrtPV->at(reco_track));
					float ez0    = sqrt(trk_cov_z0_wrtPV->at(reco_track)   *pow(sin(trk_theta_wrtPV->at(reco_track)),2) + trk_cov_theta_wrtPV->at(reco_track)*pow(cos(trk_theta_wrtPV->at							(reco_track))*trk_z0_wrtPV->at(reco_track),2));
					float d0 = trk_d0_wrtPV->at(reco_track);
					float ed0    = sqrt(trk_cov_d0_wrtPV->at(reco_track));
					float ptTrkCut = trk_pt->at(reco_track)/1000.0 ;
					if (
						trk_nPixHits -> at(reco_track)     > 1    &&
						trk_nSCTHits -> at(reco_track)       > 5    &&
						fabs(trk_eta -> at(reco_track))<2.5      &&
						trk_nSCTHoles   -> at(reco_track) < 1 &&
						(trk_nPixHoles-> at(reco_track) + trk_nSCTHoles-> at(reco_track) )   < 2    &&
						(trk_nPixHits-> at(reco_track)+trk_nSCTHits-> at(reco_track) )   > 7    &&
						fabs(d0/ed0) < 3.0 &&
						fabs(z0/ez0) < 3.0 &&
						ptTrkCut > 20.
					) trkQuality = 1;
					else continue;
				}
				else {
					theta = trk_theta->at(reco_track);
					eta = -1.*TMath::Log(TMath::Tan(trk_theta->at(reco_track)/2.)) ;
					phi = trk_phi_wrtPV   ->at(reco_track);
					pt = fabs(1./trk_qoverp->at(reco_track))/TMath::CosH(eta)/1000. ;
					if(pt >= 100.&&pt < 200. && trk_nSCTHits->at(reco_track) < 2) continue; 
					if(pt >= 200.&&pt < 300. && trk_nSCTHits->at(reco_track) < 4) continue; 
					if(pt >= 300.&& trk_nSCTHits->at(reco_track) < 6) continue; 
					if (trk_expectBLayerHit -> at(reco_track)==1 && trk_nBLHits -> at(reco_track)==0)                         continue;
					if (trk_pt -> at(reco_track) > 10000. && TMath::Prob(trk_chi2->at(reco_track),trk_ndof->at(reco_track)) <= 0.01) continue;
					if(trk_theta->at(reco_track) == 0)      continue; // safety
					float z0     = trk_z0_wrtPV->at(reco_track)*sin(trk_theta->at(reco_track));
					float ez0    = sqrt(pow(trk_err_z0_wrtPV->at(reco_track),2)   *pow(sin(trk_theta->at(reco_track)),2) + 
									pow(trk_err_theta_wrtPV->at(reco_track),2)*pow(cos(trk_theta->at(reco_track))
														*trk_z0_wrtPV->at(reco_track),2) + 
															2*sin(trk_theta->at(reco_track))*cos(trk_theta->at(reco_track))*trk_z0_wrtPV->at(reco_track)*														trk_cov_z0_theta_wrtPV->at(reco_track));

					float d0 = trk_d0_wrtPV->at(reco_track);
					float ed0    = trk_err_d0_wrtPV->at(reco_track);
					if (
					       trk_nPixHits -> at(reco_track)     >= 1    &&
					       fabs(trk_eta -> at(reco_track))<2.5      &&
					       fabs(d0/ed0) < 3.0 &&
					       fabs(z0/ez0) < 3.0 &&
					       trk_pt->at(reco_track)/1000.>20.0
					   ) { trkQuality = 1; }
					else continue;

				}


				///match the MS probe to a high quality ID track
		  		float matchCharge = mu_muid_charge->at(iprobe)*trk_qoverp_wrtPV->at(reco_track) ;
		 		float dPhiMatch = trk_phi_wrtPV->at(reco_track) - mu_muid_phi->at(iprobe) ;
		  		float etaID = -1.*TMath::Log(TMath::Tan(trk_theta_wrtPV->at(reco_track)/2.)) ; 
		  		float etaMu = mu_muid_eta->at(iprobe) ;
				float dEtaMatch = etaID - etaMu ;
		  		float dRMatch = TMath::Sqrt(pow(dPhiMatch,2)+pow(dEtaMatch,2));


                  		if(dRMatch<0.01&&matchCharge>0.) MSprobe_one.push_back(1);
	   	  		else MSprobe_one.push_back(0);
        		} //ID tracks
                } //MS probe

      		MSprobe->push_back(MSprobe_one) ;
    } //tag
  }
  
//----------------------------------------------------------------------

  void MuonBranch::IDprobes() {

        ///clear the vector per event
        IDprobe->clear();
        int trkQuality=0;
        float phi,pt,eta,theta;

	for (int reco_track=0;reco_track<trk_n;reco_track++){
          IDprobe_one.clear();
	  float z0 = -9999.;
	  float ez0 = -9999.;
	  float d0 = -9999.;
	  float ed0 = -9999.;

	  if(!isPbP){
		  theta = trk_theta_wrtPV->at(reco_track);
		  eta = -1.*TMath::Log(TMath::Tan(trk_theta_wrtPV->at(reco_track)/2.)) ;
		  phi = trk_phi_wrtPV   ->at(reco_track);
		  pt = fabs(1./trk_qoverp_wrtPV->at(reco_track))/TMath::CosH(eta)/1000. ;
		  if (trk_expectBLayerHit -> at(reco_track)==1 && trk_nBLHits -> at(reco_track)==0)                         continue;
		  if (trk_pt -> at(reco_track) > 10000. && TMath::Prob(trk_chi2->at(reco_track),trk_ndof->at(reco_track)) <= 0.01) continue;
		  if(trk_theta_wrtPV->at(reco_track) == 0)      continue; // safety
		  z0     = trk_z0_wrtPV->at(reco_track)*sin(trk_theta_wrtPV->at(reco_track));
		  ez0    = sqrt(trk_cov_z0_wrtPV->at(reco_track)   *pow(sin(trk_theta_wrtPV->at(reco_track)),2) + trk_cov_theta_wrtPV->at(reco_track)*pow(cos(trk_theta_wrtPV->at(reco_track))
				 *trk_z0_wrtPV->at(reco_track),2));
		  d0 = trk_d0_wrtPV->at(reco_track);
		  ed0    = sqrt(trk_cov_d0_wrtPV->at(reco_track));
		  float ptTrkCut = trk_pt->at(reco_track)/1000. ;
		   if (
		       trk_nPixHits -> at(reco_track)     > 1    &&
		       trk_nSCTHits -> at(reco_track)       > 5    &&
		       fabs(trk_eta -> at(reco_track))<2.5      &&
		       trk_nSCTHoles   -> at(reco_track) < 1 &&
		       (trk_nPixHoles-> at(reco_track) + trk_nSCTHoles-> at(reco_track) )   < 2    &&
		       (trk_nPixHits-> at(reco_track)+trk_nSCTHits-> at(reco_track) )   > 7    &&
		       fabs(d0/ed0) < 3.0 &&
		       fabs(z0/ez0) < 3.0 &&
		       ptTrkCut > 20.
		       ) trkQuality = 1;
		    else continue;
	}
	else {
			theta = trk_theta->at(reco_track);
			eta = -1.*TMath::Log(TMath::Tan(trk_theta->at(reco_track)/2.)) ;
			phi = trk_phi_wrtPV   ->at(reco_track);
			pt = fabs(1./trk_qoverp->at(reco_track))/TMath::CosH(eta)/1000. ;
			if(pt >= 100.&&pt < 200. && trk_nSCTHits->at(reco_track) < 2) continue; 
			if(pt >= 200.&&pt < 300. && trk_nSCTHits->at(reco_track) < 4) continue; 
			if(pt >= 300.&& trk_nSCTHits->at(reco_track) < 6) continue; 
			if (trk_expectBLayerHit -> at(reco_track)==1 && trk_nBLHits -> at(reco_track)==0)                         continue;
			if (trk_pt -> at(reco_track) > 10000. && TMath::Prob(trk_chi2->at(reco_track),trk_ndof->at(reco_track)) <= 0.01) continue;
			if(trk_theta->at(reco_track) == 0)      continue; // safety
			z0     = trk_z0_wrtPV->at(reco_track)*sin(trk_theta->at(reco_track));
			ez0    = sqrt(pow(trk_err_z0_wrtPV->at(reco_track),2)   *pow(sin(trk_theta->at(reco_track)),2) + 
			                                pow(trk_err_theta_wrtPV->at(reco_track),2)*pow(cos(trk_theta->at(reco_track))
							                                        *trk_z0_wrtPV->at(reco_track),2) + 
													2*sin(trk_theta->at(reco_track))*cos(trk_theta->at(reco_track))*trk_z0_wrtPV->at(reco_track)*														trk_cov_z0_theta_wrtPV->at(reco_track));

			d0 = trk_d0_wrtPV->at(reco_track);
			ed0    = trk_err_d0_wrtPV->at(reco_track);
			if (
			       trk_nPixHits -> at(reco_track)     >= 1    &&
			       fabs(trk_eta -> at(reco_track))<2.5      &&
			       fabs(d0/ed0) < 3.0 &&
			       fabs(z0/ez0) < 3.0 &&
			       trk_pt->at(reco_track)/1000.>20.0
			   ) { trkQuality = 1; }
			else continue;

		}

    	TLorentzVector vTrk; vTrk.SetPtEtaPhiM(trk_pt->at(reco_track)/1000.,trk_eta -> at(reco_track),trk_phi_wrtPV -> at(reco_track),0.1);

    	for (int i=0; i<mu_muid_n;++i){

      		int   muQuality = isGoodMuon[i];
                float dz0TP = fabs(z0 - mu_muid_id_z0_exPV->at(i)) ;
		float TPcharge = mu_muid_charge->at(i)*trk_qoverp_wrtPV->at(reco_track) ;
                float dPhiTP = fabs(trk_phi_wrtPV->at(reco_track) - mu_muid_phi->at(i)) ;
      		if(muQuality<12||mu_muid_pt->at(i)<20.||dz0TP>3.0||TPcharge>0||dPhiTP<2.0) continue;

      		TLorentzVector vMu; vMu.SetPtEtaPhiM(mu_muid_pt->at(i)/1000.,mu_muid_eta->at(i),mu_muid_phi->at(i),0.1);
      		TLorentzVector vAdd = vTrk+vMu;
      		float invMassTemp = vAdd.M();

      		///calculate invariant masss of mu tag + id probe pair
      		float Zdiff = fabs(invMassTemp - 91.187) ;
		if(Zdiff<10.0) continue ;
		///now that we have a probe, match it to an MS muon
		for (int j=0; j<mu_muid_n;++j){

		  if(!mu_muid_isSegmentTaggedMuon->at(j)&&!mu_muid_isCombinedMuon->at(j)) continue;
		  if(mu_muid_pt->at(j)<20.) continue;

		  float matchCharge = mu_muid_charge->at(j)*trk_qoverp_wrtPV->at(reco_track) ;
		  float dPhiMatch = trk_phi_wrtPV->at(reco_track) - mu_muid_phi->at(j) ;
		  float etaID = -1.*TMath::Log(TMath::Tan(trk_theta_wrtPV->at(reco_track)/2.)) ; 
		  float etaMu = mu_muid_eta->at(j) ;
		  float dEtaMatch = etaID - etaMu ;
		  float dRMatch = TMath::Sqrt(pow(dPhiMatch,2)+pow(dEtaMatch,2));


                  if(dRMatch<0.01&&matchCharge>0) IDprobe_one.push_back(1);
	   	  else IDprobe_one.push_back(0);
                }

      		IDprobe->push_back(IDprobe_one) ;
    }
   } //ID tracks
  }

//----------------------------------------------------------------------

float MuonBranch::MuonIsolation(int imu, float trkThresh, float coneRadius){

		//only take high quality tracks (see SelectMuon())
		//else set isolation to meaningless value
		int   muQuality = isGoodMuon[imu];
		if(muQuality<12) return -9999.;
				
		float ptConeSum = 0.0;
		for (int reco_track=0;reco_track<trk_n;reco_track++){

			int trkQuality=0;
			float phi,pt,eta,theta;

			//select for good tracks
			if(!isPbP){
				theta = trk_theta_wrtPV->at(reco_track);
				eta = -1.*TMath::Log(TMath::Tan(trk_theta_wrtPV->at(reco_track)/2.)) ;
				phi = trk_phi_wrtPV   ->at(reco_track);
				pt = fabs(1./trk_qoverp_wrtPV->at(reco_track))/TMath::CosH(eta)/1000. ;
				if (trk_expectBLayerHit -> at(reco_track)==1 && trk_nBLHits -> at(reco_track)==0)                         continue;
				if (trk_pt -> at(reco_track) > 10000. && TMath::Prob(trk_chi2->at(reco_track),trk_ndof->at(reco_track)) <= 0.01) continue;
				if(trk_theta_wrtPV->at(reco_track) == 0)      continue; // safety
				float z0     = trk_z0_wrtPV->at(reco_track)*sin(trk_theta_wrtPV->at(reco_track));
				float ez0    = sqrt(trk_cov_z0_wrtPV->at(reco_track)   *pow(sin(trk_theta_wrtPV->at(reco_track)),2) + 
					trk_cov_theta_wrtPV->at(reco_track)*pow(cos(trk_theta_wrtPV->at(reco_track))
						*trk_z0_wrtPV->at(reco_track),2));
				float d0 = trk_d0_wrtPV->at(reco_track);
				float ed0    = sqrt(trk_cov_d0_wrtPV->at(reco_track));

				if (
				       trk_nPixHits -> at(reco_track)     > 1    &&
				       trk_nSCTHits -> at(reco_track)       > 5    &&
				       fabs(trk_eta -> at(reco_track))<2.5      &&
				       trk_nSCTHoles   -> at(reco_track) < 1 &&
				       (trk_nPixHoles-> at(reco_track) + trk_nSCTHoles-> at(reco_track) )   < 2    &&
				       (trk_nPixHits-> at(reco_track)+trk_nSCTHits-> at(reco_track) )   > 7    &&
				       fabs(d0/ed0) < 3.0 &&
				       fabs(z0/ez0) < 3.0 &&
				       trk_pt->at(reco_track)>trkThresh
				   ) { trkQuality = 1; }
				else continue;
			}
			else {
				theta = trk_theta->at(reco_track);
				eta = -1.*TMath::Log(TMath::Tan(trk_theta->at(reco_track)/2.)) ;
				phi = trk_phi_wrtPV   ->at(reco_track);
				pt = fabs(1./trk_qoverp->at(reco_track))/TMath::CosH(eta)/1000. ;
				if(pt >= 100.&&pt < 200. && trk_nSCTHits->at(reco_track) < 2) continue; 
				if(pt >= 200.&&pt < 300. && trk_nSCTHits->at(reco_track) < 4) continue; 
				if(pt >= 300.&& trk_nSCTHits->at(reco_track) < 6) continue; 
				if (trk_expectBLayerHit -> at(reco_track)==1 && trk_nBLHits -> at(reco_track)==0)                         continue;
				if (trk_pt -> at(reco_track) > 10000. && TMath::Prob(trk_chi2->at(reco_track),trk_ndof->at(reco_track)) <= 0.01) continue;
				if(trk_theta->at(reco_track) == 0)      continue; // safety
				float z0     = trk_z0_wrtPV->at(reco_track)*sin(trk_theta->at(reco_track));
				float ez0    = sqrt(pow(trk_err_z0_wrtPV->at(reco_track),2)   *pow(sin(trk_theta->at(reco_track)),2) + 
								pow(trk_err_theta_wrtPV->at(reco_track),2)*pow(cos(trk_theta->at(reco_track))
													*trk_z0_wrtPV->at(reco_track),2) + 
														2*sin(trk_theta->at(reco_track))*cos(trk_theta->at(reco_track))*trk_z0_wrtPV->at(reco_track)*														trk_cov_z0_theta_wrtPV->at(reco_track));

				float d0 = trk_d0_wrtPV->at(reco_track);
				float ed0    = trk_err_d0_wrtPV->at(reco_track);
				if (
				       trk_nPixHits -> at(reco_track)     >= 1    &&
				       fabs(trk_eta -> at(reco_track))<2.5      &&
				       fabs(d0/ed0) < 3.0 &&
				       fabs(z0/ez0) < 3.0 &&
				       trk_pt->at(reco_track)>trkThresh
				   ) { trkQuality = 1; }
				else continue;
			}

			//calculate sumPt in cone radius 0.2 around muon
			//Only for PbPb at the moment
			if(!isPbP){

			//dphi of track and primary track of muon
			float dPhiTrkMu = fabs(trk_phi_wrtPV->at(reco_track) - mu_muid_id_phi_exPV->at(imu)) ;
			float etaMu = -1.*TMath::Log(TMath::Tan(mu_muid_id_theta_exPV->at(imu)/2.)) ;
			float dEtaTrkMu = fabs(etaMu-trk_eta->at(reco_track));
			float dR = TMath::Sqrt(dEtaTrkMu*dEtaTrkMu+dPhiTrkMu*dPhiTrkMu);

			if(dR<=coneRadius){
				//running sum of track pT (MeV)
				ptConeSum += trk_pt->at(reco_track);
			}

			}
		
		}//trk	

		//subtract off muon track momentum
		ptConeSum-= fabs(1./mu_muid_id_qoverp->at(imu))*TMath::Sin(mu_muid_id_theta_exPV->at(imu));

		//if (ptConeSum < 0.0) ptConeSum = 0.0;
		return ptConeSum;

}



//-----------------------------------------------------------------------

//for affiliating all possible combined masses with a single muon
//used in the W analysis for vetoing Z and DY
  void MuonBranch::MuonMass () {

  int indexOS = 0;

  Vecsinglemuid_massCBOS->clear() ;

  for (int i=0; i<mu_muid_n;++i){
     Vecsinglemuid_massCBOS_one.clear();

       for (int j=0; j<mu_muid_n; ++j){
         
          if ( (mu_muid_charge->at(i)*mu_muid_charge->at(j)) < 0. ){
	   
	   float ptTemp1 = mu_muid_pt->at(i)/1000.;
	   float ptTemp2 = mu_muid_pt->at(j)/1000.;
	  
	   float etaTemp1 = mu_muid_eta->at(i) ;
	   float etaTemp2 = mu_muid_eta->at(j) ;

	   float phiTemp1 = mu_muid_phi->at(i);
	   float phiTemp2 = mu_muid_phi->at(j);

           TLorentzVector v1OS; v1OS.SetPtEtaPhiM(ptTemp1,etaTemp1,phiTemp1,0.1);
           TLorentzVector v2OS;  v2OS.SetPtEtaPhiM(ptTemp2,etaTemp2,phiTemp2,0.1);
	   TLorentzVector vSumOS;
	   vSumOS = v1OS + v2OS;
	   float invMassTemp = vSumOS.M();
	   Vecsinglemuid_massCBOS_one.push_back(invMassTemp);

	   indexOS++;
          }
	  else if (mu_muid_charge->at(i)*mu_muid_charge->at(j) > 0.){
	   Vecsinglemuid_massCBOS_one.push_back(-9999.);
	 }
	  else std::cout<<"WARNING:Opposite or same sign pair not found!"<<std::endl;
         }
     ///pushback vector of massCBOS combo from muon i
     Vecsinglemuid_massCBOS->push_back(Vecsinglemuid_massCBOS_one);
    }
  }

//----------------------------------------------------------------------

///max number of combinations is mu_muid_n C 2
  void MuonBranch::diMuonMass () {
  //int index = Binomial(mu_muid_n,2);
  int indexSS = 0;
  int indexOS = 0;
  for (int i=0; i<mu_muid_n;++i){
       for (int j=i+1; j<mu_muid_n; ++j){
          /*TLorentzVector v1 = lv(Mymu_muid_pt[i],Mymu_muid_eta[i],Mymu_muid_phi[i]);
          TLorentzVector v2 = lv(Mymu_muid_pt[j],Mymu_muid_eta[j],Mymu_muid_phi[j]);
	  TLorentzVector vSum = v1 + v2;
          Mymuid_massCB[index] = vSum.M()/1000.;*/

          float chargeTemp1 = mu_muid_charge->at(i) ;
	  float chargeTemp2 = mu_muid_charge->at(j) ;
          if ((chargeTemp1*chargeTemp2) < 0.){
          //TLorentzVector v1OS = lv(Mymu_muid_pt[i],Mymu_muid_eta[i],Mymu_muid_phi[i]);
	  float ptTemp1 = mu_muid_pt->at(i)/1000.;
	  float ptTemp2 = mu_muid_pt->at(j)/1000.;
          TLorentzVector v1OS = lv(ptTemp1,mu_muid_eta->at(i),mu_muid_phi->at(i));
          //TLorentzVector v2OS = lv(Mymu_muid_pt[j],Mymu_muid_eta[j],Mymu_muid_phi[j]);
          TLorentzVector v2OS = lv(ptTemp2,mu_muid_eta->at(j),mu_muid_phi->at(j));
	  TLorentzVector vSumOS = v1OS + v2OS;
          //Mymuid_massCBOS[indexOS] = vSumOS.M()/1000.;
          Mymuid_massCBOS[indexOS] = vSumOS.M();
	  
	  //Mysinglemuid_massCBOS[i][j] = Mymuid_massCBOS[indexOS] ;

	  isGoodDiMuonOS[indexOS] = isGoodDiMuon(i,j);
	  dimuid_indexOS1[indexOS] = i; 
	  dimuid_indexOS2[indexOS] = j; 

	  indexOS++;
          }

          if ((Mymu_muid_charge[i]* Mymu_muid_charge[j])>0){
          TLorentzVector v1SS = lv(Mymu_muid_pt[i]/1000.,Mymu_muid_eta[i],Mymu_muid_phi[i]);
          TLorentzVector v2SS = lv(Mymu_muid_pt[j]/1000.,Mymu_muid_eta[j],Mymu_muid_phi[j]);
	  TLorentzVector vSumSS = v1SS + v2SS;
          Mymuid_massCBSS[indexSS] = vSumSS.M();

	  isGoodDiMuonSS[indexSS] = isGoodDiMuon(i,j);
	  dimuid_indexSS1[indexSS] = i; 
	  dimuid_indexSS2[indexSS] = j; 

	  indexSS++;
          }

         }
    }
  }

//----------------------------------------------------------------------

void MuonBranch::Fill_Muon_Branches(){

   Mymu_muid_n=mu_muid_n; 
   //number of L3 muons in the event
   Mytrig_EF_trigmuonef_n = trig_EF_trigmuonef_n;

   Mytrig_EF_trigmuonef_track_MS_hasMS->clear();
   Mytrig_EF_trigmuonef_track_MS_phi->clear() ;
   Mytrig_EF_trigmuonef_track_MS_eta->clear() ;


   for(int i = 0; i<trig_EF_trigmuonef_n; ++i){
   	
	Mytrig_EF_trigmuonef_track_MS_hasMS_one.clear() ;
   	Mytrig_EF_trigmuonef_track_MS_phi_one.clear() ;
   	Mytrig_EF_trigmuonef_track_MS_eta_one.clear() ;
     //single muon trigger information
//     Mytrig_EF_trigmuonef_EF_mu6_MSonly_L1TE50[i] = trig_EF_trigmuonef_EF_mu6_MSonly_L1TE50->at(i); 
//     Mytrig_EF_trigmuonef_EF_mu6_L1VTE50[i] = trig_EF_trigmuonef_EF_mu6_L1VTE50->at(i); 
     Mytrig_EF_trigmuonef_EF_mu4_MSonly_L1TE50[i] =  trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50->at(i);
     Mytrig_EF_trigmuonef_EF_mu4_L1VTE50[i] = trig_EF_trigmuonef_EF_mu4_L1VTE50->at(i);
     if((RunNumber!=193211&&RunNumber!=194079)||isMC) Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC[i] = trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC->at(i);
     if((RunNumber>=193403&&RunNumber!=194287)||isMC){
       Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10[i] = trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10->at(i);
       Mytrig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20[i] = trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20->at(i);
     }
     //number of tracks affiliated with a L3 muon
     Mytrig_EF_trigmuonef_track_n[i] = trig_EF_trigmuonef_track_n->at(i);

     int n_mu_in_a_roi = trig_EF_trigmuonef_track_n->at(i);
     //loop over tracks in the ROI and store information about that track
     for(int j=0; j<n_mu_in_a_roi; j++){
       Mytrig_EF_trigmuonef_track_MS_hasMS_one.push_back(trig_EF_trigmuonef_track_MS_hasMS->at(i)[j]);

       Mytrig_EF_trigmuonef_track_MS_phi_one.push_back(trig_EF_trigmuonef_track_MS_phi->at(i)[j]);

       Mytrig_EF_trigmuonef_track_MS_eta_one.push_back(trig_EF_trigmuonef_track_MS_eta->at(i)[j]);
     }

       Mytrig_EF_trigmuonef_track_MS_hasMS->push_back(Mytrig_EF_trigmuonef_track_MS_hasMS_one);
       Mytrig_EF_trigmuonef_track_MS_phi->push_back(Mytrig_EF_trigmuonef_track_MS_phi_one) ;
       Mytrig_EF_trigmuonef_track_MS_eta->push_back(Mytrig_EF_trigmuonef_track_MS_eta_one) ;
     //isGoodEFMuon[i] = SelectMuon(i) ;
   }
   muid_npairs = TMath::Binomial(mu_muid_n,2);
        Mymu_muid_EFCB_n_tot=0;
        Mymu_muid_EFMG_n_tot=0;
        Mymu_muid_EFME_n_tot=0;
	TLorentzVector v;
   for(int i=0;i<mu_muid_n;i++){
      isGoodMuon[i]                     =        SelectMuon(i);
      isGoodMuon2[i]                    =        isGood_Ricard(i);

      //truth
      if(isMC){
      Mymu_muid_truth_dr[i]             =       mu_muid_truth_dr->at(i);
      Mymu_muid_truth_E[i]              =       mu_muid_truth_E->at(i);
      Mymu_muid_truth_pt[i]             =       mu_muid_truth_pt->at(i);
      Mymu_muid_truth_eta[i]            =       mu_muid_truth_eta->at(i);
      Mymu_muid_truth_phi[i]            =       mu_muid_truth_phi->at(i);
      Mymu_muid_truth_type[i]           =       mu_muid_truth_type->at(i);
      Mymu_muid_truth_status[i]         =       mu_muid_truth_status->at(i);
      Mymu_muid_truth_barcode[i]        =       mu_muid_truth_barcode->at(i);
      Mymu_muid_truth_mothertype[i]     =       mu_muid_truth_mothertype->at(i);
      Mymu_muid_truth_motherbarcode[i]  =       mu_muid_truth_motherbarcode->at(i);
      Mymu_muid_truth_matched[i]        =       mu_muid_truth_matched->at(i);
      }

      Mymu_muid_E[i]			=      mu_muid_E->at(i);						     
      Mymu_muid_pt[i]			=      mu_muid_pt->at(i);						     
      Mymu_muid_m[i]			=      mu_muid_m->at(i);						     
      Mymu_muid_eta[i]			=      mu_muid_eta->at(i);						     
      Mymu_muid_phi[i]			=      mu_muid_phi->at(i);						     
      ///calculate the lorentz vector of the muon
      v                                 =      lv(Mymu_muid_pt[i],Mymu_muid_eta[i],Mymu_muid_phi[i]);
      ///return magnitude/invariant mass of the muon
      Mymuid_invMass[i]                 =      v.M2();
      Mymu_muid_px[i]			=      mu_muid_px->at(i);						     
      Mymu_muid_py[i]			=      mu_muid_py->at(i);						     
      Mymu_muid_pz[i]			=      mu_muid_pz->at(i);						     
      Mymu_muid_charge[i]		=      mu_muid_charge->at(i);					     
      Mymu_muid_allauthor[i]		=      mu_muid_allauthor->at(i);					     
      Mymu_muid_author[i]		=      mu_muid_author->at(i);					     
      Mymu_muid_beta[i]			=      mu_muid_beta->at(i);						     
      Mymu_muid_isMuonLikelihood[i]	=      mu_muid_isMuonLikelihood->at(i);				     
      Mymu_muid_matchchi2[i]		=      mu_muid_matchchi2->at(i);					     
      Mymu_muid_matchndof[i]		=      mu_muid_matchndof->at(i);					     
      Mymu_muid_etcone20[i]		=      mu_muid_etcone20->at(i);					     
      Mymu_muid_etcone30[i]		=      mu_muid_etcone30->at(i);					     
      Mymu_muid_etcone40[i]		=      mu_muid_etcone40->at(i);					     
      Mymu_muid_nucone20[i]		=      mu_muid_nucone20->at(i);					     
      Mymu_muid_nucone30[i]		=      mu_muid_nucone30->at(i);					     
      Mymu_muid_nucone40[i]		=      mu_muid_nucone40->at(i);					     
      Mymu_muid_ptcone20[i]		=      mu_muid_ptcone20->at(i);					     
      Mymu_muid_ptcone30[i]		=      mu_muid_ptcone30->at(i);					     
      Mymu_muid_ptcone40[i]		=      mu_muid_ptcone40->at(i);					     
      if(!isPbP){
	totalMuPtCone20ID[i]		=      MuonIsolation(i,3000.0, 0.2);	
	totalMuPtCone30ID[i]		=      MuonIsolation(i,3000.0, 0.3);	
      }
      Mymu_muid_energyLossPar[i]	=      mu_muid_energyLossPar->at(i);					     
      Mymu_muid_energyLossErr[i]	=      mu_muid_energyLossErr->at(i);					     
      Mymu_muid_etCore[i]		=      mu_muid_etCore->at(i);					     
      Mymu_muid_energyLossType[i]	=      mu_muid_energyLossType->at(i);				     
      Mymu_muid_caloMuonIdTag[i]	=      mu_muid_caloMuonIdTag->at(i);					     
      Mymu_muid_caloLRLikelihood[i]	=      mu_muid_caloLRLikelihood->at(i);				     
      Mymu_muid_bestMatch[i]		=      mu_muid_bestMatch->at(i);					     
      Mymu_muid_isStandAloneMuon[i]	=      mu_muid_isStandAloneMuon->at(i);				     
      Mymu_muid_isCombinedMuon[i]	=      mu_muid_isCombinedMuon->at(i);				     
      Mymu_muid_isLowPtReconstructedMuon[i]	=      mu_muid_isLowPtReconstructedMuon->at(i);		     
      Mymu_muid_isSegmentTaggedMuon[i]	=      mu_muid_isSegmentTaggedMuon->at(i);				     




      Mymu_muid_isCaloMuonId[i]		=      mu_muid_isCaloMuonId->at(i);					     
      Mymu_muid_alsoFoundByLowPt[i]	=      mu_muid_alsoFoundByLowPt->at(i);				     
      Mymu_muid_alsoFoundByCaloMuonId[i]=      mu_muid_alsoFoundByCaloMuonId->at(i);				     
      Mymu_muid_loose[i]		=      mu_muid_loose->at(i);						     
      Mymu_muid_medium[i]		=      mu_muid_medium->at(i);					     
      Mymu_muid_tight[i]		=      mu_muid_tight->at(i);						     
      Mymu_muid_d0_exPV[i]		=      mu_muid_d0_exPV->at(i);					     
      Mymu_muid_z0_exPV[i]		=      mu_muid_z0_exPV->at(i);					     
      Mymu_muid_phi_exPV[i]		=      mu_muid_phi_exPV->at(i);					     
      Mymu_muid_theta_exPV[i]		=      mu_muid_theta_exPV->at(i);					     
      Mymu_muid_qoverp_exPV[i]		=      mu_muid_qoverp_exPV->at(i);					     
      Mymu_muid_cb_d0_exPV[i]		=      mu_muid_cb_d0_exPV->at(i);					     
      Mymu_muid_cb_z0_exPV[i]		=      mu_muid_cb_z0_exPV->at(i);					     
      Mymu_muid_cb_phi_exPV[i]		=      mu_muid_cb_phi_exPV->at(i);					     
      Mymu_muid_cb_theta_exPV[i]	=      mu_muid_cb_theta_exPV->at(i);					     
      Mymu_muid_cb_qoverp_exPV[i]	=      mu_muid_cb_qoverp_exPV->at(i);				     
      Mymu_muid_id_d0_exPV[i]		=      mu_muid_id_d0_exPV->at(i);					     
      Mymu_muid_id_z0_exPV[i]		=      mu_muid_id_z0_exPV->at(i);					     
      Mymu_muid_id_phi_exPV[i]		=      mu_muid_id_phi_exPV->at(i);					     
      Mymu_muid_id_theta_exPV[i]	=      mu_muid_id_theta_exPV->at(i);					     
      Mymu_muid_id_qoverp_exPV[i]	=      mu_muid_id_qoverp_exPV->at(i);				     
      Mymu_muid_me_d0_exPV[i]		=      mu_muid_me_d0_exPV->at(i);					     
      Mymu_muid_me_z0_exPV[i]		=      mu_muid_me_z0_exPV->at(i);					     
      Mymu_muid_me_phi_exPV[i]		=      mu_muid_me_phi_exPV->at(i);					     
      Mymu_muid_me_theta_exPV[i]	=      mu_muid_me_theta_exPV->at(i);					     
      Mymu_muid_me_qoverp_exPV[i]	=      mu_muid_me_qoverp_exPV->at(i);				     
      Mymu_muid_ie_d0_exPV[i]		=      mu_muid_ie_d0_exPV->at(i);					     
      Mymu_muid_ie_z0_exPV[i]		=      mu_muid_ie_z0_exPV->at(i);					     
      Mymu_muid_ie_phi_exPV[i]		=      mu_muid_ie_phi_exPV->at(i);					     
      Mymu_muid_ie_theta_exPV[i]	=      mu_muid_ie_theta_exPV->at(i);					     
      Mymu_muid_ie_qoverp_exPV[i]	=      mu_muid_ie_qoverp_exPV->at(i);				     
      Mymu_muid_cov_d0_exPV[i]		=      mu_muid_cov_d0_exPV->at(i);					     
      Mymu_muid_cov_z0_exPV[i]		=      mu_muid_cov_z0_exPV->at(i);					     
      Mymu_muid_cov_phi_exPV[i]		=      mu_muid_cov_phi_exPV->at(i);					     
      Mymu_muid_cov_theta_exPV[i]	=      mu_muid_cov_theta_exPV->at(i);				     
      Mymu_muid_cov_qoverp_exPV[i]	=      mu_muid_cov_qoverp_exPV->at(i);				     
      Mymu_muid_cov_d0_z0_exPV[i]	=      mu_muid_cov_d0_z0_exPV->at(i);				     
      Mymu_muid_cov_d0_phi_exPV[i]	=      mu_muid_cov_d0_phi_exPV->at(i);				     
      Mymu_muid_cov_d0_theta_exPV[i]	=      mu_muid_cov_d0_theta_exPV->at(i);				     
      Mymu_muid_cov_d0_qoverp_exPV[i]	=      mu_muid_cov_d0_qoverp_exPV->at(i);				     
      Mymu_muid_cov_z0_phi_exPV[i]	=      mu_muid_cov_z0_phi_exPV->at(i);				     
      Mymu_muid_cov_z0_theta_exPV[i]	=      mu_muid_cov_z0_theta_exPV->at(i);				     
      Mymu_muid_cov_z0_qoverp_exPV[i]	=      mu_muid_cov_z0_qoverp_exPV->at(i);				     
      Mymu_muid_cov_phi_theta_exPV[i]	=      mu_muid_cov_phi_theta_exPV->at(i);				     
      Mymu_muid_cov_phi_qoverp_exPV[i]	=      mu_muid_cov_phi_qoverp_exPV->at(i);				     
      Mymu_muid_cov_theta_qoverp_exPV[i]=      mu_muid_cov_theta_qoverp_exPV->at(i);				     
      Mymu_muid_id_cov_d0_exPV[i]	=      mu_muid_id_cov_d0_exPV->at(i);				     
      Mymu_muid_id_cov_z0_exPV[i]	=      mu_muid_id_cov_z0_exPV->at(i);				     
      Mymu_muid_id_cov_phi_exPV[i]	=      mu_muid_id_cov_phi_exPV->at(i);				     
      Mymu_muid_id_cov_theta_exPV[i]	=      mu_muid_id_cov_theta_exPV->at(i);				     
      Mymu_muid_id_cov_qoverp_exPV[i]	=      mu_muid_id_cov_qoverp_exPV->at(i);				     
      Mymu_muid_me_cov_d0_exPV[i]	=      mu_muid_me_cov_d0_exPV->at(i);				     
      Mymu_muid_me_cov_z0_exPV[i]	=      mu_muid_me_cov_z0_exPV->at(i);				     
      Mymu_muid_me_cov_phi_exPV[i]	=      mu_muid_me_cov_phi_exPV->at(i);				     
      Mymu_muid_me_cov_theta_exPV[i]	=      mu_muid_me_cov_theta_exPV->at(i);				     
      Mymu_muid_me_cov_qoverp_exPV[i]	=      mu_muid_me_cov_qoverp_exPV->at(i);				     
      Mymu_muid_ms_d0[i]		=      mu_muid_ms_d0->at(i);						     
      Mymu_muid_ms_z0[i]		=      mu_muid_ms_z0->at(i);						     
      Mymu_muid_ms_phi[i]		=      mu_muid_ms_phi->at(i);					     
      Mymu_muid_ms_theta[i]	=      mu_muid_ms_theta->at(i);					     
      Mymu_muid_ms_qoverp[i]	=      mu_muid_ms_qoverp->at(i);					     
      Mymu_muid_id_d0[i]	=      mu_muid_id_d0->at(i);						     
      Mymu_muid_id_z0[i]	=      mu_muid_id_z0->at(i);						     
      Mymu_muid_id_phi[i]	=      mu_muid_id_phi->at(i);					     
      Mymu_muid_id_theta[i]	=      mu_muid_id_theta->at(i);					     
      Mymu_muid_id_qoverp[i]	=      mu_muid_id_qoverp->at(i);					     
      Mymu_muid_me_d0[i]	=      mu_muid_me_d0->at(i);						     
      Mymu_muid_me_z0[i]	=      mu_muid_me_z0->at(i);						     
      Mymu_muid_me_phi[i]	=      mu_muid_me_phi->at(i);					     
      Mymu_muid_me_theta[i]	=      mu_muid_me_theta->at(i);					     
      Mymu_muid_me_qoverp[i]	=      mu_muid_me_qoverp->at(i);					     
      Mymu_muid_ie_d0[i]	=      mu_muid_ie_d0->at(i);						     
      Mymu_muid_ie_z0[i]	=      mu_muid_ie_z0->at(i);						     
      Mymu_muid_ie_phi[i]	=      mu_muid_ie_phi->at(i);					     
      Mymu_muid_ie_theta[i]	=      mu_muid_ie_theta->at(i);					     
      Mymu_muid_ie_qoverp[i]	=      mu_muid_ie_qoverp->at(i);					     
      Mymu_muid_nOutliersOnTrack[i]	=      mu_muid_nOutliersOnTrack->at(i);				     
      Mymu_muid_nBLHits[i]	=      mu_muid_nBLHits->at(i);					     
      Mymu_muid_nPixHits[i]	=      mu_muid_nPixHits->at(i);					     
      Mymu_muid_nSCTHits[i]	=      mu_muid_nSCTHits->at(i);					     
      Mymu_muid_nTRTHits[i]	=      mu_muid_nTRTHits->at(i);					     
      Mymu_muid_nTRTHighTHits[i]	=      mu_muid_nTRTHighTHits->at(i);					     
      Mymu_muid_nBLSharedHits[i]	=      mu_muid_nBLSharedHits->at(i);					     
      Mymu_muid_nPixSharedHits[i]	=      mu_muid_nPixSharedHits->at(i);				     
      Mymu_muid_nPixHoles[i]		=      mu_muid_nPixHoles->at(i);					     
      Mymu_muid_nSCTSharedHits[i]	=      mu_muid_nSCTSharedHits->at(i);				     
      Mymu_muid_nSCTHoles[i]		=      mu_muid_nSCTHoles->at(i);					     
      Mymu_muid_nTRTOutliers[i]		=      mu_muid_nTRTOutliers->at(i);					     
      Mymu_muid_nTRTHighTOutliers[i]	=      mu_muid_nTRTHighTOutliers->at(i);				     
      Mymu_muid_nGangedPixels[i]	=      mu_muid_nGangedPixels->at(i);					     
      Mymu_muid_nPixelDeadSensors[i]	=      mu_muid_nPixelDeadSensors->at(i);				     
      Mymu_muid_nSCTDeadSensors[i]	=      mu_muid_nSCTDeadSensors->at(i);				     
      Mymu_muid_nTRTDeadStraws[i]	=      mu_muid_nTRTDeadStraws->at(i);				     
      Mymu_muid_expectBLayerHit[i]	=      mu_muid_expectBLayerHit->at(i);				     
      Mymu_muid_nMDTHits[i]		=      mu_muid_nMDTHits->at(i);					     
      Mymu_muid_nMDTHoles[i]		=      mu_muid_nMDTHoles->at(i);					     
      Mymu_muid_nCSCEtaHits[i]		=      mu_muid_nCSCEtaHits->at(i);					     
      Mymu_muid_nCSCEtaHoles[i]		=      mu_muid_nCSCEtaHoles->at(i);					     
      Mymu_muid_nCSCPhiHits[i]		=      mu_muid_nCSCPhiHits->at(i);					     
      Mymu_muid_nCSCPhiHoles[i]		=      mu_muid_nCSCPhiHoles->at(i);					     
      Mymu_muid_nRPCEtaHits[i]		=      mu_muid_nRPCEtaHits->at(i);					     
      Mymu_muid_nRPCEtaHoles[i]		=      mu_muid_nRPCEtaHoles->at(i);					     
      Mymu_muid_nRPCPhiHits[i]		=      mu_muid_nRPCPhiHits->at(i);					     
      Mymu_muid_nRPCPhiHoles[i]		=      mu_muid_nRPCPhiHoles->at(i);					     
      Mymu_muid_nTGCEtaHits[i]		=      mu_muid_nTGCEtaHits->at(i);					     
      Mymu_muid_nTGCEtaHoles[i]		=      mu_muid_nTGCEtaHoles->at(i);					     
      Mymu_muid_nTGCPhiHits[i]		=      mu_muid_nTGCPhiHits->at(i);					     
      Mymu_muid_nTGCPhiHoles[i]		=      mu_muid_nTGCPhiHoles->at(i);					     
      Mymu_muid_nMDTBIHits[i]		=      mu_muid_nMDTBIHits->at(i);					     
      Mymu_muid_nMDTBMHits[i]		=      mu_muid_nMDTBMHits->at(i);					     
      Mymu_muid_nMDTBOHits[i]		=      mu_muid_nMDTBOHits->at(i);					     
      Mymu_muid_nMDTBEEHits[i]		=      mu_muid_nMDTBEEHits->at(i);					     
      Mymu_muid_nMDTBIS78Hits[i]	=      mu_muid_nMDTBIS78Hits->at(i);					     
      Mymu_muid_nMDTEIHits[i]		=      mu_muid_nMDTEIHits->at(i);					     
      Mymu_muid_nMDTEMHits[i]		=      mu_muid_nMDTEMHits->at(i);					     
      Mymu_muid_nMDTEOHits[i]		=      mu_muid_nMDTEOHits->at(i);					     
      Mymu_muid_nMDTEEHits[i]		=      mu_muid_nMDTEEHits->at(i);					     
      Mymu_muid_nRPCLayer1EtaHits[i]	=      mu_muid_nRPCLayer1EtaHits->at(i);				     
      Mymu_muid_nRPCLayer2EtaHits[i]	=      mu_muid_nRPCLayer2EtaHits->at(i);				     
      Mymu_muid_nRPCLayer3EtaHits[i]	=      mu_muid_nRPCLayer3EtaHits->at(i);				     
      Mymu_muid_nRPCLayer1PhiHits[i]	=      mu_muid_nRPCLayer1PhiHits->at(i);				     
      Mymu_muid_nRPCLayer2PhiHits[i]	=      mu_muid_nRPCLayer2PhiHits->at(i);				     
      Mymu_muid_nRPCLayer3PhiHits[i]	=      mu_muid_nRPCLayer3PhiHits->at(i);				     
      Mymu_muid_nTGCLayer1EtaHits[i]	=      mu_muid_nTGCLayer1EtaHits->at(i);				     
      Mymu_muid_nTGCLayer2EtaHits[i]	=      mu_muid_nTGCLayer2EtaHits->at(i);				     
      Mymu_muid_nTGCLayer3EtaHits[i]	=      mu_muid_nTGCLayer3EtaHits->at(i);				     
      Mymu_muid_nTGCLayer4EtaHits[i]	=      mu_muid_nTGCLayer4EtaHits->at(i);				     
      Mymu_muid_nTGCLayer1PhiHits[i]	=      mu_muid_nTGCLayer1PhiHits->at(i);				     
      Mymu_muid_nTGCLayer2PhiHits[i]	=      mu_muid_nTGCLayer2PhiHits->at(i);				     
      Mymu_muid_nTGCLayer3PhiHits[i]	=      mu_muid_nTGCLayer3PhiHits->at(i);				     
      Mymu_muid_nTGCLayer4PhiHits[i]	=      mu_muid_nTGCLayer4PhiHits->at(i);				     
      Mymu_muid_barrelSectors[i]	=      mu_muid_barrelSectors->at(i);					     
      Mymu_muid_endcapSectors[i]	=      mu_muid_endcapSectors->at(i);					     
      Mymu_muid_trackd0[i]		=      mu_muid_trackd0->at(i);					     
      Mymu_muid_trackz0[i]		=      mu_muid_trackz0->at(i);					     
      Mymu_muid_trackphi[i]		=      mu_muid_trackphi->at(i);					     
      Mymu_muid_tracktheta[i]		=      mu_muid_tracktheta->at(i);					     
      Mymu_muid_trackqoverp[i]		=      mu_muid_trackqoverp->at(i);					     
      Mymu_muid_trackcov_d0[i]		=      mu_muid_trackcov_d0->at(i);					     
      Mymu_muid_trackcov_z0[i]		=      mu_muid_trackcov_z0->at(i);					     
      Mymu_muid_trackcov_phi[i]		=      mu_muid_trackcov_phi->at(i);					     
      Mymu_muid_trackcov_theta[i]	=      mu_muid_trackcov_theta->at(i);				     
      Mymu_muid_trackcov_qoverp[i]	=      mu_muid_trackcov_qoverp->at(i);				     
      Mymu_muid_trackcov_d0_z0[i]	=      mu_muid_trackcov_d0_z0->at(i);				     
      Mymu_muid_trackcov_d0_phi[i]	=      mu_muid_trackcov_d0_phi->at(i);				     
      Mymu_muid_trackcov_d0_theta[i]	=      mu_muid_trackcov_d0_theta->at(i);				     
      Mymu_muid_trackcov_d0_qoverp[i]	=      mu_muid_trackcov_d0_qoverp->at(i);				     
      Mymu_muid_trackcov_z0_phi[i]	=      mu_muid_trackcov_z0_phi->at(i);				     
      Mymu_muid_trackcov_z0_theta[i]	=      mu_muid_trackcov_z0_theta->at(i);				     
      Mymu_muid_trackcov_z0_qoverp[i]	=      mu_muid_trackcov_z0_qoverp->at(i);				     
      Mymu_muid_trackcov_phi_theta[i]	=      mu_muid_trackcov_phi_theta->at(i);				     
      Mymu_muid_trackcov_phi_qoverp[i]	=      mu_muid_trackcov_phi_qoverp->at(i);				     
      Mymu_muid_trackcov_theta_qoverp[i]=      mu_muid_trackcov_theta_qoverp->at(i);				     
      Mymu_muid_trackfitchi2[i]		=      mu_muid_trackfitchi2->at(i);					     
      Mymu_muid_trackfitndof[i]		=      mu_muid_trackfitndof->at(i);					     
      Mymu_muid_hastrack[i]		=      mu_muid_hastrack->at(i);					     
      Mymu_muid_trackd0beam[i]		=      mu_muid_trackd0beam->at(i);					     
      Mymu_muid_trackz0beam[i]		=      mu_muid_trackz0beam->at(i);					     
      Mymu_muid_tracksigd0beam[i]	=      mu_muid_tracksigd0beam->at(i);				     
      Mymu_muid_tracksigz0beam[i]	=      mu_muid_tracksigz0beam->at(i);				     
      Mymu_muid_trackd0pv[i]		=      mu_muid_trackd0pv->at(i);					     
      Mymu_muid_trackz0pv[i]		=      mu_muid_trackz0pv->at(i);					     
      Mymu_muid_tracksigd0pv[i]		=      mu_muid_tracksigd0pv->at(i);					     
      Mymu_muid_tracksigz0pv[i]		=      mu_muid_tracksigz0pv->at(i);					     
      Mymu_muid_trackIPEstimate_d0_biasedpvunbiased[i]		=    mu_muid_trackIPEstimate_d0_biasedpvunbiased->at(i);     
      Mymu_muid_trackIPEstimate_z0_biasedpvunbiased[i]		=    mu_muid_trackIPEstimate_z0_biasedpvunbiased->at(i);     
      Mymu_muid_trackIPEstimate_sigd0_biasedpvunbiased[i]	=    mu_muid_trackIPEstimate_sigd0_biasedpvunbiased->at(i);     
      Mymu_muid_trackIPEstimate_sigz0_biasedpvunbiased[i]	=    mu_muid_trackIPEstimate_sigz0_biasedpvunbiased->at(i);     
      Mymu_muid_trackIPEstimate_d0_unbiasedpvunbiased[i]	=    mu_muid_trackIPEstimate_d0_unbiasedpvunbiased->at(i);     
      Mymu_muid_trackIPEstimate_z0_unbiasedpvunbiased[i]	=    mu_muid_trackIPEstimate_z0_unbiasedpvunbiased->at(i);     
      Mymu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased[i]	=    mu_muid_trackIPEstimate_sigd0_unbiasedpvunbiased->at(i);     
      Mymu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased[i]	=    mu_muid_trackIPEstimate_sigz0_unbiasedpvunbiased->at(i);     
      Mymu_muid_trackd0pvunbiased[i]	=      mu_muid_trackd0pvunbiased->at(i);				     
      Mymu_muid_trackz0pvunbiased[i]	=      mu_muid_trackz0pvunbiased->at(i);				     
      Mymu_muid_tracksigd0pvunbiased[i]	=      mu_muid_tracksigd0pvunbiased->at(i);				     
      Mymu_muid_tracksigz0pvunbiased[i]	=      mu_muid_tracksigz0pvunbiased->at(i);				     



//-----------------------------------------------------------------------------------------
      std::vector<float> tempvec1,tempvec2,tempvec3; 
      std::vector<int> tempvec4; 
      Mymu_muid_EFCB_dr[i]		=      mu_muid_EFCB_dr->at(i);					     
      Mymu_muid_EFCB_n[i]		=      mu_muid_EFCB_n->at(i);
      tempvec1 = mu_muid_EFCB_pt   ->at(i);
      tempvec2 = mu_muid_EFCB_eta  ->at(i);
      tempvec3 = mu_muid_EFCB_phi  ->at(i);
      tempvec4 = mu_muid_EFCB_hasCB->at(i); 
      if(tempvec1.size() !=Mymu_muid_EFCB_n[i]) {std::cout<<"ERROR ERROR"<<std::endl;exit(0);} 					     
      for(int i_EFCB =0;i_EFCB<Mymu_muid_EFCB_n[i];i_EFCB++){
        Mymu_muid_EFCB_pt   [Mymu_muid_EFCB_n_tot] = tempvec1.at(i_EFCB);    
        Mymu_muid_EFCB_eta  [Mymu_muid_EFCB_n_tot] = tempvec2.at(i_EFCB);  
        Mymu_muid_EFCB_phi  [Mymu_muid_EFCB_n_tot] = tempvec3.at(i_EFCB);  
        Mymu_muid_EFCB_hasCB[Mymu_muid_EFCB_n_tot] = tempvec4.at(i_EFCB);  
        Mymu_muid_EFCB_n_tot++;
      }
      Mymu_muid_EFCB_matched[i]		=      mu_muid_EFCB_matched->at(i);
					     
      Mymu_muid_EFMG_dr[i]		=      mu_muid_EFMG_dr->at(i);					     
      Mymu_muid_EFMG_n[i]		=      mu_muid_EFMG_n->at(i);					     
        tempvec1 = mu_muid_EFMG_pt   ->at(i);
        tempvec2 = mu_muid_EFMG_eta  ->at(i);
        tempvec3 = mu_muid_EFMG_phi  ->at(i);
        tempvec4 = mu_muid_EFMG_hasMG->at(i);  					     
      for(int i_EFMG =0;i_EFMG<Mymu_muid_EFMG_n[i];i_EFMG++){
        Mymu_muid_EFMG_pt   [Mymu_muid_EFMG_n_tot] = tempvec1.at(i_EFMG);    
        Mymu_muid_EFMG_eta  [Mymu_muid_EFMG_n_tot] = tempvec2.at(i_EFMG);  
        Mymu_muid_EFMG_phi  [Mymu_muid_EFMG_n_tot] = tempvec3.at(i_EFMG);  
        Mymu_muid_EFMG_hasMG[Mymu_muid_EFMG_n_tot] = tempvec4.at(i_EFMG);  
        Mymu_muid_EFMG_n_tot++;
      }
      Mymu_muid_EFMG_matched[i]		=      mu_muid_EFMG_matched->at(i);

					     
      Mymu_muid_EFME_dr[i]		=      mu_muid_EFME_dr->at(i);					     
      Mymu_muid_EFME_n[i]		=      mu_muid_EFME_n->at(i);					     
        tempvec1 = mu_muid_EFME_pt   ->at(i);
        tempvec2 = mu_muid_EFME_eta  ->at(i);
        tempvec3 = mu_muid_EFME_phi  ->at(i);
        tempvec4 = mu_muid_EFME_hasME->at(i);  					     
      for(int i_EFME =0;i_EFME<Mymu_muid_EFME_n[i];i_EFME++){
        Mymu_muid_EFME_pt   [Mymu_muid_EFME_n_tot] = tempvec1.at(i_EFME);    
        Mymu_muid_EFME_eta  [Mymu_muid_EFME_n_tot] = tempvec2.at(i_EFME);  
        Mymu_muid_EFME_phi  [Mymu_muid_EFME_n_tot] = tempvec3.at(i_EFME);  
        Mymu_muid_EFME_hasME[Mymu_muid_EFME_n_tot] = tempvec4.at(i_EFME);  
        Mymu_muid_EFME_n_tot++;
      }
      Mymu_muid_EFME_matched[i]		=      mu_muid_EFME_matched->at(i);					     
//-----------------------------------------------------------------------------------------




      Mymu_muid_L2CB_dr[i]		=      mu_muid_L2CB_dr->at(i);					     
      Mymu_muid_L2CB_pt[i]		=      mu_muid_L2CB_pt->at(i);					     
      Mymu_muid_L2CB_eta[i]		=      mu_muid_L2CB_eta->at(i);					     
      Mymu_muid_L2CB_phi[i]		=      mu_muid_L2CB_phi->at(i);					     
      Mymu_muid_L2CB_id_pt[i]		=      mu_muid_L2CB_id_pt->at(i);					     
      Mymu_muid_L2CB_ms_pt[i]		=      mu_muid_L2CB_ms_pt->at(i);					     
      Mymu_muid_L2CB_nPixHits[i]	=      mu_muid_L2CB_nPixHits->at(i);					     
      Mymu_muid_L2CB_nSCTHits[i]	=      mu_muid_L2CB_nSCTHits->at(i);					     
      Mymu_muid_L2CB_nTRTHits[i]	=      mu_muid_L2CB_nTRTHits->at(i);					     
      Mymu_muid_L2CB_nTRTHighTHits[i]	=      mu_muid_L2CB_nTRTHighTHits->at(i);				     
      Mymu_muid_L2CB_matched[i]		=      mu_muid_L2CB_matched->at(i);					     
      Mymu_muid_L1_dr[i]		=      mu_muid_L1_dr->at(i);						     
      Mymu_muid_L1_pt[i]		=      mu_muid_L1_pt->at(i);						     
      Mymu_muid_L1_eta[i]		=      mu_muid_L1_eta->at(i);					     
      Mymu_muid_L1_phi[i]		=      mu_muid_L1_phi->at(i);					     
      Mymu_muid_L1_thrNumber[i]		=      mu_muid_L1_thrNumber->at(i);					     
      Mymu_muid_L1_RoINumber[i]		=      mu_muid_L1_RoINumber->at(i);					     
      Mymu_muid_L1_sectorAddress[i]	=      mu_muid_L1_sectorAddress->at(i);				     
      Mymu_muid_L1_firstCandidate[i]	=      mu_muid_L1_firstCandidate->at(i);				     
      Mymu_muid_L1_moreCandInRoI[i]	=      mu_muid_L1_moreCandInRoI->at(i);				     
      Mymu_muid_L1_moreCandInSector[i]	=      mu_muid_L1_moreCandInSector->at(i);				     
      Mymu_muid_L1_source[i]		=      mu_muid_L1_source->at(i);					     
      Mymu_muid_L1_hemisphere[i]	=      mu_muid_L1_hemisphere->at(i);					     
      Mymu_muid_L1_charge[i]		=      mu_muid_L1_charge->at(i);					     
      Mymu_muid_L1_vetoed[i]		=      mu_muid_L1_vetoed->at(i);					     
      Mymu_muid_L1_matched[i]		=      mu_muid_L1_matched->at(i);					     
      Mymuid_nScatters[i]		=      muid_nScatters->at(i);					     
      Mymuid_scatSignificance[i]	=      muid_scatSignificance->at(i);					     
      Mymuid_neighbourSignificance[i]	=      muid_neighbourSignificance->at(i);				     
      Mymuid_eta[i]			=      muid_eta->at(i);
    
  }

  MuonMass();
  IDprobes();
  MSprobes();

////////////////////////////////////////////
//JET AND CALO INFO////////////////////
///////////////////////////////////////////
if(!isPP&&!isPbP){

   Myantikt2HIItrEM_n = antikt2HIItrEM_n;

   
   if(isMC){
	Myantikt2Truth_n = antikt2Truth_n;		

	for(int itru=0;itru<antikt2Truth_n;itru++){
		
		Myantikt2Truth_E[itru] = antikt2Truth_E->at(itru);
		Myantikt2Truth_pt[itru] = antikt2Truth_pt->at(itru) ;
		Myantikt2Truth_m[itru] = antikt2Truth_m->at(itru) ;
		Myantikt2Truth_eta[itru] = antikt2Truth_eta->at(itru);
		Myantikt2Truth_phi[itru] = antikt2Truth_phi->at(itru);
	}
   }
   ///event loop
   for(int i=0;i<antikt2HIItrEM_n;i++){
	Myantikt2HIItrEM_E[i]=antikt2HIItrEM_E->at(i);
	Myantikt2HIItrEM_pt[i]=antikt2HIItrEM_pt->at(i);
	Myantikt2HIItrEM_m[i]=(antikt2HIItrEM_m->at(i));
	Myantikt2HIItrEM_eta[i]=(antikt2HIItrEM_eta->at(i));
	Myantikt2HIItrEM_phi[i]=(antikt2HIItrEM_phi->at(i));
	Myantikt2HIItrEM_MaxOverMean[i]=(antikt2HIItrEM_MaxOverMean->at(i));
	Myantikt2HIItrEM_MeanTowerEt[i]=(antikt2HIItrEM_MeanTowerEt->at(i));
	Myantikt2HIItrEM_SubtractedEt[i]=(antikt2HIItrEM_SubtractedEt->at(i));
	Myantikt2HIItrEM_RMSTowerEt[i]= (antikt2HIItrEM_RMSTowerEt->at(i));
	Myantikt2HIItrEM_GausEt[i]= (antikt2HIItrEM_GausEt->at(i));
	Myantikt2HIItrEM_SelfEnergy[i]= (antikt2HIItrEM_SelfEnergy->at(i));
	Myantikt2HIItrEM_SumJt[i]= (antikt2HIItrEM_SumJt->at(i));
	Myantikt2HIItrEM_CoreEt[i]= (antikt2HIItrEM_CoreEt->at(i));
	Myantikt2HIItrEM_EdgeEt[i]= (antikt2HIItrEM_EdgeEt->at(i));
	Myantikt2HIItrEM_CryoCorr[i]= (antikt2HIItrEM_CryoCorr->at(i));
	Myantikt2HIItrEM_NoFlow[i]= (antikt2HIItrEM_NoFlow->at(i));
	Myantikt2HIItrEM_NumConstituents[i]= (antikt2HIItrEM_NumConstituents->at(i));
	Myantikt2HIItrEM_UncalibEt[i]= (antikt2HIItrEM_UncalibEt->at(i));
	Myantikt2HIItrEM_Discriminant[i]= (antikt2HIItrEM_Discriminant->at(i));
	Myantikt2HIItrEM_MeanTowerEtUnsubtr[i]= (antikt2HIItrEM_MeanTowerEtUnsubtr->at(i));
	Myantikt2HIItrEM_n90[i]= (antikt2HIItrEM_n90->at(i));
	Myantikt2HIItrEM_fracSamplingMax[i]= (antikt2HIItrEM_fracSamplingMax->at(i));
	Myantikt2HIItrEM_SamplingMax[i]= (antikt2HIItrEM_SamplingMax->at(i));
	Myantikt2HIItrEM_n90constituents[i]= (antikt2HIItrEM_n90constituents->at(i));
	Myantikt2HIItrEM_Timing[i]= (antikt2HIItrEM_Timing->at(i));
	Myantikt2HIItrEM_LArQuality[i]= (antikt2HIItrEM_LArQuality->at(i));
	Myantikt2HIItrEM_HECQuality[i]= (antikt2HIItrEM_HECQuality->at(i));
	Myantikt2HIItrEM_TileQuality[i]= (antikt2HIItrEM_TileQuality->at(i));
/*	Myantikt2HIItrEM_const_n[i]= (antikt2HIItrEM_const_n->at(i));
	Myantikt2HIItrEM_const_et[i]= (antikt2HIItrEM_const_et->at(i));
	Myantikt2HIItrEM_const_eta[i]= (antikt2HIItrEM_const_eta->at(i));
	Myantikt2HIItrEM_const_phi[i]= (antikt2HIItrEM_const_phi->at(i));
	Myantikt2HIItrEM_sampling_et[i]= (antikt2HIItrEM_sampling_et->at(i));
	Myantikt2HIItrEM_sampling_et_unsubtr[i]= (antikt2HIItrEM_sampling_et_unsubtr->at(i));
	Myantikt2HIItrEM_bad_cell_n[i]= antikt2HIItrEM_bad_cell_n->at(i);
	Myantikt2HIItrEM_bad_cell_et[i]= antikt2HIItrEM_bad_cell_et->at(i);
	Myantikt2HIItrEM_bad_cell_area[i]= antikt2HIItrEM_bad_cell_area->at(i);
	Myantikt2HIItrEM_empty_cell_n[i]= antikt2HIItrEM_empty_cell_n->at(i);
	Myantikt2HIItrEM_empty_cell_area[i]= antikt2HIItrEM_empty_cell_area->at(i);
	Myantikt2HIItrEM_total_cell_n[i]= antikt2HIItrEM_total_cell_n->at(i);
	Myantikt2HIItrEM_total_cell_et[i]= antikt2HIItrEM_total_cell_et->at(i);
	Myantikt2HIItrEM_total_cell_area[i]= antikt2HIItrEM_total_cell_area->at(i);*/
   }
   ///cone30
   Myantikt3HIItrEM_n = antikt3HIItrEM_n;
   ///event loop
   for(int i=0;i<antikt3HIItrEM_n;i++){
	Myantikt3HIItrEM_E[i]=antikt3HIItrEM_E->at(i);
	Myantikt3HIItrEM_pt[i]=antikt3HIItrEM_pt->at(i);
	Myantikt3HIItrEM_m[i]=(antikt3HIItrEM_m->at(i));
	Myantikt3HIItrEM_eta[i]=(antikt3HIItrEM_eta->at(i));
	Myantikt3HIItrEM_phi[i]=(antikt3HIItrEM_phi->at(i));
	Myantikt3HIItrEM_MaxOverMean[i]=(antikt3HIItrEM_MaxOverMean->at(i));
	Myantikt3HIItrEM_MeanTowerEt[i]=(antikt3HIItrEM_MeanTowerEt->at(i));
	Myantikt3HIItrEM_SubtractedEt[i]=(antikt3HIItrEM_SubtractedEt->at(i));
	Myantikt3HIItrEM_RMSTowerEt[i]= (antikt3HIItrEM_RMSTowerEt->at(i));
	Myantikt3HIItrEM_GausEt[i]= (antikt3HIItrEM_GausEt->at(i));
	Myantikt3HIItrEM_SelfEnergy[i]= (antikt3HIItrEM_SelfEnergy->at(i));
	Myantikt3HIItrEM_SumJt[i]= (antikt3HIItrEM_SumJt->at(i));
	Myantikt3HIItrEM_CoreEt[i]= (antikt3HIItrEM_CoreEt->at(i));
	Myantikt3HIItrEM_EdgeEt[i]= (antikt3HIItrEM_EdgeEt->at(i));
	Myantikt3HIItrEM_CryoCorr[i]= (antikt3HIItrEM_CryoCorr->at(i));
	Myantikt3HIItrEM_NoFlow[i]= (antikt3HIItrEM_NoFlow->at(i));
	Myantikt3HIItrEM_NumConstituents[i]= (antikt3HIItrEM_NumConstituents->at(i));
	Myantikt3HIItrEM_UncalibEt[i]= (antikt3HIItrEM_UncalibEt->at(i));
	Myantikt3HIItrEM_Discriminant[i]= (antikt3HIItrEM_Discriminant->at(i));
	Myantikt3HIItrEM_MeanTowerEtUnsubtr[i]= (antikt3HIItrEM_MeanTowerEtUnsubtr->at(i));
	Myantikt3HIItrEM_n90[i]= (antikt3HIItrEM_n90->at(i));
	Myantikt3HIItrEM_fracSamplingMax[i]= (antikt3HIItrEM_fracSamplingMax->at(i));
	Myantikt3HIItrEM_SamplingMax[i]= (antikt3HIItrEM_SamplingMax->at(i));
	Myantikt3HIItrEM_n90constituents[i]= (antikt3HIItrEM_n90constituents->at(i));
	Myantikt3HIItrEM_Timing[i]= (antikt3HIItrEM_Timing->at(i));
	Myantikt3HIItrEM_LArQuality[i]= (antikt3HIItrEM_LArQuality->at(i));
	Myantikt3HIItrEM_HECQuality[i]= (antikt3HIItrEM_HECQuality->at(i));
	Myantikt3HIItrEM_TileQuality[i]= (antikt3HIItrEM_TileQuality->at(i));
/*	Myantikt3HIItrEM_const_n[i]= (antikt3HIItrEM_const_n->at(i));
	Myantikt3HIItrEM_const_et[i]= (antikt3HIItrEM_const_et->at(i));
	Myantikt3HIItrEM_const_eta[i]= (antikt3HIItrEM_const_eta->at(i));
	Myantikt3HIItrEM_const_phi[i]= (antikt3HIItrEM_const_phi->at(i));
	Myantikt3HIItrEM_sampling_et[i]= (antikt3HIItrEM_sampling_et->at(i));
	Myantikt3HIItrEM_sampling_et_unsubtr[i]= (antikt3HIItrEM_sampling_et_unsubtr->at(i));
	Myantikt3HIItrEM_bad_cell_n[i]= antikt3HIItrEM_bad_cell_n->at(i);
	Myantikt3HIItrEM_bad_cell_et[i]= antikt3HIItrEM_bad_cell_et->at(i);
	Myantikt3HIItrEM_bad_cell_area[i]= antikt3HIItrEM_bad_cell_area->at(i);
	Myantikt3HIItrEM_empty_cell_n[i]= antikt3HIItrEM_empty_cell_n->at(i);
	Myantikt3HIItrEM_empty_cell_area[i]= antikt3HIItrEM_empty_cell_area->at(i);
	Myantikt3HIItrEM_total_cell_n[i]= antikt3HIItrEM_total_cell_n->at(i);
	Myantikt3HIItrEM_total_cell_et[i]= antikt3HIItrEM_total_cell_et->at(i);
	Myantikt3HIItrEM_total_cell_area[i]= antikt3HIItrEM_total_cell_area->at(i);*/
   }

}   ///END JET INFO
else {
	MyAntiKt4TopoEM_n = AntiKt4TopoEM_n;
	for(int i=0;i<AntiKt4TopoEM_n;i++){
	   MyAntiKt4TopoEM_E[i] = AntiKt4TopoEM_E->at(i);
	   MyAntiKt4TopoEM_pt[i] = AntiKt4TopoEM_pt->at(i);
	   MyAntiKt4TopoEM_m[i] = AntiKt4TopoEM_m->at(i);
	   MyAntiKt4TopoEM_eta[i] = AntiKt4TopoEM_eta->at(i);
	   MyAntiKt4TopoEM_phi[i] = AntiKt4TopoEM_phi->at(i);
	   MyAntiKt4TopoEM_mu_dr[i] = AntiKt4TopoEM_mu_dr->at(i);
	   MyAntiKt4TopoEM_mu_matched[i] = AntiKt4TopoEM_mu_matched->at(i);

	}
}
}
///eof
