/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 4, 2018, 7:30 PM
 * Purpose: Find average of values
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
    float a, b, c, d, e, sum, avrg;
    
    //Initialize Variables
    a=28;   //Numbers were given
    b=32;
    c=37;
    d=24;
    e=33;
    
    //Process/Map inputs to outputs
    sum=a+b+c+d+e;  
    avrg=sum/5; //+1 is used to round
    
    //Output data
    cout<<"The average of the numbers 28, 32, 37, 24, and 33 "
        <<"is "<<avrg<<endl;
    
    //Exit stage right!
    return 0;
}