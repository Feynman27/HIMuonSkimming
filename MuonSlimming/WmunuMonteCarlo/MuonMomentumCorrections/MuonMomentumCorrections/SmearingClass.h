////////////////////////////////////////////////////////////////////////////
//           SmearingClass.h -- ATLAS Experiment Software                 //
////////////////////////////////////////////////////////////////////////////
///
/// class providing corrections to the simulated muon pT to match pT in data.
/// Resolution smearing and scale shift numbers are preliminary
///
/// Version for simulation and data from
/// PLHC 2011 (1st round, preliminary numbers, an update will be provided).
///
/// responsible: atlas-perf-muons-conveners (at) cern.ch
///
#ifndef MuonMomentumCorrections_SmearingClass_H
#define MuonMomentumCorrections_SmearingClass_H

#include <cstring>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <TROOT.h>
#include <math.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "TRandom3.h"

namespace MuonSmear{

  /** Smearing and scaling types (enums are used for faster access) */
  typedef enum {
    SMEAR_PT=1,
    SMEAR_QPT=2
  } SMEARTYPE;
  typedef enum {
    SCALE_DEFAULT=1,
    SCALE_KPKM=2,
    SCALE_KC=3,
    SCALE_K=4,
    SCALE_C=5
  } SCALETYPE;
  typedef enum{
    DET_MS=1,
    DET_ID=2,
    DET_CB=3
  } DETTYPE;
  typedef enum{
    ID_UP=1,
    ID_LOW=2,
    MS_UP=3,
    MS_LOW=4,
    SCALEK_UP=5,
    SCALEK_DOWN=6,
    SCALEC_UP=7,
    SCALEC_DOWN=8
  } SYSTTYPE;
  
  /** Smearing Class */
  class SmearingClass{
  
  public:
    /*Constructors*/
    SmearingClass();
    SmearingClass(std::string Data, std::string Algo="muid", std::string SmearType="q_pT", 
		  std::string Rel="Rel16.6", std::string Dir="");
    SmearingClass(const SmearingClass&);
    virtual ~SmearingClass();
  
    /************/
    /* Methods */   
    /**********/
      
    /** configure smearing **/
    void SetSeed(int);
    void SetSeed(int, int, int offset=680049);
    void UseTan2(bool);
    void UseGeV();
    void UseScale(bool);
    void RestrictCurvatureCorrections(double nsigma=2.5);
    void UseImprovedCombine();
    void ApplyToData(bool U=true);
    void SetAlgoSmearRelDir(std::string, std::string, std::string SmearType="q_pT", 
			    std::string Rel="Rel16.6", std::string Dir="");
    void FillValues();
    void FillScales(std::string Scaletype="KC", bool ApplyToData=false);
    void PrintValues();
  
    void Event(double Pt, double Eta, std::string DetType, double Charge=0);
    void Event(double PtMS, double PtID, double PtCB, double Eta, double Charge=0);
    void Event();
  
    double Smearing(int);
    double ICombine(double, double);
    double Combine(double, double);
    double Combine2(double, double);
    void ErrorMatrix();
    
    double ScaleApply(double pt, double S1, double S2, double S=1.0) const;
    double ScaleMS(double pt) const;
    double ScaleID(double pt) const;
    double ScaleCB(double pt) const;

    double pTMS();
    double pTMS(double);
 
    double pTID();
    double pTID(double);
 
    double pTCB();
    double pTCB(double);
  
    double ChargeFlip(double);
    double ChargeFlipMS();
    double ChargeFlipID();
    double ChargeFlipCB();
  
    double SMS();
    double SID();
    double SCB();
 	      
    double VMS();
    double VID();
    double Corr();
 
 
    void MSUP(double&); 
    void MSUP(double&, double&, double&);
  
    void MSLOW(double&);
    void MSLOW(double&, double&, double&);
  
    void IDUP(double&);
    void IDUP(double&, double&, double&);

    void IDLOW(double&);
    void IDLOW(double&, double&, double&);

    SYSTTYPE SelectFun(std::string);

    void PTVar(double&, std::string);
    void PTVar(double&, double&, double&, std::string);
  
    double Sign(double);
  
    /** simple methods for retrieving input values (not needed since all members are public) **/
    double ptms_orig();
    double ptid_orig();
    double ptcb_orig();
    double ETA();
    int DetRegion();
    int GetScaleRegion();

    /*members*/
    TRandom3* gRand;
    double ptms,ptid,ptcb,eta,charge;
    double vms,vid,corr;
    double smearMS,smearID,smearCB;
    bool   useTan2;
    //std::string detType;
    int detRegion;
    int scaleRegion;
    double GeV;
    double g1,g2,g3,g4;
    double wMS,wID;
    bool useScale;
    double restrictCurvCorrSigma;
    ifstream InValues; //! don't persistify
    bool useImprovedCombine;
    bool apply_to_data;

    std::vector<double> getScale_CB();
    std::vector<double> getScaleSyst_CB();
  
    std::vector<double> getp1_ID();
    std::vector<double> getp2_ID();
    std::vector<double> getp2_ID_TAN();
    std::vector<double> getp1_MS();
    std::vector<double> getp2_MS();
  
    std::vector<double> getE_p1_ID();
    std::vector<double> getE_p2_ID();   
    std::vector<double> getE_p2_ID_TAN();   
    std::vector<double> getE_p1_MS();
    std::vector<double> getE_p2_MS();
  
    std::vector<double> getS_p1_ID();
    std::vector<double> getS_p2_ID();
    std::vector<double> getS_p2_ID_TAN();   
    std::vector<double> getS_p1_MS();   
    std::vector<double> getS_p2_MS();   
  
    std::vector<double> getMC_p1_ID();   
    std::vector<double> getMC_p2_ID();   
    std::vector<double> getMC_p2_ID_TAN();   
    std::vector<double> getMC_p0_MS();   
    std::vector<double> getMC_p1_MS();   
    std::vector<double> getMC_p2_MS();

    std::vector<double> getCorrMatC0();
    std::vector<double> getCorrMatC1();
    std::vector<double> getCorrMatC2();
    std::vector<double> getCorrMatC3();
    std::vector<double> getCorrMatC4();
    std::vector<double> getCorrMatC5();
  		      
    std::vector<double> getCorrMatTanC0();
    std::vector<double> getCorrMatTanC1();
    std::vector<double> getCorrMatTanC2();
    std::vector<double> getCorrMatTanC3();
    std::vector<double> getCorrMatTanC4();
    std::vector<double> getCorrMatTanC5();

#ifdef ROOTCORE
    ClassDef(SmearingClass,1)
#endif
  
  protected:
    bool CallSetClass;
    double pTmax;
    std::string DataYear;
    std::string Fdir;
    std::string Release;
    std::string ScaleType;
    SMEARTYPE Tsmear;
    SCALETYPE Tscale;
    DETTYPE Tdet;
    SYSTTYPE Tfun;
    std::string Algorithm;

    /* overall scale correction */
    std::vector<double> scale_CB;
    std::vector<double> scaleSyst_CB;

    /* charge-dependent momentum corrections */
    std::vector<double> scaleBins;
    std::vector<double> S1_ID;
    std::vector<double> S2_ID;
    std::vector<double> S1_MS;
    std::vector<double> S2_MS;
    std::vector<double> S1_CB;
    std::vector<double> S2_CB;
    /* correlated and anti-correlated errors on the above */
    std::vector<double> S1Corr_ID;
    std::vector<double> S2Corr_ID;
    std::vector<double> S1Corr_MS;
    std::vector<double> S2Corr_MS;
    std::vector<double> S1Corr_CB;
    std::vector<double> S2Corr_CB;
    std::vector<double> S1ACorr_ID;
    std::vector<double> S2ACorr_ID;
    std::vector<double> S1ACorr_MS;
    std::vector<double> S2ACorr_MS;
    std::vector<double> S1ACorr_CB;
    std::vector<double> S2ACorr_CB;
  
    std::vector<double> p1_ID;
    std::vector<double> p2_ID;
    std::vector<double> p2_ID_TAN;
    std::vector<double> p1_MS;
    std::vector<double> p2_MS;
  
    std::vector<double> E_p1_ID;
    std::vector<double> E_p2_ID;   
    std::vector<double> E_p2_ID_TAN;   
    std::vector<double> E_p1_MS;
    std::vector<double> E_p2_MS;
  
    std::vector<double> S_p1_ID;
    std::vector<double> S_p2_ID;
    std::vector<double> S_p2_ID_TAN;   
    std::vector<double> S_p1_MS;   
    std::vector<double> S_p2_MS;   
  
    std::vector<double> MC_p1_ID;   
    std::vector<double> MC_p2_ID;   
    std::vector<double> MC_p2_ID_TAN;   
    std::vector<double> MC_p0_MS;   
    std::vector<double> MC_p1_MS;   
    std::vector<double> MC_p2_MS;   
  
    std::vector<double> CorrMatC0;
    std::vector<double> CorrMatC1;
    std::vector<double> CorrMatC2;
    std::vector<double> CorrMatC3;
    std::vector<double> CorrMatC4;
    std::vector<double> CorrMatC5;
  
    std::vector<double> CorrMatTanC0;
    std::vector<double> CorrMatTanC1;
    std::vector<double> CorrMatTanC2;
    std::vector<double> CorrMatTanC3;
    std::vector<double> CorrMatTanC4;
    std::vector<double> CorrMatTanC5;
  
  private:
    void Initialize(std::string data, std::string algo, std::string smearType,
		    std::string rel, std::string dir);
    void Finalize();
    void Clean();
    void CleanScales();

  };
}
#endif
