#include <stdio.h>

int main()
{
    int n;
    int x;
    printf("selezionare il valore intero di n: ");
    scanf("%d", &n);

    x = n;
    if(n == 1)
    {
        printf("la n selezionata é un numero primo\n");
    }

    while(x > 2)
    {
        x = x - 1;
        if( n % x == 0)
        {
            printf("la n selezionata non é un numero primo\n");
            x = 1;
        }
    }
    if(x != 1)
    {
        printf("la n selezionata é un numero primo\n");
    }
}