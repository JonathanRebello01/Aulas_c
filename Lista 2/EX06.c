#include<stdio.h>

int main(){
	printf("Digite a temperatura em farenheit: ");
	
	float farenheit;
	float celsius;
	scanf("%f", &farenheit);
	
	celsius=(5*(farenheit-32)/9);
	
	printf("%g", celsius);

	
	return 0;
}
