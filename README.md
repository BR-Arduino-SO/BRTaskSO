# Syntax Coloring Map Servo

## Datatypes

- Processo
- int
- void

## Class, Methods and Functions

- class Processo

- Processo()
- Processo(int id, int tempo, int prior, int status)
- int getID()
- int getTempo()
- int getPrior()
- int getStatus()
- void setID(int id)
- void setTempo(int tempo)
- void setPrior(int prior)
- void setStatus(int status)
- void ExecProc()

- void NRProcs(int NR_Procs)

## Constants

- NR_PROCS

## Variables

- Processo *processos[NR_PROCS];
- int task_running = -1;
- int task_id

- private int id
- private int tempo
- private int prior
- private int status