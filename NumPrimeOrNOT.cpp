#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n,p=0;
    cout<<"Enter Number:";
    cin>>n;

    if(n<=1) {
        cout<<n<<" is Not prime"<<endl;
    } 
    else{
        for(int i=1;i<=n;i++) {
            if(n%i==0) {
                p++;
            }
        }if(p==2){ 
            cout<<n<<" is prime"<<endl;
        } 
        else{
            cout<<n<<"is Not prime"<<endl;
        }
    }

    return 0;
}