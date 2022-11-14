#include<stdio.h>

int main(){
	int i, n, soma, media;
	printf("digite um número: ");
	scanf("%d", &n);
	soma=n;
	
	for(i=0; i<11; i++){
	soma=soma+n;
	
	printf("digite um número: ");
	scanf("%d", &n);
	}
	
	media=soma/12
	printf("%d", media);
	return 0;
}
