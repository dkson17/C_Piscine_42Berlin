/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:37:21 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/20 14:39:24 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] && str[i] >= 65 && str[i] <= 90) \
	|| (str[i] >= 97 && str[i] <= 122))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main()
{
	char a[] = "shbjhsgaf";

	printf("%d", ft_str_is_alpha(a));

	char b[] = "shbjhs454gaf";

    printf("%d", ft_str_is_alpha(b));
	
	char c[] = "";

    printf("%d", ft_str_is_alpha(c));
}*/
