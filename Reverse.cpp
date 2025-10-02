#include<iostream>
using namespace std;

int main()
{
    int n,r,reverse=0,x;
    cout<<"Enter Number:";
    cin>>n;
    x=n;
    while(x>0){
        r=x%10;
        reverse=reverse*10+r;
        x=x/10;
    }
    if(reverse==n){
        cout<<"Number is Palindrome";
    }
    else{
        cout<<"Number is not Palindrome";
    }

    return 0;
}