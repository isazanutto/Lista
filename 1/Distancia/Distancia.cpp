// Distancia.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>

int main()
{
	float a, b,p,o, x, y, d;

	printf("Entre com a primeira posicao (x,y):");
	scanf_s("%f %f",&a,&b);
	printf("Entre com a segunda posicao (x,y):");
	scanf_s("%f %f",&p,&o);

	x = pow(a-p,2);
	y = pow(b-o,2);
	d = sqrt(x+y);

	printf("A distancia entre os pontos e %f",d);

	system ("pause");
}

