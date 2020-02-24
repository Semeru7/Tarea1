#include<stdio.h>
#include<stdlib.h>
int main (){
	int a;
	float costo=75;
	printf("Introduce la edad del cliente: ");
	scanf("%d",&a);
	if (a<11){
		costo=0.40*costo;
	}else if(a>59){
		costo=0.45*costo;
	}
	printf("El costo del voleto es: %.2f$",costo);
}
