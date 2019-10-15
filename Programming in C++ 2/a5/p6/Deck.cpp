/*
	CH08-320143
	a5 p6.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include <algorithm>
#include "Deck.h"

using namespace std;

Deck::Deck()
{ 
    m_Cards.reserve(52);
    Populate();
}

Deck::~Deck()
{}

void Deck::Populate()
{
    Clear();
    //create standard deck
    for (int s = Card::CLUBS; s <= Card::SPADES; ++s)
    {
        for (int r = Card::ACE; r <= Card::KING; ++r)
        {
            Add(new Card(static_cast<Card::rank>(r),
                         static_cast<Card::suit>(s)));
        }
    }
}

void Deck::Shuffle()
{
    random_shuffle(m_Cards.begin(), m_Cards.end());
}

void Deck::Deal(Hand& aHand)
{
	// to be filled with content  
	if(m_Cards.empty())
		cout<<"NO CARDS LEFT"<<endl;
	else
	{
		//if there are cards left 
		//then deal one card(take from deck to hand)
		aHand.Add(m_Cards.back());
		m_Cards.pop_back();
	}
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
    cout << endl;
    //continue to deal a card as long as generic player isn't busted and
    //wants another hit
    while ( !(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting() )
    {
        Deal(aGenericPlayer);
        cout << aGenericPlayer << endl;
        
        if (aGenericPlayer.IsBusted())
		{
            aGenericPlayer.Bust();
		}
    }
}