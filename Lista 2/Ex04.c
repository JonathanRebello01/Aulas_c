#include<stdio.h>
int main(){
	float n1,n2,n3,n4;
	float media;
	printf("informe quatro numeros: ");
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	media = (n1+n2+n3+n4)/4;
	printf("Média: %f",media);

	return 0;
}

