#include <stdio.h>
#include <stdlib.h>
#include "EspacosVazios.h"

//Enche de zeros em espa?os aleat?rios
int EspacosVazios (int matriz[9][9]) 
{
    int i, li, co;
 
    srand(time(NULL));
 
    for(i=0; i < 30; i++)
	{
        li = rand() % 9;
        co = rand() % 9;
        matriz[li][co] = 0;
    }
 
    return matriz[9][9];
}
