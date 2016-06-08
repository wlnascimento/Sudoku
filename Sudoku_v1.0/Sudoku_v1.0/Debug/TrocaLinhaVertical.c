#include <stdio.h>
#include <stdlib.h>
#include "TrocaLinhaVertical.h"

int TrocaLinhaVertical (int matriz[9][9]) //Troca as linhas verticais
{
    int aux,i,j;
 
    for (i = 0; i < 9; i++)
	{
        for (j = 0; j < 5; j++)
		{
            aux = matriz[i][j];
            matriz[i][j] = matriz[i][8-j];
            matriz[i][8-j] = aux;
        }
    }
 
    return matriz[9][9];
}

