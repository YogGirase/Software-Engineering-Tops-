/*
2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;
class Bank_account{
    private:
    string depositor_name;
    long acc_number;
    string acc_type;
    int acc_balance;
    int deposit_ammount;
    int withdraw_ammount;
    public:
        int get_data(){
            cout<<"Name of the depositor:";
            cin>>depositor_name;
            cout<<"Account Number:";
            cin>>acc_number;
            cout<<"Account Type:";
            cin>>acc_type;
            cout<<"Account balance:";
            cin>>acc_balance;
        }
        int assign_value(string name,long acc_num,string type_acc,int balance){
            depositor_name = name;
            acc_number = acc_num;
            acc_type = type_acc;
            acc_balance = balance;
            
        }
        int amount_deposit(){
            cout<<"--------------------------------------------"<<endl;
            cout<<"----------[Deposit Amount]------------"<<endl;
            cout<<"Enter a amount to deposit:";
            cin>>deposit_ammount;
            acc_balance += deposit_ammount;
            cout<<"After Deposit amount.."<<endl;
            cout<<"Account Balance:"<<acc_balance<<endl;

        }
        int withdraw(){
            cout<<"--------------------------------------------"<<endl;
            cout<<"-------------[Withdraw Amount]------------"<<endl;
            cout<<"Withdraw Amount:";
            cin>>withdraw_ammount;
            acc_balance -= withdraw_ammount;
            cout<<"After Withdraw amount.."<<endl;
            cout<<"Account Balance:"<<acc_balance<<endl;
        }
        int display(){
            cout<<"-------------------------------------------"<<endl;
            cout<<"--------------[Final Amount]---------------"<<endl;
            cout<<"Account Holder Name:"<<depositor_name<<endl;
            cout<<"Account Balance:"<<acc_balance<<endl;
        }


};
int main()
{
    Bank_account b;
    b.get_data();
    b.amount_deposit();
    b.withdraw();
    b.display();
    
    return 0;
}