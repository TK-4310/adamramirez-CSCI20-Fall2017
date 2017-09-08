//Created by: Adam Ramirez 
//Created on: 9/07/2017
//Description: Creating an interactive Mad Lib
//Citation and References:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string location1;
    string noun1;
    string p_noun;
    string body_part1;
    string base_verb1;
    string base_verb2;
    string body_part2;
    string verb_past1;
    string body_part3;
    string verb_ing1;
    string body_part4;
    string noun2;
    string verb_past2;
    
    cout << "Please enter in a Location: ";
    cin >> location1;
    
    cout << "Please enter in a Noun: ";
    cin >> noun1;
    
    cout <<"Please enter a Plural Noun: ";
    cin >> p_noun;
    
    cout << "Please enter a Body Part: ";
    cin >> body_part1;
    
    cout << "Please enter a Verb: ";
    cin >> base_verb1;
    
    cout << "Please enter another Verb: ";
    cin >> base_verb2;
    
    cout << "Please enter a Past Tense Verb: ";
    cin >> verb_past1;
    
    cout << "Please enter another Body Part: ";
    cin >> body_part2;
    
    cout << "Please enter a Verb ending in -ING: ";
    cin >> verb_ing1;
    
    cout << "Please enter a Body Part: ";
    cin >> body_part3;
    
    cout << "Please enter another Body Part: ";
    cin >> body_part4;
    
    cout << "Please enter a Noun: ";
    cin >> noun2;
    
    cout << "Please enter a Past Tense Verb: ";
    cin >> verb_past2;
    
        cout << "Are you from " << location1 << "? Because you're the only " << noun1 << " I see." << endl;
        cout << "Hi, the " << p_noun << " in my " << body_part1 << " told me to come over and " << base_verb1 << " to you." << endl;
        cout << "I'd " << base_verb2 << " your cat just to get in the family." << endl;
        cout << "Can I have Directions? To your " << body_part2 << "." << endl;
        cout << "Do you have a BandAid? I just " << verb_past1 << " my " << body_part3 << " " << verb_ing1 << " for you." << endl;
        cout << "Do you have a map? I'm getting lost in your " << body_part4 << "." << endl;
        cout << "Are you a " << noun2 << "? 'cause you got fine " << verb_past2 << " all over you.";
    
    
    
}