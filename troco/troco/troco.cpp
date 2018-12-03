// troco.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	int compra, troco,cliente;
	int x,y,z;
	
	printf("Entre com o valor da compra:");
	scanf_s("%i",&compra);
	printf("Valor entregue pelo cliente:");
	scanf_s("%i", &cliente);

	troco = cliente - compra;
	printf("Total da compra= %i\nValor entregue pelo cliente=%i\nTroco=%i\n",compra,cliente,troco);
	
	while (troco >=0)
	{


		if (troco < 10)
		{
			x = troco;
			printf("Entregue %i notas de R$1", x);
		}
		else if (troco < 100) {
			y = troco / 10;
			printf("Entregue %i notas de R$10", y);
		}
		else if (troco >= 100)
		{
			z = troco / 100;
			printf("Entregue %i notas de R$100", z);
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
