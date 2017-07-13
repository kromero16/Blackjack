/* 
 * File:   Hand.h
 * Author: Kevin Romero
 * Purpose: Hand Object
 * Created on July 12, 2017, 5:16 PM
 */

#ifndef HAND_H
#define HAND_H

//System Libraries
#include <vector>
using namespace std;

//User Libraries
#include "Card.h"
#include "Deck.h"

//Create Hand Class
class Hand{
private:
    vector<Card *> m_hand;
    int total;
    
public:
    //Constructor
    Hand();
    
    //Accessors
    void printHand();
    int getNumCards(){return m_hand.size();}
    int getHandTotal(){return total;}
    
    //Mutators
    void initDraw(Card *,Card *);
    void drawCard();
    void addCard(Card *);

};

#endif /* HAND_H */

