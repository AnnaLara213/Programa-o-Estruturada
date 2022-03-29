#include <stdio.h>

int main(){
	int idade;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if(idade<1){
		printf("Nao nasceu.");
	}
	else{
		if(idade<=15){
			printf("Nao vota.");
		}
		else{
			if(idade==16){
				printf("Voto opcional.");
			}
			else{
				if(idade==17){
					printf("Voto opcional.");
				}
				else{
					if(idade<=64){
						printf("Voto obrigatorio.");
					}
					else{
						if(idade>=65){
							printf("Voto opcional.");
						}
						else{
						}
					}
				}
			}
		}
	}
	
	if(idade==41){
		printf("\nGanha premio 1.");
	}
	else{
		if(idade==82){
			printf("\nGanha premio 2.");
		}
		else{
		}
	}
}
