/*Este programa inicializa um vetor A com os seguintes elementos 1, 3, 4, 2,5, 8, 7, 6, 9, 12, 15.
Na sequ�ncia, um vetor B de mesmo tipo e dimens�o, � constru�do observando a seguinte lei de forma��o:
�todo elemento do vetor A que for �mpar deve ser multiplicado por 2; caso contr�rio, deve permanecer constante�.
Por fim, o vetor B � apresentado.*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 11

main(){
	int A[TAM]={1, 3, 4, 2, 5, 8, 7, 6, 9, 12, 15};
	int B[TAM];
	int i;
	//cria��o do vetor B..
	for(i=0;i<TAM;i++){
		if(A[i] % 2 !=0){
			B[i]=A[i]*2;
		}
		else{
		B[i]=A[i];
		}
	}
	//impressao do vetor B...
	printf("\n******DADOS DO VETOR B****\n");
	for(i=0;i<TAM;i++){
	printf("%d", B[i]);
}
printf("\n\n");
system("pause");
}
