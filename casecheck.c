#include "casecheck.h"

#include <ctype.h>

    int casecheck(char character)
    {
           if (isupper(character))
                {
                   return 1;
                }
           else if (islower(character))
             {
                return 0;
             }
            else if (isdigit(character))
            {
                return 2;
            }
          else if (ispunct(character) || isspace(character))
           {
                return 3;
           }
	  return -1;
    }
