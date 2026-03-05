#include <iostream>
#include <limits>
#include <cctype>

int main()
{
    char c;
    std::cout.setf(std::ios::uppercase);
    std::cin >> c;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout <<  (char)toupper(c) << std::endl;
    return 0;
}
