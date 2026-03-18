#include <stdio.h>

int tamanho(char str[], char inverso[])
{
    int i = 0;
    //o i conta o tamanho da string ou palavra ate o \n
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    //retorna o tamanho
    return i;

}

void inverter(char str[], char inverso[])
{
    //chama metodo tamanho
    int tam = tamanho(str, inverso);
    //preenche a string inverso
    for (int i = 0; i < tam; i++)
    {
      inverso[i] = str[tam - 1 - i];
    }

    inverso[tam] = '\0';
}

int main() {
     //criação das duas strings    
    char str[100];
    char inverso[100];

    //ler ate o \0
    while(fgets(str, sizeof(str), stdin) != NULL)
    {
        //chamar metodo inverter
        inverter(str, inverso);

        //printa na tela a string invertida 
        printf ("%s\n", inverso);
    }
}