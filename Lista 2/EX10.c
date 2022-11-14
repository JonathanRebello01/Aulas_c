#include<stdio.h>

int main(){
	float valorHora, horasTrabalhadas,salario;
	printf("Quanto vc ganha por hora?");
	scanf("%f", &valorHora);
	printf("Quanto vc ganha por hora?");
	scanf("%f", &horasTrabalhadas);
	
	salario=valorHora*horasTrabalhadas;
	
	printf("%g", salario);
	
	return 0;
}
