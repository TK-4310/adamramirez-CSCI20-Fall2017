//Created by: Adam Ramirez
//Created on: 10/17/2017
//Description: Lab 3.3 - Using loops create a guessing game
//Citation and References: zybooks for swtich formatting

#include <iostream>
#include <string>
#include <stdlib.h> //needed for srand, rand functions
#include <algorithm> //needed for swap function

using namespace std;

int NumGenerator(){
    
   srand (time(0));                                     //is needed for the rand to work below
   

   
    return (rand() % ((1 - 50)) + 1);       //Gets me the random number
    
    
};




int main(){
    int i = 0;
    int guess_int = 0;
    int winning_num = NumGenerator();
    char play_again = 'y';

    while (play_again == 'y'){
        
        for (i = 10; i >0; --i){
    
        
            cout << "Make a guess between 1 and 50: ";
            cin >> guess_int;
            cout << " " << endl;
        
            if (((guess_int < 0) || (guess_int > 50)) && ( i > 0)){
        
            cout << "Guesses Remaining: " << i << endl;     
            cout << "Make a guess between 1 and 50: ";
            cin >> guess_int;
            cout << " " << endl;
            }

    
            else if ((guess_int > winning_num) && (i > 0)){
            cout << "Guesses Remaining: " << i << endl;
            cout << "Too High" << endl;
        
            }
            else if ((guess_int < winning_num) && (i > 0)){
            cout << "Guesses Remaining: " << i << endl;
            
            cout << "Too Low" << endl;
            
            }
            else if ((guess_int == winning_num) && (i > 0)){
            cout << "Just Right: " << guess_int << endl;
            cout << "Guesses that were Remaining: " << i << endl;
            cout << " " << endl;
            cout << "Play Again? y/n: ";
            cin >> play_again;
            i = 0;
            
        }
            else if (i == 0){
            cout << "Game Over" << endl;
            cout << " " << endl;
            return 0;
            }
        
    } //end for loop
    cout << " " << endl;
    cout << "Game Over";
    cout << " " << endl;
    cout << "Play Again? y/n: ";
    cin >> play_again;
    
    } //end while loop 
    return 0;
} //end main

  
