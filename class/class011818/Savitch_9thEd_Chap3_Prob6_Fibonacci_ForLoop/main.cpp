/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 16, 2018, 12:45 PM
 * Purpose: Fibonacci Sequence
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
    unsigned int fi, fim1, fim2;
    unsigned char nLoop;
    
    //Initialize Variables
    nLoop=9;
    fim1=1;
    fim2=1;
    cout<<fim2<<","<<fim1;
    
    //Process/Map inputs to outputs
    for (unsigned char cnt=0;cnt<=nLoop;cnt++){
        fi=fim1+fim2;
        cout<<","<<fi;
        fim2=fim1;
        fim1=fi;
    };
    
    
    //comparison of the ratio of Fibonacci to Golden Ratio
    cout<<"      Ratio = "<<1.0f*fim1/fim2<<endl;
    
    //Output data
    
    //Exit stage right!
    return 0;
}