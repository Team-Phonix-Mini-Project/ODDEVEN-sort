#include <iostream>
using namespace std;

void oddEvenSort(int arr[], int n) {
    bool isSorted = false; // Initially, the array is unsorted

    while (!isSorted) {
        isSorted = true;

        // Perform odd-indexed passes (odd-even phase)
        for (int i = 1; i <= n - 2; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSorted = false; // If swapping occurs, array is not sorted
            }
        }

        // Perform even-indexed passes (even-odd phase)
        for (int i = 0; i <= n - 2; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSorted = false; // If swapping occurs, array is not sorted
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {34, 2, 10, -9, 3, 8, 4, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    oddEvenSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
