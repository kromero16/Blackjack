/* 
 * File:   main.cpp
 * Author: Kevin Romero
 *
 * Created on June 28, 2017, 8:43 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries
#include "Dealer.h"

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    //Create player and house
    Player user;
    Dealer house;
    
    //Print both user's hands
    cout<<"Your Hand: ";
    user.prntHand();
    cout<<" \n\n";
    cout<<"Hand Score: "<<user.getTotScore();
    cout<<"\n\n";
    cout<<"\nDealer Hand: ";
    house.prntDealerHand();
    cout<<"\n\n";
    cout<<"House Score: "<<house.getTotScore();
    cout<<"\n\n";
            
    

    
    //Exit stage right
    return 0;
}

