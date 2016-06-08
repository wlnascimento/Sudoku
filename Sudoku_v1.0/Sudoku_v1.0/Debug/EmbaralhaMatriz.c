#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9
#include "ImprimeMatriz.h"
#include "TrocaColunaLinha.h"
#include "TrocaLinhaVertical.h"
#include "EspacosVazios.h"
#include "VerificaMatriz.h"
#include "EmbaralhaMatriz.h"

int EmbaralhaMatriz(int sudoku[SIZE][SIZE], int mat[SIZE][SIZE])
{
	int x;
	
	srand(time(NULL));
    x = rand()%3;
 
    switch (x)
	{
        case 0:
            EspacosVazios (sudoku);
            ImprimeMatriz (sudoku);
            break;
        case 1:
            TrocaColunaLinha (mat);
            TrocaColunaLinha (sudoku);
            EspacosVazios (sudoku);
            ImprimeMatriz (sudoku);
            break;
        case 2:
            TrocaLinhaVertical (mat);
            TrocaLinhaVertical (sudoku);
            EspacosVazios (sudoku);
            ImprimeMatriz (sudoku);
            break;
        case 3:
            TrocaLinhaHorizontal (mat);
            TrocaLinhaHorizontal (sudoku);
            EspacosVazios (sudoku);
            ImprimeMatriz (sudoku);
            break;
    }
    
    return 1;
}
