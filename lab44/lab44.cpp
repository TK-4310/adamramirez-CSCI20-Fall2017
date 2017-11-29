//Created by: Adam Ramirez
//Created on: 11/07/2017
//Description: Lab 4.4 - C Strings, is going to create user names for a new website, it should accept first name of up to 10 charactoers
//                  and a last name of up to 20 characters. It will tell the user if the first name is larger than the max
//                  it should also determine if the names are the same (first and last) and output a warning
//                  After these checks it should create 3 different username options adramirez; adamramirez; aramirez
//Citation and References:


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



main(){
    char user_first_name[10];
    char user_last_name[20];
    char user_name1[30];
    char user_name2[30];
    
    
    
    
    cout << "Please enter your First Name (Limit of 10 Characters)" << endl;
    cin >> user_first_name;
    cout << "Please enter your Last Name (Limit of 20 Characters)" << endl;
    cin >> user_last_name;
    // cout << " " << endl;
    
    
    if (strlen(user_first_name) > 10){                          //Checks if First name is too long
        cout << "Warning: First Name Has Too many Characters!";
        return 0;
    }
    if (strlen(user_last_name) > 20){                           //Checks if Last Name is too long
        
        cout << "Warning: Last Name Has Too many Characters!";
        return 0;
    }
    
    if (strcmp (user_first_name, user_last_name) == 0 )         //Checks if First and Last name are the same
    {
        
        cout << "Warning!: First and Last Name are the same!";
        return 0;
    }
   string text_area;

    strncat(user_name1, user_first_name, 2);        //Copies the first 2 characters from first name to user name 1
    strncat(user_name2, user_first_name, 1);        //Copies the first character from user first name to user_name2
    
    cout << user_name1 << user_last_name << endl;       //prints out first two letters of first name and lastname
    cout << user_first_name << user_last_name << endl;  //prints out combination of first and last name
    cout << user_name2 << user_last_name << endl;       //prints out first letter of first name and last name
   
        
    }//end main