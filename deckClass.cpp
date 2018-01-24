#include "deckClass.h"

Deck::Deck() {
	std::string cSuit [] = {"Clubs", "Diamonds", "Hearts", "Spades"};
	std::string cRank [] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};

	for(int i = 0; i < DECK_SIZE; i++)
	{
		/* Because C++'s integer division only gives whole numbers, i / 13 will result in 0 except when i = 13-25, 26-38,
		 * and 39-51. In which case the quotient will equal 1, 2, and 3 respectively. This allows all 13 card ranks to be
		 * assigned to a card suit while looping through a total of 52 cards. Using the modulo operator for the card ranks
		 * makes sense as it uses the remainder of the i % 13 calculation to traverse through the cRank[] array a total of
		 * four times(the number of suits).
		 */
		deckOfCards[i] = Card(cSuit[i / 13], cRank[i % 13]);  // Initializing deck
	}
}

void Deck::randomShuffle() {
	Card tempCard;
	srand(time(NULL));

	for(int i = DECK_SIZE - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		/* swapping cards */
		tempCard = deckOfCards[i];
		deckOfCards[i] = deckOfCards[j];
		deckOfCards[j] = tempCard;
	}
}

void Deck::perfectShuffle() {
	Card firstHalfDeck[HALF_SIZE];
	Card secondHalfDeck[HALF_SIZE];
    int i;
	int j;

	/* split the deck's first 26 cards */
	for(i = 0; i < HALF_SIZE; i++)
	{
		firstHalfDeck[i] = deckOfCards[i];
	}

	/* split the deck's last 26 cards */
	i = 0;
	for(j = HALF_SIZE; j < DECK_SIZE; j++)
	{
		secondHalfDeck[i] = deckOfCards[j];
		i++;
	}

	/* shuffle both halves of the deck back into the original deck */
	int initial = 0;
	int next = 1;
	for(i = 0; i < HALF_SIZE; i++)
	{
		deckOfCards[initial] = firstHalfDeck[i];
		deckOfCards[next] = secondHalfDeck[i];

		initial+=2;
		next+=2;
	}
}

bool Deck::deckNotEqual(Deck shuffledDeck) const{
	for(int i = 0; i < DECK_SIZE; i++)
	{
		if(deckOfCards[i].Card::getRank() != shuffledDeck.deckOfCards[i].Card::getRank() ||
		   deckOfCards[i].Card::getSuit() != shuffledDeck.deckOfCards[i].Card::getSuit())
			return true;
	}
	return false;
}

void Deck::printDeck() const{
	for(int i = 0; i < DECK_SIZE; i++)
		std::cout << deckOfCards[i].printCard();
}
