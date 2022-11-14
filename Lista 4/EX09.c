#include<stdio.h>

int main(){
	int i, n, num, ant, prox;
	
	printf("digite os dois primeiros termos da seria de RICCI: ");
	scanf("%d %d", &ant, &prox);
	
	printf("digite a quantidade de termos da série de ricci que voce quer construir: ");
	scanf("%d", &n);
	
	printf("%d \n", ant);
	printf("%d \n", prox);
	
	for (i=1; i<n; i++){
		
	num = ant + prox;
	
	printf("%d \n", num);
	
	ant=prox;
	
	prox=num;
	}
	
	return 0;
}
