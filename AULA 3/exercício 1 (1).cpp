/*A seguir, apresentamos um exemplo completo de um programa em linguagem C que utiliza inicializa��o de vetor. O enunciado �:
Criar um programa que leia uma determinada quantia a ser retirada em um caixa eletr�nico e apresente a quantidade m�nima de c�dulas equivalente.
As c�dulas s�o de 50, 20 e 10. Utilizar sempre que poss�vel c�dulas de maior valor. O valor da quantia a ser retirada deve ser m�ltiplo de 10.
Guardar em um vetor a quantidade de cada c�dula. Apresentar os dados do vetor de c�dulas na tela.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	//declara��o e inicializa��o de um vetor de cedulas....
	int cedulas[3]={50,20,10};
	//vetor que armazena a quantidade de cada cedula....
	int quantidade [3];
	int i;
	//leitura da quantia...
	int quantia;
	printf("Quantia:");
	scanf("%d",&quantia);
	//verifica se o valor da quantidade e multiplo de 10....
	if(quantia%10!=0){
		printf("O valor deve ser multiplo de 10!\n");
	}
else{
	//calcula a quantidade de cada cedula....
	for(i=0;i<3;i++){
		quantidade[i]=quantia/cedulas[i];
		quantia%=cedulas[i];
	}
//Apresenta a quantidade de cada cedula na tela.....
for(i=0;i<3;i++){
	printf("R$ %d = %d\n", cedulas[i], quantidade[i]);
}
}
system("pause");
}
