// 35.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
    
	int idade, sexo, olhos, cabelo;

	do
	{
		for (int i = 0; i < 300; i++)
		{
			printf("Qual a sua idade:");
			scanf_s("%i",&idade);
			printf("Qual seu sexo\n1- Sexo feminino  2-Sexo masculino");
			scanf_s("%i",&sexo);
			printf("Qual a cor dos seus olhos?\n1-Azul 2-Castanho 3-Verde");
			scanf_s("%i",&olhos);
			printf("Qual a cor do seu cabelo?\n1-Louros 2-Castanhos 3-Pretos");
			scanf_s("%i",&cabelo);

			if (sexo=1)
			{
				sexo = ("feminino");
			}
		}
	
	
	
	
	
	
	} while (idade>0);











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
