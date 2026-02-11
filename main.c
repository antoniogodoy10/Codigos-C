#include <stdio.h>

int main() {

    char texto[200];
    int i, cont = 0;

    printf ("Digite uma string: ");
    fgets(texto, 200, stdin);

    while (texto[i] != '\0')
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            cont++;
        }
    }

    printf ("A quantidade de maiúsculas é de: %d", cont);
}