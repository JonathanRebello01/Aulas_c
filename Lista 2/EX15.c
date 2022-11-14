#include<stdio.h>
int main(){
	float salariominimo,salario,razao;
	printf("seu salario e o salario minimo: ");
	scanf("%f %f",&salario,&salariominimo);
	razao = salario/salariominimo;
	printf("voce ganha %0.2f sal�rios m�nimos",razao);

	return 0;
}

