#include <stdio.h>

int main (){
	float temp=0.0;
	char type;
	printf("Input temperature:");
	scanf("%f%c",&temp,&type);
	if (type == 'c'|| type =='C' && temp != 0.0){
		float result = temp*9/5+32;
		printf("\nOutput temperature:%f",result);
	}else if (type == 'f'|| type == 'F' && temp !=0.0){
		float result = (temp-32)*5/9;
		printf("\nOutput temperature:%f",result);
	}else{
	printf("Output error");
}
}
