#include "evenandodd.h"

#include <stdio.h>

int evenandodd(int number)
{
    
    if (number == 0)
    {
	    return -1;
    }
    else if (number % 2 == 0)
    {
	    return 0;
    }
    else if (number % 2 == 1)
    {
	    return 1;
    }
 }
   
