//Created by: Adam Ramirez
//Created on: 10/12/2017
//Description: Lab 3.2 - Switch Case, Created a program that calculates taxes for a user who is either single or married
//Citation and References: zybooks for swtich formatting

#include <iostream>
#include <string>

using namespace std;




int main () {
    int maritial_status;            //variables for maritial status, gross wage, taxes = after calculation, wages withheld, your tax refund/owe
    double wages_gross;
    double taxes;
    double wages_withheld;
    double owed_taxes;
    
    string name1;                   //strings  for first and last name
    string name2;
    
    cout << "what is your first and last name? ";       //getting user name first and last
    cin >> name1 >> name2;
    
    cout << "Are you Married or Single? 1 for single 2 for Married: ";      //getting maritial status, user uses 1 for single 2 for married
    cin >> maritial_status;
    
    cout << "What are your gross wages? ";          //getting Gross Wages from user
    cin >> wages_gross;
    
    cout << "How much was Withheld? ";              //how much money was withheld from user through out the year
    cin >> wages_withheld;
    cout << " " << endl;
    
    switch(maritial_status){            //begin of switch between if the user is married or single, 1 being single 2 being married
        case 1:
            
            wages_gross = (6350 - (wages_gross - 4050));
            if (wages_gross > 0){
                
            if ((wages_gross > 0) && (wages_gross <= 9325)){           //calculates if you earn between 0 and 9,325
                
                taxes = wages_gross * 0.1;
                
            }
            else if ((wages_gross >=9326) && (wages_gross <=37950) ){   //calculates if you earn between 9,326 and 37,950
                
                taxes = (935.5 + (0.15 * (wages_gross - 9325)));
                
            }
            else if ((wages_gross >= 37951) && (wages_gross <= 91900)){ //calculates if you earn between 37,951 and 91,900
                
                taxes = (5226.25 + (0.25 * (wages_gross - 37951)));
                
            }
            else if ((wages_gross >= 91901) && (wages_gross <= 191650)){    //calculates if you earn between 91,901 and 191,650
                
                taxes = (18713.75 + (0.28 * (wages_gross - 91900)));
            }
            else if ((wages_gross >= 191651) && (wages_gross <= 416700)){   //calculates if you earn between 191,651 and 416,700
                
                taxes = (46643.75 + (0.33 * (wages_gross - 191650)));
                
            }
            else if (wages_gross > 416700){                                 //calculates if you make 416,700 or more
                
                taxes = (120910.25 + (0.369 * (wages_gross - 416700)));
            }
                
            }
            else{                           //if you make 0 or less then taxes = 0
                taxes = 0;
            }
        
        case 2:
        
            wages_gross = (8100 - (12700 - wages_gross));
            if (wages_gross > 0){
                
            
             if ((wages_gross >= 0) && (wages_gross <= 18650)){                 //calculates if you earn between 0 and 18,650
                
                taxes = wages_gross * 0.1;
                
            }
            else if ((wages_gross >=18651) && (wages_gross <=75900) ){          //calculates if you earn between 18,651 and 75,900
                
                taxes = (1865 + (0.15 * (wages_gross - 18650)));
                
            }
            else if ((wages_gross >= 75901) && (wages_gross <= 153100)){        //calculates if you earn between 75,901 and 153,100
                
                taxes = (10452.5 + (0.25 * (wages_gross - 75900)));
                
            }
            else if ((wages_gross >= 153101) && (wages_gross <= 233350)){       //calculates if you earn between 153,101 and 233,350
                
                taxes = (29752.5 + (0.28 * (wages_gross - 150100)));
            }
            else if ((wages_gross >= 233351) && (wages_gross <= 416700)){       //calculates if you earn between 233,351 and 416,700
                
                taxes = (52222.5 + (0.33 * (wages_gross - 233350)));
                
            }
            else if (wages_gross > 416700){                                     //calculates if taxes if you earn over 416,700
                
                taxes = (470700 + (0.369 * (wages_gross - 470700)));
            }
            }   //end first if
            else {
                taxes = 0;
            }
    
        if (taxes > wages_withheld){                                            //if you owe more taxes this is your output
            owed_taxes = wages_withheld - taxes;
            
            cout << "Name: " << name1 << " " << name2 << endl;
            cout << "Total Gross Adjusted Income: $" << wages_gross << endl;
            cout << "Total taxes owed: $" << taxes << endl;
            cout << name1 << " " << name2 << " " << "You owe $" << owed_taxes;
            
        }
        else {                                                                  //if you get a refund this is the output
            owed_taxes = wages_withheld - taxes;
            
            cout << "Name: " << name1 << " " << name2 << endl;
            cout << "Total Gross Adjusted Income: $" << wages_gross << endl;
            cout << "Total taxes owed: $" << taxes << endl;
            cout << name1 << " " << name2 << " " << "is entitled to a REFUND of $" << owed_taxes;
        }
                
            }   //end switch
        
    }   //end main
    
    
/*Expected results:

Name: Joe Vandal
Total Gross Adjusted Income: 22500
Total taxes owed: 2442.5
Joe Vandal You owe $-2192.5

Name: Alfonso Haynes
Total Gross Adjusted Income: $27751
Total taxes owed: $3230.15
Alfonso Haynes You owe $-38.15

Name: Bridget Rowe
Total Gross Adjusted Income: $98629
Total taxes owed: $16134.8
Bridget Rowe You owe $-4077.75

Name: Wendy Joseph
Total Gross Adjusted Income: $68691
Total taxes owed: $9371.15
Wendy Joseph You owe $-2399.15
*/
