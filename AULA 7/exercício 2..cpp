/*apresentamos um exemplo completo de um programa com as vari�veis p e q como
ponteiros para n�mero inteiro. Observe que, na linha 10*/
#include <stdio.h>
#include <stdlib.h>
main(){
	int a, b;
	int *p, *q;
	a=5;
	b=15;
	p=&a;
	q=p;
	*q=25;
	printf("\n Conteudo da variavel A=%d", a);
	system("pause");
}
