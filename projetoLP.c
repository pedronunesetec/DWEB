#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[20];
    char faixaetaria[5];
    char genero[20];
    char estilo[10];
    char nomejogo[20];
    int pessoas;
} DadosInteresse;

int main() {
    DadosInteresse exemplo, informar;

    strcpy(exemplo.nome, "Eduardo");
    strcpy(exemplo.faixaetaria, "16");
    strcpy(exemplo.genero, "RPG");
    strcpy(exemplo.estilo, "2D");
    strcpy(exemplo.nomejogo, "OMORI");

    printf("Informe os seus gostos relacionados a jogos seguindo o exemplo abaixo:\n");
    printf("\nEXEMPLO:\n");
    printf("Nome: %s\n", exemplo.nome);
    printf("Faixa Etaria do jogo: %s\n", exemplo.faixaetaria);
    printf("Genero do jogo: %s\n", exemplo.genero);
    printf("Estilo do jogo: %s\n", exemplo.estilo);
    printf("Nome do jogo: %s\n", exemplo.nomejogo);

    do{
    printf("\n\nNome:  ");
    scanf("  %20s", &informar.nome);
    printf("Faixa Etaria do jogo:  ");
    scanf("  %5s", &informar.faixaetaria);
    printf("Genero do jogo:  ");
    scanf("  %20s", &informar.genero);
    printf("Estilo do jogo:  ");
    scanf("  %10s", &informar.estilo);
    printf("Nome do jogo:  ");
    scanf("  %20s", &informar.nomejogo);
    }while(informar.pessoas < 30);


    return 0;
}




