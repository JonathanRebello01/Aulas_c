#include<stdio.h>
int main(){
	float hora,minutos;
	printf("informe que horas s�o: ");
	scanf("%f",&hora);
	minutos = hora*60;
	printf("passaram-se %.2f minutos desde o inicio do dia",minutos);

	return 0;
}

