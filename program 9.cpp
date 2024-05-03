#include <iostream>

template<typename T, size_t size>
T findMinimum(T (&arr)[size]) {
    T minVal = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    // Example usage with an array of integers
    int intArray[] = {4, 7, 2, 9, 1};
    std::cout << "Minimum value in intArray: " << findMinimum(intArray) << std::endl;

    // Example usage with an array of doubles
    double doubleArray[] = {3.14, 2.71, 1.618, 0.577};
    std::cout << "Minimum value in doubleArray: " << findMinimum(doubleArray) << std::endl;

    return 0;
}
