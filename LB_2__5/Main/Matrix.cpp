#include "Matrix.h"

void byChance_1(int* arr, int N)
{
    srand(time(0));
    for (int i = 0; i < N * N; i++) {
        *(arr + i) = rand() % 10 - 5;
        printf("%4d", *(arr + i));
    }
    printf("\n");
}


void Action_with_matrix_1(int* arr, int N)
{

    int t;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i >= j && i + j <= N - 1)
            {
                t = *(arr + i * N + j);                         //«амена происходит через доп. переменную
                *(arr + i * N + j) = *(arr + i * N + N - 1 - j);
                *(arr + i * N + N - 1 - j) = t;

            }

        }
    }

}

void byChance_2(int** arr, int N)
{
    srand(time(0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            *(*(arr + i) + j) = rand() % 10 - 5;
            printf("%4d", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("\n");
}

void Action_with_matrix_2(int** arr, int N)
{
    int t;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i >= j && i + j <= N - 1)
            {
                t = *(*(arr + i) + j);                         //«амена происходит через доп. переменную
                *(*(arr + i) + j) = *(*(arr + i) + N - 1 - j);
                *(*(arr + i) + N - 1 - j) = t;

            }

        }
    }

}