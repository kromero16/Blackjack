/* 
 * File:   Hand.h
 * Author: Kevin Romero
 * Purpose: Hand Object
 * Created on July 12, 2017, 5:16 PM
 */

#ifndef HAND_H
#define HAND_H

//System Libraries

//User Libraries
#include "Card.h"
#include "Deck.h"

//Create Hand Class
class Hand{
private:
    vector<Card *> m_hand;
    Deck aDeck;
    
public:
    //Constructor
    Hand();
    
    //Accessors
    void printHand();
    int getNumCards(){return m_hand.size();}
    
    //Mutators
    void drawCard();
    void addCard(Card *);

};

#endif /* HAND_H */

