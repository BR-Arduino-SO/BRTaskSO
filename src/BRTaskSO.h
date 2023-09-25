/*
  LibSemaforo.h - Libreria para el manejo de la 
  estacion del cruce de calles con semaforos.
  Javier Sankowicz.
*/

#ifndef BRTaskSO_h
#define BRTaskSO_h

#include "Arduino.h"

// Número de Processos em Execução
const int NR_PROCS = 10;
extern void NRProcs(int NR_Procs);

// Identificador do Processo Atual
extern int task_id;

// Contador de Processos
extern int task_running = -1;

class Processo {
  
  private:
  	int i;
  	int id;
  	int tempo;
  	int prioridade;
    int status;
  
  public:
  	Processo(){};
  	Processo(int id, int tempo, int prior, int status);
  	int getID();
  	int getTempo();
  	int getPrior();
    int getStatus();
    void setID(int id);
  	void setTempo(int tempo);
  	void setPrior(int prior);
    void setStatus(int status);
  	void ExecProc();
  
};

// Criação do Vetor vazio de Processos
extern Processo *processos[NR_PROCS];

#endif