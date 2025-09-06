#ifndef DEFINIZIONE_H
#define DEFINIZIONE_H
#define MAXNOME 30
#define MAXTIPO 30
#define DIM 100

typedef struct {                       // andiamo a dichiarare una struct di nome cliente che comprende il numero il nome e il tipo di operazione da eseguire
    int numero;
    char nome[MAXNOME];
    char tipoOperazione[MAXTIPO];
} Cliente;

typedef struct {                       //andiamo ad dichiarare una struct Coda la quale ci permette di inserire clienti alla coda rear, rimuovere cliente dalla testa front, tenere il conto dei clienti in coda count
    Cliente clienti[DIM];
    int front, rear, count;
} Coda;

typedef struct Nodo {                 //andiamo a dichiarare una struct Nodo che ci consente di salvare lo storico in memoria ovvero memorizzare i clienti serviti l ultimo cliente avra impostato il puntatore *next a NULL
    Cliente cl;
    struct Nodo *next;
} Nodo;

typedef struct NodoPila {
    Cliente cl;
    struct NodoPila *next;
} NodoPila;

void initCoda(Coda *c);
int enqueue(Coda *c, Cliente cl);
int codaVuota(Coda *c);
Cliente dequeue(Coda *c);

int inserisciInLista(Nodo **head, Cliente cl);

int inserimento(NodoPila **top, Cliente cl);

void salvaClienteTesto(Cliente cl);
void salvaClienteBin(Cliente cl);

void menuInput(int *scelta);
