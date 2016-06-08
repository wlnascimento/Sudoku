#include <stdio.h>
#include <stdlib.h>
#include "TrocaColunaLinha.h"
#define SIZE 9

int TrocaColunaLinha (int matriz[SIZE][SIZE])
{
    int i,j,aux;
 
    for (i=0;i<9;i++){
        for (j=i;j<9;j++){ //j=i pois se ele come?ar por zero, a matriz volta a ser ela mesma
            aux=matriz[i][j];
            matriz[i][j]=matriz[j][i];
            matriz[j][i]=aux;
        }
    }
 
    return matriz[SIZE][SIZE];
}
