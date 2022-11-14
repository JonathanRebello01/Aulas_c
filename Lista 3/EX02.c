#include<stdio.h>

int main(){
    int x, y, soma;
    printf("digite dois números: ");
    scanf("%d %d", &x, &y);

    soma = x+y;

    if (soma > 10){
        printf("%d", soma);
    }
    else{
        printf("\n A soma dos números é menor ou igual a 10");
    }

    return 0;
}
