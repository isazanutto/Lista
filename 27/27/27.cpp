// 27.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

int main()
{
	float compra, cliente, troco;
	float x, y, z,h;
	
	
	printf("Entre com o valor da compra:");
	scanf_s("%f",&compra);
	printf("Valor entregue pelo cliente:");
	scanf_s("%f",&cliente);

	troco = cliente - compra;
	
	if (troco >=100)
	{
		x = troco / 100;
		printf("Utilize %.0f notas de R$100",x);
	}
	else if (troco>=10)
	{
		y = troco / 10;

		printf("Utilize %.0f notas de R$10",y);
	}
	else
	{
		z = troco / 1;
		printf("Utilize %0.f notas de R$1",z);
	}
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
