/*Neste exemplo, o programa cont�m os seguintes m�dulos:
1. Uma fun��o com dois par�metros, por valor, denominados �ini� e �fim�. � feito o c�lculo e o valor
da soma de todos os n�meros pares entre �ini� e �fim� � retornado.
2. Um procedimento com dois par�metros, sendo o primeiro �opcao� por valor e o segundo �n� por
refer�ncia. Se �opcao� � igual a 1, ent�o, � feito o c�lculo do dobro do valor de �n�. Se �opcao� �
igual a 2, o triplo do valor de �n� � calculado. O valor de n, alterado por refer�ncia dentro do
procedimento, � mostrado no "main".*/
#include<stdio.h>
#include<stdlib.h>
int soma_valores(int ini, int fim)
{
	int i, soma= 0;
	for(i=ini;i<=fim;i++)
	soma=soma+i;
	return (soma);
}
void calcula_dobro_tripo (int opcao, int *n)
{
	if(opcao==1)
	*n=*n*2;
	else
	if(opcao==2)
	*n=*n*3;
}
main()
{
	int ini=1, fim=10, n=4, soma, opcao;
	soma=soma_valores (ini,fim);
	printf("\nValor da soma=%d", soma);
	printf("\n Digite a opcao=");
	scanf("%d", &opcao);
	calcula_dobro_triplo (opcao, &n);
	printf("valor de n=%d", n);
	system("pause");
}
