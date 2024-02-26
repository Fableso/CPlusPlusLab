#include <iostream>

using namespace std;

int main()
{
    int n = 26;
    double sum = 1;
    double currentVariable = 1;
    cout << currentVariable << endl;

    for (int i = 0; i < n; i++)
    {
        currentVariable *= (-0.5);
        cout << currentVariable << endl;
        sum += currentVariable;
    }

    cout << sum;
    return 0;
}