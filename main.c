#include <stdio.h>

int main() {
    int N; // número de casos de teste
    scanf("%d", &N);

    for (int caso = 0; caso < N; caso++) {
        int M; // número de alunos
        scanf("%d", &M);

        int notas[M];
        int copia[M];

        // leitura das notas e cópia
        for (int i = 0; i < M; i++) {
            scanf("%d", &notas[i]);
            copia[i] = notas[i];
        }

        // ordenação decrescente (Bubble Sort)
        for (int i = 0; i < M - 1; i++) {
            for (int j = 0; j < M - 1 - i; j++) {
                if (notas[j] < notas[j + 1]) {
                    int aux = notas[j];
                    notas[j] = notas[j + 1];
                    notas[j + 1] = aux;
                }
            }
        }

        // contar quantos ficaram na mesma posição
        int iguais = 0;
        for (int i = 0; i < M; i++) {
            if (notas[i] == copia[i]) {
                iguais++;
            }
        }

        printf("%d\n", iguais);
    }

    return 0;
}