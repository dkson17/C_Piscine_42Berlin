/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helauren <hlaurence@student.42berlin.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:17:09 by helauren          #+#    #+#             */
/*   Updated: 2023/04/02 21:29:17 by aarama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	valid_input(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != 0)
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (1);
		i++;
	}
	if (argv[0] == '0')
		return (1);
	return (0);
}

int	val_newdic(char **argv)
{
	int	i;

	i = ft_strlen(argv[1]);
	if (argv[1][i] != 't')
		return (1);
	if (argv[1][i - 1] != 'c')
		return (1);
	if (argv[1][i - 2] != 'i')
		return (1);
	if (argv[1][i - 3] != 'd')
		return (1);
	if (argv[1][i - 4] != '.')
		return (1);
	if (argv[1][i - 5] < 33 && argv[1][i - 5] > 126)
		return (1);
	return (0);
}

long	atoyish(char *str)
{
	long	convert;
	long	n;
	int		i;
	long	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		convert = str[i] - '0';
		n = (n * 10) + convert;
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (n * sign);
	}
	return (0);
}
