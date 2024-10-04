#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int f;
    f=k;
    char c='*';
    for(int i=f; i!=0;i--){
        printf("\n");
        for(int m=k;m!=f;m++){
            printf(" ");
        }
        for(int j=k;j!=0;j--){
            printf("%c",c);
        }
        k--;
    }
}