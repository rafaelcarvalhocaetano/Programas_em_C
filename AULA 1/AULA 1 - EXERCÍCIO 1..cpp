// CONSTANTES E OPERADORES

#include<stdio.h>
#include<stdlib.h>
//especifica��o simb�lica para o valor de pi.
#define pi 3.1415
main(){	
// le o raio da circunferencia...
float raio;
printf("O raio e:");
scanf("%f", &raio);
// calcula a �rea, aqui usamos a constante simbolica especifica...
float area=pi*(raio*raio);
// apresenta o valor..
printf("Area=%.2f\n\n", area);
system("PAUSE");
}

