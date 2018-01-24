#ifndef CARDCLASS_H_
#define CARDCLASS_H_

#include <iostream>  // Input & Output

class Card {
	std::string suit;
	std::string rank;
public:
	Card(); // Default Constructor
    Card(std::string, std::string); // Constructor w/ Parameters
    std::string getSuit() const; // Gets card suit
    std::string getRank() const; // Gets card rank
    std::string printCard() const; // returns the output of each card
};

#endif /* CARDCLASS_H_ */
