// inteiro.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

int main()
{
    
	int a, b, c;
	float x, y, z;

	printf("Entre com tres numeros inteiros");
	scanf_s("%i %i %i",&a,&b,&c);
	
	x = pow(a+b,2);
	y = pow(b+c,2);
	z = (x + y) / 2;

	printf("Resultado= %f",z);

	system("pause");






}

