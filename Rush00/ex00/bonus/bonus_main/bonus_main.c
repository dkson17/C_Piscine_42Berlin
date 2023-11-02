/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:54:34 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/19 14:49:26 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *s)
{
	int	result;

	result = 0;
	while (*s >= 48 && *s <= 57)
	{
		result = result * 10 + (*s - 48);
		s++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Always two arguments\n", 21);
		return (1);
	}
	else if (!(ft_is_numeric(argv[1]) == 1 && ft_is_numeric(argv[2]) == 1))
	{
		write(1, "Arguments should always be numeric\n", 35);
		return (1);
	}
	else
	{		
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		rush(x, y);
		return (0);
	}
}
