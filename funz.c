#include <stdio.h>

void stampaInteri(int numero1, float numero2, char *carattere)
{
    printf("%d\n", numero1);
    printf("%f\n", numero2);
    printf("%s\n", carattere);
}

int main()
{
    int n = 7;
    int i = 42;
    char c = 'G';
    float f = 4.85;
    char stringa[100]="ciao";

    stampaInteri(n, f, stringa);
}