#include <iostream>
#include <omp.h>

int main() {
#pragma omp parallel num_threads(4)
    {
        std::cout << "Hello world!\n" << std::endl;
    }

    return 0;
}
