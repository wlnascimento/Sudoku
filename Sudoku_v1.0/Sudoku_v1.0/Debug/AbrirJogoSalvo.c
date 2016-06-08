#include <stdio.h>
#include <stdlib.h>
#include "AbrirJogoSalvo.h"
#define SIZE 9

int AbrirJogoSalvo(int sudoku[SIZE][SIZE], int mat[SIZE][SIZE])
{
	/*Declaração de Variavéis*/
	int linha, coluna;
	FILE *jogoSalvo, *matrizAuxiliarSalva;
	
	/*Declarando os arquivos para os ponteiros*/
	jogoSalvo = fopen("jogoSalvo.txt", "r");
	matrizAuxiliarSalva = fopen("matrizAuxiliarSalva.txt", "r");
		
	/*Verificando se existem jogos Salvos*/
	if(jogoSalvo == NULL)
	{		
		return 0;
	}
	else
	{
		for(linha = 0; linha < SIZE; linha++)
		{
			for(coluna = 0; coluna < SIZE; coluna++)
			{
				fscanf(jogoSalvo, "%i", &sudoku[linha][coluna]);
				fscanf(matrizAuxiliarSalva, "%i", &mat[linha][coluna]);
			}
				printf("\n");
		}

	}
	
	fclose(jogoSalvo);
	fclose(matrizAuxiliarSalva);
	
	return 1;
}
