#include <stdio.h>

// Função que inverte uma string iterativamente
void inverterString(char str[]) {
    int i = 0, j = 0;
    char temp;

    // Descobrir o tamanho "na unha"
    while (str[j] != '\0') {
        j++;
    }
    j--; // agora j está na última posição válida da string

    // Troca os caracteres do início com os do fim
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];

    // Lê várias linhas até EOF (Ctrl+D no Linux/Mac ou Ctrl+Z no Windows)
    while (fgets(str, sizeof(str), stdin)) {
        // Remover o '\n' manualmente
        int k = 0;
        while (str[k] != '\0') {
            if (str[k] == '\n') {
                str[k] = '\0';
                break;
            }
            k++;
        }

        inverterString(str);

        printf("%s\n", str);
    }

    return 0;
}