#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>

using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j+1]);
            }
        }
    }
}

void fillArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() - RAND_MAX / 2;
    }
}

void outputArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void combineArrays(int firstArray[], int secondArray[], int combinedArray[], int firstSize, int secondSize)
{
    for (int i = 0; i < firstSize; ++i) {
        combinedArray[i] = firstArray[i];
    }
    for (int i = 0; i < secondSize; ++i) {
        combinedArray[firstSize + i] = secondArray[i];
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int const n = 36;
    int arr1[n], arr2[n];
    fillArray(arr1, n);
    fillArray(arr2, n);
    cout << "Fist array: " << endl;
    outputArray(arr1, n);
    cout << "Second array: " << endl;
    outputArray(arr2, n);
    
    int resultArr[n * 2];
    combineArrays(arr1, arr2, resultArr, n, n);
    bubbleSort(resultArr, 2 * n);
    cout << endl << "Result arr: " << endl;
    outputArray(resultArr, 2 * n);
    
    return 0;
}
