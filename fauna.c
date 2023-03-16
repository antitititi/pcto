#include <stdio.h>

int main()
{
    char stringa[100];

    printf("riconosci una stringa: ");
    scanf(" %s", stringa);

    int i = 0;
    while(stringa[i] != '\0')
    {
        i++;
    }
    i--;
    int j = 0;
    char c;
    while(j < i)
    {
        c = stringa[j];
        stringa[j] = stringa[i];
        stringa[0] = c;
        i--;
        j++;
    }
    printf("%s\n", stringa);
}