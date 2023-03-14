#include <stdio.h>

int main()
{
    int eta;

    printf("etá = ");
    scanf("%d", &eta);
    printf("la tua etá = %d ", eta);

    if(eta > 18)
    {
        if(eta > 20)
        {
            printf("vai all'uni\n");
        }
        else
        {
            printf("non vai alll'uni\n");
        }
    }    
    else
    {
        if(eta < 6)
        {
            printf("vai all'asilo\n");
        }
        else
        {
            printf("vai alle elementari/medie/liceo\n");
        }
    }
}