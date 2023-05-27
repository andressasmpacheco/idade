#include <stdio.h>
int main()
{
    int iddias, idanos, idmeses;
    printf("Digite sua idade em dias ");
    scanf("%d",&iddias);
    idanos = iddias/365;
    idmeses = iddias/30;
    printf("Sua idade em anos %d\n", idanos);
    printf("Sua idade em meses %d\n", idmeses);
}
