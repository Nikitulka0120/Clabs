#include <stdio.h>
#include <math.h>
#include "functions.h"

struct triangle {
    int a;
    int b;
    int c;
};

struct triangle triangles[3];
float max_area = 0;

void scan_tri(int k) {
    int a, b, c;
    printf("Enter the 3 sides of the triangle separated by a space:");
    scanf("%d %d %d", &a, &b, &c);
    triangles[k].a = a;
    triangles[k].b = b;
    triangles[k].c = c;
}

void print_tri(int k) {
    printf("A: %d B: %d, C: %d\n", triangles[k].a, triangles[k].b, triangles[k].c);
}

float area_triangle(int k) {
    float p;
    p = (triangles[k].a + triangles[k].b + triangles[k].c) / 2.0;
    float area = sqrtf(p * (p - triangles[k].a) * (p - triangles[k].b) * (p - triangles[k].c));
    return area;
}