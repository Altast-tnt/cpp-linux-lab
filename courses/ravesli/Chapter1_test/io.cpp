#include <iostream>

using namespace std;

int readNumber()
{
    int x;
    cout << "Write a number: ";
    cin >> x;
    return x;
}

void writeAnswer(int x, int y)
{
    cout << "The answer is: " << x + y << endl;
}
