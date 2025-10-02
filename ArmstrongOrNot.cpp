#include<iostream>
using namespace std;

int main()
{
    int num,r,sum=0,n;
    cout<<"Enter Number:";
    cin>>num;
    n=num;
    while (n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==num){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Number is Not Armstrong";
    }
    
    return 0;


}