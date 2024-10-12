#include <stdio.h>

int main() {
    int a, k;
    int bitSize = 32;

    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите k: ");
    scanf("%d", &k);

    k = k % bitSize;

    int result = (a >> k) | (a << (bitSize - k));

    printf("Результат циклического сдвига: %d\n", result);

}