#include <stdio.h>

int main()
{
    float codigo, QtdeCProduto, preco, PrecoTotal, ValDesc, PrecoFinal;

    printf("Escreva o codigo do produto: ");
    scanf("%f", &codigo);

    printf("Escreva a quantidade do produto: ");
    scanf("%f", &QtdeCProduto);

    if(codigo >= 1 && codigo <= 10){
        preco = 10;
    }
    else if(codigo >= 11 && codigo <= 20){
        preco = 15;
    }
    else if(codigo >= 21 && codigo <= 30){
        preco = 20;
    }
    else if(codigo >= 31 && codigo <= 40){
        preco = 30;
    }
    else if(codigo < 1 || codigo > 40){
        printf("\n\nCodigo invalido\n");
        main();
    }

    PrecoTotal = preco * QtdeCProduto;

    if(PrecoTotal <= 250){
        PrecoFinal = PrecoTotal * 0.95;
        ValDesc = 5;
    }
    else if(PrecoTotal > 250 && PrecoTotal < 500){
        PrecoFinal = PrecoTotal * 0.90;
        ValDesc = 10;
    }
    else if(PrecoTotal >= 500){
        PrecoFinal = PrecoTotal * 0.85;
        ValDesc = 15;
    }
    else if(PrecoTotal < 1){
        printf("\n\nPreco Total invalido\n");
        main();
    }

    printf("\n\nPreco: RS %.2f  Preco Total: RS %.2f  Valor Desconto: %.1f%%  Preco Final: %.2f\n\n", preco, PrecoTotal, ValDesc, PrecoFinal);
}
