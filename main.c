#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, codigo, nht;
    float sal_min, sal_inicial, aux, sal_final, valor;
    char turno, categoria;

    sal_min = 450;

    for (cont = 0; cont < 10; cont++)
    {
        scanf("%d", &codigo);
        scanf ("%d", &nht);
        scanf (" %c", &turno);
        scanf (" %c", &categoria);

        if (categoria = 'G')
        {
            if (turno = 'N')
            {
                valor = sal_min * 18/100;
            }
            else
            {
                valor = sal_min * 15/100;
            }
        }
        else
        {
            if (turno = 'N')
            {
                valor = sal_min * 13/100;
            }
            else
            {
                valor = sal_min * 10/100;
            }
        }
        sal_inicial = nht * valor;

        if (sal_inicial <= 300)
        {
            aux = sal_inicial * 20/100;
        }
        else if (sal_inicial > 600)
        {
            aux = sal_inicial * 5/100;
        }
        else
        {
            aux = sal_inicial * 5/100;
        }

        sal_final = sal_inicial + aux;

        printf ("Codigo: %d \nNumero de horas trabalhadas: %d \nValor da hora: %.2f \nSalario inicial: R$%.2f \n"
                "Auxilio alimentacao: R$%.2f \nSALARIO FINAL: R$%.2f ", codigo, nht, valor, sal_inicial, aux, sal_final);
    }
}
