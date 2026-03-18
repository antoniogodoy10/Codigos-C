#include <stdio.h>

int main()
{
    int n, i = 0, soma = 0;
    int digitos[100];

    scanf ("%d", &n);

    while (n > 0)
    {
        digitos[i] = n % 10;
        n = n / 10;
        i++;
    }
    
   for (int j = 0; j < i; j++)
   {
        soma += digitos[j];
   }

    printf ("%d", soma);
}