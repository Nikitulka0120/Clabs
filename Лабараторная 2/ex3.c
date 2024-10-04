#include <stdio.h>

int main() {
    double x, y;
    printf("Введите x и y: ");
    scanf("%lf %lf", &x, &y);
    
    // Уравнения прямых
    double line1 = -0.25 * x + 0.5;   
    double line2 = 0.5 * x - 1;      
    double line3 = -x-1;                
    
    if (y <= line1 && y >= line2 && y >= line3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}