#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "SalvarJogo.h"
#include "VerificaCasasVazias.h"


int Menu(int sudoku[SIZE][SIZE], int mat[SIZE][SIZE], int sudokuExemplo[SIZE][SIZE])
{
	int menu, ret, retMatriz, salvar, i, j;
	
	printf("\n**************************");
	printf("\n\nEscolha a opcao desejada: ");
	printf("\n\n1 - Novo Jogo ");
	printf("\n2 - Exemplo de Jogo");
	printf("\n3 - Salvar Jogo");
	printf("\n4 - Abrir Jogo Salvo");
	printf("\n5 - Finalizar Jogo");
	printf("\n\n**************************\n");
	
	printf("\nOpcao Escolhida: ");
	scanf("%d",&menu);
	
	while(menu < 1 || menu > 5)
	{
		printf("Opcao Invalida! Tente novamente!");
		
		printf("\n\nOpcao Escolhida: ");
		scanf("%d", &menu);
	}
	
	
	while(menu >= 1 && menu <= 5)
 	{
		if(menu == 1)
 		{
 			printf("\nJogo inicializado!");
		 	printf("\nInforme 0 se desejar voltar ao Menu!\n");
		 	
		 	if(VerificaCasasVazias(sudoku) != 0)
		 	{
		 		for (i = 0; i < 9; i++)
				{
					for (j = 0; j < 9; j++)
					{
						sudoku[i][j] = mat[i][j];
        			}
    			}		 		
			}
		 	
		 	EmbaralhaMatriz(sudoku, mat);
		 			 		 	
		 	while(VerificaCasasVazias(sudoku) != 0)
 			{
				retMatriz = VerificaMatriz (sudoku, mat, sudokuExemplo);
    							
				if(retMatriz == 99)
				{
					return retMatriz;
				}
				
				ImprimeMatriz (sudoku);
			}
			
			printf("\n\nPARABENS, VOCE GANHOU!");
			printf("\n\n");
			
			break;
			return;
		}	
		else if(menu == 2)
		{
			ImprimeMatriz(sudokuExemplo);
			
			menu = Menu(sudoku, mat, sudokuExemplo);
							
		}
		else if(menu == 3)
		{
			/*Salvar jogo atual*/
		SalvarJogo(sudoku, mat);
				
		printf("\n\nJogo finalizado!\n");
		
		ret = 99;
		
		return ret;
		
		}
		else if(menu == 4)
		{	
			/*Abrir jogo salvo*/
			ret = AbrirJogoSalvo(sudoku, mat);
			
			if(ret == 0)
			{
				printf("\nNAO EXISTEM JOGOS SALVOS!\n");		
				printf("\nComece um novo Jogo!");
				printf("\n");
		
				Menu(sudoku, mat, sudokuExemplo);
			}
			else
			{
				printf("\nJogo salvo, inicializado com sucesso!");
		 		printf("\nInforme 0 se desejar voltar ao Menu!\n");
		 		
		 		ImprimeMatriz (sudoku);
		 	
		 	 	while(VerificaCasasVazias(sudoku) != 0)
 				{
					retMatriz = VerificaMatriz (sudoku, mat, sudokuExemplo);
    							
					if(retMatriz == 99)
					{
						return retMatriz;
					}
				
						ImprimeMatriz (sudoku);
				}
				
				return;
			}
		}
		else if(menu == 5)
		{
			printf("\nDeseja salvar o jogo?: ");
			printf("\n**********************");
			printf("\n1 - SIM");
			printf("\n2 - NAO");
			printf("\n**********************");
			printf("\nOpcao: ");
			scanf("%d",&salvar);
			if(salvar == 1)
			{
				if(VerificaCasasVazias(sudoku) == 0)
				{
					printf("\nNao existem jogos em execucao para serem salvos!");
					printf("\n\nInicialize um Novo Jogo.");
					printf("\n");
				}
				else
				{
					SalvarJogo(sudoku, mat);
				
					printf("\n\nJogo finalizado!\n");
				}
				
				return;
			}			
			else if(salvar == 2)
			{
				printf("\nJogo finalizado!\n");
								
				return;
			}		
		}	
		
		return;
	}
}
