// P2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>


int main()
{
	int vetor[10];
	int x=0,f;
	
	printf("Entre com um numero inteiro:");
	scanf_s("%i",&x);
	
	for (int i = 0; i < x; i++)
	{
		x = (x-1) + (x-2);
	}
}

