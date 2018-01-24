#include "cardClass.h"

Card::Card() {

}

Card::Card(std::string cardSuit, std::string cardRank) {
	suit = cardSuit;
	rank = cardRank;
}

std::string Card::getSuit() const{
	return suit;
}

std::string Card::getRank() const{
	return rank;
}

std::string Card::printCard() const{
	return (rank + " of " + suit + '\n');
}
