#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class AliAnalysisTaskJetUE+;
#pragma link C++ class AliAnalysisTaskJetUEStudies+;
#pragma link C++ class AliAnalysisTaskRhoBase+;
#pragma link C++ class AliAnalysisTaskRho+;
#pragma link C++ class AliAnalysisTaskRhoFlow+;
#pragma link C++ class AliAnalysisTaskRhoAverage+;
#pragma link C++ class AliAnalysisTaskRhoMass+;
#pragma link C++ class AliAnalysisTaskRhoMassBase+;
#pragma link C++ class AliAnalysisTaskRhoSparse+;
#pragma link C++ class AliAnalysisTaskRhoMassSparse+;
#pragma link C++ class AliAnalysisTaskLocalRho+;
#pragma link C++ class AliAnalysisTaskRhoBaseDev+;
#pragma link C++ class AliAnalysisTaskRhoDev+;
#pragma link C++ class AliAnalysisTaskRhoTransDev+;
#pragma link C++ class AliAnalysisTaskRhoPerpCone+;
#pragma link C++ class AliAnalysisTaskDeltaPt+;
#pragma link C++ class AliAnalysisTaskScale+;
#pragma link C++ class AliEmcalJetByJetCorrection+;
#pragma link C++ class AliEmcalPicoTrackInGridMaker+;
#pragma link C++ class AliJetEmbeddingTask+;
#pragma link C++ class AliJetEmbeddingFromGenTask+;
#pragma link C++ class AliJetFastSimulation+;
#pragma link C++ class AliJetModelBaseTask+;
#pragma link C++ class AliJetModelCopyTracks+;
#pragma link C++ class AliJetModelMergeBranches+;
#pragma link C++ class AliJetRandomizerTask+;
#pragma link C++ class AliJetConstituentTagCopier+;
#pragma link C++ class AliJetResponseMaker+;
#pragma link C++ class AliJetTriggerSelectionTask+;
#pragma link C++ class AliAnalysisTaskEmcalJetQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetSpectraQA+;
#pragma link C++ class AliAnalysisTaskPWGJEQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPP+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPPSimulation+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPbPb+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPP+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPb+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPPCharged+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPbCharged+;
#pragma link C++ class AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryEmbedding+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPP>+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPb>+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPPCharged>+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPbCharged>+;
#pragma link C++ class std::vector<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryEmbedding>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPP, AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPP>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPPCharged, AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPP>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPb, AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPbPb>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPbPbCharged, AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPbPb>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryEmbedding, AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPbPb>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPP, AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPPSimulation>+;
#pragma link C++ class AliAnalysisTaskEmcalJetTree<AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetInfoSummaryPPCharged, AliAnalysisTaskEmcalJetTreeBase::AliEmcalJetEventInfoSummaryPPSimulation>+;
#pragma link C++ class AliNanoAODArrayMaker+;
#pragma link C++ class AliPWGJETrainHelpers+;
#pragma link C++ class AliAnalysisTaskFlowVectorCorrectionsPWGJE+;

// user task
#pragma link C++ class AliAnalysisTaskEmcalJetEnergyFlow+;
#pragma link C++ class AliAnalysisTaskBackFlucRandomCone+;
#pragma link C++ class AliAnalysisTaskCLQA+;
#pragma link C++ class AliAnalysisTaskChargedJetsPA+;
#pragma link C++ class AliAnalysisTaskChargedJetsHadronCF+;
#pragma link C++ class AliChargedJetsHadronCFCuts+;
#pragma link C++ class AliAnalysisTaskChargedJetsHadronToy+;
#pragma link C++ class AliAnalysisTaskDcalDijetPerf+;
#pragma link C++ class AliAnalysisTaskDeltaPtJEmb+;
#pragma link C++ class AliAnalysisTaskDijetHadron+;
#pragma link C++ class AliAnalysisTaskParticleRandomizer+;
#pragma link C++ class AliAnalysisTaskEmcalBadCells+;
#pragma link C++ class AliAnalysisTaskEmcalDiJetBase+;
#pragma link C++ class AliAnalysisTaskEmcalDiJetAna+;
#pragma link C++ class AliAnalysisTaskEmcalDiJetResponse+;
#pragma link C++ class AliAnalysisTaskEmcalDijetImbalance+;
#pragma link C++ class AliAnalysisTaskEmcalVsPhos+;
#pragma link C++ class AliAnalysisTaskEmcalJetPerformance+;
#pragma link C++ class AliAnalysisTaskGenerateThermalBackgroundMC+;
#pragma link C++ class AliAnalysisTaskEmcalHighMultTrigger+;
#pragma link C++ namespace EmcalHJetMassAnalysis+;
#pragma link C++ class EmcalHJetMassAnalysis::AliAnalysisTaskEmcalHJetMass+;
#pragma link C++ class AliAnalysisTaskEmcalJetCorrection+;
#pragma link C++ class AliAnalysisTaskEmcalJetHadCorQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetHadEPpid+;
#pragma link C++ class AliAnalysisTaskEmcalJetMass+;
#pragma link C++ class AliAnalysisTaskEmcalJetMassBkg+;
#pragma link C++ class AliAnalysisTaskEmcalJetMassResponse+;
#pragma link C++ class AliAnalysisTaskEmcalJetMassStructure+;
#pragma link C++ class AliAnalysisTaskEmcalJetPatchTriggerQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetSample+;
#pragma link C++ class AliAnalysisTaskEmcalJetSparseMaker+;
#pragma link C++ class AliAnalysisTaskEmcalTmpSparseMaker+;
#pragma link C++ class AliAnalysisTaskEmcalJetSpectra+;
#pragma link C++ class AliAnalysisTaskEmcalJetSpectra8TeVTriggerQA+;
#pragma link C++ class AliAnalysisTaskEmcalJetSpectraMECpA;
#pragma link C++ class AliAnalysisTaskEmcalJetTagger+;
#pragma link C++ class AliAnalysisTaskEmcalJetTriggerMatcher+;
#pragma link C++ class AliAnalysisTaskEmcalJetTriggerQA+;
#pragma link C++ class AliAnalysisTaskEmcalHfeTagging+;
#pragma link C++ class AliAnalysisTaskEmcalRun2QA+;
#pragma link C++ class AliAnalysisTaskFakeJets+;
#pragma link C++ class AliAnalysisTaskEmcalMissingEnergy+;
#pragma link C++ class AliAnalysisTaskEmcalTriggerPatchJetMatch+;
#pragma link C++ class AliAnalysisTaskEmcalTriggerInfoQA+;
#pragma link C++ class AliAnalysisTaskHJetEmbed+;
#pragma link C++ class AliAnalysisTaskIDFragmentationFunction+;
#pragma link C++ class AliHelperClassFastSimulation+;
#pragma link C++ class AliJEQnVectorHandler;
#pragma link C++ class AliAnalysisTaskJetJTJT+;
#pragma link C++ class AliAnalysisTaskJetShapeBase+;
#pragma link C++ class AliAnalysisTaskJetShapeDeriv+;
#pragma link C++ class AliAnalysisTaskJetShapeConst+;
#pragma link C++ class AliAnalysisTaskJetShapeGR+;
#pragma link C++ class AliAnalysisTaskJetMassResponseDet+;
#pragma link C++ class AliAnalysisTaskJetMatching+;
#pragma link C++ class AliAnalysisTaskJetV2+;
#pragma link C++ class AliAnalysisTaskJetV3+;
#pragma link C++ class AliAnalysisTaskJetVn+;
#pragma link C++ class AliAnalysisTaskEmcalJetv2QA+;
#pragma link C++ class AliAnalysisTaskMTFPID+;
#pragma link C++ class AliAnalysisTaskPIDV0base+;
#pragma link C++ class AliPieceWisePoly+;
#pragma link C++ class AliAnalysisTaskPSHFE+;
#pragma link C++ class AliAnalysisTaskPrepareInputForEmbedding+;
#pragma link C++ class AliAnalysisTaskRhoMassScale+;
#pragma link C++ class AliEventTree+;
#pragma link C++ class AliAnalysisTaskEventExtractor+;
#pragma link C++ class AliEmcalTRDTrackingTask+;
#pragma link C++ class AliAnalysisTaskEPCalibForJet+;
#pragma link C++ class AliAnalysisTaskRawJetWithEP+;
#pragma link C++ class AliAnalysisTaskEmbeddingJetWithEP+;

#pragma link C++ class AliAnalysisTaskSOH+;
#pragma link C++ class AliAnalysisTaskPi0Hadron+;
#pragma link C++ namespace JETriggerRejectionAna+;
#pragma link C++ class JETriggerRejectionAna::AliAnalysisTaskTriggerRejection+;
#pragma link C++ class AliAnalysisTaskV0sInJetsEmcal+;
#pragma link C++ class AliTrackContainerV0+;
#pragma link C++ class AliTrackContainerToyModel+;
#pragma link C++ class AliMCParticleContainerToyModel+;
#pragma link C++ class AliEmcalPicoTrackFromJetMaker+;
#pragma link C++ class AliNtupHetInfo+;
#pragma link C++ class AliNtupCumInfo+;
#pragma link C++ class AliNtupZdcInfo+;
#pragma link C++ class AliAnalysisTaskEmcalTriggerPosition+;
#pragma link C++ class AliAnalysisTaskEmcalNeutralJets+;
#pragma link C++ class AliAnalysisTaskEmcalTriggerTreeWriter+;
#pragma link C++ class AliAnalysisTaskParticleInJet+;
#pragma link C++ namespace HighPtTracks+;
#pragma link C++ class HighPtTracks::AliReducedHighPtEventCreator+;
#pragma link C++ class HighPtTracks::AliReducedClusterParticle+;
#pragma link C++ class HighPtTracks::AliReducedEmcalCluster+;
#pragma link C++ class HighPtTracks::AliReducedPatchInfo+;
#pragma link C++ class HighPtTracks::AliReducedPatchContainer+;
#pragma link C++ class HighPtTracks::AliReducedMCHeader+;
#pragma link C++ class HighPtTracks::AliReducedGeneratedParticle+;
#pragma link C++ class HighPtTracks::AliReducedReconstructedTrack+;
#pragma link C++ class HighPtTracks::AliReducedHighPtEvent+;
#pragma link C++ class HighPtTracks::AliReducedTrackSelectionContainer+;
#pragma link C++ class HighPtTracks::AliReducedJetEvent+;
#pragma link C++ class HighPtTracks::AliReducedJetInfo+;
#pragma link C++ class HighPtTracks::AliReducedJetParticle+;
#pragma link C++ class HighPtTracks::AliReducedJetConstituent+;
#pragma link C++ class HighPtTracks::AliReducedMatchedTrack+;
#pragma link C++ class AliAnalysisTaskJetsEvshape+;
#pragma link C++ class AliJetEmbeddingSelRhoTask+;
#pragma link C++ class Cumulants+;
#pragma link C++ class VPart+;
#pragma link C++ namespace PWGJE;
#pragma link C++ namespace PWGJE::EMCALJetTasks;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEmcalJetTaggerTaskFast+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetHPerformance+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetHCorrelations+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetHdEdxPerformance+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetHdEdxCorrelations+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetHPerformanceConstits+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetHUtils+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalResponseOutliers+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalOnlinePatchesRef+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalOutliersGen+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalHighEClusterTree+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetConstituentQA+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetEnergyScale+;
#pragma link C++ class PWGJE::EMCALJetTasks::AngularityHandler+;
#pragma link C++ class PWGJE::EMCALJetTasks::AngularityHandler::AngularityBin+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetEnergySpectrum+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisEmcalTriggerSelectionHelper+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisEmcalTriggerSelectionHelperImpl+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetIterativeDeclustering+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalFastorMultiplicity+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalQoverPtShift++;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerBase+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliCutValueRange<float>+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliCutValueRange<double>+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliCutValueRange<int>+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEmcalTriggerOfflineSelection+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskPtEMCalTrigger+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskPtEMCalTriggerV1+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskTrackSkim+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerExtraCuts+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerEventData+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerEventSelection+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerTaskGroup+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerTracksAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerBinningComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerBinningComponent::AliEMCalTriggerBinningData+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerKineCuts+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerAnaTriggerDecision+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerAnaTriggerDecisionConfig+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerMCParticleAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerClusterAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerEventCounterAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerPatchAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerRecTrackAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerMCJetAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerRecJetAnalysisComponent+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerWeightHandler+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerPtHardWeight+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerAnaClassManager+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerAnaTriggerClass+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerAnaPatternObject+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerAnaPatternContainer+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEMCalTriggerAnaTriggerPatchTypeObject+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskTrackDCA+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEmcalAnalysisFactory+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskChargedParticlesRef+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskChargedParticlesRefMC+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskChargedParticlesMCTriggerMimic+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerMultiplicity+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalClustersRef+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalClusterMatched+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalPatchesRef+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalOfflinePatchesRef+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalRecalcPatchesRef+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEventSelectionRef+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEventFilter+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEtaPhiEfficiency+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskTrackDensity+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskTrackDensityData+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliEmcalTriggerEmulation+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerEmulation+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEGAMonitor+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalPatchMasking+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerCorrelation+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskCountITStracks+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerJets+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerJetsIDcorr+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalPatchMultCorr+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalClustersInJets+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerCorrelationMC+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalEG1Correlation+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalTriggerBackground+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalRawSTU+;
#pragma link C++ namespace PWGJE::EMCALJetTasks::Test;
#pragma link C++ class PWGJE::EMCALJetTasks::Test::AliAnalysisTaskEmcalTriggerSelectionTest+;

#ifdef WITH_ROOUNFOLD
// Classes which need direct access only to RooUnfold objects
#endif

#ifdef HAVE_FASTJET
// Classes which need direct access only to Fastjet objects (not
// needed if wrapped into ALICE objects)
#ifdef __CLING__
#pragma link C++ class AliFJWrapper;
#endif
#pragma link C++ class AliEmcalJetUtility+;
#pragma link C++ class AliEmcalJetUtilityGenSubtractor+;
#pragma link C++ class AliEmcalJetUtilityConstSubtractor+;
#pragma link C++ class AliEmcalJetUtilityEventSubtractor+;
#pragma link C++ class AliEmcalJetUtilitySoftDrop+;
#pragma link C++ class AliEmcalJetTask+;
#pragma link C++ class AliEmcalJetFinder+;
#pragma link C++ class AliJetEmbeddingFromAODTask+;
#pragma link C++ class AliJetEmbeddingFromPYTHIATask+;
#pragma link C++ class AliAnalysisTaskEmcalQGTagging+;
#pragma link C++ class AliAnalysisTaskNewJetSubstructure+;
#pragma link C++ class AliAnalysisTaskJetPull+;
#pragma link C++ class AliAnalysisTaskCheckDeadCone+;
#pragma link C++ class AliAnalysisTaskJetQnVectors+;
#pragma link C++ class AliAnalysisTaskJetPull+;
#pragma link C++ class AliAnalysisTaskLundPlane+;
#pragma link C++ class AliAnalysisTaskJetCharge+;
#pragma link C++ class AliAnalysisTaskJetChargeFlavourTemplates+;
#pragma link C++ namespace PWGJE::EMCALJetTasks::SubstructureTree;
#pragma link C++ class PWGJE::EMCALJetTasks::SubstructureTree::Subjets+;
#pragma link C++ class PWGJE::EMCALJetTasks::SubstructureTree::JetSplittings+;
#pragma link C++ class PWGJE::EMCALJetTasks::SubstructureTree::JetConstituents+;
#pragma link C++ class PWGJE::EMCALJetTasks::SubstructureTree::JetSubstructureSplittings+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskJetDynamicalGrooming+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskJetHardestKt+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetSpectrumSDPart+;
#pragma link C++ class AliAnalysisTaskHardestBranch+;
#pragma link C++ class AliAnalysisTaskEmcalJetShapesMC+;
#pragma link C++ class AliAnalysisTaskEmcalJetShapeExtra+;
#pragma link C++ class AliAnalysisTaskFullpAJets+;
#pragma link C++ class AliAnalysisTaskFullppJet;
#pragma link C++ class AliAnalysisTaskHJetDphi+;
#pragma link C++ class AliAnalysisTaskHJetSpectra+;
#pragma link C++ class AliAnalysisTaskJetPP+;
#pragma link C++ class AliAnalysisTaskSubJetFraction+;
#pragma link C++ class AliAnalysisTaskRecoilJetYield+;
#pragma link C++ class AliAnalysisTaskRecursiveSoftDrop+;
#pragma link C++ class HighPtTracks::AliHighPtReconstructionEfficiency+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetSubstructureTree+;
#pragma link C++ class AliAnalysisTaskJetSubstructure+;
#pragma link C++ class AliAnalysisTaskSoftDrop+;
#pragma link C++ class AliAnalysisTaskSoftDropResponse+;
#pragma link C++ class AliAnalysisTaskSDKL+;
#pragma link C++ class AliAnalysisTaskSDKLResponse+;
#pragma link C++ class AliEmcalJetTree+;
#pragma link C++ class AliAnalysisTaskJetExtractor+;
#pragma link C++ class std::vector<AliAnalysisTaskJetExtractor::SimpleSecondaryVertex>+;
#pragma link C++ class AliAnalysisTaskEmcalSubjet+;
#pragma link C++ class AliAnalysisTaskJetCoreEmcal+;
#pragma link C++ class AliAnalysisTaskSVtaskMCFilter+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEA+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskRevEA+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisEmcalJetHelperEA+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskPythiaBranchEA+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliLundPlaneHelper+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisEmcalSoftdropHelper+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisEmcalSoftdropHelperImpl+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalSoftDropData+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskPtEfficiencyJets+;
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskTracksInJet+;
#pragma link C++ class AliAnalysisTaskEmcalJetCDF+;
#pragma link C++ namespace PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalJetCDF_NS;
#ifdef WITH_ROOUNFOLD
// Classes which need direct access to both Fastjet and RooUnfold objects
#pragma link C++ class PWGJE::EMCALJetTasks::AliAnalysisTaskEmcalSoftDropResponse+;
#endif
#endif
#endif
