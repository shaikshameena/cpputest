#include "factorial.h"

#include <string.h>

#include <ctype.h>


int factorial(int number)
{
	int factorial = 1;
	if (number >= 0 && number <= 1)
	{
		return 1;
        } 
	else 
	{
		for (int i = 2; i <= number; i++)
	       	{
                    factorial  *= i;
		
                }
               return factorial;
	}
	   
}
	

