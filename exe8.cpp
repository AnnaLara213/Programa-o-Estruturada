#include <stdio.h>

int main() {
    int a, b, c, menor, meio, maior;
    printf("Digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b){
    	//a vai ser maior que b
    	if(b>c){
    		// a>b>c
    		printf("%d\n%d\n%d", a, b, c);
		}
		else if(a<c){
			//c>a>b
			printf("%d\n%d\n%d", c, a, b);
		}
		else{
			//a>c>b
			printf("%d\n%d\n%d", a, c, b);
		}
	}
	else if(a>c){
		//então vai ser o do meio
		//b>a>c
		printf("%d\n%d\n%d", b, a, c);
	}
	else{
		// se não vai ser o menor
		if(b>c)
		//b>c>a
		printf("%d\n%d\n%d", b, c, a);
		else{
			//c>b>a
			printf("%d\n%d\n%d", c, b, a);
		}
	}
}
