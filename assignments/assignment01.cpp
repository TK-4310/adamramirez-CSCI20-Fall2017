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
    double insurance_cost;
    double hourly_pay;
    double mileage_pay;
    double gross_pay;
    double taxes;
    double net_pay;
    long long int starting_odometer;
    long long int ending_odometer;
    
    payme employee1;
    
    cout << "Name: ";
    cin >> employee1.first_name >> employee1.last_name;
    cout << "Hours Worked: ";
    cin >> employee1.hours_worked;
    cout << "Hourly Pay: ";
    cin >> employee1.hourly_rate;
    
    cout << "Insurance Cost: ";
    cin >> insurance_cost;
    
    cout << "Mileage pay, starting Odometer: ";
    cin >> starting_odometer;
    cout << "Mileage pay, ending Odometer: ";
    cin >> ending_odometer;
    cout << " " << endl;
    
    
    hourly_pay = employee1.hourly_rate * employee1.hours_worked;
    mileage_pay = (ending_odometer - starting_odometer) * 0.35;
    gross_pay = hourly_pay + mileage_pay;
    
    taxes = gross_pay * 0.17;
    net_pay = gross_pay - taxes;
    
    
    cout << "Employee Name        " << "Hours        " << "Hourly Pay        " << "Gross Pay        " << "Net Pay" << endl;
    cout << " " << endl;
    cout <<employee1.first_name << " " << employee1.last_name << "         " << employee1.hours_worked << "            " << employee1.hourly_rate << "            ";
    cout  << gross_pay << "          ";
    cout << net_pay;
    
    //up next is the outputs and make sure if else statements work 
    
}