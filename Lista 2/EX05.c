#include<stdio.h>

int main(){
	printf("Digite a quantidade de metros: ");
	
	float metros;
	float centimetros;
	scanf("%f", &metros);
	
	centimetros=metros*100;
	
	printf("%g", centimetros);

	
	return 0;
}
