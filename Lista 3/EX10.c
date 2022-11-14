#include<stdio.h>

int main(){
    int x;
    printf("digite um número: ");
    scanf("%d",  &x);
    
    if ((x >= 20) && (x <= 90)){
        printf("Esta compreendido entre 20 e 90");
    }
    else{
        printf("nao esta compreendido entre 20 e 90");
    }
    
  
    return 0;
}