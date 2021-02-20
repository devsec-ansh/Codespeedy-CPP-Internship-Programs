#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a, i=0, k, nChar;
    string key;
    cout<<"Enter key in lowercase format: ";
    cin>>key;
    int g;

    string pText = "Hello. This is CPP Programming. And you are here for Vigenere Cipher.";
    int keyLen=key.length();
    int j=keyLen;

    cout<<"\nThe Cipher text is : ";
    for(i=0;i<pText.length();i++){
        if(j==keyLen){  //to make sure that key repeats itself if the plain-text is larger than key
            j=0;
        }

        k = int(key[j])-97;     //in key, character a is counted as 0, b=1 and so on

        if(pText[i]==' '){  //for blank spaces
            cout<<" ";
        }
        else if(pText[i]=='.' || pText[i]==',' || pText[i]=='!'){ //to neglect invalid symbols
            cout<<pText[i];
        }
        else if(isupper(pText[i])){ //for uppercase letters in plaintext
            int p = int(pText[i])-65;
            cout<<char(((k+p)%26) + 65);
            j++;
        }
        else if(islower(pText[i])){     //for lowercase letters in plaintext
            int p = int(pText[i])-97;
            cout<< char(((k+p)%26) + 97);
            j++;
        }
    }
    cout<<endl;

}
