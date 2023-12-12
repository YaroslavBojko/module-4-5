#include <iostream>

int main() {
    int number1;
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    int number2;
    std::cout << "Enter the first number: ";
    std::cin >> number2;

    std::cout << "-----Checking-----" << std::endl;

    if(number1 % number2 == 0)
        std::cout << "Yes, " << number1 << " is divisible by " << number2 << " without a remainder!" << std::endl;
    else
        std::cout << "No, " << number1 << " is not divisible by " << number2 << " without a remainder!" << std::endl;
}
