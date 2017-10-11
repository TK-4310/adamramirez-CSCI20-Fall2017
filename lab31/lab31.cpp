//Created by: Adam Ramirez
//Created on: 9/28/2017
//Description: Lab 3.1 - Create a plan that determines the best cell phone plan based on usage.
//Citation and References:

#include <iostream>


using namespace std;

class PhonePlan{
     private:
        int price_;
        int lines_;
        int data_;
        int tablet_price_;
        int sprint_price_;
        int best_plan_;
        int plan_price_;
        
        public:
        void SetPrice(int phone_price);
        int GetPrice();
        void SetPhoneLines(int phone_lines);
        int GetPhoneLines();
        void SetDataAmount(int phone_data);
        int GetPhoneData();
        void SetTablet(int tablet_price);
        int GetTablet();



       
    void att(int phone_lines, int phone_data, int tablet_price){        //unlimited price
        int plan1 = 0;
        int plan2 = 0;
        int plan3 = 0;
        int best_plan = 0;
        int phone_price = 0;
        int phone_price2 = 0;
        int phone_price3 = 0;
        

        if (phone_lines == 1){   //Att unlimited plus plan
           
            phone_price3 = 90;
            
        if (tablet_price > 0){                              //adding possible tablet price for plan
            
            tablet_price = tablet_price * 10; 
            
            plan1 = phone_price3 + tablet_price;
        }
        else {
        
            plan1 = phone_price3;
            
        }
           
        }
        else if (phone_lines == 2){
            
            phone_price3 = 145;
            
        if (tablet_price > 0){                              //adding possible tablet price for plan
            
            tablet_price = tablet_price * 10; 
            
            plan1 = phone_price3 + tablet_price;
        }
        else {
        
            plan1 = phone_price3;
            
        }
        
        }
        else if (phone_lines >= 3) {
            phone_price3 = (145 + (phone_lines * 20 - 40 ));
        
        if (tablet_price > 0){                              //adding possible tablet price for plan
            
            tablet_price = tablet_price * 10; 
            
            plan1 = phone_price3 + tablet_price;
        }
        else {
        
            plan1 = phone_price3;
            
        }            
        }

        if (phone_lines == 1){   //Att unlimited choice plan, 1 phone plan
            
            phone_price2 = 60;
            
        if (tablet_price > 0) {
            
            tablet_price = tablet_price * 10; 
            
            plan2 = phone_price2 + tablet_price;
        }
        else {
        
            plan2 = phone_price2;
            
        }
        
        }
        else if (phone_lines == 2){    //2+ phone plan
            
            phone_price2 = 115;
            
        if (tablet_price > 0) {
            
            tablet_price = tablet_price * 10; 
            
            plan2 = phone_price2 + tablet_price;
        }
        else {
        
            plan2 = phone_price2;
            
        }
        
        }
        else if (phone_lines >= 3){
            phone_price2 = (115 + (phone_lines * 20 - 40));
            
        if (tablet_price > 0) {
            
            tablet_price = tablet_price * 10; 
            
            plan2 = phone_price2 + tablet_price;
        }
        else {
        
            plan2 = phone_price2;
            
        }
        
        }
        

            if ((phone_data <= 1) && (phone_data >= 0)){        //1GB plan
            
                phone_price = (30 + (phone_lines * 20));
            if (tablet_price > 0){
                
                tablet_price = tablet_price * 10;
                plan3 = phone_price + tablet_price;
                
            }
            else{
                
                plan3 = phone_price;
                
                
            }
            
            }
            else if (phone_data <= 3 && phone_data >= 2){       //3GB plan
            
                phone_price = ( 40 + (phone_lines * 20));
            if (tablet_price > 0){
                
                tablet_price = tablet_price * 10;
                plan3 = phone_price + tablet_price;
                
            }
            else{
                
                plan3 = phone_price;
                
                
            }
            
            }
            else if ((phone_data <= 6) && (phone_data >= 4)){   //6gb plan
            
                phone_price = ( 60 + (phone_lines * 20));
            if (tablet_price > 0){
                
                tablet_price = tablet_price * 10;
                plan3 = phone_price + tablet_price;
                
            }
            else{
                
                plan3 = phone_price;
                
                
            }
            
            }
            else if (phone_data <= 10 && phone_data >= 7){      //10 GB family plan
            
                phone_price = ( 80 + ( phone_lines * 20 ));
            if (tablet_price > 0){
                
                tablet_price = tablet_price * 10;
                plan3 = phone_price + tablet_price;
                
            }
            else{
                
                plan3 = phone_price;
                
                
            }
            
            }
            else if ((phone_data <= 16 ) && (phone_data >= 11)){    //16 GB family plan
            
                phone_price = ( 90 + (phone_lines * 20 ));
                
                if (tablet_price > 0){
                
                tablet_price = tablet_price * 10;
                plan3 = phone_price + tablet_price;
                
            }
            else{
                
                plan3 = phone_price;
                
                
            }
            
            }
            else if (( phone_data <= 25 ) && ( phone_data >= 17 )){    //25 GB family plan
            
                phone_price = ( 110 + (phone_lines * 20));
            if (tablet_price > 0){
                
                tablet_price = tablet_price * 10;
                plan3 = phone_price + tablet_price;
                
            }
            else{
                
                plan3 = phone_price;
                
            }
            
            }
            
            if (tablet_price > 0){
                
                tablet_price = tablet_price * 10;
                plan3 = phone_price + tablet_price;
                
            }
            else{
                
                plan3 = phone_price;
                
                
            }
            
        
        
       if ((plan1 < plan2) && (plan1 < plan3)) {        //finds the cheapest att plan
           
           best_plan = plan1;
           
       }
       else if ((plan2 < plan1) && (plan2 < plan3)){
           
           best_plan = plan2;
           
       }
       else {
           best_plan = plan3;
           best_plan_ = best_plan;
       }
       
    }   //end void att
    int GetAttPrice(){
        return best_plan_;
    }
    
    void verizon ( int phone_lines, int phone_data, int tablet_price){
        int plan_price = 0;
        int phone_price = 0;
        
        if (tablet_price <= 0){
                if (phone_lines == 1){          //Verizon unlimited plan, 1 phone
            
                phone_price = 80 + 20;
            }
            else {                          //Verizon plan with 2+ phones
                phone_price = (110 + (phone_lines * 20));
            }
        
            if (tablet_price > 0){
                plan_price = (phone_price + (tablet_price * 10));
            
            }
            else {
                plan_price = phone_price;
                plan_price_ = plan_price;
                
            }
        }
        else{
            plan_price = 99999;
            plan_price_ = plan_price;
            
        }
        
        
        
    }   //end verizon plan cal
    
    int GetPlanPrice(){
        return plan_price_;
    }
    
    void sprint (int phone_lines, int phone_data, int tablet_price){
       int sprint_price = 0;
       int phone_price = 0;
       
       if (tablet_price <=0){
            if (phone_data <= 2){
                sprint_price = 40 * phone_lines;
            }
        
            else if (phone_lines == 1){
            
                sprint_price = 60;
            
            }
            else if(phone_lines == 2){
                sprint_price = 60 + 40;
            }
            else if (phone_lines >= 3){
                sprint_price = (60 + 40 + ((phone_lines * 30) - 30));
                sprint_price_ = sprint_price;
                
            }
        }
        else{
            sprint_price = 99999;
            sprint_price_ = sprint_price;
            
        }
    }      //end sprint plans
    
        int GetSprintPlan(){
        return sprint_price_;
    }
    
    void Print(){
    cout << sprint_price_ << endl;
    cout << plan_price_ << endl;
    cout << best_plan_ << endl;
    }
    
    
};

int main () {
    int lines;
    int data;
    int tablets;
    PhonePlan sprint1;
    //PhonePlan verizon1;
   // PhonePlan att1;

    cout << "How many phones? ";
    cin >> lines;
    

    
    cout << "How much data do you want? ";
    cin >> data;

    
    cout << "How many tablets? ";
    cin >> tablets;

    sprint1.att(lines, data, tablets);
    sprint1.verizon(lines, data, tablets);
    sprint1.sprint(lines, data, tablets);
    
    sprint1.Print();
    
}