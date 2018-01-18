/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 16, 2018, 1:05 PM
 * Purpose: Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <cmath>    //math library
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float aproxE, term, x;
    int counter, nLoops=10;
    
    //Initialize Variables
    aproxE=1.0f;
    counter=1;
    x=1.0f;
    term=x/counter++;
    
    //Process/Map inputs to outputs
    for(int cnt=2;cnt<=nLoops;cnt++){
        aproxE+=term;
        term*=x/cnt;
    }
    
   
    //Output data
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
    
    //Exit stage right!
    return 0;
}