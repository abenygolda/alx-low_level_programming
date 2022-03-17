#include "math.h"
/**
 * main - checks whether the input is upper case or lower case.
 *
 * It returns one if it's upper case and returns 0 if it's lower case character. 
 * Author: ABENEZER GOLDA
 */
int _isupper(int c)
{

if (c >='A' && c <='Z')
	return (1);
else 	
	return (0);
}
