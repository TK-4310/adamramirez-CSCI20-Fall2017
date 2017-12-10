//Created by: Adam Ramirez
//Created on: 12/05/2017
//Description: Assignment 5.0 - ELO Calculator this should be able to calculate a players results of playing while keeping a log of the results
//Citation and References:

#include <iostream> //Libraries
#include <string>
#include<fstream>
#include<ios>
#include <iomanip>
using namespace std;

int main(){
 string first_name;
 string last_name;
 
 string first_name2;
 string last_name2;
 
 char newb;
 char newb2;
 
 double player_elo;
 double player2_elo;
 double score_difference;
 
 int numb_games;
 int numb_games2;
 
    fstream inFS;
    
    inFS.open("players.txt");
    
 
 //user input current ELO and name
 cout << "Please enter your Name: ";
 cin >> first_name;
 cin >> last_name;
 
 cout << "Are you a new Player?: y/n ";
 cin >> newb;
 
 if (newb == 'y'){
     player_elo = 800;
 }
 else {
     cout << "Please Enter Current Score: ";
     cin >> player_elo;
 }
 
 cout << "Please Enter Player 2's Name: ";
 cin >> first_name2;
 cin >> last_name2;
 
 cout << "Is Player 2 New?: y/n ";
 cin >> newb2;
 
 if (newb2 == 'y'){
     player2_elo = 800;
 }
 else {
     cout << "Please Enter Current Score: ";
     cin >> player2_elo;
 }
    //cout << first_name << " " << last_name << " Player Score: " << player_elo << endl;   //Test Player 1
    //cout << first_name2 << " " << last_name2 << " Player Score: " << player2_elo << endl;   //Test Player 2
    inFS << first_name << " " << last_name << " Player Score: " << player_elo << endl;   //Test Player 1
    inFS << first_name2 << " " << last_name2 << " Player Score: " << player2_elo << endl;   //Test Player 2
    
    
    cout << "Number of Games Played by Player 1: ";
    cin >> numb_games;
    cout << "Number of Games Played by Player 2: ";
    cin >> numb_games2;
    
    
   inFS.close(); 
}