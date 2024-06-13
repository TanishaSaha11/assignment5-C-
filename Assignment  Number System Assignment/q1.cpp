#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<6;i++){
        sum+=i;
    }
    int n1=sum,bin=0,power=1;
    while(n1>0){
        bin+=(n1%2)*power;
        power*=10;
        n1/=2;
    }
    cout<<bin;
}