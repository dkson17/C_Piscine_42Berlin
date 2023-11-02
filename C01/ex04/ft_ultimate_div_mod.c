/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:18:27 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/16 15:30:30 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

/*#include <stdio.h>

int    main()
{
    int a, b;
    
    a = 101;
    b = 10;
    printf("a=%d b=%d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("Modified q=%d m=%d\n\n", a, b);
}*/
