/*Neste programa, uma vari�vel ponteiro armazena o endere�o de mem�ria de uma vari�vel n do
tipo int. Em seguida, � feita a divis�o de n por 5, sem utilizar o valor de n diretamente.*/
#include <stdio.h>
#include <stdlib.h>
main(){
	int n=5;
	int *pn;
	pn=&n;
	*pn=*pn/5;
	printf("\n O valor de n = %d\n\n", *pn);
	system("pause");
}

