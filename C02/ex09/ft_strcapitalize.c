/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:39:33 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/20 16:14:26 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	if (c >= 65 && c <= 90)
		return (0);
	if (c >= 97 && c <= 122)
		return (0);
	if (c >= 48 && c <= 57)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (str[i])
	{
		if (next == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else if (next == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (is_numeric(str[i]))
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main()
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(s));
}*/
