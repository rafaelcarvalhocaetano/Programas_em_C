//O programa consiste em uma calculadora b�sica que realiza as opera��es de adi��o,
//subtra��o, multiplica��o e divis�o. Nesse caso, o programa foi criado com modulariza��o.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
float a, b, r;
/*************************************
Definicao do MODULO DE ENTRADA
*/*****************************
/************************************
Definicao do MODULO DE ADICAO
*/*****************************
/***********************************
Definicao do MODULO DE SUBTRACAO
*/*****************************
/***********************************
Definicao do MODULO DE MULTIPLICACAO
*/****************************
/*******************************
Definicao do MODULO DE DIVISAO
*/****************************
/******************************
Definicao do MODULO DE SAIR
*/******************************
main(){
	int opcao=0;
	while (opcao!=5)
	{
		system("cls");
		printf("\n1-Adicao");
		printf("\n2-Subtracao");
		printf("\n3-Multiplicacao");
		printf("\n4-Divisao");
		printf("\n5-Sair");
		printf("\n\n Escolha um numero:");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1:
			{
				/*****************************
				Definicao do MODULO DE ENTRADA
				*/****************************
				/*****************************
				Definicao do MODULO DE ADICAO
				*/****************************
				/*****************************
				Definicao do MODULO DE SAIR
				*/****************************
				break;
			}
			case 2:
			{
				/*******************************
				Definicao do MODULO DE ENTRADA
				*/******************************
				/*******************************
				Definicao do MODULO DE SUBTRACAO
				*/********************************
				/********************************
				Definicao do MODULO DE SAIR
				*/*******************************
				break;
			}
			case 3:
			{
				Definicao do MODULO DE ENTRADA
				Definicao do MODULO DE MULTIPLICACAO
				Definicao do MODULO DE SAIR
				break;
			}
			case 4:
			{
				Definicao do MODULO DE ENTRADA
				Definicao do MODULO DE DIVISAO
				Definicao do MODULO DE SAIR
				break;
			}
		}
	}
default:
printf("\n****ESTA OPCAO NAO EXISTE\n");
system("pause");
}
