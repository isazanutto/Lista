// 37.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


struct data
{
	int dia;
	int mes;
	int ano;

	int dia1;
	int mes1;
	int ano1;

}datas;



int main()
{
	int x, y, z,p;
	
	
	printf("Entre com a primeira data\nDia:");
	 scanf_s("%i",&datas.dia);
	 getchar();
	 printf("Mes:");
	 scanf_s("%i",&datas.mes);
	 getchar();
	 printf("Ano:");
	 scanf_s("%i",&datas.ano);
	 getchar();
	    printf("\n");
	
	printf("Entre com a segunda data\nDia:");
	 scanf_s("%i",&datas.dia1);
	printf("Mes:");
	 scanf_s("%i",&datas.mes1);
	printf("Ano:");
	 scanf_s("%i",&datas.ano1);

	 printf("Data1: %i/%i/%i \nData2: %i/%i/%i\n", datas.dia, datas.mes, datas.ano, datas.dia1, datas.mes1, datas.ano1);

	 system("pause");
	 
	 

	 if (datas.ano<datas.ano1)
	 {
		 x = datas.ano1 - datas.ano;
	 }
	 else
	 {
		 x = datas.ano - datas.ano1;
	 }
	 
	 if (datas.dia<datas.dia1)
	 {
		 z = datas.dia1 - datas.dia;
	 }
	 else
	 {
		 z = datas.dia - datas.dia1;
	 }
	 if (datas.mes<datas.mes1)
	 {
		 y = datas.mes1 - datas.mes;
	 }
	 else
	 {
		 y = datas.mes - datas.mes1;
	 }
	 
	 
	 p = z + (x*365) + (y*30);

	 printf("A diferença entre as duas datas e de %i dias\n",p);
	 printf("\n");
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
