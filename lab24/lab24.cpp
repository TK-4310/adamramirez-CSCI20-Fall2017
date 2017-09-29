//Created by: Adam Ramirez 
//Created on: 9/28/2017
//Description: Lab 2.4 - Function Returns, generate a random number with user input then use that random number as though it is pounds
//             convert that result of pounds into kilograms than back into pounds outputing the results.
//Citation and References:https://www.google.com/search?q=converting+pounds+to+kilograms&oq=converting+pounds&aqs=chrome.2.69i57j0l5.6655j0j7&sourceid=chrome&ie=UTF-8

#include <iostream>
#include <stdlib.h> //needed for srand, rand functions
#include <algorithm> //needed for swap function

using namespace std;

  int SwapNum (int& num1, int& num2){          //Swap function, has num1 and num2 as my passover variables
    int temp_num1 = 0;          //defining my temporary save space
    
    
    
    temp_num1 = num1;           //saves what is entered for num1 into temp_num1
    num1 = num2;                //saves num2 in the num1 slot
    num2 = temp_num1;           //saves the original num1 which was saved in the temp_num1 into the num2 slot
}


int NumGenerator(int num1, int num2){
    
    srand (time(0));                                     //is needed for the rand to work below
   
    SwapNum(num1, num2);
   
    return (rand() % ((num1 - num2)) + num2);       //Gets me the random number
    
    
};

double PoundsToKilos (double pounds1){
    double kilogram1;
    kilogram1 = pounds1 * 0.453592;
    
    return kilogram1;
}

double KilogramsToPounds (double kilogram2){
    double pounds2;
    pounds2 = kilogram2 * 2.20462;
    return pounds2;
    
}

int main(){
    int num1;
    int num2;
    double num3;
    double pounds1;
    double pounds2;
    double kilogram1;
    double kilogram2;
   
    cout << "Enter small number: ";     //First user entered number which should be the smallest.
    cin >> num1;
    
    cout << "Enter large number: ";     //Second user entered number which should be the larger of the two.
    cin >> num2;
    
    
   num3 = NumGenerator(num1, num2);     //Calculates the random number
   pounds1 = PoundsToKilos(num3);       //Calculates the random number into kilograms if it were pounds
    
    cout << "Random Number: " << num3 << endl;                   //outputs results of entries.
    
    cout << "Pounds to Kilgrams: " << pounds1 << endl;          //Pulls the value of the Pounds to Kilos convertion.
    
    cout << "Kilograms to Pounds: " << KilogramsToPounds(pounds1);  //Pulls and calculates the previous convertion to Kilos and converts back to Pounds.
    

}
/*Expected Output
Enter small number: 10
Enter large number: 30
Random Number: 27
Pounds to Kilgrams: 12.247
Kilograms to Pounds: 26.9999

Double checked results on google convertion
*/
