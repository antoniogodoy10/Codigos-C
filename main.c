#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[10], vetor2[10], vetor3[20], troca;

    printf ("Preencha o primeiro vetor:\n ");

    for (int i = 0; i < 10; i++)
    {
        scanf ("%d", &vetor1[i]);
    }
    printf ("Preencha o segundo vetor: \n");

    for (int i = 0; i < 10; i++)
    {
        scanf ("%d", &vetor2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        vetor3[i] = vetor1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        vetor3[i + 10] = vetor2[i];
    }

    for (int i = 0; i < 20 - 1; i++)
    {
        for (int j = i + 1; j < 19; j++)
        {
            if (vetor3[i] < vetor3[j])
            {
               troca = vetor3[i];
               vetor3[i] = vetor3[j];
               vetor3[j] = troca;
            }
        }
    }

    printf ("Vetor 3: \n");

    for (int i = 0; i < 20; i++)
    {
        printf ("%d ", vetor3[i]);
    }

}