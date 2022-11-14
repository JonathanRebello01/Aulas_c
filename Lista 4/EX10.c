#include<stdio.h>

int main(){
	int i, n, soma;
	i=0;
	soma=0;
	
	
	while (i != 20){
	printf("digite um número: ");
	scanf("%d", &n);
	if(n*n<225){
		soma=soma+n;
	}
	
	i++;
	}
	printf("%d", soma);
	return 0;
}
