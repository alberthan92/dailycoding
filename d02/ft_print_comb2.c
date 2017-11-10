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

void	ft_print_comb2(void)
{
	char c[4];

	c[0] = '0';
	c[2] = ' ';
	while (c[0] <= '9')
	{
		c[1] = '0';
		while (c[1] <= '9')
		{
			c[3] = c[0];
			c[4] = c[1] + 1;
			while (c[3] <= '9')
			{
				while (c[4] <= '9')
				{
					ft_putstr(c);
					if (!(c[0] == '9' && c[1] == '8'))
						ft_putstr(", ");
					c[4]++;
				}
				c[4] = '0';
				c[3]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
