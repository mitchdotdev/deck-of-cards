#include "menu.h"

#include <iostream>  // Input & Output

int menu() {
	int choice;
	std::cout << "\n\nWould you like to shuffle the deck of 52 cards . . .\n\n"
			 << "Randomly  [1]\n"
			 << "Perfectly [2]\n"
			 << "Exit      [0]\n"
			 << ": ";
	std::cin  >> choice;

  while(std::cin.fail() || (choice > 2 || choice < 0)) // checks for input stream failure and out-of-bound inputs
	{
	  std::cin.clear();
	  std::cin.ignore(100, '\n');
	  std::cout << "\n\nPlease only enter a choice displayed\n\n";
	  std::cout << "Would you like to shuffle the deck of 52 cards . . .\n\n"
				 << "Randomly  [1]\n"
				 << "Perfectly [2]\n"
				 << "Exit      [0]\n"
				 << ": ";
	  std::cin  >> choice;
	}
	return choice;
}
