/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:36:58 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/31 09:47:52 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	len = max - min;
	*range = (int *)malloc(sizeof(int) * len);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}

/*#include <stdio.h>
int		main(void)
{
	int		*range;
	int		i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 50));
	while (i < 55)
	{
	printf("%d ", range[i]);
		i++;
	}
	free (range);
	return (0);
}*/
