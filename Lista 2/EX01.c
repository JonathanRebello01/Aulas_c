#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char frase[100];
	strcat(frase,"NÃO BASTA COMPILAR, TEM QUE IMPRIMIR O QUE SE PEDE");
	printf("%s",frase);
	return 0;	
}
