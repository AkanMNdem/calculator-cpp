#include <iostream>
#include "Calculator.cpp"

int main() {
    Calculator calc;
    int a, b;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        std::cerr << "Invalid input, please enter two numbers separated by a space" << std::endl;
        return -1;
    }
    
    std::cout << "Sum: " << calc.add(a,b) << std::endl;
    std::cout << "Difference: " << calc.subtract(a,b) << std::endl;
    std::cout << "Product: " << calc.multiply(a,b) << std::endl;
    std::cout << "Quotient: " << calc.divide(static_cast<double>(a), static_cast<double>(b)) << std::endl;
}