#CC        = /usr/bin/gcc
CC        = /afs/cern.ch/sw/lcg/external/gcc/4.3.2/x86_64/bin/g++
CCFLAGS   = -Wall -g  
INCS      = `root-config --cflags` -I.  
LIBS      = `root-config --libs` -lTreePlayer -lCintex 

SkimMain.exe : SkimMain.C BranchBase.o TruthBranch.o MuonBranch.o TrigGlobalBranch.o Dict.o
	$(CC) $(CCFLAGS) $< BranchBase.o TruthBranch.o MuonBranch.o TrigGlobalBranch.o Dict.o -o $@ $(INCS) $(LIBS) 

TrigGlobalBranch.o: TrigGlobalBranch.C TrigGlobalBranch.h BranchBase.o
	$(CC) $(CCFLAGS) -c $< $(INCS) $(LIBS) 

MuonBranch.o: MuonBranch.C MuonBranch.h BranchBase.o
	$(CC) $(CCFLAGS) -c $< $(INCS) $(LIBS) 

TruthBranch.o: TruthBranch.C TruthBranch.h BranchBase.o
	$(CC) $(CCFLAGS) -c $< $(INCS) $(LIBS) 

BranchBase.o : BranchBase.C BranchBase.h
	$(CC) $(CCFLAGS) -c $< $(INCS) $(LIBS) 

Dict.o : Dict.cxx
	$(CC) $(CCFLAGS) -c $< $(INCS) $(LIBS) 

Dict.cxx : MuonBranch.h 
	rootcint -f $@ -c $<+

clean :
	rm -f Dict.o Dict.cxx Dict.h TrigGlobalBranch.o TruthBranch.o MuonBranch.o BranchBase.o SkimMain.exe skimmed.root
