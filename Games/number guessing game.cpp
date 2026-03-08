#include<iostream>
#include<ctime>

int main(){
using namespace std;
char next;
do{
    int guess=0;
    cout<<"Enter the number to guess (1-10): ";cin>>guess;
    srand(time(0));int num = rand()%10+1;
    if (guess<11 && guess>0){
        if(guess ==num){
        
        cout<<"you guessed right\n";}
        else{cout<<"better luck next time :) The acutual number is "<<num<<"\n";}
    }
    else{cout<<"enter the number with in the range 1-10 \n-------------\n";continue;}
    cout<<"wanna Try AGAIN (y/n): ";cin>>next;
    switch(next){
        case 'n':case 'N':{ return 0;break;}default:cout<<"invalid! try again\n";}

}while(true);
return 0;}
