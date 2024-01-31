#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter the numbers:" << std::endl;
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
    std::cout << "Before: a = " << a << ", b = " << b << std::endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    std::cout << "After: a = " << a << ", b = " << b << std::endl;
}
