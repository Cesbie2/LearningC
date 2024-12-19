#include "matrici.h"

//crea la matrice vuota
int **creaMatrice (int nColonne, int nRighe)
{   
    int **ret = (int**)malloc(nColonne * sizeof(int*));
    if(ret == NULL)
    {
        printf("Errore nell'allocazione della memoria\n");
        return 0;
    }
    for(int i = 0; i < nColonne; i++)
    {  
        ret[i] = (int*)malloc(nRighe * sizeof(int));
    }
    return ret;
}

//crea una matrice con valori randomici
int **creaMatriceRandom (int nColonne, int nRighe)
{   srand(time(NULL));
    int **ret = creaMatrice(nColonne, nRighe);
    for(int i = 0; i < nColonne; i++)
    {
        for(int j = 0; j < nRighe; j++)
        {
            ret[i][j] = rand() % 100;
        }
    }
    return ret;
}

int **creaMatriceNulla (int nColonne, int nRighe)
{
    int **ret = creaMatrice(nColonne, nRighe);
    for(int i = 0; i < nColonne; i++)
    {
        for(int j = 0; j < nRighe; j++)
        {
            ret[i][j] = 0;
        }
    }
    return ret;
}

int **creaMatriceQuadrata(int nC_and_R)
{
    int **ret = creaMatrice(nC_and_R, nC_and_R);
    return ret;
}

int **creaMatriceIdentita(int nC_and_R)
{
    int **ret = creaMatriceQuadrata(nC_and_R);
    for(int i = 0; i < nC_and_R; i++)
    {
        for(int j = 0; j < nC_and_R; j++)
        {
            if(i==j)
            {
                ret[i][j] = 1;
            }
            else
            {
                ret[i][j] = 0;
            }
        }
    }
    return ret;
}
// in stampamatrice identità la condizione in questo caso si puo'scrivere utilizzando un operatore ternario
/* quindi questa dichiarazione if else 
            if(i==j)
            {
                ret[i][j] = 1;
            }
            else
            {
                ret[i][j] = 0;
            }
si puo' scrivere come: (i==j ? 1 : 0)
che possiamo tradurre come " i e' equivalente a j? se si assegna 1 altrimenti assegna 0"
*/

//inizializza matrice
void inizializzaMatrice (int **matrice, int nColonne, int nRighe)
{
    
    for(int i = 0; i<nColonne; i++)
    {
        for(int j = 0; j<nRighe; j++)
        {   
        
            printf("Valore della calla colonna x riga [%d][%d]: \n", i+1, j+1);
            scanf("%d", &matrice[i][j]);  

        }
    }
}

//libera la memoria nell' heap
void eliminaMatrice (int **matrice, int nColonne)
{  
    for(int i = 0; i < nColonne; i++)
    {  
        free(matrice[i]);
    }
    free(matrice);
}

//stampa a schermo la matrice
void stampaMatrice (int **matrice, int nColonne, int nRighe)
{
    for(int i = 0; i < nColonne; i++)
    {
        for(int j = 0; j < nRighe; j++)
        {
            printf("%5d", matrice[i][j]);
        }
        puts("");
    }
}


