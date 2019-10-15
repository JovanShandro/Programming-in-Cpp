/*
	CH08-320143
	a5 p6.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Hand.h"
#include "Card.h"

using namespace std;

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()  
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}
 
void Hand::Clear()
{
    //iterate through vector, freeing all memory on the heap
    vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    //clear vector of pointers
    m_Cards.clear();
}

int Hand::GetTotal() const
{
	int total;

    // to be filled with content
    //case no cards in hand
    if(m_Cards.empty())
        return 0;
    /*
        as a general approach
        if the first card has a value
        of 0 then the total will be zero
        else we add all other cards and 
        handle the ace in the end
    */
    //adding the values
    total = 0;
    bool has_ace = false;
    for(auto it = m_Cards.begin(); it != m_Cards.end(); it++)
    {
        total +=(*it)->GetValue();
    }
    //check if there is an ace
    for(auto it = m_Cards.begin(); it != m_Cards.end(); it++)
    {
        if((*it)->GetValue() == Card::ACE)
            has_ace = true;
    }
    //handle the case when there is an ace
    if(has_ace && total <=11)
        total+=10;//take ace as 11 not 1

    return total;
}
