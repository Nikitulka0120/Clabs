#include<stdio.h>
int main(){
    int n;
    int num=1;
    scanf ("%d",&n);
        for (int i=0;i<n;i++){
            printf("\n");
            for (int j=0;j<n; j++){
                printf("%d ",num);
                num++;
            }
        }
}