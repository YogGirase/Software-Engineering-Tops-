/*4.Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class Bank_account{
    private:
    int account_number;
    int account_balance;
    int deposit_amount;
    int withdraw_amount;
    public:
    int get_bank_details(){
            cout<<"Account Number:";
            cin>>account_number;
            cout<<"Account balance:";
            cin>>account_balance;
    }
    int amount_deposit(){
            cout<<"<-------------------------------------------->"<<endl;
            cout<<"<----------[Deposit Amount]------------>"<<endl;
            cout<<"Enter a amount to deposit:";
            cin>>deposit_amount;
            account_balance += deposit_amount;
            cout<<"<---After Deposit amount--->"<<endl;
            cout<<"Account Balance:"<<account_balance<<endl;
    }
    int amount_withdraw(){
            cout<<"<-------------------------------------------->"<<endl;
            cout<<"<-------------[Withdraw Amount]------------>"<<endl;
            cout<<"Withdraw Amount:";
            cin>>withdraw_amount;
            account_balance -= withdraw_amount;
            cout<<"<---After Withdraw amount--->"<<endl;
            cout<<"Account Balance:"<<account_balance<<endl;
        }

};
int main()
{
    Bank_account ba;
    ba.get_bank_details();
    ba.amount_deposit();
    ba.amount_withdraw();
    return 0;
}