#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    int cont = 0;
    int letras = 0;
    int i = 0;

    scanf ("%s", str1);
    scanf ("%s", str2);

    while (str1[i] != '\0')
    {
        for (i = 0; i < 20; i++)
        {
            letras++;
            for (int j = 0; j < 20; j++)
            {
                if(str1[i] == str2[j])
                {
                 cont++;
                }
            }
        }
    }
    if (cont == letras)
    {
        printf("SIM");  
    }
    else{
        printf("NAO");
    }
}