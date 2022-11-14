#include<stdio.h>
int main(){
	int segundos,minutos,horas;
	printf("informe um valor em segundos: ");
	scanf("%d",&segundos);
	minutos = segundos/60;
	horas = minutos/60;
	printf("Passaram-se %d segundos, %d minutos e %d horas",segundos,minutos,horas);

	return 0;
}

