#include <stdio.h>

int main(){
	char nome, sexo;
	int anos, estCiv;
	printf("Nome: ");
	scanf("%s", &nome);
	fflush(stdin);
	printf("Genero F/M: ");
	scanf("%c", &sexo);
	fflush(stdin);
	printf("Estado Civil \n1-casado\n2-solteiro: \n");
	scanf("%d", &estCiv);
	fflush(stdin);
	
	if(sexo == 'F' || sexo == 'f'){
		if(estCiv== 1){
			printf("Quantos anos de casamento: ");
			scanf("%d", &anos);
		}
		else{
			printf("Solteira.");
		}
		
	}
	else if(sexo== 'M'||sexo=='m'){
		printf("Homem?");
	}
	else{
		printf("Fim.");
	}
}
