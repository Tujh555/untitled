#include <iostream>
#include <omp.h>

int main() {
    int n, k;

    std::cout << "Введите k: ";
    std::cin >> k;

    std::cout << "Введите n: ";
    std::cin >> n;

    omp_set_num_threads(k);

    int sum = 0;

    #pragma omp parallel reduction(+: sum)
    {
        int thread_num = omp_get_thread_num();
        int partial_sum = 0;

        for (int i = thread_num + 1; i <= n; i += omp_get_num_threads()) {
            partial_sum += i;
        }

        printf("[%d]: Sum = %d\n", thread_num, partial_sum);

        sum += partial_sum;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
