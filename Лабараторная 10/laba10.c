#include<stdio.h>
#include<math.h>

struct triangle{
    int a;
    int b;
    int c;
};

struct triangle triangles[3];
float areas[3];

void scan_tri(int k) {
    int a,b,c;
    printf("Введите 3 стороны треугольника через пробел:");
    scanf("%d %d %d",&a,&b,&c);
		triangles[k].a=a;
        triangles[k].b=b;
        triangles[k].c=c;
}

void print_tri(int k) {
        printf("Первая сторона: %d Вторая сторона:%d, третья сторона: %d\n", triangles[k].a,
            triangles[k].b, triangles[k].c);
}

float area_triangle(k){
    int p;
    p=(triangles[k].a+triangles[k].b+triangles[k].c);
    int un_sqrt= p*(p-triangles[k].a)*(p-triangles[k].b)*(p-triangles[k].c);
    return sqrtf(un_sqrt);
}

int main(){
    for (int i=0;i<3;i++){
        scan_tri(i);
    }
    for (int i=0;i<3;i++){
        print_tri(i);
    }
    for (int i=0;i<3;i++){
        areas[i]=area_triangle(i);
        printf("Площадь треугольника %d=%f",i,area_triangle(i));
    }
}