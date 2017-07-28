/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shoe.h
 * Author: kevin
 *
 * Created on July 28, 2017, 3:54 PM
 */

#ifndef SHOE_H
#define SHOE_H

//System Libraries
#include <vector>
#include <cstdlib>

//User Libraries
#include "Card.h"
#include "Deck.h"

//Create shoe object
class Shoe{
private:   
    static const int NUM_DECKS = 6;
    
    //deck to fill shoe
    Deck *aDeck;
    
    //vector to hold decks
    vector<Deck *> aShoe;
   
public: 
    //Constructor
    Shoe();
    
    //Deconstructor
    ~Shoe();
    
    //Accessors
    void printShoe();
    int getShoeSize(){return aShoe.size();}
    
   
    //Mutators
    void fillShoe();
    void shuffleShoe();
};



#endif /* SHOE_H */

