#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Apple.h"
#include "Banana.h"
#include "GrannySmith.h"
#include "Player.h"
#include "Monster.h"

std::string enterName()
{
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Welcome, "<< name << std::endl;
    return name;
}

int getRandomNumber(int min, int max);

void attackPlayer(Player &p, Monster &m)
{
    if (p.isDead()) return;

    p.reduceHealth(m.getDamage());
    std::cout << "The "<< m.getName() << " hit you for " << m.getDamage() << " damage.\n";

}

void attackMonster(Player &p, Monster &m)
{
    m.reduceHealth(p.getDamage());
    std:: cout << "You hit the "<< m.getName() << " for " << p.getDamage() << " damage.\n";
    if (m.isDead())
    {
        std::cout << "You killed the " << m.getName() << ".\n";
        p.addGold(m.getGold());
        p.levelUp();
        std::cout << "You are now level " << p.getLevel() << ".\n";
        std::cout << "You found " << m.getGold() << " gold.\n";
        return;
    }
    attackPlayer(p, m);
}

char chooseRunOrFight()
{
    char ans = 'k';
    while (ans != 'R' && ans != 'r' && ans != 'f' && ans !='F')
    {
        std::cout << "(R)un or (F)ight: ";
        std::cin >> ans;
    }
    return (ans == 'R' || ans == 'r') ? 'r' : 'f';
}

void fightMonster(Player &p)
{
    Monster m = Monster::getRandomMonster();
    std::cout << "You have encountered a " << m.getName() << " (" << m.getChar() << ").\n";

    while (!(m.isDead() || p.isDead()))
    {
        char ans = chooseRunOrFight();
        if (ans == 'r')
        {
            if (getRandomNumber(1, 2) == 1) // 50% шанс сбежать
            {
                std::cout << "You successfully fled.\n";
                break;
            }
            std::cout << "You failed to flee!\n";
            attackPlayer(p, m);
        } else if (ans == 'f')
        {
            attackMonster(p, m);
        }
    }



}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    std::string name = enterName();
    Player p(name);
    while(!(p.hasWon() || p.isDead()))
    {
        fightMonster(p);
    }
    if (p.hasWon())
    {
        std::cout << "You won and earned " << p.getGold() << " gold.\n";
    } else
    {
        std::cout << "You died at level " << p.getLevel() << " and with " << p.getGold() << " gold.\n";
        std::cout << "Too bad you can't take it with you!\n";
    }


//	Apple a("red");
//	Banana b;
//	GrannySmith c;
//
//	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
//	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
//	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
//    const Apple a("Red delicious", "red", 7.3);
//	std::cout << a;
//
//	const Banana b("Cavendish", "yellow");
//	std::cout << b;
    return 0;
}
