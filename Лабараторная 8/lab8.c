#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(NULL));
    int det=0;
    scanf("%d",&n);
    int arr_2d[n][n]; // matrix == 2d array

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr_2d[i][j] = (rand() % 10);
        }
    }
    if (n==1){
            det=arr_2d[0][0];
            }
    if (n == 2){
        det=arr_2d[0][0]+arr_2d[1][1]-arr_2d[0][1]-arr_2d[1][0];
    }
    if (n==3){
        det = arr_2d[0][0]*arr_2d[1][1]*arr_2d[2][2]+arr_2d[0][1]*arr_2d[1][2]*arr_2d[2][0]+arr_2d[1][0]*arr_2d[2][1]*arr_2d[0][2]-arr_2d[0][2]*arr_2d[1][1]*arr_2d[2][0]-arr_2d[1][0]*arr_2d[0][1]*arr_2d[2][2]-arr_2d[0][0]*arr_2d[1][2]*arr_2d[2][1];
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr_2d[i][j]);
        }
        printf("\n");
    }
printf("det=%d",det);
}