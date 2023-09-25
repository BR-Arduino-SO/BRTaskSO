# Syntax Coloring Map Servo

## Datatypes

- Processo
- Int
- Void

## Class, Methods and Functions

class Processo

Processo()
Processo(int id, int tempo, int prior)
int getID()
int getTempo()
int getPrior()
void setID(int id)
void setTempo(int tempo)
void setPrior(int prior)
void ExecProc()

## Constants

NR_PROCS

## Variables

Processo *processos[NR_PROCS];
int task_running = -1;
int task_id

int id
int tempo
int prior