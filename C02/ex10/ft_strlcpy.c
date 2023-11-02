/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:15:07 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/20 16:22:42 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	/*if (size < 1)
		return (res);*/
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

#include <stdio.h>
#include <bsd/string.h>

int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "Hello";
	size = 0;
	printf("%d\n", ft_strlcpy(dest, src, size));
	
	printf("%zu", strlcpy(dest, src, size));
}
