// P1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include<math.h>
#include<iostream>

int main()
{
	float x, y, z, a;
	
	
	
	printf("Entre as medidas do trapezio:\n");
	printf("Base maior:");
	scanf_s("%f ", &x);
	getchar();
	printf("Base menor:");
	scanf_s("%f ", &y);
	printf("Altura:");
	   scanf_s("%f ", &z);

      a = (x + y)*z / 2;

	printf("Resultado: %f",a);

	system("pause");
}

