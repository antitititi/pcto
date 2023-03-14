#include <stdio.h>

int main()
{
    char carattere;
    printf("inserisci il tuo genere: ");
    scanf(" %c", &carattere);
    if(carattere == 'm')
    {
        printf("sei maschio\n");
    }
    else if(carattere == 'f')
    {
        printf("sei femmina\n");
    }
    else if(carattere == 'n')
    {
        printf("sei di un altro genere\n");
    }
    else
    {
        printf("errore\n");
    }
}