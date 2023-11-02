/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:55:22 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/22 12:32:22 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*a;

	i = 0;
	a = dest;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (a);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[] = "Hello ";
    char b[] = "world!";
	unsigned int n = 3;
    char c[] = "Hello ";
    char d[] = "world!";

    printf("%s\n", ft_strncat(a, b, n));
    printf("%s\n", strncat(c, d, n));
}*/
