#include <stdio.h>
#include "functions.h"

int main() {
    float max_area=0;
    for (int i = 0; i < 3; i++) {
        scan_tri(i);
    }
    for (int i = 0; i < 3; i++) {
        print_tri(i);
    }
    for (int i = 0; i < 3; i++) {
        if (area_triangle(i) > max_area) {
            max_area = area_triangle(i);
        }
        printf("Triangle area %d = %f\n", i, area_triangle(i));
    }
    printf("Max area %f\n", max_area);
}
