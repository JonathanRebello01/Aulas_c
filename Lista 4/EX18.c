#include<stdio.h>

int main(){
    int a,b,c ;
    a=1;
    
    printf("digite o numero da tabuada que quer imprimir");
    scanf("%d",&c);
    
    for(a;a<11;a++){
        b=a;
        b=b*c;
        printf("%d \n", b);
        
    }
    
    return 0;
}