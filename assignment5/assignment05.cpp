//Created by: Adam Ramirez
//Created on: 12/05/2017
//Last updated on: 12/09/2017
//Description: Assignment 5.0 - Rankings, This originally started as an ELO calculator but after spending a large ammount of my time studying the
//      ELO equation and not finding a simple way or just a way that I could implement it now I decided to change how to do my rankings. So now instead of using
//      a complex calculator I'm just using the ammount of games played and the players current record. This is just a base work that I could add to, so it could use
//      an ELO calculator in the future while keeping track of records and an updatable standings board. It currently works for a small group of people but with minor
//      alterations can be made to easily add or remove players. I tried to make sure I didn't use zybooks since I wont have access to it after the semester.
//      
//  Summery: This program compares loses of players to sort them into a player with the best record down to players with the worst record. 
//Citation and References: http://www.cplusplus.com, http://www.cplusplus.com/articles/NhA0RXSz/, https://stackoverflow.com, 

#include <iostream> //Libraries
#include <string>
#include<fstream>
#include <algorithm>
using namespace std;

int sorter(int loses[]){        //Sort function that uses loses to sort out the current rankings
    const int tot_play = 6;     //The magic, the chemical x, without this little function I would have had to find another way to perform sorting
    
    sort(loses, loses + tot_play);  //Sorts loses based on the tot_play ammount
}

int main(){
    string player[10];          //array for players first names and lastnames below
    string player_lastname[10];
    
    int loses[10];      //arrays for number of loses, copy of number of loses, number of wins and number of games
    int loses2[10];
    int wins[10];
    int numb_games[10];
    
    int j = 0;              //Used for 'for' loops
    int k = 0;
    int i = 0;
    int count = 1;          //counts were used for data input as well as data testing
    int count2 = 1;
    int total_players = 6;  //number of user, meant to be used wider when needed so there's less updating of the code with additional players
    
    bool check[10];         //boolean created to be a switch for data output
    
    ifstream inFS;          //sets ifstream, the input for a doc as inFS
    ofstream outFS;         //sets ofstream, the output to a doc as outFS
    inFS.open("players.txt");   //opens 'players.txt' file and 'standings.txt' files
    outFS.open("standings.txt");
    
    if (!inFS.is_open()){       //Incase input.txt can't be pulled
        
        cout << "Could not open file!" << endl;
        
        return 1;
    }
    while ( !inFS.eof() ){
        
        
        for (i; i < count; i++){            //Loop to pull data from players.txt file
            inFS >> player[i];
            inFS >> player_lastname[i];
            inFS >> numb_games[i];
            inFS >> wins[i];
            inFS >> loses[i];
            loses2[i] = loses[i];           //Saves copy of original loses record from players.txt
            check[i] = false;
           //cout << loses2[i] << endl;   //Test seeing if copying of lose data works
           //cout << check[i] << endl;
        }
        count++;
        
        
        //Input/Output test much success, checked that the players txt was input correctly in the arrays
        /*i--;
        for (i; i < count2; i++){
        cout << player[i] << " " << player_lastname[i] << endl;
        cout << "Number of Games: " << numb_games[i] << " Wins: " << wins[i] << " Loses: " << loses[i] << endl;
            
        }
        count2++;*/
       
    }
    
    sorter(loses);          //Runs sort function
    
    //Testing using sort arrays
    /*cout << "Test" << endl;    
    for (i = 0; i != tot_play; i++){
        cout << wins[i] << endl;
    }*/
    
    
    
    cout << "       Standings!         " << endl;   //Output of a title in console
    cout << "--------------------------" << endl;
    outFS << "       Standings!         " << endl;   //Output of title to standings.txt
    outFS << "--------------------------" << endl;
    
    //Testing output of sorting all data, found fatal flaw here with outputing correct loss order but incorrect matching data
/*    for (i = 0; i != total_players; i++){                 
        cout << "Player: " << player[i] << " " << player_lastname[i] << endl;
        cout << "Number of Games: " << numb_games[i] << endl;
        cout << "Record: " << wins[i] << " - " << loses[i] << endl;
        cout << " " << endl;
    }*/
    
    for (j = 0; j < total_players; j++){        //Below outputs the player and players data based on how many loses they have
        
        for (k = 0; k < total_players;k++){     //It also adds that data to standings.txt
            
            if ((loses[j] == loses2[k]) && (check[k] == 0)){
                cout << "Player: " << player[k] << " " << player_lastname[k] << endl;   //Prints players name
                cout << "Number of Games: " << numb_games[k] << endl;                   //The number of games played by player
                cout << "Record: " << wins[k] << " - " << loses[j] << endl;             //Wins - Loses
                cout << " " << endl;
                outFS << "Player: " << player[k] << " " << player_lastname[k] << endl;  //Outputs same data to standings text file
                outFS << "Number of Games: " << numb_games[k] << endl;
                outFS << "Record: " << wins[k] << " - " << loses[j] << endl;
                outFS << " " << endl;
                check[k] = true;                                                        //boolean to check off what's already been printed
            }   //end if statement
        }   //end inner for loop
    }   //end outter for loop

   inFS.close();        //closes files player.txt
   outFS.close();       //and standings.txt

    return 0;    
}
/*Difficulties ran into, matching the sort to the origin data, used check and userid for that
then continueing the check until all data is printed. Only printed first 2 sets of data
after some altering. Started with everyone having 3 games on contiuing my testing I added games,
wins and loses and kept running the program I would end up with an updated standings. I originally tried to use wins
to sort but that failed since it would be a decending list so I used loses which worked. Removed userid's
not needed when using current comparison. I wanted to keep the console output so the user could just keep track 
of what's being documented in the standings text and wouldn't have to check the file before making a fix. User input is all based
on the document players.txt limiting user based errors so if any errors occur it should be based on the txt file more than likely
being incorrectly filled out.

Appropriate user input/output and user error handling - user input and ouput is based on the files, error handling should be limited
    but manual tests are there to check sections
Appropriate variables including at least one array. - so many array and variables used including different data types, variable types.
    Pointing out the use of boolean as a switch.
A class with appropriate functions - Created a single class with a single function but it is the most important piece of this project
    without it this would have been much more difficult and taken significantly more time. The sort funtion created above.
A decision and/or loop - loops used for and while loops to pull data and print out my information.
File input and/or output - I created a users input doc and an output doc for users to view, also with the console output for ease of 
scanning the data being entered into the output doc.
*/