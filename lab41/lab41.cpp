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
        int i = 0;
        
        
        for (i = 0; i < variable; i++){
            other_[i] = other[i];
        
         }
        }
        
        //Find_min()
        
     void Print(){
        cout << other_;
     }
    
    int Find_min(int num1, int num2){
        other_[0] = num1;
        other_[1] = num2;
        
        if (other_[0] > other_[1]){
            cout << other_[0] << endl;
        }
        else {
            cout << other_[1] << endl;
        }
        
        
    }
    
    int Find_max(int num1, int num2){
        int i;
        
       
        if (other_[0] > other_[1]){
            cout << other_[0] << endl;
        }
        else {
            cout << other_[1] << endl;
        }
        }
    
    
    int Find_sum(){
        other_[0] = Find_min();
        other_[1] = Find_max();
        other_[2] = other_[0] + other_[1];
        
        cout << other_[2] << endl;
     }
    
    int Search(int val1){
        int i = 0;
        
        for (i = 0; i < val1; i++){
            if (other_[i] == val1){
                cout << other_[i] << endl;
            }
        }
        
    }
    int Is_sorted(){
        int i = 0 ;
        
        for (i = 0; i < 4; i++){
            int current_small = other_[i];
            int current_small_index = i;
            
            int j = i + 1;
            for(j; j < 4; j++){
                if( current_small > other_[j]){
                    
                    current_small = other_[j];
                    current_small_index = j;
                }
            }
            
            if (current_small != i){
                other_[current_small_index] = other_[1];
                other_[i] = current_small;
            }
        }
        
        
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
    
    //a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
