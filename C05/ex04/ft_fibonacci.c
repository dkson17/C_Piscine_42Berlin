/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:59:58 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/28 10:03:04 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// Fn = Fn-1 + Fn-2
/*
#include <stdio.h>

int 	main()
{
	printf("%d\n", ft_fibonacci(14));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(19));
}*/
