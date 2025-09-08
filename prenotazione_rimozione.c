#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

void initCoda(Coda *c) { 
    c->front = c->rear = c->count = 0; }       //azzero la coda di ogni sportello 
int codaPiena(Coda *c) { 
        return c->count == DIM; }              // verifico che il mio count è pari alla DIM se è cosi significa che la coda è piena
int codaVuota(Coda *c) {
        return c->count == 0; }                // verifico che il mio count e pari a 0 se è cosi significa che la coda è vuota 

int enqueue(Coda *c, Cliente cl) {
    if (!codaPiena(c)) {                       //verifico se la coda non è piena
        c->clienti[c->rear] = cl;
        c->rear = (c->rear + 1) % DIM;         //inserisco l'utente in coda 
        c->count++;
        return 1;
    } 
    else {
        printf("Coda piena!\n");               //altrimenti la coda è piena e lo comunico 
        return 0;
    }
}
 Cliente dequeue(Coda *c) {
      Cliente cl;                              //dichiaro una variabile di tipo cliente (cl)
      cl.numero = 0;   
      cl.nome[0] = '\0';
      cl.tipoOperazione[0] = '\0';             //azzero tutti i suoi dati 
      if (!codaVuota(c)) {                     //verifico che la coda non sia vuota, se è vuota ritorno direttamente cl, se non è vuota rimuovo la persona dalla coda 
          cl = c->clienti[c->front];           //cl sarà uguale al cliente che sarà in testa ovvero quello che andrà servito
          c->front = (c->front + 1) % DIM;     //scalo la posizione
          c->count--;                          //diminuisco il count (persone in coda)
    }
    return cl;
}
