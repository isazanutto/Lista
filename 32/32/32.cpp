// 32.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	float s, f;
	
	float filhos=0, salario=0;
	float i,x=0,y=0,j;
	float h, g;
	do
	{
		printf("Qual seu salario:");
		scanf_s("%f",&s);
		printf("Quantos filhos voce tem?");
		scanf_s("%f",&f);         
		for ( i = 0; i < s; i++)
		{
			
			x = x + s;
			salario = x / h;
		}
		for ( j = 0; j < f; j++)
		{
			g = j;
			y = y + f;
			filhos = y / g;
		}
		printf("Media de salario %.2f\nMedia de filhos %.2f", salario, filhos);

	
	} while (s>0 || f>0);

	
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
