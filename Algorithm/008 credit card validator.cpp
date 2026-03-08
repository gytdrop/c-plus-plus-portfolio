//luhn 
/*
. double every secong digit from right to left if doubled number is 2 digits, split them
. add all single digits from step 1
. add all odd numbered digits from right to left
. sum results from steps 2 and 3
. if step 4 is divisible by 10 , #valid..
*/
/*
reverse credit numbers
double every 2nd digit from left to right.
if greater than 9 then 
x-9 is the digit number.
*/

#include<iostream>
using namespace std;
void creditvalid(string s);
int main(){
                                        //     int index = 0;
                                        //     int arr[] = {0,0,0,0};
                                        //     arr[++index] = 1;
                                        // cout<<arr[0]<<arr[1]<<index;
cout<<"enter the cred value: ";string s;
    cin>>s;

    creditvalid(s);
    return 0;
}

void creditvalid(string s){
    int sum =0;
    string chk(s.rbegin(),s.rend());
    cout<<chk<<endl;
    for(int i=0;i<chk.length();i++){
        int ch = chk[i] - '0';
        if(i%2==1){
            ch*=2;
            if(ch>9){ch-=9;}
        }sum+=ch;
    }
    (sum%10 == 0)? cout<<"pass" : cout<<"fail";

}