#include <iostream>
#include <omp.h>

int main() {
    int k;
    std::cout << "Введите k: ";
    std::cin >> k;

    omp_set_num_threads(k);
    int thread_num;

    // TODO спросить кого нибудь чего вообще в этой лабе хотят

    #pragma omp parallel shared(thread_num)
    {
        thread_num = omp_get_thread_num();
        printf("I am %d thread.\n", thread_num);
    }

    return 0;
}
