#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <climits>

using namespace std;

void outputList(vector<int> list)
{
    for (int element : list) {
        cout << element << " ";
    }
    cout << endl;
}

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


int main() {
    int const n = 36;
    int x[n], m;
    fillArray(x, n);
    cout << "Initial array: " << endl;
    outputArray(x, n);
    cout << "Enter m: " << endl;
    cin >> m;
    vector<int> list;
    for(int num : x)
    {
        if (abs(num) > m)
            list.push_back(num);
    }
    cout << "Result array: " << endl;
    outputList(list);
    return 0;
}
