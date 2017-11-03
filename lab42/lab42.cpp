//Created by: Adam Ramirez
//Created on: 11/02/2017
//Description: Lab 4.2 - Parallel Arrays Create and online shopping cart that keeps track of inventory
//              price and the user's cart. it removes the item from the inventory and adds it to the customers total
//              When user is done it outputs the total and what the customer ordered.
//Citation and References: 

#include <iostream>
#include <string>
using namespace std;



class Customer{
    private:
        string item_[10];
        int price_inventory_[10][10];
        
    public:
    void SetInventoryItems(string item[10]);
    string GetInventoryItems();
    
    Customer(){
        cout << "No Items In Cart!" << endl;
    }
    Customer(string item[10] , int price_inventory[10][10]){
        
        
        
    }
    
    void Print(){
        cout
        
    }
    
};
    
    Customer::SetInventoryItems(string item[10]){
        
        

    }
    Customer::GetInventoryItems(){
        int i = 0;
        
        for( i=0; i < 10; i++){
            item_[i] = item[i];
            cout << SetInventoryItems(item[i]) << endl;
            
        }
        return
    }
    


int main(){
    string item[10];
    
    int prices[10];
    int inventory[10];
    // int place_holder1 = 10;
    // int place_holder2 = 10;
    // itn place_holder3 = 10;
    
    char shop = 'y';
    
    prices[0] = 5;          inventory[0] = 10;
    prices[1] = 1;          inventory[1] = inventory[0];
    prices[2] = 15;         inventory[2] = inventory[0];
    prices[3] = 50;         inventory[3] = inventory[0];
    prices[4] = 500;        inventory[4] = inventory[0];
    prices[5] = 10;         inventory[5] = inventory[0];
    prices[6] = 100000;     inventory[6] = inventory[0];
    prices[7] = 999999;     inventory[7] = inventory[0];
    prices[8] = 999999;     inventory[8] = inventory[0];
    prices[9] = 25;         inventory[9] = inventory[0];
    
    item[0] = "Star";
    item[1] = "Mushroom";
    item[2] = "Red Bull - the same as Cocaine but legal";
    item[3] = "1-up";
    item[4] = "Uzi";
    item[5] = "John Elway Action Figure";
    item[6] = "Cloak of Invisability";
    item[7] = "Wand - Pheonix Core";
    item[8] = "Light Saber - Blue";
    item[9] = "Daddy Collar";
    
    while (shop == 'y'){
        int i = 0;
        cout << "Ready to shop here is what's Available: " << endl;
        
        for( i; i < item[]; i++){
            
        cout << item[i] << " ";
        
            for( i; i < )
            
        }
        
    }

    
}