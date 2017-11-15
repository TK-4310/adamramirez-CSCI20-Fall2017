//Created by: Adam Ramirez
//Created on: 11/14/2017
//Description: Lab 4.5 - Program is responsible for creating user names for a new website
//      it should accept 10 characters for the first name and 20 for the last name.
//      Tells the user if the name is larger than the max size. It should also determine
//      if the names are the same and provide a warning. After these checks it will create 3 exampels
//Citation and References:

#include<iostream>
#include<string>
using namespace std;



main(){
    string first_name;
    string last_name;
    string combo_name;
    
    cout << "Enter First Name Max 10 Characters: " << endl; //First name input
    cin >> first_name;
    cout << "Enter Last Name Max 20 Characters: " << endl;  //Last name input
    cin >> last_name;
    
    combo_name = first_name + last_name;    //first and last name merged together
    
    //cout << first_name.at(0);
    
    if (first_name.length() > 10){      //If statement check for first name length
        
        cout << "First Name is Too Long!" << endl;
        return 0;
    }
    else if (last_name.length() > 20){  //Last name statement check for last name length
        
        cout << "Last Name is Too Long!" << endl;
        
        return 0;
    }
    else if (first_name == last_name ){ //Check if first and last name are the same
        
        cout << " First and Last name are the Same!" << endl;
        
        return 0;
        
    }
    
    cout << first_name.substr(0, 2) << last_name << endl;   //outputs first two letters of name and lastname
    cout << combo_name << endl;                             //outputs combination of first and last name
    cout << first_name.substr(0, 1) << last_name << endl;   //outputs first letter of first name and last name
    
    // cout << first_name << endl;  //Testing output
    // cout << last_name << endl;
    // cout << combo_name << endl;
}
// Expected Output:
// Enter First Name Max 10 Characters: 
// Adam
// Enter Last Name Max 20 Characters: 
// Ramirez
// AdRamirez
// AdamRamirez
// ARamirez