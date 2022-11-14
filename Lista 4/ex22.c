#include<stdio.h>

int main(){
	int num, ant;
	printf("digite um número: ");
	scanf("%d", &num);
	ant = num;
	
	while (num != -999){
		
		if(num > ant){
			printf("%d \n", num);
			ant=num;	
		}
		else{
			printf("%d \n", ant);
		}
		
	
		printf("digite um numero: ");
		scanf("%d", &num);
		
	}
	
	if(num > ant){
		printf("o maior numero digitado foi: %d \n", num);	
	}
	else{
		printf("O maior numero digitado foi: %d \n", ant);
	}
	
	return 0;
}
