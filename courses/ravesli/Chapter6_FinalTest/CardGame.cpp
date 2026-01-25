#include <iostream>
#include <array>
#include <cstdlib>
#include <string>
#include <limits>
#include "CardGame.h"



std::string getNameAdvantages(const Advantages &advantage)
{
    switch(advantage)
    {
        case Advantages::TWO:    return "2";
        case Advantages::THREE:  return "3";
        case Advantages::FOUR:   return "4";
        case Advantages::FIVE:   return "5";
        case Advantages::SIX:    return "6";
        case Advantages::SEVEN:  return "7";
        case Advantages::EIGHT:  return "8";
        case Advantages::NINE:   return "9";
        case Advantages::TEN:    return "10";
        case Advantages::JACK:   return "Jack";
        case Advantages::QUEEN:  return "Queen";
        case Advantages::KING:   return "King";
        case Advantages::ACE:    return "Ace";
        default:                 return "getNameAdvantages(): Unknown advantage!";
    }
}

std::string getNameSuits(const Suits &suit)
{
    switch(suit)
    {
        case Suits::CLUBS:    return "Clubs";
        case Suits::SPADES:   return "Spades";
        case Suits::HEARTS:   return "Hearts";
        case Suits::DIAMONDS: return "Diamonds";
        default:              return "getNameSuits(): Unknown suit!";
    }
}

int getCardValue(const Card &card)
{
    switch(card.advantage)
    {
        case Advantages::TWO:    return 2;
        case Advantages::THREE:  return 3;
        case Advantages::FOUR:   return 4;
        case Advantages::FIVE:   return 5;
        case Advantages::SIX:    return 6;
        case Advantages::SEVEN:  return 7;
        case Advantages::EIGHT:  return 8;
        case Advantages::NINE:   return 9;
        case Advantages::TEN:
        case Advantages::JACK:
        case Advantages::QUEEN:
        case Advantages::KING:   return 10;
        case Advantages::ACE:    return 11;
        default:                 return 0;
    }
}


void printCard(const Card &card)
{
    std::string advantage = getNameAdvantages(card.advantage);
    std::string suit = getNameSuits(card.suit);

    if (advantage == "10")
    {
        std::cout << advantage << suit[0] << " ";
    } else
    {
        std::cout << advantage[0] << suit[0] << " ";
    }
}


std::array<Card, c_deckSize> initializationDeck()
{
    int maxAdvantage = static_cast<int>(Advantages::MAX_ADVANTAGE);
    int maxSuit = static_cast<int>(Suits::MAX_SUIT);

    std::array<Card, c_deckSize> deck;
    int cardCount = 0;

    for (int suit = 0; suit < maxSuit; ++suit)
    {
        for (int advantage = 0; advantage < maxAdvantage; ++advantage)
        {
            deck[cardCount].advantage = static_cast<Advantages>(advantage);
            deck[cardCount].suit = static_cast<Suits>(suit);
            ++cardCount;
        }
    }
    return deck;
}

void printDeck(const std::array<Card, c_deckSize> &deck)
{
    int i = 0;
    for (const auto &card : deck)
    {
        printCard(card);
        if (++i % 13 == 0) std::cout << '\n';
    }
}

void swapCard(Card &firstCard, Card &secondCard)
{
    Card temp = firstCard;
    firstCard = secondCard;
    secondCard = temp;
}

int selectRandNum(int minNum, int maxNum)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(std::rand() * fraction * (maxNum - minNum + 1) + minNum);
}


void shuffleDeck(std::array<Card, c_deckSize> &deck)
{
    for (int i = 0; i < c_deckSize; ++i)
    {
        int randNum = selectRandNum(0, c_deckSize - 1);
        swapCard(deck[i], deck[randNum]);
    }
}

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


bool playBlackjack(std::array<Card, c_deckSize> &deck)
{
    Card *cardPtr = &deck[0];
    int playerResult {0};
    int dilerResult {0};

    dilerResult += getCardValue(*cardPtr++);
    playerResult += getCardValue(*cardPtr++);
    playerResult += getCardValue(*cardPtr++);

    while (true)
    {
        std::cout << "You have: " << playerResult << " points.\n";
        if (playerResult > 21)
        {
            std::cout << "You lose.\n";
            return false;
        }
        if (chooseHitStand() == 's')
        {
            break;
        }
        playerResult += getCardValue(*cardPtr++);
    }

    std::cout << "Dealer's turn...\n";
    while (dilerResult <= 17)
    {
        dilerResult += getCardValue(*cardPtr++);
        std::cout << "Dealer now has: " << dilerResult << " points.\n";
    }

    if (dilerResult > 21)
    {
        std::cout << "You win.\n";
        return true;
    }

    if (playerResult > dilerResult)
    {
        std::cout << "You win with " << playerResult << " vs " << dilerResult << "\n";
        return true;
    } else
    {
        std::cout << "You lose with " << playerResult << " vs " << dilerResult << "\n";
        return false;
    }

}

