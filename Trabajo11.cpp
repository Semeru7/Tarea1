#include<stdio.h>
#include<stdlib.h>
int main (){
	float x1,x2,y1,y2,m;
	printf("Introduce el valor de x1: ");
	scanf("%f",&x1);
	printf("Introduce el valor de x2: ");
	scanf("%f",&x2);
	printf("Introduce el valor de y1: ");
	scanf("%f",&y1);
	printf("Introduce el valor de y2: ");
	scanf("%f",&y2);
	if(x2-x1==0){
		printf("La pendiente es vertical.");
	}else{
		m=(y2-y1)/(x2-x1);
		printf("La pendiente es: %.2f",m);
	}
}
