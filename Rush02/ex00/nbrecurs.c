/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrecurs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helauren <hlaurence@student.42berlin.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:51:50 by helauren          #+#    #+#             */
/*   Updated: 2023/04/02 14:56:20 by helauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	**input_arr(char *argv)
{
	int	k;
	int	i;
	int	j;
	int	**arr;
	int	z;

	arr = malloc(4 * sizeof(int *));
	z = 0;
	while (z < 4)
	{
		arr[z] = malloc(3 * sizeof(int));
		z++;
	}
	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 2)
		{
			arr[i][j] = -1;
			j++;
		}
		i++;
	}
	k = ft_strlen(argv) - 1;
	i = 3;
	j = 2;
	while (argv[k] != 0)
	{
		while (i >= 0)
		{
			while (j >= 0)
			{
				arr[i][j] = argv[k] - '0';
				j--;
			}
			j = 2;
			i--;
		}
		k--;
	}
	return (arr);
}

void	hundreds(int **arr, char **str, int *i)
{
	if (arr[0][0] > 0)
	{
		str[*i] = malloc(sizeof(char) * 2);
		str[*i][0] = arr[0][0] + '0';
		str[*i + 1][0] = '1';
		str[*i + 1][1] = '0';
		str[*i + 1][2] = '0';
		(*i) = *i + 2;
	}
	if (arr[0][1] >= 2)
	{
		str[*i] = malloc(sizeof(char) * 3);
		str[*i][0] = arr[0][1] + '0';
		str[*i][1] = '0';
		str[*i + 1][0] = arr[0][2] + '0';
		*i = *i + 2;
	}
	if (arr[0][1] == 1)
	{
		str[*i] = malloc(sizeof(char) * 3);
		str[*i][0] = arr[0][1] + '0';
		str[*i][1] = '0';
		str[*i + 1][0] = arr[0][2] + '0';
		*i = *i + 2;
	}
	if (arr[0][1] == 0 && arr[0][2] > 0)
	{
		str[*i] = malloc(sizeof(char) * 3);
		str[*i][0] = arr[0][2] + '0';
		(*i)++;
	}
}

void	arr_values(char *argv, char **str)
{
	int	**arr;
	int	j;
	int	i;
	int	l;

	j = 0;
	l = 0;
	i = 0;
	str = malloc(sizeof (char *) * 14);
	while (l < 14)
	{
		str[i] = NULL;
		l++;
	}
	arr = input_arr(argv);
	hundreds(&arr[0], str, &i);
	while (arr[0][j] != '\0')
	{ 
		if (arr[0][j] != -1)
		{
			str[i] = malloc(sizeof(char) * 14);
			ft_cpy(&str[i], "1000000000");
		}
		j++;
	}
	if (str[i][0] == '1')
		i++;
	hundreds(&arr[1], str, &i);
	j = 0;
	while (arr[1][j] != '\0')
	{
		if (arr[0][j] != -1)
		{
			str[i] = malloc(sizeof(char) * 14);
			ft_cpy(&str[i], "1000000");
		}
		j++;
	}
	if (str[i][0] == '1')
		i++;
	hundreds(&arr[2], str, &i);
	j = 0;
	while (arr[2][j] != '\0')
	{
		if (arr[0][j] != -1)
		{
			str[i] = malloc(sizeof(char) * 10);
			ft_cpy(&str[i], "1000");
		}
		j++;
	}
	if (str[i][0] == '1')
		i++;
	hundreds(&arr[3], str, &i);
}
