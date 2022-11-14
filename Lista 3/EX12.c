#include<stdio.h>

int main(){
    int x, y;
    printf("digite dois números: ");
    scanf("%d %d", &x, &y);

    if (x == y){
        printf("iguais");
    }
    else{
        printf("diferentes");
    }

    return 0;
}
