//C++ program to check whether a number is positive, negative, or zero.
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<" Enter Number:"<<endl;
    cin>>num;

    if(num>0){
        cout<<"Number is Positive";
    }
    else if(num<0){
        cout<<"Number is Negative";
    }
    else
    cout<<"Number is Equal to Zero";

    return 0;
    
}



