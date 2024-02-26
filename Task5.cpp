#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int N, first = 0, second = 1, next;

    cout << "Введіть кількість елементів послідовності Фібоначчі: ";
    cin >> N;

    cout << "Послідовність Фібоначчі: ";

    for (int i = 0; i < N; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }

    cout << endl;
    return 0;
}