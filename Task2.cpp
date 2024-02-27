#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>

using namespace std;

void outputArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArray(int arr[], int size)
{
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() - RAND_MAX / 2;
    }
}

void switchNegativeToPositive(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0)
            arr[i] = abs(arr[i]);
    }
}


int main() {
    int const n = 36;
    int x[n];
    fillArray(x, n);
    cout << "Initial array: " << endl;
    outputArray(x, n);
    switchNegativeToPositive(x, n);
    cout << "Result array: " << endl;
    outputArray(x, n);
    return 0;
}