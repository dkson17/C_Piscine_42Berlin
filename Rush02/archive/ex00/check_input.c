/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkatason <dkatason@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:15 by dkatason          #+#    #+#             */
/*   Updated: 2023/02/26 19:38:19 by dkatason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

long	ft_atoi(char *str, int check);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		++len;
	return (len);
}

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int	ft_check_string(char *str)
{
	long	input;	

	input = ft_atoi(str, 0);
	if (ft_is_numeric(str) == 0)
		return (0);
	if (ft_strlen(str) > 10)
		return (0);
	if (ft_strlen(str) == 0)
		return (0);
	if (input > 4294967295)
		return (0);
	return (1);
}

/*
int	main(int argc, char **argv)
{
	int	n;
	int	fd;
	char	;

	if (argc == 1 || argc > 3)
		write(1, "Error\n", 6);
	else if (argc == 2)
	
*/		
/*
#include <stdio.h>

int	main()
{
	char	c[] = "-4294967295";

	printf ("%d", ft_check_string(c));
}*/
