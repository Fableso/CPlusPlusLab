#include <iostream>

using namespace std;


int main() {
    int cashRegister[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int sum;
    cout << "Enter amount of money you need: ";
    cin >> sum;
    cout << endl;
    int countBanknotes = 0;
    while(sum > 0) {
        for (int banknote : cashRegister) {
            if (sum >= banknote) {
                cout << "Cash register gives you a " << banknote << "$ banknote." << endl;
                countBanknotes++;
                sum -= banknote;
                break;
            }
        }
    }
    cout << endl << countBanknotes << " banknotes have been given to you.";
    return 0;
}