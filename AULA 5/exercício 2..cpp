/*O programa solicita que o usu�rio digiteuma string, faz a invers�o dos caracteres e verifica se a palavra � um pal�ndromo*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int palavra[20], palavra_invertida[20];
	int i, j=0, tam;
	printf("digite a string:");
	gets (palavra);
	tam=strlen (palavra);//tam ir� armazenar o tamanho da string...
	for(i=tam-1;i>0;i--){
		palavra_invertida[j]=palavra[i];
		j++;
	}
	palavra_invertida[j]='\0';
	if(strcmp(palavra, palavra_invertida)==0);
	printf("A palavra invertida �::");
	else printf("A palavra n�o � polidromo!");
	system("pause");	
	
}
