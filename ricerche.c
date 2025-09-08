#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

int ricercaSequenziale(Cliente v[], int n, char nome[]) {
    int i;
    for (i = 0; i < n; i++)
        if (strcmp(v[i].nome, nome) == 0)    //verifico tramite la string compare se il nome da cercare sia uguale a quello dell'iesima riga se è cosi ho trovato l'utente e ritorno i
            return i;
    return -1;                              //altrimenti ritorno -1 e dico di non aver trovato nulla 
}

int ricercaBinaria(Cliente v[], int inizio, int fine, int num) {
    if (inizio > fine)                          //verifico se inizio è maggiore di fine ovvero ho scrollato tutto è non ho trovato nulla 
         return -1;
    {
        int mid = (inizio + fine) / 2;         //trovo la metà
        if (v[mid].numero == num)              //se la metà è uguale al numero da noi interessaro ritorno mid
            return mid;
        else if (num < v[mid].numero)
               return ricercaBinaria(v, inizio, mid-1, num);      //se il numero da cercare è piu piccolo del numero che si trova alla metà allora ritorno nella ricerca dove la fine adesso sarà mid-1 ovvero cerchiamo a sinistra del mid 
             else
               return ricercaBinaria(v, mid+1, fine, num);        //se è maggiore faccio il cotrario l'inizio sarà mid+1 ovvero sto cercando nella parte destra del mid 
    }
}
