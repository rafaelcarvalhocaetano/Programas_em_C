/*O programa abaixo mostra uma fun��o cujo objetivo � verificar e retornar o maior valor entre
duas vari�veis (a e b), as quais s�o definidas como par�metros formais. Na chamada da fun��o, no
programa principal, as vari�veis p e q s�o definidas como par�metros reais.*/

#include<stdio.h>
#include<stdlib.h>
int verificar_maior(int a, int b)
{
	if(a>b)
	return(a);
	else
	return (b);
}
main(){
	int p=7, q=10;
	int maior;
	maior=verificar_maior(p,q);
	printf("\nMaior elemento=%d", maior);
}
