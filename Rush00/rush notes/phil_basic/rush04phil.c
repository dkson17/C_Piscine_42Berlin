/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04phil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:07:09 by pkhan             #+#    #+#             */
/*   Updated: 2023/03/18 21:31:16 by pkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printline(char start, char mid, char end, int linelength)
{	
	int	length;

	length = 0;
	write(1, &start, 1);
	while (length < (linelength - 2))
	{
		write(1, &mid, 1);
		length++;
	}
	if (linelength > 1)
	{
		write(1, &end, 1);
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{	
	int	midlinecounter;

	if ((x > 0) && (y > 0))
	{
		printline('A', 'B', 'C', x);
		if (y > 2)
		{
			midlinecounter = 0;
			while (midlinecounter < (y - 2))
			{
				printline('B', ' ', 'B', x);
				midlinecounter++;
			}
		}
		if (y > 1)
		{
			printline('C', 'B', 'A', x);
		}
	}
}

int	main(void)
{
	rush(1, 1);
	return (0);
}
