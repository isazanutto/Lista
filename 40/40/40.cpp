// 40.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	float c, p, q;
	
	do
	{
		printf("Selecione o codigo do produto: \n");
		printf(" 1- 1001 \n 2- 1324 \n 3- 6548 \n 4- 0987 \n 5- 7623 \n");
		scanf_s("%f", &c);
		printf("Qual a qauntidade do produto:");
		scanf_s("%f", &q);

		if (c == 1)
		{
			p = 5.32*q;
		}
		else if (c == 2) {
			p = 6.45*q;
		}
		else if (c == 3)
		{
			p = 2.37*q;
		}
		else if (c == 4)
		{
			p = 5.32*q;
		}
		else
		{
			p = 6.45*q;
		}

		printf("Valor da compra= %.2f\n", p);
	} while (c>0 || q>0 );
	
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
