#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int manual(int N){
    int element;
    int **arr = (int **)malloc(N * sizeof(int *));

    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(N * sizeof(int)); 
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("Введите элемент: ");
            scanf("%d",&element);
            arr[i][j]=element;
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int auto_generation(int N){
    srand(time(NULL));
    int **arr = (int **)malloc(N * sizeof(int *));

    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(N * sizeof(int)); 
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            arr[i][j]=(rand()%20);
        }
    }
        for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int select_mode(int n){
    int mode;
    printf ("Выберите режим заполнения матрицы\n1)Режим заполнения ручками\n2)Режим случайной генерации\nВвод: ");
    scanf("%d",&mode);
    if (mode == 1){
        manual(n);
    }
    else if (mode == 2)
    {
        auto_generation(n);
    }
}



int main(){
    int n = 0;
    printf("Введите размер матрицы: ");
    scanf("%d",&n);
    if (n>0){
        select_mode(n);
    }
    else
    {
        printf("Ошибка");
    }

    
}
