/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 16, 2018, 1:30 PM
 * Purpose: Calculate Shipping Rates
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float cost, wght, dist;
    
    //Initialize Variables
    cout<<"This program calculates shipping costs."<<endl;
    cout<<"Enter the weight of the package in kg."<<endl;
    cin>>wght;
    if(wght<=0||wght>20){   //weight cannot be negative or above 20kg
        cout<<"Fast Freight Shipping does not accept weights"
            <<" under 0kg or over 20kg."<<endl;
        exit(0);
    }
    cout<<"Enter the distance it is going in miles."<<endl;
    cin>>dist;
    if(dist<10||dist>3000){ //distance cannot be less than 10 or over 3000
        cout<<"Fast Freight Shipping does not accept distances "
            <<"less than 10 miles or greater than 3,000 miles."<<endl; 
        exit(0);
    }
       
    //Process/Map inputs to outputs
    if (wght<2){
        cost=1.10*(dist/500);       //packages <2kg are charged
    }                               //$1.10 per 500 miles
    else if (wght>=2&&wght<6) {
        cost=2.20*(dist/500);       //packages 2kg-5.99kg are charged
    }                               //$2.20 per 500 miles
     else if (wght>=6&&wght<10) {
        cost=3.70*(dist/500);       //packages 6kg-9.99kg are charged
    }                               //$3.70 per 500 miles
     else {
         cost=4.80*(dist/500);      //packages 10kg-20kg are charged
    }                               //$4.80 per 500 miles

    
    //Output data
    cout<<fixed<<setprecision(2);
    cout<<"It will cost $"<<cost<<" to ship that package."<<endl;
    
    //Exit stage right!
    return 0;
}