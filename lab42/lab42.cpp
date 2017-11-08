//Created by: Adam Ramirez
//Created on: 11/02/2017
//Description: Lab 4.2 - Parallel Arrays Create and online shopping cart that keeps track of inventory
//              price and the user's cart. it removes the item from the inventory and adds it to the customers total
//              When user is done it outputs the total and what the customer ordered.
//Citation and References: 

#include <iostream>
#include <string>
using namespace std;



int main(){
    string item[10];
    string item_purchase[10];
    
    int num_holder = 10;
    
    int prices[10];
    int inventory[10];
    int id_num[10];
    int product_purchase[10];
    
    int id = 0;
    int quantity = 0;
    int cost = 0;
    int items_cart = 0;
    int counter = 0;

    
    char shop = 'y';
    
    product_purchase[0] = product_purchase[1] = product_purchase[2] = product_purchase[3] = product_purchase[4] = product_purchase[5] = product_purchase[6] = product_purchase[7] = product_purchase[8] = product_purchase[9] = -1;
    prices[0] = 5;          inventory[0] = 10;
    prices[1] = 1;          inventory[1] = inventory[0];
    prices[2] = 15;         inventory[2] = inventory[0];
    prices[3] = 5;          inventory[3] = inventory[0];
    prices[4] = 50;         inventory[4] = inventory[0];
    prices[5] = 10;         inventory[5] = inventory[0];
    prices[6] = 10;         inventory[6] = inventory[0];
    prices[7] = 60;         inventory[7] = inventory[0];
    prices[8] = 99;         inventory[8] = inventory[0];
    prices[9] = 25;         inventory[9] = inventory[0];

    id_num[0] = 100;        id_num[1] = 101;    id_num[2] = 102;    id_num[3] = 103;    id_num[3] = 104;    
    id_num[5] = 105;    id_num[6] = 106;    id_num[7] = 107;    id_num[8] = 108;    id_num[9] = 109;
    
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
        int i;

        
        cout << "Press y to shop. ";
        cin >> shop;
        cout << "Ready to shop here is what's Available: " << endl;
        
        
        for( i = 0; i < num_holder; i++){
        
        cout << "ID Number: " << id_num[i] << endl;
        cout << "Product: " << item[i] << endl; 
        cout << " Price: $" << prices[i] << endl;
        cout <<" Stock: " << inventory[i] << endl;
        cout << " " << endl;
        
        }
        
        
        cout << "Please Enter the ID Number of the Product You Would Like to Purchase: " << endl;
        cin >> id;
        cout << "Please enter Quantity: ";
        cin >> quantity;
        cout << " " << endl;
        
        
        if (id == 100){
            product_purchase[0] = quantity;
            cost = ((prices[0] * quantity) + cost);
            items_cart += quantity;
            inventory[0] -= quantity;
            counter += counter;
            
        }
        else if (id == 101){
            product_purchase[1] = quantity;
            cost = (( prices[1] * quantity) + cost);
            items_cart = items_cart + quantity ;
            inventory[1] -= quantity;
            counter += counter;
        }
        else if (id == 102){
            product_purchase[2] = quantity;
            cost = ((prices[2] * quantity) + cost);
            items_cart += quantity;
            inventory[2] -= quantity;
            counter += counter;
        }
        else if (id == 103){
            cost = ((prices[3] * quantity) + cost);
            items_cart += quantity;
            inventory[3] -= quantity;
        }
        else if (id == 104){
            cost = ((prices[4] * quantity) + cost);
            items_cart += quantity;
            inventory[4] -= quantity;
        }
        else if (id == 105){
            cost = ((prices[5] * quantity) + cost);
            items_cart += quantity;
            inventory[5] -= quantity;
        }
        else if (id == 106){
            cost = ((prices[6] * quantity) + cost);
            items_cart += quantity;
            inventory[6] -= quantity;
        }
        else if (id == 107){
            cost = ((prices[7] * quantity) + cost);
            items_cart += quantity;
            inventory[7] -= quantity;
        }
        else if (id == 108){
            cost = ((prices[8] * quantity) + cost);
            items_cart += quantity;
            inventory[8] -= quantity;
        }
        else if (id == 109){
            cost = ((prices[9] * quantity) + cost);
            items_cart += quantity;
            inventory[9] -= quantity;
        }
        // else{
        //     cout << "Done Shopping? Press n to be done y to continue: ";
        //     cin >> shop;
            
        // }
        
        
    }   //end while loop
    
    if (shop == 'n'){
            cout << "-----------------------------------------" << endl;
            cout << "Cart Total: $" << cost << endl;
            
            if(items_cart > 0){
                
                cout <<  "Number of Items in Cart: " << items_cart << endl;
                int i = items_cart;
                cout << "Products: " << endl;
                
                for(int j = 0; j < 10; j++){
                    
                    if(product_purchase[j] > 0){
                    cout << "   " << item[j] << " Quantity: " << product_purchase[j] << endl;
                    }
                    
                }
            }   //end if(items_cart)
            
        }   //end if (shop==n)

    
}   //end main