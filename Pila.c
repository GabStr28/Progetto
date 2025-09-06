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
