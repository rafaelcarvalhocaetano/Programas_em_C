/*fazer a leitura de um vetor A com 10 elementos num�ricos inteiros. Em seguida, � feito o c�lculo do total
de elementos �mpares existentes no vetor e, tamb�m, o percentual do valor total de n�meros �mpares em 
rela��o � quantidade total de elementos armazenados no vetor.*/
#include<stdio.h>
#include<stdlib.h>
#define TAM 10
main(){
	int vetor[TAM];
	int i;
	for(i=0;i<TAM;i++){
		printf("Valor [%d]:",i);
		scanf("%d",&vetor[i]);
	}
	//quanta a quantidade de impares....
	int quantidade=0;
	for(i=0;i<TAM;i++){
		if(vetor[i]%2!=0){
			quantidade++;
		}
	}
//calcula o percentual em rela��o ao total dos valores.....
float percentual=(float)quantidade/TAM;
printf("Quantidade de impares=%d\n", quantidade);
printf("Percentual=%.2f%%\n", percentual*100);
system("pause");
}
