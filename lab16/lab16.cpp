//Created by: Adam Ramirez 
//Created on: 9/12/2017
//Description: Objects
//Citation and References:

#include <iostream>
#include <string>
using namespace std;

struct stock {
 string stock_name;
 string sector;
 int current_share_price;
 int number_of_shares;
    
};



int main()
{
    
    cout << "Please enter the total ammount of share you have of " << stockname.FordM << ": ";       //Gives me information for Ford Motor company stock total
    cin >> numbah.share_amount;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> numbah.ford_share_value;
    numbah.ford_total = numbah.share_amount * numbah.ford_share_value;                             //
    
    cout << "Please enter the total ammount of shares you have of " << stockname.Albertsn << ": ";
    cin >> numbah.num_shares2;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> numbah.albertsn_share_value;
    numbah.albertsn_total = numbah.share_amount2 * numbah.albertsn_share_value;
    
    cout << "Please enter the total ammount of shares you have of " << stockname.AAPL << ": ";
    cin >> numbah.num_shares3;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> numbah.aapl_share_value;
    numbah.aapl_total = numbah.share_amount3 * numbah.aapl_share_value;
    
    cout << "Please enter the total ammount of shares you have of " << stockname.TSLA << ": ";
    cin >> numbah.num_shares4;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> numbah.tsla_share_value;
    numbah.tsla_total = numbah.share_amount4 * numbah.tsla_share_value;    
    
    cout << "Stock Name      No of Shares     Current Value     Total Value" << endl;
    cout << "----------      ------------     -------------     -----------" << endl;
    cout << "FordM               " << numbah.num_shares << "               " << "18.76             " << numbah.total_value << endl;
    cout << "Albertsn            " << numbah.num_shares2 << "               " << "34.39             " << numbah.total_value2 << endl;
    cout << "AAPLT               " << numbah.num_shares3 << "               " << "145.91            " << numbah.total_value3 << endl;
    cout << "TSLA                " << numbah.num_shares4 << "               " << "375.64            " << numbah.total_value4 << endl;
    
    
}