#include<stdio.h>

int main(){
	int i, num;
	float aux;
	printf ("escreva um n�mero: ");
	scanf("%d", &num);
	
	for (i=0; i<=9; i++) {
		aux = num/2.0;
		printf("%.2f \n", aux);
		
		printf ("escreva um n�mero: ");
		scanf("%d", &num);
	}
	return 0;
}
