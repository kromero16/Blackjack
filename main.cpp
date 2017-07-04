/* 
 * File:   main.cpp
 * Author: Kevin Romero
 *
 * Created on June 28, 2017, 8:43 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries
#include "Card.h"

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    //Declare Variables
    const int DECK_S=52;
    const int SUIT_S=4;
    const int FACE_S=13;
    
    Card *crd;
    
    
    for(int i=0;i<DECK_S;i++){
        crd=new Card(i);
    }
    
    for(int i=1;i<FACE_S+1;i++){
        for(int j=0;j<SUIT_S;j++){
            cout<<crd->getFace(static_cast<FACE>(i))<<" Of "
                    <<crd->getSuit(static_cast<SUIT>(j))<<"\n";
        }
    }
    
  

   
    
 

    
    //Exit stage right
    return 0;
}

