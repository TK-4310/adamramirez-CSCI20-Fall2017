//Created by: Adam Ramirez 
//Created on: 9/05/2017
//Description: Floating Point
//Citation and References: 
    


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    double fee = 0.109;
    double cash;
    double cash2;
    int change_in;
    
    cout << "How much change do you have?" << endl;
    cin >> change_in;
    cout << "You have entered " << change_in << " cents." << endl;
    
    quarters = change_in / 25;   //Quarter conversion.
    change_in = change_in % 25;
    
    dimes = change_in / 10;  //dime conversion.
    change_in = change_in % 10;
    
    nickels = change_in / 5;  //nickel conversion.
    change_in = change_in % 5;
    
    pennies = change_in / 1; //penny conversion.
    change_in = change_in % 1;
    
    cash = (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05) + (pennies * 0.01); //Gives me the amount of dollars the user is converting.
    cash2 = (fee * cash);
    cash2 = cash - cash2; //Gives me the end ammount of cash the user is about to receive.
    
    
    cout << "You have " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies." << endl;
    cout << "Your total is " << "$" << cash;
    cout << ". After the fee you receive " << "$" << setprecision(2) << cash2 << " in cash.";
    
}