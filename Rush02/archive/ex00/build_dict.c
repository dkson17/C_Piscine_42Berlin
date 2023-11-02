#include "functions.h"
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>

void	store_value(char *buffer, int i, char *dict)
{
	int	index;

	index = 0;
	while (buffer[i] != '\n')
	{
		dict[index] = buffer[i];
		index++;
		i++;
	}
	dict[index] = '\0';
}

void	sort_value(char *buffer, int i, char *key_arr, char **dict[])
{
	int	key_int;

	key_int = ft_atoi(key_arr);
	if (key_int < 20)
	{
		// store buffer from i to before \n in dict[0][key_int]
		store_value(buffer, i, dict[0][key_int]);
	}
	if (key_int >= 20 && key_int < 100 && key_int % 10 == 0)
	{
		// store buffer from i to before \n in dict[1][key_int / 10]
	}
	if (key_int == 100)
		// store buffer from i to before \n in dic[2][0]
	if (key_int == 1000)
		// store buffer from i to before \n in dic[2][1]
	if (key_int == 1000000)
		// store buffer from i to before \n in dic[2][2]
	if (key_int == 1000000000)
	{
		// store buffer from i to before \n in dic[2][3]
	}
}

void	locate_value(char *buffer, int i, char ***dict)
{
	int		k_indx;
	char	key_arr[10];

	k_indx = 0;
	while (buffer[i] != ':' || buffer[i] == '\0')
	{
		if (buffer[i] < '0' || buffer[i] > '9')
		{
			break;
		}
		key_arr[k_indx] = buffer[i];
		i++;
		k_indx++;
	}
	key_arr[k_indx] = '\0';
	while (buffer[i] == ' ')
	{
		i++;
	}
	// this should leave us at beggining of value
	// from current i to line_end is value
	sort_value(buffer, i, key_arr, dict);
}

char	***build_dict(char *buffer)
{
	printf("build_dict init");
	int		i;
	int		a;
	int 	line_end;
	char	***dict;
	
	dict = (char***)malloc(3 * sizeof(char *));
	a = 0;
	i = 0;
	while (i < 3)
	{
		dict[i]	= (char**)malloc(20 * sizeof(char *));
		while (a < 20)
		{
			dict[i][a] = (char*)malloc(100 * sizeof(char));
			a++;
		}
		i++;
	}
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] < '0' && buffer[i] > '9')
		{
			line_end = i;
			while (buffer[line_end] != '\n')
				line_end++;
		}
		locate_value(buffer, i, dict);
		i = line_end;
	}
	return (dict);
}


int	main(void)
{
	char buffer[9096];

	int key = open("numbers.dict", O_RDONLY);

	read(key, buffer, sizeof(buffer));
	char ***result = build_dict(buffer);
	printf("txt: \n%s\n", buffer);

	printf("00 is:%s\n", result[0][0]);
	return (0);

}
