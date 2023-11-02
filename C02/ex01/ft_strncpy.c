/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:22:54 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/20 13:36:40 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "abd";
	char b[] = "cv";
	int	j = 2;
	char c[] = "abd";
    char d[] = "cv";
	int	k = 2;

	ft_strncpy(a, b, j);
	printf("%s\n", a);
	strncpy(c, d, k);
    printf("%s\n", c);
}*/
