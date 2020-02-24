#include<stdio.h>
#include<stdlib.h>
int main (){
	int car;
	printf("Intruduce un caracter: ");
	scanf("%d",&car);
	switch(car){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			printf("El caracter que introdugiste es un numero.");
		break;
		default:
			printf("El caracter que introdugiste es una letra.");
	}
}
