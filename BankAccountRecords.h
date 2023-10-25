#ifndef BANKACCOUNTRECORD_H_
#define BANKACCOUNTRECORD_H_

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccountRecord //CLASS 
{
public:
    BankAccountRecord(string FirstName, string LastName, double Amount, int AccountNum);

    string GetFirstName();
    void SetFirstName(string FirstName);

    string GetName() const;
    void SetName(string inName);

    double GetAmount() const;
    void SetAmount(double inAmount);

    void Print() const;

private:
//DECLARE VARIABLES 
    string FirstName;
    string LastName;
    double Amount;
    int AccountNum;
};

#endif