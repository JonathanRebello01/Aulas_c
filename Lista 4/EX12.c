#include<stdio.h>

int main(){
	
	int i, n, pares, impares;
	pares = 0;
	impares= 0;
	
	for (i; i<20; i++){
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
		
		
		if (n % 2 == 0){
			pares++;
		}
		else{
			impares++;
		}
		
	}
	
	printf("A quantidade de n�meros pares foi %d \n", pares);
	printf("A quantidade de n�meros impares foi %d \n", impares);
	
	return 0;
}
