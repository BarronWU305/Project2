#include<BankAccountRecords.h>

//Initilization constructors for the bank record

BankAccountRecord::BankAccountRecord(string inFirstName, string inLastName, double inAmount, int inAccountNum) {
    FirstName = inFirstName;
    LastName = inLastName; 
    Amount = inAmount;
    AccountNum = inAccountNum;

}

//Accessor and mutator for first name
string BankAccountRecord::GetFirstName() const {
    return FirstName; 
}