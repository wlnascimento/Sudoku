#include <stdio.h>
#include <stdlib.h>
#include "TrocaLinhaHorizontal.h"

int TrocaLinhaHorizontal (int matriz[9][9]) //Troca as linhas horizontais
{
    int i,j,aux;
 
    for (i = 0; i < 5; i++){
        for (j = 0; j < 9; j++){
            aux=matriz[i][j];
            matriz[i][j]=matriz[8-i][j];
            matriz[8-i][j]=aux;
        }
    }
 
    return matriz[9][9];
}
