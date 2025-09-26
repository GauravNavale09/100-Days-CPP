#include <iostream>
using namespace std;

int main() {
    float num1,num2,num3;
    cout<< "Enter Number 1:"<< endl;
    cin>>num1;
    cout<< "Enter Number 2:"<< endl;
    cin>>num2;
    cout<< "Enter Number 3:"<< endl;
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Largest="<<num1<<endl;
    }
    else if (num2>num1 && num2>num3)
    {
        cout<<"Largest="<<num2<<endl;
    }
    else if(num3>num1 && num3>num2){
        cout<<"Largest="<<num3<<endl;
    }
    else{
        cout<<"Both are equal"<<endl;
    }

    return 0;
}    
    
                                                                    