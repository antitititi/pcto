#include <stdio.h>

int main()
{
    int x;
    printf("il numero é ");
    scanf("%d", &x);
    int y;
    printf("il 2o numero é ");
    scanf("%d", &y);
    int z;
    printf("il 3o numero é ");
    scanf("%d", &z);

    if((z - y) == (y - x))
    {
        printf("i numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf("i numeri non sono in progressione aritmetica\n");
    }
}