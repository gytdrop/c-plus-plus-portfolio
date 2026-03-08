//convert the celcius to fahrenheit vice-versa

#include<iostream>
using namespace std;

int main(){

    //here i have used if/else , switch , ternary operators and logical operators

    double temp;
    char unit;
    int val;
    cout<<"--------------------------tempreature convertor------------------------\n";
    cout<<"F/f -> fahrenheit\nC/c -> celcius\nWhat unit would you convert the temp to?: ";cin>>unit;

    if (unit == 'F' || unit == 'f'){val=1;}
    else{(unit == 'C' || unit == 'c')? val = 2: val =3;}

    switch(val){
        case 1 : case 2 : cout<<"Enter the temperature in "<<((val == 1 )? "celcius" : "Fahrenheit" )<<" : ";
        cin>>temp;
        cout<<((val ==1)? (1.8 * temp)+32.0 : (temp - 32.0)/1.8 )<< ((val ==2)? " Celcius" : " Fahrenheit");break;
        default : cout<<"error";
    }

    return 0;
}
