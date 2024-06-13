#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int n1=n,bin=0,power=1;
    while(n1>0){
        bin+=(n1%2)*power;
        power*=10;
        n1/=2;
    }
    // cout<<bin;
    int bin1=bin,count=0;
    while(bin1>0){
        if(bin1%10==0){
            count+=1;
        }
        bin1/=10;
    }
    cout<<count;
}