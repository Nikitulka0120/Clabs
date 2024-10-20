// В массиве X=(x1,x2,…,xn) определить количество элементов, меньших
// среднего арифметического значения. Не упорядочивая массив, удалить из
// него элементы, расположенные между максимальным и минимальным.


#include<stdio.h>
int main(){
    int a[]={663, 227, 251, 242, 171, 186, 205, 41, 236, 74, 255, 81, 115, 105, 198, 103};
    int n = sizeof(a)/sizeof(a[0]);
    int sum=0;
    int min = a[0];
    int max = a[0];
    int count=0;
    int min_index=0;
    int max_index=0;
    for (int i=0; i<n;i++){
        sum+=a[i];
        if (min > a[i]){
            min=a[i];
            min_index=i;
        }
        if (max < a[i]){
            max=a[i];
            max_index=i;
        }
    }
    int avg = sum/n;
    for (int i=0; i<n;i++){
        if(a[i]<avg){
            count++;
        }
        if (min_index<max_index){
            if (min_index<i && i<max_index){
                a[i]=0;
            }
        }
        else{
            if (min_index>i && i>max_index){
                a[i]=0;
            }
        }
        
    }
    printf("Avg:%d\n",avg);
    printf(">avg:%d\n",count);
    for (int i=0; i<n;i++){
        printf("%d,",a[i]);
    }
}
