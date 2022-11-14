// Faça um programa para ler um valor inteiro e passá-lo para uma função. A função deve receber
// o número e escrever se este número é Par ou Ímpar.


#include<stdio.h>
void verifica(int x);


int main(){
    int n;

    printf("Digite um numero para saber se par ou impar: ");
    scanf("%d", &n);

    verifica(n);

    return 0;
}

void verifica(int x){
    if(x % 2 == 0){
        printf("par");
    }
    else{
        printf("impar");
    }
}