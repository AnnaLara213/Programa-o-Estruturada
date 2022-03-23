#include <stdio.h>
double altura;


void altMulher(){
    if(altura <= 1.60){
        printf("Estatura baixa.");
    }
    else if(altura <= 1.75 ){
        printf("Estatura media");
    }
    else if(altura > 1.75 ){
        printf("Estatura alta");
	}
}

void altHomem(){
    if(altura <= 1.70){
        printf("Estatura baixa.");
    }
    else if(altura <= 1.78 ){
        printf("Estatura media");
    }
    else if (altura > 1.80 ){
        printf("Estatura alta");
    }
}


int main(){
    char sexo;
    double altura;
    printf("Genero f/m:");
    scanf("%c", &sexo);
    fflush(stdin);
    
    printf("Altura: ");
    scanf("%lf", &altura);

    if(sexo == 'f'){
    	altMulher();
    }
    else if(sexo == 'm'){
        altHomem();
    }
    else {
        printf("Resposta nao identificada.");
    }
}
