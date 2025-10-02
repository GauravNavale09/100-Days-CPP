#include<iostream>
using namespace std;

int main()
{
    int num,r,reverse=0;
    cout<<"Enter Number:";
    cin>>num;
    
    while (num>0)
    {
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;
    }
    
     cout<<"Reverse is:"<<reverse;
    
    return 0;


}