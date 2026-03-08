#include<iostream>
#include<ctime>  //time(0) the current time
using namespace std;
int main(){
    srand(time(0));
    char dec='Y';
    while(true){
        
        switch(dec){
            case 'y':case 'Y':{
            int num = rand()%5+1;
            cout<<"LET US CHECK WHAT YOUR TICKET PROVIDES\n";
            cout<<"---------------------------------------\n";
            switch(num){
                case 1: cout<<"YOU WON SAMSUNG GALAXY S12 MOBILE";
                break;
                case 2: cout<<"YOU WON 1 GOA TICKET";
                break;
                case 3: cout<<"BETTER LUCK NEXT TIME!";
                break;
                case 4: cout<<"YOU WON 4 IN ONE GRINDER";
                break;
                case 5: cout<<"YOU WON 1 YEAR PREMIUM NETFLIX SUBSCRIPTION";
                break;
                }cout<<"\n----------------------------------\n";
                cout<<"\nTHANK YOU WANT TO BUY ANOTHER TICKET(Y/N): ";cin>>dec;
            break;}
        case 'n' :case 'N':{cout<<"THANK YOU";return 0;}
        break;
        default: cout<<"INVALID INPUT! PLEASE ENTER Y/N: ";cin>>dec;
    }
       }
    //or simply we can use do while
    return 0;
}
