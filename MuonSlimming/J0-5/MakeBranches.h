
  tree = new TTree("tree","tree");
   tree->Branch("mu_muid_n",&Mymu_muid_n,"mu_muid_n/I");
   //tree->Branch("antikt2HIItrEM_n",&Myantikt2HIItrEM_n,"antikt2HIItrEM_n/I");
   tree->Branch("trig_EF_trigmuonef_n",&Mytrig_EF_trigmuonef_n,"trig_EF_trigmuonef_n/I");

   tree->Branch("pTCB_smeared",&pTCB_smeared,"pTCB_smeared[mu_muid_n]/D");
   tree->Branch("mTCB_smeared",&mTCB_smeared,"mTCB_smeared[mu_muid_n]/D");
   tree->Branch("pTMS_smeared",&pTMS_smeared,"pTMS_smeared[mu_muid_n]/D");
   tree->Branch("pTID_smeared",&pTID_smeared,"pTID_smeared[mu_muid_n]/D");
   tree->Branch("prompt",&prompt,"prompt[mu_muid_n]/I");
  tree->Branch("val",&val,"val[mu_muid_n]/I");
  tree->Branch("pt",&pt,"pt[mu_muid_n]/F");
  tree->Branch("mt",&mt,"mt[mu_muid_n]/F");
  tree->Branch("mtCalo",&mtCalo,"mtCalo[mu_muid_n]/F");
  tree->Branch("ptcone20",&ptcone20,"ptcone20[mu_muid_n]/F");
  tree->Branch("ptcone30",&ptcone30,"ptcone30[mu_muid_n]/F");
  tree->Branch("ptcone40",&ptcone40,"ptcone40[mu_muid_n]/F");

  tree->Branch("ptcone10ID05",&ptcone10ID05,"ptcone10ID05[mu_muid_n]/F");
  tree->Branch("ptcone15ID05",&ptcone15ID05,"ptcone15ID05[mu_muid_n]/F");
  tree->Branch("ptcone20ID05",&ptcone20ID05,"ptcone20ID05[mu_muid_n]/F");
  tree->Branch("ptcone30ID05",&ptcone30ID05,"ptcone30ID05[mu_muid_n]/F");
  tree->Branch("ptcone40ID05",&ptcone40ID05,"ptcone40ID05[mu_muid_n]/F");
  tree->Branch("ptcone50ID05",&ptcone50ID05,"ptcone50ID05[mu_muid_n]/F");

  tree->Branch("ptcone10ID075",&ptcone10ID075,"ptcone10ID075[mu_muid_n]/F");
  tree->Branch("ptcone15ID075",&ptcone15ID075,"ptcone15ID075[mu_muid_n]/F");
  tree->Branch("ptcone20ID075",&ptcone20ID075,"ptcone20ID075[mu_muid_n]/F");
  tree->Branch("ptcone30ID075",&ptcone30ID075,"ptcone30ID075[mu_muid_n]/F");
  tree->Branch("ptcone40ID075",&ptcone40ID075,"ptcone40ID075[mu_muid_n]/F");
  tree->Branch("ptcone50ID075",&ptcone50ID075,"ptcone50ID075[mu_muid_n]/F");

  tree->Branch("ptcone10ID1",&ptcone10ID1,"ptcone10ID1[mu_muid_n]/F");
  tree->Branch("ptcone15ID1",&ptcone15ID1,"ptcone15ID1[mu_muid_n]/F");
  tree->Branch("ptcone20ID1",&ptcone20ID1,"ptcone20ID1[mu_muid_n]/F");
  tree->Branch("ptcone30ID1",&ptcone30ID1,"ptcone30ID1[mu_muid_n]/F");
  tree->Branch("ptcone40ID1",&ptcone40ID1,"ptcone40ID1[mu_muid_n]/F");
  tree->Branch("ptcone50ID1",&ptcone50ID1,"ptcone50ID1[mu_muid_n]/F");

  tree->Branch("ptcone10ID2",&ptcone10ID2,"ptcone10ID2[mu_muid_n]/F");
  tree->Branch("ptcone15ID2",&ptcone15ID2,"ptcone15ID2[mu_muid_n]/F");
  tree->Branch("ptcone20ID2",&ptcone20ID2,"ptcone20ID2[mu_muid_n]/F");
  tree->Branch("ptcone30ID2",&ptcone30ID2,"ptcone30ID2[mu_muid_n]/F");
  tree->Branch("ptcone40ID2",&ptcone40ID2,"ptcone40ID2[mu_muid_n]/F");
  tree->Branch("ptcone50ID2",&ptcone50ID2,"ptcone50ID2[mu_muid_n]/F");

  tree->Branch("ptcone10ID3",&ptcone10ID3,"ptcone10ID3[mu_muid_n]/F");
  tree->Branch("ptcone15ID3",&ptcone15ID3,"ptcone15ID3[mu_muid_n]/F");
  tree->Branch("ptcone20ID3",&ptcone20ID3,"ptcone20ID3[mu_muid_n]/F");
  tree->Branch("ptcone30ID3",&ptcone30ID3,"ptcone30ID3[mu_muid_n]/F");
  tree->Branch("ptcone40ID3",&ptcone40ID3,"ptcone40ID3[mu_muid_n]/F");
  tree->Branch("ptcone50ID3",&ptcone50ID3,"ptcone50ID3[mu_muid_n]/F");

  tree->Branch("ptcone10ID4",&ptcone10ID4,"ptcone10ID4[mu_muid_n]/F");
  tree->Branch("ptcone15ID4",&ptcone15ID4,"ptcone15ID4[mu_muid_n]/F");
  tree->Branch("ptcone20ID4",&ptcone20ID4,"ptcone20ID4[mu_muid_n]/F");
  tree->Branch("ptcone30ID4",&ptcone30ID4,"ptcone30ID4[mu_muid_n]/F");
  tree->Branch("ptcone40ID4",&ptcone40ID4,"ptcone40ID4[mu_muid_n]/F");
  tree->Branch("ptcone50ID4",&ptcone50ID4,"ptcone50ID4[mu_muid_n]/F");

  tree->Branch("ptcone10ID5",&ptcone10ID5,"ptcone10ID5[mu_muid_n]/F");
  tree->Branch("ptcone15ID5",&ptcone15ID5,"ptcone15ID5[mu_muid_n]/F");
  tree->Branch("ptcone20ID5",&ptcone20ID5,"ptcone20ID5[mu_muid_n]/F");
  tree->Branch("ptcone30ID5",&ptcone30ID5,"ptcone30ID5[mu_muid_n]/F");
  tree->Branch("ptcone40ID5",&ptcone40ID5,"ptcone40ID5[mu_muid_n]/F");
  tree->Branch("ptcone50ID5",&ptcone50ID5,"ptcone50ID5[mu_muid_n]/F");

  tree->Branch("ptcone10ID6",&ptcone10ID6,"ptcone10ID6[mu_muid_n]/F");
  tree->Branch("ptcone15ID6",&ptcone15ID6,"ptcone15ID6[mu_muid_n]/F");
  tree->Branch("ptcone20ID6",&ptcone20ID6,"ptcone20ID6[mu_muid_n]/F");
  tree->Branch("ptcone30ID6",&ptcone30ID6,"ptcone30ID6[mu_muid_n]/F");
  tree->Branch("ptcone40ID6",&ptcone40ID6,"ptcone40ID6[mu_muid_n]/F");
  tree->Branch("ptcone50ID6",&ptcone50ID6,"ptcone50ID6[mu_muid_n]/F");

  tree->Branch("etcone20",&etcone20,"etcone20[mu_muid_n]/F");
  tree->Branch("etcone30",&etcone30,"etcone30[mu_muid_n]/F");
  tree->Branch("etcone40",&etcone40,"etcone40[mu_muid_n]/F");
  //tree->Branch("mujet_dR",&mujet_dR,"mujet_dR[mu_muid_n]/F") ;
  tree->Branch("mujetdR","vector<vector<float> >",&mujetdR) ;
  tree->Branch("trigMu4dR","vector<vector<float> >",&trigMu4dR) ;
  tree->Branch("trigMu10dR","vector<vector<float> >",&trigMu10dR) ;
  tree->Branch("massCB","vector<vector<float> >",&massCB) ;
  tree->Branch("mugammadR","vector<vector<float> >",&mugammadR) ;
  tree->Branch("dphiMuGamma","vector<vector<float> >",&dphiMuGamma) ;
  tree->Branch("dphiMuJet","vector<vector<float> >",&dphiMuJet) ;
  tree->Branch("detaMuGamma","vector<vector<float> >",&detaMuGamma) ;
  tree->Branch("detaMuJet","vector<vector<float> >",&detaMuJet) ;
  tree->Branch("hiPtJets",&hiPtJets,"hiPtJets[mu_muid_n]/I") ;
  tree->Branch("eta",&eta,"eta[mu_muid_n]/F");
  tree->Branch("etaMS",&etaMS,"etaMS[mu_muid_n]/F");
  tree->Branch("phi",&phi,"phi[mu_muid_n]/F");
  tree->Branch("phiMS",&phiMS,"phiMS[mu_muid_n]/F");
  tree->Branch("eLoss",&eLoss,"eLoss[mu_muid_n]/F");
  tree->Branch("ntrt",&ntrt,"ntrt[mu_muid_n]/I");
  tree->Branch("scat",&scat,"scat[mu_muid_n]/F");
  tree->Branch("comp",&comp,"comp[mu_muid_n]/F");
  tree->Branch("fcal",&fcal,"fcal/F");
  tree->Branch("mbts",&mbts,"mbts/F");
  tree->Branch("charge",&charge,"charge[mu_muid_n]/F");
  tree->Branch("run",&run,"run/I");
  tree->Branch("event",&event,"event/I");
  tree->Branch("centrality",&centrality,"centrality/F");
  tree->Branch("hasHiPtMuon",&hasHiPtMuonNt,"hasHiPtMuon/I");
  tree->Branch("ZDY",&ZDY,"ZDY[mu_muid_n]/I");
//  tree->Branch("sum_4VecID","TLorentzVector",&lvIDsum,16000,2);
  tree->Branch("caloMET",&caloMETNt,"caloMET/F");
  tree->Branch("caloMEx",&caloMExNt,"caloMEx/F");
  tree->Branch("caloMEy",&caloMEyNt,"caloMEy/F");
  tree->Branch("caloMETPhi",&caloMETPhiNt,"caloMETPhi/F");
  tree->Branch("caloSumEt",&caloSumEtNt,"caloSumEt/F");
  tree->Branch("subtractedMPT",&subtractedMPT,"subtractedMPT/F");
  tree->Branch("scaledMPT",&scaledMPT,"scaledMPT[mu_muid_n]/F");
  tree->Branch("phi_munu",&phi_munu,"phi_munu[mu_muid_n]/F");

  tree->Branch("nu_phi500Nominal",&nu_phi500Nominal,"nu_phi500Nominal/F");
  tree->Branch("nu_theta500Nominal",&nu_theta500Nominal,"nu_theta500Nominal/F");
  tree->Branch("nu_eta500Nominal",&nu_eta500Nominal,"nu_eta500Nominal/F");
  tree->Branch("nu_pt500Nominal",&nu_pt500Nominal,"nu_pt500Nominal/F");
  tree->Branch("nu_px500Nominal",&nu_px500Nominal,"nu_px500Nominal/F");
  tree->Branch("nu_py500Nominal",&nu_py500Nominal,"nu_py500Nominal/F");

  tree->Branch("nu_phi1000Nominal",&nu_phi1000Nominal,"nu_phi1000Nominal/F");
  tree->Branch("nu_theta1000Nominal",&nu_theta1000Nominal,"nu_theta1000Nominal/F");
  tree->Branch("nu_eta1000Nominal",&nu_eta1000Nominal,"nu_eta1000Nominal/F");
  tree->Branch("nu_pt1000Nominal",&nu_pt1000Nominal,"nu_pt1000Nominal/F");
  tree->Branch("nu_px1000Nominal",&nu_px1000Nominal,"nu_px1000Nominal/F");
  tree->Branch("nu_py1000Nominal",&nu_py1000Nominal,"nu_py1000Nominal/F");

  tree->Branch("nu_phi2000Nominal",&nu_phi2000Nominal,"nu_phi2000Nominal/F");
  tree->Branch("nu_theta2000Nominal",&nu_theta2000Nominal,"nu_theta2000Nominal/F");
  tree->Branch("nu_eta2000Nominal",&nu_eta2000Nominal,"nu_eta2000Nominal/F");
  tree->Branch("nu_pt2000Nominal",&nu_pt2000Nominal,"nu_pt2000Nominal/F");
  tree->Branch("nu_px2000Nominal",&nu_px2000Nominal,"nu_px2000Nominal/F");
  tree->Branch("nu_py2000Nominal",&nu_py2000Nominal,"nu_py2000Nominal/F");

  tree->Branch("nu_phi3000Nominal",&nu_phi3000Nominal,"nu_phi3000Nominal/F");
  tree->Branch("nu_theta3000Nominal",&nu_theta3000Nominal,"nu_theta3000Nominal/F");
  tree->Branch("nu_eta3000Nominal",&nu_eta3000Nominal,"nu_eta3000Nominal/F");
  tree->Branch("nu_pt3000Nominal",&nu_pt3000Nominal,"nu_pt3000Nominal/F");
  tree->Branch("nu_px3000Nominal",&nu_px3000Nominal,"nu_px3000Nominal/F");
  tree->Branch("nu_py3000Nominal",&nu_py3000Nominal,"nu_py3000Nominal/F");

  tree->Branch("nu_phi4000Nominal",&nu_phi4000Nominal,"nu_phi4000Nominal/F");
  tree->Branch("nu_theta4000Nominal",&nu_theta4000Nominal,"nu_theta4000Nominal/F");
  tree->Branch("nu_eta4000Nominal",&nu_eta4000Nominal,"nu_eta4000Nominal/F");
  tree->Branch("nu_pt4000Nominal",&nu_pt4000Nominal,"nu_pt4000Nominal/F");
  tree->Branch("nu_px4000Nominal",&nu_px4000Nominal,"nu_px4000Nominal/F");
  tree->Branch("nu_py4000Nominal",&nu_py4000Nominal,"nu_py4000Nominal/F");

  tree->Branch("nu_phi5000Nominal",&nu_phi5000Nominal,"nu_phi5000Nominal/F");
  tree->Branch("nu_theta5000Nominal",&nu_theta5000Nominal,"nu_theta5000Nominal/F");
  tree->Branch("nu_eta5000Nominal",&nu_eta5000Nominal,"nu_eta5000Nominal/F");
  tree->Branch("nu_pt5000Nominal",&nu_pt5000Nominal,"nu_pt5000Nominal/F");
  tree->Branch("nu_px5000Nominal",&nu_px5000Nominal,"nu_px5000Nominal/F");
  tree->Branch("nu_py5000Nominal",&nu_py5000Nominal,"nu_py5000Nominal/F");


  tree->Branch("nu_pz",&nu_pzNt,"nu_pz/F");
  tree->Branch("nu_phi",&nu_phiNt,"nu_phi/F");
  tree->Branch("nu_phiSwingBy30CCW",&nu_phiSwingBy30CCW,"nu_phiSwingBy30CCW/F");
  tree->Branch("nu_phiSwingBy30CW",&nu_phiSwingBy30CW,"nu_phiSwingBy30CW/F");
  tree->Branch("nu_phiSwingBy15CCW",&nu_phiSwingBy15CCW,"nu_phiSwingBy15CCW/F");
  tree->Branch("nu_phiSwingBy15CW",&nu_phiSwingBy15CW,"nu_phiSwingBy15CW/F");
  tree->Branch("nu_pt",&nu_ptNt,"nu_pt/F");
  tree->Branch("nu_px",&nu_pxNt,"nu_px/F");
  tree->Branch("nu_py",&nu_pyNt,"nu_py/F");
  tree->Branch("nu_theta",&nu_thetaNt,"nu_theta/F");
  tree->Branch("nu_eta",&nu_etaNt,"nu_eta/F");

  tree->Branch("yW",&yW,"yW[mu_muid_n]/F");
  tree->Branch("ptW",&ptW,"ptW[mu_muid_n]/F");
  tree->Branch("etaW",&etaW,"etaW[mu_muid_n]/F");

  //hip
  tree->Branch("EF_mu8_IDTrkNoCut", &EF_mu8_IDTrkNoCutNt,"EF_mu8_IDTrkNoCut/I" );
  tree->Branch("EF_mu8", &EF_mu8Nt,"EF_mu8/I" );
  tree->Branch("EF_mu4_j40_a4hi_EFFS_matched", &EF_mu4_j40_a4hi_EFFS_matchedNt,"EF_mu4_j40_a4hi_EFFS_matched/I");
  tree->Branch("EF_mu4_IDTrkNoCut", &EF_mu4_IDTrkNoCutNt,"EF_mu4_IDTrkNoCut/I");
  tree->Branch("EF_L1MBTS_2_NoAlg", &EF_L1MBTS_2_NoAlgNt,"EF_L1MBTS_2_NoAlg/I");
  tree->Branch("EF_L1MBTS_1_1_NoAlg", &EF_L1MBTS_1_1_NoAlgNt,"EF_L1MBTS_1_1_NoAlg/I");

  tree->Branch("EF_mu8_IDTrkNoCut_Matched20", &EF_mu8_IDTrkNoCut_Matched20,"EF_mu8_IDTrkNoCut_Matched20[mu_muid_n]/I" );
  tree->Branch("EF_mu8_Matched20", &EF_mu8_Matched20,"EF_mu8_Matched20[mu_muid_n]/I" );
  tree->Branch("EF_mu4_j40_a4hi_EFFS_matched_Matched20", &EF_mu4_j40_a4hi_EFFS_matched_Matched20,"EF_mu4_j40_a4hi_EFFS_matched_Matched20[mu_muid_n]/I");
  tree->Branch("EF_mu4_IDTrkNoCut_Matched20", &EF_mu4_IDTrkNoCut_Matched20,"EF_mu4_IDTrkNoCut_Matched20[mu_muid_n]/I");

  tree->Branch("EF_mu10_MSonly_EFFS_L1ZDC",&EF_mu10_MSonly_EFFS_L1ZDCNt,"EF_mu10_MSonly_EFFS_L1ZDC/I");
  tree->Branch("EF_mu10",&EF_mu10Nt,"EF_mu10/I");
  tree->Branch("EF_mu4",&EF_mu4Nt,"EF_mu4/I");
  tree->Branch("EF_mu10_MSonly_EFFS_L1TE10",&EF_mu10_MSonly_EFFS_L1TE10Nt,"EF_mu10_MSonly_EFFS_L1TE10/I");
  tree->Branch("EF_mu10_MSonly_EFFS_L1TE20",&EF_mu10_MSonly_EFFS_L1TE20Nt,"EF_mu10_MSonly_EFFS_L1TE20/I");
  tree->Branch("EF_mu4_MSonly_L1TE50",&EF_mu4_MSonly_L1TE50Nt,"EF_mu4_MSonly_L1TE50/I");
  tree->Branch("EF_mu4_L1VTE50",&EF_mu4_L1VTE50Nt,"EF_mu4_L1VTE50/I");
  tree->Branch("EF_mbZdc_a_c_L1VTE50_trk",&EF_mbZdc_a_c_L1VTE50_trkNt,"EF_mbZdc_a_c_L1VTE50_trk/I");
  tree->Branch("EF_L1TE50_NoAlg",&EF_L1TE50_NoAlgNt,"EF_L1TE50_NoAlg/I");
  tree->Branch("L1_MU0",&L1_MU0Nt,"L1_MU0/I");

  tree->Branch("EF_mu10_MSonly_EFFS_L1ZDC_Matched20",&EF_mu10_MSonly_EFFS_L1ZDC_Matched20,"EF_mu10_MSonly_EFFS_L1ZDC_Matched20[mu_muid_n]/I");
  tree->Branch("EF_mu10_Matched20",&EF_mu10_Matched20,"EF_mu10_Matched20[mu_muid_n]/I");
  tree->Branch("EF_mu4_Matched20",&EF_mu4_Matched20,"EF_mu4_Matched20[mu_muid_n]/I");
  tree->Branch("EF_mu10_MSonly_EFFS_L1TE10_Matched20",&EF_mu10_MSonly_EFFS_L1TE10_Matched20,"EF_mu10_MSonly_EFFS_L1TE10_Matched20[mu_muid_n]/I");
  tree->Branch("EF_mu10_MSonly_EFFS_L1TE20_Matched20",&EF_mu10_MSonly_EFFS_L1TE20_Matched20,"EF_mu10_MSonly_EFFS_L1TE20_Matched20[mu_muid_n]/I");
  tree->Branch("EF_trigmuonef_EF_mu4_MSonly_L1TE50_Matched20",&EF_trigmuonef_EF_mu4_MSonly_L1TE50_Matched20,"EF_trigmuonef_EF_mu4_MSonly_L1TE50_Matched20[mu_muid_n]/I");
  tree->Branch("EF_trigmuonef_EF_mu4_L1VTE50_Matched20",&EF_trigmuonef_EF_mu4_L1VTE50_Matched20,"EF_trigmuonef_EF_mu4_L1VTE50_Matched20[mu_muid_n]/I");
  tree->Branch("L1Matched",&L1Matched,"L1Matched[mu_muid_n]/I");

	  tree->Branch("pt_muid_tru",&pt_tru,"pt_muid_tru[mu_muid_n]/F");
	  tree->Branch("E_muid_tru",&E_tru,"E_muid_tru[mu_muid_n]/F");
	  tree->Branch("eta_muid_tru",&eta_tru,"eta_muid_tru[mu_muid_n]/F");
	  tree->Branch("phi_muid_tru",&phi_tru,"phi_muid_tru[mu_muid_n]/F");
	  tree->Branch("truthMatched_muid",&truthMatched_muid,"truthMatched_muid[mu_muid_n]/I");

   	  tree->Branch("mc_mu_n",&Mymc_mu_n,"mc_mu_n/I");
	  tree->Branch("mc_mu_gen_E",&Mymc_mu_gen_E,"mc_mu_gen_E[mc_mu_n]/F");
	  tree->Branch("mc_mu_gen_pt",&Mymc_mu_gen_pt,"mc_mu_gen_pt[mc_mu_n]/F");
	  tree->Branch("mc_mu_gen_eta",&Mymc_mu_gen_eta,"mc_mu_gen_eta[mc_mu_n]/F");
	  tree->Branch("mc_mu_gen_phi",&Mymc_mu_gen_phi,"mc_mu_gen_phi[mc_mu_n]/F");
	  tree->Branch("mc_mu_gen_type",&Mymc_mu_gen_type,"mc_mu_gen_type[mc_mu_n]/I");
	  tree->Branch("mc_mu_gen_mothertype",&Mymc_mu_gen_mothertype,"mc_mu_gen_mothertype[mc_mu_n]/I");
	  tree->Branch("mc_nu_gen_E",&Mymc_nu_gen_E,"mc_nu_gen_E[mc_mu_n]/F");
	  tree->Branch("mc_nu_gen_pt",&Mymc_nu_gen_pt,"mc_nu_gen_pt[mc_mu_n]/F");
	  tree->Branch("mc_nu_gen_eta",&Mymc_nu_gen_eta,"mc_nu_gen_eta[mc_mu_n]/F");
	  tree->Branch("mc_nu_gen_phi",&Mymc_nu_gen_phi,"mc_nu_gen_phi[mc_mu_n]/F");
	  tree->Branch("mc_nu_gen_type",&Mymc_nu_gen_type,"mc_nu_gen_type[mc_mu_n]/I");
	  tree->Branch("mc_nu_gen_mothertype",&Mymc_nu_gen_mothertype,"mc_nu_gen_mothertype[mc_mu_n]/I");
	  tree->Branch("mc_mu_charge",&Mymc_mu_charge,"mc_mu_charge[mc_mu_n]/F");
	  tree->Branch("mc_nu_charge",&Mymc_nu_charge,"mc_nu_charge[mc_mu_n]/F");
	  //gammas from W source
   	  tree->Branch("mc_gamma_n",&Mymc_gamma_n,"mc_gamma_n/I");
	  tree->Branch("mc_gamma_gen_E",&Mymc_gamma_gen_E,"mc_gamma_gen_E[mc_gamma_n]/F");
	  tree->Branch("mc_gamma_gen_pt",&Mymc_gamma_gen_pt,"mc_gamma_gen_pt[mc_gamma_n]/F");
	  tree->Branch("mc_gamma_gen_eta",&Mymc_gamma_gen_eta,"mc_gamma_gen_eta[mc_gamma_n]/F");
	  tree->Branch("mc_gamma_gen_phi",&Mymc_gamma_gen_phi,"mc_gamma_gen_phi[mc_gamma_n]/F");
	  tree->Branch("mc_gamma_gen_type",&Mymc_gamma_gen_type,"mc_gamma_gen_type[mc_gamma_n]/I");
	  tree->Branch("mc_gamma_gen_mothertype",&Mymc_gamma_gen_mothertype,"mc_gamma_gen_mothertype[mc_gamma_n]/I");

  	  /*tree->Branch("recGenMuCone",&recGenMuCone,"recGenMuCone[mc_mu_n]/F");
  	  tree->Branch("recGenTriggeredMuCone",&recGenTriggeredMuCone,"recGenTriggeredMuCone[mc_mu_n]/F");
  	  tree->Branch("recGenStandardCutMuCone",&recGenStandardCutMuCone,"recGenStandardCutMuCone[mc_mu_n]/F");
  	  tree->Branch("recGenMptMuCone",&recGenMptMuCone,"recGenMptMuCone[mc_mu_n]/F");
  	  tree->Branch("recGenMtMuCone",&recGenMtMuCone,"recGenMtMuCone[mc_mu_n]/F");
*/


	  tree->Branch("mc_gen_WbosonNominalMass",&Mymc_gen_WbosonNominalMass,"mc_gen_WbosonNominalMass[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonNominalPt",&Mymc_gen_WbosonNominalPt,"mc_gen_WbosonNominalPt[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonNominalRapidity",&Mymc_gen_WbosonNominalRapidity,"mc_gen_WbosonNominalRapidity[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonNominalPseudoRapidity",&Mymc_gen_WbosonNominalPseudoRapidity,"mc_gen_WbosonNominalPseudoRapidity[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonNominalPhi",&Mymc_gen_WbosonNominalPhi,"mc_gen_WbosonNominalPhi[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonCorrectedMass",&Mymc_gen_WbosonCorrectedMass,"mc_gen_WbosonCorrectedMass[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonCorrectedPt",&Mymc_gen_WbosonCorrectedPt,"mc_gen_WbosonCorrectedPt[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonCorrectedRapidity",&Mymc_gen_WbosonCorrectedRapidity,"mc_gen_WbosonCorrectedRapidity[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonCorrectedPseudoRapidity",&Mymc_gen_WbosonCorrectedPseudoRapidity,"mc_gen_WbosonCorrectedPseudoRapidity[mc_mu_n]/F");
	  tree->Branch("mc_gen_WbosonCorrectedPhi",&Mymc_gen_WbosonCorrectedPhi,"mc_gen_WbosonCorrectedPhi[mc_mu_n]/F");

	  tree->Branch("dPhiWJet",&dPhiWJet,"dPhiWJet[mc_mu_n]/F");


  //jets
  tree->Branch("njets",&njets,"njets/I");
  tree->Branch("jet_E",&jet_E,"jet_E[njets]/F");
  tree->Branch("jet_eta",&jet_eta,"jet_eta[njets]/F");
  tree->Branch("jet_Et",&jet_Et,"jet_Et[njets]/F");
  tree->Branch("jet_pt",&jet_pt,"jet_pt[njets]/F");


