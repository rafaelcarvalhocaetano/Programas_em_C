/*simula��o de um dicion�rio de ingl�s para portugu�s, que armazena
50 palavras. Nesse caso, s�o utilizados 2 dois vetores de strings, sendo o primeiro para armazenar
as palavras em ingl�s e, o segundo, para armazenar a tradu��o das respectivas palavras para o
portugu�s. Em seguida, o usu�rio faz uma consulta por uma palavra em ingl�s que esteja
armazenada no vetor e o programa exibe a tradu��o para o portugu�s.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char ingles [50][30], portugues [50][30], palavras [30];
	int i;
	for(i=0;i<30;i++){
		printf("digite uma palavra em ingles:::\n");
		gets(ingles[i]);
		printf("\nDigite uma traducao para a palavra::\n");
		gets(portugues[i]);
	}
	printf("\n*****   Digite uma palavra em ingles para saber sua tradu��o  *******\n\n");
	gets(palavras);
	for(i=0;i<50;i++){
		printf("\nPalavra em protugues :");
		puts(portugues[i]);
	}
}
