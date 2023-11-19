#include <string>
#include <iostream>

double getTotal(double prices[], int size);

int main() {
    // array is a collection of the same data types
    // values are stored in contiguous memory locations and accessed using indices

    //std::string car = "Tesla";
    std::string cars[5] = {"Tesla", "BMW", "Mercedes", "Audi", "Ford"};

    std::cout << cars << std::endl; // prints the memory address of the array
    std::cout << cars[0] << std::endl; // prints the first element of the array
    std::cout << cars[9] << std::endl; // prints the 10th element of the array

    // sizeof() returns the size of the array in bytes

    std::cout << sizeof(cars) << std::endl; // prints 160 bytes
    // division of sizeof() by sizeof() returns the number of elements in the array

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
        std::cout << cars[i] << "\n\n";
    }

    //foreach loop
    for (std::string car : cars) {
        std::cout << car << std::endl;
    }

    // array of prices
    double prices[5] = {1.2, 3.4, 5.6, 7.8, 9.0};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    return 0;
}

double getTotal(double prices[], int size) { // prices[] is a pointer to the first element of the array, so the function doesnt know the size of the array
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}