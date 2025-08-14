#include <stdio.h>

int main() {
    float velocidade; 
    printf("Qual a velocidade que voce costuma dirigir seu carro (em km/h)? ");
    scanf("%f", &velocidade); 

    printf("\n--- Avaliacao de Velocidade ---\n");

    if (velocidade > 75.0) {
        
        printf("Voce esta muito acima do limite permitido! \n");
    } else if (velocidade > 65.0) {
       
        printf("Voce esta acima do limite! Dirigir entre 65 e 75 km/h ainda pode gerar multas e pontos.\n");
    } else if (velocidade > 55.0) {
        
        printf("Voce esta proximo do limite. Dirigir entre 55 e 65 km/h.\n");
    } else if (velocidade > 45.0) {
        
        printf("Voce esta dirigindo em uma velocidade segura (geralmente ate 50 ou 60 km/h).\n");
    } else {
        
        printf("Voce esta dirigindo em uma velocidade segura e abaixo dos limites comuns. Otimo!\n");
    }

    return 0;
