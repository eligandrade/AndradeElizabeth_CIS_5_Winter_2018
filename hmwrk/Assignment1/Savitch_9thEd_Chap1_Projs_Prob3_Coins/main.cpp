/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 8, 2018, 8:05 PM
 * Purpose: To produce the amount of cents 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int quart, xquart, totalq, 
        dime, xdime, totald, 
        nickel, xnickel ,totaln;
    float total, doll;
    
    //Initialize Variables
    quart=25;       //The value of a quarter
    dime=10;        //The value of a dime
    nickel=5;       //The value of a nickel
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Hello,"<<endl;
    cout<<"This program will give the monetary value"
          " of the coins inputed"<<endl;
    cout<<"Press enter after inputing a number"<<endl;
    cout<<"How many quarters are there?"<<endl;
    cin>>xquart;
    cout<<"You have entered "<<xquart<<endl;
    cout<<"How many dimes are there?"<<endl;
    cin>>xdime;
    cout<<"You have entered "<<xdime<<endl;
    cout<<"How many nickels are there?"<<endl;
    cin>>xnickel;
    cout<<"You have entered "<<xnickel<<endl;
    
    totalq=xquart*quart;
    totald=xdime*dime;
    totaln=xnickel*nickel;
    total=totalq+totald+totaln;
            
    cout<<"The total value of the coins that were "
            "entered is "<<total<<" cents"<<endl;
    
    doll=total/100;
    
    cout<<"or $"<<doll<<endl; 
            
    //Exit stage right!
    return 0;
}