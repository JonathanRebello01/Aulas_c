#include<stdio.h>

int main(){
    int x;
    printf("digite um número: ");
    scanf("%d",  &x);
    if (x > 0){
        printf("Positivo");
    }
    else if (x == 0){
        printf("nulo");
    }
    else{
        printf("negativo");
    }

    return 0;
}