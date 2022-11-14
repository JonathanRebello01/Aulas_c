#include<stdio.h>

int main(){
	
	int i, n, pos, neg;
	pos = 0;
	neg= 0;
	
	for (i; i<20; i++){
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
		
		
		if (n > 0){
			pos = pos+n;
		}
		else{
			neg++;
		}
		
	}
	
	printf("A quantidade de números pares foi %d \n", pos);
	printf("A quantidade de números impares foi %d \n", neg);
	
	return 0;
}
