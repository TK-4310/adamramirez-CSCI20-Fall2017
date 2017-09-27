//Created by: Adam Ramirez 
//Created on: 9/26/2017
//Description: Lab 2.3 - Function input
//Citation and References: 

#include <iostream>
#include <stdlib.h> //needed for srand, rand functions
#include <algorithm> //needed for swap function

using namespace std;

   int SwapNum (int& num1, int& num2){
    int temp_num1 = 0;
    
    
    
    temp_num1 = num1;
    num1 = num2;
    num2 = temp_num1;
}


int NumGenerator(int num1, int num2){
    
   srand (time(0));                                     //is needed for the rand to work below
   
   SwapNum(num1, num2);
   
    return (rand() % ((num1 - num2)) + num2);       //Gets me the random number
    
    
};


int main(){
    int num1;
    int num2;
    
    cout << "Please enter a small number: ";
    cin >> num1;
   
   cout << "Please enter the large number: ";
   cin >> num2;
   
    
    cout << "Your random number is " << NumGenerator(num1, num2) << ".";
}