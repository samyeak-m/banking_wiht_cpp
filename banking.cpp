#include <iostream>
using namespace std;

int balance;
int bal; 
int amt;
int minimum_balance=200;

class Account{
public:
 
    Account(){
        balance = 0;
    }
 
    void withdraw(){
    	cout<<"Amount You want to withdraw.\n";
    	cin>>amt;
        balance -= amt;
        cout <<"INR "<< amt<<" Withdraw Successful from your account number BKMXXXXXX \n";
    }
 
    void deposit(){
    	cout<<"Amount You want to Deposit.\n";
    	cin>>amt;
        balance += amt;
        cout <<"INR "<< amt<<" Deposit Successful in your account number BKMXXXXXX \n";
    }
 
    void display_balance(){
        cout << "INR "<< "Current Balance of your saving account: "<<balance<<endl;
    }
};
 
class Minimum_Saving_Account: public Account{
public:
 
    Minimum_Saving_Account(){
        minimum_balance = 200;
    
    }
 
    Minimum_Saving_Account(int bal){
        balance = bal;
        
    }
 
    Minimum_Saving_Account(int bal,int avg){
        balance = bal;
        minimum_balance = avg;
    }
 
 
    void check_Minimum(){
        if(balance <= minimum_balance){
            cout << "Your Balance is less the minimum balance of INR 200 \n";
            
        } else{
            cout <<"Your Balance is above the minimum balance of INR 200 \n";
        }
    }
};
 
int main()
{
    Minimum_Saving_Account account(900);
    account.display_balance();
    account.deposit();
    account.display_balance();
    account.withdraw();
    account.display_balance();
    account.check_Minimum();
 
    return 0;
}
