#include<stdio.h>

int main(){
	char nome[30];
	int idade;
	printf("Insira o nome: ");
	gets(nome);
	printf("Insira a idade: ");
	scanf("%d",&idade);
	printf("Nome: %s", nome);
	printf("\nIdade: %d",idade);
	
	
	
	return 0;
}

