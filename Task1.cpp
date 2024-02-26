#include <iostream>

using namespace  std;
int main()
{
    int const n = 26;
    int firstNumber, secondNumber, thirdNumber;
    cin >> firstNumber >> secondNumber >> thirdNumber;
    int list[] = {firstNumber, secondNumber, thirdNumber};
    for(int number : list)
    {
        if (number > 0 && number < n)
            cout << number << endl;
    }
    return 0;
}