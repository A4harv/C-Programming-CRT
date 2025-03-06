/*
#include <iostream>
using namespace std;
class ATM
{
public:
    int iBalance;
    int iDeposit;
    int iAmount;
    ATM()
    {
        iBalance = 0;
        iDeposit = 0;
    }
    int Deposit(int Amt)
    {
        iBalance = iBalance - Amt;
        cout << "Amount Deposited Succesfully: \n"
             << endl;
        cout << "Available Balance is: \n"
             << iBalance << endl;
    }
    int Deposit(int Amt)
    {
        iBalance = iBalance + Amt;
        cout << "Amount Deposited Succesfully: \n"
             << endl;
        cout << "Available Balance is: \n"
             << iBalance << endl;
    }
    int Withdraw(int Amt)
    {
        iBalance = iBalance - Amt;
        cout << "Amount Withdrawed Succesfully: \n"<< iBalance<<endl;
        cout << "Available Balance is: \n"<< iBalance << endl;
    }
};

int main()
{
    int DepositAmount = 0;
    float WithdrawAmount = 0.0;
    int choice = 0;
    ATM obj1;
    cout<<"Enter 1 for Deposit:"<<endl;
    cout<<"Enter 2 for Withdraw:"<<endl;
    switch (choice)
    {
    case 1:
        cout << "Enter the amount to Deposite: \n";
        cin >> DepositAmount;
        obj1.Deposit(DepositAmount);
        break;
    case 2:
        cout << "Enter the amount to Withdraw: \n";
        cin >> WithdrawAmount;
        obj1.Withdraw(DepositAmount);
        break;

    default:
        cout<<"Invalid Option";
        break;
    }
}

*/