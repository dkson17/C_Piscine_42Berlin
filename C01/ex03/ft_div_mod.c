/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:49:50 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/16 15:17:36 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int abc, cba, div, mod;

	abc = 1235;
	cba = 12;
	ft_div_mod(abc, cba, &div, &mod);
	printf("%d\n%d\n", div, mod);
}*/
