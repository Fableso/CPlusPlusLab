#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

void outputArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int findValue(int arr[], int size, int value)
{
    for(int i = 0; i < size; ++i) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    const int size = 10;
    int array[size];

    cout << "Будь ласка, введіть " << size << " елементів масиву:" << endl;
    for(int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    
    cout << "Ваш масив: " << endl;
    outputArray(array, size);

    cout << "Введіть значення для пошуку: ";
    int searchValue;
    cin >> searchValue;

    int found = findValue(array, size, searchValue);

    if (found == -1) {
        cout << "Значення не знайдено в масиві." << endl;
    } else
    {
        cout << "Значення " << searchValue << " знайдено на індексі " << found;
    }

    return 0;
}