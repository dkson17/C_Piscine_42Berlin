/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:03:49 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/28 11:00:32 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while ((i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_sqrt(-144));
	printf("%d\n", ft_sqrt(2147395601));
	printf("%d\n", ft_sqrt(625));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(250000));
}*/
