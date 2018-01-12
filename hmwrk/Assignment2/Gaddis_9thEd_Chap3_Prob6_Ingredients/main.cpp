/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 6:00 PM
 * Purpose: Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float sugar,   //sugar
          butter,  //butter
          flour,   //flour
          xcook;   //number of cookies
    
    //Find how many cookies
    cout<<"Press Enter after inputing a number."<<endl;
    cout<<"How many cookies did you want to make?"<<endl;
    cin>>xcook;
    cout<<"You have entered "<<xcook<<endl;
    cout<<endl;
          
    //Calculate Ingredients
    cout<<fixed<<setprecision(2)<<endl;
    sugar=1.5*xcook/48;         //1.5 cups are in 48 cookies
    butter=1*xcook/48;          //1  cup is in 48 cookies
    flour=2.75*xcook/48;        //2.75 cups are in 48 cookies
    
    //Output
    cout<<"To make "<<xcook<<" cookies you will need: "<<endl;
    cout<<endl;
    cout<<sugar<<" cups of sugar"<<endl;
    cout<<butter<<" cups of butter"<<endl;
    cout<<flour<<" cups of flour"<<endl;
    
    //Exit stage right!
    return 0;
}