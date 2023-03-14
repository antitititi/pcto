#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("il 1o ato del triangolo vale ");
    scanf("%d", &x);
    printf("il 1o lato vale %d\n", x);
    printf("il 2o lato del triangolo vale ");
    scanf("%d", &y);
    printf("il 2o lato vale %d\n", y);
    printf("il 3o lato del triangolo vale ");
    scanf("%d", &z);
    printf("il 3o lato vale %d\n", z);

    if( x + y > z && x + z > y && y + z > x )
    {
        printf("i lati possono comporre un triangolo\n");
        if( x == y && x == z )
        {
            printf("il triangolo composto é equilatero\n");
        }
        else
        {
            printf("il triangolo é isoscele o scaleno\n");
            if((x == y && x != z) || (x == z && x != y) || (y == z && y != x))
            {
                printf("il triangolo é isoscele\n");
            }
            else
            {
                printf("il triangolo é scaleno\n");
            }
        }
    }
    else
    {
        printf("i lati non possono comporre un triangolo\n");
    }

}