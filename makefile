CFLAGS=-c -I.

all: BankAccount.exe 












clean: 
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe
