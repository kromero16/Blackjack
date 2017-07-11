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
    deck.shuffleDeck();
    deck.printVec();
    
    //Exit stage right
    return 0;
}

