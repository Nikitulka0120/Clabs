#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float detertus( int n,float funcmatrix[n][n]){
    float temp_matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp_matrix[i][j] = funcmatrix[i][j];
        }
    }
    float det = 1;
    for (int i = 0; i < n - 1; i++) {
        if (temp_matrix[i][i] == 0) {
            det = 0;
            break;
        }
        det *= temp_matrix[i][i];
        for (int k = i + 1; k < n; k++) {
            float delitel = temp_matrix[k][i] / temp_matrix[i][i];
            for (int j = i; j < n; j++) {
                temp_matrix[k][j] -= temp_matrix[i][j] * delitel;
            }
        }
    }
    det *= temp_matrix[n - 1][n - 1];
    printf("Triangle matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", temp_matrix[i][j]);
        }
        printf("\n");
    }
    printf("Det: %f\n", det);
    return det;
    };


int main() {
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    float matrix[n][n];
    float answers[n];
    float dets[n+1];
    for (int i = 0; i < n; i++) {
        answers[i] = (rand() % 10+1);
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 10+1);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf(" = %f",answers[i]);
        printf("\n");
    }
    int index_counter=0;
    for(int i=-1;i<n;i++){
            float temp_matrix[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    temp_matrix[i][j] = matrix[i][j];
                }
            }
            if (i==-1){
                dets[index_counter]=detertus(n, temp_matrix);
                index_counter++;
            }
            else{
                for(int j=0;j<n;j++){
                    temp_matrix[j][i]=answers[j];
                }
                dets[index_counter]=detertus(n, temp_matrix);
                index_counter++;
            }
    }
    for(int k=1; k<n+1;k++){
        printf("Ответ %d = %f \n",k,dets[k]/dets[0]);
    }

    
}


