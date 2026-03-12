#include <iostream>

unsigned long long  task1()
{
    // по 13 чисел выборка для рассчета сумм
    unsigned long long counts[26] {0};

    // Из условия задачи
    counts[0] = 1; // F[1] = 1
    counts[1] = 2; // F[2] = 2

    int maxNum = 100000;

    while (maxNum != 0)
    {
        // рассчет сумм
        for (int i = 2; i < 26; ++i)
        {
            // рассчет для нечетного числа
            if ((i+1) % 2 != 0)
            {
                for (int j = i; j >= 0; --j)
                {
                    if ((j+1) % 2 == 0)
                    {
                        counts[i] += counts[j];
                    }
                }
            }

            // рассчет для четного числа
            if ((i+1) % 2 == 0)
            {
                for (int j = i; j >= 0; --j)
                {
                    if ((j+1) % 2 != 0)
                    {
                        counts[i] += counts[j];
                    }
                }
            }
        }
        maxNum /= 25;
        // для двух чисел нужен подсчет отдельно

    }



    // вывод для проверки
    std::cout << "ПРОВЕРКА\n";
    for (int i = 0; i < 26; ++i)
    {
        std::cout << counts[i] << "\n";
    }

    return 1;
}
