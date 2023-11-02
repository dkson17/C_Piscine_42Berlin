/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:19:05 by dakataso          #+#    #+#             */
/*   Updated: 2023/04/02 16:19:44 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "library.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_realloc(char **str, char sign)
{
	int		len;
	char	*str_cpy;

	len = ft_strlen(*str);
	if (sign == '+')
	{
		str_cpy = (char *)malloc(sizeof(char) * (len + 100));
		if (!(str_cpy))
			exit(0);
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	else
	{
		str_cpy = (char *)malloc(sizeof(char) * len);
		if (!(str_cpy))
			exit(0);
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	return (1);
}

int	ft_word_len(int i)
{
	int		len;
	int		fd;
	char	buffer;

	len = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while (i-- > 0)
		read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	read(fd, &buffer, 1);
	while (read(fd, &buffer, 1) && buffer == ' ')
		;
	while (read(fd, &buffer, 1) && buffer != '\n')
		len++;
	return (len);
}
