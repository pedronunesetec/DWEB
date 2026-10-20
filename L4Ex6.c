#include <stdio.h>

int main()
{
    float idade, peso;

    printf("ESCREVA 0 NOS DOIS VALORES PARA ENCERRAR\n");
    printf("Escreva sua idade em anos: ");
    scanf("%f", &idade);

    printf("\nEscreva seu peso em kilos: ");
    scanf("%f", &peso);
    //Encerrar Programa.
    if(idade == 0 && peso == 0){
        printf("\n\n\nPrograma Encerrado\n\n");
    }//GRUPO A CATEGORIAS A, B e C.
    else if(idade < 20 && peso < 60){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\nGrupo AA\n\n\n\n");
        main();
    }
    else if(idade >= 20 && idade <= 50 && peso < 60){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo AB\n\n\n\n");
        main();
    }
    else if(idade > 50 && peso < 60){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo AC\n\n\n\n");
        main();
    }//GRUPO B CATEGORIAS A, B e C.
    else if(idade < 20 && peso >= 60 && peso <= 90){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo BA\n\n\n\n");
        main();
    }
    else if(idade >= 20 && idade <= 50 && peso >= 60 && peso <= 90){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo BB\n\n\n\n");
        main();
    }
    else if(idade > 50 && peso >= 60 && peso <= 90){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo BC\n\n\n\n");
        main();
    }//GRUPO C CATEGORIAS A, B e C.
    else if(idade < 20 && peso > 90){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo CA\n\n\n\n");
        main();
    }
    else if(idade >= 20 && idade <= 50 && peso > 90){
        printf("\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo CB\n\n\n\n");
        main();
    }
    else if(idade > 50 && peso > 90){
        printf("\n\nIdade: %.1f Anos   Peso: %.1f Kg", idade, peso);
        printf("\n\nGrupo CC\n\n\n\n");
        main();
    }

    return 0;
}
