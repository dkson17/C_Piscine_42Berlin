/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helauren <hlaurence@student.42berlin.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:34:52 by helauren          #+#    #+#             */
/*   Updated: 2023/04/01 20:36:43 by helauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	argc2(char **argv, int fd, char **str)
{
	int		i;
	int		j;
	char	filename[50];
	char	*output;

	if (valid_input(argv[2]) == 1 || atoyish (argv[2]) > 4294967295
		|| val_newdic(argv) == 1)
		return (1);
	j = 0;
	while (argv[1][j] != 0)
	{
		filename[j] = argv[1][j];
		j++;
	}
	fd = ft_open_dict_file2(*argv[1]);
	arr_values(argv[2], str);
	i = 0;
	while (*str[i] != 0)
	{
		output = ft_parse_dict(fd, str[i]);
		write(1, output, ft_strlen(output));
		i++;
		if (i > 0 && str[i] != 0)
			write (1, " ", 1);
	}
	free(output);
	return (0);
}

int	argc1(char **argv, int fd)
{
	char	*str;
	char	*output;
	int		i;

	output = (char *)malloc(sizeof(char) * 1);
	if (valid_input(argv[1]) == 1
		|| atoyish (argv[1]) > 4294967295)
		return (1);
	i = 0;
	str = ft_strncpy(malloc(sizeof(char) * (ft_strlen(argv[1]) + 1)), argv[1], ft_strlen(argv[1]));
	if (!str)
		return (1);
	if (*ft_remove_multiple_space(str) == 'a')
		return (1);
	output = ft_parse_dict(fd, str);
	write(1, output, ft_strlen(output));
	free(output);
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	**str;
	int		i;

	fd = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * argc);
	while (i < argc)
	{
		str[i] = (char *)malloc(sizeof(char) * (ft_strlen(argv[i]) + 1));
		ft_strcpy(str[i], argv[i]);
		i++;
	}
	if (fd == -1)
		return (1);
	if (argc == 2)
	{
		fd = ft_open_dict_file1();
		argc1(argv, fd);
	}
	else if (argc == 3)
		argc2(argv, fd, str);
	if (argc != 2 && argc != 3)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	if (argc1(argv, fd) == 1 || argc2(argv, fd, str) == 1 || fd == -1)
		write (1, "Dict Error\n", 11);
	free(str);
	close(fd);
	return (0);
}
