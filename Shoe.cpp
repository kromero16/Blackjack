/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//System Libraries

//User Libraries
#include "Shoe.h"

//Implement constructor
Shoe::Shoe(){
    this->fillShoe();
}

//Implement fill function
void Shoe::fillShoe(){
    for(int i=0;i<NUM_DECKS;i++){
        aDeck = new Deck();
        aShoe.push_back(aDeck);
    }
}

//Implement print function 
void Shoe::printShoe(){
    vector<Deck *>::const_iterator it=aShoe.begin();
    for(it;it!=aShoe.end();++it){
        (*it)->prntVecOfCards();
    }
}

//implement shuffle
void Shoe::shuffleShoe(){
    
}
