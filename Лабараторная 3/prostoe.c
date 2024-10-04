// for ( int s=0,n=2; n<a; n++)
// if (a%n==0) { s=1; break; }

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int s = 0;
    for (int n = 2; n < a; n++) {
        if (a % n == 0) { 
            s = 1;
            printf("Число не простое"); 
            break;  
        }
    }
}