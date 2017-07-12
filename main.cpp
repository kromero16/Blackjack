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
    string str;
    cout<<"*******SHUFFLING DECK*********\n\n";
    //deck.shuffleDeck();
    cout<<"********PRINTING**********\n\n\n";
    //deck.printVec();
    cout<<"\n\n&&&&&&&DEALING A CARD ##########\n\n";
    //str=deck.dealCard();
    cout<<"********PRINTING**********\n\n\n";
    //deck.printVec();
    deck.printDeck();
    
    //cout<<"\n\n Card Dealt \n\n";
    //cout<<str<<"\n";
 
    
    //Exit stage right
    return 0;
}

