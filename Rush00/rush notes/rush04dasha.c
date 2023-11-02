/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04dasha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:21:38 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/18 13:04:05 by dakataso         ###   ########.fr       */
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
			if (k == 1)
				ft_print_lines(x, 'A', 'B', 'C');
			else if (k == y)
				ft_print_lines(x, 'C', 'B', 'A');
			else
				ft_print_lines(x, 'B', ' ', 'B');
			k++;
		}
	}
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{    
	if (argc != 3) 
	{
 	       printf("Usage: %s <x> <y>\n", argv[0]);
 	       return 1;
	}
	else
	{		
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		rush(x, y);
		return 0;
	}
}
