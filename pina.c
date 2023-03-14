#include <stdio.h>

int main()
{
    int anno;
    printf("seleziona un anno ");
    scanf("%d", &anno);
    if(anno % 400 == 0)
    {
        printf("l'anno selezionato é bisestile\n");
    }

    else
    {
        printf("l'anno selezionato non é bisestile\n");
    }
}