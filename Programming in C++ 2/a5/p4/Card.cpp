/*
	CH08-320143
	a5 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{} 

int Card::GetValue() const
{
	int value;

	// to be filled with content

	return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}

//overloads << operator so Card object can be sent to cout
ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", 
                            "10", "J", "Q", "K"};
    const string SUITS[] = {"c", "d", "h", "s"};

    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }

    return os;
}
