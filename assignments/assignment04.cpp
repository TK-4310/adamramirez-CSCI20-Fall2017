//Created by: Adam Ramirez
//Created on: 11/21/2017
//Description: Assignment 4.0 - Program that reads student input for a test and compares the answers to the answer key for the test
//      1 point for each answer correct 0 for each empty answer '- 1/4' for each incorrect answer. Outputs to the screen and a file
//      with the sutdent's name, list and missed questions and orderall grade on the exam.
//Citation and References:

#include<iostream>
#include<fstream>
#include<string>
#include<ios>
#include<iomanip>

using namespace std;


main(){
    ifstream inFS;
    ifstream inFS2;
    ofstream outFS;
    
    string first_name;
    string last_name;
    int NUM_ANSWERS = 18;
    int i = 0;
    
    char student_answer[20];
    char answer_key[20];
    string student_answer2[5];
    string answer_key2[5];
    double student_grade = 0;
    
    
    inFS.open("student.txt");
    inFS2.open("answerkey.txt");
    outFS.open("studentresults.txt");
    
    if (!inFS.is_open()){       //Incase input.txt can't be pulled
        
        cout << "Could not open file!" << endl;
        
        return 1;
        
    }
    while ( !inFS.eof() ){
        
        inFS >> first_name;     //input for student first and last names
        inFS >> last_name;
        
        cout << "-------------" << endl;
        outFS << "-------------" << endl;
        cout << first_name << " " << last_name << endl;     //output for student name
        outFS << first_name << " " << last_name << endl;
        cout << "-------------" << endl;
        outFS << "-------------" << endl;
        for(i = 0; i < NUM_ANSWERS; i++)
        {
            inFS >> student_answer[i];          //loop to input student answers and answer key
            inFS2 >> answer_key[i];
        }
         for(i = 0; i < NUM_ANSWERS; i++)       //Loop for multiple choice questions and true false
         {
            if (student_answer[i] == answer_key[i]) //If statement adds up score, prints out to console and prints to results txt file
            {
                student_grade += 1;
                cout << "Correct Answer!, ";
                outFS << "Correct Answer!, ";
            }
            else if (student_answer[i] == '?')
            {
                student_grade += 0.0;
                cout << "Wrong Answer ||" << answer_key[i] << ", ";
                outFS << "Wrong Answer ||" << answer_key[i] << ", ";
            }
            else if (student_answer[i] != answer_key[i])
            {
                student_grade += 0.75;
                cout << "Wrong Answer ||" << answer_key[i] << ", ";
                outFS << "Wrong Answer ||" << answer_key[i] << ", ";
            }                                   //End of Loop for multiple choice questions and true false
            
        }
        for (i = 0; i < 3; i++)
        {
            inFS >> student_answer2[i];         //Input for string answers for student and answer key
            inFS2 >> answer_key2[i];
        }
        for (i = 0; i < 3; i++)
        {
            if (student_answer2[i] == answer_key2[i])   //Loop for string answers
            {
                student_grade += 1.0;                   //Adds up string answers, prints out answer results to console and txt file
                cout << "Correct Answer!, ";            //Correct answers
                outFS << "Correct Answer!, ";
            }
            else if (student_answer2[i] == "?") 
            {
                student_grade += 0.0;
                cout << "Wrong Answer ||" << answer_key2[i] << ", ";    //ommited answers
                outFS << "Wrong Answer ||" << answer_key2[i] << ", ";
            }
            else if (student_answer2[i] != answer_key2[i])
            {
                student_grade += 0.75;
                cout << "Wrong Answer ||" << answer_key2[i] << ", ";    //Wrong answers
                outFS << "Wrong Answer ||" << answer_key2[i] << ", ";   //end loop for string answers
            }
        }
        cout << endl;                                               //Prints out in console and to textfile Test Grades
        outFS << endl;
        cout << "====================" << endl;
        outFS << "====================" << endl;
        cout << "Grade on Test: " << student_grade << " " << endl;
        outFS << "Grade on Test: " << student_grade << " " << endl;
        cout << "====================" << endl;
        outFS << "====================" << endl;
        cout << endl;
        outFS << endl;
        student_grade = 0.0;
    }
    
    
    
    inFS.close();   //closes txt files: student, answerkey and studentresults
    inFS2.close();
    outFS.close();
    
}//end main
/*OutPut:
-------------
Christian Smith
-------------
Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||c, Wrong Answer ||c, Correct Answer!, Wrong Answer ||c, Wrong Answer ||a, Wrong Answer ||a, Correct Answer!, Wrong Answer ||b, Wrong Answer ||f, Wrong Answer ||f, Wrong Answer ||t, Wrong Answer ||t, Correct Answer!, Correct Answer!, Wrong Answer ||f, Wrong Answer ||f, Wrong Answer ||variable, Wrong Answer ||random, Wrong Answer ||condition, 
====================
Grade on Test: 10.75 
====================

-------------
Paxton Jones
-------------
Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||c, Correct Answer!, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||a, Correct Answer!, Wrong Answer ||b, Wrong Answer ||b, Wrong Answer ||f, Correct Answer!, Wrong Answer ||t, Wrong Answer ||t, Wrong Answer ||f, Correct Answer!, Wrong Answer ||f, Correct Answer!, Correct Answer!, Wrong Answer ||random, Wrong Answer ||condition, 
====================
Grade on Test: 13.5 
====================

-------------
Abby Sciuto
-------------
Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||c, Correct Answer!, Wrong Answer ||a, Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||b, Correct Answer!, Wrong Answer ||f, Wrong Answer ||t, Correct Answer!, Correct Answer!, Wrong Answer ||t, Correct Answer!, Correct Answer!, Correct Answer!, Wrong Answer ||random, Wrong Answer ||condition, 
====================
Grade on Test: 13 
====================

-------------
Audrey Smithson
-------------
Wrong Answer ||a, Correct Answer!, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||a, Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||b, Correct Answer!, Wrong Answer ||f, Wrong Answer ||t, Wrong Answer ||t, Wrong Answer ||f, Wrong Answer ||t, Wrong Answer ||f, Wrong Answer ||f, Wrong Answer ||variable, Wrong Answer ||random, Wrong Answer ||condition, 
====================
Grade on Test: 10.25 
====================

-------------
Katie Holmes
-------------
Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||c, Wrong Answer ||a, Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||b, Correct Answer!, Correct Answer!, Correct Answer!, Wrong Answer ||t, Wrong Answer ||f, Correct Answer!, Wrong Answer ||f, Wrong Answer ||f, Wrong Answer ||variable, Wrong Answer ||random, Correct Answer!, 
====================
Grade on Test: 12.5 
====================

-------------
Carrie Grant
-------------
Wrong Answer ||a, Wrong Answer ||b, Wrong Answer ||c, Correct Answer!, Correct Answer!, Wrong Answer ||c, Wrong Answer ||a, Wrong Answer ||a, Correct Answer!, Correct Answer!, Wrong Answer ||f, Wrong Answer ||f, Correct Answer!, Correct Answer!, Correct Answer!, Wrong Answer ||t, Wrong Answer ||f, Wrong Answer ||f, Correct Answer!, Correct Answer!, Correct Answer!, 
====================
Grade on Test: 16 
====================*/