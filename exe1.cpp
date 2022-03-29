/*1) Faça um programa em C que leia os valores 
A, B, C e imprima
na tela se a soma de 
A + B é menor que C */
#include <stdio.h>

int main(){
	int A, B, C;
	printf("Digite 3 valores inteiros: ");
	scanf("%d %d %d", &A, &B, &C);
	
	if(A + B <= C){
		printf("A soma de A e B e menor que C.");
	}
	else{
		printf("A soma de A	e B e maior que C.");
	}
}
