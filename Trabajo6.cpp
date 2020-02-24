#include<stdio.h>
#include<stdlib.h>
int main (){
	float x;
	printf("Introduce un valor a x: ");
	scanf("%f",&x);
	if (x>0){
		x=x*x+2*x;
	}
	else
	x=x+3;
	printf("El resultado es: %.2f",x);
}
