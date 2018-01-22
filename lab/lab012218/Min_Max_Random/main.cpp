/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 22, 2018, 12:55 PM
 * Purpose: Statistics for throwing 2 Dice
 */

//System Libraries
#include <iostream> //IO Library
#include <cstdlib>  //random number Library
#include <ctime>    //Time Library
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int min, max;
    unsigned int maximum;
    
    //Initialize Variables
    min=max=rand();//%6+1//Undue for for dice
    maximum=(1<<31) - 1;
    
    //Process/Map inputs to outputs
    for(int i=1;i<=2000000000;i++){
        int rnd=rand();//%6+1//Undue for dice
        if(rnd>max)max=rnd;
        if(rnd<min)min=rnd;
    }
    
    //Output data
    cout<<"The minimum = "<<min<<endl;
    cout<<"The maximum = "<<max<<endl;
    cout<<"2^31-1      = "<<maximum<<endl;
    
    //Exit stage right!
    return 0;
}