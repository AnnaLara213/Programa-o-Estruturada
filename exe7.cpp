#include <stdio.h>

int main(){
	int a;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("%d", a + 5);
	}
	else if(a%2==1){
		printf("%d", a + 8);
	}
}
