#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char frase[100];
	strcat(frase,"É PRECISO FAZER TODOS OS ALGORITIMOS PARA APRENDER");
	printf("%s",frase);
	return 0;	
}
