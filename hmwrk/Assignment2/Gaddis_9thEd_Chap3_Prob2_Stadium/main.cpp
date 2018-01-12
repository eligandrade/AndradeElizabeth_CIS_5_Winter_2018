/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 7:55 PM
 * Purpose: Calculate stadium income
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
    
    float classa, classb, classc, totala, totalb, totalc, total;         
            
    //Get how many tickets for each class
    
    cout<<"Press enter after inputing amount."<<endl;
    cout<<"How many Class A seats were sold?"<<endl;
    cin>>classa;
    cout<<"How many Class B seats were sold?"<<endl;
    cin>>classb;
    cout<<"How many Class C seats were sold?"<<endl;
    cin>>classc;
            
    //Calculate totals
    
    cout<<fixed<<setprecision(2)<<endl;
    totala=classa*15;               //class a seats cost 15 US dollars
    totalb=classb*12;               //class b seats cost 12 US dollars
    totalc=classc*9;                //class c seats cost 9 US dollars 
    total=totala+totalb+totalc;     //total is in US dollars
    
    //Output Stadium Income
    
    cout<<"Total Income: $"<<total<<endl;
    
    
    //Exit stage right!
    return 0;
}