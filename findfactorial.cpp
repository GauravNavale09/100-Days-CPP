#include<iostream>
using namespace std;

int main()
{
    int num,fact=1;
    cout<<" Enter the Number:"<<endl;
    cin>>num;

    if(num<0){
        cout<<" Enter Positive Number";
    }
    else if(num<=1){
        cout<<num<<" != "<<fact;
    }
    else{
        for(int i=num;i>=2;i--){
            fact=fact*i;
        }
        cout<<num<<"! = "<<fact;
    }

    return 0;
}
