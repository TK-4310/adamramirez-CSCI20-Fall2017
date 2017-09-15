//Created by: Adam Ramirez 
//Created on: 9/12/2017
//Description: Assignment 1.0 pay stub calculator
//Citation and References: http://www.pay-stubs.com/sample-pay-stub/

#include <iostream>
#include <string>

using namespace std;

struct payme
{
    string first_name;
    string last_name;
    double hours_worked;
    double hourly_rate;
    
};

int main()
{
    double insurance_cost;                  //declaring variables for any number involved in pay check
    double hourly_pay;
    double mileage_pay;
    double gross_pay;
    double taxes;
    double net_pay;
    long long int starting_odometer;
    long long int ending_odometer;
    
    payme employee1;
    
    cout << "Name: ";                                                   //User input for name first and last
    cin >> employee1.first_name >> employee1.last_name;
    cout << "Hours Worked: ";                                           //pay period hours
    cin >> employee1.hours_worked;
    cout << "Hourly Pay: ";                                             //Rate of pay
    cin >> employee1.hourly_rate;
    
    cout << "Insurance Cost: ";
    cin >> insurance_cost;
    
    cout << "Mileage pay, starting Odometer: ";                         //input of odometer for milage pay
    cin >> starting_odometer;
    cout << "Mileage pay, ending Odometer: ";
    cin >> ending_odometer;
    cout << " " << endl;
    
    
    hourly_pay = employee1.hourly_rate * employee1.hours_worked;        //Calculates the users base hourly pay for the period
    mileage_pay = (ending_odometer - starting_odometer) * 0.35;         //Calculates total milage pay
    gross_pay = hourly_pay + mileage_pay;                               //Calculates total pay before taxes
    
    taxes = gross_pay * 0.17;
    net_pay = gross_pay - taxes;                                        //Calculates users pay after taxes
    
    
    cout << "Employee Name        " << "Hours        " << "Hourly Pay        " << "Gross Pay        " << "Net Pay" << endl;                                             //Output for check
    cout << " " << endl;
    cout <<employee1.first_name << " " << employee1.last_name << "         " << employee1.hours_worked << "            " << employee1.hourly_rate << "            ";
    cout  << gross_pay << "          ";
    cout << net_pay;
    
}

/* 
Results of paycheck one: Sofia Cameron, 40, $23.57, $178.65, 3268, 4154
    Employee Name        Hours        Hourly Pay        Gross Pay        Net Pay
 
    Sofia Cameron         40            23.57            1252.9          1039.91

Results of paycheck two: Richard Watson, 29, $11.50,  $344.57, 9763,  10701
    Employee Name        Hours        Hourly Pay        Gross Pay        Net Pay
 
    Richard Watson         29            11.5            661.8          549.294

Results of paycheck three: Heather Hunt, 35, $60.00, $224.75, 5705, 5705
    Employee Name        Hours        Hourly Pay        Gross Pay        Net Pay
 
    Heather Hunt         35            60            2100          1743

Results of paycheck four: Eddy Hall, 40, $8.25, $180.27, 12919, 13146
     Employee Name        Hours        Hourly Pay        Gross Pay        Net Pay
 
    Eddy Hall         40            8.25            409.45          339.844
*/