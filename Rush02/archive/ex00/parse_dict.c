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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX_DICT_SIZE 100 // Maximum number of key-value pairs in dictionary
#define MAX_LINE_LENGTH 1024 // Maximum length of a line in dictionary file
void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int	parse_dict(char **keys, char **values)
{
	int num_entries = 0; // Number of key-value pairs in dictionary
    // Open dictionary file
	int fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error: failed to open dictionary file");
		exit(1);
	}
    // Read dictionary file line by line
	char buffer[MAX_LINE_LENGTH];
	int bytes_read;
	while ((bytes_read = read(fd, buffer, MAX_LINE_LENGTH)) > 0)
	{
        // Remove trailing newline character
		if (buffer[bytes_read - 1] == '\n')
		{
			buffer[bytes_read - 1] = '\0';
			bytes_read--;
		}
        // Split line into key-value pair
		char *colon = strchr(buffer, ':');
		if (colon == NULL)
		{
			ft_putstr("Error: invalid key-value pair");
			exit(1);
		}
		*colon = '\0';
		keys[num_entries] = strdup(buffer);
		values[num_entries] = strdup(colon + 1);
		num_entries++;
		if (num_entries == MAX_DICT_SIZE)
		{
			ft_putstr("Error: dictionary exceeds maximum size");
			exit(1);
		}
	}
	if (bytes_read == -1)
	{
		ft_putstr("Error: failed to read dictionary file");
		exit(1);
	}
    // Close dictionary file
	close(fd);
/*    // Print parsed dictionary
    printf("Parsed dictionary:\n");
    for (int i = 0; i < num_entries; i++) {
        printf("%s: %s\n", keys[i], values[i]);
    }
    
    // Free memory
    for (int i = 0; i < num_entries; i++) {
        free(keys[i]);
        free(values[i]);
    }*/
	return 0;
}

