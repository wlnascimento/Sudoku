#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9
#include "ImprimeMatriz.h"
#include "TrocaColunaLinha.h"
#include "TrocaLinhaVertical.h"
#include "EspacosVazios.h"
#include "VerificaMatriz.h"
#include "EmbaralhaMatrizExemplo.h"

void EmbaralhaMatrizExemplo(int sudokuExemplo[SIZE][SIZE])
{
	int x;
	
	srand(time(NULL));
    x = rand()%2;
 
    switch (x)
	{
        case 0:
            TrocaColunaLinha (sudokuExemplo);
            ImprimeMatriz (sudokuExemplo);
            break;
        case 1:
            TrocaLinhaVertical (sudokuExemplo);
            ImprimeMatriz (sudokuExemplo);
            break;
        case 2:
            TrocaLinhaHorizontal (sudokuExemplo);
            ImprimeMatriz (sudokuExemplo);
            break;
    }
}
