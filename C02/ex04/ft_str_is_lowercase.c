/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:56:33 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/20 14:59:02 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 97 && str[i] <= 122)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main()
{
	char a[] = "ASHSH";
	char b[] = "shbjhsgaf";
	char c[] = "";
	
	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));
}*/
