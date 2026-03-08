#include<iostream>
#include<ctime>
using namespace std;
char getChoice();char computerChoice();void displayChoice(char human, char computer);char decision();
int main(){
    char choice='y';
    do{
        switch(choice){
    case 'y':{        
    char human = getChoice();
    char computer = computerChoice();
    displayChoice(human,computer);
    choice=decision();break;}
    default:cout<<"select the proper option";                                                                                                       
    }
}while(choice!='n');
    return 0;
}
char getChoice(){
    char choice='r';
    do{
        cout<<"rock-paper-scissor\n";
        cout<<"************************************************\n";
        cout<<"'r' for rock     'p' for paper   's' for scissor\n";
        cout<<"************************************************\n";
        cout<<"enter the choice : ";
        cin >> choice;
    }while(choice!='r' && choice!='p' && choice!='s');
return choice;}
char computerChoice(){
    srand(time(0));  //current time
    int num = rand()%3;
    switch (num){
        case 0: return 'r';break;
        case 1: return 'p';break;
        case 2: return 's';break;
    }return 'r';
}
void displayChoice(char human, char computer){
    cout<<((human=='r'&&computer=='s' || human=='p'&&computer=='r'||human=='s'&&computer=='p')?"aha you win":"alas better luck next time")<<endl;
}
    char decision(){
    char choice;
do{
    cout<<"do you want to play again(y/n): ";
    cin>>choice;
}while(choice!='y'&&choice!='n');
if(choice == 'y'){return 'y';}else{cout<<"thank you";return 'n';}
}
