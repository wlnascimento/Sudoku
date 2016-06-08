#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9
#include "ImprimeMatriz.h"
#include "TrocaColunaLinha.h"
#include "TrocaLinhaVertical.h"
#include "TrocaLinhaHorizontal.h"
#include "EspacosVazios.h"
#include "Menu.h"
#include "VerificaMatriz.h"
#include "VerificaMatrizMenor.h"
#include "EmbaralhaMatriz.h"
#include "EmbaralhaMatrizExemplo.h"
#include "VerificaCasasVazias.h"
#include "SalvarJogo.h"

int main(void)
{
	/*Declaração de Variaveis*/
	int sudoku[SIZE][SIZE], sudokuExemplo[SIZE][SIZE];
	int menu, i, j, x, salvar, retMatriz;
	
	/*Declaração das funções*/
    int Menu();
	int VerificaMatriz (int sudoku[SIZE][SIZE], int mat[SIZE][SIZE], int sudokuExemplo[SIZE][SIZE]);
	int VerificaMatrizMenor(int sudoku[SIZE][SIZE], int linha, int coluna, int num);
	void ImprimeMatriz (int matriz[SIZE][SIZE]);
	int TrocaColunaLinha (int matriz[SIZE][SIZE]);
	int TrocaLinhaHorizontal (int matriz[SIZE][SIZE]);
	int EspacosVazios (int matriz[SIZE][SIZE]);
	int EmbaralhaMatriz(int sudoku[SIZE][SIZE], int mat[SIZE][SIZE]);
	void EmbaralhaMatrizExemplo(int sudokuExemplo[SIZE][SIZE]);
	int VerificaCasasVazias(int sudoku[SIZE][SIZE]);
	int SalvarJogo(int sudoku[SIZE][SIZE], int mat[SIZE][SIZE]);
	
/*Criação da Matriz Modelo*/
	int mat[SIZE][SIZE] = 
	{
		{6, 9, 8, 5, 2, 4, 1, 3, 7 },
	    {2, 7, 4, 3, 9, 1, 5, 6, 8 },
	    {5, 1, 3, 8, 6, 7, 4, 9, 2 },
	    {4, 8, 7, 6, 1, 3, 2, 5, 9 },
	    {9, 3, 6, 7, 5, 2, 8, 4, 1 },
	    {1, 2, 5, 4, 8, 9, 3, 7, 6 },
	    {3, 6, 9, 1, 4, 8, 7, 2, 5 },
	    {7, 5, 1, 2, 3, 6, 9, 8, 4 },
	    {8, 4, 2, 9, 7, 5, 6, 1, 3 }
   	 };
    
    
    /*Criando uma Matriz Aleatorio para o Jogo*/
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            sudoku[i][j] = mat[i][j];
            sudokuExemplo[i][j] = mat[i][j];
        }
    }
 	
 	salvar = 0;
 	menu = Menu(sudoku, mat, sudokuExemplo);
 	
 	if(menu == 99)
 	{
 		return;
	}
 	
	return 0;
}


