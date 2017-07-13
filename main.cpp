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
#include "Deck.h"
#include "Card.h"

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    Deck deck;
    deck.printVec();
    deck.dealCard();
    cout<<"\nCard that was dealt: ";
    deck.printDlt();
    cout<<"\n\n";
    cout<<"\nPrinting the deck after dealing: \n";
    deck.printVec();
    
   
    
    //Exit stage right
    return 0;
}

