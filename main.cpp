#include "main.h"

int main() {
	Deck mainDeck; // Starting deck
	Deck modifiedDeck; // Shuffled deck

	int shuffleCount = 0; // number of shuffles

  switch(menu())
  {
      case 1: // Random Shuffle
	      std::cout << "\n\n- - - INITIAL DECK - - -\n\n";
		  mainDeck.printDeck();
		  modifiedDeck.randomShuffle();
		  std::cout << "\n\n- - - RANDOMLY SHUFFLED DECK - - -\n\n";
		  modifiedDeck.printDeck();
		  while(mainDeck.deckNotEqual(modifiedDeck)) // Comparing starting deck to shuffled deck
		  {
			   modifiedDeck.randomShuffle();
			   shuffleCount++;
		  }
		  std::cout << "IT TOOK " << shuffleCount << " RANDOM SHUFFLES TO RETURN TO THE ORIGINAL DECK\n\n";
		  std::cout << "- - - FINAL DECK - - -\n\n";
		  modifiedDeck.printDeck();
		break;
      case 2: // Perfect Shuffle
		  std::cout << "\n\n- - - INITIAL DECK - - -\n\n";
		  mainDeck.printDeck();
	      modifiedDeck.perfectShuffle();
		  std::cout << "\n\n- - - PERFECTLY SHUFFLED DECK - - -\n\n";
		  modifiedDeck.printDeck();
		  while(mainDeck.deckNotEqual(modifiedDeck)) // Comparing starting deck to shuffled deck
		  {
		       modifiedDeck.perfectShuffle();
			   shuffleCount++;
		  }
		  std::cout << "IT TOOK " << shuffleCount << " PERFECT SHUFFLES TO RETURN TO THE ORIGINAL DECK\n\n";
		  std::cout << "- - - FINAL DECK - - -\n\n";
		  modifiedDeck.printDeck();
		break;
	  case 0: // Exit
	    break;
  }
  return 0;
}
