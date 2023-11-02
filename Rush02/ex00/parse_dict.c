/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:49:38 by dakataso          #+#    #+#             */
/*   Updated: 2023/04/01 18:07:30 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

char	*ft_get_word_in_dict(int fd, int nb_char, char buffer)
{
	char	*str;
	int		i;

	i = ft_word_len(nb_char);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!(str))
		return (0);
	while (buffer == ' ')
		read(fd, &buffer, 1);
	read(fd, &buffer, 1);
	while (buffer == ' ')
		read(fd, &buffer, 1);
	i = 0;
	while (buffer != '\n')
	{
		str[i] = buffer;
		i++;
		read(fd, &buffer, 1);
	}
	str[i] = '\0';
	return (str);
}

char	*ft_remove_multiple_space(char *str)
{
	char	*str_cpy;
	int		len;
	int		i;
	int		j;
	char	*a;

	a = "a";
	len = ft_strlen(str);
	str_cpy = (char *)malloc(sizeof(char) * (len + 100));
	if (!(str_cpy))
		return (a);
	i = 1;
	j = 1;
	str_cpy[0] = str[0];
	while (str[i])
	{
		if (!(str[i] == ' ' && str[i - 1] == ' '))
		{
			str_cpy[j] = str[i];
			j++;
		}
		i++;
	}
	str_cpy[j] = '\0';
	ft_realloc(&str_cpy, '-');
	return (str_cpy);
}

int	ft_open_dict_file2(char filename)
{
	int	fd;

	fd = open(&filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Failed to open dictionary file\n", 31);
		return (-1);
	}
	return (fd);
}

int	ft_open_dict_file1(void)
{
	int	fd;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Failed to open dictionary file\n", 31);
		return (-1);
	}
	return (fd);
}

char	*ft_parse_dict(int fd, char *str)
{
	char	buffer;
	char	*output;
	int		i;

	i = 0;
	while (read(fd, &buffer, 1))
	{
		if (str[i] != buffer && str[i] != '\0')
		{
			ft_go_to_next_line(&fd, &i);
			continue ;
		}
		if ((buffer == ':' || buffer == ' ') && str[i] == '\0')
			output = ft_get_word_in_dict(fd, i, buffer);
		if (str[i] == '\0' )
		{
			ft_go_to_next_line(&fd, &i);
			continue ;
		}
		i++;
	}
	return (ft_remove_multiple_space(output));
}
