#include "VerificaCasasVazias.h"

int VerificaCasasVazias(int sudoku[SIZE][SIZE])
{
	int i, j, cont;
	cont = 0;
	
	for (i = 0; i < 9; i++)
	{
       	for (j = 0; j < 9; j++)
		{
           	if (sudoku[i][j] == 0)
			{
               	cont = 1;
               	
               	return cont;
           	}
       	}
   	}
   	
   	return cont;
}
