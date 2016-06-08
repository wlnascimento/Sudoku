#include <stdio.h>
#include <stdlib.h>
#include "ImprimeMatriz.h"

void ImprimeMatriz (int matriz[9][9])
{
    int i,j;
    
    printf("\n");
    printf("  ");
 
 	/*Imprimir número das linhas*/
 	for (i = 1; i <= 9; i++)
	{
        printf(" %d", i);
    } 
	printf("\n");
	printf("  ");
 
    for (i = 0; i < 19; i++)
	{
        printf("_");
    }
 
    printf("\n");
 
    for (i = 0; i < 9; i++){
    	
    	printf("%d ",i+1);
    	printf("|");
    	
        for (j = 0; j < 9; j++){
 
            if (matriz[i][j]==0){
                printf("%c%c",' ','|');
            }
            else{
                printf("%d%c",matriz[i][j],'|');
            }
        }
        printf("\n");
    }
    
    printf("  ");
 
    for (i = 0; i < 19; i++){
        printf("_");
    }
    
    printf("\n");
 
}
