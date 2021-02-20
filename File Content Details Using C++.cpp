#include<iostream>
#include<fstream> //necessary library for file handling
#include<string.h> //necessary library for strings
using namespace std;

int main()
{
     cout<<"Enter path of file in [C:\\Users\\Acer\\Desktop\\file.txt] format. Path of file can be found using properties of file for convenience.\n";
     cout<<"Enter the path of the file : ";

     string file_path; //to store the path of the file given
     cin>>file_path;
     ifstream fin(file_path); //input stream class to operate on files.
     //'fin' is an object of ifstream class associated with file opened for input purpose
     if (fin.fail()){
            cout<<"\nFile Not Found";
     }
     else{
       cout<<"\nFile fetched.\n\n";

         int input;
         cout<<"Select action to be performed:\n";
         cout<<"Input 1 : To get details of the file content\n";
         cout<<"Input 2 : To count the number of repetition of a word in file\n\n";
         cout<<"Enter Input : ";
         cin>>input;

         //to get details of file
         if(input==1){
            string word;
            int wordCount = 0;
            int line=1; //will not count last line so initial value is 1
            char symbol; //to find symbol related to spaces and line change
            while(!fin.eof())
            {
                fin >> word;
                wordCount++;
                fin.get(symbol);
                if(symbol=='\n'){//to count no of lines i.e. whenever line is changed '\n'}
                    line++;
                }
            }
            cout<<"Number Of Lines : "<<line<<"\nTotal number of words in file : " << wordCount;
            cout<<"\n\nWarning : This does not counts extra blank lines in the file.\n";

         }

         //to count the number of occurrence of word
         else if(input==2){
            int countOccurrence=0;
            char fileContent[200];
            char word[30];

            cout<<"\nEnter the word to be counted (This counter is Case Sensitive) : ";
            cin>>word; //taking input for the word to be counte

            while(!fin.eof())
            {
                fin >> fileContent;
                if(strcmp(fileContent,word)==0){ //compares the word in string using strcmp() function and increases the counter if match found
                    countOccurrence++;
                }
            }
            cout<<"\nNumber of times the word ["<<word<<"] is repeated in file : "<<countOccurrence<<"\n";
         }

         else{
            cout<<"Invalid Input";
         }

         fin.close(); //closing file

     }

     return 0;

}
