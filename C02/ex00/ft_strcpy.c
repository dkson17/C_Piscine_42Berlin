/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:04:31 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/20 13:21:23 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "abd";
	char b[] = "cvbdhgf";
	char c[] = "abd";
    char d[] = "cvbdhgf";

	ft_strcpy(a, b);
	printf("%s\n", a);
	strcpy(c, d);
    printf("%s\n", c);
}*/
