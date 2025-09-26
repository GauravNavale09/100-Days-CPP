#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout<< "Enter Number 1:"<< endl;
    cin>> num1;

    cout<< "Enter Number 2:"<< endl;
    cin>> num2;

    if (num1>num2) {
        cout<< "Number 1 is largest: "<< num1 << endl;
    }
    else if (num2>num1) {
        cout<< "Number 2 is largest: "<< num2<< endl;
    }
    else { 
        cout<< "Both numbers are equal"<< endl;
    }

    return 0;
}

   
