#pragma once

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
