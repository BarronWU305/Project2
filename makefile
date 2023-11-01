all: BankAccount.exe 

BankAccount.exe: BankRecords.o BankAccount.o
	g++ BankRecords.o BankAccount.o -o BankAccount.exe

## RPW: Typo ...
#BankAccountRecords.o: BankRecords.cc BankAccountRecords.h
BankRecords.o: BankRecords.cc BankAccountRecords.h
	g++ -c BankRecords.cc

BankAccount.o: BankAccount.cc BankAccountRecords.h
	g++ -c BankAccount.cc

clean: 
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe