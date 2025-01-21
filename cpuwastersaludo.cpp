#include <iostream>
#include <thread>
#include <chrono>

void say_hello() {
    while (true) {
        std::cout << "Hola" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void say_goodbye() {
    while (true) {
        std::cout << "Adiós" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    std::thread thread1(say_hello);
    std::thread thread2(say_goodbye);

    thread1.join();
    thread2.join();

    return 0;
}
