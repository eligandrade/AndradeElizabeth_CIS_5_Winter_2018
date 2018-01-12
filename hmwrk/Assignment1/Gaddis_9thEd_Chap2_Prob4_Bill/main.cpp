/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 4, 2018, 8:20 PM
 * Purpose: Creating a bill for a meal
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
    float meal, tax, tip, taxamt, tipamt, total;
    
    //Initialize Variables
    meal=88.67; //The meal total
    tax=.0675;  //The tax on the meal *100
    tip=.2;     //The tip percentage *100
    
    //Process/Map inputs to outputs
    taxamt=meal*tax;
    tipamt=meal*tip;
    total=meal + taxamt + tipamt;
            
    //Output data
    cout<<"Here is your meal receipt:"<<endl;
    cout<<"meal total $"<<meal<<endl;
    cout<<setprecision(3)<<"tax $"<<taxamt<<endl;
    cout<<setprecision(4)<<"tip $"<<tipamt<<endl;
    cout<<setprecision(5)<<"total $"<<total<<endl;
    
    //Exit stage right!
    return 0;
}