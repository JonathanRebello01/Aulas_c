#include<stdio.h>

int main(){
    int num, b;
    
    printf("digite o numero que quer obter o triplo");
    scanf("%d",&num);
    
    while(num!=-999){
        b=num*3;
        printf("%d \n", b);
     
        printf("digite o numero que quer obter o triplo");
        scanf("%d",&num);
    }
    
    return 0;
}