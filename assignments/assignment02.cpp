//Created by: Adam Ramirez 
//Created on: 10/04/2017
//Description: A calculator that calculates the tax of a price and displays it in a way that breaks it down by city, state and county.
//Citation and References: tax rates from https://www.taxrates.com/state-rates/

#include <iostream>
#include <string>
using namespace std;
    
    class taxprice {
        
        private:
        double price_;
        double price_with_tax_;
        double price_city_;
        double price_county_;
        
        public:
        void SetProductPrice(double productprice);
        double GetProductPrice();
        void SetPriceWithTax(double pricetax);
        double GetPriceWithTax();
        void SetPriceCity(double price_city1);
        double GetPriceCity();
        void SetPriceCounty(double price_county1);
        double GetPriceCounty();

        void Print1(){
            
            cout << " " << endl;
            cout << "Chico, CA State Taxes: " << price_with_tax_ << endl;       //Prints out chico tax break downs
            cout << "Chico, CA County Taxes: " << price_county_ << endl;
            cout << "Chico, CA City Taxes: " << price_city_ << endl;
            
        }
        void Print2(){
            
            cout << " " << endl;
            cout << "Paradise, CA State Taxes: " << price_with_tax_ << endl;    //Prints out Paradise tax break downs
            cout << "Paradise, CA County Taxes: " << price_county_ << endl;
            cout << "Paradise, CA City Taxes: " << price_city_ << endl;
            
        }

         void Print3(){
            
            cout << " " << endl;
            cout << "Sacramento, CA State Taxes: " << price_with_tax_ << endl;  //Prints out Sacramento tax break downs
            cout << "Sacramento, CA County Taxes: " << price_county_ << endl;
            cout << "Sacramento, CA City Taxes: " << price_city_ << endl;
            
        }
        
        void Print4(){
            
            cout << " " << endl;
            cout << "Las Vegas, NV State Taxes: " << price_with_tax_ << endl;   //Prints out Las Vegas tax break downs
            cout << "Las Vegas, NV County Taxes: " << price_county_ << endl;
            cout << "Las Vegas, NV City Taxes: " << price_city_ << endl;
            
        }
        
        void Print5(){
            
            cout << " " << endl;
            cout << "Pheonix, AZ State Taxes: " << price_with_tax_ << endl;     // Prints out Pheonix tax break downs
            cout << "Pheonix, AZ County Taxes: " << price_county_ << endl;
            cout << "Pheonix, AZ City Taxes: " << price_city_ << endl;
           
        }
        
    };
    
    void taxprice::SetProductPrice(double productprice){
            price_ = productprice;
            
        }
    void taxprice::SetPriceWithTax(double pricetax){
            price_with_tax_ = pricetax;
            
        }
    void taxprice::SetPriceCity(double price_city1){
            price_city_ = price_city1;
    }
    void taxprice::SetPriceCounty(double price_county1){
            price_county_ = price_county1;
    }
    double taxprice::GetProductPrice() {
            return price_;
        }
    double taxprice::GetPriceWithTax() {
            return price_with_tax_;
        }
    double taxprice::GetPriceCity(){
        return price_city_;
    }
    double taxprice::GetPriceCounty(){
        return price_county_;
    }
        
    struct taxes {
    
        double county_tax;      //Place holders for tax information
        double city_tax;
        double special_tax;
        double state_tax_out;
        
        double tax_price;       //state tax
        double county_tax_out;  //county tax
        double city_tax_out;    //city tax
        
    };



int main(){
    taxprice chico;         //towns to be calculated
    taxprice paradise;
    taxprice sacramento;
    taxprice las_vegas;
    taxprice pheonix;
    
    double product_price;
    double ca_state_tax = 0.06;
    double nv_state_tax = 0.046;
    double az_state_tax = 0.056;
    double butte_county_tax = 0.0025;
    
    
    taxes chico1;
    chico1.city_tax = 0;
    chico1.special_tax = 0.01;
    chico1.tax_price = 0;
    
    taxes paradise1;
    paradise1.city_tax = 0.005;
    paradise1.special_tax = 0.01;
    paradise1.tax_price = 0;
    
    taxes sacramento1;
    sacramento1.county_tax = 0.0025;
    sacramento1.city_tax = 0.005;
    sacramento1.special_tax = 0.015;
    
    taxes las_vegas1;
    las_vegas1.county_tax = 0.0365;
    las_vegas1.city_tax = 0;
    las_vegas1.special_tax = 0;
    
    taxes pheonix1;
    pheonix1.county_tax = 0.007;
    pheonix1.city_tax = 0.023;
    pheonix1.special_tax = 0;

    
    cout << "Product Price: ";
    cin >> product_price;

    
    chico1.tax_price = (product_price * ca_state_tax);                                              //Calculates the Chico state tax of the product
    chico1.county_tax_out = product_price * butte_county_tax;                                       //Calculates the Chico county tax of the product
    chico1.city_tax_out = (product_price * (chico1.city_tax + chico1.special_tax));                 //Calculates the Chico city tax of the product
    chico.SetPriceWithTax(chico1.tax_price);
    chico.SetPriceCity(chico1.city_tax_out);
    chico.SetPriceCounty(chico1.county_tax_out);
    
    paradise1.tax_price = (product_price * ca_state_tax);                                           //Paradise state tax calculation
    paradise1.county_tax_out = product_price * butte_county_tax;                                    //Paradise county tax calculation
    paradise1.city_tax_out = (product_price * (paradise1.city_tax + paradise1.special_tax));        //Paradise city tax calculation
    paradise.SetPriceWithTax(chico1.tax_price);
    paradise.SetPriceCity(chico1.city_tax_out);
    paradise.SetPriceCounty(chico1.county_tax_out);
    
    sacramento1.tax_price = product_price * ca_state_tax;                                           //Sacramento state tax calculation
    sacramento1.county_tax_out = product_price * sacramento1.county_tax;                            //Sacramento county tax calculation
    sacramento1.city_tax_out = (product_price * (sacramento1.city_tax + sacramento1.special_tax));  //Sacramento city tax calculation
    sacramento.SetPriceWithTax(sacramento1.tax_price);
    sacramento.SetPriceCity(sacramento1.city_tax_out);
    sacramento.SetPriceCounty(sacramento1.county_tax_out);
    
    las_vegas1.tax_price = product_price * nv_state_tax;                                            //Las Vegas state tax calculation
    las_vegas1.county_tax_out = product_price * las_vegas1.county_tax;                              //Las Vegas county tax calculation
    las_vegas1.city_tax_out = (product_price * (las_vegas1.city_tax + las_vegas1.special_tax));     //Las Vegas city tax calculation
    las_vegas.SetPriceWithTax(las_vegas1.tax_price);
    las_vegas.SetPriceCity(las_vegas1.city_tax_out);
    las_vegas.SetPriceCounty(las_vegas1.county_tax_out);
    
    pheonix1.tax_price = product_price * az_state_tax;                                              //Pheonix state tax calculation
    pheonix1.county_tax_out = product_price * pheonix1.county_tax;                                  //Pheonix county tax calculation
    pheonix1.city_tax_out = (product_price * (pheonix1.city_tax + pheonix1.special_tax));           //Pheonix city tax calculation
    pheonix.SetPriceWithTax(pheonix1.tax_price);
    pheonix.SetPriceCity(pheonix1.city_tax_out);
    pheonix.SetPriceCounty(pheonix1.county_tax_out);
    
    chico.Print1();         //Prints out chico taxes
    paradise.Print2();      //Prints out paradise taxes
    sacramento.Print3();    //Prints our sacramento taxes
    las_vegas.Print4();     //Prints out las vegas taxes
    pheonix.Print5();       //Prints out pheonix taxes
    
}

/*Expected Results
Product Price: 28.55
 
Chico, CA State Taxes: 1.713
Chico, CA County Taxes: 0.071375
Chico, CA City Taxes: 0.2855
 
Paradise, CA State Taxes: 1.713
Paradise, CA County Taxes: 0.071375
Paradise, CA City Taxes: 0.2855
 
Sacramento, CA State Taxes: 1.713
Sacramento, CA County Taxes: 0.071375
Sacramento, CA City Taxes: 0.571
 
Las Vegas, NV State Taxes: 1.3133
Las Vegas, NV County Taxes: 1.04207
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 1.5988
Pheonix, AZ County Taxes: 0.19985
Pheonix, AZ City Taxes: 0.65665

Product Price: 55.87
 
Chico, CA State Taxes: 3.3522
Chico, CA County Taxes: 0.139675
Chico, CA City Taxes: 0.5587
 
Paradise, CA State Taxes: 3.3522
Paradise, CA County Taxes: 0.139675
Paradise, CA City Taxes: 0.5587
 
Sacramento, CA State Taxes: 3.3522
Sacramento, CA County Taxes: 0.139675
Sacramento, CA City Taxes: 1.1174
 
Las Vegas, NV State Taxes: 2.57002
Las Vegas, NV County Taxes: 2.03925
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 3.12872
Pheonix, AZ County Taxes: 0.39109
Pheonix, AZ City Taxes: 1.28501

Product Price: 84.12    
 
Chico, CA State Taxes: 5.0472
Chico, CA County Taxes: 0.2103
Chico, CA City Taxes: 0.8412
 
Paradise, CA State Taxes: 5.0472
Paradise, CA County Taxes: 0.2103
Paradise, CA City Taxes: 0.8412
 
Sacramento, CA State Taxes: 5.0472
Sacramento, CA County Taxes: 0.2103
Sacramento, CA City Taxes: 1.6824
 
Las Vegas, NV State Taxes: 3.86952
Las Vegas, NV County Taxes: 3.07038
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 4.71072
Pheonix, AZ County Taxes: 0.58884
Pheonix, AZ City Taxes: 1.93476

Product Price: 32.31
 
Chico, CA State Taxes: 1.9386
Chico, CA County Taxes: 0.080775
Chico, CA City Taxes: 0.3231
 
Paradise, CA State Taxes: 1.9386
Paradise, CA County Taxes: 0.080775
Paradise, CA City Taxes: 0.3231
 
Sacramento, CA State Taxes: 1.9386
Sacramento, CA County Taxes: 0.080775
Sacramento, CA City Taxes: 0.6462
 
Las Vegas, NV State Taxes: 1.48626
Las Vegas, NV County Taxes: 1.17932
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 1.80936
Pheonix, AZ County Taxes: 0.22617
Pheonix, AZ City Taxes: 0.74313

Product Price: 67.89
 
Chico, CA State Taxes: 4.0734
Chico, CA County Taxes: 0.169725
Chico, CA City Taxes: 0.6789
 
Paradise, CA State Taxes: 4.0734
Paradise, CA County Taxes: 0.169725
Paradise, CA City Taxes: 0.6789
 
Sacramento, CA State Taxes: 4.0734
Sacramento, CA County Taxes: 0.169725
Sacramento, CA City Taxes: 1.3578
 
Las Vegas, NV State Taxes: 3.12294
Las Vegas, NV County Taxes: 2.47798
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 3.80184
Pheonix, AZ County Taxes: 0.47523
Pheonix, AZ City Taxes: 1.56147

Product Price: 8.47
 
Chico, CA State Taxes: 0.5082
Chico, CA County Taxes: 0.021175
Chico, CA City Taxes: 0.0847
 
Paradise, CA State Taxes: 0.5082
Paradise, CA County Taxes: 0.021175
Paradise, CA City Taxes: 0.0847
 
Sacramento, CA State Taxes: 0.5082
Sacramento, CA County Taxes: 0.021175
Sacramento, CA City Taxes: 0.1694
 
Las Vegas, NV State Taxes: 0.38962
Las Vegas, NV County Taxes: 0.309155
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 0.47432
Pheonix, AZ County Taxes: 0.05929
Pheonix, AZ City Taxes: 0.19481

Product Price: 69.98
 
Chico, CA State Taxes: 4.1988
Chico, CA County Taxes: 0.17495
Chico, CA City Taxes: 0.6998
 
Paradise, CA State Taxes: 4.1988
Paradise, CA County Taxes: 0.17495
Paradise, CA City Taxes: 0.6998
 
Sacramento, CA State Taxes: 4.1988
Sacramento, CA County Taxes: 0.17495
Sacramento, CA City Taxes: 1.3996
 
Las Vegas, NV State Taxes: 3.21908
Las Vegas, NV County Taxes: 2.55427
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 3.91888
Pheonix, AZ County Taxes: 0.48986
Pheonix, AZ City Taxes: 1.60954

Product Price: 57.79
 
Chico, CA State Taxes: 3.4674
Chico, CA County Taxes: 0.144475
Chico, CA City Taxes: 0.5779
 
Paradise, CA State Taxes: 3.4674
Paradise, CA County Taxes: 0.144475
Paradise, CA City Taxes: 0.5779
 
Sacramento, CA State Taxes: 3.4674
Sacramento, CA County Taxes: 0.144475
Sacramento, CA City Taxes: 1.1558
 
Las Vegas, NV State Taxes: 2.65834
Las Vegas, NV County Taxes: 2.10933
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 3.23624
Pheonix, AZ County Taxes: 0.40453
Pheonix, AZ City Taxes: 1.32917

Product Price: 1000
 
Chico, CA State Taxes: 60
Chico, CA County Taxes: 2.5
Chico, CA City Taxes: 10
 
Paradise, CA State Taxes: 60
Paradise, CA County Taxes: 2.5
Paradise, CA City Taxes: 10
 
Sacramento, CA State Taxes: 60
Sacramento, CA County Taxes: 2.5
Sacramento, CA City Taxes: 20
 
Las Vegas, NV State Taxes: 46
Las Vegas, NV County Taxes: 36.5
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 56
Pheonix, AZ County Taxes: 7
Pheonix, AZ City Taxes: 23

Product Price: 15
 
Chico, CA State Taxes: 0.9
Chico, CA County Taxes: 0.0375
Chico, CA City Taxes: 0.15
 
Paradise, CA State Taxes: 0.9
Paradise, CA County Taxes: 0.0375
Paradise, CA City Taxes: 0.15
 
Sacramento, CA State Taxes: 0.9
Sacramento, CA County Taxes: 0.0375
Sacramento, CA City Taxes: 0.3
 
Las Vegas, NV State Taxes: 0.69
Las Vegas, NV County Taxes: 0.5475
Las Vegas, NV City Taxes: 0
 
Pheonix, AZ State Taxes: 0.84
Pheonix, AZ County Taxes: 0.105
Pheonix, AZ City Taxes: 0.345

*/