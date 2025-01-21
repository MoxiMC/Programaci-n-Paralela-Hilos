#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <windows.h>


void cpu_waster() {
    DWORD threadId = GetCurrentThreadId(); 
    std::cout << "CPU Waster Thread ID: " << threadId << std::endl;
    while (true) continue; 
}

int main() {
    DWORD processId = GetCurrentProcessId(); 
    std::cout << "Main Process ID: " << processId << std::endl;
    
    std::vector<std::thread> threads;
    
    for (int i = 0; i < 6; ++i) {
        threads.push_back(std::thread(cpu_waster)); 
    }

    
    for (auto &t : threads) {
        t.join(); 
    }

    return 0;
}
