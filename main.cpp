#include <iostream>
#include <omp.h>
#include <thread>

int main() {
    int k;
    std::cout << "Enter k ";
    std::cin >> k;
    int rank;

    printf("\nAll threads without long work with SHARED rank\n");
    #pragma omp parallel num_threads(k)
    {
        rank = omp_get_thread_num();
        printf("I am %d thread.\n", rank);
    }
    printf("\n\n");

    printf("\nAll threads which perfoms long work with SHARED rank\n");
    #pragma omp parallel num_threads(k)
    {
        rank = omp_get_thread_num();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        printf("I am %d thread.\n", rank);
    }
    printf("\n\n");

    printf("\nAll threads which perfoms long work with PRIVATE rank\n");
    #pragma omp parallel num_threads(k) private(rank)
    {
        rank = omp_get_thread_num();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        printf("I am %d thread.\n", rank);
    }

}
