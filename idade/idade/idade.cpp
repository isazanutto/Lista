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
	n = d % 365;
	mes = n / 30; 
	m = mes % 30;
	dia = m;
	
		printf("Resultado: %i %i %i",ano,mes,dia);

	system("pause");
}

