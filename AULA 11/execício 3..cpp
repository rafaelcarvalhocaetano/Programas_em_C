/*No programa abaixo, o procedimento possui apenas um par�metro (n), o qual � passado por
refer�ncia. Para tanto, � necess�rio declarar o par�metro formal como um ponteiro (asterisco antes
do nome do par�metro), que permitir� a altera��o do par�metro formal reflita sobre o par�metro
real. Na chamada do procedimento, � necess�rio passar o endere�o de mem�ria de n.*/
#include<stdio.h>
#include<stdlib.h>
void dobro (int *n)
{
	*n=2*(*n);
	printf("\n O valor de n=%d", *n);
}
main()
{
	int n = 4;
	dobro (&n);
	printf("\n O valor de n e %d", n);
	system("pause");	
}
