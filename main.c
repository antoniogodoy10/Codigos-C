#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma_digitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    char entrada[50];
    int contador = 1;

    while (1) {
        if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
            break;
        }

        entrada[strcspn(entrada, "\n")] = 0;

        if (strcmp(entrada, "FIM") == 0) {
            break;
        }

        int numero = atoi(entrada);

        printf("%d\n%d\n\n", contador, soma_digitos(numero));

        contador++;
    }

    return 0;
}
