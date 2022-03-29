#include <stdio.h>

int main(){
	int a;
	
	printf("Informe o numero: ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("O numero e par.");
	}
	else{
		printf("O numero e impar.");
	}
}
