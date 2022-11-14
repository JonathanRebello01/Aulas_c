#include<stdio.h>

int main(){
    int x, algarismo;
    printf("digite um número: ");
    scanf("%d",  &x);
    
    algarismo = x / 100;
    
    if (algarismo % 2 == 0){
        printf("par");
    }
    else{
        printf("impar");
    }
    
  
    return 0;
}