root-analysis
=============

This package produces plots from given ROOT files for further visual analysis of the associated parameters. This experiment is conducted on ATLAS machine. (Reason: setup.sh calls setupATLAS that needs access to ATLAS setup scripts.)

Execution Instructions:
-----------------------
The following steps are executed after cloning this repository(git clone https://github.com/SISC2014/root-analysis.git)

1. source setup.sh
2. wget http://stash.osgconnect.net/~rkommineni/xAOD_mc.pool.root
3. root -l -q -b simple.C

setup.sh sets up the environment required to execute simple.C.

simple.C generates plots for two root files:  xAOD_mc.pool.root and output_SM3.pool.root

You can find  xAOD_mc.pool.root at http://stash.osgconnect.net/~rkommineni/xAOD_mc.pool.root (does not satisfy the size limit).

The root command can be executed both interactively and non-interactively. -q and -b flags can be dropped to run 
interactively. 

After the second step, simple.ps is generated. 
