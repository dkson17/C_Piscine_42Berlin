/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:44:06 by dakataso          #+#    #+#             */
/*   Updated: 2023/04/04 11:46:36 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i + 1], charset) == 1
			&& char_is_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = count_words(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}

/*#include <stdio.h>

int main(void) {
    char *str = "This is a test string";
    char *sep = " ";
    char **result = ft_split(str, sep);
    if (result == NULL) {
        printf("Error: ft_split returned NULL\n");
        return 1;
    }
    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}*/

/*#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

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

int	count_strings(char *str, char *charset)
{
	int	count;
	int	in_string;
	int	i;

	count = 0;
	i = 0;
	in_string = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && !in_string)
		{
			count++;
			in_string = 1;
		}
		else if (is_charset(str[i], charset) && in_string)
		{
			in_string = 0;
		}
		i++;
	}
	return (count);
}

char	**allocate_memory(int num_strings)
{
	char	**result;

	result = malloc((num_strings + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	return (result);
}

void	copy_string(char **res_ptr, char *start, int len)
{
	*res_ptr = malloc((len + 1) * sizeof(char *));
	if (!(*res_ptr))
	{
		return;
	}
	ft_strncpy(*res_ptr, start, len);
	(*res_ptr)[len] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	int		num_strings;
	char	**result;
	char	**res_ptr;
	char	*start;

	num_strings = count_strings(str, charset);
	result = allocate_memory(num_strings);
	res_ptr = result;
	if (!result)
		return (NULL);
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			start = str;
			while (*str && !is_charset(*str, charset))
			{
				str++;
			}
			len = str - start;
			copy_string(res_ptr, start, len);
			res_ptr++;
		}
		else
		{
			str++;
		}
	}
	*res_ptr = NULL;
	return (result);
}*/
