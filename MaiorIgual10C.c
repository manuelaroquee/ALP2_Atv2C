//Programa em C que leia um número e escreva o texto “Sim – É maior ou igual   a 10” se ele for maior ou igual a 10;
#include <stdio.h>

int num;
int main(){
    
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num>=10){
        printf("Sim - É maior ou igual a 10");
    }else {
        printf("Não - Não é maior ou igual a 10");
    
    return 0;
}
}
