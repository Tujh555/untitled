#include <iostream>
#include <omp.h>

int main() {
    int k;
    std::cout << "Введите k: ";
    std::cin >> k;

    omp_set_num_threads(k);

    #pragma omp parallel
    {
        int thread_num = omp_get_thread_num();
        int num_threads = omp_get_num_threads();
        printf("I am %d thread from %d threads!\n", thread_num, num_threads);
    }

    return 0;
}
