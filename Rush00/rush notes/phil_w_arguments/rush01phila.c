/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01phil.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:07:09 by pkhan             #+#    #+#             */
/*   Updated: 2023/03/18 21:32:05 by pkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
		printline('/', '*', '\\', x);
		if (y > 2)
		{
			midlinecounter = 0;
			while (midlinecounter < (y - 2))
			{
				printline('*', ' ', '*', x);
				midlinecounter++;
			}
		}
		if (y > 1)
		{
			printline('\\', '*', '/', x);
		}
	}
}

int	main(int argc, char *argv[])
{
	int	a1;
	int	a2;

	if (argc != 3)
	{
		return (1);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[2]);
	rush(a1, a2);
	return (0);
}