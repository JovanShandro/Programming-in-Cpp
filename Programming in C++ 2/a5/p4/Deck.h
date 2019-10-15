/*
	CH08-320143
	a5 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
    Deck();
    
    virtual ~Deck();

    //create a standard deck of 52 cards
    void Populate();

    //shuffle cards
    void Shuffle();

    //deal one card to a hand
    void Deal(Hand& aHand);

    //give additional cards to a generic player 
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif