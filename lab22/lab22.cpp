//Created by: Adam Ramirez 
//Created on: 9/21/2017
//Description: Lab 2.2 - Writing Functions
//Citation and References: http://www.cplusplus.com/reference/cstdlib/rand/ used this site to make sure I was using the rand functions correctly 
//                         http://www.cplusplus.com/reference/cstdlib/rand/

#include <iostream>
#include <stdlib.h> //needed for srand, rand functions

using namespace std;

int num_generator(){                                    //function to perform random number generation
   srand (time(0)); 
   
    int number = (rand() % 100) + 1;
    cout << "Your random number is " << number << ".";
    
    
};



int main(){
    
    num_generator();      //Calls on function above
    
 
}
//Your random number is 97.
