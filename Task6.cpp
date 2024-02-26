#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(std::time(0));
    int secretNumber = rand() % 21;
    int guess = -1;
    int attempts = 0;

    cout << "Вгадайте число від 1 до 20." << endl;

    while (guess != secretNumber) {
        cout << "Введіть число від 1 до 20: ";
        cin >> guess;
        attempts++;

        if (guess < 0 || guess > 20) {
            cout << "Невірне значення! Введіть число в діапазоні від 1 до 20." << endl;
            continue;
        }

        if (guess < secretNumber) {
            cout << "Запропоноване число менше задуманого." << endl;
        } else if (guess > secretNumber) {
            cout << "Запропоноване число більше задуманого." << endl;
        } else {
            cout << "Ви вгадали число з " << attempts << " разу." << endl;
        }
    }

    return 0;
}