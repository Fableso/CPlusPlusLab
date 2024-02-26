#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введіть ціле число, яке не менше за 2: ";
    cin >> n;

    if (n < 2) {
        cout << "Число повинне бути не менше 2." << endl;
        return 0;
    }

    int i = 2;
    while (n % i != 0) {
        i++;
    }

    cout << "Найменший натуральний дільник, відмінний від 1, числa " << n << " є " << i << endl;

    return 0;
}