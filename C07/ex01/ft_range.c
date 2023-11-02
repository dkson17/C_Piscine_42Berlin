/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:11:28 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/31 09:32:48 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

#include <stdio.h>

int	main()
{
	int	*arr = ft_range(-5, 1);

	if (arr != NULL)
	{
		for (int i = 0; i < 8; i++)
		{
			printf("%d\n", arr[i]);
		}
		free(arr);
	}
	return (0);
//	printf("%d\n", ft_range(1, 1));
//	printf("%d\n", ft_range(10000, 100000000));
}
