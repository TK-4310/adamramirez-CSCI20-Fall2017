//Created by: Adam Ramirez
//Created on: 10/24/2017
//Description: Lab 3.5 - Creating a temperature converter
//Citation and References: Got some solid help from Nathan B. Pointed out some major changes I needed.

#include <iostream>
using namespace std;

class TemperatureConverter{     //Beginning of class
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
        TemperatureConverter(){     //Constructor for blank value
        kelvin_ = 0;
        }
 
        TemperatureConverter(double tempVal){       //Overloaded Constructor for values
        kelvin_ = tempVal;
        }
  
};  //End Temperature Concverter class


    void TemperatureConverter::SetTempFromKelvin(double kelvinVal){     //Gets me Kelvin into my private parameter if starting temp is kelvin
        if (kelvinVal >= 0){                                            //Should only need this one if statement since it's if kelvin is less than 0
            kelvin_ = kelvinVal;
        }
        else{
            cout << "Try Again, Bad Temp!";
        }
}
    void TemperatureConverter::SetTempFromCelsius(double celsius){  //Gets me kelvin from a beginning celsius value
        double kelvinVal = 0;
        
        kelvinVal = celsius + 273.15;
        
    }
    
    void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit){    //Gets me kelvin with a beginning fahrenheit value
        double kelvinVal = 0;
        
        
        kelvinVal = (((5 * (fahrenheit - 32 ))/ 9 ) + 273.15);
        
    }
    double TemperatureConverter::GetTempFromKelvin(){       //Gets me my private parameter
        return kelvin_;
        
    }
    double TemperatureConverter::GetTempAsCelsius(){        //Uses the private parameter to get my celsius output
        return kelvin_ - 273.15;
        
    }
    double TemperatureConverter::GetTempAsFahrenheit(){     //Usees private parameter to get my fahrenheit output
        return (((GetTempAsCelsius() * 9)/5) + 32);;
        
    }


     void TemperatureConverter::PrintTemperatures(){        //Prints out the values
        cout << "Temperature in Kelvin: " << GetTempFromKelvin() << endl;
        cout << "Temperature in Celsius: " << GetTempAsCelsius() << endl;
        cout << "Temperature in Celsius: " << GetTempAsFahrenheit() << endl;
        cout << " " << endl;
    } 


// Pulled below to test from lab
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
/*Expected Results
Temperature in Kelvin: 0
Temperature in Celsius: -273.15
Temperature in Celsius: -459.67
 
Temperature in Kelvin: 274
Temperature in Celsius: 0.85
Temperature in Celsius: 33.53
 
400.15
Temperature in Kelvin: 400.15
Temperature in Celsius: 127
Temperature in Celsius: 260.6
 
0.85
Temperature in Kelvin: 274
Temperature in Celsius: 0.85
Temperature in Celsius: 33.53
 
33.53
Temperature in Kelvin: 274
Temperature in Celsius: 0.85
Temperature in Celsius: 33.53
*/