/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 2, 2018, 1:20 PM
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
    float c, f;
    
    //Get degree in Celsius
    cout<<"Press enter after inputing answer. "<<endl;
    cout<<"Enter temperature in Celsius. ";
    cin>>c;
    
    //Calculate Fahrenheit
    
    f=1.8*c+32;        //formula 
    
    //Output answer
    
    cout<<c<<" degrees Celsius = "<<f<<" degrees Fahrenheit"<<endl;
    
    //Exit stage right!
    return 0;
}