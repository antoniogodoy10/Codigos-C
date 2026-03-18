#include <stdio.h>

void tamanho (char str[], char inverso[])
{
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++
    }
    return i;

}

void inverter(char str[], char inverso[])
{
    int tam = tamanho(str, inverso);

    for (int i = 0; i < tam; i++)
    {

    }
}

int main() {
         
    char str[100];
    char inverso[100];

    
    while(fgets(str, sizeof(str), stdin) != NULL)
    {
        inverter(str, inverso);
    }
}