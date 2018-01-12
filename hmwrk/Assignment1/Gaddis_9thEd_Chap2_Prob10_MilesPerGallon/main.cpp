/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 5, 2018, 8:15 PM
 * Purpose: Find the miles per gallon
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
    int gallns, miles, mpg;
    
    //Initialize Variables
    gallns=15;          //how many gallons the car can hold
    miles=375;          //how many miles the car can go on one tank of gas
    mpg=miles/gallns;   //finding the miles per gallon
    
    //Process/Map inputs to outputs
    cout<<"A car holds "<<gallns<<" gallons of gas"<<endl;
    cout<<"The car can go "<<miles<<" miles on one tank of gas"<<endl;
    cout<<"The car gets "<<mpg<<" miles per gallon"<<endl;
    
    //Output data
    
    //Exit stage right!
    return 0;
}