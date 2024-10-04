#include <stdio.h>

int main() {
 int year;
 printf("Введите год:\n");
 scanf("%d",&year);
 if ((year%400)==0){
 	printf("год високосный");
 } else if ((year%100)==0){
	printf("год НЕ високосный");
 } else if ((year%4)==0){
 	printf("год високосный");
 } else{
	printf("год НЕ високосный");
}
}
