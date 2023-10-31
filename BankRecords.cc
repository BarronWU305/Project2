#include "BankAccountRecords.h"

// Initilization constructors for the bank record

BankAccountRecord::BankAccountRecord(string inFirstName, string inLastName, double inAmount, int inAccountNum)
{
    FirstName = inFirstName;
    LastName = inLastName;
    Amount = inAmount;
    AccountNum = inAccountNum;
}

// Accessor and mutator for first name
string BankAccountRecord::GetFirstName() const
{
    return FirstName;
}

void BankAccountRecord::SetFirstName(string inFirstName)
{
    FirstName = inFirstName;
}

// Accessor and mutator for the last name
string BankAccountRecord::GetLastName() const
{
    return LastName;
}

void BankAccountRecord::SetLastName(string inLastName)
{
    LastName = inLastName;
}

// Accessor and mutator for Amount
double BankAccountRecord::GetAmount() const
{
    return Amount;
}
void BankAccountRecord::SetAmount(double inAmount)
{
    Amount = inAmount;
}

// Accessor and mutator for Account number
int BankAccountRecord::GetAccountNum() const
{
    return AccountNum;
}

void BankAccountRecord::SetAccountNum(double inAccountNum)
{
    AccountNum = inAccountNum;
}

// Print function
void BankAccountRecord::printInfo() const
{
    cout << "--------------------------------------------------------------------------" << endl;
    cout << " " << GetFirstName() << " " << GetLastName() << " (" << GetAccountNum() << "): " << setw(5) << right << fixed << setprecision(2) << "$" << GetAmount() << endl;
}