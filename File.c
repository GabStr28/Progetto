#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

void salvaClienteTesto(Cliente cl) {
    FILE *f = fopen("serviti.txt", "a");     //apro un file di tipo txt di nome serviti
    if (f == NULL) {                         //verifico se c'è qualche errore se è cosi comunico l'errore dell'apertura del file e torno indietro, altrimenti continuo 
               printf("Errore apertura file testo.\n"); 
               return; }
    fprintf(f, "%d,%s,%s\n", cl.numero, cl.nome, cl.tipoOperazione);      //scrico sul file numero nome e tipo di operazione sel cliente servito 
    fclose(f);                                                          //chiudo il file
}

void salvaClienteBin(Cliente cl) {
    FILE *f = fopen("serviti.bin", "ab");                         //apro file di tipo bin (binario)
    if (f == NULL) { 
                 printf("Errore apertura file binario.\n");        //come a prima verifico che non ci siano errori 
                return; }
    fwrite(&cl, sizeof(Cliente), 1, f);                        //scrivo: indirizzo della variabile cl, dimensione in byte della struct cliente, inseriamo la struct alla fine del file 
    fclose(f);                                                  //chiudo il file 
}
