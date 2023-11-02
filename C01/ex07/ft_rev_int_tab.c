/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:01:01 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/16 18:03:21 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	tab[] = {4, 5, 78, 11, 0, 56};
	int	size = 6;

printf("Original: ");
printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3],\
 tab[4], tab[5]);
ft_rev_int_tab(tab, size);
printf("Modified: ");
printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3],\
 tab[4], tab[5]);
}*/
