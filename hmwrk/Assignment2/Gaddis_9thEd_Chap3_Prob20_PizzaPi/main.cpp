/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 11, 2018, 10:50 PM
 * Purpose: Calculate how many pizzas are needed for a party
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions
const float PI=3.14159;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float diam, radius, area;
    int slices, needed, people, pizza;
    
    cout<<"This program will tell you how many pizzas "
        <<"you will need for a party."<<endl;
    cout<<endl;
    
    //Get Diameter
    cout<<"Press enter after inputing answer"<<endl;
    cout<<"What is the diameter of the pizzas you will order? (in inches) ";
    cin>>diam;
    
    //calculate radius
    radius = diam / 2;                  //radius is half of the diameter
    area = PI * ( radius * radius );    //formula for area of a circle
    
    //calculate slices
    slices = area / 14.125;             //14.125 is given area of one slice
    
    //Output slices
    cout<<"The number of slices for a pizza with a diameter of "
        <<diam<<" inches is : "<<slices<<endl;
    
    //Get number of party goers
    cout<<"How many people will be at the party? ";
    cin>>people;
    
    //calculate how many pizzas are needed
    needed = people * 4;        //People are going to eat 4 slices each
    pizza = needed / slices;    //Pizzas are calculated 
    
    //Output pizzas
    cout<<"You will need to order "<<pizza<<" pizzas."<<endl;
    
    //Exit stage right!
    return 0;
}