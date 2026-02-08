#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cmath>


int inputNum()
{
    int c {-1};
    while (!(std::cin >> c) || (c <= 0))
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cout << "inputNum(): Not a number. Try again: ";
        } else
        {
            std::cout << "inputNum(): Number must be > 0. Try again: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return c;
}

int selectRandNum(int minNum, int maxNum)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(std::rand() * fraction * (maxNum - minNum + 1) + minNum);
}

void initializeVect(std::vector<int> &v, int startNum)
{
    // Выбор рандомного числа из диапаноза 2-4 (включиельно) - множитель для всех чисел в списке
    int multiplier = selectRandNum(2, 4);
    for (auto &element : v)
    {
        // Начинаем с числа, которое указал пользователь
        // Возводим число в квадрат и умножаем на рандомное число
        element = (startNum * startNum) * multiplier;

        ++startNum;
    }
    // После инициализации сразу предупреждаем пользователя о начале игры
    std::cout << "I generated "<< v.size() << " square numbers. Do you know what each number is after multiplying it by " << multiplier << "?\n";
}

void printVect(const std::vector<int> &v)
{
    for (const auto &element : v)
    {
        std::cout << element << " ";
    }
}

bool predictNumber(std::vector<int> &v)
{

    // Предположительное число от пользователя
    std::cout << "> ";
    int predictNum = inputNum();

    auto found = std::find(v.begin(), v.end(), predictNum);

    if (found != v.end())
    {
        v.erase(found);

        // Если не осталось чисел - победа
        if (v.empty())
        {
            std::cout << "Nice! You found all numbers, good job!\n";
            return false;
        }

        // Продолжение игры
        std::cout << "Nice! " << v.size() << " numbers left.\n";
        return true;
    }

    auto closest = std::min_element(v.begin(), v.end(), [predictNum](int a, int b) {
        return std::abs(a - predictNum) < std::abs(b - predictNum);
    });

    // Вычисляем саму дистанцию до ближайшего
    int distance = std::abs(*closest - predictNum);

    // Вывод результата проигрыша
    std::cout << predictNum << " is wrong!";

    if (distance <= 4)
    {
        std::cout << " Try " << *closest << " next time.";
    }

    std::cout << "\n";

    return false;
}


int main()
{
    // Установка стартового значения для рандомайзера (текущее время)
    srand(static_cast<unsigned int>(time(nullptr)));

    // Старт - установка диапазона значений пользователем
    std::cout << "Start where? ";
    int startNum = inputNum();
    std::cout << "How many? ";
    int countNum = inputNum();

    // Объявление вектора
    std::vector<int> intVect(countNum);

    // Заполнение вектора по правилам игры
    initializeVect(intVect, startNum);

    while(predictNumber(intVect))
    {
    }

    return 0;
}
