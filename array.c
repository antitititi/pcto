#include <stdio.h>
int main()
{
    int i = 0;
    int n;
 
   printf("scegli un numero:");
   scanf("%d", &n);
  int array[n];
    int x = 2;
    int y;
    
    
   while( i < n ) 
    {
        y = x - 1;
        while(y>=1 && y != x)
    {
        if ( x % y == 0)
        {
            break ;
        
        }
        
        y = y - 1;
        
    }
    if(y == 1)
        {
        array[i] = x;
            i++;
        }
    x++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d\n", array[i]);
        i++;
    }

}