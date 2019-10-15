#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/* do the thing */
char rot13(char c)
{
    if (c > 64 && c < 91)
    {
        c -= 65;
        c += 13;
        c = c % 26;
        c += 65;
    }
    else if (c > 96 && c < 123)
    {
        c -= 97;
        c += 13;
        c = c % 26;
        c += 97;
    }
    return c;
}


int main()
{
    char c = getchar();
    while (c != EOF)
    {
        putchar(rot13(c));
        c = getchar();
    }
    return 0;
}
