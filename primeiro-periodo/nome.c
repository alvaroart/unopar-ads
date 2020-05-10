/*
07/05/2020 - Alvaro Rosa Teixeira.
Apenas test uma brincadeira com strings em c.

*/

#include<stdio.h>
void main()
{
	char nome [55], sobrenome[25];
	
	printf("\n Digite o Seu Nome:");
	scanf("%s",nome);

	printf("\n Digite o Seu sobre nome:");
	scanf("%s",sobrenome);


	
	printf("\nOi, %s",nome);
	printf(" ");
	printf("%s ",sobrenome);
	printf("vc é um cabeção !!/n");
}
