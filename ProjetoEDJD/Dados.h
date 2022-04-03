/**
* Author: Diogo Araújo
* Email: a23480@alunos.ipca.pt
* Date: 19-03-2022  
* Desc: Projeto_EDA - Dados
*/

#include <stdbool.h>

#ifndef DADOS

#define DADOS 1
/**
*Cria a struct Jobs
*/
typedef struct Jobs {
    int id_job;
    int id_processo;
    int id_maquina;
    int tempo;
    struct Jobs* prox;
}Jobs;

extern Jobs* lista;


struct Jobs* InicioJobs(int id_job, int id_processo, int id_maquina, int tempo);

Jobs* InsereJobs(Jobs* lista, Jobs* novo);

void MostraJob(Jobs* lista);

void MostraListaJobs(Jobs* lista);

Jobs* ProcuraJob(Jobs* lista, int codJob,int codProcesso,int codMaquina);

Jobs* AlteraJob(Jobs* lista, int codJob, int codProcesso, int codMaquinachar,int novaMaquina, int novoTempo);

Jobs* Remove(Jobs* lista, int codJob, int codProcesso);

float Media(Jobs* lista, int id_job, int id_processo);

int JobRapido(Jobs* lista, int id_job);

int JobLento(Jobs* lista, int id_job);




#endif //Dados