#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

void menu(int *scelta) {
    printf("\n=== SPORTELLO POSTALE ===\n");
    printf("0->Esci\n");
    printf("1->Prendi numero\n");
    printf("2->Servi cliente\n");
    printf("3->Annulla ultimo (Undo)\n");
    printf("4->Stampa storico clienti\n");
    printf("5->Report ordinato e ricerca\n");
    printf("Scelta: ");
    scanf("%d", scelta);
}
