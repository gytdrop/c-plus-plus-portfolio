#include<iostream>
#include<cmath>

int main(){
    double A,B,C;

    std::cout<<"From the triangle ABC,\nEnter the side A length: ";
    std::cin>>A;
    std::cout<<"Enter teh side B length: ";
    std::cin>>B;

    C = sqrt(pow(A , 2) + pow(B, 2));
    std::cout<<"--------------------------\n"<< "The Hypotenuse value is equal to C = "<< C;
    return 0;
}
