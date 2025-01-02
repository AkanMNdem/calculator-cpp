#include "Calculator.h"
#include <stdexcept>
#include <iostream>

int Calculator::add(int x, int y) {
    return x + y;
}

int Calculator::subtract(int x, int y) {
    return x - y;
}

int Calculator::multiply(int x, int y) {
    return x * y;
}

int Calculator::divide(double x, double y) {
    if (y == 0) {
        throw std::runtime_error("Illegal division by zero");
        return -1;
    }
    std::cout << "a = " << x << "b = " << y << std::endl;
    return x / y;
}