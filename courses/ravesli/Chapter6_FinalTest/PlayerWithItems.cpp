#include <iostream>
#include <string>

enum class Items
{
    HEALTH_POISON,
    TORCH,
    ARROW,
    MAX_ITEMS,
};

std::string getItemName (Items item)
{
    switch(item)
    {
        case Items::ARROW:          return "arrows";
        case Items::HEALTH_POISON:  return "health poisons";
        case Items::TORCH:          return "torches";
        default:                    return "getItemsName(): Undefined item!";
    }
}

void countTotalItems(int countHealthPoisions, int countTorches, int countArrows)
{
    int maxItems = static_cast<int>(Items::MAX_ITEMS);
    int playerItems[maxItems] {countHealthPoisions, countTorches, countArrows};
    int totalAmount = 0;

    for (int i = 0; i < maxItems; ++i)
    {
        Items currentItem = static_cast<Items>(i);
        std::string itemName = getItemName(currentItem);
        std::cout << "The player has " << playerItems[i] << " " << itemName << '\n';
        totalAmount += playerItems[i];
    }

    std::cout << "Total amount of player`s items: " << totalAmount << '\n';
}
