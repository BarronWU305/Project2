#ifndef BANKACCOUNTRECORD_H_
#define BANKACCOUNTRECORD_H_

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccountRecord //CLASS 
{
public:
    //
    BankAccountRecord(string FirstName, string LastName, double Amount, int AccountNum);

    string GetFirstName();
    void SetFirstName(string FirstName);

    string GetLastName();
    void SetLastName(string LastName);

    double GetAmount() const;
    void SetAmount(double Amount);

    int GetAccountNum(); 
    void SetAccountNum(double AccountNum); 

    //FUNCTION TO PRINT DETAILS FROM BANKACCOUNTRECORD
    void Print() const;

private:
//DECLARE VARIABLES 
    string FirstName;
    string LastName;
    double Amount;
    int AccountNum;
};

#endif