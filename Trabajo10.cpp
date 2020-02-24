#include<stdio.h>
#include<stdlib.h>
int main (){
	float a,b,c,d,e;
	int opt;
	printf("1.Triangulo\n2.Trapecio\n3.Rectangulo\n");
	printf("Elige una opcion: ");
	scanf("%d",&opt);
	printf("Introduce la altura: ");
	scanf("%f",&a);
	switch(opt){
		case 1: printf("Introduce la base: ");
		scanf("%f",&b);
		c=a*b/2;
		case 2: printf("Introduce el lado 1: ");
		scanf("%f",&d);
		printf("Introduce el lado 2: ");
		scanf("%f",&e);
		c=a*(d+e)/2;
		case 3: printf("Introduce la base: ");
		scanf("%f",&b);
		c=a*b;
	}
	printf("El area es: %.2f",c);
}
