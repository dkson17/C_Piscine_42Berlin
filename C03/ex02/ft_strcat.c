/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:25:09 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/22 11:54:26 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[7] = "Hello ";
	char b[25] = "world!";
	char c[7] = "Hello ";
	char d[25] = "world!";

	printf("%s\n", ft_strcat(a, b));
	printf("%s\n", strcat(c, d));
}*/
