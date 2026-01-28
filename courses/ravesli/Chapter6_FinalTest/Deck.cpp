#include <iostream>
#include <cassert>
#include "Deck.h"
#include "Card.h"

Deck::Deck(){
    m_cardIndex = 0;
    int card = 0;
    for (int suit = 0; suit < Card::MAX_SUIT; ++suit)
        for (int advantage = 0; advantage < Card::MAX_ADVANTAGE; ++advantage)
        {
            m_deck[card] = Card(static_cast<Card::Advantages>(advantage), static_cast<Card::Suits>(suit));
            ++card;
        }
}

void Deck::printDeck() const
{
    int i = 0;
    for (const auto &card : m_deck)
    {
        card.printCard();
        if (++i % 13 == 0) std::cout << '\n';
    }
}

void Deck::swapCard(Card &firstCard, Card &secondCard)
{
    Card temp = firstCard;
    firstCard = secondCard;
    secondCard = temp;
}

int Deck::selectRandNum(int minNum, int maxNum)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(std::rand() * fraction * (maxNum - minNum + 1) + minNum);
}

void Deck::shuffleDeck()
{
    for (int i = 0; i < 52; ++i)
    {
        int randNum = selectRandNum(0, 52 - 1);
        swapCard(m_deck[i], m_deck[randNum]);
    }
    m_cardIndex = 0;
}


const Card& Deck::dealCard()
{
    assert (m_cardIndex < 52);
    return m_deck[m_cardIndex++];
}



