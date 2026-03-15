#include <iostream>




unsigned long long  task1()
{
    unsigned long long counts[28] {0};

    // Из условия задачи
    counts[0] = 1; // F[1] = 1
    counts[1] = 2; // F[2] = 2

    int maxNum = 100000;
    // до 100000
    int iter = 1;
    // для сумм - будет считаться в обратном порядке от основного итератора
    int sumIter = iter;


    while (iter != maxNum)
    {
        // попробовать через указатели двигаться пачками по 26
        // рассчет сумм
        for (int i = 0; i < 28; ++i)
        {
            // рассчет для нечетного числа
            // исключение самого первого числа из рассчета
            if ((iter % 2 != 0) & (iter != 1))
            {
                for (int j = i; j >= 0; --j)
                {
                    if (sumIter % 2 == 0)
                    {
                        counts[i] += counts[j];
                    }
                    --sumIter;
                }
            }

            // рассчет для четного числа
            // исключение второго числа из рассчета
            if ((iter % 2 == 0) & (iter != 2))
            {
                for (int j = i; j >= 0; --j)
                {
                    if (sumIter % 2 != 0)
                    {
                        counts[i] += counts[j];
                    }
                    // двигаемся назад по списку чисел
                    --sumIter;
                }
            }

            if (iter == maxNum)
            {

                break;
            }
            // переход к следующему числу
            ++iter;
            sumIter = iter;
        }
    }





// нужно чтобы в цикле было 13 чисел, из 25 получается по 12
// либо внутри цикла менять количество условий и итераций
// либо думать над новым условием цикла

    // вывод для проверки
    std::cout << "ПРОВЕРКА\n";
    for (int i = 0; i < 28; ++i)
    {
        std::cout << counts[i] << "\n";
    }

    std::cout << iter << "\n";
    std::cout << counts[27] << "\n";
    std::cout << counts[28] << "\n";

    return 1;
}
