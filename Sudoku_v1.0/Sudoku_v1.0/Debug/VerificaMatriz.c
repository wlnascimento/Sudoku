#include <stdio.h>
#include <stdlib.h>
#include "VerificaMatriz.h"
#include "VerificaMatrizMenor.h"
#include "ImprimeMatriz.h"
#include "Menu.h"
#define SIZE 9

int VerificaMatriz(int sudoku[SIZE][SIZE], int mat[SIZE][SIZE], int sudokuExemplo[SIZE][SIZE])
{
	int cont, co, li, num, i, j, linha, coluna, retMariz, valida;
	cont = 1;
	valida = 0;
	
	printf("\nInforme a linha: ");
    scanf("%d",&li);	
	while(li < 0 || li > 9) 
	{
		printf("\nLinha Invalida. Informe outra linha: ");
		scanf("%d",&li);
	}
	if(li == 0)
	{
		Menu(sudoku, mat, sudokuExemplo);
		 		
		return 99;	
	}
	else 
	{
		printf("\nInforme a coluna: ");
    	scanf("%d",&co);
		while(co < 0 || co > 9)
		{
			printf("\nColuna Invalida. Informe outra coluna: ");
    		scanf("%d",&co);
		}
		if(co == 0)
		{
			Menu(sudoku, mat, sudokuExemplo);
		
			return 99;
		}
	}
	     
	while (cont==1)
	{				
		while (sudoku[li-1][co-1] != 0)
		{
       		printf("\n\n*** Opcao Invalida! Posicao ja Ocupada! ***\n");
       		ImprimeMatriz(sudoku);
        	        	
       		printf("\n\n*** Informe outra posicao! ***\n");
			printf("\nInforme a linha: ");
        	scanf("%d",&li);
        	printf("\nInforme a coluna: ");
       		scanf("%d",&co);       	
    	}
    	
    	printf("\nInforme um numero de 1 a 9: ");
       	scanf("%d",&num);
       	printf("\n\n");
       	
       	/*Validação dos valores digitados pelo usuário*/
       	while(num < 0 || num > 9)
       	{
       		printf("\n\nNumero Invalido!");
       		printf("\n");
       		
       		ImprimeMatriz(sudoku);
       		
       		printf("\nInforme um numero de 1 a 9: ");
       		scanf("%d",&num);
		}
       	
       	/*Utilizado para armazenar o retorno da validação das linhas e colunas.*/
       	valida = 0;
       	
       	linha = li-1;
    	coluna = co-1;        
                   
        /*Chamada do Menu*/	
       	if(num == 0)
       	{
       		Menu(sudoku, mat, sudokuExemplo);
	
			return 99;
		}
		else
		{
 			/*verificar a linha da matriz*/
 			for (j = 0; j < 9; j++)
			{
        		if (j == coluna)
				{
           			continue;
        		}		
        		else if (sudoku[linha][j] == num)
				{	
					VerificaMatrizMenor(sudoku, linha, j, num);
        			cont = 1; 
					valida = 1;   			           		
    			}
    		}

			/*Verificar a coluna da matriz*/
			if(valida == 0)
			{
				for (i = 0; i < 9; i++)
				{
        			if (i == linha)
					{	
           				continue;
        			}	
        			else if (sudoku[i][coluna] == num)
					{
						VerificaMatrizMenor(sudoku, i, coluna, num);        			
        				cont=1;     
						valida = 1;  	
        			}			
    			}
    		}
    		
    		
    		/*Verificando Matriz 3x3*/
    		if(valida == 0)
    		{
    			if((VerificaMatrizMenor(sudoku, linha, coluna, num)) == 1)
    			{
    				cont = 1;    		
				}
				else
				{
					sudoku[linha][coluna] = num;
					cont = 0;
					return cont;
				}
			}
		}
	}
		
	return;
}	


