/**
 * @file
 * @brief C++ program to find factorial of given number
 */
#include <iostream>

/** function to find factorial of given number */
unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

/** Main function */
int main() {
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Factorial of " << num << " is " << factorial(num)
              << std::endl;

    return 0;
}