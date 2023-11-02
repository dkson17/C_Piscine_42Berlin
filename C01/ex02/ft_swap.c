/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:28:21 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/16 14:48:42 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int	main(void)
{
	int a, b;

	a = 100500;
	b = 500100;
	printf("Not swapped: \n%d\n%d\n", a,b);
	ft_swap(&a, &b);
	printf("Swapped: \n%d\n%d\n", a,b);
}*/
