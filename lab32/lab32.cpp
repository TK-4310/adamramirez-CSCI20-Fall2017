//Created by: Adam Ramirez
//Created on: 10/12/2017
//Description: Lab 3.2 - Switch Case
//Citation and References:

#include <iostream>
#include <string>

using namespace std;




int main () {
    int maritial_status;
    double wages_gross;
    double taxes;
    double wages_withheld;
    double tax_refund;
    double owed_taxes;
    
    string name1;
    string name2;
    
    cout << "what is your first and last name?";
    cin >> name1 >> name2;
    
    cout << "Are you Married or Single? 1 for single 2 for Married: ";
    cin >> maritial_status;
    
    cout << "What are your gross wages?";
    cin >> wages_gross;
    
    cout << "How much was Withheld?";
    cin >> wages_withheld;
    
    switch(maritial_status){
        case 1:
            wages_gross = ((wages_gross - 4050) - 6350);
            if (wages_gross > 0){
                
            if ((wages_gross >= 0) && (wages_gross <= 9325)){
                
                taxes = wages_gross *0.1;
                
            }
            else if ((wages_gross >=9326) && (wages_gross <=37950) ){
                
                taxes = (((wages_gross - 9325) * 0.15) + 935.5);
                
            }
            else if ((wages_gross >= 37951) && (wages_gross <= 91900)){
                
                taxes = (((wages_gross - 37950) * 0.25) + 5226.25);
                
            }
            else if ((wages_gross >= 91901) && (wages_gross <= 191650)){
                
                taxes = (((wages_gross - 91900) * 0.28) + 18713.75);
            }
            else if ((wages_gross >= 191651) && (wages_gross <= 416700)){
                
                taxes = (((wages_gross - 191650) * 0.33) + 46643.75);
                
            }
            else if (wages_gross > 416700){
                
                taxes = (((wages_gross - 416700) * 0.396) + 120910.25);
            }
                
            }
            else{
                taxes = 0;
            }
        
        case 2:
        
            wages_gross = ((wages_gross - 12700) - (4050 * 2));
            if (wages_gross > 0){
                
            
             if ((wages_gross >= 0) && (wages_gross <= 18650)){
                
                taxes = wages_gross *0.1;
                
            }
            else if ((wages_gross >=18651) && (wages_gross <=75900) ){
                
                taxes = (((wages_gross - 18650) * 0.15) + 1865);
                
            }
            else if ((wages_gross >= 75901) && (wages_gross <= 153100)){
                
                taxes = (((wages_gross - 75900) * 0.25) + 10452.5);
                
            }
            else if ((wages_gross >= 153101) && (wages_gross <= 233350)){
                
                taxes = (((wages_gross - 150100) * 0.28) + 29752.5);
            }
            else if ((wages_gross >= 233351) && (wages_gross <= 416700)){
                
                taxes = (((wages_gross - 233350) * 0.33) + 52222.5);
                
            }
            else if (wages_gross > 416700){
                
                taxes = (((wages_gross - 470700) * 0.396) + 470700);
            }
            }   //end first if
            else {
                taxes = 0;
            }
    
        if (taxes > wages_withheld){
            owed_taxes = wages_withheld - taxes;
            
            cout << "Name: " << name1 << " " << name2 << endl;
            cout << "Total Gross Adjusted Income: " << wages_gross << endl;
            cout << "Total taxes owed: " << taxes << endl;
            cout << name1 << " " << name2 << " " << "is entitled to a REFUND of -$" << owed_taxes;
            
        }
        else {
            owed_taxes = taxes - wages_withheld;
            
            cout << "Name: " << name1 << " " << name2 << endl;
            cout << "Total Gross Adjusted Income: " << wages_gross << endl;
            cout << "Total taxes owed: " << taxes << endl;
            cout << name1 << " " << name2 << " " << "is entitled to a REFUND of $" << owed_taxes;
        }
                
            }
        
    }//end main
    
