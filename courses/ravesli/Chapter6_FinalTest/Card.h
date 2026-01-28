#pragma once

class Card
{
public:
    enum Advantages
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

    enum Suits
    {
        CLUBS,
        SPADES,
        HEARTS,
        DIAMONDS,
        MAX_SUIT,
    };

private:
    Advantages m_advantage;
    Suits m_suit;

public:
    Card(Advantages advantage = MAX_ADVANTAGE, Suits suit = MAX_SUIT) : m_advantage(advantage), m_suit(suit)
    {}

    int getCardValue() const;
    void printCard() const;
    std::string getNameAdvantages(const Advantages &advantage) const;
    std::string getNameSuits(const Suits &suit) const;
};
