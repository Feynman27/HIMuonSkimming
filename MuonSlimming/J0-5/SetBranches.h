  ntupleToRead = new TChain("data");

  ntupleToRead->SetBranchAddress("mu_muid_n",&mu_muid_n);
  ntupleToRead->SetBranchAddress("mu_muid_pt",&mu_muid_pt);
  ntupleToRead->SetBranchAddress("mu_muid_eta",&mu_muid_eta);
  ntupleToRead->SetBranchAddress("mu_muid_ms_theta",&mu_muid_ms_theta); //matching information
  ntupleToRead->SetBranchAddress("mu_muid_ms_phi",&mu_muid_ms_phi);
  ntupleToRead->SetBranchAddress("mu_muid_id_z0_exPV",&mu_muid_id_z0_exPV);
  ntupleToRead->SetBranchAddress("mu_muid_me_z0",&mu_muid_me_z0);
  ntupleToRead->SetBranchAddress("mu_muid_ms_qoverp",&mu_muid_ms_qoverp);
  ntupleToRead->SetBranchAddress("mu_muid_id_qoverp_exPV",&mu_muid_id_qoverp_exPV);
  ntupleToRead->SetBranchAddress("mu_muid_id_theta_exPV",&mu_muid_id_theta_exPV);
  ntupleToRead->SetBranchAddress("mu_muid_isCombinedMuon",&mu_muid_isCombinedMuon);
  ntupleToRead->SetBranchAddress("mu_muid_nPixHits",&mu_muid_nPixHits);
  ntupleToRead->SetBranchAddress("mu_muid_nBLHits",&mu_muid_nBLHits);
  ntupleToRead->SetBranchAddress("mu_muid_nSCTHits",&mu_muid_nSCTHits);
  ntupleToRead->SetBranchAddress("mu_muid_nPixHoles",&mu_muid_nPixHoles);
  ntupleToRead->SetBranchAddress("mu_muid_nSCTHoles",&mu_muid_nSCTHoles);
  ntupleToRead->SetBranchAddress("mu_muid_id_d0_exPV",&mu_muid_id_d0_exPV);
  ntupleToRead->SetBranchAddress("mu_muid_matchchi2",&mu_muid_matchchi2);
  ntupleToRead->SetBranchAddress("mu_muid_matchndof",&mu_muid_matchndof);
  ntupleToRead->SetBranchAddress("mu_muid_expectBLayerHit",&mu_muid_expectBLayerHit);
  ntupleToRead->SetBranchAddress("mu_muid_nPixelDeadSensors",&mu_muid_nPixelDeadSensors);
  ntupleToRead->SetBranchAddress("mu_muid_nSCTDeadSensors",&mu_muid_nSCTDeadSensors);
  ntupleToRead->SetBranchAddress("mu_muid_nTRTOutliers",&mu_muid_nTRTOutliers);
  ntupleToRead->SetBranchAddress("mu_muid_d0_exPV",&mu_muid_d0_exPV);
  ntupleToRead->SetBranchAddress("mu_muid_z0_exPV",&mu_muid_z0_exPV);

//  ntupleToRead->SetBranchAddress("mu_muid_id_phi",&mu_muid_id_phi);
//  ntupleToRead->SetBranchAddress("mu_muid_id_theta",&mu_muid_id_theta);
//  ntupleToRead->SetBranchAddress("mu_muid_id_qoverp",&mu_muid_id_qoverp);
  //ntupleToRead->SetBranchAddress("isGoodMuon",&isGoodMuon);
  ntupleToRead->SetBranchAddress("muid_scatSignificance",&muid_scatSignificance);
  ntupleToRead->SetBranchAddress("Fcal_Et",&Fcal_Et);
  //temp hack for Hip
  ntupleToRead->SetBranchAddress("Centrality",&Centrality);
  ntupleToRead->SetBranchAddress("caloMET",&caloMET);
  ntupleToRead->SetBranchAddress("caloMEx",&caloMEx);
  ntupleToRead->SetBranchAddress("caloMEy",&caloMEy);
  ntupleToRead->SetBranchAddress("nu_pt500",&nu_pt500);
  ntupleToRead->SetBranchAddress("nu_px500",&nu_px500);
  ntupleToRead->SetBranchAddress("nu_py500",&nu_py500);
  ntupleToRead->SetBranchAddress("nu_pz500",&nu_pz500);
  ntupleToRead->SetBranchAddress("nu_phi500",&nu_phi500);
  ntupleToRead->SetBranchAddress("nu_eta500",&nu_eta500);
  ntupleToRead->SetBranchAddress("nu_theta500",&nu_theta500);

  ntupleToRead->SetBranchAddress("nu_pt1000",&nu_pt1000);
  ntupleToRead->SetBranchAddress("nu_px1000",&nu_px1000);
  ntupleToRead->SetBranchAddress("nu_py1000",&nu_py1000);
  ntupleToRead->SetBranchAddress("nu_pz1000",&nu_pz1000);
  ntupleToRead->SetBranchAddress("nu_phi1000",&nu_phi1000);
  ntupleToRead->SetBranchAddress("nu_eta1000",&nu_eta1000);
  ntupleToRead->SetBranchAddress("nu_theta1000",&nu_theta1000);

  ntupleToRead->SetBranchAddress("nu_pt2000",&nu_pt2000);
  ntupleToRead->SetBranchAddress("nu_px2000",&nu_px2000);
  ntupleToRead->SetBranchAddress("nu_py2000",&nu_py2000);
  ntupleToRead->SetBranchAddress("nu_pz2000",&nu_pz2000);
  ntupleToRead->SetBranchAddress("nu_phi2000",&nu_phi2000);
  ntupleToRead->SetBranchAddress("nu_eta2000",&nu_eta2000);
  ntupleToRead->SetBranchAddress("nu_theta2000",&nu_theta2000);

  ntupleToRead->SetBranchAddress("nu_pt3000",&nu_pt3000);
  ntupleToRead->SetBranchAddress("nu_px3000",&nu_px3000);
  ntupleToRead->SetBranchAddress("nu_py3000",&nu_py3000);
  ntupleToRead->SetBranchAddress("nu_pz3000",&nu_pz3000);
  ntupleToRead->SetBranchAddress("nu_phi3000",&nu_phi3000);
  ntupleToRead->SetBranchAddress("nu_eta3000",&nu_eta3000);
  ntupleToRead->SetBranchAddress("nu_theta3000",&nu_theta3000);

  ntupleToRead->SetBranchAddress("nu_pt4000",&nu_pt4000);
  ntupleToRead->SetBranchAddress("nu_px4000",&nu_px4000);
  ntupleToRead->SetBranchAddress("nu_py4000",&nu_py4000);
  ntupleToRead->SetBranchAddress("nu_phi4000",&nu_phi4000);
  ntupleToRead->SetBranchAddress("nu_eta4000",&nu_eta4000);
  ntupleToRead->SetBranchAddress("nu_theta4000",&nu_theta4000);

  ntupleToRead->SetBranchAddress("nu_pt5000",&nu_pt5000);
  ntupleToRead->SetBranchAddress("nu_px5000",&nu_px5000);
  ntupleToRead->SetBranchAddress("nu_py5000",&nu_py5000);
  ntupleToRead->SetBranchAddress("nu_phi5000",&nu_phi5000);
  ntupleToRead->SetBranchAddress("nu_eta5000",&nu_eta5000);
  ntupleToRead->SetBranchAddress("nu_theta5000",&nu_theta5000);


  ntupleToRead->SetBranchAddress("hasHiPtMuon",&hasHiPtMuon);
  ntupleToRead->SetBranchAddress("mbtime_timeA",&mbtime_timeA);
  ntupleToRead->SetBranchAddress("mbtime_timeC",&mbtime_timeC);
//  ntupleToRead->SetBranchAddress("muid_massCBSS",&muid_massCBSS);
//  ntupleToRead->SetBranchAddress("muid_massCBOS",&muid_massCBOS);
  ntupleToRead->SetBranchAddress("mu_muid_nTRTHits",&mu_muid_nTRTHits);
  ntupleToRead->SetBranchAddress("mu_muid_charge",&mu_muid_charge);
  ntupleToRead->SetBranchAddress("mu_muid_phi",&mu_muid_phi);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20",&mu_muid_ptcone20);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30",&mu_muid_ptcone30);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40",&mu_muid_ptcone40);

  ///custom isolation cuts with given cone radius and lower track pt cut
  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID05",&mu_muid_ptcone10ID05);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID05",&mu_muid_ptcone15ID05);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID05",&mu_muid_ptcone20ID05);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID05",&mu_muid_ptcone30ID05);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID05",&mu_muid_ptcone40ID05);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID05",&mu_muid_ptcone50ID05);

  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID075",&mu_muid_ptcone10ID075);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID075",&mu_muid_ptcone15ID075);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID075",&mu_muid_ptcone20ID075);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID075",&mu_muid_ptcone30ID075);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID075",&mu_muid_ptcone40ID075);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID075",&mu_muid_ptcone50ID075);

  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID1",&mu_muid_ptcone10ID1);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID1",&mu_muid_ptcone15ID1);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID1",&mu_muid_ptcone20ID1);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID1",&mu_muid_ptcone30ID1);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID1",&mu_muid_ptcone40ID1);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID1",&mu_muid_ptcone50ID1);

  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID2",&mu_muid_ptcone10ID2);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID2",&mu_muid_ptcone15ID2);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID2",&mu_muid_ptcone20ID2);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID2",&mu_muid_ptcone30ID2);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID2",&mu_muid_ptcone40ID2);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID2",&mu_muid_ptcone50ID2);

  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID3",&mu_muid_ptcone10ID3);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID3",&mu_muid_ptcone15ID3);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID3",&mu_muid_ptcone20ID3);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID3",&mu_muid_ptcone30ID3);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID3",&mu_muid_ptcone40ID3);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID3",&mu_muid_ptcone50ID3);

  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID4",&mu_muid_ptcone10ID4);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID4",&mu_muid_ptcone15ID4);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID4",&mu_muid_ptcone20ID4);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID4",&mu_muid_ptcone30ID4);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID4",&mu_muid_ptcone40ID4);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID4",&mu_muid_ptcone50ID4);

  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID5",&mu_muid_ptcone10ID5);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID5",&mu_muid_ptcone15ID5);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID5",&mu_muid_ptcone20ID5);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID5",&mu_muid_ptcone30ID5);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID5",&mu_muid_ptcone40ID5);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID5",&mu_muid_ptcone50ID5);

  ntupleToRead->SetBranchAddress("mu_muid_ptcone10ID6",&mu_muid_ptcone10ID6);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone15ID6",&mu_muid_ptcone15ID6);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone20ID6",&mu_muid_ptcone20ID6);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone30ID6",&mu_muid_ptcone30ID6);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone40ID6",&mu_muid_ptcone40ID6);
  ntupleToRead->SetBranchAddress("mu_muid_ptcone50ID6",&mu_muid_ptcone50ID6);

  ntupleToRead->SetBranchAddress("mu_muid_etcone20",&mu_muid_etcone20);
  ntupleToRead->SetBranchAddress("mu_muid_etcone30",&mu_muid_etcone30);
  ntupleToRead->SetBranchAddress("mu_muid_etcone40",&mu_muid_etcone40);
//  ntupleToRead->SetBranchAddress("mu_muid_nucone20",&mu_muid_nucone20);
//  ntupleToRead->SetBranchAddress("mu_muid_nucone30",&mu_muid_nucone30);
//  ntupleToRead->SetBranchAddress("mu_muid_nucone40",&mu_muid_nucone40);
  ntupleToRead->SetBranchAddress("RunNumber",&RunNumber);
  ntupleToRead->SetBranchAddress("EventNumber",&EventNumber);

  ntupleToRead->SetBranchAddress("EF_mu4_MSonly_L1TE50",&EF_mu4_MSonly_L1TE50);
  ntupleToRead->SetBranchAddress("EF_mu4_L1VTE50",&EF_mu4_L1VTE50);
  ntupleToRead->SetBranchAddress("EF_mbZdc_a_c_L1VTE50_trk",&EF_mbZdc_a_c_L1VTE50_trk);
  ntupleToRead->SetBranchAddress("EF_L1TE50_NoAlg",&EF_L1TE50_NoAlg);
  ntupleToRead->SetBranchAddress("EF_mu10_MSonly_EFFS_L1ZDC",&EF_mu10_MSonly_EFFS_L1ZDC);
  ntupleToRead->SetBranchAddress("EF_mu10_MSonly_EFFS_L1TE20",&EF_mu10_MSonly_EFFS_L1TE20);
  ntupleToRead->SetBranchAddress("EF_mu10_MSonly_EFFS_L1TE10",&EF_mu10_MSonly_EFFS_L1TE10);
  ntupleToRead->SetBranchAddress("L1_MU0",&L1_MU0);

  ntupleToRead->SetBranchAddress("mu_muid_L1_matched",&mu_muid_L1_matched);
  ntupleToRead->SetBranchAddress("mu_muid_me_qoverp_exPV",&mu_muid_me_qoverp_exPV);
  ntupleToRead->SetBranchAddress("mu_muid_isCombinedMuon",&mu_muid_isCombinedMuon);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_track_MS_hasMS",&trig_EF_trigmuonef_track_MS_hasMS);
  //ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_track_MS_eta_one",&trig_EF_trigmuonef_track_MS_eta_one);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_n",&trig_EF_trigmuonef_n);
//  ntupleToRead->SetBranchAddress("singlemuid_massCBOS",&singlemuid_massCBOS);

  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50",&trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_EF_mu4_L1VTE50",&trig_EF_trigmuonef_EF_mu4_L1VTE50);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC",&trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20",&trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10",&trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_track_MS_eta",&trig_EF_trigmuonef_track_MS_eta);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_track_MS_phi",&trig_EF_trigmuonef_track_MS_phi);
  ntupleToRead->SetBranchAddress("trig_EF_trigmuonef_track_n",&trig_EF_trigmuonef_track_n);

	//muon truth info
	ntupleToRead->SetBranchAddress("mu_muid_truth_dr",&mu_muid_truth_dr);
	ntupleToRead->SetBranchAddress("mu_muid_truth_E",&mu_muid_truth_E);
	ntupleToRead->SetBranchAddress("mu_muid_truth_pt",&mu_muid_truth_pt);
	ntupleToRead->SetBranchAddress("mu_muid_truth_eta",&mu_muid_truth_eta);
	ntupleToRead->SetBranchAddress("mu_muid_truth_phi",&mu_muid_truth_phi);
	ntupleToRead->SetBranchAddress("mu_muid_truth_type",&mu_muid_truth_type);
	ntupleToRead->SetBranchAddress("mu_muid_truth_barcode",&mu_muid_truth_barcode);
	ntupleToRead->SetBranchAddress("mu_muid_truth_mothertype",&mu_muid_truth_mothertype);
	ntupleToRead->SetBranchAddress("mu_muid_truth_motherbarcode",&mu_muid_truth_motherbarcode);
	ntupleToRead->SetBranchAddress("mu_muid_truth_matched",&mu_muid_truth_matched);
	ntupleToRead->SetBranchAddress("mc_mu_charge",&mc_mu_charge);
	ntupleToRead->SetBranchAddress("mc_nu_charge",&mc_nu_charge);
	//mc generator info
	ntupleToRead->SetBranchAddress("mc_mu_n",&mc_mu_n);
	ntupleToRead->SetBranchAddress("mc_mu_gen_E",&mc_mu_gen_E);
	ntupleToRead->SetBranchAddress("mc_mu_gen_pt",&mc_mu_gen_pt);
	ntupleToRead->SetBranchAddress("mc_mu_gen_eta",&mc_mu_gen_eta);
	ntupleToRead->SetBranchAddress("mc_mu_gen_phi",&mc_mu_gen_phi);
	ntupleToRead->SetBranchAddress("mc_mu_gen_mothertype",&mc_mu_gen_mothertype);
	ntupleToRead->SetBranchAddress("mc_mu_gen_type",&mc_mu_gen_type);
	//ntupleToRead->SetBranchAddress("mc_gen_motherbarcode",&mc_gen_motherbarcode);
	ntupleToRead->SetBranchAddress("mc_nu_n",&mc_nu_n);
	ntupleToRead->SetBranchAddress("mc_nu_gen_E",&mc_nu_gen_E);
	ntupleToRead->SetBranchAddress("mc_nu_gen_pt",&mc_nu_gen_pt);
	ntupleToRead->SetBranchAddress("mc_nu_gen_eta",&mc_nu_gen_eta);
	ntupleToRead->SetBranchAddress("mc_nu_gen_phi",&mc_nu_gen_phi);
	ntupleToRead->SetBranchAddress("mc_nu_gen_mothertype",&mc_nu_gen_mothertype);
	ntupleToRead->SetBranchAddress("mc_nu_gen_type",&mc_nu_gen_type);
	ntupleToRead->SetBranchAddress("mc_gamma_n",&mc_gamma_n);
	ntupleToRead->SetBranchAddress("mc_gamma_gen_E",&mc_gamma_gen_E);
	ntupleToRead->SetBranchAddress("mc_gamma_gen_pt",&mc_gamma_gen_pt);
	ntupleToRead->SetBranchAddress("mc_gamma_gen_eta",&mc_gamma_gen_eta);
	ntupleToRead->SetBranchAddress("mc_gamma_gen_phi",&mc_gamma_gen_phi);
	ntupleToRead->SetBranchAddress("mc_gamma_gen_mothertype",&mc_gamma_gen_mothertype);
	ntupleToRead->SetBranchAddress("mc_gamma_gen_type",&mc_gamma_gen_type);
	ntupleToRead->SetBranchAddress("mc_gamma_charge",&mc_gamma_charge);

	ntupleToRead->SetBranchAddress("mc_gen_WbosonMass",&mc_gen_WbosonMass);
	ntupleToRead->SetBranchAddress("mc_gen_WbosonPt",&mc_gen_WbosonPt);
	ntupleToRead->SetBranchAddress("mc_gen_WbosonPhi",&mc_gen_WbosonPhi);
	ntupleToRead->SetBranchAddress("mc_gen_WbosonRapidity",&mc_gen_WbosonRapidity);
	ntupleToRead->SetBranchAddress("mc_gen_WbosonPseudoRapidity",&mc_gen_WbosonPseudoRapidity);



  //--JETS--//
	  ntupleToRead->SetBranchAddress("antikt2HIItrEM_n",&antikt2HIItrEM_n) ;
	  ntupleToRead->SetBranchAddress("antikt2HIItrEM_E",&antikt2HIItrEM_E) ;
	  ntupleToRead->SetBranchAddress("antikt2HIItrEM_pt",&antikt2HIItrEM_pt) ;
	  ntupleToRead->SetBranchAddress("antikt2HIItrEM_eta",&antikt2HIItrEM_eta) ;
	  ntupleToRead->SetBranchAddress("antikt2HIItrEM_phi",&antikt2HIItrEM_phi) ;

  ntupleToRead->SetBranchStatus("*",0);

  ntupleToRead->SetBranchStatus("mu_muid_truth*",1);
  ntupleToRead->SetBranchStatus("mc_*",1);
  ///muon data
  ntupleToRead->SetBranchStatus("mu_muid_n",1);
  ntupleToRead->SetBranchStatus("mu_muid_pt",1);
  ntupleToRead->SetBranchStatus("mu_muid_nPixHits",1);
  ntupleToRead->SetBranchStatus("mu_muid_nBLHits",1);
  ntupleToRead->SetBranchStatus("mu_muid_nSCTHits",1);
  ntupleToRead->SetBranchStatus("mu_muid_nPixHoles",1);
  ntupleToRead->SetBranchStatus("mu_muid_nSCTHoles",1);
  ntupleToRead->SetBranchStatus("mu_muid_id_d0_exPV",1);
  ntupleToRead->SetBranchStatus("mu_muid_id_z0_exPV",1);
  ntupleToRead->SetBranchStatus("mu_muid_me_z0",1);
  ntupleToRead->SetBranchStatus("mu_muid_ms_qoverp",1);
  ntupleToRead->SetBranchStatus("mu_muid_matchchi2",1);
  ntupleToRead->SetBranchStatus("mu_muid_matchndof",1);
  ntupleToRead->SetBranchStatus("mu_muid_id_theta_exPV",1);
//  ntupleToRead->SetBranchStatus("mu_muid_id_qoverp",1);
//  ntupleToRead->SetBranchStatus("mu_muid_id_theta",1);
  ntupleToRead->SetBranchStatus("mu_muid_id_phi_exPV",1);
  ntupleToRead->SetBranchStatus("mu_muid_eta",1);
  ntupleToRead->SetBranchStatus("mu_muid_ms_theta",1);
  ntupleToRead->SetBranchStatus("mu_muid_ms_phi",1);
  //ntupleToRead->SetBranchStatus("isGoodMuon",1);
  ntupleToRead->SetBranchStatus("muid_scatSignificance",1);
  ntupleToRead->SetBranchStatus("Fcal_Et",1);
  ntupleToRead->SetBranchStatus("Centrality",1);

   ntupleToRead->SetBranchStatus("caloMET",1);
   ntupleToRead->SetBranchStatus("caloMEx",1);
   ntupleToRead->SetBranchStatus("caloMEy",1);

  ntupleToRead->SetBranchStatus("nu_pt500",1);
  ntupleToRead->SetBranchStatus("nu_px500",1);
  ntupleToRead->SetBranchStatus("nu_py500",1);
  ntupleToRead->SetBranchStatus("nu_pz500",1);
  ntupleToRead->SetBranchStatus("nu_phi500",1);
  ntupleToRead->SetBranchStatus("nu_eta500",1);
  ntupleToRead->SetBranchStatus("nu_theta500",1);

  ntupleToRead->SetBranchStatus("nu_pt1000",1);
  ntupleToRead->SetBranchStatus("nu_px1000",1);
  ntupleToRead->SetBranchStatus("nu_py1000",1);
  ntupleToRead->SetBranchStatus("nu_pz1000",1);
  ntupleToRead->SetBranchStatus("nu_phi1000",1);
  ntupleToRead->SetBranchStatus("nu_eta1000",1);
  ntupleToRead->SetBranchStatus("nu_theta1000",1);
 
  ntupleToRead->SetBranchStatus("nu_pt2000",1);
  ntupleToRead->SetBranchStatus("nu_px2000",1);
  ntupleToRead->SetBranchStatus("nu_py2000",1);
  ntupleToRead->SetBranchStatus("nu_pz2000",1);
  ntupleToRead->SetBranchStatus("nu_phi2000",1);
  ntupleToRead->SetBranchStatus("nu_eta2000",1);
  ntupleToRead->SetBranchStatus("nu_theta2000",1);
 
  ntupleToRead->SetBranchStatus("nu_pt3000",1);
  ntupleToRead->SetBranchStatus("nu_px3000",1);
  ntupleToRead->SetBranchStatus("nu_py3000",1);
  ntupleToRead->SetBranchStatus("nu_pz3000",1);
  ntupleToRead->SetBranchStatus("nu_phi3000",1);
  ntupleToRead->SetBranchStatus("nu_eta3000",1);
  ntupleToRead->SetBranchStatus("nu_theta3000",1);

  ntupleToRead->SetBranchStatus("nu_pt4000",1);
  ntupleToRead->SetBranchStatus("nu_px4000",1);
  ntupleToRead->SetBranchStatus("nu_py4000",1);
  ntupleToRead->SetBranchStatus("nu_phi4000",1);
  ntupleToRead->SetBranchStatus("nu_eta4000",1);
  ntupleToRead->SetBranchStatus("nu_theta4000",1);

  ntupleToRead->SetBranchStatus("nu_pt5000",1);
  ntupleToRead->SetBranchStatus("nu_px5000",1);
  ntupleToRead->SetBranchStatus("nu_py5000",1);
  ntupleToRead->SetBranchStatus("nu_phi5000",1);
  ntupleToRead->SetBranchStatus("nu_eta5000",1);
  ntupleToRead->SetBranchStatus("nu_theta5000",1);


  ntupleToRead->SetBranchStatus("mbtime_timeA",1);
  ntupleToRead->SetBranchStatus("mbtime_timeC",1);
//  ntupleToRead->SetBranchStatus("muid_massCBSS",1);
//  ntupleToRead->SetBranchStatus("muid_massCBOS",1);
  ntupleToRead->SetBranchStatus("mu_muid_nTRTHits",1);
  ntupleToRead->SetBranchStatus("mu_muid_charge",1);
  ntupleToRead->SetBranchStatus("mu_muid_phi",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40",1);
  ntupleToRead->SetBranchStatus("mu_muid_etcone20",1);
  ntupleToRead->SetBranchStatus("mu_muid_etcone30",1);
  ntupleToRead->SetBranchStatus("mu_muid_etcone40",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID05",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID05",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID05",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID05",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID05",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID05",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID075",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID075",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID075",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID075",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID075",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID075",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID1",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID1",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID1",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID1",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID1",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID1",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID2",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID2",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID2",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID2",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID2",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID2",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID3",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID3",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID3",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID3",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID3",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID3",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID4",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID4",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID4",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID4",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID4",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID4",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID5",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID5",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID5",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID5",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID5",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID5",1);

  ntupleToRead->SetBranchStatus("mu_muid_ptcone10ID6",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone15ID6",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone20ID6",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone30ID6",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone40ID6",1);
  ntupleToRead->SetBranchStatus("mu_muid_ptcone50ID6",1);

  //ntupleToRead->SetBranchStatus("mu_muid_nucone20",1);
  //ntupleToRead->SetBranchStatus("mu_muid_nucone30",1);
  //ntupleToRead->SetBranchStatus("mu_muid_nucone40",1);
  ntupleToRead->SetBranchStatus("RunNumber",1);
  ntupleToRead->SetBranchStatus("EventNumber",1);

  ntupleToRead->SetBranchStatus("EF_mu4_MSonly_L1TE50",1);
  ntupleToRead->SetBranchStatus("EF_mu4_L1VTE50",1);
  ntupleToRead->SetBranchStatus("EF_mbZdc_a_c_L1VTE50_trk",1);
  ntupleToRead->SetBranchStatus("EF_L1TE50_NoAlg",1);
  ntupleToRead->SetBranchStatus("EF_mu10_MSonly_EFFS_L1ZDC",1);
  ntupleToRead->SetBranchStatus("EF_mu10_MSonly_EFFS_L1TE20",1);
  ntupleToRead->SetBranchStatus("EF_mu10_MSonly_EFFS_L1TE10",1);
  ntupleToRead->SetBranchStatus("mu_muid_me_qoverp_exPV",1);
  ntupleToRead->SetBranchStatus("mu_muid_id_qoverp_exPV",1);
  ntupleToRead->SetBranchStatus("mu_muid_isCombinedMuon",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_track_MS_hasMS",1);
  //ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_track_MS_eta_one",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_n",1);
  //ntupleToRead->SetBranchStatus("singlemuid_massCBOS",1);


  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_EF_mu4_MSonly_L1TE50",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_EF_mu4_L1VTE50",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1ZDC",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE20",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_EF_mu10_MSonly_EFFS_L1TE10",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_track_MS_eta",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_track_MS_phi",1);
  ntupleToRead->SetBranchStatus("trig_EF_trigmuonef_track_n",1);

  // --JETS-- //
  	ntupleToRead->SetBranchStatus("antikt2HIItrEM_n",1) ;
  	ntupleToRead->SetBranchStatus("antikt2HIItrEM_E",1) ;
  	ntupleToRead->SetBranchStatus("antikt2HIItrEM_pt",1) ;
  	ntupleToRead->SetBranchStatus("antikt2HIItrEM_eta",1) ;
  	ntupleToRead->SetBranchStatus("antikt2HIItrEM_phi",1) ;

