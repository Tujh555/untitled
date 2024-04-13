#include <iostream>
#include <omp.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Hello from thread: " << omp_get_thread_num() << std::endl;
    return 0;
}
