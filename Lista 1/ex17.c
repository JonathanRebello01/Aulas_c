#include<stdio.h>
int main(){
	float numero,numerador,denominador;
	printf("digite o numerador e o denominador: ");
	scanf("%f %f", &numerador, &denominador);
	numero = numerador/denominador;
	printf("numera racional: %f",numero);
	return 0;
}
