#include <stdio.h>
#include "SalvarJogo.h"
#define SIZE 9

int SalvarJogo(int sudoku[SIZE][SIZE], int mat[SIZE][SIZE])
{
	/*Declaração de Variaveis*/
	int linha, coluna;
	FILE *jogoSalvo, *matrizAuxiliarSalva;
	
	/*Declarando os arquivos para os ponteiros*/
	jogoSalvo = fopen("jogoSalvo.txt", "w");
	matrizAuxiliarSalva = fopen("matrizAuxiliarSalva.txt", "w");
	
	
	for(linha = 0; linha < SIZE; linha++)
	{
		for(coluna = 0; coluna < SIZE; coluna++)
		{
			fprintf(jogoSalvo, "%d ", sudoku[linha][coluna]);
			fprintf(matrizAuxiliarSalva, "%d ", mat[linha][coluna]);
		}
		
		fprintf(jogoSalvo, "\n");
		fprintf(matrizAuxiliarSalva, "\n");
	}
	fclose(jogoSalvo);
	fclose(matrizAuxiliarSalva);

		
	printf("\n\nJogo salvo com Sucesso!");
	
	
	return 99;
}
