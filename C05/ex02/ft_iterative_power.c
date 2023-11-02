/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:39:13 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/26 17:51:27 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
		result *= nb;
	return (result);
}

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_power(5, 5));
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(3, 1));
	printf("%d\n", ft_iterative_power(10, 0));
}*/
