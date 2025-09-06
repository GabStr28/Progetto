#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

int inserisciInLista(Nodo **head, Cliente cl) {         //funzione che mi permette di inserire il cliente servito in lista 
    Nodo *nuovo = (Nodo *)malloc(sizeof(Nodo));            //malloc mi permette di avere nuova memoria 
    if (nuovo == NULL) {                                   //verifivo che la malloc non mi restituisca null ovvero se l'allocazione di memoria non è possibile 
        printf("Errore di memoria (lista).\n");
        return 0;
    }
    nuovo->cl = cl;                     //nel nuovo nodo vado ad inserire il cliente servito
    nuovo->next = *head;                //inserisco il nuovo nodo davanti alla vecchia testa 
    *head = nuovo;                      //aggiorno la testa 
    return 1;
}
