#include "Arduino.h"
#include "BRTaskSO.h"

/* CONTRUTOR E FUNÇÕES DA CLASSE PROCESSO */

Processo::Processo(int id, int tempo, int prior)
{
  this->id = id;
  this->tempo = tempo;// SJF
  this->prioridade = prior;// Pnp
  this->status = 0;// Não executado
}
int Processo::getID()
{
  return this->id;
}
int Processo::getTempo()
{
  return this->tempo;
}
int Processo::getPrior()
{
  return this->prioridade;
}
int Processo::getStatus()
{
  return this->status;
}
void Processo::setID(int id)
{
  this->id = id;
}
void Processo::setTempo(int tempo)
{
  this->tempo = tempo;
}
void Processo::setPrior(int prior)
{
  this->prioridade = prior;
}
void Processo::setStatus(int status)
{
  this->prioridade = status;
}
void Processo::ExecProc()
{
  Serial.println("");
  Serial.println("*** ------------------ ***");
  Serial.print("Processo ");Serial.print(this->id);Serial.println(" executando...");
  //LED(this->tempo);
  delay(this->tempo*1000);
  Serial.print("Processo ");Serial.print(this->id);Serial.println(" finalizado.");
  Serial.println("*** ------------------ ***");
  Serial.println("");
}

/* VARIÁVEIS DE INICIALIZAÇÃO DOS PROCESSOS */

int NR_PROCS = 10;

void NRProcs(int Nr_Procs){
    NR_PROCS = Nr_Procs;
}

/* FUNÇÕES DOS PROCESSOS */

int escalonador(int task_id)
{
  Serial.println("Trocando de contexto...");
  //iluminaLED(led_proc_escal);
  
  task_id = (task_id +1) % NR_PROCS;
  
  return task_id;
}

void fifo()// Algoritmo de Escalonamento de Processos FIFO
{ 
  while(true){
    task_running = escalonador(task_running);
    Serial.println(task_running);
    //iluminaLED(led_proc_inic);// Inicializa processo
    
    // Execução do processo
    processos[task_running]->ExecProc();
    delay(700);
    
    // delay
    if (task_running == NR_PROCS) delay(3000);
  }
}





/* FUNÇÕES DE INCIALIZAÇÃO E FINALIZAÇÃO */

void inicializar_sistema()
{
	Serial.begin(9600);

    // Criação do Vetor vazio de Processos
    Processo processos[NR_PROCS];

    // Inicialização da variável de contagem de processos
    int task_running = -1;
}

void finalizar_sistema()
{
    while(1);
}
