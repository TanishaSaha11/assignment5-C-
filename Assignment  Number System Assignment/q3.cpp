#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int bin1,bin2;
    cout<<"Enter binary number 1:";
    cin>>bin1;
    cout<<"Enter binary number 2:";
    cin>>bin2;
    int n1=bin1,power=0,dec1=0;
    while(n1>0){
        dec1+=(n1%10)*pow(2,power);
        power++;
        n1=n1/10;
    }
    //cout<<dec1;
    int n2=bin2,power1=0,dec2=0;
    while(n2>0){
        dec2+=(n2%10)*pow(2,power1);
        power1++;
        n2=n2/10;
    }
    if(dec2>dec1){
        cout<<dec2;
    }
    else{
        cout<<dec1;
    }
}