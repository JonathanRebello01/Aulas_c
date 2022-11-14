#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,a,b,c,d;
	n=0;
	m=0;
	printf("Valor inicial de N= %d\n", n);
	printf("Valor inicial de M= %d\n", m);
	
	n++;
	printf("N++= %d\n", n);
	++m;
	printf("++M= %d\n", m);
	n--;
	printf("N--= %d\n", n);
	a=n++;
	printf("a=n++ %d\n", a);
	b=++m;
	printf("b=++m %d\n", b);
	c=2*(m++);
	printf("C=2*(m++)= %d\n",c);
	printf("M= %d\n", m);
	d=3*(++n);
	printf("d=3*(++n)= %d\n", d);
	printf("N=%d\n", n);
	printf("\n\n");
	
	return 0;
}
