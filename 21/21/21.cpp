// 21.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

int main()
{
	int vetor[] = {0};
	int x,i,soma=0;
	
	printf("Entre com um numero inteiro:");
	scanf_s("%i",&x);

	for ( i = 0; i < x; i++)
	{
		printf("Entre com %i valores: ",x);
		scanf_s("%i",&vetor[i]);
		if (vetor[i] % 2 == 0) {

			soma = soma+ vetor[i];
		}
	
	}
	
	printf("Resultado da soma = %i",soma);
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
