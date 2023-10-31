#ifndef BANKACCOUNTRECORDS_H_
#define BANKACCOUNTRECORDS_H_

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccountRecord // CLASS
{
public:
    //CONST. FOR INIT BANKACCOUNTRECORD OBJ
    BankAccountRecord(string inFirstName, string inLastName, double inAmount, int inAccountNum);

    //GETTER AND SETTER FUNCTIONS
    string GetFirstName() const;
    void SetFirstName(string inFirstName);

    string GetLastName() const;
    void SetLastName(string inLastName);

    double GetAmount() const;
    void SetAmount(double inAmount);

    int GetAccountNum() const;
    void SetAccountNum(double inAccountNum);

    // FUNCTION TO PRINT DETAILS FROM BANKACCOUNTRECORD
    void printInfo() const;

//CHANGED FROM PRIVATE TO PROTECTED AFTER LEARNING IN CLASS
protected:
    // DECLARE VARIABLES
    string FirstName;
    string LastName;
    double Amount;
    int AccountNum;
};

#endif