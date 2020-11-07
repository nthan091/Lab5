#pragma once

#include <iostream>
using namespace std; 
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "CardsSet.h"

class Player {
public:
	Player(CardsSet& cardPacket, bool isComputer) : packet(cardPacket), computer(isComputer) {}
	int play(); 
private: 
	CardsSet inhand; 
	CardsSet& packet; 
	const bool computer; 
	int countPoints();
};

int Player::play() {
	//take a card from the top of the packet and put it in the hand
	
	Card newCard = set[0]; 
	number = number + 1; 


}

int Player::countPoints() {
	//count the points of the cards in hand
	int total = 0; 

	for (int i = 0; i < CardsSet.numCards(); i++) {
		if CardsSet.numCards() == 0 {
			return 0;
		}
		else {
			total = total + c.value; 
		} 
	}

}
