/**
* Author: Diogo Araújo
* Email: a23480@alunos.ipca.pt
* Date: 19-03-2022
* Desc: Projeto_EDA - Flexible Job Shop Problem - Main
*/

#include <stdio.h>
#include <locale.h>
#include "Dados.h"


int main() {
	setlocale(LC_ALL, "Portuguese");
#pragma region Variáveis
/**
*Espaço para declarar variaveis a ser usadas
*/
	Jobs* lista = NULL;
	float media;
	Jobs* x;
#pragma endregion

#pragma region Iniciar Jobs
/**
*Permite iniciar e inserir um job
*/
#pragma region Inicio Job 1

	Jobs* J1P1 = InicioJobs(1, 1, 1, 4);
	Jobs* J1P1_2 = InicioJobs(1, 1, 3, 5);

	Jobs* J1P2 = InicioJobs(1, 2, 2, 4);
	Jobs* J1P2_2 = InicioJobs(1, 2, 4, 5);

	Jobs* J1P3 = InicioJobs(1, 3, 3, 5);
	Jobs* J1P3_2 = InicioJobs(1, 3, 5, 6);

	Jobs* J1P4 = InicioJobs(1, 4, 4, 5);
	Jobs* J1P4_2 = InicioJobs(1, 4, 5, 5);
	Jobs* J1P4_3 = InicioJobs(1, 4, 6, 4);
	Jobs* J1P4_4 = InicioJobs(1, 4, 7, 5);
	Jobs* J1P4_5 = InicioJobs(1, 4, 8, 9);

	lista = InsereJobs(lista, J1P1);
	lista = InsereJobs(lista, J1P1_2);
	lista = InsereJobs(lista, J1P2);
	lista = InsereJobs(lista, J1P2_2);
	lista = InsereJobs(lista, J1P3);
	lista = InsereJobs(lista, J1P3_2);
	lista = InsereJobs(lista, J1P4);
	lista = InsereJobs(lista, J1P4_2);
	lista = InsereJobs(lista, J1P4_3);
	lista = InsereJobs(lista, J1P4_4);
	lista = InsereJobs(lista, J1P4_5);

#pragma endregion

#pragma region Inicio Job 2

	Jobs* J2P1 = InicioJobs(2, 1, 1, 1);
	Jobs* J2P1_2 = InicioJobs(2, 1, 3, 5);
	Jobs* J2P1_3 = InicioJobs(2, 1, 5, 7);
	Jobs* J2P2 = InicioJobs(2, 2, 4, 5);
	Jobs* J2P2_2 = InicioJobs(2, 2, 8, 4);
	Jobs* J2P3 = InicioJobs(2, 3, 4, 1);
	Jobs* J2P3_2 = InicioJobs(2, 3, 6, 6);
	Jobs* J2P4 = InicioJobs(2, 4, 4, 4);
	Jobs* J2P4_2 = InicioJobs(2, 4, 7, 4);
	Jobs* J2P4_3 = InicioJobs(2, 4, 8, 7);
	Jobs* J2P5 = InicioJobs(2, 5, 4, 1);
	Jobs* J2P5_2 = InicioJobs(2, 5, 6, 2);
	Jobs* J2P6 = InicioJobs(2, 6, 1, 5);
	Jobs* J2P6_2 = InicioJobs(2, 6, 6, 6);
	Jobs* J2P6_3 = InicioJobs(2, 6, 8, 4);
	Jobs* J2P7 = InicioJobs(2, 7, 4, 4);

	lista = InsereJobs(lista, J2P1);
	lista = InsereJobs(lista, J2P1_2);
	lista = InsereJobs(lista, J2P1_3);
	lista = InsereJobs(lista, J2P2);
	lista = InsereJobs(lista, J2P2_2);
	lista = InsereJobs(lista, J2P3);
	lista = InsereJobs(lista, J2P3_2);
	lista = InsereJobs(lista, J2P4);
	lista = InsereJobs(lista, J2P4_2);
	lista = InsereJobs(lista, J2P4_3);
	lista = InsereJobs(lista, J2P5);
	lista = InsereJobs(lista, J2P5_2);
	lista = InsereJobs(lista, J2P6);
	lista = InsereJobs(lista, J2P6_2);
	lista = InsereJobs(lista, J2P6_3);
	lista = InsereJobs(lista, J2P7);

#pragma endregion

#pragma region Inicio Job 3

	Jobs* J3P1 = InicioJobs(3, 1, 2, 7);
	Jobs* J3P1_2 = InicioJobs(3, 1, 3, 6);
	Jobs* J3P1_3 = InicioJobs(3, 1, 8, 8);
	Jobs* J3P2 = InicioJobs(3, 2, 4, 7);
	Jobs* J3P2_2 = InicioJobs(3, 2, 8, 7);
	Jobs* J3P3 = InicioJobs(3, 3, 3, 7);
	Jobs* J3P3_2 = InicioJobs(3, 3, 5, 8);
	Jobs* J3P3_3 = InicioJobs(3, 3, 7, 7);
	Jobs* J3P4 = InicioJobs(3, 4, 4, 7);
	Jobs* J3P4_2 = InicioJobs(3, 4, 6, 8);
	Jobs* J3P5 = InicioJobs(3, 5, 1, 1);
	Jobs* J3P5_2 = InicioJobs(3, 5, 2, 4);

	lista = InsereJobs(lista, J3P1);
	lista = InsereJobs(lista, J3P1_2);
	lista = InsereJobs(lista, J3P1_3);
	lista = InsereJobs(lista, J3P2);
	lista = InsereJobs(lista, J3P2_2);
	lista = InsereJobs(lista, J3P3);
	lista = InsereJobs(lista, J3P3_2);
	lista = InsereJobs(lista, J3P3_3);
	lista = InsereJobs(lista, J3P4);
	lista = InsereJobs(lista, J3P4_2);
	lista = InsereJobs(lista, J3P5);
	lista = InsereJobs(lista, J3P5_2);

#pragma endregion

#pragma region Inicio Job 4

	Jobs* J4P1 = InicioJobs(4, 1, 1, 4);
	Jobs* J4P1_2 = InicioJobs(4, 1, 3, 3);
	Jobs* J4P1_3 = InicioJobs(4, 1, 5, 7);
	Jobs* J4P2 = InicioJobs(4, 2, 2, 4);
	Jobs* J4P2_2 = InicioJobs(4, 2, 8, 4);
	Jobs* J4P3 = InicioJobs(4, 3, 3, 4);
	Jobs* J4P3_2 = InicioJobs(4, 3, 4, 5);
	Jobs* J4P3_3 = InicioJobs(4, 3, 6, 6);
	Jobs* J4P3_4 = InicioJobs(4, 3, 7, 7);
	Jobs* J4P4 = InicioJobs(4, 4, 5, 3);
	Jobs* J4P4_2 = InicioJobs(4, 4, 6, 5);
	Jobs* J4P4_3 = InicioJobs(4, 4, 8, 5);

	lista = InsereJobs(lista, J4P1);
	lista = InsereJobs(lista, J4P1_2);
	lista = InsereJobs(lista, J4P1_3);
	lista = InsereJobs(lista, J4P2);
	lista = InsereJobs(lista, J4P2_2);
	lista = InsereJobs(lista, J4P3);
	lista = InsereJobs(lista, J4P3_2);
	lista = InsereJobs(lista, J4P3_3);
	lista = InsereJobs(lista, J4P3_4);
	lista = InsereJobs(lista, J4P4);
	lista = InsereJobs(lista, J4P4_2);
	lista = InsereJobs(lista, J4P4_3);

#pragma endregion

#pragma region Inicio Job 5

	Jobs* J5P1 = InicioJobs(5, 1, 1, 3);
	Jobs* J5P2 = InicioJobs(5, 2, 2, 4);
	Jobs* J5P2_2 = InicioJobs(5, 2, 4, 5);
	Jobs* J5P3 = InicioJobs(5, 3, 3, 4);
	Jobs* J5P3_2 = InicioJobs(5, 3, 8, 4);
	Jobs* J5P4 = InicioJobs(5, 4, 5, 3);
	Jobs* J5P4_2 = InicioJobs(5, 4, 6, 3);
	Jobs* J5P4_3 = InicioJobs(5, 4, 8, 3);
	Jobs* J5P5 = InicioJobs(5, 5, 4, 5);
	Jobs* J5P5_2 = InicioJobs(5, 5, 6, 4);

	lista = InsereJobs(lista, J5P1);
	lista = InsereJobs(lista, J5P2);
	lista = InsereJobs(lista, J5P2_2);
	lista = InsereJobs(lista, J5P3);
	lista = InsereJobs(lista, J5P3_2);
	lista = InsereJobs(lista, J5P4);
	lista = InsereJobs(lista, J5P4_2);
	lista = InsereJobs(lista, J5P4_3);
	lista = InsereJobs(lista, J5P5);
	lista = InsereJobs(lista, J5P5_2);

#pragma endregion

#pragma region Inicio Job 6

	Jobs* J6P1 = InicioJobs(6, 1, 1, 3);
	Jobs* J6P1_2 = InicioJobs(6, 1, 2, 5);
	Jobs* J6P1_3 = InicioJobs(6, 1, 3, 6);
	Jobs* J6P2 = InicioJobs(6, 2, 4, 7);
	Jobs* J6P2_2 = InicioJobs(6, 2, 5, 8);
	Jobs* J6P3 = InicioJobs(6, 3, 3, 9);
	Jobs* J6P3_2 = InicioJobs(6, 3, 6, 8);

	lista = InsereJobs(lista, J6P1);
	lista = InsereJobs(lista, J6P1_2);
	lista = InsereJobs(lista, J6P1_3);
	lista = InsereJobs(lista, J6P2);
	lista = InsereJobs(lista, J6P2_2);
	lista = InsereJobs(lista, J6P3);
	lista = InsereJobs(lista, J6P3_2);

#pragma endregion

#pragma region Inicio Job 7

	Jobs* J7P1 = InicioJobs(7, 1, 3, 4);
	Jobs* J7P1_2 = InicioJobs(7, 1, 5, 5);
	Jobs* J7P1_3 = InicioJobs(7, 1, 6, 4);
	Jobs* J7P2 = InicioJobs(7, 2, 4, 4);
	Jobs* J7P2_2 = InicioJobs(7, 2, 7, 6);
	Jobs* J7P2_3 = InicioJobs(7, 2, 8, 4);
	Jobs* J7P3 = InicioJobs(7, 3, 1, 3);
	Jobs* J7P3_2 = InicioJobs(7, 3, 3, 3);
	Jobs* J7P3_3 = InicioJobs(7, 3, 4, 4);
	Jobs* J7P3_4 = InicioJobs(7, 3, 5, 5);
	Jobs* J7P4 = InicioJobs(7, 4, 4, 4);
	Jobs* J7P4_2 = InicioJobs(7, 4, 6, 6);
	Jobs* J7P4_3 = InicioJobs(7, 4, 8, 5);
	Jobs* J7P5 = InicioJobs(7, 5, 1, 3);
	Jobs* J7P5_2 = InicioJobs(7, 5, 3, 3);

	lista = InsereJobs(lista, J7P1);
	lista = InsereJobs(lista, J7P1_2);
	lista = InsereJobs(lista, J7P1_3);
	lista = InsereJobs(lista, J7P2);
	lista = InsereJobs(lista, J7P2_2);
	lista = InsereJobs(lista, J7P2_3);
	lista = InsereJobs(lista, J7P3);
	lista = InsereJobs(lista, J7P3_2);
	lista = InsereJobs(lista, J7P3_3);
	lista = InsereJobs(lista, J7P3_4);
	lista = InsereJobs(lista, J7P4);
	lista = InsereJobs(lista, J7P4_2);
	lista = InsereJobs(lista, J7P4_3);
	lista = InsereJobs(lista, J7P5);
	lista = InsereJobs(lista, J7P5_2);

#pragma endregion

#pragma region Inicio Job 8

	Jobs* J8P1 = InicioJobs(8, 1, 1, 3);
	Jobs* J8P1_2 = InicioJobs(8, 1, 2, 4);
	Jobs* J8P1_3 = InicioJobs(8, 1, 6, 4);
	Jobs* J8P2 = InicioJobs(8, 2, 4, 6);
	Jobs* J8P2_2 = InicioJobs(8, 2, 5, 5);
	Jobs* J8P2_3 = InicioJobs(8, 2, 8, 4);
	Jobs* J8P3 = InicioJobs(8, 3, 3, 4);
	Jobs* J8P3_2 = InicioJobs(8, 3, 7, 5);
	Jobs* J8P4 = InicioJobs(8, 4, 4, 4);
	Jobs* J8P4_2 = InicioJobs(8, 4, 6, 6);
	Jobs* J8P5 = InicioJobs(8, 5, 7, 1);
	Jobs* J8P5_2 = InicioJobs(8, 5, 8, 2);

	lista = InsereJobs(lista, J8P1);
	lista = InsereJobs(lista, J8P1_2);
	lista = InsereJobs(lista, J8P1_3);
	lista = InsereJobs(lista, J8P2);
	lista = InsereJobs(lista, J8P2_2);
	lista = InsereJobs(lista, J8P2_3);
	lista = InsereJobs(lista, J8P3);
	lista = InsereJobs(lista, J8P3_2);
	lista = InsereJobs(lista, J8P4);
	lista = InsereJobs(lista, J8P4_2);
	lista = InsereJobs(lista, J8P5);
	lista = InsereJobs(lista, J8P5_2);

#pragma endregion

#pragma endregion

#pragma region Testar Funções
/**
*Local para testar as funções
*/
	
	/*x = ProcuraJob(lista, 7, 1, 3);
	MostraJob(x);*/

	//AlteraJob(lista, 8, 5, 7,100,20);
	
	/*x = Remove(lista, 8, 5);
	MostraListaJobs(x);*/
	
	
	//media = Media(lista, 6,1);
	//printf("%f", media);
	
	/*int y = JobLento(lista, 2);
	printf("O total de tempo gasto no Job escolhido foi de %d\n\n", y);*/

	/*int z = JobRapido(lista, 2);
	printf("O total de tempo gasto no Job escolhido foi de %d\n\n", z);*/

	//MostraListaJobs(lista);
#pragma endregion
}