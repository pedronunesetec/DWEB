#include <stdio.h>

int main()
{
    int TabIdade[10];
    int col;

    for(col = 0; col <= 9; col = col + 1){
        printf("Digite um numero inteiro: ");
        scanf("%i", &TabIdade[col]);
    }

    for(col = 0; col <= 9; col = col + 1){
        printf("\nTabIdade[%i] = %i", col, TabIdade[col]);
    }

    return 0;
}
