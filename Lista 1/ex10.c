#include<stdio.h>
int main(){
	int n1,n2;
	float media;
	printf("informe suas notas: ");
	scanf("%d %d",&n1,&n2);
	media=(n1+n2)/2.0;
	printf("media %.2f", media);
	return 0;
}

