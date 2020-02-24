#include<stdio.h>
#include<stdlib.h>
int main (){
	int a,b;
	printf("Introduce un Numero: ");
	scanf("%d",&a);
	printf("Introduce otro Numero: ");
	scanf("%d",&b);
	if (a<b){
		printf("El primer numero es menor que el segundo.");
	}else if(a>b){
		printf("El primer numero es mayor que el sugundo.");
	}else if (a/b==1){
	printf("El primer numero es igual al segundo");
    }
}
