// P1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>

int main()
{
	float x, y, z, a;
	
	printf("Entre com as medidas do trapezio:\n");
	printf("Base Maior,Base menor e Altura:");
	scanf_s("%f %f %f",&x,&y,&z);

	a = ((x + y)*z )/ 2;
	printf("Resultado: %.2f",a);

	system("pause");
}

