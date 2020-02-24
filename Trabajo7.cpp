#include<stdio.h>
#include<stdlib.h>
int main (){
	int a,b,c;
	printf("Introduce el primer digito: ");
	scanf("%d",&a);
	printf("Introduce el segundo digito: ");
	scanf("%d",&b);
	printf("Introduce el tercer digito: ");
	scanf("%d",&c);
	if (a==3){
		if(b==9){
			if(c==5){
				printf("Acceso aceptado, Bienvenido.");
			}
		}
	}else 
	printf("Acceso denegado.");
}
