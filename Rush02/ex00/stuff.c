/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stuff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helauren <hlaurence@student.42berlin.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:12:21 by helauren          #+#    #+#             */
/*   Updated: 2023/04/02 22:12:24 by helauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	ft_cpy(char **dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[0][i] = src[i];
		i++;
	}
	dest[0][i] = '\0';
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
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

void	ft_go_to_next_line(int *fd, int *i)
{
	char	buffer;

	while (read(*fd, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
	}
	*i = 0;
}
