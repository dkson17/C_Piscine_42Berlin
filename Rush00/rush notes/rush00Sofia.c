/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00Sofia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofia <>                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:21:38 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/18 14:35:40 by ssukhini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_lines(int len, char start, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i == len)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	k;

	k = 1;
	if (x >= 1 && y >= 1)
	{
		while (k <= y)
		{
			if (k == 1 || k == y)
				ft_print_lines(x, 'o', '-', 'o');
			else
				ft_print_lines(x, '|', ' ', '|');
			k++;
		}
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
