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
    this->fillVec();
}

//Implement deck shuffle
void Deck::shuffleDeck(){
    std::random_shuffle(aDeck.begin(), aDeck.end());
}

void Deck::printVec(){
    vector<string>::const_iterator it;
    
    for(it=aDeck.begin();it!=aDeck.end();++it){
        cout<<*(it)<<" \n";
    }
}


//Implement print deck
void Deck::printDeck(){
    for(int i=1;i<FACE_S+1;i++){
        for(int j=1;j<SUIT_S+1;j++){
            cout<<aCard->getGivenCard(static_cast<FACE>(i), static_cast<SUIT>(j));
            cout<<" \n";
        }
    }
}

void Deck::fillVec(){
     for(int i=1;i<FACE_S+1;i++){
        for(int j=1;j<SUIT_S+1;j++){
            aDeck.push_back(aCard->getGivenCard(static_cast<FACE>(i),static_cast<SUIT>(j)));
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