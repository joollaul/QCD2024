# PYTHIA configuration file.
# Generated on Ti 13 Hel 2024 13:20:05 EET with the user supplied options:
# --with-gzip
# --with-hepmc3=~/Documents/rivet/local
# --with-rivet
# --with-hdf5=/usr/local/Cellar/hdf5/1.14.3
# --with-highfive=/Users/joollaul/Documents/pythia83/highfive

# Install directory prefixes.
PREFIX_BIN=/Users/joollaul/Documents/pythia83/bin
PREFIX_INCLUDE=/Users/joollaul/Documents/pythia83/include
PREFIX_LIB=/Users/joollaul/Documents/pythia83/lib
PREFIX_SHARE=/Users/joollaul/Documents/pythia83/share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
CXX=g++
CXX_COMMON=-O2 -std=c++11 -pedantic -W -Wall -Wshadow -fPIC -pthread -DGZIP
CXX_SHARED=-dynamiclib
CXX_SONAME=-Wl,-dylib_install_name,@rpath/
LIB_SUFFIX=.dylib
OBJ_COMMON=

EVTGEN_USE=false
EVTGEN_CONFIG=
EVTGEN_BIN=
EVTGEN_INCLUDE=
EVTGEN_LIB=

FASTJET3_USE=false
FASTJET3_CONFIG=
FASTJET3_BIN=
FASTJET3_INCLUDE=
FASTJET3_LIB=

HEPMC2_USE=false
HEPMC2_CONFIG=
HEPMC2_BIN=
HEPMC2_INCLUDE=
HEPMC2_LIB=

HEPMC3_USE=true
HEPMC3_CONFIG=HepMC3-config
HEPMC3_BIN=/Users/joollaul/Documents/rivet/local/bin/
HEPMC3_INCLUDE=-I/Users/joollaul/Documents/rivet/local/include
HEPMC3_LIB=-L/Users/joollaul/Documents/rivet/local/lib -Wl,-rpath,/Users/joollaul/Documents/rivet/local/lib -lHepMC3

LHAPDF5_USE=false
LHAPDF5_CONFIG=
LHAPDF5_BIN=
LHAPDF5_INCLUDE=
LHAPDF5_LIB=

LHAPDF6_USE=false
LHAPDF6_CONFIG=
LHAPDF6_BIN=
LHAPDF6_INCLUDE=
LHAPDF6_LIB=

POWHEG_USE=false
POWHEG_CONFIG=
POWHEG_BIN=
POWHEG_INCLUDE=
POWHEG_LIB=

RIVET_USE=true
RIVET_CONFIG=rivet-config
RIVET_BIN=
RIVET_INCLUDE=-I/Users/joollaul/Documents/rivet/local/include
RIVET_LIB=-L/Users/joollaul/Documents/rivet/local/lib -Wl,-rpath,/Users/joollaul/Documents/rivet/local/lib -lRivet

ROOT_USE=false
ROOT_CONFIG=
ROOT_BIN=
ROOT_INCLUDE=
ROOT_LIB=

GZIP_USE=true
GZIP_CONFIG=
GZIP_BIN=
GZIP_INCLUDE=
GZIP_LIB=-lz

PYTHON_USE=false
PYTHON_CONFIG=
PYTHON_BIN=
PYTHON_INCLUDE=
PYTHON_LIB=

MG5MES_USE=false
MG5MES_CONFIG=
MG5MES_BIN=
MG5MES_INCLUDE=
MG5MES_LIB=

OPENMP_USE=false
OPENMP_CONFIG=
OPENMP_BIN=
OPENMP_INCLUDE=
OPENMP_LIB=

MPICH_USE=false
MPICH_CONFIG=
MPICH_BIN=
MPICH_INCLUDE=
MPICH_LIB=

HDF5_USE=true
HDF5_CONFIG=
HDF5_BIN=/usr/local/Cellar/hdf5/1.14.3/bin/
HDF5_INCLUDE=-I/usr/local/Cellar/hdf5/1.14.3/include
HDF5_LIB=-L/usr/local/Cellar/hdf5/1.14.3/lib -Wl,-rpath,/usr/local/Cellar/hdf5/1.14.3/lib -lhdf5

HIGHFIVE_USE=true
HIGHFIVE_CONFIG=
HIGHFIVE_BIN=/Users/joollaul/Documents/pythia83/highfive/
HIGHFIVE_INCLUDE=-I/Users/joollaul/Documents/pythia83/highfive
HIGHFIVE_LIB=-L/Users/joollaul/Documents/pythia83/highfive -Wl,-rpath,/Users/joollaul/Documents/pythia83/highfive
