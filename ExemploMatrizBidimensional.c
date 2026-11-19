#include <stdio.h>

int main(){
    int TabNum[3][5];
    int lin, col;

    for(lin = 0; lin <= 2; lin++){
        for(col = 0; col <= 4; col++){
            printf("Digite um numero: ");
            scanf("%i", &TabNum[lin][col]);
        }
    }
    for(lin = 0; lin <= 2; lin++){
        for(col = 0; col <= 4; col++){
            printf("\nTabNum[%i][%i] = %i", lin, col, TabNum[lin][col]);
        }
    printf("\n");
    }

    return 0;
}
