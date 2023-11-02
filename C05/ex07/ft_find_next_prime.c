/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:14:18 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/28 11:19:44 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		++nb;
	return (nb);
}

/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(2147395800));
	printf("%d\n", ft_find_next_prime(999980));
}*/
