/*
	CH08-320143
	a5 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
public:
    Game(const std::vector<std::string>& names);
    
    ~Game();
    
    //plays the game of blackjack    
    void Play();

private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;  
};

#endif