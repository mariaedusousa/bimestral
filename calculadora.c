#include <stdio.h>

int main() {
    char operacao; 
    float num1, num2; 

    
    printf("Escolha uma operacao:\n");
    printf("Soma (+), Subtracao (-), Multiplicacao (*), Divisao (/), Resto da divisao (%%)\n");
    printf("Digite a operacao desejada: ");
    scanf(" %c", &operacao);

   
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

   
    switch (operacao) {
        case '+':
            printf(" %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break; 
        case '-':
            printf(" %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf(" %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;

        case '/':
           
            if (num2 == 0) {
                printf("Erro: Divisao por zero nao permitida!\n");
            } else {
                printf(" %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            break;

        case '%':

            if ((int)num2 == 0) { 
                printf("Erro: Divisao por zero nao permitida!\n");
            } else {
                printf("Resto da divisao de %.2f por %.2f = %d\n", num1, num2, (int)num1 % (int)num2);
            }
            break;

        default:

            printf("Operacao invalida!\n");
            break;
    }

    return 0;
}
