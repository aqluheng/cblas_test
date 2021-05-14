#include <cblas.h>
#include <stdio.h>
#define M 4 //A的行数，C的行数
#define N 2 //B的列数，C的列数
#define K 3 //A的列数，B的行数

int main(void)
{
    float alpha = 1;
    float beta = 0;
    int lda = K; //A的列
    int ldb = N; //B的列
    int ldc = N; //C的列
    float A[K * M] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6};
    float B[K * N] = {5, 4, 3, 2, 1, 0};
    float C[M * N];
    cblas_sgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, M, N, K, alpha, A, lda, B, ldb, beta, C, ldc);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%.2f\t", C[i * N + j]);
        }
        printf("\n");
    }

    return 0;
}