/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:54:12 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/21 13:09:50 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "Hello!";
    char b[] = "hello!";
	char c[] = "Hello!";
	char d[] = "hello!";
	

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(c, d));
}*/
