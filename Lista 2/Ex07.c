#include<stdio.h>

int main(){
	printf("Digite sua altura, mulher: ");
	
	float altura, pesoIdeal;
	
	scanf("%f", &altura);
	
	pesoIdeal=(62.1*altura)-44.7;
	
	printf("Seu peso ideal: %g", pesoIdeal);

	
	return 0;
}
