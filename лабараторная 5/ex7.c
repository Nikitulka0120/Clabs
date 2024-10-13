#include <stdio.h>

int main() {
    unsigned int a;
    printf("a: ");
    scanf("%u", &a);
    if (a == 0) {
        printf("Нет единичных битов.\n");
    }
    int pos = 1;
    while ((a & 1) != 1) {
        a >>= 1;
        pos++;
    }
    printf("Номер бита: %d\n", pos);
}