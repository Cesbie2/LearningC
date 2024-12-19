#include "matrici.h"

int main()
{
    int **matrice = creaMatriceQuadrata(5);
    inizializzaMatrice(matrice,5,5);
    stampaMatrice(matrice,5 ,5);
    eliminaMatrice(matrice,5 );
}