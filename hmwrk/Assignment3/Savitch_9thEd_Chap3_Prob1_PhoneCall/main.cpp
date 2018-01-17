/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 17, 2018, 10:15AM
 * Purpose: Phone Call Charge
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
    unsigned short cost,       //Cost of Phone call in pennies
                   strTime,    //Start time in military format
                   tmSpan;     //Duration of Phone Call
    char day,  //Day of Week 
         dm;   //Dummy input 
    
    //Initialize Variables
    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day the phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day>>dm;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>setw(2)>>strTime>>dm>>dm>>dm;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;
    
    //Process/Map inputs to outputs
    if(day=='S'||day=='s'){
        cost=tmSpan*15;//15 cents per minute
    }else if(strTime>=8&&strTime<18){
        cost=tmSpan*40;//40 cents per minute
    }else{
        cost=tmSpan*25;//25 cents per minute
    }
    
    
    //Output data
    cout<<fixed<<setprecision(2);
    cout<<"The phone call cost = $"<<cost/100.0f<<endl;
    
    //Exit stage right!
    return 0;
}