#ifndef BANKACCOUNTRECORD_H_
#define BANKACCOUNTRECORD_H_

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankAccountRecord
{
public:
    BankAccountRecord(string FirstName, string LastName, double Amount, int AccountNum);

    string GetName() const;
    void SetName(string inName);

    double GetAmount() const;
    void SetAmount(double inAmount);

    void Print() const;

private:
    string FirstName;
    string LastName;
    double Amount;
    int AccountNum;
};

#endif