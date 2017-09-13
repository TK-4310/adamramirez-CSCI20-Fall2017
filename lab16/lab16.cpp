//Created by: Adam Ramirez 
//Created on: 9/12/2017
//Description: Objects
//Citation and References: Example used Monsters code by April Browne

#include <iostream>
#include <string>
using namespace std;

struct stock {
 string stock_name;             //struct for the variables or stock name, sector, share price and price of each share
 string sector;
 double current_share_price;
 int number_of_shares;
    
};



int main()
{
    double  ford_total;
    double albertsn_total;
    double aapl_total;
    double tsla_total;
    double wfc_total;
    double port_total;
    
    stock fordm;                            //Begin defining Objects
    fordm.stock_name = "FordM";
    
    stock albertsn;
    albertsn.stock_name = "Albertsn";
    
    stock aapl;
    aapl.stock_name = "AAPL";
    
    stock tsla;
    tsla.stock_name = "TSLA";
    
    stock wfc;
    wfc.stock_name = "WFC";
    
    stock portfolio;
    portfolio.stock_name = "Total_Portfolio";       //End definging objects: Ford, Albertsons, Apple, Tesla and Wells Fargo
    
    cout << "Please enter the total ammount of shares you have of " << fordm.stock_name << ": ";      //Beginning getting number of stocks for orders and price of each share.
    cin >> fordm.number_of_shares;
    cout << " Please enter the value of the share: ";                                                  
    cin >> fordm.current_share_price;
    
    cout << "Please enter the total ammount of shares you have of " << albertsn.stock_name << ": ";
    cin >> albertsn.number_of_shares;
    cout << " Please enter the value of the share: ";                                                  
    cin >> albertsn.current_share_price;
    
    cout << "Please enter the total ammount of shares you have of " << aapl.stock_name << ": ";
    cin >> aapl.number_of_shares;
    cout << " Please enter the value of the share: ";                                                  
    cin >> aapl.current_share_price;
    
    cout << "Please enter the total ammount of shares you have of " << tsla.stock_name << ": ";
    cin >> tsla.number_of_shares;
    cout << " Please enter the value of the share: ";                                                  
    cin >> tsla.current_share_price;

    
    cout << "Please enter the total ammount of shares you have of " << wfc.stock_name << ": ";
    cin >> wfc.number_of_shares;
    cout << " Please enter the value of the share: ";                                                  
    cin >> wfc.current_share_price;
    cout << " " << endl;                                                                            //End of stock number of shares and price per share order as follows Ford, Albertsons, Apple, Tesla and Wells Fargo
    
    ford_total = fordm.current_share_price * fordm.number_of_shares;                //Math to get the total value or stocks at their current prices
    albertsn_total = albertsn.current_share_price * albertsn.number_of_shares;
    aapl_total = aapl.current_share_price * aapl.number_of_shares;
    tsla_total = tsla.current_share_price * tsla.number_of_shares;  
    wfc_total = wfc.current_share_price * wfc.number_of_shares;
    port_total = ford_total + albertsn_total + aapl_total + tsla_total + wfc_total; //End Math
    
    cout << "Stock Name      No of Shares     Current Value     Total Value" << endl;                                                                                           //Output for table to display values entered and  
    cout << "----------      ------------     -------------     -----------" << endl;                                                                                           //total values of shares
    cout << fordm.stock_name << "                " << fordm.number_of_shares << "               " << fordm.current_share_price << "          " << ford_total << endl;
    cout << albertsn.stock_name << "            " << albertsn.number_of_shares << "               " << albertsn.current_share_price << "          " << albertsn_total << endl;
    cout << aapl.stock_name << "                 " << aapl.number_of_shares << "               " << aapl.current_share_price << "          " << aapl_total << endl;
    cout << tsla.stock_name << "                " << tsla.number_of_shares << "               " << tsla.current_share_price << "          " << tsla_total << endl;
    cout << wfc.stock_name << "                " << wfc.number_of_shares << "               " << wfc.current_share_price << "          " << wfc_total << endl;
    cout << " " << endl;
    cout << portfolio.stock_name << ": " << port_total;                                                                                                                         //End of output, ends with portfolio total
    
}

//If used correctly with the provided inputs in the assign this should be the result
//Stock Name      No of Shares     Current Value     Total Value
//----------      ------------     -------------     -----------
//FordM                87               18.76          1632.12
//Albertsn            542               34.39          18639.4
//AAPL                 5               145.91          729.55
//TSLA                50               375.64         18782
//WFC                1368               53.02         72531.4
// 
//Total_Portfolio: 112314