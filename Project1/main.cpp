#include "util.h"
int main() {
    const int size = 10;
    int arr[size];

    initializeArray(arr, size, -50, 50);

    cout << "Array: " << arrayToString(arr, size) << endl;

    int sum = sumElementsBetween(arr, size);
    cout << "Sum of elements between max (by absolute value) and min (by absolute value): " << sum << endl;

    return 0;
}