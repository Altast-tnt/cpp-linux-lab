#pragma once
#include <array>
#include <string>
#include "ForCardGame.h"

constexpr int c_deckSize = 52;

std::array<Card, c_deckSize> initializationDeck();
void printDeck(const std::array<Card, c_deckSize> &deck);
void shuffleDeck(std::array<Card, c_deckSize> &deck);

