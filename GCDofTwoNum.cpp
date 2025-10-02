#include<iostream>
using namespace std;

int main()
{
    int num,num1,i,gcd;
    cout<<"Enter 1st Number:";
    cin>>num;
    cout<<"Enter 2nd Number:";
    cin>>num1;
    for (int i=1;i<=num;i++)
    {
       if(num%i==0 && num1%i==0){
        gcd=i;
        cout<<gcd<<endl;
       }
    }
    cout<<gcd<<" is GCD of"<<num<<"and"<<num1;

    
    
    return 0;

}