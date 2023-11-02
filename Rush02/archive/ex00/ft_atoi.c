/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:21:40 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/26 19:18:17 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*rev_arr(char *str, int size)
{
	int		first_counter;
	int		second_counter;
	char	mem;

	first_counter = 0;
	second_counter = size - 1;
	while (first_counter < second_counter)
	{
		mem = str[first_counter];
		str[first_counter] = str[second_counter];
		str[second_counter] = mem;
		first_counter++;
		second_counter--;
	}
	return (str);
}

int	strleng(char *str)
{
	int	result;

	result = 0;
	while (str[result] != '\0')
		result++;
	return (result);
}

long	ft_atoi(char *str, int check)
{
	long			i;
	long			result;
	int				size;

	size = strleng(str);
	if (check == 1)
		str = rev_arr(str, size);
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "4321";
	printf("%ld", ft_atoi(str, 0));
	return (0);
}*/
