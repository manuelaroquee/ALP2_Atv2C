//Programa em C que leia um número e escreva o texto “Sim – É maior ou igual   a 10” se ele for maior ou igual a 10;
#include <stdio.h>

int num1, num2;
int main(){
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if (num1>num2){
        printf("O primeiro número é maior que o segundo número");
    }else if (num2>num1){
        printf("O segundo número é maior que o primeiro número");
    }else if (num1==num2){
        printf("Os números informados são iguais");
    }
    
    return 0;
}
