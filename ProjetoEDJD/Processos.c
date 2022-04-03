/**
* Author: Diogo Araújo
* Email: a23480@alunos.ipca.pt
* Date: 19-03-2022
* Desc: Projeto_EDA - Processos
*/

#include <stdio.h>
#include <stdbool.h>
#include "Dados.h"
#pragma warning(disable : 4996)

#pragma region Iniciar Jobs
/**
*A função aloca memória para o job
*/
Jobs* InicioJobs(int id_job, int id_processo, int id_maquina, int tempo) {
	Jobs* novojob = (Jobs*)malloc(sizeof(Jobs));

	if (novojob == NULL) {
		return(NULL);
	}
	novojob->id_job = id_job;
	novojob->id_processo = id_processo;
	novojob->id_maquina = id_maquina;
	novojob->tempo = tempo;
	novojob->prox = NULL;

}
#pragma endregion

#pragma region Inserção de Jobs
/**
*Permite inserir um job
*/
Jobs* InsereJobs(Jobs* lista, Jobs* novo) {
	//Verificar se existe


	//List vazia
	if (lista == NULL) {
		lista = novo;
	}
	else
	{
		//Insere no fim da lista
		Jobs* aux = lista;
		while (aux->prox != NULL) {
			aux = aux->prox;
		}
		aux->prox = novo;

	}
	return lista;
}
#pragma endregion

#pragma region Ver Jobs
/**
* Mostra todos os parâmetros do job
*/
void MostraJob(Jobs* lista) {

	if (lista != NULL)
	{
		printf("Id do job = %d\n", lista->id_job);
		printf("Id do processo = %d\n", lista->id_processo);
		printf("Id da máquina = %d\n", lista->id_maquina);
		printf("Tempo = %d\n\n", lista->tempo);
	}

}

/**
* Mostra a lista de todos os jobs
*/
void MostraListaJobs(Jobs* lista) {

	Jobs* tmp = lista;

	do {

		MostraJob(tmp);

		tmp = tmp->prox;

	} while (tmp != NULL);
}
#pragma endregion
#pragma region ProcurarJob
/**
*Procura o job pedido pelos parametros
*/
Jobs* ProcuraJob(Jobs* lista, int codJob, int codProcesso, int codMaquina) {
	if (lista == NULL) return NULL;		//lista vazia
	else
	{
		Jobs* aux = lista;
		while (aux != NULL) {
			if (aux->id_job == codJob && aux->id_processo == codProcesso && aux->id_maquina == codMaquina) {
				return (aux);		// se encontrar
			}
			aux = aux->prox;
		}
		return NULL;
	}
}
#pragma endregion

#pragma region AlterarJob
/**
*Altera a máquina e o tempo do job pedido pelos parametros
*/

Jobs* AlteraJob(Jobs* lista, int codJob, int codProcesso, int codMaquina, int novaMaquina, int novoTempo) {
	Jobs* aux = ProcuraJob(lista, codJob, codProcesso, codMaquina);
	if (aux != NULL)		//se encontrar um job
	{
		aux->id_maquina = novaMaquina;  //altera o Job
		aux->tempo = novoTempo;
	}
	return lista;
}
#pragma endregion

#pragma region Remover Job
/**
*Remove o job indicado pelos parametros
*/
Jobs* Remove(Jobs* lista, int id_job, int id_processo) {

	if (lista == NULL) return NULL;            //Caso a lista esteja vazia

	Jobs* tmp = lista, * aux = lista;


	while (tmp != NULL)
	{

		if (tmp->id_processo == id_processo && tmp->id_job == id_job)
		{
			if (tmp == lista)
			{
				lista = lista->prox;
				free(tmp);
				tmp = lista;
			}
			else
			{
				aux->prox = tmp->prox;
				free(tmp);
				tmp = aux->prox;
			}
		}
		else
		{
			aux = tmp;
			tmp = tmp->prox;
		}
	}
	return lista;
}
#pragma endregion

#pragma region Quantidade mínima de tempo
/**
* Lista os processos para acabar o job escolhido mais rápido e o seu tempo total
*/
int JobRapido(Jobs* lista, int id_job) {
	Jobs* tmp = lista, * Antmp = NULL, * aux = NULL;
	int tempo = 0, maisrapido = 0;

	//Vai para o job escolhido
	while (tmp->id_job != id_job)
	{
		Antmp = tmp;
		tmp = tmp->prox;
	}

	maisrapido = tmp->tempo;
	do
	{
		//Define sempre a primeira operação de um bloco como a mais rápida para poder ser comparada
		if (Antmp != NULL && Antmp->id_processo != tmp->id_processo || Antmp == NULL) {
			maisrapido = tmp->tempo;
			aux = tmp;
		}

		//Caso seja um caso isolado e a primeira a ser inserida (Ex. Máquina 2 Operação 7)
		if (tmp->prox->id_processo != tmp->id_processo && Antmp == NULL) {
			maisrapido = tmp->tempo;
			aux = tmp;
		}

		while (tmp->prox != NULL && tmp->prox->id_processo == tmp->id_processo)
		{
			if (tmp->prox->tempo < tmp->tempo) {

				if (tmp->prox->tempo < maisrapido) {

					maisrapido = tmp->prox->tempo;
					aux = tmp->prox;
				}
			}
			else
			{
				if (tmp->tempo < maisrapido) {
					maisrapido = tmp->tempo;
					aux = tmp;
				}
			}
			//Identifica o mais rápido até o final do While (Processo)
			Antmp = tmp;
			tmp = tmp->prox;
		}
		Antmp = tmp;
		tmp = tmp->prox;
		//Os parametros do mais rapido sao guardados no aux
		MostraJob(aux);
		tempo += maisrapido;

	} while (tmp != NULL && tmp->id_job == id_job);
	return tempo;
}


#pragma endregion

#pragma region Quantidade máxima de tempo
/**
* Lista os processos para acabar o job escolhido mais rápido e o seu tempo total
*/
int JobLento(Jobs* lista, int id_job) {
	Jobs* tmp = lista, * Antmp = NULL, * aux = NULL;
	int tempo = 0, maisrapido = 0;

	//Vai para o job escolhido
	while (tmp->id_job != id_job)
	{
		Antmp = tmp;
		tmp = tmp->prox;
	}

	maisrapido = tmp->tempo;
	do
	{
		//Define sempre a primeira operação de um bloco como a mais rápida para poder ser comparada
		if (Antmp != NULL && Antmp->id_processo != tmp->id_processo || Antmp == NULL) {
			maisrapido = tmp->tempo;
			aux = tmp;
		}

		//Caso seja um caso isolado e a primeira a ser inserida (Ex. Máquina 2 Operação 7)
		if (tmp->prox->id_processo != tmp->id_processo && Antmp == NULL) {
			maisrapido = tmp->tempo;
			aux = tmp;
		}

		while (tmp->prox != NULL && tmp->prox->id_processo == tmp->id_processo)
		{
			if (tmp->prox->tempo > tmp->tempo) {

				if (tmp->prox->tempo > maisrapido) {

					maisrapido = tmp->prox->tempo;
					aux = tmp->prox;
				}
			}
			else
			{
				if (tmp->tempo > maisrapido) {
					maisrapido = tmp->tempo;
					aux = tmp;
				}
			}
			//Identifica o mais rápido até o final do While (Processo)
			Antmp = tmp;
			tmp = tmp->prox;
		}
		Antmp = tmp;
		tmp = tmp->prox;
		//Os parametros do mais rapido sao guardados no aux
		MostraJob(aux);
		tempo += maisrapido;

	} while (tmp != NULL && tmp->id_job == id_job);
	return tempo;
}


#pragma endregion

#pragma region Média do Job
/**
*Determina a média de tempo necessária para completar um processo
*/

float Media(Jobs* lista, int id_job, int id_processo) {
	Jobs* tmp = lista, * Antmp = NULL;
	float total = 0, soma = 0, media = 0;

	//Vai para o job escolhido
	while (tmp->id_job != id_job || tmp->id_processo != id_processo)
	{
		Antmp = tmp;
		tmp = tmp->prox;
	}

	do
	{
		Antmp = tmp;
		tmp = tmp->prox;

		if (Antmp != NULL)
		{
			soma += Antmp->tempo;
			total++;
		}
		else
		{
			soma += tmp->tempo;
			total++;
		}

	} while (tmp != NULL && tmp->id_processo == id_processo);
	media = soma / total;
	return media;
}

#pragma endregion







