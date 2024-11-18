#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int manual(int N, int **arr) {
    int element;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Введите элемент: ");
            scanf("%d", &element);
            arr[i][j] = element;
        }
    }
    return 0;
}

int auto_generation(int N, int **arr) {
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = rand() % 20;
        }
    }
    return 0;
}

void print_matrix(int N, int **arr) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void find_min(int N, int **arr) {
    int min = arr[0][0];
    int min_row = 0, min_col = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                min_row = i;
                min_col = j;
            }
        }
    }

    printf("\nМинимальный элемент: %d на позиции (%d, %d)\n", min, min_row + 1, min_col + 1);

    int start_row = min_row - 1 < 0 ? 0 : min_row - 1;
    int start_col = min_col - 1 < 0 ? 0 : min_col - 1;
    int end_row = (start_row + 1 < N) ? start_row + 1 : start_row;
    int end_col = (start_col + 1 < N) ? start_col + 1 : start_col;
    int size = (end_row - start_row + 1) * (end_col - start_col + 1);
    int *square_array = (int *)malloc(size * sizeof(int));
    int sum = 0;
    int k = 0;
    int multiplier;

    printf("Введите число для умножения элементов квадрата: ");
    scanf("%d", &multiplier);

    for (int i = start_row; i <= end_row; i++) {
        for (int j = start_col; j <= end_col; j++) {
            arr[i][j] *= multiplier;
            square_array[k++] = arr[i][j];
            sum += arr[i][j];
        }
    }

    printf("\nМатрица после изменения:\n");
    print_matrix(N, arr);
    printf("\nКвадрат преобразован в массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", square_array[i]);
    }
    printf("\nСумма элементов квадрата: %d\n", sum);
    free(square_array);
}

int select_mode(int N) {
    int mode;
    int **arr = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(N * sizeof(int));
    }

    printf("Выберите режим заполнения матрицы\n1) Режим заполнения вручную\n2) Режим случайной генерации\nВвод: ");
    scanf("%d", &mode);
    if (mode == 1) {
        manual(N, arr);
    } else if (mode == 2) {
        auto_generation(N, arr);
    } else {
        printf("Неверный режим.\n");
        return 1;
    }

    printf("\nМатрица:\n");
    print_matrix(N, arr);
    find_min(N, arr);

    for (int i = 0; i < N; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

int main() {
    int n = 0;
    printf("Введите размер матрицы: ");
    scanf("%d", &n);

    if (n > 0) {
        select_mode(n);
    } else {
        printf("Ошибка: размер матрицы должен быть положительным числом.\n");
    }

    return 0;
}

