#include <stdio.h>

int main() {
    float vilucidade; 
    printf("Qual a velocidade que voce costuma dirigir seu carro (em km/h)? ");
    scanf("%f", &vilucidade); 

    printf("\n--- vilucidade ---\n");

    if (vilucidade > 75.0) {
        
        printf("Voce esta muito acima do limite permitido! \n");
    } else if (vilucidade > 65.0) {
       
        printf("Voce esta acima do limite! Dirigir entre 65 e 75 km/h ainda pode gerar multas e pontos.\n");
    } else if (vilucidade > 55.0) {
        
        printf("Voce esta proximo do limite. Dirigir entre 55 e 65 km/h.\n");
    } else if (vilucidade > 45.0) {
        
        printf("Voce esta dirigindo em uma velocidade segura (geralmente ate 50 ou 60 km/h).\n");
    } else {
        
        printf("Voce esta dirigindo em uma velocidade segura e abaixo dos limites comuns. Otimo!\n");
    }

    return 0;}
