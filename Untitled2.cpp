#include <stdio.h>

int main(){
	int a, b;
	printf("Entre com dois valores inteiros: ");
	scanf("%d %d", &a, &b);
	
	if(a == b){
		printf("Os valores sao iguais.");
	}
	else {
		printf("Os valores nao sao iguais");
	}	
}
