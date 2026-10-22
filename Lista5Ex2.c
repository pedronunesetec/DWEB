#include <stdio.h>

int main()
{
    float altura, peso, IMC;

    printf("Escreva sua altura(Ex: 1.62): ");
    scanf("%f", &altura);

    printf("Escreva seu peso em kilos: ");
    scanf("%f", &peso);

    while(altura > 0){
        IMC = peso / (altura * altura);
        printf("\n\nIMC = %.2f\n\n", IMC);

        printf("Escreva sua altura(Ex: 1.62): ");
        scanf("%f", &altura);

        printf("Escreva seu peso: ");
        scanf("%f", &peso);
    }

    return 0;
}
