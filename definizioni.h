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

void initCoda(Coda *c);
