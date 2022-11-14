#include<stdio.h>
#include<stdlib.h>


int main(){
	int m=6, n=3;
	
	printf("M= %d\n", m);
	printf("N= %d\n", n);
	
	n++;
	printf("n= %d\n", n);
	++m;
	printf("M= %d\n", m);
	n--;
	printf("n= %d\n", n);
	--m;
	printf("M= %d\n", m);
	printf("\n\n");
	
	return 0;
}
