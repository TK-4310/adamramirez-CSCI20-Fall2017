//Created by: Adam Ramirez
//Created on: 10/17/2017
//Description: Lab 3.3 - Using loops create a guessing game
//Citation and References: 

#include <iostream>
#include <string>
#include <stdlib.h> //needed for srand, rand functions
#include <algorithm> //needed for swap function

using namespace std;

int NumGenerator(){                         //Random number creator for the game, computer's number to be guessed    
    
    srand (time(0));                         //is needed for the rand to work below
    return (rand() % ((1 - 50)) + 1);       //Gets me the random number
    
    
};  //end NumGenerator


int main(){
    int i = 0;      //define for count of turns taken
    int guess_int = 0;  //define for user's guess
    char play_again = 'y';  //character for user to use to keep playing

    while (play_again == 'y'){  //beginning of loop as a whole, as long as play_again is y player can continue playing
        i = 0;
        int winning_num = NumGenerator();   //computer's winning number that needs to be matched
        
        for (i = 10; i >0; --i){
    
        
            cout << "Make a guess between 1 and 50: ";  //Gets user's number input, first guess
            cin >> guess_int;
            cout << " " << endl;
        
            if (((guess_int < 0) || (guess_int > 50)) && ( i > 0)){ //if user selects a number outside of 1-50 and lose a turn
        
            cout << "Guesses Remaining: " << i << endl;     //output for guesses remaining after first guess
            cout << "Make a guess between 1 and 50: ";      
            cin >> guess_int;
            cout << " " << endl;
            }

    
            else if ((guess_int > winning_num) && (i > 0)){ //if guess is too high
            cout << "Guesses Remaining: " << i << endl;
            cout << "Too High" << endl;
        
            }
            else if ((guess_int < winning_num) && (i > 0)){ //if guess is too low
            cout << "Guesses Remaining: " << i << endl;
            
            cout << "Too Low" << endl;
            
            }
            else if ((guess_int == winning_num) && (i > 0)){    //If guess is correct
            cout << "Just Right: " << guess_int << endl;
            cout << "Guesses that were Remaining: " << i << endl;
            cout << " " << endl;

            i = 0;  //resets counter to 0 so it will set back to 10 when it begins again if user select's 'y'
            
        }
        
        
    } //end for loop
    cout << " " << endl;                        //When game is over through either not being able to guess the number
    cout << "Guesses Remaining: " << i << endl; //or when the player guesses correct it says game over and asks if they want to play again
    cout << "Game Over";
    cout << " " << endl;
    cout << "Play Again? y/n: ";
    cin >> play_again;
    
    } //end while loop 
    return 0;   //if they don't want to play again game ends here
} //end main

  
/*Expected Output:
Make a guess between 1 and 50: 50
 
Guesses Remaining: 10
Too High
Make a guess between 1 and 50: 45
 
Guesses Remaining: 9
Too High
Make a guess between 1 and 50: 25
 
Guesses Remaining: 8
Too High
Make a guess between 1 and 50: 15
 
Guesses Remaining: 7
Too High
Make a guess between 1 and 50: 10
 
Guesses Remaining: 6
Too High
Make a guess between 1 and 50: 5
 
Guesses Remaining: 5
Too Low
Make a guess between 1 and 50: 6
 
Guesses Remaining: 4
Too Low
Make a guess between 1 and 50: 7
 
Guesses Remaining: 3
Too Low
Make a guess between 1 and 50: 8
 
Just Right: 8
Guesses that were Remaining: 2
 
 
Guesses Remaining: -1
Game Over 
Play Again? y/n: n


Process exited with code: 0
*/
