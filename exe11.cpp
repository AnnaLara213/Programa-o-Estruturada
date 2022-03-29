#include <stdio.h>

int main(){
	int aluno;
	double nota1, nota2, nota3, ME, MA;
	
	printf("Identificacao do aluno:");
	scanf("%d", &aluno);
	fflush(stdin);
	
	printf("Insira as 3 notas: ");
	scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
	
	printf("Insira a nota media dos exercicios: ");
	scanf("%lf", &ME);
	
	MA= (nota1 + nota2 * 2 + nota3 * 3 + ME)/7;
	
	printf("Aluno %d: \nNotas:\n%.2lf\n%.2lf\n%.2lf\nMedia de exercicios:\n%.2lf\n", aluno, nota1, nota2, nota3, ME);
	
	if(MA>90){
	
		printf("%.2lf Conceito A\nAprovado!", MA);
	}
	else if(MA>=90){
		printf("%.2lf Conceito B\nAprovado!", MA);
	}
	else if(MA>=60){
		printf("%.2lf Conceito C\nAprovado!", MA);
	}
	else if(MA>=40){
		printf("%.2lf Conceito D\nReprovado!", MA);
	}
	else{
		printf("%.2lf Conceito E\nReprovado!", MA);
	}
}
