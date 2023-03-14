#include <stdio.h>

int main()
{
    int anno;
    printf("selezionare il proprio anno di nascita ");
    scanf("%d", &anno);

    int x = 1969 - anno ;
    int y = anno - 1969 ;
    
    if(anno < 1969)
    {
        printf("congratulazioni! sei nato prima che l'uomo arrivasse sulla luna\n");
        printf("sei nato %d anni prima che l'uomo arrivasse sulla luna\n", x);
    }
    
    else
    {
        printf("sei nato %d anni dopo il primo sbarco sulla luna\n", y);
    }
}