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
    cout<<"Your Hand Total: "
        <<user.getTotScore()<<"\n";
    
    cout<<"Dealer Hand: ";
    house.prntDealerHand();
    cout<<" \n\n";
    cout<<"Dealer Hand Total: "
            <<house.getTotScore()<<"\n";
    

    
    //Exit stage right
    return 0;
}

