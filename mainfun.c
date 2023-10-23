#include <stdio.h>

#include <stdlib.h>

#include "evenandodd.h"
int hasDecimalPoint(const char* string)
{
 while (*string)
    {
        if (*string == '.')
        {
            return 1;
        }
        string++;
    }
    return 0;
}

int checknumberispostiveornegitive(const char* input)
{
	int i = 0;
        if(input[i] == '-')
        {
            return 1;
        }
	else
	{
		return 0;
	}
}

int main(int argc, char* argv[])
{
     if (argc != 2)
     {
          printf("usage %s <number> ", argv[0]);
          return 0;
     }
   
   int result;
   if (hasDecimalPoint(argv[1]))
    {
        printf("%s is invalid (real number)\n", argv[1]);
        return 0;
    }
   if (checknumberispostiveornegitive(argv[1]))
  {
	  printf("%s is invalid(negitive number)\n", argv[1]);
          return 0;
  }
  int number = atoi(argv[1]);

   if (sizeof(number) == sizeof(int))
   {
    	result = evenandodd(number);
   if (result == 0)
   {
     printf("%d num is even",number);
   }
   else if( result == 1)
   {
     printf("%d num is odd", number);
   }
   else
   {
     printf(" %d  is invalid",number);
   }
   }
}
