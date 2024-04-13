#include <iostream>
#include <omp.h>

int main() {
    int k;
    std::cout << "Enter the number of threads: ";
    std::cin >> k;

    omp_set_num_threads(k)

    #pragma omp parallel
    {
        int thread_num = omp_get_thread_num();
        int num_threads = omp_get_num_threads();
        std::cout << "I am " << thread_num << " thread from " << num_threads << " threads!" << std::endl;
    }

    return 0;
}
