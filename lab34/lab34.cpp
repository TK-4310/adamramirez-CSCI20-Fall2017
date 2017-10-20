//Created by: Adam Ramirez
//Created on: 10/19/2017
//Description: Lab 3.4 - Debugging Choose one of the provided sets of code and submit the fixed version
//                      of the code. Then discuss what techniques I used to find the bugs.
//Citation and References: 

/***************************************************
Sum of numbers 
Write a program that reads in positive integers from the user, each separated by a space, and the whole terminated by a negative number (e.g. 3 22 10 -2),and outputs the sum of the numbers entered (notincluding the terminated negative number!).***************************************************/
#include <iostream>
using namespace std; 
int main(){
        // initialization
        int num;
        int sum = 0;
        cout << "Enter numbers separated by spaces and terminated with a negative number." << endl;
        num = 0;
         // read first number
        
        
         while (num >= 0)
  {         cin >> num;
  
         if (num < 0 ){
          break;
        }
               // add in to the sum
               sum = sum + num;
                // read in next number (getting ready for next loop test)
               //cin >> sum;
               
        }
                cout << "Sum is " << sum << endl;
                return 0;
}
/*
    First I went through and cleaned up the code so that it was a little more spaced out and easier to read,
    removed some unnecessary characters and spaces then came up with adding a break which allowed it to perform the addition with the spaces
    between numbers. Also thinking back to my previous lab I realized having the cin >> num inside the loop would fix the input.

*/