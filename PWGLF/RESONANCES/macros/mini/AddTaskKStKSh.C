/***************************************************************************
 //            Modified by Prottay           -12/10/2022
	       //Based on AddAnalysisTaskRsnMini
	       //pPb specific settings from AddTaskKStarPPB.C
	       //
	       // Macro to configure the KStarPlusMinus analysis task
	       // It calls all configs desired by the user, by means
	       // of the boolean switches defined in the first lines.
	       // ---
	       // Inputs:
	       //  1) flag to know if running on MC or data
	       //  2) collision system, whether pp, pPb or PbPb
	       // --
	       // Returns:
	       //  kTRUE  --> initialization successful
	       //  kFALSE --> initialization failed (some config gave errors)
	       //
	       ****************************************************************************/

//enum ERsnCollType_t { kPP=0,      kPPb,      kPbPb};

enum pairYCutSet { kPairDefault,    // USED ONLY FOR pA
    kNegative,       // USED ONLY FOR pA
    kCentral         // USED ONLY FOR pA
};

enum eventCutSet { kEvtDefault=0,
    kNoPileUpCut, //=1
    kDefaultVtx12,//=2
    kDefaultVtx8, //=3
    kDefaultVtx5, //=4
    kMCEvtDefault, //=5
    kSpecial1, //=6
    kSpecial2, //=7
    kNoEvtSel, //=8
    kSpecial3, //=9
    kSpecial4, //=10
    kSpecial5 //=11
};

enum eventMixConfig { kDisabled = -1,
    kMixDefault,     //=0 //10 events, Dvz = 1cm, DC = 10
    k5Evts,          //=1 //5 events, Dvz = 1cm, DC = 10
    k5Cent,          //=2 //10 events, Dvz = 1cm, DC = 5
};


#ifdef __CLING__
R__ADD_INCLUDE_PATH($ALICE_PHYSICS)
#include <PWGLF/RESONANCES/macros/mini/ConfigKStKSh.C>
#endif

//#include "ConfigKStKSh.C"


AliRsnMiniAnalysisTask *AddTaskKStKSh
(
 Bool_t      isMC,
 Bool_t      enableMonitor=kTRUE,
 TString     monitorOpt="PbPb",
 Float_t     piPIDCut = 2.0,
 Float_t     nsigmaTOF = 3.0,
 Float_t     vtxZcut = 10.0,
 Int_t       customQualityCutsID=1,
 AliRsnCutSetDaughterParticle::ERsnDaughterCutSet cutPiCandidate = AliRsnCutSetDaughterParticle::kTPCpidTOFveto3s,
 Float_t     pi_k0s_PIDCut = 3.0,
 Bool_t      rejectPileUp=kTRUE,
 Bool_t      UseTolCut = kFALSE,
 //Float_t     ArmentousParameter = 0.2, 
 Bool_t       isPP=kTRUE, 
Bool_t       k0sSwitch=0,
 Float_t     massTol = 0.03,
 Int_t       tol_switch = 1,
 Double_t    tol_sigma = 6, 
 Float_t     pLife = 12,
 Float_t     radiuslow = 5,
 Float_t     k0sDCA = 0.3,
 Float_t     k0sCosPoinAn = 0.99,
 Float_t     k0sDaughDCA = 0.3,
 Int_t       NTPCcluster = 70,
 TString     outNameSuffix = "KStarPlusMinus_V0Mass_Pt",
 Float_t     DCAxy = 0.1,
 Bool_t      enableSys = kFALSE,
 Float_t     crossedRows = 70,
 Int_t       Sys= 0,
 UInt_t      triggerMask=AliVEvent::kINT7,
 Int_t       nmix=10,
 Int_t        nNKS=3,
 Int_t       imbin=90,
 Float_t     limbin=0.6,
 Float_t     himbin=1.5,
 Int_t       ptbin=300,
 Float_t     lptbin=0.,
 Float_t     hptbin=30.,
 Int_t       multbin=100,
 Float_t     lmultbin=0,
 Float_t     hmultbin=100,
 Int_t        nm=1,
 Bool_t      timeRangeCut      = kTRUE


 )
{
    //-------------------------------------------
    // event cuts
    //-------------------------------------------

  Float_t     maxDiffAngleMixDeg = 20.0;
  Float_t     maxDiffVzMix = 1.0;
  Float_t     maxDiffMultMix = 5.0; 
  //Bool_t      isPP=1;
  Float_t     v0rapidity= 0.5;
  Float_t     rowsbycluster = 0.8;
  Int_t aodFilterBit=0;
  Float_t     ArmentousParameter = 0.2; 
 
 
  Int_t       MultBins=aodFilterBit/100;
    //   cout<<"EVENTCUTID is    "<<evtCutSetID<<endl;
    
    /*if(evtCutSetID==eventCutSet::kDefaultVtx12) vtxZcut=12.0; //cm
    if(evtCutSetID==eventCutSet::kDefaultVtx8) vtxZcut=8.0; //cm
    if(evtCutSetID==eventCutSet::kDefaultVtx5) vtxZcut=5.0; //cm
    if(evtCutSetID==eventCutSet::kNoPileUpCut) rejectPileUp=kFALSE;
    */
    
    //if(isMC) rejectPileUp=kFALSE;
    
    //-------------------------------------------
    //mixing settings
    //-------------------------------------------
    
    //Int_t       nmix = 10;
    /*if (mixingConfigID == eventMixConfig::kMixDefault) nmix = 10;
    if (mixingConfigID == eventMixConfig::k5Evts)      nmix = 5;
    if (mixingConfigID == eventMixConfig::k5Cent)      maxDiffMultMix = 5;
    */
    //
    // -- INITIALIZATION ----------------------------------------------------------------------------
    // retrieve analysis manager
    //






    
    AliAnalysisManager *mgr = AliAnalysisManager::GetAnalysisManager();
    if (!mgr) {
        ::Error("AddTaskKStarPlusMinus", "No analysis manager to connect to.");
        return NULL;
    }
    
    // create the task and configure
    TString taskName = Form("KStarPlusMinus%s%s", (isPP? "pp" : "PbPb"), (isMC ? "MC" : "Data"));
    AliRsnMiniAnalysisTask* task = new AliRsnMiniAnalysisTask(taskName.Data(),isMC);
    //    task->SelectCollisionCandidates(AliVEvent::kMB);
	//task->SelectCollisionCandidates(triggerMask);
	task->UseESDTriggerMask(triggerMask);
	//if (isPP)
	//task->UseMultiplicity("QUALITY");
	//else
	task->UseMultiplicity("AliMultSelection_V0M");//Only for RunII        
       

    //  task->UseMultiplicity("AliMultSelection_V0A");
       
    // task->UseCentrality("V0M");
    // task->UseMultiplicity("");
     
     // set event mixing options
     task->UseContinuousMix();
    //task->UseBinnedMix();
     task->SetNMix(nmix);
     task->SetMaxDiffVz(maxDiffVzMix);
    task->SetMaxDiffMult(maxDiffMultMix);
    if (!isPP) task->SetMaxDiffAngle(maxDiffAngleMixDeg*TMath::DegToRad()); //set angle diff in rad
    //task->SetUseTimeRangeCut(timeRangeCut);
    task->UseMC(isMC);    

    ::Info("AddAnalysisTaskTOFKStar", Form("Event mixing configuration: \n events to mix = %i \n max diff. vtxZ = cm %5.3f \n max diff multi = %\5.3f",  nmix, maxDiffVzMix, maxDiffMultMix));
    
    mgr->AddTask(task);
    
    //
    // -- EVENT CUTS (same for all configs) ---------------------------------------------------------
    //
    // cut on primary vertex:
    // - 2nd argument --> |Vz| range
    // - 3rd argument --> minimum required number of contributors
    // - 4th argument --> tells if TPC stand-alone vertexes must be accepted


    AliRsnCutEventUtils* cutEventUtils=new AliRsnCutEventUtils("cutEventUtils",kTRUE,rejectPileUp);
    cutEventUtils->SetCheckAcceptedMultSelection();    

   //AliRsnCutPrimaryVertex *cutVertex = 0;
   //cutVertex=new AliRsnCutPrimaryVertex("cutVertex",vtxZcut,0,kFALSE);
   AliRsnCutPrimaryVertex *cutVertex=new AliRsnCutPrimaryVertex("cutVertex",vtxZcut,0,kFALSE);
   cutVertex->GetCheckGeneratedVertexZ();


   AliRsnCutSet *eventCuts = new AliRsnCutSet("eventCuts", AliRsnTarget::kEvent);
   eventCuts->AddCut(cutEventUtils);
   eventCuts->AddCut(cutVertex);
   eventCuts->SetCutScheme(Form("%s&%s",cutEventUtils->GetName(),cutVertex->GetName()));
   task->SetEventCuts(eventCuts);


   // -- EVENT-ONLY COMPUTATIONS -------------------------------------------------------------------                                                        
  //vertex                                                                                                                                                 
   Int_t vtxID = task->CreateValue(AliRsnMiniValue::kVz, kFALSE);
   AliRsnMiniOutput *outVtx = task->CreateOutput("eventVtx", "HIST", "EVENT");
   outVtx->AddAxis(vtxID, 400, -20.0, 20.0);

    
    //multiplicity
    Int_t multID=task->CreateValue(AliRsnMiniValue::kMult,kFALSE);
    AliRsnMiniOutput* outMult=task->CreateOutput("eventMult","HIST","EVENT");
    if(isPP)
    outMult->AddAxis(multID,400,0.5,400.5);
    else outMult->AddAxis(multID,100,0.,100.);
    
    TH2F* hvz=new TH2F("hVzVsCent","",100,0.,100., 240,-12.0,12.0);
    task->SetEventQAHist("vz",hvz);//plugs this histogram into the fHAEventVz data member
    

    Double_t multbins[200];
    int j,nmult=0;
    if(triggerMask==AliVEvent::kHighMultV0){
      for(j=0;j<10;j++){multbins[nmult]=0.001*j; nmult++;}
      for(j=1;j<10;j++){multbins[nmult]=0.01*j; nmult++;}
      for(j=1;j<=10;j++){multbins[nmult]=0.1*j; nmult++;}
    }else{
      for(j=0;j<10;j++){multbins[nmult]=0.1*j; nmult++;}
      for(j=1;j<=100;j++){multbins[nmult]=j; nmult++;}
    }
    nmult--;

   
    TH1F* hEventsVsMulti=new TH1F("hAEventsVsMulti","",nmult,multbins);
    task->SetEventQAHist("EventsVsMulti",hEventsVsMulti);//custom binning for fHAEventsVsMulti
   
    double ybins[500];
    for(j=0;j<=401;j++) ybins[j]=j-0.5;
    TH2F* hmc=new TH2F("MultiVsCent","", nmult,multbins, 401,ybins);
    hmc->GetYaxis()->SetTitle("QUALITY");
    task->SetEventQAHist("multicent",hmc);//plugs this histogram into the fHAEventMultiCent data member

    
    //
    // -- PAIR CUTS (common to all resonances) ------------------------------------------------------
    //    Double_t    minYlab =  -0.465;
    // Double_t    maxYlab =  0.035;

    Double_t    minYlab = -0.5;
    Double_t    maxYlab = 0.5;
    /*
    AliRsnCutMiniPair* cutY=new AliRsnCutMiniPair("cutRapidity", AliRsnCutMiniPair::kRapidityRange);
    cutY->SetRangeD(-0.5,0.5);
    
    AliRsnCutMiniPair* cutV0=new AliRsnCutMiniPair("cutV0", AliRsnCutMiniPair::kContainsV0Daughter);
    
    AliRsnCutSet* PairCutsSame=new AliRsnCutSet("PairCutsSame",AliRsnTarget::kMother);
    PairCutsSame->AddCut(cutY);
    PairCutsSame->AddCut(cutV0);
    PairCutsSame->SetCutScheme(TString::Format("%s&(!%s)",cutY->GetName(),cutV0->GetName()).Data());
    //note the use of the ! operator in this cut scheme
    
    AliRsnCutSet* PairCutsMix=new AliRsnCutSet("PairCutsMix",AliRsnTarget::kMother);
    PairCutsMix->AddCut(cutY);
    PairCutsMix->SetCutScheme(cutY->GetName());
    */    
//
    // -- CONFIG ANALYSIS --------------------------------------------------------------------------
    //        gROOT->LoadMacro("$ALICE_PHYSICS/PWGLF/RESONANCES/macros/mini/ConfigKStarPlusMinuspPbRun2.C");
    //gROOT->LoadMacro("$ALICE_PHYSICS/PWGLF/RESONANCES/macros/mini/ConfigKStarPlusMinusPbPb2018.C");
    //gROOT->LoadMacro("$ALICE_PHYSICS/PWGLF/RESONANCES/macros/mini/ConfigKStarPlusMinusPbPb2018arm.C");
    //gROOT->LoadMacro("ConfigKStKSh.C");
    //gROOT->LoadMacro("ConfigKStarPlusMinuspPbRun2.C");
    //gROOT->LoadMacro("ConfigKStarPlusMinusPbPb2018grid.C");


     if (isMC) {
       Printf("========================== MC analysis - PID cuts not used");
    } else
       Printf("========================== DATA analysis - PID cuts used");
    
     if(!ConfigKStKSh(task, isMC, piPIDCut,nsigmaTOF,customQualityCutsID, cutPiCandidate, pi_k0s_PIDCut, enableMonitor, monitorOpt.Data(), UseTolCut, ArmentousParameter, k0sSwitch, massTol, tol_switch, tol_sigma, pLife, radiuslow, k0sDCA, k0sCosPoinAn, k0sDaughDCA, NTPCcluster, "", DCAxy, enableSys, crossedRows, rowsbycluster, Sys, nNKS, imbin, limbin, himbin, ptbin, lptbin, hptbin, multbin, lmultbin, hmultbin, triggerMask, nm)) return 0x0;

     //if(!ConfigKStarPlusMinusPbPb2018arm(task, isMC, piPIDCut,nsigmaTOF,customQualityCutsID, cutPiCandidate, pi_k0s_PIDCut, enableMonitor, monitorOpt.Data(), UseTolCut, ArmentousParameter, massTol, tol_switch, tol_sigma, pLife, radiuslow, k0sDCA, k0sCosPoinAn, k0sDaughDCA, NTPCcluster, "", DCAxy, enableSys, crossedRows, rowsbycluster, Sys, imbin, limbin, himbin, ptbin, lptbin, hptbin, multbin, lmultbin, hmultbin)) return 0x0;
    
     //
     // -- CONTAINERS --------------------------------------------------------------------------------
     //
     TString outputFileName = AliAnalysisManager::GetCommonFileName();
     //  outputFileName += ":Rsn";
     Printf("AddTaskKStarPlusMinus - Set OutputFileName : \n %s\n", outputFileName.Data() );
     
     
     AliAnalysisDataContainer *output = mgr->CreateContainer(Form("RsnOut_%s_%.1f_%.1f_%.1f_%.2f_%.3f_%.f_%.f_%.f_%.1f_%.2f_%.1f_%.3f_%.1f_%.2f", outNameSuffix.Data(),piPIDCut,nsigmaTOF,customQualityCutsID,pi_k0s_PIDCut,massTol, pLife,radiuslow, k0sDCA,k0sCosPoinAn,k0sDaughDCA, DCAxy, Sys), TList::Class(), AliAnalysisManager::kOutputContainer, outputFileName);
    
    mgr->ConnectInput(task, 0, mgr->GetCommonInputContainer());
    mgr->ConnectOutput(task, 1, output);
    
    return task;
}

