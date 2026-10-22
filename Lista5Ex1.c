#include <stdio.h>

int main()
{
    int numero, resto, resultado, cont;

    for(cont = 0;cont < 9; cont++){
        printf("Escreva um numero:  ");
        scanf("%d", &numero);

        resto = numero % 2;

        if(resto == 0){
            resultado = numero * 2;
        }
        else{
            resultado = numero * 3;
        }

        printf("\n\nResultado: %d\n\n", resultado);
    }

    return 0;
}
