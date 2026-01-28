#pragma once
#include "Card.h"
#include <array>

class Deck
{
private:
    std::array<Card, 52> m_deck;
    int m_cardIndex = 0;

    static int selectRandNum(int minNum, int maxNum);
    static void swapCard(Card &firstCard, Card &secondCard);

public:
    Deck();

    void printDeck() const;
    void shuffleDeck();
    const Card& dealCard();
};
