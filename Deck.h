/* 
 * File:   Deck.h
 * Author: Kevin Romero
 * Purpose: Deck Object using a Card Class
 * Created on July 4, 2017, 10:29 AM
 */

#ifndef DECK_H
#define DECK_H

//System Libraries
#include <iostream>

//User Libraries
#include "Card.h"

//Create Deck Class
class Deck{
private:
    //Declare Variables
    const int DECK_S=52;
    const int SUIT_S=4;
    const int FACE_S=13;
    
    //Card Object to Build Deck
    Card *card;
    
public:
    //Constructor
    Deck();
    
    //Deconstructor
    ~Deck();
    
    //Accessors
    void printDeck();
    
};



#endif /* DECK_H */

