// 34.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	float  v;
	float maior=0, menor=10000000000000000000;
	
	for (int i = 0; i < 50; i++)
	{
		printf("Entre com os valores");
		scanf_s("%f",&v);

		if (v>maior)
		{
			maior = v;
		}
		if (v<menor)
		{
			menor = v;
		}
		
		
	}
	printf("Maior numero inserido: %.2f\n",maior);
	printf("Menor numero inserido: %.2f\n",menor);
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
