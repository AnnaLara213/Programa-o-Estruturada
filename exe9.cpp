#include <stdio.h>

int main(){
	double altura, peso, imc;
	
	printf("Fale altura do individuo: ");
	scanf("%lf", &altura);
	
	printf("Fale peso do individuo: ");
	scanf("%lf", &peso);
	
	imc = peso / (altura * altura);
	
	if(imc < 18.5){
		printf("%.2lf\nAbaixo do peso!", imc);
	}
	else if(imc < 25){
		printf("%.2lf\nPeso Normal!", imc);
	}
	else if(imc < 30){
		printf("%.2lf\nAcima do peso!", imc);
	}
	else{
		printf("%.2lf\nObeso!", imc);
	}
	return 0;
}
