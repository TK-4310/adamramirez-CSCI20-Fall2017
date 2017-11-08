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
    string item[10];    //Array for inventory of products
    
    int num_holder = 10;
    int prices[10];     //Array for prices
    int inventory[10];  //Array for inventory count
    int id_num[10];     //Array for bar codes
    int product_purchase[10];   //Array to store 
    
    int id = 0;         //Users input for what products their going to purchase based on id_num
    int quantity = 0;   //Holds quantity of products the customer is about to purchase
    int cost = 0;       //Holds total cost of product in if else statements
    int items_cart = 0; //Keeps track of total products in cart
    

    
    char shop = 'y';
    //All the arrays being defined below
    product_purchase[0] = product_purchase[1] = product_purchase[2] = product_purchase[3] = product_purchase[4] = product_purchase[5] = product_purchase[6] = product_purchase[7] = product_purchase[8] = product_purchase[9] = -1;
    prices[0] = 5;          inventory[0] = 10;
    prices[1] = 1;          inventory[1] = inventory[0];    //Left sets the prices
    prices[2] = 15;         inventory[2] = inventory[0];    //Right sets the inventory to start, Total of 10 of each.
    prices[3] = 5;          inventory[3] = inventory[0];
    prices[4] = 50;         inventory[4] = inventory[0];
    prices[5] = 10;         inventory[5] = inventory[0];
    prices[6] = 10;         inventory[6] = inventory[0];
    prices[7] = 60;         inventory[7] = inventory[0];
    prices[8] = 99;         inventory[8] = inventory[0];
    prices[9] = 25;         inventory[9] = inventory[0];
    //Sets the ID Numbers for my inventory
    id_num[0] = 100;        id_num[1] = 101;    id_num[2] = 102;    id_num[3] = 103;    id_num[4] = 104;    
    id_num[5] = 105;    id_num[6] = 106;    id_num[7] = 107;    id_num[8] = 108;    id_num[9] = 109;
    
    item[0] = "Star";                                   //List of inventory only 10 products
    item[1] = "Mushroom";
    item[2] = "Red Bull - the same as Cocaine but legal";
    item[3] = "1-up";
    item[4] = "Uzi";
    item[5] = "John Elway Action Figure";
    item[6] = "Cloak of Invisability";
    item[7] = "Wand - Pheonix Core";
    item[8] = "Light Saber - Blue";
    item[9] = "Daddy Collar";
    //End of arrays being defined above
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
            product_purchase[0] = quantity;        //Customer purchase of Star
            cost = ((prices[0] * quantity) + cost); //adds up how many are being added to cart
            items_cart += quantity;                 //adds up total cost of the product depending on quantity
            inventory[0] -= quantity;               //keeps running track of inventory
            
            if (inventory[0] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock
            
        }
        else if (id == 101){
            product_purchase[1] = quantity;        //Customer purchase of Mushroom
            cost = (( prices[1] * quantity) + cost);    //Adds up how many are being purchased
            items_cart = items_cart + quantity ;        //removes products from inventory and adds to cart
            inventory[1] -= quantity;
            
            if (inventory[1] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 102){
            product_purchase[2] = quantity;    //Customer purchase of Red Bull
            cost += (prices[2] * quantity);
            items_cart += quantity;
            inventory[2] -= quantity;

            if (inventory[2] == 0){
                cout << "------------------" << endl;   
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 103){
            product_purchase[3] = quantity;    //Customer purchase of 1-up
            cost = ((prices[3] * quantity) + cost);
            items_cart += quantity;
            inventory[3] -= quantity;
            
            if (inventory[3] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 104){
            product_purchase[4] = quantity;    //Cusomter purchase of uzi
            cost = ((prices[4] * quantity) + cost);
            items_cart += quantity;
            inventory[4] -= quantity;
            
            if (inventory[4] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 105){
            product_purchase[5] = quantity;    //Customer purchase of John Elway Action Figure
            cost = ((prices[5] * quantity) + cost);
            items_cart += quantity;
            inventory[5] -= quantity;
            
            if (inventory[5] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 106){
            product_purchase[6] = quantity;    //Customer purchase of Cloak of invis
            cost = ((prices[6] * quantity) + cost);
            items_cart += quantity;
            inventory[6] -= quantity;
            
            if (inventory[6] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 107){
            product_purchase[7] = quantity;    //Customer purchase of Wand
            cost = ((prices[7] * quantity) + cost);
            items_cart += quantity;
            inventory[7] -= quantity;
            
            if (inventory[7] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 108){
            product_purchase[8] = quantity;    //Customer purchase of Light Saber - Blue
            cost = ((prices[8] * quantity) + cost);
            items_cart += quantity;
            inventory[8] -= quantity;
            
            if (inventory[8] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }
        else if (id == 109){
            product_purchase[9] = quantity;    //Customer purchase of Daddy Collar
            cost = ((prices[9] * quantity) + cost);
            items_cart += quantity;
            inventory[9] -= quantity;
            
            if (inventory[9] == 0){
                cout << "------------------" << endl;
                cout << "Sorry out of stock" << endl;
                cout << "------------------" << endl;
            }   //If product is out of stock            
        }

        
        
    }   //end while loop
    
    if (shop == 'n'){
            cout << "-----------------------------------------" << endl;    //Print out the cart's total at the top
            cout << "           Cart Total: $" << cost << endl;
            cout << "-----------------------------------------" << endl;
            
            if(items_cart > 0){
                
                cout <<  "Number of Items in Cart: " << items_cart << endl; //Provides total number of products in cart
                int i = items_cart;
                cout << "Products: " << endl;
                
                for(int j = 0; j < 10; j++){    //Prints out the list of products
                    
                    if(product_purchase[j] > 0){
                    cout << "   " << item[j] << " || Quantity: " << product_purchase[j] << endl;
                    }
                    
                }//end of loop that prints out Product being purchased and Quantity of that product
            }   //end if(items_cart)
            
        }   //end if (shop==n)

    
}   //end main

// Results after adding the listed cart
// ======================================
// Ready to shop here is what's Available: 
// ID Number: 100
// Product: Star
//  Price: $5
//  Stock: 10
 
// ID Number: 101
// Product: Mushroom
//  Price: $1
//  Stock: 10
 
// ID Number: 102
// Product: Red Bull - the same as Cocaine but legal
//  Price: $15
//  Stock: 10
 
// ID Number: 103
// Product: 1-up
//  Price: $5
//  Stock: 5
 
// ID Number: 104
// Product: Uzi
//  Price: $50
//  Stock: 10
 
// ID Number: 105
// Product: John Elway Action Figure
//  Price: $10
//  Stock: 10
 
// ID Number: 106
// Product: Cloak of Invisability
//  Price: $10
//  Stock: 10
 
// ID Number: 107
// Product: Wand - Pheonix Core
//  Price: $60
//  Stock: 10
 
// ID Number: 108
// Product: Light Saber - Blue
//  Price: $99
//  Stock: 10
 
// ID Number: 109
// Product: Daddy Collar
//  Price: $25
//  Stock: 7
 
// Please Enter the ID Number of the Product You Would Like to Purchase: 
// n
// Please enter Quantity:  
// -----------------------------------------
//           Cart Total: $100
// -----------------------------------------
// Number of Items in Cart: 8
// Products: 
//   1-up || Quantity: 5
//   Daddy Collar || Quantity: 3