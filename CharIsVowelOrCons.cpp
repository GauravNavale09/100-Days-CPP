//C++ program to check whether a character is a vowel or consonant.
#include<iostream>
using namespace std;


int main()
{
    char c;
    int lowercaseVowel, uppercaseVowel;

    cout<<"Enter Character:"<<endl;
    cin>>c;

// Lower Case Vowel
    lowercaseVowel=(c=='a'|| c=='e'|| c=='i'|| c=='o'||c=='u');
//Upper Case Vowel
    uppercaseVowel=(c=='A'|| c=='E'|| c=='I'|| c=='O'||c=='U');

    if(lowercaseVowel || uppercaseVowel){
        cout<<" Character is Vowel:"<<c<<endl;
    }
    else
    cout<<" Character is Consonant:"<<c<<endl;

    return 0;
}