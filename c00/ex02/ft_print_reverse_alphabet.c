#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char letter;
	letter = 122;
	while(letter >= 97)
	{
		write(1, &letter, 1);
		letter--;
	}
}
