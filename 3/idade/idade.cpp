// idade.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>



int main()
{
	int d,m, dia,ano,n,mes;
	
	printf("Entre com sua idade em dias: ");
	scanf_s("%i",&d);

	
	ano = d / 365;
	m = d % 365;
	
	if (d%365>=1)
	{
		mes = m / 30;
	}
	else
	{
		mes = 0;
	}
	
	n = m % 30;
	if (m%30 >=1)
	{
		dia = n;
	}
	else
	{
		dia = 0;
	}
		printf("Resultado: %i anos, %i meses, %i dias",ano,mes,dia);

	system("pause");
}

