// 39.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

struct dados
{
	char nome [20];
	char sexo [10] ;
	float peso;
	float altura;
	int cpf [12];

} vet[100];




int main()
{
	int x;
	printf("Quantas pessoas serao entrevistadas?");
	scanf_s("%i", &x);
	



	for (int i = 0; i < x; i++)
	{
		printf("Entre com o nome do entrevistado:\n");
		fgets(vet[i].nome,20,stdin);
		printf("Entre com o sexo do entrevistador:\n");
		fgets(vet[i].sexo,10,stdin);
		printf("Entre com o peso:\n");
		scanf_s("%f",&vet[i].peso);
		printf("Entre com a altura");
		scanf_s("%f",&vet[i].altura);
		printf("Entre com o cpf:");
		fgets(vet[i].cpf,12,stdin);


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
