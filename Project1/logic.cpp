#include "util.h"

void initializeArray(int* arr, int size, int minVal, int maxVal) {
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}


string arrayToString(const int* arr, int size) {
    string result;
    for (int i = 0; i < size; ++i) {
        result += to_string(arr[i]);
        if (i != size - 1) {
            result += ", ";
        }
    }
    return result;
}


int sumElementsBetween(const int* arr, int size) {
    if (size == 0) return 0;

    int maxIdx = -1, minIdx = -1;
    int maxAbs = 0, minAbs = INT_MAX;

    for (int i = 0; i < size; ++i) {
        int absVal = abs(arr[i]);
        if (absVal >= maxAbs) {
            maxAbs = absVal;
            maxIdx = i;
        }
        if (absVal < minAbs) {
            minAbs = absVal;
            minIdx = i;
        }
    }

    if (minIdx > maxIdx) swap(minIdx, maxIdx);

    int sum = 0;
    for (int i = minIdx + 1; i < maxIdx; ++i) {
        sum += arr[i];
    }

    return sum;
}