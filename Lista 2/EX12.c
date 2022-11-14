#include<stdio.h>

int main(){
	float valorHora, horasTrabalhadas,salarioLiquido,salarioBruto,IR, INSS, sindicato;
	printf("Quanto vc ganha por hora?");
	scanf("%f", &valorHora);
	printf("Quantas horas vc trabalha?");
	scanf("%f", &horasTrabalhadas);
	
	salarioBruto=(valorHora*horasTrabalhadas);
	IR=salarioBruto*0.11;
	INSS=salarioBruto*0.08;
	sindicato=salarioBruto*0.05;
	salarioLiquido=salarioBruto-IR-INSS-sindicato;
	
	
	printf("Sal�rio Bruto: %g", salarioBruto);
	printf("IR: %g", IR);
	printf("INSS: %g", INSS);
	printf("Sindicato: %g", sindicato);
	printf("Sal�rio L�quido: %g", salarioLiquido);
	
	return 0;
}
