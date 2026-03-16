#include <iostream>
#include <vector>

void task2()
{
    std::vector<int> N(1);

    //  1! = 1
    N[0] = 1;

    for (int i = 2; i <= 2000; ++i)
    {
        int carry = 0;
        for (int j = 0; j < N.size(); ++j)
        {
            carry += N[j] * i;
            N[j] = carry % 10;
            carry = carry / 10;

        }


        while (carry > 0)
        {
            N.push_back(carry % 10);
            carry /= 10;
        }

    }

    std::cout << "Ответ: - ";
    for (int i = N.size() - 1; i >= 0; --i)
    {
        std::cout << N[i];
    }
}
