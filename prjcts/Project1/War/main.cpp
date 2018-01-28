/* 
 * File:   main.cpp
 * Author: Elizabeth Andrade
 * Created on January 24, 2018, 6:20 PM
 * Purpose: Creating a game of War
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/ Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int comPlay();
int humPlay();
string winner(string, string);


//Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int MAX=52;
    int pscore, cscore, shuffle1, shuffle2, player, com;
    
    //Initialize Variables
    shuffle1=shuffle2=(rand()%52);
    
    shuffle1=player;
    shuffle2=com;
    
    
    //Play Cards
    comPlay();
    cout<<endl;
    humPlay();
    cout<<endl;
            
    //Output data
    winner(a,c);
    cout<<endl;
    
    
    //Exit stage right!
    return 0;
}    
    string winner(string a, string c){
        if(a==c){
            return "It's a Tie!";
        }else if(a>c){
            return "Player wins!";
        }else{
            return "Computer Wins!";
        }
        
    }
    


int humPlay(){
    //Declare
    int a=(2+rand()%13);
    int b=(rand()%4);
    
    cout<<"Player plays   :";
    
    if(a<=10){
        cout<<a;
    }else if(a==11){
        cout<<"Jack";
    }else if(a==12){
        cout<<"Queen";
    }else if(a==13){
        cout<<"King";
    }else{
        cout<<"Ace";
    }
    
    if(b==0){
        cout<<" of Spades";
    }else if(b==1){
        cout<<" of Diamonds";
    }else if(b==2){
        cout<<" of Hearts";
    }else{
        cout<<" of Clubs";
    }
   
}


int comPlay(){
        
    //Declare
    int c =(2+rand()%13);
    int d =(rand()%4);
    
    cout<<"Computer plays :";
    
    if(c<=10){
        cout<<c;
    }else if(c==11){
        cout<<"Jack";
    }else if(c==12){
        cout<<"Queen";
    }else if(c==13){
        cout<<"King";
    }else{
        cout<<"Ace";
    }
    
    if(d==0){
        cout<<" of Spades";
    }else if(d==1){
        cout<<" of Diamonds";
    }else if(d==2){
        cout<<" of Hearts";
    }else{
        cout<<" of Clubs";
    }

}
    
    
    
