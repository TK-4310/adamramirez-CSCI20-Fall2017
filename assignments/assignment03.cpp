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

class Player{
    private:
    int score_;
    
    public:
    void SetPlayerScore(int temp_score = 0);
    int GetPlayerScore();
    
};

class Computer{
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

void Player::SetPlayerScore(int temp_score){
    score_ = temp_score;
    
}

void Computer::SetComputerScore(int temp_comp_score){   //Computer game play
    int score_comp = 0;
    
    while (score_comp < 10){
        score_comp = NumGenerator();
    
        if ((score_comp >= 2) && (score_comp < 10))
        {   
            
            temp_comp_score = temp_comp_score + score_comp;
            
        }
        else{
            score_comp = 0;
            temp_comp_score = temp_comp_score + score_comp;
        }
        computer_score_ = temp_comp_score + score_comp;
}
} //end SetComputerScore

int Player::GetPlayerScore(){
    return score_;
}

int Computer::GetComputerScore(){
    return computer_score_;
}



int main(){
    Player player1;
    Computer computer1;
    
    int temp_roll = 0;
    int player_roll = 0;
    char continue1 = 'y';
   
   while (( continue1 == 'y' ) && (( computer1.GetComputerScore() < 100 ) || ( player1.GetPlayerScore() < 100 )))
   {    
   
        cout << "Press y to Roll " << endl;
        cin >> continue1;
        
        temp_roll = NumGenerator();
        
        if (temp_roll >= 2){
            
            cout << "Your Roll " << temp_roll << endl;
            player_roll = temp_roll + player_roll;
            
            player1.SetPlayerScore(player_roll);
            
            cout << "Player Current Score: " << player1.GetPlayerScore() << endl;
        }
        else {
            temp_roll = 0;
            player_roll = 0;
            
            player_roll = temp_roll + player_roll;
            
            player1.SetPlayerScore(player_roll);
            cout << "Your Roll 1" << endl;
            cout << "Your Current Score: " << player1.GetPlayerScore() << endl;
           
            temp_roll = NumGenerator();
            computer1.SetComputerScore(temp_roll);
            cout << computer1.GetComputerScore() << endl;

        }
            
        
        
   }
   
   if ( player1.GetPlayerScore() >= 100 ){
       cout << "Player Wins!";
   } 
   else if (computer1.GetComputerScore() >= 100 ){
       cout << "Computer Wins!";
   }
   else if (continue1 != 'y' && ( player1.GetPlayerScore() >= computer1.GetComputerScore() ) ){
       cout << "Player Wins!";
   }
   else if (continue1 != 'y' && ( player1.GetPlayerScore() <= computer1.GetComputerScore() ) ){
       cout << "Player Wins!";
   }
   
    
} //end main