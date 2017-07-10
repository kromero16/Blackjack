/*
 * File: Deck.cpp
 * Purpose: Implementation of Deck Object
 */

//System Libraries

//User Libraries
#include "Deck.h"

//Implement Constructor
Deck::Deck(){
    this->fillDeck();
}

void Deck::printDeck(){
    for(int i=1;i<FACE_S+1;i++){
        for(int j=1;j<SUIT_S+1;j++){
            cout<<aCard->getCurrentCard(static_cast<FACE>(i),static_cast<SUIT>(j));
            cout<<" \n";
        }
    }
}

//Implement fill deck
void Deck::fillDeck(){
    for(int i=1;i<FACE_S+1;i++){
        for(int j=1;j<SUIT_S+1;j++){
            aCard = new Card(static_cast<FACE>(i), static_cast<SUIT>(j));
        }
    }
}



//Implement Deconstructor
Deck::~Deck(){
    delete aCard;
}