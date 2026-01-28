#include <iostream>
#include <string>
#include "Card.h"

std::string Card::getNameAdvantages(const Advantages &advantage) const
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

std::string Card::getNameSuits(const Suits &suit) const
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

int Card::getCardValue() const
{
    switch(m_advantage)
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

void Card::printCard() const
{
    std::string advantage = getNameAdvantages(m_advantage);
    std::string suit = getNameSuits(m_suit);

    if (advantage == "10")
    {
        std::cout << advantage << suit[0] << " ";
    } else
    {
        std::cout << advantage[0] << suit[0] << " ";
    }
}
