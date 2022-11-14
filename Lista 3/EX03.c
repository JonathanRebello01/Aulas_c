#include<stdio.h>

int main(){
    int x, y, soma, valor;
    printf("digite dois números: ");
    scanf("%d %d", &x, &y);

    soma = x+y;

    if (soma < 20){
        valor = soma + 8;

        printf("%d", valor);
    }
    else if (soma >= 20){
        valor = soma - 5;

        printf("\n %d", valor);
    }

    return 0;
}
