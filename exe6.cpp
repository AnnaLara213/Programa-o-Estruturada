#include <stdio.h>

int main(){
	int valor1, valor2;
	
	printf("Escreva 1 se X for verdadeiro e 0 se for falso: ");
	scanf("%d", &valor1);
	
	printf("Escreva 1 se Y for verdadeiro e 0 se for falso: ");
	scanf("%d", &valor2);
	
	if(valor1){
		printf("Valor X e verdadeiro!\n");
	}
	else{
		printf("Valor X e falso!\n");
	}
	
	if(valor2){
		printf("Valor Y e verdadeiro!");
	}
	else{
		printf("Valor Y e falso!");
	}

}
