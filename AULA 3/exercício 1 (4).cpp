/*Neste programa � efetuado o c�lculo de uma tabuada (1 ao 9) de um n�mero qualquer informado
pelo usu�rio e os resultados s�o armazenados em um vetor. No final do programa, os valores
armazenados no vetor s�o apresentados.*/
#include <stdio.h>
#include<stdlib.h>
#define TAM 9
main(){
//declara��o do vetor...
int tabuada[TAM];
int i;
//leitura de um numero...
int num;
printf("\nNumuro:");
scanf("%d", &num);
//calculo e armazenamento da tabuada...
for(i=0;i<TAM;i++){
	tabuada[i]=num*(i+1);	
}
//impressao do vetor...
printf("\n******DADOS DO VETOR*****\n");
for(i=0;i<TAM;i++){
	printf("Valor[%d]=%d\n",i,tabuada[i]);
}
system("pause");
}
