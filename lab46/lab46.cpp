//Created by: Adam Ramirez
//Created on: 11/16/2017
//Description: Lab 4.6 - A program that will read a student's grades and output an HTML page to 
//      output a student's transcript including semester GPA and overall GPA. It should ask 
//      for an input file that includes student's name, semester (number) and list of grades (A-F)
//      and class hours. Reads the data then calculates the semester GPA and Overall GPA.
//      name, number of classes, hours of class, grade
//Citation and References: zybooks chapter 23

#include<iostream>
#include<fstream>
#include<string>
#include<ios>
#include <iomanip>

using namespace std;

main(){
    ifstream inFS;
    ofstream outFS;
    
    string first_name;  //Names variables
    string last_name;
    
    int num_classes = 0;
    double num_hours[10];
    double total_num_hours;
    int i = 0;
    
    char letter_grade [10];
    double grade_value [10];
    double total_num_values = 0;
    double gpa = 0;
    
    inFS.open("input.txt");     //input from input.txt
    outFS.open("output.txt");   //sends output to output.txt
    
    if (!inFS.is_open()){       //Incase input.txt can't be pulled
        
        cout << "Could not open file!" << endl;
        
        return 1;
        
    }
    while ( !inFS.eof() ){      //Pulls all info from input.txt
    
    inFS >> first_name; //pulls in first name, last name and number of classes from input.txt
    inFS >> last_name;
    inFS >> num_classes;
    
    
        for(i = 0; i < num_classes; i++){   //Pulls in units and letter grade
            inFS >> num_hours[i];       //pulls number of units/hours and letter grades from input.txt
            inFS >> letter_grade[i];
        }
    
            for (i = 0; i < num_classes; i++){      //Loop that converts letter grade to digits
                if (letter_grade[i] == 'A'){
                    grade_value[i] = 4.0;
                }
                else if (letter_grade[i] == 'B'){
                    grade_value[i] = 3.0;
                }
                else if (letter_grade[i] == 'C'){
                    grade_value[i] = 2.0;
                }
                else if (letter_grade[i] == 'D'){
                    grade_value[i] = 1.0;
                }
                else if (letter_grade[i] == 'F'){
                    grade_value[i] = 0.0;
                }
            
                //cout << letter_grade[i] << endl;  //Test printing out letter grades
            }
            for(i = 0; i < num_classes; i++){                           //Calculates units and grades for GPA
                total_num_hours += num_hours[i];
                total_num_values = total_num_values + (num_hours[i] * grade_value[i]);
                
                //cout << total_num_values << endl;
            }
                //cout << total_num_hours << " " << total_num_values << endl;   //Test calculations
                gpa = total_num_values / total_num_hours;   //calculates GPA
                
                outFS << "___________________________________" << endl;         //output to output.txt
                outFS << " Name: " << first_name << " " << last_name << endl;
                outFS << "-----------------------------------" << endl;
                outFS << "Number of Classes Taken: " << num_classes << endl;
                outFS << "Number of Units: " << total_num_hours << endl;
                outFS << "-----------------------------------" << endl;
                outFS <<  setprecision(3) << "GPA: " << gpa << endl; //Test GPA results
                outFS << "-----------------------------------" << endl;
                outFS << "Units  |   Grades" << endl;
                outFS << "-----------------" << endl;
                for(i = 0; i < num_classes; i++){       //Prints out number of units/hours and letter grades
                    outFS << num_hours[i] << "     |     " <<letter_grade[i] << endl;
                }
                outFS << " " << endl;
        
            total_num_hours = 0;
            total_num_values = 0;

    // cout << first_name << " " << last_name << " "        //Test to check input
    // <<  num_classes << " " << num_hours << " " << letter_grade;
    }
    
    inFS.close();   //closes input.txt
    outFS.close();  //closes output.txt
    
    return 0;
}
// Additional Notes:
// I noticed that the last student repeats but when the fifth grade is removed it does not repeat,
// I'm unsure on why it repeats because it has 1 additional class