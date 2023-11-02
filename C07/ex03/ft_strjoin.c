/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:49:51 by dakataso          #+#    #+#             */
/*   Updated: 2023/03/31 12:00:46 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

int	ft_get_total_length(int size, char **strs, char *sep)
{
	int	total_length;
	int	sep_length;
	int	i;

	total_length = 0;
	sep_length = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			total_length += sep_length;
		}
		i++;
	}
	return (total_length);
}

char	*ft_build_result_string(int size, char **strs, char *sep, int total_len)
{
	char	*result;
	int		i;
	int		index;
	int		sep_len;

	result = (char *) malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		ft_strcpy(result + index, strs[i]);
		index += ft_strlen(strs[i]);
		if (++i < size)
		{
			ft_strcpy(result + index, sep);
			index += sep_len;
		}
	}
	result[total_len] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty;
	int		total_len;

	if (size == 0)
	{
		empty = (char *) malloc(sizeof(char));
		empty[0] = '\0';
		return (empty);
	}
	total_len = ft_get_total_length(size, strs, sep);
	return (ft_build_result_string(size, strs, sep, total_len));
}

/*#include <stdio.h>

int main()
{
    char *strs[] = {"hello", "world", "how", "are", "you"};
    char *sep = "_-_-_->";

    char *result = ft_strjoin(5, strs, sep);
	printf("%s\n", result);
	free(result);
    return 0;
}*/
/*char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;
	int		sep_length; 
	int		i;
	int		index;
	int		len;

	total_length = 0;
	sep_length = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			total_length += sep_length;
		}
		i++;
	}
	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	i = 0;
	while (i < size)
	{
		len = ft_strlen(strs[i]);
		ft_strcpy(result + index, strs[i]);
		index += len;
		if (i < size - 1)
		{
			ft_strcpy(result + index, sep);
			index += sep_length;
		}		
		i++;
	}
	result[total_length] = '\0';
	return (result);
}*/
