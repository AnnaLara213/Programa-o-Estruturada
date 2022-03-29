#include <stdio.h>

int main(){
	int A, B, C;
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	
	if(A == B){
		C = A + B;
		printf("A soma dos valores iguais: %d", C);
	}
	else{
		C = A * B;
		printf("A multiplicacao dos valores: %d", C);
	}
}
