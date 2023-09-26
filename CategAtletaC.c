#include <stdio.h>

int idade;
int main(){
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade<=12){
        printf("Categoria: Infantil");
    }else if (idade>12 && idade<=18){
        printf("Categoria: Juvenil");
    }else if (18<idade && idade<=40){
        printf("Categoria: Adulto");
    }else{
        printf("Não é atleta");
    }
    
    return 0;
}
