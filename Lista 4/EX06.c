#include<stdio.h>

int main(){
	int i, num;
	float aux;
	printf ("escreva um n�mero: ");
	scanf("%d", &num);
	
	for (i=0; i>19; i++) {
		aux = num*num;
		printf("%.2f \n", aux);
		
		printf ("escreva um n�mero: ");
		scanf("%d", &num);
	}
	return 0;
}
