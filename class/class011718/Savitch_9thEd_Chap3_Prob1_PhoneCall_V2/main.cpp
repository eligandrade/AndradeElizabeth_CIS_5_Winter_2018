/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 17, 2018, 10:40AM
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
    unsigned short cost, tmSpan, hrs;     
    string day, strTime; 
    
    
    //Initialize Variables
    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day the phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>strTime;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;
    
    //Process/Map inputs to outputs
    hrs=(strTime[0]-48)*10+(strTime[1]-'0');
    
    if(day[0]=='S'||day[0]=='s'){
        cost=tmSpan*15;//15 cents per minute
    }else if(hrs>=8&&hrs<18){
        cost=tmSpan*40;//40 cents per minute
    }else{
        cost=tmSpan*25;//25 cents per minute
    }
    
    
    //Output data
    cout<<fixed<<setprecision(2);
    cout<<"The phone call on "<<day<<" at "<<strTime
        <<" for "<<tmSpan<<" minutes cost = $"<<cost/100.0f<<endl;
    
    //Exit stage right!
    return 0;
}