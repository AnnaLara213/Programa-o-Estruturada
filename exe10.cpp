#include <stdio.h>

int main(){
	int op;
	double ValorProd, VT;
	
	printf("Valor da compra: ");
	scanf("%lf", &ValorProd);
	printf("Forma de pagamento: ");
	printf("\n1 A vista em dinheiro ou cheque.\n2 A vista no cartao de credito.");
	printf("\n3 Em duas vezes, sem juros.\n4 Em duas vezes, mais juros.\n");
	scanf("%d", &op); 
	
	switch(op){
		case 1:
			VT= ValorProd * 0.90;
			printf("O valor total a vista ou com cheque: %.2lf", VT);
			break;
		case 2:
			VT= ValorProd * 0.85;
			printf("O valor total a vista com cartao de credito: %.2lf", VT);
			break;
		case 3:
			VT= ValorProd / 2;
			printf("Duas parcelas de: %.2lf", VT);
			break;
		case 4:
			VT= ValorProd * 1.1 /(2);
			printf("O valor total em duas vezes com juros: %.2lf", VT);
			break;
	}
}
