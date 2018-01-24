#ifndef DECKCLASS_H_
#define DECKCLASS_H_

#include <iostream>  // Input & Output
#include <stdlib.h>  // srand, rand
#include <time.h>    // time

#include "cardClass.h"

const int DECK_SIZE = 52;
const int HALF_SIZE = 26;

class Deck {
	Card deckOfCards[DECK_SIZE];
public:
	Deck(); // Default Constructor - Initializes card deck in order
	void randomShuffle(); // Shuffle cards in a random fashion
	void perfectShuffle(); // Perform a perfect shuffle
	bool deckNotEqual(Deck) const; // Check equality between the original deck and the shuffled deck
    void printDeck() const; // Print Card Deck
};

#endif /* DECKCLASS_H_ */
