#include <stdio.h>

int main()
{
    int x;
    int y;

    x=0;
    y=0;
    while(x<100)
    {
        x=x+2;
        y=x+y;
    }
    printf("%d\n", y);
}