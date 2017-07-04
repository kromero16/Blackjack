/*
 * File: Deck.cpp
 * Purpose: Implementation of Deck Object
 */

//System Libraries

//User Libraries
#include "Deck.h"

//Implement Constructor
Deck::Deck(){
    //Build Deck
    for(int i=0;i<DECK_S;i++){
        deck = new Card(i);
    }
}

//Print the ranked value of each card
void Deck::printRanks(){
    
}

//Print the deck of cards
void Deck::printDeck(){
    for(int i=1;i<FACE_S+1;i++){
      for(int j=0;j<SUIT_S;j++){
         cout<<deck->getFace(static_cast<FACE>(i))<<" Of "
                <<deck->getSuit(static_cast<SUIT>(j))<<"\n";
        }
    }
}

//Implement Deconstructor
Deck::~Deck(){
    delete deck;
}