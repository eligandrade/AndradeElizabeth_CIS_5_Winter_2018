/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 5, 2018, 9:45 PM
 * Purpose: Finding the circuit board price
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
    float comp, percnt, price, sprice;
    
    //Initialize Variables
    price=14.95;    //price of the circuit  board
    percnt=.35;     //percent of profit the company gets *100
    
    //Process/Map inputs to outputs
    comp=percnt*price;
    sprice=price-comp;
    
    //Output data
    cout<<"The electronic company gets 35% profit from the"
        <<" circuit board that costs $"<<price<<endl;
    cout<<setprecision(3)<<"That makes the circuit boards actual selling"
        <<" price $"<<sprice<<endl;
    
    //Exit stage right!
    return 0;
}