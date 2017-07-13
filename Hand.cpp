/* 
 * File:   Hand.cpp
 * Author: Kevin Romero
 * Purpose: Implementation of Hand Object for Blackjack
 * Created on July 12, 2017, 5:16 PM
 */

//System Libraries

//User Libraries
#include "Hand.h"

//Implement Default Constructor
Hand::Hand(){
    
}

//print the hand
void Hand::printHand(){
    vector<Card *>::const_iterator it=m_hand.begin();
    for(it;it!=m_hand.end();++it){
        cout<<(*it)->getGivenCard((*it)->getFace(),(*it)->getSuit());
        cout<<" \n";
    }
}

//Draw card from deck to hand
void Hand::drawCard(){
    Card *crd=new Card();
    crd=aDeck.dealCard();
    m_hand.push_back(crd);
}

