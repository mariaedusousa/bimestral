#include <stdio.h>

int main() {
    int N, i, j;
    int num = 1;

    printf("digite um numiru positible: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O numiru tem que ser maior que 0!\n");
        return 1;
    }

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            if (num > N) {
                break;
            }
            printf("%d ", num);
            num++;
        }
        if (num > N) {
            break;
        }
        printf("\n");
    }

    return 0;
}
