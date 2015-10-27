#CC        = /usr/bin/gcc
CC        = /afs/cern.ch/sw/lcg/external/gcc/4.3.2/x86_64/bin/g++
#CC        = afs/cern.ch/sw/lcg/external/gcc/4.5/x86_64-slc6-gcc45-opt/bin/g++
CCFLAGS   = -Wall -g
#INCS      = `root-config --cflags` -I. -I/MuonMomentumCorrections/MuonMomentumCorrections/
#INCS      = `root-config --cflags` -I. -I/afs/cern.ch/user/t/tbalestr/public/17.2.2.2/HIDP3DAnalysis2011/MuonSlimming/MuonMomentumCorrections/MuonMomentumCorrections/
LIBS      = `root-config --libs` -lTreePlayer -lCintex  
CPPFLAGS += -pthread $(shell $(ROOTSYS)/bin/root-config --cflags)
ROOTLIBS = $(shell $(ROOTSYS)/bin/root-config --nonew --libs)
EXTRALIBS := $(ROOTLIBS) 
#LDFLAGS  = MuonMomentumCorrections/src/SmearingClass.o 

SlimMain.exe : SlimMain.C MuonSlim.o Dict.o
	$(CC) $(CCFLAGS) $(CPPFLAGS) $< MuonSlim.o Dict.o -o  $@ $(INCS) $(LIBS) $(ROOTLIBS) $(EXTRALIBS) 

MuonSlim: MuonSlim.C MuonSlim.h
	$(CC) $(CCFLAGS) $(CPPFLAGS) -c $< $(INCS) $(LIBS) $(ROOTLIBS) $(EXTRALIBS)

Dict.o : Dict.cxx
	$(CC) $(CCFLAGS) $(CPPFLAGS) -c $< $(INCS) $(LIBS) $(ROOTLIBS) $(EXTRALIBS)

Dict.cxx : MuonSlim.h
	rootcint -f $@ -c $<+

clean :
	rm -f Dict.o Dict.cxx Dict.h MuonSlim.o SlimMain.exe
