#include <stdio.h>

#include "casecheck.h"

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
    if (input[0] == '-' && input[1] >= '0' && input[1] <= '9')
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
         printf("<usage> %s <character>", argv[0]);
         return 0;    
    }
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
    char character = argv[1][0];
    if(sizeof(character) == sizeof(char))
    {
    	int result = casecheck(character);
    if (result == 0) 
    {
        printf("%c is lower case", character);   
    }
    else if (result == 1)
    {
        printf("%c is upper case", character);
    }
    else if (result == 2)
    {
        printf("%c is digit", character);
    }
    else if(result == 3) 
    {
        printf(" %c special character", character);
    }
    }
}
