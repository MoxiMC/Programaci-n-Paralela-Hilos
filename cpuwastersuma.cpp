#include <iostream>
#include <thread>

void calculator() {
    int a, b;
    std::cout << "Ingrese dos números: ";
    std::cin >> a >> b;
    std::cout << "La suma es: " << (a + b) << std::endl;
}

int main() {
    std::thread thread1(calculator);
    std::thread thread2(calculator);

    thread1.join();
    thread2.join();

    return 0;
}
