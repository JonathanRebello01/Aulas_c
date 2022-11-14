#include<stdio.h>
#include<stdlib.h>



int main(){
	int cond;
	int a=3;
	float x = 1.5;
	printf("Valor inicial de a= %d\n", a);
	printf("Valor inicial de x= %f\n", x);
	
	cond = a!=x;
	printf("a!=x: %d\n", cond);
	
	cond=a/20==x;
	printf("a/20==x: %d\n",cond);
	
	cond = a/2==x;
	printf("a/2==x: %d\n", cond);
	
	cond= a!=2*x;
	printf("a!=2*x: %d\n", cond);
	
	cond= a>=x;
	printf("a>=x: %d\n", cond);
	
	cond= a/3<=x;
	printf("a/3<=x: %d\n", cond);
	
	cond=a;
	printf("cond=a %d\n", cond);
	
	cond= a-2*x;
	printf("cond=a-2*x: %d\n", cond);
	printf("\n\n");
	return 0;
}
