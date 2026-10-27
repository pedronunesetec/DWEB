#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[20];
    char faixaetaria[5];
    char genero[20];
    char estilo[10];
    char nomejogo[60];
} DadosInteresse;



int compararCaseInsensitive(char s1[], char s2[]) {
    int k = 0;

    while (s1[k] != '\0' && s2[k] != '\0') {
    if (tolower((unsigned char)s1[k]) != tolower ((unsigned char)s2[k])) {
        return 0;
    }
    k++;
    }

    return (s1[k] == s2[k]);
}

int main()
{
    DadosInteresse exemplo;
    DadosInteresse registros[30];
    int total = 0;
    char bufferOpcao[10];

    strcpy(exemplo.nome, "Eduardo");
    strcpy(exemplo.faixaetaria, "18");
    strcpy(exemplo.genero, "RPG");
    strcpy(exemplo.estilo, "2D");
    strcpy(exemplo.nomejogo, "OMORI");


    printf("\n\nInforme os seus gostos relacionados a jogos seguindo o exemplo abaixo:\n");
    printf("\nEXEMPLO:\n\n");
    printf("Nome: %s\n", exemplo.nome);
    printf("Faixa Etaria do jogo: %s\n", exemplo.faixaetaria);
    printf("Genero do jogo: %s\n", exemplo.genero);
    printf("Estilo do jogo: %s\n", exemplo.estilo);
    printf("Nome do Jogo: %s\n", exemplo.nomejogo);


    //seção de cadastro.
    do{
        if (total >= 30){
            printf("\nLimite maximo de 30 cadastros atingido!\n");
            break;
        }

        printf("\nCadastro da pessoa %d\n", total + 1);
        printf("Nome: ");
        fgets(registros[total].nome, 20, stdin);
        registros[total].nome[strcspn(registros[total].nome, "\n")] = '\0';

        printf("Faixa Etaria do jogo: ");
        fgets(registros[total].faixaetaria, 5, stdin);
        registros[total].faixaetaria[strcspn(registros[total].faixaetaria, "\n")] = '\0';

        printf("Genero do jogo: ");
        fgets(registros[total].genero, 20, stdin);
        registros[total].genero[strcspn(registros[total].genero, "\n")] = '\0';

        printf("Estilo do jogo: ");
        fgets(registros[total].estilo, 10, stdin);
        registros[total].estilo[strcspn(registros[total].estilo, "\n")] = '\0';

        printf("Nome do Jogo: ");
        fgets(registros[total].nomejogo, 60, stdin);
        registros[total].nomejogo[strcspn(registros[total].nomejogo, "\n")] = '\0';

        total++;

        if(total < 30) {
            printf("\nDeseja cadastrar outras pessoa? (s/n): ");
            fgets(bufferOpcao, sizeof(bufferOpcao), stdin);
            bufferOpcao[strcspn(bufferOpcao, "\n")] = '\0';

            if (bufferOpcao[0] == 'n' || bufferOpcao[0] == 'N') {
                break;
            }
        }

    }   while (total < 30);

    if(total < 2) {
        printf("E necessario cadastrar pelo menos 2 pessoas para realizar comparacoes.\n");
    } else {
        int contadorComparacoes = 0;
        char pausaBuffer[10];

        for (int i = 0; i < total; i++) {
                for (int j = i + 1; j < total; j++){
            printf("\nComparando [%s] e [%s]:\n", registros[i].nome, registros[j].nome);

            int encontrouMatch = 0;

            if(compararCaseInsensitive(registros[i].genero, registros[j].genero)) {
                printf("Preferem o mesmo genero: %s\n", registros[i].genero);
                encontrouMatch = 1;
            }

            if(compararCaseInsensitive(registros[i].estilo, registros[j].estilo)) {
                printf("Preferem o mesmo estilo de jogo: %s\n", registros[i].estilo);
                encontrouMatch = 1;
            }

            if(compararCaseInsensitive(registros[i].nomejogo, registros[j].nomejogo)) {
                printf("Jogam o mesmo jogo: %s\n", registros[i].nomejogo);
                encontrouMatch = 1;
            }
            if (!encontrouMatch) {
                printf("Nenhum interesse em comum direto encontrado entre eles.\n");
            }

            contadorComparacoes++;

            //programa pausa a tela a cada 4 comparacoes para não lotar.
            if (contadorComparacoes % 4 == 0) {
                printf("(Pressione ENTER para ver mais comparacoes...)");
                fgets(pausaBuffer, sizeof(pausaBuffer), stdin);
            }

            }

        }
    }
    return 0;
}
