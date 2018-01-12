/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 5, 2018, 8:30 PM
 * Purpose: Calculating acres
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
    int acre, land, land2; 
    
    //Initialize Variables
    land=43560;         //land in square feet 
    land2=391876;       //land in square feet
    acre=land2/land+1;  //+1 to round
    
    //Process/Map inputs to outputs
    cout<<"1 acre = "<<land<<"sqft"<<endl;
    cout<<land2<<"sqft = about "<<acre<<" acres"<<endl;
    
    //Output data
    
    //Exit stage right!
    return 0;
}