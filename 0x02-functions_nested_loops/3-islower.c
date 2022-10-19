#include <stdio.h>
#include <ctype.h>

/**
 **main - Entry point
 *Description: checks whether a character is a lower case alphabet (a-z) or nott.
 **Return: 0
 **/

int main(void)
{
	char ch = 'D';
	int return_val;

	return_val = islower(ch);
	printf("return value is %d  \n",return_val);

	if(return_val == 0)
	{
		printf("%c is not a lowercase letter\n",ch);
	}
	else
	{
		printf("%c is a lowercase letter\n",ch);
	}
