/*Neste exemplo, o programa cont�m os seguintes m�dulos:
1. Um procedimento para a leitura da vari�vel n.
2. Um procedimento que calcula e mostra o dobro do valor de n.
3. Uma fun��o que verifica se o n�mero n � par ou �mpar. Se n � par, ent�o a fun��o retorna 1. Se n
� �mpar, a fun��o retona 0 (zero).*/
#include<stdio.h>
#include<stdlib.h>
int n;
void entrada(){
	printf("\n DIgite o valor de N:");
	scanf("%d", &n);
}
void dobro (){
	n=n*2;
	printf("\n Dobro de n=%d", n);
}
int paridade (){
	if(n%2==0)
	return(1);
	else return (0);
}
main(){
	int par_impar;
	entrada ();
	dobro ();
	par_impar=paridade ();
	if (par_impar==1)
	printf("\n O numero e par");
	else printf("\n O numero e impar");
	system("pause");
}
