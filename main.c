#include <stdio.h>

int main ()
{
    int n = 1024, cont = 0;

    for( int i = n; i > 0; i/=2)
    {
        cont++;
    }

    printf ("%d", cont);
}