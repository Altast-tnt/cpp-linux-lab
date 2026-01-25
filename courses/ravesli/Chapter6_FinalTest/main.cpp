#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerWithItems.h"
#include "Students.h"
#include "ChangeFunc.h"
#include "CStyleString.h"
#include "CardGame.h"

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    auto deck = initializationDeck();
    std::cout << "Original deck:\n";
    printDeck(deck);
    shuffleDeck(deck);

    std::cout << "\nShuffled deck:\n";
    printDeck(deck);
    playBlackjack(deck);

//    printStringByWord("Hello World!");

//    int x = 1;
//    int y = 4;
//    changeInts(x, y);

//    getNameNGrade();
//    countTotalItems(3, 6, 12);
    return 0;
}
