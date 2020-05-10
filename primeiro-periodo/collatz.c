/*Exercicio unopar
conjectura de Collatz: tomando um número natural
“n”, se n for par, será dividido por 2; se n for ímpar, será multiplicado por
3 e ao resultado será somado 1. Repete-se o processo indefinidamente. A
conjectura de Collatz estabelece que, com essas duas regras simples, todos
os números naturais chegam até 1 (e a partir daí o laço 1,4,2,1,4,2,1,4,2,1... se
repete indefinidamente). Matematicamente, as regras são:
( n ) = n / 2 se n é par.
( n ) = 3 n + 1 se n é ímpar.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("\n Digite o número:");
    scanf("%d",&num);
    
    while (num > 1 )
    {
           if ((num % 2) == 0)
        {
            num = num /2;
            printf("%d""\n",num);
        }
    else
    {
        num= (num * 3) +1;
        printf("%d""\n",num);
    }
    }
     

}