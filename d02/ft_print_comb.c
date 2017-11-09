#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_comb(void)
{
	char c[2];

	c[0] = '0';
	while (c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while (c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while (c[2] <= '9')
			{
				ft_putstr(c);
				if (c[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
