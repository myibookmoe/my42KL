#include <unistd.h>

void ft_is_negative(int n)
{
	char letter;
	if (n < 0) 
	{ 
		letter = 78;
	} 
	else 
	{
		letter = 80;
	}
	write(1, &letter, 1);
}
