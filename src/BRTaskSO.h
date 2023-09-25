/*
  LibSemaforo.h - Libreria para el manejo de la 
  estacion del cruce de calles con semaforos.
  Javier Sankowicz.
*/

#ifndef BRTaskSO_h
#define BRTaskSO_h

//#include "Arduino.h"

class Processo {
  
  private:
  	int id;
  	int tempo;
  	int prioridade;
    int status;
  
  public:
  	Processo(){};
  	Processo(int id, int tempo, int prior);
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

// Número de Processos em Execução
extern int NR_PROCS;
extern void NRProcs(int Nr_Procs);
extern void inicializar_sistema();
extern void finalizar();

// Identificador do Processo Atual
extern int task_id;

// Contador de Processos
extern int task_running;

extern Processo processos;
int escalonador(int task_id);
void fifo();

#endif