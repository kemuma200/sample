#include "main.h"

/**
 *parse_specifier - parse characters that fall after % symbol
 *@vary: args
 */
void parse_specifier(variable_s *vary)
{
	int i, j, width = 0, precision = 0;
	int space = 0, plus = 0, minus = 0, hash = 0, zero = 0;
	static const char flags[] = {'h', 'l', '.', '+', '-', ' ', '#', '0'};

	va_start(vary->a);

	for (i = 0; flags[i] != '\0'; i++)
	  {
	    /** check if width is specified */
	    
	    /*check for flags*/
	    j = va_arg((vary->a), int);
	    if ( j == flags[i])
	      {
		
	      }
	  }
	
  

  
  
}
