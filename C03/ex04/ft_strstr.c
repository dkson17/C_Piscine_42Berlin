/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:35:45 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/22 14:13:36 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	char	*search;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		needle = to_find;
		search = str;
		while (*needle && *search && *needle == *search)
		{
			needle++;
			search++;
		}
		if (!*needle)
			return (str);
		str++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	printf("ft_: %s, str: %s\n", ft_strstr("", ""), strstr("", ""));
	printf("ft_: %s, str: %s\n", ft_strstr("e", "ef"), strstr("e", "ef"));
	printf("ft_: %s, str: %s\n", ft_strstr("ef", "e"), strstr("ef", "e"));
printf("ft_: %s, str: %s\n", ft_strstr("abcd", "cd"), strstr("abcd", "cd"));
printf("ft_: %s, str: %s\n", ft_strstr("a", "abcd"), strstr("a", "abcd"));
printf("ft_: %s, str: %s\n", ft_strstr("abccd", "cd"), strstr("abccd", "cd"));
printf("ft_: %s, str: %s\n", ft_strstr("ace", "ab"), strstr("ace", "ab"));
printf("ft_: %s, str: %s\n", ft_strstr("abccdcd", "cd"), \
 strstr("abccdcd", "cd"));
}*/
