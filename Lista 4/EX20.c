#include<stdio.h>

int main(){
    int  num, soma;
    
    printf("digite o numero");
    scanf("%d",&num);
    
    while(num>0){
        soma+=num;
     
        printf("digite o numero");
        scanf("%d",&num);
    }
    
    printf("%d", soma);
    return 0;
}