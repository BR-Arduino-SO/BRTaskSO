/*
  LibSemaforo.h - Libreria para el manejo de la 
  estacion del cruce de calles con semaforos.
  Javier Sankowicz.
*/

#ifndef BRTaskSO_h
#define BRTaskSO_h

//#include "Arduino.h"

// Número de Processos em Execução
extern int NR_PROCS;
extern void NRProcs(int Nr_Procs);

// Identificador do Processo Atual
extern int task_id;

// Contador de Processos
extern int task_running;

class Processo {
  
  private:
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

int escalonador(int task_id);

#endif