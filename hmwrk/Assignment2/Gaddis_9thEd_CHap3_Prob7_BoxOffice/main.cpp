/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 8:15 PM
 * Purpose: Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string movie;
    float adult, child, attl, chttl, ticket, grbox, netbox, distrib;
    
   //Get Movie Name
    cout<<"Press enter after inputing answer."<<endl;
    cout<<"Type in Movie."<<endl;
    getline (cin, movie);
    
    //Get Number of Tickets
    cout<<"How many Adult tickets were sold for "<<movie<<"?"<<endl;
    cin>>adult;
    cout<<"How many Child tickets were sold for "<<movie<<"?"<<endl;
    cin>>child;
    
    //Calculate 
   
    attl=adult*10;         //adult tickets cost 10 US dollars
    chttl=child*6;         //child tickets cost 6 US dollars
    grbox=attl+chttl;      // gross box office ticket total
    netbox=grbox*.20;      //net box office keeps 20%
    distrib=grbox-netbox;  //distributer gets the rest
    
    //Output
    cout<<endl;
    cout<<"Movie Name:                     "<<movie<<endl;
    cout<<"Adult Tickets Sold:                "<<adult<<endl;
    cout<<"Child Tickets Sold:                "<<child<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Gross Box Office Profit:       $ "<<right<<setw(8)<<grbox<<endl;
    cout<<"Net Box Office Profit:         $ "<<right<<setw(8)<<netbox<<endl;
    cout<<"Amount Paid to Distributer:    $ "<<right<<setw(8)<<distrib<<endl;
    
    
    //Exit stage right!
    return 0;
}