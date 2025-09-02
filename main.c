#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resto = 0, soma = 0;

    scanf ("%d", &numero);

    while(numero > 0)
    {
      resto = numero % 10;
      numero = numero / 10;
      soma = soma + resto;
    }

    printf ("A soma eh %d", soma);
}