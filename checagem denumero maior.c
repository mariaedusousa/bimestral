
#include <stdio.h> 
int main() {
    int quantidade;
    int numero;
    int maior = 0; 
    int contador = 0;

    printf("Informe a quantidade desejada: ");
    scanf("%d", &quantidade);

    
    if (quantidade <= 0) {
        printf("A quantidade deve ser maior que zero.\n");
        return 1; 
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &numero);

        
        if (i == 0 || numero > maior) {
            maior = numero;      
            contador = 1;      
        } else if (numero == maior) {
            contador++;        
        }
    }

    
    printf("\n--- Resultado ---\n");
    printf("O maior numero é: %d\n", maior);
    printf("Este numero foi lido %d vezes.\n", contador);

    return 0; 
}
