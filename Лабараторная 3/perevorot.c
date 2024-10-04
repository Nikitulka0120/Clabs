// for (n=a, s=0; n!=0; n=n/10)
// { k=n%10; s=s*10+k;}

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int n = a;
    int s = 0;
    int k;

    for (n = a; n != 0; n = n / 10) {
        k = n % 10;
        s = s * 10 + k;
    }

    printf("%d\n", s);
}