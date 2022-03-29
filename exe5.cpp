#include <stdio.h>

int main(){
	int A;
	
	printf("Digite o valor: ");
	scanf("%d", &A);
	
	if(A > 0){
		printf("O dobro do numero positivo: %d", A*2);
	}
	else if(A < 0){
		printf("O triplo do numero negativo: %d", A*3);
	}
}
