#include <iostream>

using namespace std;

int main()
{
    //int const n = 26;
    int firstNumber, secondNumber, thirdNumber;

    cin >> firstNumber >> secondNumber >> thirdNumber;
    int list[] = {firstNumber, secondNumber, thirdNumber};

    int min = INT_MAX;

    for (int number : list)
    {
        if (min > number)
        {
            min = number;
        }
    }

    cout << min;

    return 0;
}