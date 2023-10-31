#include "BankAccountRecords.h"

// INITILIZATION CONSTRUCTORS FOR THE BANK RECORD

BankAccountRecord::BankAccountRecord(string inFirstName, string inLastName, double inAmount, int inAccountNum)
{
    FirstName = inFirstName;
    LastName = inLastName;
    Amount = inAmount;
    AccountNum = inAccountNum;
}

// ACCESSOR AND MUTATOR FOR FIRST NAME
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

// ACCESSOR AND MUTATOR FOR AMOUNT
double BankAccountRecord::GetAmount() const
{
    return Amount;
}
void BankAccountRecord::SetAmount(double inAmount)
{
    Amount = inAmount;
}

// ACCESSOR AND MUTATOR FOR ACCOUNTNUM
int BankAccountRecord::GetAccountNum() const
{
    return AccountNum;
}

void BankAccountRecord::SetAccountNum(double inAccountNum)
{
    AccountNum = inAccountNum;
}

// PRINT FUNCTION
void BankAccountRecord::printInfo() const
{
    // VARS NEEDED FOR COUT
    int maxAmountWidth = 27;
    int remainingAmount;
    // STRING FOR FIRST, LAST, AND ACCOUNT NUM
    string infoString = FirstName + " " + LastName + " (" + to_string(AccountNum) + "):";
    cout << infoString;
    // FINDS THE REMAINING AMOUNT IN ORDER TO HELP LINE DOLLAR SIGN AND AMOUNT UP
    remainingAmount = maxAmountWidth - (FirstName.length() + LastName.length() + to_string(AccountNum).length());
    for (int i = 0; i < remainingAmount; i++)
    {
        cout << " ";
    }
    cout << fixed << setprecision(2) << "$" << GetAmount() << endl;
}