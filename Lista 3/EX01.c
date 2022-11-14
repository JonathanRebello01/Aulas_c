#include<stdio.h>

int main(){
    int x;
    printf("digite um número: ");
    scanf("%d",  &x);
    if (x > 20){
        printf("%d", x);
    }
    else{
        printf("\n O número é menor, ou igual a 20");
    }

    return 0;
}