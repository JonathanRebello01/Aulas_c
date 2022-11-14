#include<stdio.h>

int main(){
    int x;
    printf("digite um número: ");
    scanf("%d",  &x);
    
    if ((x == 20)){
        printf("igual à 20");
    }
    else if (x>20){
        printf("maior do que 20");
    }
    else{
        printf("menor do que 20");
    }
    
  
    return 0;
}