#usage:
# python scripts/plot_hists.py plots/$runDir/hists reweighting/merged-r33.root reweighting/merged-r33-syssamples.root
#last argument (sys-samples) is optional. If not given, reweighting plots will not be made

import sys
import numpy as np
import re
import math
import ROOT
import root_numpy
from array import array

label_size = .0475
title_size = .05
title_offset = .55

# helper functions
def flatten_list(in_list): return [item for sublist in in_list for item in sublist]

ROOT.gROOT.SetBatch(True)
ROOT.gROOT.SetStyle("ATLAS");
ROOT.gStyle.SetOptStat(0)

get_systematics = False

scale = {'sig': 50., 'eft': 10.}

# rebinning or 2d q/g fraction hists
             #[rebinning_x, rebinning_y, merging_x, merging_y]
rebinning = {}

rebinning['EtaPt'] = {'ttbar': [4, 10, [2, 1], [15, 2]],
                      'W+jets': [2, 10, [4, 2, 1], [16]],
                      'Z+jets': [2, 10, [4, 2, 1], [16]],
                      'diboson': [2, 20, [4, 2, 1, 1], [6, 1]],
                      'stop': [4, 20, [2, 1], [6, 1]],
                      'signal': [4, 20, [2, 1], [6, 1]],
                     }

rebinning['EtaNj'] = {'ttbar': [4, 2, [2, 1], [1]],
                      'W+jets': [2, 2, [4, 2], [1]],
                      'Z+jets': [2, 2, [4, 2], [1]],
                      'diboson': [4, 2, [2, 1], [1]],
                      'stop': [4, 2, [2, 1], [1]],
                      'signal': [4, 1, [2, 1, 1], [3, 2, 1]],
                     }

rebinning['PtNj'] = {'ttbar': [10, 2, [15, 1], [1]],
                      'W+jets': [10, 2, [15, 1], [1]],
                      'Z+jets': [10, 2, [15, 1], [1]],
                      'diboson': [20, 2, [6, 1], [1]],
                      'stop': [20, 2, [6, 1], [1]],
                      'signal': [20, 2, [6, 1], [1]],
                     }

for suffix in ['EtaPt', 'EtaNj', 'PtNj']:

  rebinning[suffix]['ttbar PowhegHerwig'] = rebinning[suffix]['ttbar']
  rebinning[suffix]['diboson powpy'] = rebinning[suffix]['diboson']
  rebinning[suffix]['W+jets madgraph'] = rebinning[suffix]['W+jets']
  rebinning[suffix]['Z+jets madgraph'] = rebinning[suffix]['Z+jets']

m_stats_max = .05 # for 2d q/g fraction hists

qg_fractions_z_max = 1.
qg_fractions_stats_max = 5.

atlas_label = '#sqrt{s} = 13 TeV, #int Ldt = 36.1 fb^{-1}'

cutflow_blinding = {'SRVBS_HP': 10, 'SRVBS_LP': 10, 'SRVBS_Res': 12}

regions = []


# only HP SR
#regions += ['0ptag1pfat0pjet_0ptv_SRVBS_HP']

# SRs
regions += ['0ptag1pfat0pjet_0ptv_SRVBS_HP', '0ptag1pfat0pjet_0ptv_SRVBS_LP', '0ptag2pjet_0ptv_SRVBS_Fid', '0ptag2pjet_0ptv_SRVBS_NonFid', ['0ptag2pjet_0ptv_SRVBS_Fid', '0ptag2pjet_0ptv_SRVBS_NonFid']]

# CRs
#regions += ['0ptag1pfat0pjet_0ptv_CRVjet_Mer', '0ptag2pjet_0ptv_CRVjet_Fid', '0ptag2pjet_0ptv_CRVjet_NonFid', ['0ptag2pjet_0ptv_CRVjet_Fid', '0ptag2pjet_0ptv_CRVjet_NonFid']]

# regions for reweighting
regions += ['0ptag1pfat0pjet_0ptv_CRVjet_Mer', '0ptag2pjet_0ptv_CRVjet_Fid']

# merged combined
#regions += [['0ptag1pfat0pjet_0ptv_SRVBS_HP', '0ptag1pfat0pjet_0ptv_SRVBS_LP', '0ptag1pfat0pjet_0ptv_CRVjet_Mer']]

# resolved combined
#regions += [['0ptag2pjet_0ptv_SRVBS_Fid', '0ptag2pjet_0ptv_SRVBS_NonFid', '0ptag2pjet_0ptv_CRVjet_Fid', '0ptag2pjet_0ptv_CRVjet_NonFid']]

# all analysis regions combined
#regions += [['0ptag1pfat0pjet_0ptv_SRVBS_HP', '0ptag1pfat0pjet_0ptv_SRVBS_LP', '0ptag1pfat0pjet_0ptv_CRVjet_Mer', '0ptag2pjet_0ptv_SRVBS_Fid', '0ptag2pjet_0ptv_CRVjet_Fid']]

# merged SR regions combined
#regions += [['0ptag1pfat0pjet_0ptv_SRVBS_HP', '0ptag1pfat0pjet_0ptv_SRVBS_LP']]

# merged CR
#regions += [['0ptag1pfat0pjet_0ptv_CRVjet_Mer']]

# analysis regions for q/g fraction derivations
#regions += [['0ptag1pfat0pjet_0ptv_SRVBS_HP', '0ptag1pfat0pjet_0ptv_SRVBS_LP', '0ptag1pfat0pjet_0ptv_CRVjet_Mer', '0ptag2pjet_0ptv_SRVBS_Fid', '0ptag2pjet_0ptv_CRVjet_Fid'], ['0ptag1pfat0pjet_0ptv_SRVBS_HP', '0ptag1pfat0pjet_0ptv_SRVBS_LP'], '0ptag1pfat0pjet_0ptv_SRVBS_HP', '0ptag1pfat0pjet_0ptv_SRVBS_LP', '0ptag2pjet_0ptv_SRVBS_Fid', '0ptag1pfat0pjet_0ptv_CRVjet_Mer', '0ptag2pjet_0ptv_CRVjet_Fid']

# all resolved Fid regions combined
#regions += [['0ptag2pjet_0ptv_SRVBS_Fid', '0ptag2pjet_0ptv_CRVjet_Fid']]

# region comparison (put two regions into a tuple to make comparison plots)
#regions += [('0ptag1pfat0pjet_0ptv_CRVjet_HP', '0ptag1pfat0pjet_0ptv_CRVjet_LP'), ('0ptag1pfat0pjet_0ptv_CRVjet_Fid', '0ptag1pfat0pjet_0ptv_CRVjet_NonFid')]

# cutflows
#regions += ['SRVBS_HP', 'SRVBS_LP', 'SRVBS_Res', 'CRVjet_Mer', 'CRVjet_Res', 'CR_Rest']

# individual cutflow hists
#regions = ['0ptag0fat0jet_0ptv_cutFlow'] #note: cannot be used together with any other regions!


variables = [#  name_in_tree                               , tex_label                        , rebinning, legend_pos, blinding_min, blinding_max, skip_CRVjet, derive_reweighting_factors, no_data, cut_lines
#               # reweighting
               ['MTagJets'                                 , 'm(jj)^{tag} [GeV]'                    , 10      , 'r'       , None        , None        , False      , True                     , False, []],
#               # cutflows
#               ['cutflow'                                  , ''                               , None     , 'r'       , None       , 100        , False      , False                        , False, []],
#               ['cutflowraw'                               , ''                               , None     , 'r'       , None        , 100        , False      , False                        , False, []],
#               # individual cutflow hists (note: cannot be used with any other variables!)
#                ['SRVBS_HP_MET_MET'                            , 'E_{T}^{miss} [GeV]'               , 2     , 'r'       , None        , None        , False      , False                        , False, [200.]],
#                ['SRVBS_Res_MET_MET'                            , 'E_{T}^{miss} [GeV]'               , 2     , 'r'       , None        , None        , False      , False                        , False, [200.]],
#                ['SRVBS_HP_TrkMET_TrkMET'                         , 'E_{T}^{miss,track} [GeV]'         , None     , 'r'       , None        , None        , False      , False                        , False, [50.]],
#                ['SRVBS_Res_TrkMET_TrkMET'                         , 'E_{T}^{miss,track} [GeV]'         , None     , 'r'       , None        , None        , False      , False                        , False, [50.]],
#                ['SRVBS_HP_PtTagMerJet1_PtTagMerJet1'                   , 'p_{T}(j^{tag}_{lead}) [GeV]'      , 5     , 'r'       , None        , None        , False      , False                        , False, [30.]],
#                ['SRVBS_HP_PtTagMerJet2_PtTagMerJet2'                   , 'p_{T}(j^{tag}_{sublead}) [GeV]'      , 5     , 'r'       , None        , None        , False      , False                        , False, [30.]],
#                ['SRVBS_HP_DPhiMETTrkMET_DeltaPhiMetTrkMet'                  , '|#delta#Phi(E_{T}^{miss}, E_{T}^{miss,track})|'         , None     , 'r'       , None        , None        , False      , False                        , False, [math.pi/2.]],
#                ['SRVBS_Res_DPhiMETTrkMET_DeltaPhiMetTrkMet'                  , '|#delta#Phi(E_{T}^{miss}, E_{T}^{miss,track})|'         , None     , 'r'       , None        , None        , False      , False                        , False, [math.pi/2.]],
#                ['SRVBS_HP_MinDPhiSmallRJets_MinDPhiSmallRJets'             , 'min|#delta#Phi(E_{T}^{miss}, j^{any})|'         , None     , 'r'       , None        , None        , False      , False                        , False, [math.pi/6.]],
#                ['SRVBS_Res_MinDPhiSmallRJets_MinDPhiSmallRJets'             , 'min|#delta#Phi(E_{T}^{miss}, j^{any})|'         , None     , 'r'       , None        , None        , False      , False                        , False, [math.pi/6.]],
#                ['SRVBS_HP_MinDPhiFatJet_MinDPhiFatJet'                 , '|#delta#Phi(E_{T}^{miss}, J^{sig})|'         , None     , 'l'       , None        , None        , False      , False                        , False, [math.pi/9.]],
#                ['SRVBS_Res_MVHadRes_MVHadRes'                         , 'm(jj)^{sig} [GeV]'     , 2     , 'r'       , 64        , 106        , False      , False                     , False, [64, 106]],
#                ['SRVBS_HP_MFatJetLow_MFatJet'                         , 'm(J^{sig}) [GeV]'     , 2     , 'r'       , 64        , 106        , False      , False                     , False, [50]],
#                ['SRVBS_LP_MFatJetLow_MFatJet'                         , 'm(J^{sig}) [GeV]'     , 2     , 'r'       , 64        , 106        , False      , False                     , False, [50]],
#                ['SRVBS_HP_MTagMerJets400_MTagMerJets'                 , 'm(jj)^{tag} [GeV]'      , 10     , 'r'       , None        , None        , False      , False                        , False, [400.]],
#                ['SRVBS_LP_MTagMerJets400_MTagMerJets'                 , 'm(jj)^{tag} [GeV]'      , 10     , 'r'       , None        , None        , False      , False                        , False, [400.]],
#                ['SRVBS_Res_MTagResJets400_MTagResJets'                 , 'm(jj)^{tag} [GeV]'      , 10     , 'r'       , None        , None        , False      , False                        , False, [400.]],
#                ['SRVBS_Res_MinDPhiDijet_MinDPhiDijet'                  , 'min|#delta#Phi(E_{T}^{miss}, (jj)^{sig})|'         , None     , 'l'       , None        , None        , False      , False                        , False, [math.pi/9.]],
#                ['SRVBS_HP_D2FatJetHP_MFatJet'                     , 'm(J^{sig}) [GeV]'      , 10     , 'r'       , 60        , 120        , False      , False                        , False, []],
#                ['SRVBS_HP_TaggerFatJetHP_MFatJet'                     , 'm(J^{sig}) [GeV]'      , 10     , 'r'       , 60        , 120        , False      , False                        , False, []],
#                ['SRVBS_HP_D2FatJetHP_D2FatJet'                     , 'D_2(J^{sig})'      , None     , 'r'       , None        , None        , False      , False                        , False, []],
#                ['SRVBS_HP_TaggerFatJetHP_D2FatJet'                     , 'D_2(J^{sig})'      , None     , 'r'       , None        , None        , False      , False                        , False, []],
#                ['SRVBS_HP_D2FatJetHP_NtrkFatJet'                     , 'N_{track}(J^{sig})'      , None     , 'r'       , None        , None        , False      , False                        , False, []],
#                ['SRVBS_HP_TaggerFatJetHP_NtrkFatJet'                     , 'N_{track}(J^{sig})'      , None     , 'r'       , None        , None        , False      , False                        , False, []],
#                ['SRVBS_HP_D2FatJetHP_PtFatJet'                     , 'p_{T}(J^{sig})'      , None     , 'r'       , None        , None        , False      , False                        , False, []],
#                ['SRVBS_HP_TaggerFatJetHP_PtFatJet'                     , 'p_{T}(J^{sig})'      , None     , 'r'       , None        , None        , False      , False                        , False, []],
#               # q/g fractions
#               ['NQuarkEtaPt'                              , '|#eta|;p_{T} [GeV];n_{q}'         , [1, 1]  , 'r'       , None        , None        , False      , False                     , True, []],
#               ['NGluonEtaPt'                              , '|#eta|;p_{T} [GeV];n_{g}'         , [1, 1]  , 'r'       , None        , None        , False      , False                     , True, []],
#               ['NQuarkEtaNj'                              , '|#eta|;N(j);n_{q}'         , [1, 1]  , 'r'       , None        , None        , False      , False                     , True, []],
#               ['NGluonEtaNj'                              , '|#eta|;N(j);n_{g}'         , [1, 1]  , 'r'       , None        , None        , False      , False                     , True, []],
#               ['NQuarkPtNj'                              , 'p_{T} [GeV];N(j);n_{q}'         , [1, 1]  , 'r'       , None        , None        , False      , False                     , True, []],
#               ['NGluonPtNj'                              , 'p_{T} [GeV];N(j);n_{g}'         , [1, 1]  , 'r'       , None        , None        , False      , False                     , True, []],
#                # truth type
#                ['VBSFidType_truth'                         , 'truth selection'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#                ['VBSFidTypeDebug_truth'                    , 'truth selection'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               # for boson tag sf
#               ['MTagJets'                                 , 'm(jj)^{tag} [GeV]'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['MTagJetsWithoutBosonTagSF'                   , 'm(jj)^{tag} [GeV]'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               # MVA inputs
#               ['MTagJets'                                 , 'm(jj)^{tag} [GeV]'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['PtTagJet1'                                , 'p_{T}(j^{tag}_{lead}) [GeV]'       , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['PtTagJet2'                                , 'p_{T}(j^{tag}_{sublead}) [GeV]'       , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['MFatJet'                                  , 'm(J^{sig}) [GeV]'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['D2FatJet'                                 , 'D_{2}(J^{sig})'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['MET'                                      , 'E_{T}^{miss} [GeV]'             , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['DeltaPhiFatJet_MET'                       , '#delta#Phi(J,E^{miss}_{T}))'   , None       , 'l'       , None        , None        , False      , False                     , False, []],
#               ['NTrackJets20'                             , 'N(j^{track})'                  , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['WidthTagJet1'                             , 'w(j^{tag}_{lead})'             , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['WidthTagJet2'                             , 'w(j^{tag}_{sublead})'          , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['DeltaEtaSignalJets'                       , '#delta#eta(jj)^{sig}'   , 5       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['PtSignalJet1'                             , 'p_{T}(j^{sig}_{lead}) [GeV]'       , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['PtSignalJet2'                             , 'p_{T}(j^{sig}_{sublead}) [GeV]'       , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['WidthSignalJet1'                          , 'w(j^{sig}_{lead})'             , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['WidthSignalJet2'                          , 'w(j^{sig}_{sublead})'          , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               # additional jets (RNN inputs)
#               ['recojN'                                   , 'N(j)'                         , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['NRemainingJets'                           , 'N(j^{extra})'                 , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['minDeltaEtaLeadRemainingJets'             , 'min(#Delta#eta(j^{extra}))'   , 5       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['maxDeltaEtaLeadRemainingJets'             , 'max(#Delta#eta(j^{extra}))'   , 5       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['pTLeadRemainingJets'                      , 'p_{T}(j^{extra}_{lead}) [GeV]'       , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['etaLeadRemainingJets'                     , '#eta(j^{extra}_{lead})'       , 5       , 'r'       , None        , None        , False      , False                     , False, []],
#               # MVA outputs
#               ['RNN'                                      , 'MVA RNN Score'                  , 5        , 'r'       , .6          , 1.          , False       , False                    , False, []],
#               ['NN'                                       , 'MVA NN Score'                   , 5        , 'r'       , .6          , 1.          , False       , False                    , False, []],
#               # Vhad mass
#                ['MFatJet'                                  , 'm(J^{sig}) [GeV]'              , 5       , 'r'       , 60        , 120        , False      , False                     , False, []],
#                ['MVHad'                                    , 'm(jj)^{sig} [GeV]'              , None       , 'r'       , 60        , 120        , False      , False                     , False, []],
#               # vars with tagger SF available
#               ['MTagJets'                                 , 'm(jj)^{tag}'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['MTagJetsWithoutBosonTagSF'                   , 'm(jj)^{tag}'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['MFatJet'                                 , 'm(J^{sig})'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['MFatJetWithoutBosonTagSF'                   , 'm(J^{sig})'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['D2FatJet'                                 , 'D_{2}(J^{sig})'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['D2FatJetWithoutBosonTagSF'                   , 'D_{2}(J^{sig})'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['PtFatJet'                                 , 'p_{T}(J^{sig})'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['PtFatJetWithoutBosonTagSF'                   , 'p_{T}(J^{sig})'                    , 10       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['NtrkFatJet'                                 , 'N_{track}(J^{sig})'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['NtrkFatJetWithoutBosonTagSF'                   , 'N_{track}(J^{sig})'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['EtaFatJet'                                 , '#eta(J^{sig})'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#               ['EtaFatJetWithoutBosonTagSF'                   , '#eta(J^{sig})'                    , None       , 'r'       , None        , None        , False      , False                     , False, []],
#              ['mjjWeightResolved'                        , 'm(jj)^{tag}-reweighting factor' , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['mjjWeightMerged'                          , 'm(jj)^{tag}-reweighting factor' , None     , 'r'       , None        , None        , False      , False                     , False, []],
#               ['NNresSR'                                  , 'MVA NN Score'                   , 5        , 'r'       , .6          , 1.          , True       , False                    , False, []],
#               ['NNmerHPLPSR'                              , 'MVA NN Score'                   , 5        , 'r'       , .6          , 1.          , True       , False                    , False, []],
#              ['RNNScoreMerged'                           , 'MVA RNN Score'                  , 10       , 'r'       , .6          , 1.          , True       , False                     , False, []],
#              ['RNNScoreTightResolved'                    , 'MVA RNN Score'                  , 10       , 'r'       , .6          , 1.          , True       , False                     , False, []],
#              ['RNNScoreLooseResolved'                    , 'MVA RNN Score'                  , 10       , 'r'       , .6          , 1.          , True       , False                     , False, []],
#              ['WTagSF50'                                 , 'SF_{50}^{W-tag}'                , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['ZTagSF50'                                 , 'SF_{50}^{Z-tag}'                , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['WTagSF80'                                 , 'SF_{80}^{W-tag}'                , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['ZTagSF80'                                 , 'SF_{80}^{Z-tag}'                , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['WTageff50'                                , '#epsilon_{50}^{W-tag}'          , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['ZTageff50'                                , '#epsilon_{50}^{Z-tag}'          , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['WTageff80'                                , '#epsilon_{80}^{W-tag}'          , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['ZTageff80'                                , '#epsilon_{80}^{Z-tag}'          , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['WTageffSF50'                              , '#epsilon(SF_{50}^{W-tag})'      , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['ZTageffSF50'                              , '#epsilon(SF_{50}^{Z-tag})'      , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['WTageffSF80'                              , '#epsilon(SF_{80}^{W-tag})'      , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['ZTageffSF80'                              , '#epsilon(SF_{80}^{Z-tag})'      , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['WTagSF80excl'                             , 'SF_{80-excl}^{W-tag}'           , None     , 'r'       , None        , None        , False      , False                     , False, []],
#              ['ZTagSF80excl'                             , 'SF_{80-excl}^{Z-tag}'           , None     , 'r'       , None        , None        , False      , False                     , False, []],
            ]
roc_var     =  ['roc'                                      , ''                               , None     , 'r'       , None        , None        , False      , False                     , False, []]

qgfrac_var = {}
qgfrac_stats_var = {}
qgfrac_diff_var = {}

qgfrac_var['EtaPt']  =  ['qgfrac'                                   , '|#eta|;p_{T} [GeV];n_{g}/(n_{q}+n_{g}) [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]
qgfrac_stats_var['EtaPt']  =  ['qgfrac'                             , '|#eta|;p_{T} [GeV];statistical uncertainty [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]
qgfrac_diff_var['EtaPt']  =  ['qgfrac'                                   , '|#eta|;p_{T} [GeV];absolute difference to nominal [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]

qgfrac_var['EtaNj']  =  ['qgfrac'                                   , '|#eta|;N(j);n_{g}/(n_{q}+n_{g}) [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]
qgfrac_stats_var['EtaNj']  =  ['qgfrac'                             , '|#eta|;N(j);statistical uncertainty [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]
qgfrac_diff_var['EtaNj']  =  ['qgfrac'                                   , '|#eta|;N(j);absolute difference to nominal [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]

qgfrac_var['PtNj']  =  ['qgfrac'                                   , 'p_{T} [GeV];N(j);n_{g}/(n_{q}+n_{g}) [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]
qgfrac_stats_var['PtNj']  =  ['qgfrac'                             , 'p_{T} [GeV];N(j);statistical uncertainty [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]
qgfrac_diff_var['PtNj']  =  ['qgfrac'                                   , 'p_{T} [GeV];N(j);absolute difference to nominal [%]'   , None     , 'r'       , None        , None        , False      , False                     , True, []]

# Note: all variables specified in the roc_curves also have to be in 'variables' above
roc_curves = [#  region                         , variables
#                ['0ptag1pfat0pjet_0ptv_SRVBS_HP', ['RNN', 'NN']],
             ]

# extend variable names of individual cut flow hists
do_individual_cut_flow_hists = len(regions) == 1 and regions[0] == '0ptag0fat0jet_0ptv_cutFlow'

individual_cut_flow_plots = {}
for variable in variables: individual_cut_flow_plots[variable[0]] = {}

if do_individual_cut_flow_hists:
  for v in range(len(variables)):
    variables[v][0] += '_pass'
    new_variable = variables[v].copy()
    new_variable[0] = new_variable[0].replace('_pass', '_fail')
    variables.append(new_variable)

boson_tagger_sf = {}
for var in variables:
  if 'WithoutBosonTagSF' in var[0]: 
    boson_tagger_sf[var[0].replace('WithoutBosonTagSF', '')] = {}

qg_fractions = {}
qg_fractions_by_sample = {}

dummy_hist = ROOT.TH2D('dummy', 'dummy', 1, 0., 1., 1, 0., 1.) #hist with 1 bin to calculate stats the root way

# note: alternative samples should end with `_alt`, channels (Wjets, ttbar, etc. should not contain a underscore)
samples = {}
samples['bkg'], samples['sig'], samples['eft'], samples['dat'] = {}, {}, {}, {}
samples['bkg']['Wjets_nom'] = ['W'] 
samples['bkg']['Zjets_nom'] = ['Z'] 
samples['bkg']['diboson'] = ['WW', 'WZ', 'ZZ'] 
samples['bkg']['stop'] = ['stopWt', 'stops', 'stopt'] 
samples['bkg']['ttbar_nom'] = ['ttbar'] 
samples['bkg']['Wjets_madgraph_alt'] = ['MadWenu', 'MadWmunu', 'MadWtaunu'] # alternative samples
samples['bkg']['Zjets_madgraph_alt'] = ['MadZee', 'MadZmumu', 'MadZnunu'] # alternative samples
samples['bkg']['diboson_powpy_alt'] = ['WWPw', 'ZZPw', 'WZPw'] # alternative samples
#samples['bkg']['ttbar_AK10J160_alt'] = ['ttbar_AK10J160'] # alternative samples
##samples['bkg']['ttbar_dilep_alt'] = ['ttbar_dilep'] # alternative samples
#samples['bkg']['ttbar_hdamp517p5_AK10J160_alt'] = ['ttbar_hdamp517p5_AK10J160'] # alternative samples
#samples['bkg']['ttbar_noShWe_alt'] = ['ttbar_noShWe'] # alternative samples
samples['bkg']['ttbar_PowhegHerwig_alt'] = ['ttbar_PowhegHerwig'] # alternative samples
#samples['bkg']['ttbar_singlelep_alt'] = ['ttbar_singlelep'] # alternative samples
#samples['bkg']['ttbar_singlep_alt'] = ['ttbar_singlep'] # alternative samples
#samples['sig']['sig'] = ['EW6Fid0', 'EW6Fid1', 'EW6Fid2', 'EW6Fid3']  #old
samples['sig']['sig'] = ['EW60LepFid0', 'EW60LepFid1', 'EW60LepFid2', 'EW60LepFid3'] 
samples['dat']['dat'] = ['data'] 
samples['eft']['eft'] = ['aQGCFM0INT', 'aQGCFM0QUAD', 'aQGCFM1INT', 'aQGCFM1QUAD', 'aQGCFM2INT', 'aQGCFM2QUAD', 'aQGCFM3INT', 'aQGCFM3QUAD', 'aQGCFM4INT', 'aQGCFM4QUAD', 'aQGCFM5INT', 'aQGCFM5QUAD', 'aQGCFM7INT', 'aQGCFM7QUAD', 'aQGCFS02INT', 'aQGCFS02QUAD', 'aQGCFS1INT', 'aQGCFS1QUAD', 'aQGCFT0INT', 'aQGCFT0QUAD', 'aQGCFT1INT', 'aQGCFT1QUAD', 'aQGCFT2INT', 'aQGCFT2QUAD', 'aQGCFT5INT', 'aQGCFT5QUAD', 'aQGCFT6INT', 'aQGCFT6QUAD', 'aQGCFT7INT', 'aQGCFT7QUAD', 'aQGCFT8INT', 'aQGCFT8QUAD', 'aQGCFT9INT', 'aQGCFT9QUAD']

colours = {}
colours['bkg'], colours['sig'], colours['eft'], colours['dat'] = {}, {}, {}, {}
colours['bkg']['Wjets_nom'] = ROOT.kBlue
colours['bkg']['Zjets_nom'] = ROOT.kViolet
colours['bkg']['diboson'] = ROOT.kOrange
colours['bkg']['stop'] = ROOT.kGreen
colours['sig']['sig'] = ROOT.kRed
colours['dat']['dat'] = ROOT.kBlack
colours['eft']['eft'] = ROOT.kTeal
colours['bkg']['Wjets_madgraph_alt'] = ROOT.kBlue + 1
colours['bkg']['Zjets_madgraph_alt'] = ROOT.kViolet + 1
colours['bkg']['diboson_powpy_alt'] = ROOT.kOrange + 1

alts = []
for channel in samples['bkg']:
  if 'madgraph_alt' in channel:
    alts = ['madgraph']
  if 'powpy_alt' in channel:
    alts += ['powpy']
for channel in samples['bkg']:
  if 'ttbar' in channel:
    colours['bkg'][channel] = ROOT.kGreen + 2
    if channel == 'ttbar_nom' in channel: colours['bkg'][channel] = ROOT.kGreen + 1
    if 'alt' in channel:
      alts.append(channel.replace('ttbar_', '').replace('_alt', ''))

colours['fit'] = ROOT.kRed
colours['line'] = ROOT.kGray

colours['bkg_nominal'] = ROOT.kBlack
colours['bkg_comparison_region'] = ROOT.kRed

cut_tex_map = {}
cut_tex_map['Trigger'] = '$E_\\text{T}^\\text{miss}~\\text{Trigger}$'
cut_tex_map['MET'] = '$E_\\text{T}^\\text{miss} > 200~\\text{GeV}$'
cut_tex_map['TrkMET'] = '$E_\\text{T}^\\text{miss,track} > 50~\\text{GeV}$'
cut_tex_map['TwoTagMerJets'] = '$\\text{N}(j^\\text{tag})\\geq2$'
cut_tex_map['AtLeastOneFatJet'] = '$\\text{N}(J)\\geq1$'
cut_tex_map['PtTagMerJet1'] = '$p_\\text{T}(j^\\text{tag}_\\text{lead})>30~\\text{GeV}$'
cut_tex_map['PtTagMerJet2'] = '$p_\\text{T}(j^\\text{tag}_\\text{sublead})>30~\\text{GeV}$'
cut_tex_map['PtFatJet200'] = '$p_\\text{T}(J)>200~\\text{GeV}$'
cut_tex_map['EtaFatJet2p0'] = '$|\\eta(J)|>2.0$'
cut_tex_map['MFatJetLow'] = '$m(J)>50~\\text{GeV}$'
cut_tex_map['DPhiMETTrkMET'] = '$|\\Delta\\Phi(E_\\text{T}^\\text{miss},E_\\text{T}^\\text{miss,track})|/\\pi<\\frac{1}{2}$'
cut_tex_map['DeltaPhiFatJetMet'] = ''
cut_tex_map['MFatJet2Var'] = ''
cut_tex_map['TwoTagResJets'] = '$\\text{N}(j^\\text{tag})\\geq2$'
cut_tex_map['TwoSigJets'] = '$\\text{N}(j^\\text{sig})\\geq2$'
cut_tex_map['PtTagResJet1'] = '$p_\\text{T}(j^\\text{tag}_\\text{lead})>30~\\text{GeV}$'
cut_tex_map['PtTagResJet2'] = '$p_\\text{T}(j^\\text{tag}_\\text{sublead})>30~\\text{GeV}$'
cut_tex_map['PtSignalJet1'] = '$p_\\text{T}(j^\\text{sig}_\\text{lead})>40~\\text{GeV}$'
cut_tex_map['PtSignalJet2'] = '$p_\\text{T}(j^\\text{sig}_\\text{sublead})>20~\\text{GeV}$'
cut_tex_map['PtSigJet1'] = '$p_\\text{T}(j^\\text{sig}_\\text{lead})>40~\\text{GeV}$'
cut_tex_map['PtSigJet2'] = '$p_\\text{T}(j^\\text{sig}_\\text{sublead})>20~\\text{GeV}$'
cut_tex_map['MVHadResLow'] = '$m(jj)^\\text{sig}>50~\\text{GeV}$'
cut_tex_map['DeltaPhiVHadResMet'] = ''
cut_tex_map['MinDPhiSmallRJets'] = '$\\text{min}\\{|\\Delta\\Phi(E_\\text{T}^\\text{miss},j^\\text{smallR}_i)|\\}_i/\\pi > \\frac{1}{6}$'
cut_tex_map['MVHadRes'] = '$64<m(jj)^\\text{sig}<106~\\text{GeV}$'
cut_tex_map['NotMVHadRes'] = '$\\text{not }64<m(jj)^\\text{sig}<106~\\text{GeV}$'
cut_tex_map['MinDPhiDijet'] = '$|\\Delta\\Phi(E_\\text{T}^\\text{miss},jj)|/\\pi < \\frac{1}{9}$'
cut_tex_map['MinDPhiFatJet'] = '$|\\Delta\\Phi(E_\\text{T}^\\text{miss},J)|/\\pi < \\frac{1}{9}$'
cut_tex_map['BTag'] = '$\\text{N}(j^b)=0$'
cut_tex_map['MTagResJets400'] = '$m(jj)^\\text{tag}>400\\text{ GeV}$'
cut_tex_map['MTagMerJets400'] = '$m(jj)^\\text{tag}>400\\text{ GeV}$'
cut_tex_map['MjjTag'] = '$m(jj)^\\text{tag}\\text{ GeV}$'
cut_tex_map['TaggerFatJet3VarM'] = '$m(J)\\text{ GeV}$'
cut_tex_map['TaggerFatJet2VarM'] = '$m(J)\\text{ GeV}$'
cut_tex_map['TaggerFatJet3VarNot2VarM'] = '$m(J)\\text{ GeV}$'
cut_tex_map['TaggerFatJet3VarD2'] = '$D2(J)$'
cut_tex_map['TaggerFatJet2VarD2'] = '$D2(J)$'
cut_tex_map['TaggerFatJet3VarNot2VarD2'] = '$D2(J)$'
cut_tex_map['TaggerFatJet3VarNtrk'] = '$\\text{Ntrk}(J)$'
cut_tex_map['TaggerFatJet2VarNtrk'] = '$\\text{Ntrk}(J)$'
cut_tex_map['TaggerFatJet3VarNot2VarNtrk'] = '$\\text{Ntrk}(J)$'
cut_tex_map['TaggerFatJet3VarPt'] = '$p_\\text{T}(J)\\text{ GeV}$'
cut_tex_map['TaggerFatJet2VarPt'] = '$p_\\text{T}(J)\\text{ GeV}$'
cut_tex_map['TaggerFatJet3VarNot2VarPt'] = '$p_\\text{T}(J)\\text{ GeV}$'
cut_tex_map['D2FatJetHP'] = '$\\text{tagger }^{WP50} D_{2}$'
cut_tex_map['D2FatJetLP'] = '$\\text{tagger }^{WP80} D_{2}$'
cut_tex_map['NotMassFatJetHP'] = '$\\text{fail tagger }^{WP50} m_J$'
cut_tex_map['NotMassFatJetLP'] = '$\\text{fail tagger }^{WP80} m_J$'
cut_tex_map['TaggerFatJetHP'] = '$\\text{tagger }^{WP50}$'
cut_tex_map['TaggerFatJetLP'] = '$\\text{tagger }^{WP80}$'
cut_tex_map['passTopMassMer'] = '$m(jjj)>220\\text{ GeV}$'
cut_tex_map['passTopMassRes'] = '$m(jjj)>220\\text{ GeV}$'

can_names = []

def main():

  global samples
  global get_systematics

  out_dir = sys.argv[1]
  in_file = sys.argv[2]

  alt_samples_available = False

  if len(sys.argv) > 3:
    in_file_alt = sys.argv[3]
    alt_samples_available = True

  old_names = False

  for arg in sys.argv:
    
    if arg == 'oldnames': old_names = True

  if old_names:

    samples['sig']['sig'] = [name.replace('0Lep', '') for name in samples['sig']['sig']]
   
  print('output:', out_dir)
  print('input nominal:', in_file)
  if alt_samples_available: print('input alternative samples:', in_file_alt)
  
  in_file_root = ROOT.TFile.Open(in_file, 'READ')
  hist_keys = [key for key in in_file_root.GetListOfKeys() if 'TH' in key.GetClassName()]

  syst_dir = in_file_root.Get('Systematics')

  systs = get_syst_names(syst_dir) if syst_dir != None else []
  systs = [syst for syst in systs if ('JetTagSF' in syst) or ('SigEff' in syst)]
  systs = sorted(systs)
  print(systs)
  if syst_dir == None: get_systematics = False

  hist_keys_syst = [key for key in syst_dir.GetListOfKeys() if 'TH' in key.GetClassName()] if get_systematics else []

  cutflow_dir = in_file_root.Get('CutFlow/Nominal')
  cutflow_keys = [key for key in cutflow_dir.GetListOfKeys() if 'TH' in key.GetClassName()] if cutflow_dir != None else [] 

  hist_keys_alt = []

  if alt_samples_available:
    in_file_alt_root = ROOT.TFile.Open(in_file_alt, 'READ')
    hist_keys_alt = [key for key in in_file_alt_root.GetListOfKeys() if 'TH' in key.GetClassName()]

    cutflow_alt_dir = in_file_alt_root.Get('CutFlow/Nominal')
    cutflow_keys_alt = [key for key in cutflow_alt_dir.GetListOfKeys() if 'TH' in key.GetClassName()]

  for region_specification in regions:

    region = None

    do_comparison = False

    # join regions in lists
    if isinstance(region_specification, list): region = '_or_'.join(region_specification)

    # compare regions in tuples
    elif isinstance(region_specification, tuple):
       
      if(len(region_specification) != 2):
        
        print('ERROR: can only compare 2 regions with each other')
        exit()

      region = '_compare_'.join(region_specification)

      do_comparison = True

    # only one region
    else:

      region = region_specification

    for variable in variables:

      # cut flow blinding
      if 'cutflow' in variable[0] and 'SR' in region_specification: variable[4] = cutflow_blinding[region_specification]

      if variable[6] and 'CRVjet' in region: continue

      if variable[0].startswith('cutflow') and (isinstance(region_specification, list) or isinstance(region_specification, tuple)): continue # cannot plot cutflow for region comparisons or joint regions

      region_name = re.sub('.ptag(.pfat)*.pjet_.ptv_', '', region) # region without '0ptag1pfat0pjet_0ptv_' etc.

      if variable[0].startswith('cutflow'): region_name = region_name.replace('_Fid', '').replace('_NonFid', '')

      hists = {}

      stack_keys = ['nom', 'eft', 'alt', 'comparison', 'rewe', 'bkg_except_vjets', 'sig', 'bkg', 'bkg_comparison_region'] 

      for alt in alts:
       stack_keys.append(alt + '_alt')
       stack_keys.append(alt + '_altonly')
       stack_keys.append(alt + '_nomonly')
       stack_keys.append(alt + '_comparison')

      stacks = {}
      for key in stack_keys: stacks[key] = ROOT.THStack('_'.join(['stack', key, region, variable[0]]), ';;events')

      stacks_syst = {}
      for key in stack_keys:

        stacks_syst[key] = {}

        for syst in systs:
        
          stacks_syst[key][syst] = ROOT.THStack('_'.join(['stack', 'syst', syst, key, region, variable[0]]), ';;events')

      contours = {}

      for category in samples:
        
        if get_systematics: print(category)

        for channel in samples[category]:
          
          if get_systematics: print('', channel)

          channel_is_alt = channel.endswith('_alt')

          channel_hists = []
          channel_hists_comparison_region = []

          channel_hists_systs = {}
          channel_hists_systs_comparison_region = {}

          for syst in systs:

            channel_hists_systs[syst] = []
            channel_hists_systs_comparison_region[syst] = []

          var_name = variable[0]

          if channel == 'dat': var_name = var_name.replace('WithoutBosonTagSF', '')

          # join regions in lists
          if isinstance(region_specification, list):
            for sub_region in region_specification:

              if channel_is_alt:
                channel_hists.extend(flatten_list([[key for key in hist_keys_alt if key.GetName() == '_'.join([sample, sub_region, var_name])] for sample in samples[category][channel]]))

              else:
                channel_hists.extend(flatten_list([[key for key in hist_keys if key.GetName() == '_'.join([sample, sub_region, var_name])] for sample in samples[category][channel]]))

                for syst in systs:

                  channel_hists_systs[syst].extend(flatten_list([[key for key in hist_keys_syst if key.GetName() == '_'.join([sample, sub_region, var_name, 'Sys' + syst])] for sample in samples[category][channel]]))

          # compare regions in tuples
          elif isinstance(region_specification, tuple):

              nominal_region = region_specification[0]
              comparison_region = region_specification[1]

              if channel_is_alt:
                channel_hists.extend(flatten_list([[key for key in hist_keys_alt if key.GetName() == '_'.join([sample, nominal_region, var_name])] for sample in samples[category][channel]]))
                channel_hists_comparison_region.extend(flatten_list([[key for key in hist_keys_alt if key.GetName() == '_'.join([sample, comparison_region, var_name])] for sample in samples[category][channel]]))

              else:
                channel_hists.extend(flatten_list([[key for key in hist_keys if key.GetName() == '_'.join([sample, nominal_region, var_name])] for sample in samples[category][channel]]))
                channel_hists_comparison_region.extend(flatten_list([[key for key in hist_keys if key.GetName() == '_'.join([sample, comparison_region, var_name])] for sample in samples[category][channel]]))

              for syst in systs:

                channel_hists_systs[syst].extend(flatten_list([[key for key in hist_keys_syst if key.GetName() == '_'.join([sample, nominal_region, var_name, 'Sys' + syst])] for sample in samples[category][channel]]))
                channel_hists_systs_comparison_region[syst].extend(flatten_list([[key for key in hist_keys_syst if key.GetName() == '_'.join([sample, comparison_region, var_name, 'Sys' + syst])] for sample in samples[category][channel]]))

          # only one region
          else:

            if var_name.startswith('cutflow'):

              if channel_is_alt:
                channel_hists = flatten_list([[key for key in cutflow_keys_alt if key.GetName() == '_'.join([sample, ('SeqCutsRaw' if 'raw' in var_name else 'SeqCuts') + region_name])] for sample in samples[category][channel]])
              else:
                channel_hists = flatten_list([[key for key in cutflow_keys if key.GetName() == '_'.join([sample, ('SeqCutsRaw' if 'raw' in var_name else 'SeqCuts') + region_name])] for sample in samples[category][channel]])
            else:

              if channel_is_alt:
                channel_hists = flatten_list([[key for key in hist_keys_alt if key.GetName() == '_'.join([sample, region, var_name])] for sample in samples[category][channel]])

              else:
                channel_hists = flatten_list([[key for key in hist_keys if key.GetName() == '_'.join([sample, region, var_name])] for sample in samples[category][channel]])

              for syst in systs:

                channel_hists_systs[syst].extend(flatten_list([[key for key in hist_keys_syst if key.GetName() == '_'.join([sample, region, var_name, 'Sys' + syst])] for sample in samples[category][channel]]))

          if len(channel_hists) == 0: 

            print('WARNING: No histograms found for', channel, region, variable[0])
            continue

          # add hists
          hist = channel_hists[0].ReadObj()

          hist.GetXaxis().SetLabelSize(label_size) #XXX
          hist.GetYaxis().SetLabelSize(label_size)
          hist.GetXaxis().SetTitleSize(title_size)
          hist.GetYaxis().SetTitleSize(title_size)

          hist.SetName(channel)

          [hist.Add(new_hist.ReadObj()) for new_hist in channel_hists[1:]]

          hist_syst = {}

          for syst in systs:

            if len(channel_hists_systs[syst]) < 1:

              hist_syst[syst] = None

              continue

            hist_syst[syst] = channel_hists_systs[syst][0].ReadObj()

            hist_syst[syst].SetName(channel)

            [hist_syst[syst].Add(new_hist.ReadObj()) for new_hist in channel_hists_systs[syst][1:]]

          hist.SetLineColor(colours[category][channel])
          hist.SetFillColor(colours[category][channel])

          hist_comparison_region = None

          if variable[2] != None:

            if isinstance(variable[2], list): hist.Rebin2D(variable[2][0], variable[2][1])
            else: hist.Rebin(variable[2])

            for syst in systs:

              if hist_syst[syst] == None: continue

              if isinstance(variable[2], list): hist_syst[syst].Rebin2D(variable[2][0], variable[2][1])
              else: hist_syst[syst].Rebin(variable[2])
            
          # add comparison region hists
          if do_comparison:

            hist_comparison_region = channel_hists_comparison_region[0].ReadObj()

            hist_comparison_region.SetName(channel)

            [hist_comparison_region.Add(new_hist.ReadObj()) for new_hist in channel_hists_comparison_region[1:]]

            hist_comparison_region.SetLineColor(colours[category][channel])
            hist_comparison_region.SetFillColor(colours[category][channel])

            if variable[2] != None:
              if isinstance(variable[2], list): hist_comparison_region.Rebin2D(variable[2][0], variable[2][1])
              else: hist_comparison_region.Rebin(variable[2])

          # combine hists into stacks and special hists for plotting
          if category != 'dat':

            hist.SetFillColor(colours[category][channel])

            if not 'alt' in channel: stacks['eft'].Add(hist)
            if (not 'alt' in channel) and (not category == 'eft'): stacks['nom'].Add(hist)
            if ('nom' in channel) and ('Wjets' in channel or 'Zjets' in channel): stacks['rewe'].Add(hist) 
            if (not 'alt' in channel) and (not 'Wjets' in channel)  and (not 'Zjets' in channel) and (category == 'bkg'): stacks['bkg_except_vjets'].Add(hist) 
            if (not 'alt' in channel) and (category == 'bkg'): stacks['bkg'].Add(hist)
            if category == 'sig': stacks['sig'].Add(hist)
            if do_comparison and (not 'alt' in channel) and (category == 'bkg'): stacks['bkg_comparison_region'].Add(hist_comparison_region)
            for alt in alts:
              if (not 'eft' in channel) and ((not 'alt' in channel) and (not any(nom in channel for nom in  find_noms_for_alt(alt)))): stacks[alt + '_comparison'].Add(hist)
              if (not 'eft' in channel) and (re.match('[^_;]*_' + alt + '_alt', channel) or ((not 'alt' in channel) and (not any(nom in channel for nom in  find_noms_for_alt(alt))))): stacks[alt + '_alt'].Add(hist) 
              if (not 'eft' in channel) and ((not 'alt' in channel) and (any(nom in channel for nom in find_noms_for_alt(alt)))): stacks[alt + '_nomonly'].Add(hist)
              if (not 'eft' in channel) and ((alt + '_alt' in channel)): stacks[alt + '_altonly'].Add(hist)

            for syst in systs:

              if hist_syst[syst] == None: continue 

              if (not 'alt' in channel) and (not category == 'eft'): stacks_syst['nom'][syst].Add(hist_syst[syst])

          if category == 'dat' or category == 'sig' or category == 'eft':
            
            hists[category] = hist.Clone()

            hists[category].SetLineColor(colours[category][channel])
            hists[category].SetFillColor(0)

            if category == 'dat':

              hists[category].SetMarkerStyle(8)
              hists[category].SetMarkerColor(colours['dat']['dat'])
              hists[category].SetName('data')

              # blinding
              if 'SRVBS' in region_name or do_individual_cut_flow_hists:

                for b in range(hists[category].GetNbinsX() + 1):

                  if (variable[4] != None and hists[category].GetBinCenter(b) >= variable[4]) \
                  and (variable[5] != None and  hists[category].GetBinCenter(b) <= variable[5]):
                    
                    hists[category].SetBinContent(b, -100.)

            if category == 'sig' or category == 'eft':

              contours[category + '_scaled'] = hists[category].Clone()
              contours[category + '_scaled'].Scale(scale[category])
              contours[category + '_scaled'].SetName(('signal' if category == 'sig' else 'aQGC') + ' x%.0f' % scale[category])

      # data - bkg for reweighting
      if not variable[8]: # no_data
        hists['dat_minus_bkg_except_vjets'] = hists['dat'].Clone()
        hists['dat_minus_bkg_except_vjets'].Add(stack_envelope(stacks['bkg_except_vjets']), -1.) 
        hists['dat_minus_bkg_except_vjets'].SetName('data - other')

      # bkg envelope for region comparison
      if do_comparison:

        for string in ['bkg', 'bkg_comparison_region']:

          hists['envelope_' + string] = stack_envelope(stacks[string])
          hists['envelope_' + string].SetTitle(';;events scaled to area of 1')
          hists['envelope_' + string].SetFillStyle(0)
          hists['envelope_' + string].SetMarkerStyle(0)
          hists['envelope_' + string].Scale(1. / hists['envelope_' + string].Integral())

        hists['envelope_bkg'].SetLineColor(colours['bkg_nominal'])
        hists['envelope_bkg'].SetName('region 1')
        hists['envelope_bkg_comparison_region'].SetLineColor(colours['bkg_comparison_region'])
        hists['envelope_bkg_comparison_region'].SetName('region 2')

      # ratio plots
      hists_ratio = {}
      ratio_colours = {}
      ratio_keys = ['nom', 'eft', 'rewe', 'bkg', 'soverb_nom', 'soverb_eft']
      ratio_keys.extend([alt + '_alt' for alt in alts])
      ratio_keys.extend(['soverb_' + alt + '_alt' for alt in alts])
      ratio_keys.extend(['altovernom_' + alt + '_alt' for alt in alts])

      if do_comparison: ratio_keys.append('bkg_comparison_region')

      ratio_colours['nom'] = colours['dat']['dat']
      ratio_colours['eft'] = colours['eft']['eft']
      ratio_colours['rewe'] = colours['dat']['dat']
      ratio_colours['bkg_comparison_region'] = colours['dat']['dat']
      ratio_colours['bkg'] = colours['dat']['dat']
      ratio_colours['soverb_nom'] = colours['sig']['sig']
      ratio_colours['soverb_eft'] = colours['eft']['eft']
      for alt in alts: ratio_colours[alt + '_alt'] = colours['dat']['dat']
      for alt in alts: ratio_colours['soverb_' + alt + '_alt'] = colours['dat']['dat']
      for alt in alts: ratio_colours['altovernom_' + alt + '_alt'] = colours['dat']['dat']

      if not 'sig' in hists: # no sig found -> variable probably not available
        continue

      if not variable[8]: #no_data

        for key in ratio_keys:

          hists_ratio[key] = None
          if key == 'rewe': hists_ratio[key] = hists['dat_minus_bkg_except_vjets'].Clone()
          elif key == 'bkg_comparison_region': hists_ratio[key] = hists['envelope_bkg'].Clone()
          elif 'soverb' in key: hists_ratio[key] = hists['sig'].Clone()
          elif 'altovernom' in key and alt_samples_available: hists_ratio[key] = stack_envelope(stacks[key.replace('altovernom_', '').replace('_alt', '_altonly')]).Clone()
          else: hists_ratio[key] = hists['dat'].Clone()

          hists_ratio[key].SetTitle('')
          if 'soverb' in key: hists_ratio[key].GetYaxis().SetTitle('sig/bkg')
          elif 'altovernom' in key: hists_ratio[key].GetYaxis().SetTitle('alt/nom')
          else: hists_ratio[key].GetYaxis().SetTitle('data/MC')
          hists_ratio[key].GetXaxis().SetTitle(variable[1])

          text_scale_factor = 3
          hists_ratio[key].GetXaxis().SetTitleSize(hists['dat'].GetXaxis().GetTitleSize() * text_scale_factor)
          hists_ratio[key].GetXaxis().SetLabelSize(hists['dat'].GetXaxis().GetLabelSize() * text_scale_factor)
          hists_ratio[key].GetYaxis().SetTitleSize(hists['dat'].GetYaxis().GetTitleSize() * text_scale_factor)
          hists_ratio[key].GetYaxis().SetLabelSize(hists['dat'].GetYaxis().GetLabelSize() * text_scale_factor)
          hists_ratio[key].GetYaxis().SetNdivisions(4)

          hists_ratio[key].SetFillColor(0)
          hists_ratio[key].SetMarkerStyle(8)
          hists_ratio[key].SetLineColor(ratio_colours[key])
          hists_ratio[key].SetMarkerColor(ratio_colours[key])

          if key == 'bkg_comparison_region': hists_ratio[key].Divide(hists['envelope_bkg_comparison_region'])
          elif key == 'soverb_nom': hists_ratio[key].Divide(stack_envelope(stacks['bkg']))
          elif 'altovernom' in key:  hists_ratio[key].Divide(stack_envelope(stacks[key.replace('altovernom_', '').replace('_alt', '_nomonly')]))
          else: hists_ratio[key].Divide(stack_envelope(stacks[key.replace('soverb_', '')]))

          # ratio plots blinding
          if ('SRVBS' in region_name or do_individual_cut_flow_hists) and (not 'soverb' in key) and (not 'altovernom' in key):
            for b in range(hists_ratio[key].GetNbinsX() + 1):

              if (variable[4] != None and hists_ratio[key].GetBinCenter(b) >= variable[4]) \
              and (variable[5] != None and  hists_ratio[key].GetBinCenter(b) <= variable[5]):
              
                hists_ratio[key].SetBinContent(b, -100.)

        if do_comparison: hists_ratio['bkg_comparison_region'].GetYaxis().SetTitle('region 1 / region 2')

        # comparison plots
        for key in alts + ['nom']:

          if key != 'nom': key += '_alt'

          colour = ROOT.kBlack

          if key != 'nom':

            nom = find_noms_for_alt(key)[0]

            colour = colours['bkg'][nom + '_' + key]

          contours['envelope_' + key] = stack_envelope(stacks[key])
          contours['envelope_' + key].SetFillColor(0)
          contours['envelope_' + key].SetLineColor(colour)
          contours['envelope_' + key].SetName('nominal' if key == 'nom' else manipulate_legend_name(key))

          hists_ratio['comparison_' + key] = hists_ratio[key].Clone()
          hists_ratio['comparison_' + key].SetLineColor(colour)
          hists_ratio['comparison_' + key].SetMarkerColor(colour)

      if do_individual_cut_flow_hists:

        variable_name = variable[0].replace('_fail', '').replace('_pass', '')
        pass_or_fail = 'pass' if '_pass' in variable[0] else 'fail'

        individual_cut_flow_plots[variable_name]['stack_' + pass_or_fail] = stacks['nom'].Clone()
        individual_cut_flow_plots[variable_name]['dat_' + pass_or_fail] = hists['dat'].Clone()
        individual_cut_flow_plots[variable_name]['sig_' + pass_or_fail] = contours['sig_scaled'].Clone()
        individual_cut_flow_plots[variable_name]['ratio_' + pass_or_fail] = hists_ratio['nom'].Clone()
        individual_cut_flow_plots[variable_name]['soverb_' + pass_or_fail] = hists_ratio['soverb_nom'].Clone()
        individual_cut_flow_plots[variable_name]['variable_' + pass_or_fail] = variable.copy()

      else:
        if not variable[8]: #no_data
          
          if 'VBSFidType' in variable[0]:

            make_plot('sig', region_name, variable, stacks['sig'], [], [], None, [], cutflow_hists = [])

          else:
        
            # systematic plots
            if get_systematics:

              syst_ratios = []

              col = 1

              for syst in systs:

                new_ratio = hists['dat'].Clone()

                new_ratio.Divide(stack_envelope(stacks_syst['nom'][syst]))
                
                if '_1down' in syst: col = col + 1
                if col == 7: col = 11
                new_ratio.SetName(syst)
                new_ratio.SetLineColor(col)
                new_ratio.SetMarkerColor(col)
                if '_1up' in syst: new_ratio.SetMarkerStyle(22)
                if '_1down' in syst: new_ratio.SetMarkerStyle(23)

                new_ratio.GetYaxis().SetTitle('data/MC')
                new_ratio.GetXaxis().SetTitle(variable[1])

                syst_ratios.append(new_ratio)

              make_plot('syst', region_name, variable, None, syst_ratios, [], None, [])

            # nominal plots
            make_plot('nom', region_name, variable, stacks['nom'], [contours['sig_scaled']], [hists_ratio['nom']], hists['dat'], [], cutflow_hists = [hists['dat'], stack_envelope(stacks['nom']), stack_envelope(stacks['bkg'])])

            # nominal but with s/b ratio
            make_plot('soverb', region_name, variable, stacks['nom'], [contours['sig_scaled']], [hists_ratio['nom']], hists['dat'], [hists_ratio['soverb_nom']], cutflow_hists = [hists['dat'], stack_envelope(stacks['nom']), stack_envelope(stacks['bkg'])])

            # nominal plots but with eft
            if 'eft_scaled' in contours: make_plot('eft', region_name, variable, stacks['eft'], [contours['sig_scaled'], contours['eft_scaled']], [hists_ratio['nom'], hists_ratio['eft']], hists['dat'], [], cutflow_hists = [hists['dat'], stack_envelope(stacks['nom']), stack_envelope(stacks['bkg'])])

            for alt in alts:
              # plots with alternative samples
              if alt_samples_available: make_plot('alt_' + alt, region_name, variable, stacks[alt + '_alt'], [contours['sig_scaled']], [hists_ratio[alt + '_alt']], hists['dat'], [])

              # plots comparing nominal and alternative samples
              if alt_samples_available: make_plot('comparison_' + alt, region_name, variable, stacks[alt + '_comparison'], [contours['envelope_nom'], contours['envelope_' + alt + '_alt']], [hists_ratio['comparison_nom'], hists_ratio['comparison_' + alt + '_alt']], hists['dat'], [])

              # plots comparing nominal and alternative samples but with s/b ratio
              if alt_samples_available: make_plot('comparisonsoverb_' + alt, region_name, variable, stacks[alt + '_comparison'], [contours['envelope_nom'], contours['envelope_' + alt + '_alt']], [hists_ratio['comparison_nom'], hists_ratio['comparison_' + alt + '_alt']], hists['dat'], [hists_ratio['soverb_nom'], hists_ratio['soverb_' + alt + '_alt']])

              # plots comparing nominal and alternative samples but with alt/nom ratio
              if alt_samples_available: make_plot('comparisonaltovernom_' + alt, region_name, variable, stacks[alt + '_comparison'], [contours['envelope_nom'], contours['envelope_' + alt + '_alt']], [hists_ratio['comparison_nom'], hists_ratio['comparison_' + alt + '_alt']], hists['dat'], [hists_ratio['altovernom_' + alt + '_alt']])

            # plots to derive reweighting factors from
            if variable[7]: make_plot('rewe', region_name, variable, stacks['rewe'], [], [hists_ratio['rewe']], hists['dat_minus_bkg_except_vjets'], [], do_ratio_fit = True)

            # bkg comparison between two regions
            if do_comparison: make_plot('regioncomparison', region_name, variable, None, [hists['envelope_bkg'], hists['envelope_bkg_comparison_region']], [hists_ratio['bkg_comparison_region']], None, [])

        else: #no_data
          
          if not (variable[0].startswith('NQuark') or variable[0].startswith('NGluon')):

            # nominal plots but without data
            make_plot('nom', region_name, variable, stacks['nom'], [contours['sig_scaled']], [], None, [])

        # 2d hists for q/g fractions
        if variable[0].startswith('NQuark') or variable[0].startswith('NGluon'):

          # combined
          for key in alts + ['nom']:

            if key != 'nom': key += '_alt'

            hist_th2 = stack_envelope(stacks[key])

            # make_plot('_'.join(['2d', 'alt', key]), region_name, variable, None, [hist_th2], [], None, [], th2 = True)

            key_name = region_name + '_' + variable[0]

            qg_fractions[key_name] = hist_th2.Clone()

          # by sample
          qg_fractions_by_sample[key_name] = {}

          for key in alts + ['nom']:

            if key != 'nom': key += '_alt'

            for hst in stacks[key].GetHists():

              sample_name = manipulate_legend_name(hst.GetName())

              qg_fractions_by_sample[key_name][sample_name] = hst.Clone()

              # make_plot('_'.join(['2d', sample_name, 'alt', key]), region_name, variable, None, [hst.Clone()], [], None, [], th2 = True)

        # calculate roc curves
        for roc_curve in roc_curves:
         
          if region == roc_curve[0] and variable[0] in roc_curve[1]:
           
            roc = get_roc_hist(hists['sig'], stack_envelope(stacks['bkg']), '_'.join([region_name, variable[0]]))

            make_plot('roc', region_name, roc_var, None, [roc], [], None, [])

        # save histograms for boson tagger SF comparison
        for var_name in boson_tagger_sf:
          
          if var_name == variable[0] or var_name + 'WithoutBosonTagSF' == variable[0]:

            if not region_name in boson_tagger_sf[var_name]: boson_tagger_sf[var_name][region_name] = {}
            boson_tagger_sf[var_name][region_name]['variable'] = variable

          hist = stack_envelope(stacks['bkg'])
          hist.SetFillStyle(0)

          hist_ratio = hists_ratio['bkg'].Clone()

          if var_name == variable[0]:

             hist.SetName('bkg')
             hist.SetLineColor(ROOT.kBlack)

             hist_ratio.SetLineColor(ROOT.kBlack)
             hist_ratio.SetMarkerColor(ROOT.kBlack)

             boson_tagger_sf[var_name][region_name]['noSFbkg'] = hist
             boson_tagger_sf[var_name][region_name]['noSFbkg_ratio'] = hist_ratio

             boson_tagger_sf[var_name][region_name]['dat'] = hists['dat'].Clone()
             boson_tagger_sf[var_name][region_name]['dat'].SetTitle(';;events')

          print('testA', var_name, variable[0])

          if var_name + 'WithoutBosonTagSF' == variable[0]:

             print('testB')

             hist.SetName('bkg + SF')
             hist.SetLineColor(ROOT.kRed)

             hist_ratio.SetLineColor(ROOT.kRed)
             hist_ratio.SetMarkerColor(ROOT.kRed)

             boson_tagger_sf[var_name][region_name]['withSFbkg'] = hist
             boson_tagger_sf[var_name][region_name]['withSFbkg_ratio'] = hist_ratio

  # q/g fraction plots
  for suffix in ['EtaPt', 'EtaNj', 'PtNj']:

    qg_fracs = {}
    qg_fracs_avg = {}
    profiles_for_region_comparison = {}

    suffix_available = False

    for region_name in qg_fractions:

      if region_name.endswith(suffix):
        
        suffix_available = True

        break

    if not suffix_available: continue

    for region_name in qg_fractions:

      if not 'NQuark' + suffix in region_name: continue

      region_name = region_name.replace('_NQuark' + suffix, '')

      profiles_for_region_comparison[region_name] = {}

      qg_fracs[region_name] = {}

      #if isinstance(region, list) or isinstance(region, tuple): continue

      #region_name = re.sub('.ptag(.pfat)*.pjet_.ptv_', '', region) # region without '0ptag1pfat0pjet_0ptv_' etc.
      
      if region_name + '_' + 'NQuark' + suffix in qg_fractions and region_name + '_' + 'NGluon' + suffix in qg_fractions:

        # by sample

        hists_q = qg_fractions_by_sample[region_name + '_' + 'NQuark' + suffix]
        hists_g = qg_fractions_by_sample[region_name + '_' + 'NGluon' + suffix]

        # 2d
        for sample_name in hists_q:

          hist_g = hists_g[sample_name].Clone()
          hist_denominator = hists_q[sample_name].Clone()
          hist_denominator.Add(hists_g[sample_name])

          hist_g.SetName(hist_g.GetName().replace(' ', '_').replace('+', ''))
          hist_denominator.SetName(hist_denominator.GetName().replace(' ', '_').replace('+', ''))

          hist_g.SetName(hist_g.GetName() + '_g')
          hist_denominator.SetName(hist_denominator.GetName() + '_denominator')

          [rebinning_x, rebinning_y, merging_x, merging_y] = rebinning[suffix][sample_name]

          hist_g.Rebin2D(rebinning_x, rebinning_y)
          if not merging_x == None:
            for j in range(len(merging_x)):
              for i in range(merging_x[j]): hist_g = merge_bins_down(hist_g, hist_g.GetNbinsX() - 1 - j, axis=0)
          if not merging_y == None:
            for j in range(len(merging_y)):
              for i in range(merging_y[j]): hist_g = merge_bins_down(hist_g, hist_g.GetNbinsY() - 1 - j, axis=1)

          hist_denominator.Rebin2D(rebinning_x, rebinning_y)
          if not merging_x == None:
            for j in range(len(merging_x)):
              for i in range(merging_x[j]): hist_denominator = merge_bins_down(hist_denominator, hist_denominator.GetNbinsX() - 1 - j, axis=0)
          if not merging_y == None:
            for j in range(len(merging_y)):
              for i in range(merging_y[j]): hist_denominator = merge_bins_down(hist_denominator, hist_denominator.GetNbinsY() - 1 - j, axis=1)

          hist_fraction = hist_g.Clone()
          hist_fraction.Divide(hist_denominator)
#          colour_levels = [0., .1, .2, .3, .4, .5, .6, .7, .8, .9, 1.]
#          hist_fraction.SetContour(len(colour_levels), array('d', colour_levels));

          hist_fraction.SetMinimum(0.)
          hist_fraction.SetMaximum(1.)

          hist_fraction_stats = get_stats_hist(hist_fraction)

          hist_fraction.GetZaxis().SetTitleOffset(1.2)
          hist_fraction_stats.GetZaxis().SetTitleOffset(1.2)
          hist_fraction.GetYaxis().SetTitleOffset(1.5)
          hist_fraction_stats.GetYaxis().SetTitleOffset(1.5)

          qg_fracs[region_name][sample_name] = hist_fraction.Clone()

          hist_fraction.Scale(100.)

          hist_fraction.SetMinimum(0.)
          hist_fraction.SetMaximum(80.)

          make_plot('qg_' + sample_name + '_' + suffix, region_name, qgfrac_var[suffix], None, [hist_fraction], [], None, [], th2 = True)
          make_plot('qg_stats_' + sample_name + '_' + suffix, region_name, qgfrac_stats_var[suffix], None, [hist_fraction_stats], [], None, [], th2 = True)

        # profile
        for axis in ['x', 'y']:

          profiles_for_region_comparison[region_name][axis] = {}

          profiles = {}

          for sample_name in hists_q:

            hist_q = hists_q[sample_name].ProjectionX().Clone() if axis == 'x' else hists_q[sample_name].ProjectionY().Clone()
            hist_g = hists_g[sample_name].ProjectionX().Clone() if axis == 'x' else hists_g[sample_name].ProjectionY().Clone()

            hist_q.SetFillStyle(0)
            hist_g.SetFillStyle(0)

            hist_denominator = hist_q.Clone()
            hist_denominator.Add(hist_g.Clone())

            hist_fraction = hist_g.Clone()
            hist_fraction.Divide(hist_denominator)

            hist_fraction.SetName(sample_name)

            if suffix == 'EtaPt': hist_fraction.SetTitle((';|#eta|' if axis == 'x' else ';p_{T} [GeV]') + ';n_{g}/(n_{q}+n_{g})') 
            if suffix == 'EtaNj': hist_fraction.SetTitle((';|#eta|' if axis == 'x' else ';N(j)') + ';n_{g}/(n_{q}+n_{g})') 
            if suffix == 'PtNj': hist_fraction.SetTitle((';p_{T} [GeV]' if axis == 'x' else ';N(j)') + ';n_{g}/(n_{q}+n_{g})') 

            hist_fraction.SetMaximum(qg_fractions_z_max)

            if axis == 'y' and suffix == 'EtaPt': hist_fraction.GetXaxis().SetRange(1, hist_fraction.GetNbinsX() // 2)
            if axis == 'y' and suffix == 'EtaNj' or suffix == 'PtNj': hist_fraction.GetXaxis().SetRange(3, hist_fraction.GetNbinsX())

            profiles[sample_name] = hist_fraction.Clone()


          make_plot('_'.join([axis, 'profile', 'nom', suffix]), region_name, qgfrac_var[suffix], None, [profiles[profile_name] for profile_name in profiles if not any(alt in profile_name for alt in alts)], [], None, [], th2 = False)

          for sample_name in ['ttbar', 'diboson', 'W+jet', 'Z+jet', 'signal', 'stop']:

            profiles_this = [profiles[profile_name] for profile_name in profiles if sample_name in profile_name]

            alt_is_first = False

            for profile in profiles_this:
              
              if ' ' in profile.GetName(): #ouch! (but works)
                profile.SetName('alternative')
                profile.SetLineColor(ROOT.kRed)
                alt_is_first = True

              else:
                profile.SetName('nominal')
                profile.SetLineColor(ROOT.kBlack)
                if alt_is_first: profiles_this.reverse()

            profiles_for_region_comparison[region_name][axis][sample_name] = profiles_this

            make_plot('_'.join([axis, 'profile', sample_name.replace('+', ''), suffix]), region_name, qgfrac_var[suffix], None, profiles_this, [], None, [], th2 = False, wide_legend = True)
    
    for axis in ['x', 'y']:

      for sample_name in ['ttbar', 'diboson', 'W+jet', 'Z+jet', 'signal', 'stop']:

        profiles_this = []

        ctr = 0

        for region_name in profiles_for_region_comparison:
         
          is_combined_region = False

          if region_name == 'SRVBS_HP_or_SRVBS_LP_or_CRVjet_Mer_or_SRVBS_Fid_or_CRVjet_Fid': is_combined_region = True # hmmm...
          elif '_or_' in region_name: continue
          
          profile_list = profiles_for_region_comparison[region_name][axis][sample_name]

          for profile_this in profile_list:

            if profile_this.GetName() == 'alternative': continue

            profile_this.SetName(region_name.replace('Fid', 'Res'))
            if is_combined_region: profile_this.SetName('all combined')
            profile_this.SetLineColor(ROOT.kBlack + ctr)

            ctr += 1

            if ctr == 5: ctr += 1 # don't want yellow
          
            profiles_this.append(profile_this)

        if len(profiles_this) == 0: continue

        make_plot('_'.join([axis, 'profile', sample_name.replace('+', ''), suffix]), 'region_comparison', qgfrac_var[suffix], None, profiles_this, [], None, [], th2 = False, wide_legend = True)

    # comparison plots of q/g fractions in different regions

    region_names = list(qg_fracs.keys())

    hists_diff_region = {}
    hists_diff_region_avg = {}

    region_name_combined = 'SRVBS_HP_or_SRVBS_LP_or_CRVjet_Mer_or_SRVBS_Fid_or_CRVjet_Fid'
    region_names_for_comparison = ['SRVBS_HP_or_SRVBS_LP', 'SRVBS_Fid', 'CRVjet_Mer', 'CRVjet_Fid']

    if len(region_names) > 0:

      for sample_name in qg_fracs[region_name_combined]:

        hist_nominal = qg_fracs[region_name_combined][sample_name]

        hist_max_diff = None

        hist_avg = None

        for region_name in region_names_for_comparison:

          hist_comparison = qg_fracs[region_name][sample_name]

          hist_region = qg_fracs[region_name][sample_name]

          hist_diff = make_diff_plot(hist_nominal, hist_comparison,  sample_name + '_' + suffix, region_names[0] + '_vs_' + region_name, suffix)

          if hist_max_diff == None:

            hist_max_diff = hist_diff.Clone()
            hist_avg = hist_region.Clone()

          else:

            for x in range(hist_max_diff.GetNbinsX() + 1):
              for y in range(hist_max_diff.GetNbinsY() + 1):
                
                bin_c_max_diff = hist_max_diff.GetBinContent(x, y)
                bin_c_diff = hist_diff.GetBinContent(x, y)
                bin_c_nom = hist_region.GetBinContent(x, y)
                bin_c_avg = hist_avg.GetBinContent(x, y)

                hist_avg.SetBinContent(x, y, bin_c_nom + bin_c_avg)

                if bin_c_diff > bin_c_max_diff:

                  hist_max_diff.SetBinContent(x, y, bin_c_diff)


        for x in range(hist_avg.GetNbinsX() + 1):
          for y in range(hist_avg.GetNbinsY() + 1):

            bin_c_avg = hist_avg.GetBinContent(x, y)
            hist_avg.SetBinContent(x, y, bin_c_avg / len(region_names_for_comparison))

        hist_std = hist_avg.Clone()

        for r, region_name in enumerate(region_names_for_comparison):

          hist_region = qg_fracs[region_name][sample_name]

          for x in range(hist_std.GetNbinsX() + 1):
            for y in range(hist_std.GetNbinsY() + 1):

              if r == 0: hist_std.SetBinContent(x, y, 0.)

              bin_c_avg = hist_avg.GetBinContent(x, y)
              bin_c_nom = hist_region.GetBinContent(x, y)
              bin_c_std = hist_std.GetBinContent(x, y)

              var = (bin_c_avg - bin_c_nom)**2.

              hist_std.SetBinContent(x, y, bin_c_std + var)

        for x in range(hist_std.GetNbinsX() + 1):
          for y in range(hist_std.GetNbinsY() + 1):

              bin_c_std = hist_std.GetBinContent(x, y)
              hist_std.SetBinContent(x, y, math.sqrt(bin_c_std / len(region_names_for_comparison)))

        qg_fracs_avg[sample_name] = hist_avg.Clone()
     
        hist_std.Scale(100.)
        hist_avg.Scale(100.)

        hist_avg.SetMaximum(80.)
        hist_max_diff.SetMaximum(19.)
        hist_std.SetMaximum(19.)

        hists_diff_region[sample_name] = hist_max_diff
        hists_diff_region_avg[sample_name] = hist_std

        make_plot('qg_diff_' + sample_name + '_' + suffix, 'max_diff_among_regions', qgfrac_diff_var[suffix], None, [hist_max_diff], [], None, [], th2 = True)
        make_plot('qg_avg_' + sample_name + '_' + suffix, 'average_among_regions', qgfrac_var[suffix], None, [hist_avg], [], None, [], th2 = True)
        make_plot('qg_avg_' + sample_name + '_' + suffix, 'std_dev_among_regions', qgfrac_diff_var[suffix], None, [hist_std], [], None, [], th2 = True)

    # comparison plots of q/g fractions with alternative samples

    qg_fracs_for_file = {}

    for sample_names in [['ttbar', 'ttbar PowhegHerwig'], ['diboson', 'diboson powpy'], ['W+jets', 'W+jets madgraph'], ['Z+jets', 'Z+jets madgraph']]:

      if len(region_names) < 1: continue

      if not sample_names[0] in qg_fracs[region_names[0]]: continue
      if not sample_names[1] in qg_fracs[region_names[0]]: continue

      hist_nominal = qg_fracs[region_names[0]][sample_names[0]]
      hist_comparison = qg_fracs[region_names[0]][sample_names[1]]

      hist_nominal_avg = qg_fracs_avg[sample_names[0]]
      hist_comparison_avg = qg_fracs_avg[sample_names[1]]

      hist_diff_gen = make_diff_plot(hist_nominal, hist_comparison, sample_names[0] + '_vs_' + sample_names[1] + '_' + suffix, region_names[0], suffix)

      hist_diff_total = combine_uncertainties(hist_diff_gen, hists_diff_region[sample_names[0]])

      hist_diff_total.SetMaximum(19.)

      make_plot('qg_diff_' + sample_names[0] + '_' + suffix, 'total_diff', qgfrac_diff_var[suffix], None, [hist_diff_total], [], None, [], th2 = True)

      hist_diff_gen_avg = make_diff_plot(hist_nominal_avg, hist_comparison_avg, sample_names[0] + '_vs_' + sample_names[1] + '_' + suffix, 'avg_among_regions', suffix)

      hist_diff_total_avg = combine_uncertainties(hist_diff_gen_avg, hists_diff_region_avg[sample_names[0]])

      hist_diff_total_avg.SetMaximum(19.)

      make_plot('qg_diff_' + sample_names[0] + '_' + suffix, 'total_diff_avg', qgfrac_diff_var[suffix], None, [hist_diff_total_avg], [], None, [], th2 = True)

      qg_fracs_for_file[sample_names[0]] = (hist_nominal.Clone(), hist_diff_total.Clone())

    for sample_name in ['signal', 'stop']: # no alternative gens availabe for these samples

      if not sample_name in hists_diff_region: continue

      make_plot('qg_diff_' + sample_name + '_' + suffix, 'total_diff', qgfrac_diff_var[suffix], None, [hists_diff_region[sample_name]], [], None, [], th2 = True)

      qg_fracs_for_file[sample_name] = (qg_fracs[region_names[0]][sample_name], hists_diff_region[sample_name])

      make_plot('qg_diff_' + sample_name + '_' + suffix, 'total_diff_avg', qgfrac_diff_var[suffix], None, [hists_diff_region_avg[sample_name]], [], None, [], th2 = True)

    # write q/g fractions to file to be used by the systematics tool

    for sample_name in qg_fracs_for_file:

      if suffix != 'EtaPt': continue

      hist_frac = qg_fracs_for_file[sample_name][0].Clone()
      hist_uncertainty = qg_fracs_for_file[sample_name][1].Clone()

      hist_uncertainty.Scale(.01)

      qg_frac_file = ROOT.TFile(out_dir + '/root/qgfrac_' + sample_name.replace('+', '') + '.root', 'RECREATE')

      hist_frac = swap_axes(hist_frac)
      hist_uncertainty = swap_axes(hist_uncertainty)

      hist_frac = mirror_copy_axis(hist_frac, axis=1)
      hist_uncertainty = mirror_copy_axis(hist_uncertainty, axis=1)

      hist_frac.SetName('gluonFraction_AntiKt4EMPFlow')
      hist_uncertainty.SetName('gluonFractionError_AntiKt4EMPFlow')

      hist_frac.SetTitle('gluonFraction_AntiKt4EMPFlow')
      hist_uncertainty.SetTitle('gluonFractionError_AntiKt4EMPFlow')

      hist_frac.Write()
      hist_uncertainty.Write()

      print('BINNING:', sample_name, get_bins(hist_frac))

      qg_frac_file.Close()

  # individual cut flow plots
  if do_individual_cut_flow_hists:
    
    for variable_name in individual_cut_flow_plots:

      plot = individual_cut_flow_plots[variable_name]

      for hst in [plot[plt + '_fail'] for plt in ['sig', 'dat']] + list(plot['stack_fail'].GetHists()): hst.SetName('rejected_' + hst.GetName())
      for hst in [plot[plt + '_pass'] for plt in ['sig', 'dat']] + list(plot['stack_pass'].GetHists()): hst.SetName('accepted_' + hst.GetName())

      stack_combined = plot['stack_pass']

      for hst in plot['stack_fail']:

        hst.SetFillStyle(3004)

        stack_combined.Add(hst)

      plot['sig_fail'].SetLineStyle(2)
      plot['ratio_fail'].SetMarkerStyle(4)
      plot['soverb_fail'].SetMarkerStyle(4)
      plot['dat_fail'].SetMarkerStyle(4)

      plot['soverb_fail'].GetYaxis().SetNdivisions(4)
      plot['ratio_fail'].GetYaxis().SetNdivisions(4)

      stack_dat = ROOT.THStack(variable_name + '_stack_dat', ';;events')
      stack_dat.Add(plot['dat_pass'])
      stack_dat.Add(plot['dat_fail'])
      
      # without s/b
      make_plot('individual', 'cutflow', plot['variable_pass'], stack_combined, [plot['sig_pass'], plot['sig_fail']], [plot['ratio_pass'], plot['ratio_fail']], stack_dat, [], ratio_margin = None)
      # with s/b
      make_plot('soverb_individual', 'cutflow', plot['variable_pass'], stack_combined, [plot['sig_pass'], plot['sig_fail']], [plot['ratio_pass'], plot['ratio_fail']], stack_dat, [plot['soverb_pass'], plot['soverb_fail']], ratio_margin = None)

  else:

    # boson tagger SF plots
    for region in regions:

      if isinstance(region, list) or isinstance(region, tuple): continue

      region_name = re.sub('.ptag(.pfat)*.pjet_.ptv_', '', region) # region without '0ptag1pfat0pjet_0ptv_' etc.
      
      for var_name in boson_tagger_sf:
       
        if boson_tagger_sf[var_name] == {}: continue

        sf = boson_tagger_sf[var_name][region_name]

        print('TEST', sf)

        if not 'withSFbkg' in sf: continue

        make_plot('sf', region_name, sf['variable'], None, [sf['noSFbkg'], sf['withSFbkg']], [sf['noSFbkg_ratio'], sf['withSFbkg_ratio']], sf['dat'], [])

        sf['withSFbkg'].SetName('nominal')
        sf['withSFbkg'].SetLineColor(ROOT.kBlack)
        sf['withSFbkg'].SetMarkerColor(ROOT.kBlack)
        sf['withSFbkg'].SetMarkerStyle(8)
        
        #syst_contours = [sf['withSFbkg']]
      
# get names of systematics
def get_syst_names(syst_dir):

  raw_names = [key.GetName() for key in syst_dir.GetListOfKeys()]

  names = [name[name.find('_Sys') + 4:] for name in raw_names]

  unique_names = list(dict.fromkeys(names))

  return unique_names

# calculate roc histogram
def get_roc_hist(sig, bkg, name):

  n_bins = sig.GetNbinsX()

  sig_eff, bkg_rej = [], []

  for b in range(n_bins + 1):

    sig_int = sig.Integral(b, n_bins + 1)
    bkg_int = bkg.Integral(b, n_bins + 1)

    bkg_eff = (bkg_int / (sig_int + bkg_int)) if sig_int + bkg_int > 0. else 0.

    sig_eff.append((sig_int / (sig_int + bkg_int)) if sig_int + bkg_int > 0. else 0.)
    bkg_rej.append((1. / bkg_eff) if bkg_eff > 0. else 0.)

  roc = ROOT.TH1D(name, '', n_bins, np.array(sig_eff, dtype=np.double))

  for b in range(n_bins + 1): roc.SetBinContent(b, bkg_rej[b])

  return roc

# one plot function with common style for all kinds of plots
def make_plot(prefix, region_name, variable, stack_main, contours_main, hists_ratio, hist_dat, hists_soverb, hist_dat_extra = None, do_ratio_fit = False, altovernom_margin = 2., ratio_margin = .45, cutflow_hists = None, th2 = False, wide_legend = False):

  prefix = prefix.replace(' ', '_').replace('+', '')
  region_name = region_name.replace(' ', '_').replace('+', '')

  out_dir = sys.argv[1]

  # create canvas
  global can_names

  can_name = '_'.join(['can', prefix, region_name, variable[0]])
  if can_name in can_names: return None
  can_names.append(can_name)

  can = ROOT.TCanvas(can_name, '', 1000, 1000)

  no_pad_main = False

  # main pad
  if stack_main != None or len(contours_main) > 0 or len(hists_ratio) > 0 or hist_dat != None and False:

    can.cd()
    pad_main = None
    if (th2 or (len(hists_ratio) == 0 and len(hists_soverb) == 0)):
      pad_main = ROOT.TPad('_'.join(['pad_main', prefix, region_name, variable[0]]), '', 0.0, 0.0, 1.0, 1.0)
    elif len(hists_soverb) > 0:
      pad_main = ROOT.TPad('_'.join(['pad_main', prefix, region_name, variable[0]]), '', 0.0, 0.4, 1.0, 1.0)
    else:
      pad_main = ROOT.TPad('_'.join(['pad_main', prefix, region_name, variable[0]]), '', 0.0, 0.25, 1.0, 1.0)
    if th2:
      pad_main.SetRightMargin(.18)
      pad_main.SetLeftMargin(.18)
    elif len(hists_ratio) == 0:
      pass
    else:
      pad_main.SetLeftMargin(.15)
      pad_main.SetBottomMargin(0.)
    pad_main.Draw()
    pad_main.SetFillStyle(4000) #transparent
    pad_main.cd()
    if variable[0].startswith('cutflow'): pad_main.SetLogy()

    #legend_main = ROOT.TLegend(0.2,0.6,0.4,0.85) if variable[3] == 'l' else ROOT.TLegend(0.7,0.6,0.9,0.85)
    legend_main = ROOT.TLegend(0.2,0.4,0.5,0.9) if variable[3] == 'l' else ROOT.TLegend(0.6,0.4,.9,0.9)
    if wide_legend:
      legend_main = ROOT.TLegend(0.2,0.6,0.5,0.85) if variable[3] == 'l' else ROOT.TLegend(0.6,0.6,0.9,0.85)
    #legend_main.SetFillStyle(4000) #transparent
    legend_main.SetBorderSize(0)

    if stack_main != None:

      for hst in stack_main.GetHists(): legend_main.AddEntry(hst, manipulate_legend_name(hst.GetName()), 'f')

    for hst in contours_main:
      if not '__1up' in hst.GetName():
        hst.SetName(manipulate_legend_name(hst.GetName()))
        legend_main.AddEntry(hst, hst.GetName(), 'l')

    if hist_dat != None:
     if 'TH1' in str(type(hist_dat)):
       legend_main.AddEntry(hist_dat, hist_dat.GetName())
     elif 'THStack' in str(type(hist_dat)):
       for hst in hist_dat.GetHists(): legend_main.AddEntry(hst, hst.GetName())

    y_max = -99.

    for hst in contours_main + [hist_dat, stack_main]:

      if hst != None and hst.GetMaximum() > y_max: y_max = hst.GetMaximum()

    margin = y_max / 10.

    # axis labels for th2 plots
    if th2:

      for hist in contours_main:

        [label_x, label_y, label_z] = variable[1].split(';')

        hist.GetXaxis().SetTitle(label_x)
        hist.GetYaxis().SetTitle(label_y)
        hist.GetZaxis().SetTitle(label_z)

    # plot
    if stack_main != None:

      stack_main.SetMinimum(1e-4) # hack to remove the label at 0
      if variable[0].startswith('cutflow'): stack_main.SetMinimum(1e3)
      stack_main.SetMaximum(y_max + margin)

      stack_main.Draw('colz' if th2 else 'hist')

      if len(hists_soverb) > 0 and not th2:

        stack_main.GetYaxis().SetLabelSize(label_size * 1.5) #XXX
        stack_main.GetYaxis().SetTitleSize(title_size * 1.5)

      else:

        stack_main.GetYaxis().SetLabelSize(label_size * 1.2) #XXX
        stack_main.GetYaxis().SetTitleSize(title_size * 1.2)

      stack_main.GetYaxis().SetTitleOffset(stack_main.GetYaxis().GetTitleOffset() * 1.)

      if 'THStack' in str(type(hist_dat)):
        for hst in hist_dat.GetHists():
          hst.Draw('same')
      else:
        if hist_dat != None: hist_dat.Draw('same colz' if th2 else 'same')

      for hist in contours_main:
        hist.SetLineWidth(int(4))

        if variable[0] == 'qgfrac':

          hist.Draw('hist same')
          hist.Draw('e1 same')

        else:

          hist.Draw('hist same')

      if not th2: legend_main.Draw('same')

    elif hist_dat != None:

      if 'THStack' in str(type(hist_dat)):
        print('ERROR: this should not be used with hist_dat being a THStack')
        exit()

      hist_dat.SetMinimum(1e-4) # hack to remove the label at 0
      if variable[0].startswith('cutflow'): hist_dat.SetMinimum(1e3)
      hist_dat.SetMaximum(y_max + margin)

      hist_dat.Draw('colz' if th2 else '')

      for hist in contours_main:

        if variable[0] == 'qgfrac':

          hist.Draw('hist same')
          hist.Draw('e1 same')

        else:

          hist.Draw('hist same')

      if not th2: legend_main.Draw('same')

    else:

      for ctr, hist in enumerate(contours_main):

        hist.SetMinimum(1e-4) # hack to remove the label at 0
        if variable[0].startswith('cutflow'): hist.SetMinimum(1e3)
        hist.SetMaximum(y_max + margin)

        draw_opt = 'colz' if th2 else 'hist'

        if variable[0] == 'qgfrac' and not th2:

          if ctr == 0:

            hist.Draw('hist')
            hist.Draw('e1 same')

          else:

            hist.Draw('hist same')
            hist.Draw('e1 same')

        else:

          hist.Draw(draw_opt if ctr == 0 else draw_opt + ' same')

      if not th2: legend_main.Draw('same')

    # vertical lines
    vert_lines_main = []
    for pos_x in variable[9]:
      min_y = 0.
      max_y = (y_max + margin) * (1. + ROOT.gStyle.GetHistTopMargin())
      vert_lines_main.append(ROOT.TLine(pos_x, min_y, pos_x, max_y))
      vert_lines_main[-1].SetLineStyle(2)
      vert_lines_main[-1].SetLineColor(ROOT.kGray)
      vert_lines_main[-1].Draw()

    # atlas label
    atlas_tex = ROOT.TLatex()
    if len(hists_soverb) > 0 and not th2:
      atlas_tex.SetTextSize(0.05)
    else:
      atlas_tex.SetTextSize(0.04)
    atlas_tex.SetTextAlign(13) # align at top
    if variable[3] == 'l': atlas_tex.DrawLatexNDC(.55, .9, atlas_label)
    else: atlas_tex.DrawLatexNDC(.18, .9, atlas_label)

  else: no_pad_main = True

  # pad ratio plot
  if len(hists_ratio) > 0 and not th2:

    can.cd()
    pad_ratio = ROOT.TPad('_'.join(['pad_ratio', prefix, region_name, variable[0]]), '', 0.0, 0.0, 1.0, 0.3) if not no_pad_main else ROOT.TPad('_'.join(['pad_ratio', prefix, region_name, variable[0]]), '', 0.0, 0.0, 1.0, 1.0)
    pad_ratio.SetLeftMargin(.15)
    pad_ratio.SetTopMargin(.2)
    pad_ratio.SetBottomMargin(.33)
    pad_ratio.Draw()
    pad_ratio.SetBottomMargin(pad_ratio.GetBottomMargin() * 1.15)
    pad_ratio.SetFillStyle(4000) #transparent
    pad_ratio.cd()

    line_ratio = ROOT.TLine(hists_ratio[0].GetXaxis().GetXmin(), 1., hists_ratio[0].GetXaxis().GetXmax(), 1.)
    line_ratio.SetLineColor(colours['line'])

    y_min = +99.
    y_max = -99.

    for hst in hists_ratio:
      
      if hst.GetMaximum() > y_max: y_max = hst.GetMaximum()
      if hst.GetMinimum() < y_min: y_min = hst.GetMinimum(-99.)

    y_range = max([abs(y_min - 1.), abs(y_max - 1.)])

    margin = y_range * 1.1
    if ratio_margin != None and (not (variable[0].startswith('cutflow') and not do_individual_cut_flow_hists)): margin = ratio_margin

    for hist in hists_ratio:

      hist.SetMinimum(1. - margin)
      hist.SetMaximum(1. + margin)

    x_center = hists_ratio[0].GetXaxis().GetXmin() + abs(hists_ratio[0].GetXaxis().GetXmax() - hists_ratio[0].GetXaxis().GetXmin()) / 2.

    # replace bin labels with tex in cutflows:
    if variable[0].startswith('cutflow'):

      for hst in hists_ratio:

        for b in range(1, hst.GetNbinsX() + 1):

          bin_label = hist.GetXaxis().GetBinLabel(b)

          tex_bin_label = cut_tex_map[bin_label] if bin_label in cut_tex_map else bin_label
         
          hist.GetXaxis().SetBinLabel(b, tex_bin_label)

    # make cutflow tex table

    if variable[0].startswith('cutflow') and prefix == 'nom':
      
      original_stdout = sys.stdout

      with open(out_dir + '/' + prefix + '_' + variable[0] + '_' + region_name + '.tex', 'w') as tex_file:

        sys.stdout = tex_file

        print('\\begin{tabular}{r|c|c|c|c|c}')
        print('cut&signal&background&all MC&data&data/MC\\\\')
        print('\hline')

        for b in range(1, hst.GetNbinsX() + 1):

          cut_name = hist.GetXaxis().GetBinLabel(b)

          num_mcall = cutflow_hists[1].GetBinContent(b)
          num_bkg = cutflow_hists[2].GetBinContent(b)
          num_sig = num_mcall - num_bkg
          num_dat = cutflow_hists[0].GetBinContent(b)
          if num_dat < 0.: num_dat = None # blinding
          dat_over_mc =  None if (num_dat == None or num_mcall == 0) else num_dat / num_mcall

          tex_line = cut_name
          tex_line += '&$%.0f$' % num_sig
          tex_line += '&$%.0f$' % num_bkg
          tex_line += '&$%.0f$' % num_mcall
          tex_line += ('&$%.0f$' % num_dat) if num_dat != None else '&-'
          tex_line += ('&$%.2f$' % dat_over_mc) if dat_over_mc != None else '&-'
          tex_line += '\\\\'

          print(tex_line)

        print('\\end{tabular}')

        sys.stdout = original_stdout

    # make fit to derive reweighting factors
    fit_function = ROOT.TF1('fit_function', '[0] + x * [1]', 1., 0.)
    fit_function.SetLineColor(colours['fit'])
    fit_function.SetFillColor(colours['fit'])

    fit_text = ROOT.TLatex()
    fit_text.SetTextAlign(23)
    fit_text.SetTextSize(0.12)
    fit_text.SetTextColor(colours['fit'])

    if do_ratio_fit:

      hists_ratio[0].Fit('fit_function')
      print('fit in', region_name)
      print('slope:\t\t', fit_function.GetParameter(1))
      print('slope_up:\t', fit_function.GetParameter(1) + abs(fit_function.GetParError(1)))
      print('slope_down:\t', fit_function.GetParameter(1) - abs(fit_function.GetParError(1)))
      print('constant:\t', fit_function.GetParameter(0))
      print('constant_up:\t', fit_function.GetParameter(0) + abs(fit_function.GetParError(0)))
      print('constant_down:\t', fit_function.GetParameter(0) - abs(fit_function.GetParError(0)))

    # plot
    hists_ratio[0].Draw()
    hists_ratio[0].GetYaxis().SetTitleOffset(title_offset)
    for ctr, hist in enumerate(hists_ratio):
      if ctr == 0: continue
      hists_ratio[ctr].Draw('same')
    if do_ratio_fit:
      fit_function.Draw('same')
      #fit_text.DrawLatex(x_center, 1. + margin * .9, 'f(x) = %.3f' % fit_function.GetParameter(0) + '(#pm %.3f)' % abs(fit_function.GetParError(0)) + (' + ' if fit_function.GetParameter(1) > 0. else ' - ') + '%.1E' % abs(fit_function.GetParameter(1)) + '(#pm %.1E)x' % abs(fit_function.GetParError(1)))
    line_ratio.Draw('same')

    # vertical lines
    vert_lines_ratio = []
    for pos_x in variable[9]:
      min_y = (1. - margin) * (1. + ROOT.gStyle.GetHistTopMargin())
      max_y = (1. + margin) * (1. + ROOT.gStyle.GetHistTopMargin())
      vert_lines_ratio.append(ROOT.TLine(pos_x, min_y, pos_x, max_y))
      vert_lines_ratio[-1].SetLineStyle(2)
      vert_lines_ratio[-1].SetLineColor(ROOT.kGray)
      vert_lines_ratio[-1].Draw()

  # pad soverb plot
  if len(hists_soverb) > 0 and not th2:

    can.cd()
    pad_soverb = ROOT.TPad('_'.join(['pad_soverb', prefix, region_name, variable[0]]), '', 0.0, 0.15, 1.0, 0.45) if not no_pad_main else ROOT.TPad('_'.join(['pad_soverb', prefix, region_name, variable[0]]), '', 0.0, 0.0, 1.0, 1.0)
    pad_soverb.SetLeftMargin(.15)
    pad_soverb.SetTopMargin(.2)
    pad_soverb.SetBottomMargin(.33)
    pad_soverb.Draw()
    pad_soverb.SetFillStyle(4000) #transparent
    pad_soverb.cd()

    x_center = hists_soverb[0].GetXaxis().GetXmin() + abs(hists_ratio[0].GetXaxis().GetXmax() - hists_ratio[0].GetXaxis().GetXmin()) / 2.

    # line (only for alt/nom)
    line_altovernom = ROOT.TLine(hists_soverb[0].GetXaxis().GetXmin(), 1., hists_soverb[0].GetXaxis().GetXmax(), 1.)
    line_altovernom.SetLineColor(colours['line'])

    # set y range
    if 'altovernom' in prefix:

      y_max = -99.

      for hst in hists_soverb:
        
        if hst.GetMaximum() > y_max: y_max = hst.GetMaximum()

      y_range = max([abs(y_min - 1.), abs(y_max - 1.)])

      margin = y_range * 1.1
      if altovernom_margin != None and (not variable[0].startswith('cutflow')): margin = altovernom_margin

      for hist in hists_soverb:

        hist.SetMinimum(10. ** (-4))
        hist.SetMaximum(1. + margin)

    else:

      y_max = -99.

      for hst in hists_soverb:
        if hst.GetMaximum() > y_max: y_max = hst.GetMaximum()

      for hist in hists_soverb:
        hist.SetMinimum(10. ** (-4))
        hist.SetMaximum(y_max * 1.1)

    # remove axis labels and set range
    for hist in hists_soverb:
      hist.GetXaxis().SetLabelSize(0)
      hist.GetXaxis().SetTitleSize(0)

    # set colours for comparison plots
    if prefix.startswith('comparisonsoverb'):
      
      for i in [0, 1]:
        
        hists_soverb[i].SetMarkerColor(contours_main[i].GetLineColor())

    # plot
    hists_soverb[0].Draw()
    hists_soverb[0].GetYaxis().SetTitleOffset(title_offset)
    for ctr, hist in enumerate(hists_soverb):
      if ctr == 0: continue
      hists_soverb[ctr].Draw('same')
    if 'altovernom' in prefix: line_altovernom.Draw('same')

    # vertical lines
    vert_lines_soverb = []
    for pos_x in variable[9]:
      min_y = 0.
      max_y = (1. + margin) * (1. + ROOT.gStyle.GetHistTopMargin())
      vert_lines_soverb.append(ROOT.TLine(pos_x, min_y, pos_x, max_y))
      vert_lines_soverb[-1].SetLineStyle(2)
      vert_lines_soverb[-1].SetLineColor(ROOT.kGray)
      vert_lines_soverb[-1].Draw()

  plot_name = prefix + '_' + variable[0].replace('_pass', '').replace('_fail', '') + '_' + region_name

  can.Print(out_dir + '/plots/' + plot_name + '.pdf')

  can.GetListOfPrimitives().Delete()

def manipulate_legend_name(string):
  
  string = string.replace('FATJET_BJT_JET_WTag', '')
  string = string.replace('FATJET_BJT_JET_JetTagSF', '')
  string = string.replace('__1down', '')
  string = string.replace('__1up', '')
  string = string.replace('sig', 'signal')
  string = string.replace('signalnal', 'signal') #ouch!
  string = string.replace('Wjet', 'W+jet')
  string = string.replace('Zjet', 'Z+jet')
  string = string.replace('_alt', '')
  string = string.replace('_nom', '')
  string = re.sub('_stack_[0-9]', '', string)
  string = string.replace('_', ' ')

  return string

def stack_envelope(stack):

  envelope = None

  if stack.GetHists() == None: return None
  
  for hist in stack.GetHists():
    
    if envelope == None: envelope = hist.Clone()
    else: envelope.Add(hist.Clone())

  return envelope

def find_noms_for_alt(alt):

  noms = []

  for smp in samples['bkg']:
    
    if alt in smp:
      
      nom = smp.replace('_' + alt, '').replace('_alt', '')

      noms.append(nom)

  return noms

def get_stats(hist, x, y):

  err = hist.GetBinError(x, y)
  val = hist.GetBinContent(x, y)

  stats = abs(err / val) if val != 0. else np.inf

  return stats

def get_bins(hist):

  x_bins, y_bins = None, None
  
  if hist.GetXaxis().GetXbins().GetSize() == 0: # fixed bin width, no bin arrays defined
  
    x_bins = [hist.GetXaxis().GetBinLowEdge(b) for b in range(1, hist.GetNbinsX() + 2)]
    y_bins = [hist.GetYaxis().GetBinLowEdge(b) for b in range(1, hist.GetNbinsY() + 2)]

  else: # bins defined as arrays with variable width

    x_arr = hist.GetXaxis().GetXbins()
    y_arr = hist.GetYaxis().GetXbins() #[sic]

    x_bins = [x_arr.At(i) for i in range(x_arr.GetSize())]
    y_bins = [y_arr.At(i) for i in range(y_arr.GetSize())]
  
  return [x_bins, y_bins]

def merge_bins_down(hist, i_bin, axis):

  bins = get_bins(hist)

  del bins[axis][i_bin]

  hist_rebinned = ROOT.TH2D(hist.GetName() + 'R', hist.GetTitle(), len(bins[0]) - 1, array('d', bins[0]), len(bins[1]) - 1, array('d', bins[1]))

  hist_rebinned.GetXaxis().SetTitle(hist.GetXaxis().GetTitle())
  hist_rebinned.GetYaxis().SetTitle(hist.GetYaxis().GetTitle())
  hist_rebinned.GetZaxis().SetTitle(hist.GetZaxis().GetTitle())

  hist_rebinned.SetMinimum(hist.GetMinimum())
  hist_rebinned.SetMaximum(hist.GetMaximum())

  bins[axis] = [bins[axis][i_bin - 2], bins[axis][i_bin - 1], bins[axis][i_bin]]

  merged_bins = ROOT.TH2D('merged_bins', '', len(bins[0]) - 1, array('d', bins[0]), len(bins[1]) - 1, array('d', bins[1]))

  if axis == 0:
    for y in range(len(bins[1])):
      for x in [0, 1]:

         val = hist.GetBinContent(i_bin - x, y)
         err = hist.GetBinError(i_bin - x, y)
        
         merged_bins.SetBinContent(x + 1, y, val)
         merged_bins.SetBinError(x + 1, y, err)
  
  if axis == 1:
    for x in range(len(bins[0])):
      for y in [0, 1]:

         val = hist.GetBinContent(x, i_bin - y)
         err = hist.GetBinError(x, i_bin - y)
        
         merged_bins.SetBinContent(x, y + 1, val)
         merged_bins.SetBinError(x, y + 1, err)

  if axis == 0: merged_bins.Rebin2D(2, 1)
  if axis == 1: merged_bins.Rebin2D(1, 2)

  for x in range(hist.GetNbinsX() + 1):
    for y in range(hist.GetNbinsY() + 1):
        
       val, err = None, None

       if axis == 1:
         if y == i_bin:
           
           val = merged_bins.GetBinContent(x, 1)
           err = merged_bins.GetBinError(x, 1)

         else:

           val = hist.GetBinContent(x, y if y < i_bin else y + 1)
           err = hist.GetBinError(x, y if y < i_bin else y + 1)

       if axis == 0:
         if x == i_bin:
           
           val = merged_bins.GetBinContent(1, y)
           err = merged_bins.GetBinError(1, y)

         else:

           val = hist.GetBinContent(x if x < i_bin else x + 1, y)
           err = hist.GetBinError(x if x < i_bin else x + 1, y)

       hist_rebinned.SetBinContent(x, y, val)
       hist_rebinned.SetBinError(x, y, err)

  merged_bins.Delete()

  return hist_rebinned
     
def get_stats_hist(hist):

  hist_stats = hist.Clone(hist.GetName() + '_stats')

  hist_stats.GetZaxis().SetTitle('stats [%]')

  for x in range(hist.GetNbinsX()):
    for y in range(hist.GetNbinsY()):

      stats = get_stats(hist, x, y) * 100.

      hist_stats.SetBinContent(x, y, stats)
  
  step = .1
  N = 50
  colour_levels = [ x / pow(step, -1) for x in range(0, N + 1) ]
  hist_stats.SetContour(len(colour_levels), array('d', colour_levels));

  hist_stats.SetMaximum(m_stats_max * 100.)

  return hist_stats


def make_diff_plot(hist_nominal, hist_comparison, s_name, r_name, suffix):

  hist_diff = hist_nominal.Clone()

  for x in range(hist_diff.GetNbinsX() + 1):
    for y in range(hist_diff.GetNbinsY() + 1):
      
      bin_c_nominal = hist_nominal.GetBinContent(x, y)
      bin_c_comparison = hist_comparison.GetBinContent(x, y)

      hist_diff.SetBinContent(x, y, abs(bin_c_nominal - bin_c_comparison))

  hist_diff.Scale(100)

  hist_diff.SetMinimum(0.)
  hist_diff.SetMaximum(19.)

  make_plot('qg_diff_' + s_name, r_name, qgfrac_diff_var[suffix], None, [hist_diff], [], None, [], th2 = True)

  return hist_diff

def combine_uncertainties(hist_a, hist_b):
  
  hist_c = hist_a.Clone()

  for x in range(hist_c.GetNbinsX() + 1):
    for y in range(hist_c.GetNbinsY() + 1):

      bin_c_a = hist_a.GetBinContent(x, y)
      bin_c_b = hist_b.GetBinContent(x, y)

      bin_c_c = math.sqrt(bin_c_a**2 + bin_c_b**2)

      hist_c.SetBinContent(x, y, bin_c_c)

  return hist_c

def swap_axes(hist_in):
  
  bins = get_bins(hist_in)

  hist_out = ROOT.TH2D(hist_in.GetName() + '_flipped', hist_in.GetTitle(), len(bins[1]) - 1, array('d', bins[1]), len(bins[0]) - 1, array('d', bins[0]))

  for x in range(hist_in.GetNbinsX() + 1):
    for y in range(hist_in.GetNbinsY() + 1):

      bin_c = hist_in.GetBinContent(x, y)
      bin_e = hist_in.GetBinError(x, y)

      hist_out.SetBinContent(y, x, bin_c)
      hist_out.SetBinError(y, x, bin_e)

  return hist_out

def mirror_copy_axis(hist_in, axis):
  
  bins = get_bins(hist_in)

  axis_reversed = bins[axis].copy()
  axis_reversed.reverse()
  axis_reversed.pop()

  axis_reversed = [e * -1. for e in axis_reversed]

  bins[axis] = axis_reversed + bins[axis]

  hist_out = ROOT.TH2D(hist_in.GetName() + '_mirror', hist_in.GetTitle(), len(bins[0]) - 1, array('d', bins[0]), len(bins[1]) - 1, array('d', bins[1]))

  for x in range(hist_in.GetNbinsX() + 1):
    for y in range(hist_in.GetNbinsY() + 1):

      bin_c = hist_in.GetBinContent(x, y)
      bin_e = hist_in.GetBinError(x, y)

      if axis == 0:

        hist_out.SetBinContent(hist_in.GetNbinsX() + x, y, bin_c)
        hist_out.SetBinError(hist_in.GetNbinsX() + x, y, bin_e)

        hist_out.SetBinContent(hist_in.GetNbinsX() + 1 - x, y, bin_c)
        hist_out.SetBinError(hist_in.GetNbinsX() + 1 - x, y, bin_e)

      elif axis == 1:
        
        hist_out.SetBinContent(x, hist_in.GetNbinsY() + y, bin_c)
        hist_out.SetBinError(x, hist_in.GetNbinsY() + y, bin_e)

        hist_out.SetBinContent(x, hist_in.GetNbinsY() + 1 - y, bin_c)
        hist_out.SetBinError(x, hist_in.GetNbinsY() + 1 - y, bin_e)

  return hist_out

if __name__ == '__main__':

  main()
