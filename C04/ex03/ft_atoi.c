/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:46:34 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/24 12:14:46 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minuses;
	int	number;

	number = 0;
	minuses = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			minuses++;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	if (!(minuses % 2))
		return (number);
	return (-number);
}

#include <stdio.h>
int	main()
{
	char *s = " \n \t---+--+1234-";

	printf("%d\n", ft_atoi(s));
}
