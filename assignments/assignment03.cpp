//Created by: Adam Ramirez
//Created on: 10/26/2017
//Description: Assignment 3.0, Creating a game. I chose Pig
//Citation and References: https://en.wikipedia.org/wiki/Pig_(dice_game)

#include <iostream>
using namespace std;

int NumGenerator(){                         //Random number creator for the game, computer's number to be guessed    
    
    srand (time(0));                         //is needed for the rand to work below
    return (rand() % ((1 - 6)) + 1);       //Gets me the random number
    
    
};  //end NumGenerator

class Player{       //Player class to hold data
    private:
    int score_;
    
    public:
    void SetPlayerScore(int temp_score = 0);
    int GetPlayerScore();
    
};      //End player class

class Computer{ //Computer class begins
    private:
    int computer_score_;
    
    public:
    void SetComputerScore(int temp_comp_score = 0);
    int GetComputerScore();
    
    void Print1(){
        
        cout << "Current Computer Score: " << computer_score_ << endl;
        cout << " " << endl;
    }
};

void Player::SetPlayerScore(int temp_score){    // Gets me my/player score
    score_ = temp_score;
    
}

void Computer::SetComputerScore(int temp_comp_score){   //Computer game play
    int score_comp = 0;
    
    while (score_comp < 10){            //Meant to make the computer stop after getggin 10 or more points
        score_comp = NumGenerator();
    
        if ((score_comp >= 2) && (score_comp < 10)) //Was just score_comp >= 2 added score_comp < 10 to see if it would make a difference
        {   
            
            temp_comp_score = temp_comp_score + score_comp; //adds up computer score
            
        }
        else{
            score_comp = 0; //resets computer turn score if 1 is rolled
            temp_comp_score = temp_comp_score + score_comp; //adds up computer if computer rolls 1
        }
        computer_score_ = temp_comp_score + score_comp;
}
} //end SetComputerScore

int Player::GetPlayerScore(){   //Gets me my(player) score
    return score_;
}

int Computer::GetComputerScore(){   //Gets Computer Score
    return computer_score_;
}



int main(){
    Player player1;
    Computer computer1;
    
    int temp_roll = 0;      //Setting my temp values and continue value
    int player_roll = 0;
    char continue1 = 'y';
   
   while (( continue1 == 'y' ) && (( computer1.GetComputerScore() < 100 ) || ( player1.GetPlayerScore() < 100 )))
   {    
   
        cout << "Press y to Roll " << endl; //continue message
        cin >> continue1;
        
        temp_roll = NumGenerator(); //dice roll
        
        if (temp_roll >= 2){    //when dice roll is more than 1 less than 7
            
            cout << "Your Roll " << temp_roll << endl;  //output the player roll
            player_roll = temp_roll + player_roll;      //adds up player roll
            
            player1.SetPlayerScore(player_roll);    //sets the player roll in the class
            
            cout << "Player Current Score: " << player1.GetPlayerScore() << endl;   //outputs the players current score
        }
        else {                                  //If player rolls a 1
            temp_roll = 0;                      //Resets values
            player_roll = 0;
            
            player_roll = temp_roll + player_roll;  //Adds the 0 to the total
            
            player1.SetPlayerScore(player_roll);    //Sets the total
            cout << "Your Roll 1" << endl;          //outputs the roll of 1
            cout << "Your Current Score: " << player1.GetPlayerScore() << endl; //outputs the current score
           
            temp_roll = NumGenerator();             //Starts the roll for the computer to trigger it to start
            computer1.SetComputerScore(temp_roll);  //Runs the computer class to get the computers score
            cout << computer1.GetComputerScore() << endl;   //Outputs the computers score

        }
            
   }    //End while loop
   
   if ( player1.GetPlayerScore() >= 100 ){  //if the player wins output
       cout << "Player Wins!";
   } 
   else if (computer1.GetComputerScore() >= 100 ){  //computer wins output
       cout << "Computer Wins!";
   }
   else if (continue1 != 'y' && ( player1.GetPlayerScore() >= computer1.GetComputerScore() ) ){ //player ends the game and has more points
       cout << "Player Wins!";
   }
   else if (continue1 != 'y' && ( player1.GetPlayerScore() < computer1.GetComputerScore() ) ){ //player ends the game computer has more points
       cout << "Computer Wins!";
   }
   
    
} //end main