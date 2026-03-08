#include<iostream>
using namespace std;

int main(){

    char op;
    double num1,num2;

    cout<<"------------------calculator--------------------\n";

    cout <<"enter either (+ - * /): ";
    cin>>op;

    cout <<"enter the first number: ";cin>>num1;
    cout<<"enter the second number: ";cin>>num2;

    switch(op){
        case '+':cout<<num1<<op<<num2<<'='<<num1+num2;break;

        case '-':cout<<num1<<op<<num2<<'='<<num1-num2;break;

        case '*':cout<<num1<<op<<num2<<'='<<num1*num2;break;

        case '/':cout<<num1<<op<<num2<<'='<<num1/num2;break;
        
        default: cout<<"enter the correct operation.";
    }
cout<<"------------------------------------------------------------";
    return 0;
}
