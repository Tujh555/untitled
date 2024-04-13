#include <iostream>
#include <omp.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Hello from process: " << omp_get_thread_num() << std::endl;
    return 0;
}
