#include <iostream>
#include <array>
#include <cstdlib>

constexpr int c_deckSize = 52;

enum class Advantages
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    MAX_ADVANTAGE,
};

enum class Suits
{
    CLUBS,
    SPADES,
    HEARTS,
    DIAMONDS,
    MAX_SUIT,
};


struct Card
{
    Advantages advantage;
    Suits suit;
};

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
    switch(card.suit)
    {
        case TWO:    return 2;
        case THREE:  return 3;
        case FOUR:   return 4;
        case FIVE:   return 5;
        case SIX:    return 6;
        case SEVEN:  return 7;
        case EIGHT:  return 8;
        case NINE:   return 9;
        case TEN:    return 10;
        case JACK:   return 10;
        case QUEEN:  return 10;
        case KING:   return 10;
        case ACE:    return 11;
    }
    return 0;
}


void printCard(const Card &card)
{
    std::string advantage = getNameAdvantages(card.advantage);
    std::string suit = getNameSuits(card.suit);

    if (advantage == "10")
    {
        std::cout << advantage << suit[0] << '\n';
    } else
    {
        std::cout << advantage[0] << suit[0] << '\n';
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
    for (auto &card : deck)
    {
        printCard(card);
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

void cardGame()
{


}

