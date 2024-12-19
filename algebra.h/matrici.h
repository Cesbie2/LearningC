#ifndef MATRICI_H
#define MATRICI_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int **creaMatrice (int nColonne, int nRighe);
int **creaMatriceRandom (int nColonne, int nRighe);
int **creaMatriceNulla (int nColonne, int nRighe);
int **creaMatriceQuadrata(int nC_and_R);
int **creaMatriceIdentita (int nC_and_R);
void inizializzaMatrice (int **matrice, int nColonne, int nRighe);
void stampaMatrice (int **matrice, int nColonne, int nRighe);
void eliminaMatrice (int **matrice, int nColonne);


#endif
