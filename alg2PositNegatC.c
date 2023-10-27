//Programa em C que leia um número e escreva o texto “Sim – É maior ou igual   a 10” se ele for maior ou igual a 10;
#include <stdio.h>

int num;
int main(){
    
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num>=0){
        printf("O número informado é POSITIVO");
    }else {
        printf("O número informado é NEGATIVO");
    
    return 0;
}
}
