// 20.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

int main()
{
	int matriz[3][3];
	int i, j,z;
	

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("Entre com os valores: ");
			scanf_s("%i",&matriz[i][j]);
		}
		
	}
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {

			printf("%i",matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (matriz[i][j] < 0) {
				matriz[i][j] = -matriz[i][j];
			}
		}
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
