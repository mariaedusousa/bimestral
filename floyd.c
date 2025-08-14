#include<stdio.h>

int main(){
    int N, i,j;
    int num=1;
    printf("informe um numero inteiro positivo:");
    scanf("%d",&N);
    
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }
        printf("\n",&N);
    }
    return 0;
}
