/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 17, 2018, 11:00AM
 * Purpose: Phone Call Charge
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short cost, tmSpan, hrs, mins;
    unsigned short bfrTime, aftTime;
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
    cout<<"Duration not more than 60 mins is valid"<<endl;
    cin>>tmSpan;
    if(tmSpan>60)exit(0);
    
    //Process/Map inputs to outputs
    hrs=(strTime[0]-48)*10+(strTime[1]-'0');
    mins=(strTime[3]-48)*10+(strTime[4]-'0'); 
    aftTime=(mins+tmSpan-60<=0)?0:mins+tmSpan-60;
    bfrTime=tmSpan-aftTime;   
    
    if(day[0]=='S'||day[0]=='s'){
        cost=bfrTime*15;
    }else if(hrs>=8&&hrs<18){
        cost=bfrTime*40;
    }else{
        cost+=bfrTime*25;
    }
    
    //Calculate new hrs and new day
    hrs+=1;
    hrs=hrs>23?0:hrs;
    if(hrs==0&&day=="Su")day="Mo";
    if(hrs==0&&day=="Fr")day="Sa";
    
    if(day[0]=='S'||day[0]=='s'){
        cost=aftTime*15;
    }else if(hrs>=8&&hrs<18){
        cost=aftTime*40;
    }else{
        cost+=aftTime*25;
    }
    
    
     
    //Output data
    cout<<fixed<<setprecision(2);
    cout<<"The phone call on "<<day<<" at "<<strTime
        <<" for "<<tmSpan<<" minutes cost = $"<<cost/100.0f<<endl;
    
    cout<<"before ="<<bfrTime<<endl;
    cout<<"After ="<<aftTime<<endl;
    
    //Exit stage right!
    return 0;
}