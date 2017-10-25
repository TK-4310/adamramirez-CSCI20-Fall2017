//Created by: Adam Ramirez
//Created on: 10/24/2017
//Description: Lab 3.5 - Creating a temperature converter
//Citation and References: 

#include <iostream>
using namespace std;

class TemperatureConverter{
    private:
        double kelvin_;

        
    public:
        void SetTempFromKelvin(double kelvinVal);
        double GetTempFromKelvin();
        void SetTempFromCelsius(double celsius);
        double GetTempAsCelsius();
        void SetTempFromFahrenheit(double fahrenheit);
        double GetTempAsFahrenheit();
        void PrintTemperatures();
    
  
};

TemperatureConverter::TemperatureConverter(){
        kelvin_ = 0;
        return;
}

TemperatureConverter::TemperatureConverter(double kelvinVal){
        if(kelvinVal > 0){
            kelvin_ = kelvinVal;
        }
       
}


    void TemperatureConverter::SetTempFromKelvin(double kelvinVal){
        double celsius = 0;
        double fahrenheit = 0;
    
        celsius = kelvinVal - 273.15;
        fahrenheit = (((celsius * 9)/5) + 32);
}
    void TemperatureConverter::SetTempFromCelsius(double celsius){
        double kelvinVal = 0;
        double fahrenheit = 0;
        
        kelvinVal = celsius + 273.15;
        fahrenheit = (((celsius * 9)/5) + 32);
        
    }
    
    void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit){
        double kelvinVal = 0;
        double celsius = 0;
        
        kelvinVal = (((5 * (fahrenheit - 32 ))/ 9 ) + 273.15);
        celsius = kelvinVal - 273.15;
    }
    double TemperatureConverter::GetTempFromKelvin(){
        double kelvinVal = kelvin_;
        return;
    }
    double TemperatureConverter::GetTempAsCelsius(){
        celsius;
        return;
    }
    double TemperatureConverter::GetTempAsFahrenheit(){
        fahrenheit;
        return;
    }
     void TemperatureConverter::PrintTemperatures(){
        cout << "Temperature as Kelviin: " << kelvin_;
        cout << "Temperature as Celsius: " << celsius;
        cout << "Temperature as Celsius: " << fahrenheit;
    } 



 // This program will run the Temperature Converter Class

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}