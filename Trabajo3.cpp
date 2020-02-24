#include<stdio.h>
#include<stdlib.h>
int main (){
	int a;
	printf("Introduce el un numero: ");
	scanf("%d",&a);
	if (a%2==0){
		printf("El numero es PAR.");
	}
	else{
		printf("Es IMPAR\n");
		if (a%3==0){
			printf("Si es divicible entre 3");
		}
	}
}
