/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:52:51 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/26 17:59:21 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/*#include <stdio.h>

int	main()
{
	printf("%d\n", ft_recursive_power(5, 5));
	printf("%d\n", ft_recursive_power(0, 5));
	printf("%d\n", ft_recursive_power(3, 1));
	printf("%d\n", ft_recursive_power(10, 0));
}*/
