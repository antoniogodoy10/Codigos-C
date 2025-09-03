#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mulher_sim = 0, mulher_nao = 0, homem_sim = 0, sim = 0, nao = 0;
    char sexo, produto;
    float porcentagem, homem_nao = 0, homem = 0;

    printf ("Digite M ou H para mulher e homem, e S ou N para sim ou não perante a aceitação do produto\n");

    for (int i = 0; i < 10; i++)
    {

        scanf (" %c", &sexo);
        scanf (" %c", &produto);
        if (produto == 'S')
        {
            sim++;

            if (sexo == 'M')
            {
               mulher_sim++;
            }
            else
            {
                homem_sim++;
                homem++;
            }
        }
        else
        {
            nao++;

            if (sexo == 'M')
            {
                mulher_nao++;
            }
            else
            {
                homem_nao++;
                homem++;
            }
        }

    }

        porcentagem = (homem_nao/homem) * 100;

        printf ("%d pessoas responderam sim\n", sim);
        printf ("%d pessoas responderam nao\n", nao);
        printf ("%d mulheres responderam sim\n", mulher_sim);
        printf ("%.f por cento dos homens responderam nao\n", porcentagem);

}