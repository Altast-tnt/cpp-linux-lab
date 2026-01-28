#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "PlayerWithItems.h"
#include "Students.h"
#include "ChangeFunc.h"
#include "CStyleString.h"
#include "Card.h"
#include "Deck.h"


char chooseHitStand()
{
    char choose;
    std::cout << "hit (h)/stand (s): ";
    while (true)
    {
        if (std::cin >> choose)
        {
            switch(choose)
            {
                case 'H':
                case 'h':
                {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    return 'h';
                }
                case 'S':
                case 's':
                {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    return 's';
                }
                default:
                {
                    std::cout << "chooseHitStand(): Write h or s\n";
                }
            }
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "chooseHitStand(): Something went wrong\n";
    }
}


bool playBlackjack(Deck &deck)
{
    int playerTotal = 0;
	int dealerTotal = 0;

	// Дилер получает одну карту
	dealerTotal += deck.dealCard().getCardValue();
	std::cout << "The dealer is showing: " << dealerTotal << '\n';

	// Игрок получает две карты
	playerTotal += deck.dealCard().getCardValue();
	playerTotal += deck.dealCard().getCardValue();

	// Игрок начинает
	while (1)
	{
		std::cout << "You have: " << playerTotal << '\n';
		char choice = chooseHitStand();
		if (choice == 's')
			break;

		playerTotal += deck.dealCard().getCardValue();

		// Смотрим, не проиграл ли игрок
		if (playerTotal > 21)
			return false;
	}

	// Если игрок не проиграл (у него не больше 21 очка), тогда дилер получает карты до тех пор, пока у него будет не меньше 17 очков
	while (dealerTotal < 17)
	{
		dealerTotal += deck.dealCard().getCardValue();
		std::cout << "The dealer now has: " << dealerTotal << '\n';
	}

	// Если дилер проиграл, то игрок выиграл
	if (dealerTotal > 21)
		return true;

	return (playerTotal > dealerTotal);

}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
	Deck deck;
	deck.shuffleDeck();

	if (playBlackjack(deck))
		std::cout << "You win!\n";
	else
		std::cout << "You lose!\n";
//    printStringByWord("Hello World!");

//    int x = 1;
//    int y = 4;
//    changeInts(x, y);

//    getNameNGrade();
//    countTotalItems(3, 6, 12);
    return 0;
}
