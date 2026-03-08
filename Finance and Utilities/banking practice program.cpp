#include<iostream>
#include<iomanip>
using namespace std;
//banking system 
void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);
int main(){
    int choice=0;
    double balance=0;
    do{
    cout<<"**************************";
    cout<<"\nEnter your choice\n";
    cout<<"**************************\n";
    cout<<"1. show Balance\n";
    cout<<"2. Deposit money\n";
    if(balance>0){
    cout<<"3. Withdraw Money\n";}
    cout<<"4. Exit\n";
    cin>>choice;
    switch(choice){
        case 4 : cout<<"Thank you!\n****************************";break;
        case 1 : showBalance(balance);break;
        case 2: balance = deposit(balance);break;
        case 3: balance = withdraw(balance);break;
        default: cout<<"Enter the Valid option!";
    }cout<<"\n";
}while(choice!=4);
    return 0;
}
void showBalance(double balance){
    cout<<"Your balance is: "<<setprecision(2)<<fixed<<balance;
}
double deposit(double balance){double money;
    cout<<"enter how much you want to deposit: ";cin>>money;
    if(money<=0){
    cout<<"that is not a valid amount.";return balance;
}
    cout<<"your current balance is : "<<setprecision(2)<<fixed<<balance+money;
    return balance + money;
}
void invalid(){
    cout<<"Insufficient balance";
}
double withdraw(double balance){
    if (balance==0){invalid();return balance;}
    double money;
    cout<<"enter how much you want to withdraw: ";cin>>money;
    if(balance<money){invalid();return balance;}
        cout<<"your current balance is :"<<setprecision(2)<<fixed<<balance-money;
    return balance-money;
}
