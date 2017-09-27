//Created by: Adam Ramirez 
//Created on: 9/26/2017
//Description: Lab 2.3 - Function input
//Citation and References: http://www.cplusplus.com/reference/cstdlib/rand/ used for the random generator function, 
//                         used this to help with swap function http://www.cs.utsa.edu/~wagner/CS2213/swap/swap.html

#include <iostream>
#include <stdlib.h> //needed for srand, rand functions
#include <algorithm> //needed for swap function

using namespace std;

   int SwapNum (int& num1, int& num2){          //Swap function, has num1 and num2 as my passover variables
    int temp_num1 = 0;          //defining my temporary save space
    
    
    
    temp_num1 = num1;           //saves what is entered for num1 into temp_num1
    num1 = num2;                //saves num2 in the num1 slot
    num2 = temp_num1;           //saves the original num1 which was saved in the temp_num1 into the num2 slot
}


int NumGenerator(int num1, int num2){
    
   srand (time(0));                                     //is needed for the rand to work below
   
   SwapNum(num1, num2);
   
    return (rand() % ((num1 - num2)) + num2);       //Gets me the random number
    
    
};


int main(){
    int num1;           //declaring my variables for the function
    int num2;
    
    cout << "Please enter a small number: ";        //defining the small number num1
    cin >> num1;
   
   cout << "Please enter the large number: ";       //defining the large number num2
   cin >> num2;
   
    
    cout << "Your random number is " << NumGenerator(num1, num2) << "."; //running random number generator in the cout with the num1 and num2 variables
}

/*
Expected Results:
Please enter a small number: 1
Please enter the large number: 10
Your random number is 5.
*/
