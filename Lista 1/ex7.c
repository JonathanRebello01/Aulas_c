#include<stdio.h>
int main(){
	int n,sucessor,antecessor;
	printf("informe um numero: ");
	scanf("%d",&n);
	sucessor = n+1;
	antecessor = n-1;
	printf("sucessor = %d ", sucessor);
	printf("\n antecessor = %d", antecessor);
	return 0;
}

