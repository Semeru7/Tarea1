#include<stdio.h>
#include<stdlib.h>
int main (){
	int a,b;
	printf("Itroduce el dividendo: ");
	scanf("%d",&a);
	printf("Introduce el divisor: ");
	scanf("%d",&b);
	if (a%b==0){
		printf("El numero si es divisible.");
	}
}
