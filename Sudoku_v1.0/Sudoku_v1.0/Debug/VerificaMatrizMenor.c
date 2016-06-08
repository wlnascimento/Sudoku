#include <stdio.h>
#include <stdlib.h>
#include "VerificaMatrizMenor.h"
#include "ImprimeMatriz.h"
#define SIZE 9

int VerificaMatrizMenor(int sudoku[SIZE][SIZE], int linha, int coluna, int num)
{
	int i, j, cont;
	cont = 0;
	
	if ((linha>=0 && linha<=2) && (coluna>=0 && coluna<=2))
	{
        for (i=0;i<3;i++)
		{
            for (j=0;j<3;j++)
			{
                if (sudoku[i][j]==num)
				{
                    printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Primeiro Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;
                    
                }
            }
        }
    }
 
    if ((linha >= 0 && linha <= 2) && (coluna >= 3 && coluna <= 5))
	{
        for (i=0;i<3;i++)
		{
            for (j=3;j<6;j++)
			{
                if (sudoku[i][j]==num)
				{
                    printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Segundo Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;
                    
                }
            }
        }
    }
 
    if ((linha >= 0 && linha <= 2) && (coluna >= 6 && coluna <= 8))
	{
        for (i = 0; i < 3; i++)
		{
            for (j = 6; j < 9; j++)
			{
                if (sudoku[i][j]==num)
				{
                    printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Terceiro Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;
                    
                }
            }
        }
    }
    
    if ((linha >= 3 && linha <= 5) && (coluna >= 0 && coluna <= 2))
	{
        for (i = 3; i <= 5; i++)
		{
            for (j = 0; j < 3; j++)
			{
                if (sudoku[i][j]==num)
				{
					printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Quarto Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;

                }
            }
        }
    }
 
    if ((linha >= 3 && linha <= 5) && (coluna >= 3 && coluna <= 5))
	{
        for (i = 3; i <= 5;i++)
		{
            for (j = 3; j < 6;j++)
			{
                if (sudoku[i][j]==num)
				{
					printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Quinto Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;
                    
                }
            }
        }
    }
 
    if ((linha >= 3 && linha <= 5) && (coluna >= 6 && coluna <= 8))
	{
        for (i = 3; i <= 5; i++)
		{
            for (j = 6; j <= 8; j++)
			{
                if (sudoku[i][j]==num)
				{
                  	printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Sexto Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;
                    
                }
            }
        }
    }


/*Matriz da ultima linha*/
    if((linha >= 6 && linha <= 8) && (coluna >= 0 && coluna <= 2))
	{
        for (i = 6; i<= 8; i++)
		{
            for (j = 0; j <= 2; j++)
			{
                if (sudoku[i][j]==num)
				{
                    printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Setimo Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;
                    
                }
            }
        }
    }
 
    if ((linha >= 6 && linha <= 8) && (coluna >= 3 && coluna <= 5))
	{
        for (i = 6; i <= 8; i++)
		{
            for (j = 3; j <= 5; j++)
			{
                if (sudoku[i][j]==num)
				{
                    printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Oitavo Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;

                }
            }
        }
    }
 
    if ((linha >= 6 && linha <= 8) && (coluna >= 6 && coluna <=8))
	{
        for (i = 6; i <= 8; i++)
		{
            for (j = 6; j <= 8; j++)
			{
                if (sudoku[i][j]==num)
				{
                    printf("\nJogada Invalida, numero ja utilizado na linha %d - coluna %d do Nono Quadrado", i+1, j+1);
                    printf("\n\n");
                    ImprimeMatriz(sudoku);
                    cont=1;
                    
                    return cont;
                    
                }
            }
        }
    }
    
    return cont;
}
