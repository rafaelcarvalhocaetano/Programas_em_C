/*Inicializa��o de estruturas e estruturas aninhadas*/
/*Vamos criar um programa que define uma estrutura �Pessoa� com os campos nome e idade e
criar uma tabela que armazena os dados de 5 pessoas; ler valores para cada pessoa da tabela (para
isso vamos criar a fun��o lerPessoas) e depois chamar a fun��o imprimirPessoas que apresenta os
dados na tela. Note que a estrutura �Pessoa� deve ser definida antes das fun��es que usam a tabela
do tipo �Pessoa� como par�metro.*/
#include<stdio.h>
#include<stdlib.h>
#define TAM 5
struct Pessoa{
	char nome [80];
	int idade;
};
void lerPessoa (struct Pessoa pessoas []){
	int i;
	for(i=0;i<TAM;i++){
		printf("Nome:");
		gets(pessoas [i].nome);
		printf("Idade:");
		scanf("%d", &pessoas[i].idade);
		getchar ();
		
	}
}
void imprimirPessoa(struct Pessoa pessoas []){
	int i=0;
	for(i=0;i<TAM;i++){
		printf("%s - %d\n", pessoas[i].nome, pessoas[i].idade);
	}
}
main(){
	struct Pessoa pessoas [TAM];
	lerPessoa (pessoas);
	imprimirPessoa(pessoas);
	printf("\n\n");
	system("pause");
}
