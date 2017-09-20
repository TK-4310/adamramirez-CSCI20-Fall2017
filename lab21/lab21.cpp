//Created by: Adam Ramirez 
//Created on: 9/14/2017
//Description: Lab 2.1 - Calling Functions
//Citation and References: Used http://www.cplusplus.com/reference/cmath/ for library and fucntions used for math
//  http://www.cplusplus.com/reference/cmath/pow/ best use of to the power of

#include <iostream>
#include <string>
#include <cmath>

struct weather{
    double velocity;
    double old_style;
    double temp; 
    double new_style;
    double diff;
};

using namespace std;

int main(){
    
    weather windspeed1;
    cout << "Wind Speed: ";
    cin >> windspeed1.velocity;
    
    cout << "Temperature: ";
    cin >> windspeed1.temp;
    
    
    
    windspeed1.old_style = 0.081 * ( 3.71 * sqrt(windspeed1.velocity) + 5.81 - 0.25 * windspeed1.velocity ) * (windspeed1.temp - 91.4) + 91.4;
    windspeed1.new_style = 35.74 + 0.6245 * windspeed1.temp - 35.75 * pow( windspeed1.velocity, 0.16 ) + 0.4275 * windspeed1.temp * pow(windspeed1.velocity, 0.16);
    
    windspeed1.diff = windspeed1.old_style - windspeed1.new_style;
    
    cout <<"Wind Speed     " << "Old Formula     " << "New Formula     " << "Difference     " << endl;
    cout << "     " << windspeed1.velocity << "         " << windspeed1.old_style << "     " << "     " << windspeed1.new_style << "         " << windspeed1.diff;
    
    
}

/*
Results from Testing:

Wind Speed: 4
Temperature: 30
Wind Speed     Old Formula     New Formula     Difference     
     4         30.5753          25.857         4.7183
     
Wind Speed: 10
Temperature: 39.25
Wind Speed     Old Formula     New Formula     Difference     
     10         27.8601          32.8307         -4.97061
     
Wind Speed: 2
Temperature: 100
Wind Speed     Old Formula     New Formula     Difference     
     2         98.7538          106.011         -7.25719
*/