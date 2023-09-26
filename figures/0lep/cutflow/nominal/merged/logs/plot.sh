#!/bin/bash

function logging {
 input=$1
 runDir=$2
 outDir=$3
 cp scripts/plot.sh scripts/plot_hists.py $outDir/logs
# ls -ltr input/$input/$runDir/* >> $outDir/logs/lsltr.txt
 git log -n1 > $outDir/logs/git.txt
 git status >> $outDir/logs/git.txt
}

#for runDir in Condor0LepMc16a-r33 Condor0LepMc16d-r33 Condor0LepMc16e-r33 merged; do
#for runDir in merged; do
#for runDir in Condor0LepMc16a-r33-extrasysts Condor0LepMc16d-r33-extrasysts Condor0LepMc16e-r33-extrasysts merged-extrasysts; do
#for runDir in merged ; do
for runDir in merged; do

# # plots from top check inputs
# input="topCheck"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root #| tee $outDir/log.txt
# logging $input $runDir $outDir

 # TEST
 input="thesis"
 outDir="plots/$input/$runDir"
 rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}

 python -q -X faulthandler scripts/plot_hists.py $outDir "input/thesis/cutflow5j/$runDir/merged.root" | tee $outDir/log.txt


 logging $input $runDir $outDir

# # test
# input="extraDeltaRCut"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root | tee $outDir/log.txt
# logging $input $runDir $outDir

# # plots from reweighted inputs
# #input="final-fullSyst"
# input="final-mvaInputs"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root input/$input/$runDir-syssamples/merged.root | tee $outDir/log.txt
# logging $input $runDir $outDir

# # derive reweighting factors from non-reweighted inputs
# input="notreweightedfJVTloose"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
# 
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root input/nominal/$runDir-syssamples/merged.root | tee $outDir/logs/log.txt
# logging $input $runDir $outDir

# # derive reweighting factors from non-reweighted inputs
# input="final-not-reweighted"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
# 
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root input/nominal/$runDir-syssamples/merged.root | tee $outDir/logs/log.txt
# logging $input $runDir $outDir

# # derive reweighting factors from non-reweighted inputs
# input="notreweighted"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
# 
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root input/nominal/$runDir-syssamples/merged.root | tee $outDir/logs/log.txt
# logging $input $runDir $outDir

# # plots from reweighted inputs
# input="nominal"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/nominal/$runDir/merged.root input/nominal/$runDir-syssamples/merged.root #| tee $outDir/log.txt
# logging $input $runDir $outDir

# # plots for fJVT
# input="fJVT"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root input/$input/$runDir-syssamples/merged.root #| tee $outDir/log.txt
# logging $input $runDir $outDir

# # plots for fJVT retrained NN
# input="fJVTretrained"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/$input/$runDir/merged.root input/$input/$runDir-syssamples/merged.root | tee $outDir/log.txt
# logging $input $runDir $outDir

# # plots from reweighted inputs
# input="test"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/test/$runDir/merged.root input/test/$runDir-syssamples/merged.root #| tee $outDir/log.txt
# logging $input $runDir $outDir

# # plots with SF extra variables
# input="taggerSFsysts"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python -q -X faulthandler scripts/plot_hists.py $outDir input/taggerSFsysts/$runDir/merged.root | tee $outDir/log.txt
# logging $input $runDir $outDir

# # plots with full systs
# input="fullSyst"
# outDir="plots/$input/$runDir"
# rm -r $outDir/*; mkdir -p $outDir/{plots,macros,logs,root}
#
# python scripts/plot_hists.py $outDir input/fullSyst/$runDir/merged.root #| tee $outDir/log.txt
# logging $input $runDir $outDir

done

