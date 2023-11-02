/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:25:20 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/26 12:04:25 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	draw_map(void)
{
	write(1, "We handled errors but not the game :)\n", 38);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_str_is_valid(char *str)
{
	int	i;
	int	input[4][4];

	i = 0;
	while (*str)
	{
		if (*str == ' ')
		{
			str++;
			continue ;
		}
		if (*str >= '1' && *str <= '4')
		{
			input[i / 4][i % 4] = *str - '0';
			i++;
		}
		else
		{
			return (1);
		}
		str++;
	}
	return (i != 16);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*s1;
	char	*s2;

	s1 = "Error: invalid input, expected only one string of 16 numbers!\n";
	s2 = "Error: invalid numbers or their quantity. \
Must be 16 numbers in a range from 1 to 4.\n";
	if (argc != 2)
	{
		ft_putstr(s1);
		return (1);
	}
	str = argv[1];
	if (ft_str_is_valid(str))
	{
		ft_putstr(s2);
		return (1);
	}
	draw_map();
	return (0);
}
