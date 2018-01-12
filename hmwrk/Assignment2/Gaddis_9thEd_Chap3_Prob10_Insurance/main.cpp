/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 9:00 PM
 * Purpose: Calculate Insurance for a building
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
    float prop, insur;
    
   //Get Replacement cost
    cout<<"Press enter after inputing answer."<<endl;
    cout<<"What is the replacement cost of the building?"<<endl;
    cin>>prop;
    
    //Calculate insurance
    insur=prop*.80;     //Financial experts advise people should insure 80%
    
    //output
    cout<<fixed<<setprecision(2);
    cout<<"The minimum amount of insurance you should buy is $"<<insur<<endl;
    
    //Exit stage right!
    return 0;
}