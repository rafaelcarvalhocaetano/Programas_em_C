/*as vari�veis pa e pb como ponteiros para n�mero real (float).
Observe que, na linha 11, ocorre a atribui��o da soma dos valores das vari�veis a e b � vari�vel r, de
forma indireta, por meio da utiliza��o dos ponteiros.*/
#include<stdio.h>
#include<stdlib.h>
main(){
	float a, b, r;
	float *pa, *pb;
	a=7.3;
	b=7.3;
	pa=&a;
	pb=&b;
	r=*pa+*pb;
	printf("\n A soma de a + b via ponteiro =%.2f", r);
	system("pause");	
}
