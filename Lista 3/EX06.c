#include<stdio.h>

int main(){
	int x;
	printf("Digite um n�mero");
	scanf("%d", &x);
	
    if ((x % 10) == 0){
        printf("o número é divisível por 10 \n");
    }
    if ((x % 5) == 0){
        printf("o número é divisível por 5 \n");
    }
    if ((x % 2) == 0){
        printf("o número é divisível por 2 \n");
    }
    if(((x % 10) != 0) && ((x % 5) != 0) & ((x % 2) != 0)){
        printf("O número não é divisícel por 2, nem por 10 e nem por 5");
    }
	
	return 0;
}
