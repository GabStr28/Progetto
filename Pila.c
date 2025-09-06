#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

int inserimento(NodoPila **top, Cliente cl) {               //funzione che mi permette di inserire il cliente servito in lista
    NodoPila *nuovo = (NodoPila *)malloc(sizeof(NodoPila));   //malloc mi permette di avere nuova memoria 
    if (nuovo == NULL) {
        printf("Errore di memoria.\n");                    //verifivo che la malloc non mi restituisca null ovvero se l'allocazione di memoria non è possibile 
        return 0;
    }
    nuovo->cl = cl;                      //nel nuovo nodopila vado ad inserire il cliente servito
    nuovo->next = *top;                  //inserisco il nuovo nodopila davanti alla vecchia testa
    *top = nuovo;                        //aggiorno la testa 
    return 1;
}

int rimozione(NodoPila **top, Cliente *cl) {
    if (*top == NULL)      //verifico se la pila è vuota qualora non sia così procedo
         return 0;
    NodoPila *tmp = *top;    //dichiaro una variabile di tipo NodoPila *tmp e la pongo uguale a *top
    *cl = tmp->cl;    //isneriamo i dati del cliente in tmp
    *top = tmp->next;   //definisco un nuovo top
    free(tmp);      //libero lo spazio di memoria 
    return 1;
}
