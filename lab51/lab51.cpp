//Created by: Adam Ramirez
//Created on: 11/28/2017
//Description: Lab 5.1 Pointers - Describe the bellor 
//Citation and References:

#include <iostream> //Libraries
#include <iostream> //not needed duplicate
#include <cstring>  //cstring library
using namespace std;

int main() {
    int nameLength = 0;         //declaring and creating integer holder nameLength 
    char * name = new char[];   //declaring and creating character array name
                                //Missing number in []

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;    //User inputs a 10 letter word or less into array name

    char * head  = name;    //sets character head equal to users input in name
    char * tail = name;     //sets character tail to users input for name
    nameLength = strlen(*name); //gets and saves the string length into nameLength

    cout << "Your word is " << firststr << endl;//prints out your word is

    if (nameLength<10)  //if the nameLength is less than 10 characters
    {
         while (*head != '\0')//as long as head is not at the end of the the file
         {                      //error would be that I don't see any files that are being opened
                cout << *head;  //prints out what data is in the location of head
                head++;         //adds one to head
         }                      //continues as long as head is not at the end of the file
     }
     else       //If nameLength is more than or equal to 10 it outputs the below
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;  //prints out a blank line for spacing in the output

     tail = &name[strlen(name) - 1];    //tail equaling the name data location

     if (nameLength < 10)   //if nameLength is less than 10 perform the below
     {
          while (tail != name)//as long as character tail does not equal character of name continue with loop
          {
                 cout << *tail;//print out what is in the location of tail
                 tail--;        //subract one from tail, or move one down
          }
     }
     cout << endl;  //adds line for spacing in output

     head = name;   //sets head to name 
     tail = &name[strlen(name) - 1];    //sets tail to name data location

     head++;    //adds one to head
     tail--;    //subtracts one from tail

     if (*head == *tail)    //if data in head equals data in tail then print out It is an palindrome!
     {
         cout << "It is an palindrome!" << endl;
     }
     else //if head and tail do not equal eachother print out It is not an palindrome
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; //end program
}
