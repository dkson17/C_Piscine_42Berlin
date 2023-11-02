/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_version.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:32:56 by okrahl            #+#    #+#             */
/*   Updated: 2023/02/26 20:33:04 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

/*int **split (unsigned int num)
{
	int	num_final[4][3];
	int	counter;
	int	counter2;

	counter = 3;
	counter2 = 2;
	while (counter2 >= 0)
	{
		while (counter >= 0)
		{
		num_final[counter][counter2] = (num % 10);
		num = num / 10;
		counter2--;
		}
		counter2 = 2;
		counter--;
	}
	return (num_final);
}
int ft_atoi(char *str)
{
	int	i;
	int	min_counter;
	int	result;
	
	result = 0;
	i = 0;
	min_counter = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			min_counter++;
		}
		if ((str[i] > 48) && (str[i] < 57))
			result = ((result * 10) + (str[i] - '0'));
		
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			if ((min_counter % 2) == 1)
			{
				return (result * -1);
			}
		}	
		i++;
	}	
	return (result);
}*/

void print_hundred(int num, char l[3][20][50])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (l[0][num][i])
		write(1,&l[0][num][i++],1);
	while (l[2][0][j])
		write(1,&l[2][0][j++],1);
}

int print_tys(int num, char l[3][20][50])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (num == 1)
		return (0);
	else
	{
		while (l[1][num -2][i])
			write(1,&l[1][num - 2][i++],1);
		return (1);
	}
}

int zero_check (int *three_num)
{
	int 	i;
	int	zero_flag;

	i = 0;
	zero_flag = 0;
	while (i < 3)
	{
		if (three_num[i] != 0)
			zero_flag++;
		i++;
	}
	return (zero_flag);
}

void	print_num (int num_split[4][3], char l[3][20][50])
{
	int	counter;
	int	counter2;
	int	i;
	int	printed_tys;
	
	i = 0;
	counter = 0;
	counter2 = 0;
	while (counter < 4)
	{
		while (counter2 < 3)
		{	
			if (counter2 == 0 && num_split[counter][counter2] != 0)
			{
				print_hundred(num_split[counter][counter2], l);
				write(1," ",1);
			}	
			if (counter2 == 1 && num_split[counter][counter2] != 0)
			{
				printed_tys = print_tys(num_split[counter][counter2], l);
				write(1," ",1);
			}	
			if (num_split[counter][counter2] != 0)
				printed_tys = 1;
			if (counter2 == 2 && printed_tys == 1 && num_split[counter][counter2] != 0)
			{	
				while (l[0][(num_split[counter][counter2])][i])
					write(1,&l[0][(num_split[counter][counter2])][i++],1);
				i = 0;
				write(1," ",1);
			}		
			else if (counter2 == 2 && printed_tys == 0 && num_split[counter][counter2] != 0)
			{	
				while (l[0][(num_split[counter][counter2])][i])
					write(1,&l[0][(num_split[counter][counter2] + 10)][i++],1);
				i = 0;
				write(1," ",1);
			}	
			counter2++;
		}
		if (zero_check(num_split[counter]) != 0 && counter != 3)
			while (l[2][3-counter][i])
			{	
				write(1,&l[2][3-counter][i++],1);		
			}
		write(1," ",1);
		counter++;
		i = 0;
		counter2 = 0;
	}
}
/*
int main(void)
{
	int	num_split[4][3] = 
	{
		{0, 0, 1},
		{1, 2, 3}, 
		{6, 7, 5}, 
		{5, 7, 7}
	};

	char l[3][20][50] = {
	{
	{"zero"}, {"one"}, {"two"}, {"three"}, {"four"}, {"five"}, {"six"}, {"seven"}, {"eight"}, 			{"nine"}, {"ten"}, {"eleven"}, {"twelve"}, {"thirteen"}, {"fourteen"}, {"fifteen"}, {"sixteen"}, 	{"seventeen"}, {"eighteen"}, {"nineteen"}
	}, 
	{
	{"twenty"}, {"thirty"}, {"fourty"}, {"fifty"}, {"sixty"}, {"seventy"}, {"eighty"}, {"ninety"}
	},
	{
		{"hundred"}, {"thousand"}, {"million"}, {"billion"}
	},
	};	
	//num = ft_atoi(num_original);
	//num_split = **split (num);
	print_num(num_split, l);
}*/
