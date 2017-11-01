//Created by: Adam Ramirez
//Created on: 10/31/2017
//Description: Lab 4.1 - Single Arrays
//Citation and References: 

#include <iostream>
using namespace std;

class ArrayTools {
    private:
        int other_[];
    
    public:
        
        ArrayTools(int other[], int variable){
        //int i = 0;
        
        other[variable] = (1,2,3,4,5,6,7,8,9, 10);
        other_[variable_] = other[variable];
        // other[0] = 1;
        // other[1] = 2;
        // other[2] = 3;
        
        
        // for (i = 0; i < variable; i++){
        //     cout << "Value: ";
        //     cout << other[i] << endl;
            
            
            
        // }
        }
        
        //Find_min()
        
     void Print(){
       other_[variable_];
    }
    
};



int main()
    {
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    // cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    // cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    // cout<<"Sum = "<<a.Find_sum()<<endl;
    // cout<<"Search 10"<<a.Search(10)<<endl;
    // cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
