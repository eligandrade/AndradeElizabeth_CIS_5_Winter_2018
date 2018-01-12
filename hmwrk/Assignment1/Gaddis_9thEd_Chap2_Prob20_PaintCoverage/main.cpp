/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr, Elizabeth Andrade
 * Created on January 3, 2018, 12:45 PM
 * Purpose:  Solve a paint coverage problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short htFnce, //Height of fence in feet
                   ltFnce, //Length of fence in feet
                   ptCovrg,//paint coverage in ft^2/Gallon
                   nGallns;//Number of Gallons to cover 1 side twice  
    
    //Initialize Variables
    htFnce=6;     //6 feet
    ltFnce=100;   //100 feet
    ptCovrg=340;  //340 square feet/Gallon
    
    //Process/Map inputs to outputs
    nGallns=2*(htFnce*ltFnce)/ptCovrg+1;//Add 1 to compensate 
    
    //Output data
    cout<<"Height of fence = "<<htFnce<<" ft "<<endl;
    cout<<"Length of fence = "<<ltFnce<<" ft "<<endl;
    cout<<"Number of Gallons to cover 1 side twice = "<<nGallns<<endl;
    
    //Exit stage right!
    return 0;
}