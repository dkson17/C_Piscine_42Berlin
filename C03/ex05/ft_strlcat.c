/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:15:04 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/22 15:02:45 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	a = ft_strlen(dest);
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (a + ft_strlen(&src[b]));
}

/*#include <stdio.h>
#include <bsd/string.h>

int main()
{
    char    s[30] = "Hello";
    char    s1[100] = " world i love you";

    int i = strlcat(s, s1, sizeof(4));
    printf("\"%s\", src + dest %d, from real function\n", s, i);

    char    s2[30] = "Hello";
    char    s3[100] = " world i love you";

    int d = ft_strlcat(s2, s3, sizeof(4));
    printf("\"%s\", src + dest %d, from my function\n", s2, d);
}*/	
