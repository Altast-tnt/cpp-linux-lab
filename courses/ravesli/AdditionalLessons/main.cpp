#include <iostream>
#include <string>
#include <string_view>
#include <algorithm>
#include <array>

//struct Student
//{
//    std::string name {""};
//    int grade {0};
//};

struct Season
{
  std::string_view name{};
  double averageTemperature{};
};

int main()
{
    std::array<Season, 4> seasons
    {
        { { "Spring", 285.0 },
        { "Summer", 296.0 },
        { "Fall", 288.0 },
        { "Winter", 263.0 } }
    };

    std::sort(seasons.begin(), seasons.end(), [](const auto &t1, const auto &t2)
                                                {return t1.averageTemperature < t2.averageTemperature;});

    for (const auto& season : seasons)
    {
        std::cout << season.name << '\n';
    }

//    std::array<Student, 8> arr
//    {
//        { { "Albert", 3 },
//        { "Ben", 5 },
//        { "Christine", 2 },
//        { "Dan", 8 },
//        { "Enchilada", 4 },
//        { "Francis", 1 },
//        { "Greg", 3 },
//        { "Hagrid", 5 } }
//    };
//
//    auto findBest
//    {
//        [](const auto &a, const auto &b) { return a.grade < b.grade; }
//    };
//
//    auto best
//    {
//        std::max_element(arr.begin(), arr.end(), findBest)
//    };
//
//    std::cout << best->name << " is the best student\n";

    return 0;
}
