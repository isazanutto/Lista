// P2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>


int main()
{

	int vetor[100];
	int a,y, b, x;
	int i;
	vetor[0] = 0;
	vetor[1] = 1;
	
	
	printf("Entre com um numero inteiro:");
	scanf_s("%i",&x);
	
	for ( i = 2; i < x; i++)
	{
		vetor[i] = vetor[i - 1] + vetor [i-2];
		 
		
	}
	for ( i = 0; i < x; i++)
	{
		printf(" %i ",vetor[i]);
	}

	system("pause");
}




