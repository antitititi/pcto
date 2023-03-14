#include <stdio.h>

int main()
{
    int eta;
    
    printf("inserisci la tua etá: ");
    scanf("%d", &eta);
    printf("la tua etá é di %d anni\n", eta);

    if(eta > 18)
    {
        printf("sei maggiorenne E piú grande di me\n");
    }
    else if(eta == 18)
    {
        printf("sei di un anno piú grande di me\n");
    }
    else
    {
        printf("sei antipatico\n");
    }
}