// 19.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>
int main()
{
	int m[3][3]{ 1,2,3,4,5,6,7,8,9 };
	int x,y,m0,m1,m2;
	int m3, m4, m5, m6, m7, m8, m9;
	printf("|1 2 3|\n|4 5 6|\n|7 8 9|\n");
	

	printf("Entre com um numero inteiro:");
	scanf_s("%i",&x);

	m0 = x * m[0][0];
	m1 = x * m[0][1];
	m2 = x * m[0][2];
	m3 = x * m[1][0];
	m4 = x * m[1][1];
	m5 = x * m[1][2];
	m6 = x * m[2][0];
	m7 = x * m[2][1];
	m8 = x * m[2][2];
	
	printf("Resultado=\n|%i %i %i|\n|%i %i %i|\n|%i %i %i|",m0,m1,m2,m3,m4,m5,m6,m7,m8);


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
