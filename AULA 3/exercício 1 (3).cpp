/*Criar um programa que leia tr�s vetores (A, B e C) com 5 elementos inteiros cada. Construir um vetor D, sendo
esse a jun��o dos tr�s outros vetores. Desta forma, D deve ter o triplo de elementos dos outros 3 vetores.
Apresentar os elementos do vetor D.*/

#include<stdio.h>
#include<stdlib.h>
//declara��o do vetor ABC....
#define TAM_ABC 15
//declara��o do vetor D....
#define TAM_D 15
main(){
	//declara��o dos vetores....
	int A[TAM_ABC],B[TAM_ABC],C[TAM_ABC],D[TAM_D];
	int i;
	//leitura do vetor A...
	printf("\n*********INFORME OS DADOS DO VETOR A**************\n");
	for(i=0;i<TAM_ABC;i++){
		printf("A[%d]",i);
		scanf("%d", &A[i]);
	}
	//declara��o do vetor B.....
	printf("\n**********INFORME OS DADOS DO VETOR B*************\n");
	for(i=0;i<TAM_ABC;i++){
		printf("B[%d]", i);
		scanf("%d",&B[i]);
	}
	//declara��o do vetor C....
	printf("\n****************INFORME OS DADOS DO VETOR C*********\n");
	for(i=0;i<TAM_ABC;i++){
		printf("C[%d]", i);
		scanf("%d", &C[i]);
	}
	//cria��o do vetor D....
	for(i=0;i<TAM_ABC;i++){
	D[i]=A[i];
	D[i+5]=B[i];
	D[i+10]=C[i];
	}
	//impressao do vetor D...
	printf("\n*******VALORES DO VETOR D*******\n");
	for(i=0;i<TAM_D;i++){
		printf("D[%d]=%d", i, D[i]);
	}
printf("\n\n");
system("pause");
}
