#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int nbr;

	nbr = 122;
	while (nbr > 96)
	{
		ft_putchar(nbr);
		nbr--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
