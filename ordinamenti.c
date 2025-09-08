#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definizione.h"

void bubbleSort(Cliente v[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (v[j].numero > v[j+1].numero) {                       //Verifico che il numero precedente sia maggiore di quello successivo
                Cliente tmp = v[j]; v[j] = v[j+1]; v[j+1] = tmp;      //se è cosi li scambio 
            }
        }
    }
}

void selectionSort(Cliente v[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        int min = i;
        for (j = i+1; j < n; j++) {
            if (strcmp(v[j].nome, v[min].nome) < 0)       //verifico che il nome successivo venga prima di quello precedente 
                min = j;                                  //cambio il valore di min
        }
        if (min != i) {                                  //verifico se il valore di min sia cambiato
             Cliente t = v[i]; v[i] = v[min]; v[min] = t; }               //scambio i due nomi
    }
}

void insertionSort(Cliente v[], int n) {
    int i;
    for (i = 1; i < n; i++) {
        Cliente key = v[i];              //pongo key uguale all'utente dell'iesima riga 
        int j = i-1;
        while (j >= 0 && strcmp(v[j].tipoOperazione, key.tipoOperazione) > 0) {       //rimango nel ciclo fino a quando j non sarà minore di 0 e il tipo del cliente precdente non sarà maggiore di quello successivo
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}
