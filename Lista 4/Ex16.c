#include<stdio.h>

int main(){
	int num, maior, menor, i;
	printf("digite um número: ");
	scanf("%d", &num);
	maior = num;
	menor = num;
	
	for (i; i<10; i++){
		
		if(num > maior){
			maior=num;	
		}
		if (num < menor){
			menor = num;
		}
		
	
		printf("digite um numero: ");
		scanf("%d", &num);
		
	}
	

		printf("o maior numero digitado foi: %d \n", maior);	

		printf("O menor numero digitado foi: %d \n", menor);
	
	return 0;
}
