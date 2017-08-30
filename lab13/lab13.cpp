//Created by: Adam Ramirez 
//Created on: 8/29/2017
//Description: Creating a program that will print out a line of text along with a calculated set of numbers.
//Citation and References: stats pulled from https://www.census.gov/popclock/
    


#include <iostream>
using namespace std;

int main()
{
    int the_year = 2017;
    int us_population = 325766169;
    int person_per1 = 12; //Net gain of one person every 12 sec
    int person_per2 = 33; //One net migrant every 33 sec
    int person_per3 = 8; //One birth every 8 seconds
    int person_per4 = 12; //One death every 12 seconds
    int user_input1;
    long long int answer1;
    
    person_per1 = ((( 60 / person_per1 ) * 60) * 24) * 365; //equation gives me how many people people in the US per year
   
    person_per2 = (((60 / person_per2 ) * 60 ) * 24 ) * 365; //equation gives migrant per year
   
    person_per3 = (((60 / person_per3 ) * 60 ) * 24 ) * 365; //equation for each baby born per year
   
    person_per4 = (((60 / person_per4 ) * 60 ) * 24 ) * 365; //equation for deaths per year
   
    cout << "Please enter number of years to add then hit enter. "; 
    cin >> user_input1; //input for additional years
    
    answer1 = (us_population + person_per1 + person_per2 + person_per3 - person_per4);
   
   
    the_year = the_year + user_input1;
   
    answer1 = answer1 * user_input1; //Tried to include user_input in the first answer1 equation but my answer would keep ending up negative when testing with 8 years and above
   
    //cout << answer1; //manual test for formulas
    
    
    
    cout << "In the year "<< the_year <<"," << " the population will be " << answer1 << " in the United States.";
    
    
}



//I could cancel out person_per4 and person_per1 but because that could change monthly 
//or yearly they can be updated in the variable section and that's all