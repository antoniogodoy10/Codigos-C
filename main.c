#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    int repM = 0, repL = 0;
    int somaMi = 0, somaLi = 0;

    while (1)
    {
        scanf ("%d", &r);

        if (r == 0)
        {
            break;
        }

        int Mi[r], Li[r];

        for (int i = 0; i < r; i++)
        {
            scanf ("%d", &Mi[i]);
            somaMi += Mi[i];
        }

        for (int j = 0; j < r; j++)
        {
            scanf ("%d", &Li[j]);
            somaLi += Li[j];
        }


        for (int k = 1; k < r; k++)
        {
            if (Mi[k] == Mi[k - 1])
            {
                repM++;
            }
            else{
                repM = 0;
            }

            if (Li[k] == Li [k -1])
            {
                repL++;
            }
            else
            {
                repL = 0;
            }
        }

       if (repM >= 3 && repL <= 3) somaMi += 30;
       if (repL >= 3 && repM <= 3) somaLi += 30;

    }

    if (somaMi > somaLi)
    {
        printf ("M");
    }

    else if (somaLi > somaMi)
    {
        printf ("L");
    }
    else
    {
        printf ("T");
    }
}
