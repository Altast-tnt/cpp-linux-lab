#include <iostream>
#include <string>
#include <algorithm>
#include <array>

struct Student
{
    std::string name {""};
    int grade {0};
};

int main()
{
    std::array<Student, 8> arr
    {
        { { "Albert", 3 },
        { "Ben", 5 },
        { "Christine", 2 },
        { "Dan", 8 },
        { "Enchilada", 4 },
        { "Francis", 1 },
        { "Greg", 3 },
        { "Hagrid", 5 } }
    };

    auto findBest
    {
        [](const auto &a, const auto &b) { return a.grade < b.grade; }
    };

    auto best
    {
        std::max_element(arr.begin(), arr.end(), findBest)
    };

    std::cout << best->name << " is the best student\n";

    return 0;
}
