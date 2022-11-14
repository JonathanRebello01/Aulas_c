#include<stdio.h>
int main(){
	float div, media, n1,n2,produto, soma, sub;
	printf("informe dois numeros inteiros e diferentes de 0: ");
	scanf("%f %f",&n1,&n2);
	soma=n1+n2;
	printf("\n soma: %g",soma);
	sub=n1-n2;
	printf("\n subtração: %g", sub);
	produto = n1*n2;
	printf("\n produto: %g", produto);
	div = n1/n2;
	printf("\n divisão: %g", div);
	media=(n1+n2)/2;
	printf("\n media: %g", media);

	return 0;
}

