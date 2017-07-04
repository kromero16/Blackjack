/*
 * File: Deck.cpp
 * Purpose: Implementation of Deck Object
 */

//System Libraries
#include <iostream>

//User Libraries
#include "Deck.h"

//Implement Constructor
Deck::Deck(){
    for(int i=0;i<DECK_S;i++){
        card = new Card(i);
    }
}

//Print the deck of cards
void Deck::printDeck(){
    for(int i=1;i<FACE_S+1;i++){
      for(int j=0;j<SUIT_S;j++){
         cout<<card->getFace(static_cast<FACE>(i))<<" Of "
                <<card->getSuit(static_cast<SUIT>(j))<<"\n";
        }
    }
}

//Implement Deconstructor
Deck::~Deck(){
    delete card;
}