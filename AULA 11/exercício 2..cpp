/*No programa abaixo, o procedimento possui apenas um par�metro formal (x), o qual � passado
por valor. Este par�metro � alterado pelo valor de seu quadrado dentro do procedimento, por�m tal
altera��o s� � v�lida dentro do procedimento.*/
#include<stdio.h>
#include<stdlib.h>
void quadrado (int x)
{
	x=x*x;
	printf("\n O valor de x=%d", x);
}
main()
{
	int x=4;
	quadrado (x);
	printf("\n O valor de x=%d", x);
	system("pause");
}

