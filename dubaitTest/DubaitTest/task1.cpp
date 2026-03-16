#include <iostream>
#include <vector>


int task1()
{
    std::vector<int> F(100001, 0);

    // Из условия задачи
    F[1] = 1;
    F[2] = 2;

    int target_index = 0;

    for (int n = 3; n <= 100000; ++n)
    {
        for (int i = 0; i < 13; ++i)
        {
            // число с шагом
            target_index = n - 1 - (i * 2);
            if (target_index < 1)
            {
                break;
            } else
            {
                // запись последних 5 чисел (обход переполнения)
                F[n] = (F[n] + F[target_index]) % 100000;
            }
        }
    }

    return F[100000];
}
