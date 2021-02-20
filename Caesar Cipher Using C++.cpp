#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a, key, i=0, nChar;
    cout<<"Enter key : ";
    cin>>key;
    cout<<"Choose action : \n 1. Encryption\n 2. Decryption";
    cout<<"\nEnter Input : ";
    cin>>a;

    key = key%26; //key should be valid only for alphabets i.e. 26. key=3 is same as key=29

    //Encryption--------------------------------------------------------------
    if(a==1){
        string pText = "Hello. This is CPP Programming. And you are here for Caesar Cipher."; //string to be encrypted

        cout<<"\nThe Cipher-text is : ";
        for(i=0;i<pText.length();i++){
            if(isupper(pText[i])){  //isupper() checks whether the character is uppercase or not
                nChar=int(pText[i]+key-65)%26;  //converts character in ascii value
                //%26 is done to make sure that the  cipher-text doesn't exceeds 'Z'
                cout<<char(nChar+65);   //adds the ascii value of char to the ascii value of 'A' and then prints the character
            }
            else if(pText[i]==' '){
                cout<<" ";  //to make sure the compiler doesn't omits the whitespaces
            }
            else if(pText[i]=='.' || pText[i]==',' || pText[i]=='!'){
                cout<<pText[i];
            }
            else{ //for lowercase letters
                nChar = int(pText[i]+key-97)%26;    //same process as above but for ascii values of lowercase alphabets
                cout<<char(nChar+97); //97 is ascii vlue of 'a'
            }
        }
        cout<<endl;
    }

    //Decryption--------------------------------------------------------------
    else if(a==2){
        string cText = "Mjqqt. Ymnx nx HUU Uwtlwfrrnsl. Fsi dtz fwj mjwj ktw Hfjxfw Hnumjw."; //string to be decrypted

        key=26-key; //key is subtracted to 26 as to make sure that the process runs opposite, same as '%26'
        cout<<"\nThe Plain-text is : ";

        for(i=0;i<cText.length();i++){
            if(isupper(cText[i])){
                nChar=int(cText[i]+key-65)%26;
                cout<<char(nChar+65);
            }
            else if(cText[i]==' '){
                cout<<" ";
            }
            else if(cText[i]=='.' || cText[i]==',' || cText[i]=='!'){
                cout<<cText[i];
            }
            else{
                nChar = int(cText[i]+key-97)%26;
                cout<<char(nChar+97);
            }
        }
        cout<<endl;
    }
    else{
        cout<<"Invalid Input";
    }
}
