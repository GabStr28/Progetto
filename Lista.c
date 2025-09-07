#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

int inserisciInLista(Nodo **head, Cliente cl) {            //funzione che mi permette di inserire il cliente servito in lista 
    Nodo *nuovo = (Nodo *)malloc(sizeof(Nodo));            //malloc mi permette di avere nuova memoria 
    if (nuovo == NULL) {                                   //verifivo che la malloc non mi restituisca null ovvero se l'allocazione di memoria non è possibile 
        printf("Errore di memoria (lista).\n");
        return 0;
    }
    nuovo->cl = cl;                                        //nel nuovo nodo vado ad inserire il cliente servito
    nuovo->next = *head;                                   //inserisco il nuovo nodo davanti alla vecchia testa 
    *head = nuovo;                                         //aggiorno la testa 
    return 1;
}

int rimuoviDaLista(Nodo **head, int numero) {     
    Nodo *prev = NULL, *curr = *head;
    while (curr != NULL) {
        if (curr->cl.numero == numero) {
            if (prev) prev->next = curr->next;
            else *head = curr->next;
            free(curr);
            return 1;
        }
        prev = curr;
        curr = curr->next;
    }
    return 0;
}

void stampaLista(Nodo *head) {
    Nodo *p = head;                                       //dichiaro una variabile di tipo nodo e la punto alla testa della lista 
    while (p != NULL) {                                   //stampo fino a quando non trovo lo spazio vuoto  
        printf("Num: %d - Nome: %s - Operazione: %s\n",
               p->cl.numero, p->cl.nome, p->cl.tipoOperazione);
        p = p->next;   //passo a quello successivo
    }
}
