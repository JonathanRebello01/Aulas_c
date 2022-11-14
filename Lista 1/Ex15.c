#include<stdio.h>
int main(){
	int base,altura;
	float area;
	printf("digite a base e a altura do triangulo: ");
	scanf("%d %d",&base,&altura);
	area = (base * altura)/2.0;
	printf("area: %.2f",area);

	return 0;
}
