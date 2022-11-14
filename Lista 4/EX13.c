#include<stdio.h>

int main(){
	
	int i, n, maiortrinta;
	maiortrinta = 0;
	
	for (i; i<15; i++){
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
		
		
		if (n > 30){
			maiortrinta++;
		}
		
	}
	
	printf("A quantidade de números maiores do que 30 digitados foi de foi %d \n", maiortrinta);
	
	return 0;
}
