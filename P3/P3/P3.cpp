// P3.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>


int main()
{
	int matriz[2][2];
	int matriz1[2][2];
	int i, j,x,y,w,z;

	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j <2 ; j++) {
			printf("Entre com os valores da matriz 1:");
			scanf_s("%i", &matriz[i][j]);
		}

	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <2; j++) {
			printf("Entre com os valores da matriz 2:");
			scanf_s("%i", &matriz1[i][j]);
		}

	}

	x = matriz[0][0] + matriz1[0][0];
	y= matriz[0][1] + matriz1[0][1];
	z = matriz[1][0] + matriz1[1][0];
	w = matriz[1][1] + matriz1[1][1];

	
	
	
	
	printf("Resultado da soma=\n|%i %i|\n|%i %i|\n",x,y,z,w);
	system("pause");
}



