#include<stdio.h>

int main(){
	printf("Digite sua altura, homen: ");
	
	float altura, pesoIdeal;
	
	scanf("%f", &altura);
	
	pesoIdeal=(72.7*altura)-58;
	
	printf("Seu peso ideal: %g", pesoIdeal);

	
	return 0;
}
