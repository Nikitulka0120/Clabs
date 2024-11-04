#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    float matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 10+1);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }


    float det = 1;
    for (int i = 0; i < n - 1; i++) {
        if (matrix[i][i] == 0) {
            det = 0;
            break;
        }
        det *= matrix[i][i];
        for (int k = i + 1; k < n; k++) {
            float delitel = matrix[k][i] / matrix[i][i];
            for (int j = i; j < n; j++) {
                matrix[k][j] -= matrix[i][j] * delitel;
            }
        }
    }
    det *= matrix[n - 1][n - 1];
    printf("Triangle matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Det: %f\n", det);
}

