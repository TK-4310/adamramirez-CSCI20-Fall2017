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
    int ford_total;
    stock fordm;
    
    cout << "Please enter the total ammount of share you have of " << stockname.fordm << ": ";       //Gives me information for Ford Motor company stock total
    cin >> number_of_shares.fordM;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> number_of_shares.fordm;
    ford_total = current_share_price.fordm * num_shares.fordm;
    
    int albertsn_total;
    stock_name albertsn;
    cout << "Please enter the total ammount of shares you have of " << stockname.albertsn << ": ";
    cin >> number_of_shares.albertsn;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> number_of_shares.albertsn;
    albertsn_total = current_share_price.albertsn * num_shares.albertsn;
    
    int aapl_total;
    stock_name aapl;
    cout << "Please enter the total ammount of shares you have of " << stockname.aapl << ": ";
    cin >> number_of_shares.aapl;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> number_of_shares.aapl;
    aapl_total = current_share_price.aapl * num_shares.aapl;
    
    int tsla_total;
    stock_name tsla;
    cout << "Please enter the total ammount of shares you have of " << stockname.tsla << ": ";
    cin >> number_of_shares.tsla;
    cout << " Please enter the value of the share: " ;                                                  //
    cin >> number_of_shares.tsla;
    tsla_total = current_share_price.tsla * num_shares.tsla;   
    
    cout << "Stock Name      No of Shares     Current Value     Total Value" << endl;
    cout << "----------      ------------     -------------     -----------" << endl;
    cout << stock_name.fordm << "                    " << number_of_shares.fordm << "               " << "18.76             " << ford_total << endl;
    cout << "Albertsn            " << number_of_shares.albertsn << "               " << "34.39             " << albertsn_total << endl;
    cout << "AAPLT               " << number_of_shares.aapl << "               " << "145.91            " << aapl_total << endl;
    cout << "TSLA                " << number_of_shares.tsla << "               " << "375.64            " << tsla_total << endl;
    
    
}